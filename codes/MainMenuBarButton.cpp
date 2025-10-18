void MainMenuBarButton___ctor(MainMenuBarButton_o *this, const MethodInfo *method)
{
  this->fields.mode = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool MainMenuBarButton__IsEnabled(MainMenuBarButton_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C44762 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44762 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
    return 0;
  if ( !Component_object )
    sub_1C372B4(v4);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarButton__SetMode(MainMenuBarButton_o *this, int32_t mode, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x22
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  float v9; // s3
  float v10; // s0 OVERLAPPED
  float v11; // s1
  float v12; // s2

  if ( (byte_4C44761 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIButtonScale___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44761 = 1;
  }
  if ( this->fields.mode != mode )
  {
    this->fields.mode = mode;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v6 )
    {
      if ( !Component_object )
        goto LABEL_18;
      v7 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)Component_object,
             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v8 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)Component_object,
             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButtonScale___);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, mode == 2, 0);
      if ( mode == 3 )
      {
        if ( !v7 )
          goto LABEL_18;
        v9 = 1.0;
        v10 = 0.5;
      }
      else
      {
        if ( mode != 2 )
          goto LABEL_16;
        if ( !v7 )
          goto LABEL_18;
        v10 = 1.0;
        v9 = 1.0;
      }
      v11 = v10;
      v12 = v10;
      UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&v10, 0);
LABEL_16:
      if ( v8 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, mode != 3, 0);
        return;
      }
LABEL_18:
      sub_1C372B4(v6);
    }
  }
}