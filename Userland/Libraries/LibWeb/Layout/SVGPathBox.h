/*
 * Copyright (c) 2020, Matthew Olsson <mattco@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Layout/SVGGraphicsBox.h>
#include <LibWeb/SVG/SVGPathElement.h>

namespace Web::Layout {

class SVGPathBox final : public SVGGraphicsBox {
public:
    SVGPathBox(DOM::Document&, SVG::SVGPathElement&, NonnullRefPtr<CSS::StyleProperties>);
    virtual ~SVGPathBox() override = default;

    SVG::SVGPathElement& dom_node() { return verify_cast<SVG::SVGPathElement>(SVGGraphicsBox::dom_node()); }

    virtual void paint(PaintContext& context, PaintPhase phase) override;
};

}
