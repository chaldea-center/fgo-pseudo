void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v7; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1942D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1942D = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v7 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val);
    if ( !v7 )
      sub_1BCAA3C(v9, v10);
    UnityEngine_GameObject__SendMessage_70135616(v7, sendmessage, v9, 0LL);
  }
}