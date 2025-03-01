#include "Scrollbars.h"

#include "ui_legacy/theme/Style.h"

namespace task {
namespace style {

void Scrollbars::AddStyles() {

	SetPrefix( "Scrollbar" );

	// vertical
	AddStyle(
		"Vertical", SH() {
			s->SetColorTexture( ui_legacy::A_TEXTURE_BACK, types::Color( 0.0f, 0.0f, 0.0f, 1.0f ) );
		}
	);
	AddStyle(
		"VerticalThick", { "Vertical" }, SH() {
			s->Set( ui_legacy::A_WIDTH, 18 );

			if ( s->Is( ui_legacy::M_ACTIVE ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE_TOP, resource::PCX_ICONS, 157, 4, 174, 21 );
				s->SetTexture( ui_legacy::A_TEXTURE_CENTER, resource::PCX_ICONS, 104, 101, 121, 118, ui_legacy::LT_CONTRAST, 2.0f );
				s->SetTexture( ui_legacy::A_TEXTURE_BOTTOM, resource::PCX_ICONS, 157, 29, 174, 46 );
			}
			else if ( s->Is( ui_legacy::M_HOVER ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE_TOP, resource::PCX_ICONS, 132, 4, 149, 21 );
				s->SetTexture( ui_legacy::A_TEXTURE_CENTER, resource::PCX_ICONS, 104, 101, 121, 118, ui_legacy::LT_CONTRAST, 1.5f );
				s->SetTexture( ui_legacy::A_TEXTURE_BOTTOM, resource::PCX_ICONS, 132, 29, 149, 46 );
			}
			else {
				s->SetTexture( ui_legacy::A_TEXTURE_TOP, resource::PCX_ICONS, 107, 4, 124, 21 );
				s->SetTexture( ui_legacy::A_TEXTURE_CENTER, resource::PCX_ICONS, 104, 101, 121, 118 );
				s->SetTexture( ui_legacy::A_TEXTURE_BOTTOM, resource::PCX_ICONS, 107, 29, 124, 46 );
			}
		}
	);

	// horizontal inline
	AddStyle(
		"HorizontalArrow", SH() {
			s->Set( ui_legacy::A_WIDTH, 12 );
			s->Set( ui_legacy::A_HEIGHT, 42 );
		}
	);
	AddStyle(
		"HorizontalLeftArrow", { "HorizontalArrow" }, SH() {
			if ( s->Is( ui_legacy::M_ACTIVE ) || s->Is( ui_legacy::M_HIGHLIGHT ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 423, 153, 434, 194 );
			}
			else if ( s->Is( ui_legacy::M_HOVER ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 410, 153, 421, 194 );
			}
			else {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 397, 153, 408, 194 );
			}
			s->Set( ui_legacy::A_ALIGN, ui_legacy::ALIGN_LEFT | ui_legacy::ALIGN_VCENTER );
			s->Set( ui_legacy::A_LEFT, 3 );
		}
	);
	AddStyle(
		"HorizontalRightArrow", { "HorizontalArrow" }, SH() {
			if ( s->Is( ui_legacy::M_ACTIVE ) || s->Is( ui_legacy::M_HIGHLIGHT ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 423, 196, 434, 237 );
			}
			else if ( s->Is( ui_legacy::M_HOVER ) ) {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 410, 196, 421, 237 );
			}
			else {
				s->SetTexture( ui_legacy::A_TEXTURE, resource::PCX_INTERFACE, 397, 196, 408, 237 );
			}
			s->Set( ui_legacy::A_ALIGN, ui_legacy::ALIGN_RIGHT | ui_legacy::ALIGN_VCENTER );
			s->Set( ui_legacy::A_RIGHT, 3 );
		}
	);

}

}
}
