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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.parentComponent,
    (System_Int32_array **)parentComponent,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointActive(
        WarBoardBreakPointEffectComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *parentComponent; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarBoardBreakPointComponent_o *v9; // x0

  if ( (byte_42E76E4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E76E4 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v9 = this->fields.parentComponent;
    if ( !v9 )
      sub_B5D69C(0LL, v7);
    WarBoardBreakPointComponent__SetActive(v9, active, 0, v8);
  }
}


void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointFadeIn(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v8; // x1
  WarBoardBreakPointComponent_o *v9; // x0

  if ( (byte_42E76E3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E76E3 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v9 = this->fields.parentComponent;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    WarBoardBreakPointComponent__SetBreakPointFadeIn(v9, duration, v8);
  }
}


void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointFadeOut(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v8; // x1
  WarBoardBreakPointComponent_o *v9; // x0

  if ( (byte_42E76E2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E76E2 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v9 = this->fields.parentComponent;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    WarBoardBreakPointComponent__SetBreakPointFadeOut(v9, duration, v8);
  }
}