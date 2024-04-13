void __fastcall BattleWindowOuterClickManagerComponent___ctor(
        BattleWindowOuterClickManagerComponent_o *this,
        const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
        BattleWindowOuterClickManagerComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *outerPanel; // x21
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleWindowOuterClickComponent_o *v14; // x0

  if ( (byte_42E7DFE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    byte_42E7DFE = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v14 = this->fields.outerPanel;
    if ( !v14 )
      sub_B5D69C(0LL, v7);
    v14->fields.clickCallBack = callBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v14->fields.clickCallBack,
      (System_Int32_array **)callBack,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}