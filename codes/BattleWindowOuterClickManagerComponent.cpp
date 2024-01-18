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
  UnityEngine_Object_o *outerPanel; // x21
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleWindowOuterClickComponent_o *v13; // x0

  if ( (byte_4187577 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callBack);
    byte_4187577 = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v13 = this->fields.outerPanel;
    if ( !v13 )
      sub_B2C434(0LL, v6);
    v13->fields.clickCallBack = callBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->fields.clickCallBack,
      (System_Int32_array **)callBack,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}