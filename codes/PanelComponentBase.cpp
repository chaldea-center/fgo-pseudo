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
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields._OnClickPanel_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PanelComponentBase__SetClosedPanelVisible(
        PanelComponentBase_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A00557 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, value);
    byte_4A00557 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v6 = this->fields.closedPanel;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, value, 0LL);
  }
}


void __fastcall PanelComponentBase__SetTheCallBackWhenClickPanel(
        PanelComponentBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickPanel_k__BackingField = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)callback,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._OnClickPanel_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}