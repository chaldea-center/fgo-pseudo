void PanelComponentBase___ctor(PanelComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PanelComponentBase__ClickPanel(PanelComponentBase_o *this, const MethodInfo *method)
{
  System_Action_o *OnClickPanel_k__BackingField; // x0

  OnClickPanel_k__BackingField = this->fields._OnClickPanel_k__BackingField;
  if ( OnClickPanel_k__BackingField )
    ActionExtensions__Call(OnClickPanel_k__BackingField, 0);
}


void PanelComponentBase__Initialize(PanelComponentBase_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickPanel_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void PanelComponentBase__SetClosedPanelVisible(PanelComponentBase_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_59329AF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59329AF = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0, 0) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0);
  }
}


void PanelComponentBase__SetTheCallBackWhenClickPanel(
        PanelComponentBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickPanel_k__BackingField = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_Action_o *PanelComponentBase__get_OnClickPanel(PanelComponentBase_o *this, const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void PanelComponentBase__set_OnClickPanel(PanelComponentBase_o *this, System_Action_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickPanel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}