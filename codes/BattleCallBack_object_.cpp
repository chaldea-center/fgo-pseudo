void __fastcall BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_3240C78 *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.argument = argument;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)argument, v7, v8);
  this->fields.callBack = callBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callBack, (int32_t)callBack, v9, v10);
}


void __fastcall BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_3240CBC *method)
{
  struct System_Action_T__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1BCB254(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    this->fields.argument,
    *(_QWORD *)&callBack->fields.extra_arg);
}