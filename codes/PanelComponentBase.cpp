void __fastcall PanelComponentBase___ctor(PanelComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PanelComponentBase__ClickPanel(PanelComponentBase_o *this, const MethodInfo *method)
{
  System_Action_o *OnClickPanel_k__BackingField; // x0

  OnClickPanel_k__BackingField = this->fields._OnClickPanel_k__BackingField;
  if ( OnClickPanel_k__BackingField )
    ActionExtensions__Call(OnClickPanel_k__BackingField, 0LL);
}


void __fastcall PanelComponentBase__Initialize(PanelComponentBase_o *this, const MethodInfo *method)
{
  this->fields._OnClickPanel_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._OnClickPanel_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PanelComponentBase__SetClosedPanelVisible(
        PanelComponentBase_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4185205 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_4185205 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall PanelComponentBase__SetTheCallBackWhenClickPanel(
        PanelComponentBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields._OnClickPanel_k__BackingField = callback;
  sub_B2C2F8(&this->fields._OnClickPanel_k__BackingField, callback);
}


System_Action_o *__fastcall PanelComponentBase__get_OnClickPanel(PanelComponentBase_o *this, const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void __fastcall PanelComponentBase__set_OnClickPanel(
        PanelComponentBase_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  this->fields._OnClickPanel_k__BackingField = value;
  sub_B2C2F8(&this->fields._OnClickPanel_k__BackingField, value);
}