void DebugInputChangeServantShadowComponent___ctor(
        DebugInputChangeServantShadowComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isFirstOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool DebugInputChangeServantShadowComponent__get_IsStatusAndCardHidden(
        DebugInputChangeServantShadowComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *statusAndCardToggle; // x0

  statusAndCardToggle = this->fields.statusAndCardToggle;
  if ( !statusAndCardToggle )
    sub_21FFECC(0, method);
  return UIToggle__get_value(statusAndCardToggle, 0);
}


bool DebugInputChangeServantShadowComponent__get_IsTransparent(
        DebugInputChangeServantShadowComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *transparentToggle; // x0

  transparentToggle = this->fields.transparentToggle;
  if ( !transparentToggle )
    sub_21FFECC(0, method);
  return UIToggle__get_value(transparentToggle, 0);
}