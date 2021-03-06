#include "Control.h"

namespace loveprint
{
namespace jade
{

ObjectPropertyBody(Control, VerticalAlignment, VerticalAlignment);
ObjectPropertyBody(Control, HorizontalAlignment, HorizontalAlignment);
ObjectPropertyBody(Control, Thickness, Margin);

void Control::draw(graphics::Graphics & g) const
{
	g.setColor(getBackground());
	g.rectangle(graphics::DRAW_FILL, 0, 0, getWidth(), getHeight());
}

Control::Control(JadeElement * parent)
	: _parent(parent)
{
}

Control::~Control()
{
}

} // jade
} // loveprint