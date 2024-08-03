void __fastcall BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callBack = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)callBack, v5, v6);
}


void __fastcall BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  struct System_Action_o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    *(_QWORD *)&callBack->fields.extra_arg);
}