void WarBoardBreakPointEffectComponent___ctor(WarBoardBreakPointEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBreakPointEffectComponent__Initialize(
        WarBoardBreakPointEffectComponent_o *this,
        WarBoardBreakPointComponent_o *parentComponent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.parentComponent = parentComponent;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.parentComponent,
    (int32_t)parentComponent,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBreakPointEffectComponent__SetBreakPointActive(
        WarBoardBreakPointEffectComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  WarBoardBreakPointComponent_o *v8; // x0

  if ( (byte_4D29FD5 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29FD5 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v8 = this->fields.parentComponent;
    if ( !v8 )
      sub_1C942F0(0, v6);
    WarBoardBreakPointComponent__SetActive(v8, active, 0, v7);
  }
}


void WarBoardBreakPointEffectComponent__SetBreakPointFadeIn(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v6; // x1
  WarBoardBreakPointComponent_o *v7; // x0

  if ( (byte_4D29FD4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29FD4 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_1C942F0(0, v6);
    WarBoardBreakPointComponent__SetBreakPointFadeIn(v7, duration, v6);
  }
}


void WarBoardBreakPointEffectComponent__SetBreakPointFadeOut(
        WarBoardBreakPointEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x20
  const MethodInfo *v6; // x1
  WarBoardBreakPointComponent_o *v7; // x0

  if ( (byte_4D29FD3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29FD3 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0, 0) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_1C942F0(0, v6);
    WarBoardBreakPointComponent__SetBreakPointFadeOut(v7, duration, v6);
  }
}