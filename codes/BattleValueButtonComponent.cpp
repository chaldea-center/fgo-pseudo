void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  UnityEngine_GameObject_o *v8; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int32_t val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0BCD3 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0BCD3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v8 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val, v5, v6, v7);
    if ( !v8 )
      sub_1B68930(v10, v11);
    UnityEngine_GameObject__SendMessage_69153188(v8, sendmessage, v10, 0LL);
  }
}