void BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callBack = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)callBack, v5, v6, v7, v8, v9, v10);
}


void BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  struct System_Action_o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    callBack->fields.method);
}