void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v5; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v7; // x0
  int32_t val; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9007 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9007 = 1;
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
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val);
    if ( !v5 )
      sub_B170D4();
    UnityEngine_GameObject__SendMessage_40693300(v5, sendmessage, v7, 0LL);
  }
}