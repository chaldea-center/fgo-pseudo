void DebugAttackCardSelectCellComponent___ctor(DebugAttackCardSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugAttackCardSelectCellComponent__Set(
        DebugAttackCardSelectCellComponent_o *this,
        int32_t idx,
        System_String_o *labelName,
        System_Action_int__string__o *callback,
        const MethodInfo *method)
{
  System_Action_T1__T2__T3__T4__o *v9; // x23
  const MethodInfo *v10; // x6
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC89C4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__string__string__int__TypeInfo);
    sub_1C713B0(&Method_DebugAttackCardSelectCellComponent_TapCallback__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC89C4 = 1;
  }
  v9 = (System_Action_T1__T2__T3__T4__o *)sub_1C715FC(System_Action_int__string__string__int__TypeInfo);
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
    v10);
  this->fields.actionCallback = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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