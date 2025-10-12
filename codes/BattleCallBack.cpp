void BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callBack = callBack;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)callBack, v5, v6);
}


void BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  struct System_Action_o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    callBack->fields.method);
}