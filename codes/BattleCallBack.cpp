void __fastcall BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callBack = callBack;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)callBack, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  System_Action_o *callBack; // x0

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B0D97C(0LL);
  System_Action__Invoke(callBack, 0LL);
}