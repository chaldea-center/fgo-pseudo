void PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A861 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A861 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_596A860 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A860 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_2213CDC(0, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596A85F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PopupMessageDialog_EndClose__);
    sub_2213A60(&Method_PopupMessageDialog_OnClickClose__);
    byte_596A85F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PopupMessageDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.isButtonEnable = 0;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void PopupMessageDialog__Open(PopupMessageDialog_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *v7; // x1
  UnityEngine_Vector2_o printedSize; // kr30_8
  float v9; // s0
  int32_t v10; // w1
  float v11; // s0
  int32_t v12; // w1
  __int64 v13; // x2
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v15; // x2
  float x; // s11
  ManagerConfig_c *v17; // x0
  float v18; // s10
  float v19; // s14
  float v20; // s15
  float v21; // s0
  int v22; // w8
  float v23; // s0
  float v24; // s0
  float v25; // s14
  float v26; // s0
  int v27; // w8
  float y; // s13
  float v29; // s0
  float v30; // s0
  float v31; // s10
  int32_t v32; // w1
  int32_t v33; // w1
  System_Action_c *v34; // x0
  System_Action_o *v35; // x20
  float z; // s2
  UnityEngine_Vector3_o v37; // 0:kr00_12.12
  UnityEngine_Vector3_o v38; // 0:kr14_12.12
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A85E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_PopupMessageDialog_EndOpen__);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A85E = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_68;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = baseWindow;
  if ( this->fields.isInit )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_68;
  }
  else
  {
    this->fields.isInit = 1;
    if ( !baseWindow )
      goto LABEL_68;
    baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_68;
    this->fields.windowOffsetSize = (struct UnityEngine_Vector2_o)vcvt_f32_s32(
                                                                    vsub_s32(
                                                                      (int32x2_t)v6[7].klass,
                                                                      (int32x2_t)baseWindow[7].klass)).n64_u64[0];
  }
  UIWidget__set_width((UIWidget_o *)baseWindow, 984, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  UIWidget__set_height((UIWidget_o *)baseWindow, 1024, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  v7 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v7, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0);
  if ( !v6 )
    goto LABEL_68;
  v9 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v9;
  UIWidget__set_width((UIWidget_o *)v6, v10, 0);
  v11 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)v11;
  UIWidget__set_height((UIWidget_o *)v6, v12, 0);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, message, v13);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.dialogCamera;
  if ( !baseWindow )
    goto LABEL_68;
  v39.fields.z = 0.0;
  static_fields = UICamera_TypeInfo->static_fields;
  v39.fields.x = static_fields->lastTouchPosition.fields.x;
  v39.fields.y = static_fields->lastTouchPosition.fields.y;
  v37 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)baseWindow, v39, 0);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0)) == 0
    || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)baseWindow,
                                                   0)) == 0 )
  {
LABEL_68:
    sub_2213CDC(baseWindow, message);
  }
  v38 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v37, 0);
  x = v38.fields.x;
  v17 = ManagerConfig_TypeInfo;
  v18 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  v19 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, message, v15);
    v17 = ManagerConfig_TypeInfo;
  }
  v20 = v18 * 0.5;
  v21 = (float)(v17->static_fields->WIDTH / 2);
  v22 = *(&v17->_2.cctor_finished + 1);
  if ( v38.fields.x < (float)(v19 - v21) )
  {
    if ( v22 )
    {
      x = v19 - v21;
      goto LABEL_42;
    }
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v17 = ManagerConfig_TypeInfo;
    v24 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
LABEL_41:
    x = v19 - v24;
    goto LABEL_42;
  }
  if ( !v22 )
  {
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v17 = ManagerConfig_TypeInfo;
    v21 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v23 = v21 - v19;
  if ( v38.fields.x > v23 )
  {
    if ( *(&v17->_2.cctor_finished + 1) )
    {
      x = v23;
      goto LABEL_42;
    }
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v17 = ManagerConfig_TypeInfo;
    v24 = v19;
    v19 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    goto LABEL_41;
  }
LABEL_42:
  v25 = v20 + 20.0;
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v17 = ManagerConfig_TypeInfo;
  }
  v26 = (float)(v17->static_fields->HEIGHT / 2);
  v27 = *(&v17->_2.cctor_finished + 1);
  y = v25 - v26;
  if ( v38.fields.y < (float)(v25 - v26) )
  {
    if ( v27 )
      goto LABEL_53;
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v29 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    goto LABEL_52;
  }
  if ( !v27 )
  {
    j_il2cpp_runtime_class_init_0(v17, message, v15);
    v17 = ManagerConfig_TypeInfo;
    v26 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  v30 = v26 - v25;
  y = v38.fields.y;
  if ( v38.fields.y > v30 )
  {
    y = v30;
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, message, v15);
      v29 = v20 + 20.0;
      v25 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
LABEL_52:
      y = v25 - v29;
    }
  }
LABEL_53:
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_68;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_68;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = v38.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v40, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0);
  if ( !baseWindow )
    goto LABEL_68;
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseWindow, 0).fields.z;
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  v31 = z;
  v32 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  UIWidget__set_width((UIWidget_o *)baseWindow, v32, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  v33 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
  UIWidget__set_height((UIWidget_o *)baseWindow, v33, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_68;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0);
  if ( !baseWindow )
    goto LABEL_68;
  v41.fields.y = printedSize.fields.y * 0.5;
  v41.fields.x = printedSize.fields.x * -0.5;
  v41.fields.z = v31;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v41, 0);
  v34 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v35 = (System_Action_o *)sub_2213CCC(v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
}