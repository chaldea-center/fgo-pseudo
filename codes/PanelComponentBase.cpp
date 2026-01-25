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
  this->fields._OnClickPanel_k__BackingField = 0;
  sub_1C7BA8C(&this->fields._OnClickPanel_k__BackingField, 0);
}


void PanelComponentBase__SetClosedPanelVisible(PanelComponentBase_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CE8E20 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8E20 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0, 0) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0);
  }
}


void PanelComponentBase__SetTheCallBackWhenClickPanel(
        PanelComponentBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields._OnClickPanel_k__BackingField = callback;
  sub_1C7BA8C(&this->fields._OnClickPanel_k__BackingField, callback);
}


System_Action_o *PanelComponentBase__get_OnClickPanel(PanelComponentBase_o *this, const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void PanelComponentBase__set_OnClickPanel(PanelComponentBase_o *this, System_Action_o *value, const MethodInfo *method)
{
  this->fields._OnClickPanel_k__BackingField = value;
  sub_1C7BA8C(&this->fields._OnClickPanel_k__BackingField, value);
}