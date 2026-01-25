void MainMenuBarButton___ctor(MainMenuBarButton_o *this, const MethodInfo *method)
{
  this->fields.mode = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool MainMenuBarButton__IsEnabled(MainMenuBarButton_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CEFDCF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDCF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
    return 0;
  if ( !Component_object )
    sub_1C7BD40(v4, v5);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarButton__SetMode(MainMenuBarButton_o *this, int32_t mode, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x20
  float v10; // s3
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2

  if ( (byte_4CEFDCE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButtonScale___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDCE = 1;
  }
  if ( this->fields.mode != mode )
  {
    this->fields.mode = mode;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v6 )
    {
      if ( !Component_object )
        goto LABEL_18;
      v8 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)Component_object,
             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v9 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)Component_object,
             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButtonScale___);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, mode == 2, 0);
      if ( mode == 3 )
      {
        if ( !v8 )
          goto LABEL_18;
        v10 = 1.0;
        v11 = 0.5;
      }
      else
      {
        if ( mode != 2 )
          goto LABEL_16;
        if ( !v8 )
          goto LABEL_18;
        v11 = 1.0;
        v10 = 1.0;
      }
      v12 = v11;
      v13 = v11;
      UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&v11, 0);
LABEL_16:
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, mode != 3, 0);
        return;
      }
LABEL_18:
      sub_1C7BD40(v6, v7);
    }
  }
}