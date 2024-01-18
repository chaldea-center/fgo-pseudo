void __fastcall WarBoardBreakPointEffectComponent___ctor(
        WarBoardBreakPointEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBreakPointEffectComponent__Initialize(
        WarBoardBreakPointEffectComponent_o *this,
        WarBoardBreakPointComponent_o *parentComponent,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.parentComponent = parentComponent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.parentComponent,
    (System_Int32_array **)parentComponent,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointActive(
        WarBoardBreakPointEffectComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  WarBoardBreakPointComponent_o *v8; // x0

  if ( (byte_41865E2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, active);
    byte_41865E2 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v8 = this->fields.parentComponent;
    if ( !v8 )
      sub_B2C434(0LL, v6);
    WarBoardBreakPointComponent__SetActive(v8, active, 0, v7);
  }
}


void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointFadeIn(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v6; // x1
  WarBoardBreakPointComponent_o *v7; // x0

  if ( (byte_41865E1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865E1 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    WarBoardBreakPointComponent__SetBreakPointFadeIn(v7, duration, v6);
  }
}


void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointFadeOut(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v6; // x1
  WarBoardBreakPointComponent_o *v7; // x0

  if ( (byte_41865E0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865E0 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    WarBoardBreakPointComponent__SetBreakPointFadeOut(v7, duration, v6);
  }
}