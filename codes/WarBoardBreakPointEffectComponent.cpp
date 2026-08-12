void WarBoardBreakPointEffectComponent___ctor(WarBoardBreakPointEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBreakPointEffectComponent__Initialize(
        WarBoardBreakPointEffectComponent_o *this,
        WarBoardBreakPointComponent_o *parentComponent,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.parentComponent = parentComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.parentComponent,
    (int32_t)parentComponent,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBreakPointEffectComponent__SetBreakPointActive(
        WarBoardBreakPointEffectComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  WarBoardBreakPointComponent_o *v8; // x0

  if ( (byte_596DEF2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEF2 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active, method);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v8 = this->fields.parentComponent;
    if ( !v8 )
      sub_2213CDC(0, v6);
    WarBoardBreakPointComponent__SetActive(v8, active, 0, v7);
  }
}


void WarBoardBreakPointEffectComponent__SetBreakPointFadeIn(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v7; // x1
  WarBoardBreakPointComponent_o *v8; // x0

  if ( (byte_596DEF1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEF1 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v8 = this->fields.parentComponent;
    if ( !v8 )
      sub_2213CDC(0, v7);
    WarBoardBreakPointComponent__SetBreakPointFadeIn(v8, duration, v7);
  }
}


void WarBoardBreakPointEffectComponent__SetBreakPointFadeOut(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v7; // x1
  WarBoardBreakPointComponent_o *v8; // x0

  if ( (byte_596DEF0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEF0 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v8 = this->fields.parentComponent;
    if ( !v8 )
      sub_2213CDC(0, v7);
    WarBoardBreakPointComponent__SetBreakPointFadeOut(v8, duration, v7);
  }
}