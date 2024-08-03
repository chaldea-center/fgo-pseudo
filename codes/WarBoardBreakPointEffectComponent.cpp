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
  int32_t v3; // w3

  this->fields.parentComponent = parentComponent;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.parentComponent,
    (int32_t)parentComponent,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointEffectComponent__SetBreakPointActive(
        WarBoardBreakPointEffectComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parentComponent; // x21
  const MethodInfo *v6; // x3
  WarBoardBreakPointComponent_o *v7; // x0

  if ( (byte_49F9F13 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, active);
    byte_49F9F13 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_1B64324(0LL);
    WarBoardBreakPointComponent__SetActive(v7, active, 0, v6);
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

  if ( (byte_49F9F12 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F12 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_1B64324(0LL);
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

  if ( (byte_49F9F11 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F11 = 1;
  }
  parentComponent = (UnityEngine_Object_o *)this->fields.parentComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parentComponent, 0LL, 0LL) )
  {
    v7 = this->fields.parentComponent;
    if ( !v7 )
      sub_1B64324(0LL);
    WarBoardBreakPointComponent__SetBreakPointFadeOut(v7, duration, v6);
  }
}