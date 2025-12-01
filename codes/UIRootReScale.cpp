void UIRootReScale___ctor(UIRootReScale_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRootReScale__LateUpdate(UIRootReScale_o *this, const MethodInfo *method)
{
  int32_t preWidth; // w20
  const MethodInfo *v4; // x1
  int32_t preHeight; // w20

  preWidth = this->fields.preWidth;
  if ( preWidth != UnityEngine_Screen__get_width(0)
    || (preHeight = this->fields.preHeight, preHeight != UnityEngine_Screen__get_height(0)) )
  {
    UIRootReScale__ReScale(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIRootReScale__OnApplicationPause(UIRootReScale_o *this, bool pauseStatus, const MethodInfo *method)
{
  if ( !pauseStatus )
    UIRootReScale__ReScale(this, (const MethodInfo *)pauseStatus);
}


void UIRootReScale__ReScale(UIRootReScale_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC69A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC69A9 = 1;
  }
  this->fields.preWidth = UnityEngine_Screen__get_width(0);
  this->fields.preHeight = UnityEngine_Screen__get_height(0);
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->WIDTH >= 1 && static_fields->HEIGHT >= 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIRoot___);
    CommonFunction__ReScaleUiFunc((UIRoot_o *)Component_object, 0);
  }
}


// attributes: thunk
void UIRootReScale__Start(UIRootReScale_o *this, const MethodInfo *method)
{
  UIRootReScale__ReScale(this, method);
}