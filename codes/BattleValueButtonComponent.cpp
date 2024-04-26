void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  UnityEngine_GameObject_o *v5; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t val; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435124A & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435124A = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v5 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val, v4);
    if ( !v5 )
      sub_B7076C(v7, v8);
    UnityEngine_GameObject__SendMessage_41092628(v5, sendmessage, v7, 0LL);
  }
}