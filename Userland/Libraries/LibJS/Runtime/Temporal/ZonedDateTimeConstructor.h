/*
 * Copyright (c) 2021, Linus Groh <linusg@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/NativeFunction.h>

namespace JS::Temporal {

class ZonedDateTimeConstructor final : public NativeFunction {
    JS_OBJECT(ZonedDateTimeConstructor, NativeFunction);

public:
    explicit ZonedDateTimeConstructor(GlobalObject&);
    virtual void initialize(GlobalObject&) override;
    virtual ~ZonedDateTimeConstructor() override = default;

    virtual Value call() override;
    virtual Value construct(FunctionObject& new_target) override;

private:
    virtual bool has_constructor() const override { return true; }
};

}
