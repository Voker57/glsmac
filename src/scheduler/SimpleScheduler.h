#pragma once

#include <vector>

#include "Scheduler.h"

#include "base/Task.h"
#include "util/Timer.h"

using namespace base;

namespace scheduler {

class SimpleScheduler : public Scheduler {
public:
	SimpleScheduler();
	virtual ~SimpleScheduler();
	void Start();
	void Stop();
	void Iterate();
	void AddTask( Task *task );
	void RemoveTask( Task *task );
protected:
#if DEBUG
	util::Timer m_timer;
#endif
	
	std::vector<Task *> m_tasks = {};
	std::vector<Task *> m_tasks_toadd = {};
	std::vector<Task *> m_tasks_toremove = {};
	bool m_active = false;
	bool m_iterating = false;
};

} /* namespace scheduler */
