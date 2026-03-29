void PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A771 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2A771 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4D2A770 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A770 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C93D2C(0, method);
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
  System_Action_o *v5; // x20

  if ( (byte_4D2A76F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PopupMessageDialog_EndClose__);
    sub_1C93AD4(&Method_PopupMessageDialog_OnClickClose__);
    byte_4D2A76F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PopupMessageDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
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
  intptr_t m_CachedPtr; // x9
  ManagerConfig_c *v14; // x0
  float x; // s11
  uint32_t cctor_finished; // w8
  float v17; // s14
  float v18; // s10
  float v19; // s15
  float v20; // s0
  float v21; // s0
  uint32_t v22; // w8
  float v23; // s14
  float v24; // s0
  float y; // s13
  float v26; // s0
  int32_t v27; // w1
  float v28; // s10
  int32_t v29; // w1
  System_Action_o *v30; // x20
  float z; // s2
  UnityEngine_Vector3_o v32; // 0:kr00_12.12
  UnityEngine_Vector3_o v33; // 0:kr14_12.12
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A76E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&Method_PopupMessageDialog_EndOpen__);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A76E = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = baseWindow;
  if ( this->fields.isInit )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_66;
  }
  else
  {
    this->fields.isInit = 1;
    if ( !baseWindow )
      goto LABEL_66;
    baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_66;
    this->fields.windowOffsetSize = (struct UnityEngine_Vector2_o)vcvt_f32_s32(
                                                                    vsub_s32(
                                                                      (int32x2_t)v6[7].klass,
                                                                      (int32x2_t)baseWindow[7].klass)).n64_u64[0];
  }
  UIWidget__set_width((UIWidget_o *)baseWindow, 984, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  UIWidget__set_height((UIWidget_o *)baseWindow, 1024, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v7 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v7, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0);
  if ( !v6 )
    goto LABEL_66;
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
  baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_66;
  m_CachedPtr = baseWindow[7].fields.m_CachedPtr;
  v34.fields.z = 0.0;
  v34.fields.x = *(float *)(m_CachedPtr + 60);
  v34.fields.y = *(float *)(m_CachedPtr + 64);
  v32 = UnityEngine_Camera__ScreenToWorldPoint_71924504(this->fields.dialogCamera, v34, 0);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  v33 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v32, 0);
  v14 = ManagerConfig_TypeInfo;
  x = v33.fields.x;
  cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  v17 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v18 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
    cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v19 = v18 * 0.5;
  v20 = (float)(v14->static_fields->WIDTH / 2);
  if ( v33.fields.x >= (float)(v17 - v20) )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ManagerConfig_TypeInfo;
      v20 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v21 = v20 - v17;
    if ( v33.fields.x > v21 )
    {
      if ( v14->_2.cctor_finished )
      {
        x = v21;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v17;
      }
    }
  }
  else if ( cctor_finished )
  {
    x = v17 - v20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = ManagerConfig_TypeInfo;
    x = v17 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v22 = v14->_2.cctor_finished;
  v23 = v19 + 20.0;
  if ( !v22 )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = ManagerConfig_TypeInfo;
    v22 = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v24 = (float)(v14->static_fields->HEIGHT / 2);
  y = v23 - v24;
  if ( v33.fields.y >= (float)(v23 - v24) )
  {
    if ( !v22 )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ManagerConfig_TypeInfo;
      v24 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v26 = v24 - v23;
    y = v33.fields.y;
    if ( v33.fields.y > v26 )
    {
      y = v26;
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        y = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v19 + 20.0);
      }
    }
  }
  else if ( !v22 )
  {
    j_il2cpp_runtime_class_init_0(v14);
    y = (float)(v19 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  v35.fields.z = v33.fields.z;
  v35.fields.x = x;
  v35.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v35, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0);
  if ( !baseWindow )
    goto LABEL_66;
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseWindow, 0).fields.z;
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v27 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  v28 = z;
  UIWidget__set_width((UIWidget_o *)baseWindow, v27, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow
    || (printedSize.fields.y != INFINITY ? (v29 = (int)printedSize.fields.y) : (v29 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)baseWindow, v29, 0),
         (baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0)
     || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)baseWindow,
                                                    0)) == 0) )
  {
LABEL_66:
    sub_1C93D2C(baseWindow, message);
  }
  v36.fields.y = printedSize.fields.y * 0.5;
  v36.fields.x = printedSize.fields.x * -0.5;
  v36.fields.z = v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v36, 0);
  this->fields.isButtonEnable = 0;
  v30 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
}