void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  UnityEngine_GameObject_o *v7; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E22A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E22A = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v7 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val, v4, v5, v6);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    UnityEngine_GameObject__SendMessage_69440752(v7, sendmessage, v9, 0LL);
  }
}