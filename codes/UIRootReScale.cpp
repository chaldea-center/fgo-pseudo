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
  int32_t height; // w0
  __int64 v4; // x1
  ManagerConfig_c *v5; // x8
  struct ManagerConfig_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0

  if ( (byte_5937C14 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_5937C14 = 1;
  }
  this->fields.preWidth = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v5 = ManagerConfig_TypeInfo;
  this->fields.preHeight = height;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v4);
    v5 = ManagerConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->WIDTH >= 1 && static_fields->HEIGHT >= 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
    CommonFunction__ReScaleUiFunc((UIRoot_o *)Component_object, 0);
  }
}


// attributes: thunk
void UIRootReScale__Start(UIRootReScale_o *this, const MethodInfo *method)
{
  UIRootReScale__ReScale(this, method);
}