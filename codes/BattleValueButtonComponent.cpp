void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v4; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t val; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AFC73 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC73 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v4 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val);
    if ( !v4 )
      sub_B52A5C(v6, v7);
    UnityEngine_GameObject__SendMessage_41490956(v4, sendmessage, v6, 0LL);
  }
}