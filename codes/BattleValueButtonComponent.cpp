void __fastcall BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v9; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t val; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7DD6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7DD6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v9 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val);
    if ( !v9 )
      sub_B5D69C(v11, v12);
    UnityEngine_GameObject__SendMessage_41595104(v9, sendmessage, v11, 0LL);
  }
}