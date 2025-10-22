void PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C50C94 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C50C94 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4C50C93 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C50C93 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C50C92 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_PopupMessageDialog_EndClose__);
    sub_1C3E564(&Method_PopupMessageDialog_OnClickClose__);
    byte_4C50C92 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_PopupMessageDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void PopupMessageDialog__Open(PopupMessageDialog_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *v7; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v9; // s0
  int32_t v10; // w1
  float v11; // s0
  int32_t v12; // w1
  intptr_t m_CachedPtr; // x9
  float x; // s10
  float y; // s11
  float z; // s12
  ManagerConfig_c *v17; // x0
  float v18; // s11
  float v19; // s12
  uint32_t cctor_finished; // w8
  float v21; // s14
  float v22; // s10
  float v23; // s15
  float v24; // s0
  float v25; // s0
  uint32_t v26; // w8
  float v27; // s14
  float v28; // s0
  float v29; // s13
  float v30; // s0
  int32_t v31; // w1
  float v32; // s10
  int32_t v33; // w1
  System_Action_o *v34; // x20
  float value; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C50C91 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&Method_PopupMessageDialog_EndOpen__);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C50C91 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  v36.fields.z = 0.0;
  v36.fields.x = *(float *)(m_CachedPtr + 60);
  v36.fields.y = *(float *)(m_CachedPtr + 64);
  v37 = UnityEngine_Camera__ScreenToWorldPoint_71147856(this->fields.dialogCamera, v36, 0);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  x = v37.fields.x;
  y = v37.fields.y;
  z = v37.fields.z;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v38, 0);
  v17 = ManagerConfig_TypeInfo;
  v18 = v39.fields.x;
  v19 = v39.fields.y;
  cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  v21 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v22 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  value = v39.fields.z;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
    cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v23 = v22 * 0.5;
  v24 = (float)(v17->static_fields->WIDTH / 2);
  if ( v18 >= (float)(v21 - v24) )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ManagerConfig_TypeInfo;
      v24 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v25 = v24 - v21;
    if ( v18 > v25 )
    {
      if ( v17->_2.cctor_finished )
      {
        v18 = v25;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = ManagerConfig_TypeInfo;
        v18 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v21;
      }
    }
  }
  else if ( cctor_finished )
  {
    v18 = v21 - v24;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = ManagerConfig_TypeInfo;
    v18 = v21 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v26 = v17->_2.cctor_finished;
  v27 = v23 + 20.0;
  if ( !v26 )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = ManagerConfig_TypeInfo;
    v26 = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v28 = (float)(v17->static_fields->HEIGHT / 2);
  v29 = v27 - v28;
  if ( v19 >= (float)(v27 - v28) )
  {
    if ( !v26 )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ManagerConfig_TypeInfo;
      v28 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v30 = v28 - v27;
    v29 = v19;
    if ( v19 > v30 )
    {
      v29 = v30;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v29 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v23 + 20.0);
      }
    }
  }
  else if ( !v26 )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v29 = (float)(v23 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_66;
  v40.fields.z = value;
  v40.fields.x = v18;
  v40.fields.y = v29;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v40, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0);
  if ( !baseWindow )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseWindow, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v31 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  v32 = localPosition.fields.z;
  UIWidget__set_width((UIWidget_o *)baseWindow, v31, 0);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow
    || (printedSize.fields.y != INFINITY ? (v33 = (int)printedSize.fields.y) : (v33 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)baseWindow, v33, 0),
         (baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0)
     || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)baseWindow,
                                                    0)) == 0) )
  {
LABEL_66:
    sub_1C3E7C0(baseWindow, message);
  }
  v42.fields.y = printedSize.fields.y * 0.5;
  v42.fields.x = printedSize.fields.x * -0.5;
  v42.fields.z = v32;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v42, 0);
  this->fields.isButtonEnable = 0;
  v34 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0, 0);
}