void BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callBack = callBack;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)callBack, v5, v6, v7, v8, v9, v10);
}


void BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  struct System_Action_o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    callBack->fields.method);
}