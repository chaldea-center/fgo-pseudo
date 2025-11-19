void DebugAttackCardSelectCellComponent___ctor(DebugAttackCardSelectCellComponent_o *this, const MethodInfo *method)
{
  DebugBuffSelectCellComponent___ctor((DebugBuffSelectCellComponent_o *)this, 0);
}


void DebugAttackCardSelectCellComponent__Set(
        DebugAttackCardSelectCellComponent_o *this,
        int32_t idx,
        System_String_o *labelName,
        System_Action_int__string__o *callback,
        const MethodInfo *method)
{
  System_Action_T1__T2__T3__T4__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB77C7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__string__int__TypeInfo);
    sub_1C6BA08(&Method_DebugAttackCardSelectCellComponent_TapCallback__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB77C7 = 1;
  }
  v9 = (System_Action_T1__T2__T3__T4__o *)sub_1C6BC54(System_Action_int__string__string__int__TypeInfo);
  System_Action_int__object__object__int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_DebugAttackCardSelectCellComponent_TapCallback__,
    0);
  DebugBuffSelectCellComponent__Set(
    (DebugBuffSelectCellComponent_o *)this,
    idx,
    labelName,
    (System_String_o *)StringLiteral_1/*""*/,
    0,
    (System_Action_int__string__string__int__o *)v9,
    0);
  this->fields.actionCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, v10, v11);
}


void DebugAttackCardSelectCellComponent__TapCallback(
        DebugAttackCardSelectCellComponent_o *this,
        int32_t idx,
        System_String_o *name,
        System_String_o *detail,
        int32_t buffType,
        const MethodInfo *method)
{
  struct System_Action_int__string__o *actionCallback; // x8

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
    ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      idx,
      name,
      actionCallback->fields.method);
}