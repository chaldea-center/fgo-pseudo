void MainMenuBarButton___ctor(MainMenuBarButton_o *this, const MethodInfo *method)
{
  this->fields.mode = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool MainMenuBarButton__IsEnabled(MainMenuBarButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_5939E9B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939E9B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
    return 0;
  if ( !Component_object )
    sub_21FFECC(v5, v6);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarButton__SetMode(MainMenuBarButton_o *this, int32_t mode, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x20
  float v11; // s0 OVERLAPPED
  float v12; // s3
  float v13; // s1
  float v14; // s2

  if ( (byte_5939E9A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButtonScale___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939E9A = 1;
  }
  if ( this->fields.mode != mode )
  {
    this->fields.mode = mode;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      if ( !Component_object )
        goto LABEL_18;
      v9 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)Component_object,
             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v10 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)Component_object,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButtonScale___);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, mode == 2, 0);
      if ( mode == 3 )
      {
        if ( !v9 )
          goto LABEL_18;
        v12 = 1.0;
        v11 = 0.5;
      }
      else
      {
        if ( mode != 2 )
          goto LABEL_16;
        if ( !v9 )
          goto LABEL_18;
        v11 = 1.0;
        v12 = 1.0;
      }
      v13 = v11;
      v14 = v11;
      UIWidget__set_color((UIWidget_o *)v9, *(UnityEngine_Color_o *)&v11, 0);
LABEL_16:
      if ( v10 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, mode != 3, 0);
        return;
      }
LABEL_18:
      sub_21FFECC(v7, v8);
    }
  }
}