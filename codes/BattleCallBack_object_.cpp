void BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_32FE2C0 *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  this->fields.argument = argument;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)argument, v7, v8);
  this->fields.callBack = callBack;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callBack, (int32_t)callBack, v9, v10);
}


void BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_32FE304 *method)
{
  struct System_Action_T__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    this->fields.argument,
    callBack->fields.method);
}