void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A235D2 & 1) == 0 )
  {
    sub_1B715CC(&BaseDialog_TypeInfo, method);
    byte_4A235D2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4A235D1 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1/*""*/, method);
    byte_4A235D1 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1B71828(0LL, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A235D0 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_PopupMessageDialog_EndClose__, v3);
    sub_1B715CC(&Method_PopupMessageDialog_OnClickClose__, v4);
    byte_4A235D0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B715E4(Method_PopupMessageDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B715B0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v7 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *v11; // x21
  System_String_o *v12; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v14; // s0
  int32_t v15; // w1
  float v16; // s0
  int32_t v17; // w1
  __int64 v18; // x9
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s10
  float v23; // s11
  float v24; // s12
  ManagerConfig_c *v25; // x0
  float x; // s11
  float y; // s12
  uint32_t cctor_finished; // w8
  float v29; // s14
  float v30; // s10
  float v31; // s15
  float v32; // s0
  float v33; // s0
  uint32_t v34; // w8
  float v35; // s14
  float v36; // s0
  float v37; // s13
  float v38; // s0
  float v39; // s2
  int32_t v40; // w1
  float v41; // s10
  int32_t v42; // w1
  System_Action_o *v43; // x20
  float value; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A235CF & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, message);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B715CC(&ManagerConfig_TypeInfo, v6);
    sub_1B715CC(&Method_PopupMessageDialog_EndOpen__, v7);
    sub_1B715CC(&UICamera_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_1/*""*/, v9);
    byte_4A235CF = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = baseWindow;
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
                                                                      (int32x2_t)v11[7].klass,
                                                                      (int32x2_t)baseWindow[7].klass)).n64_u64[0];
  }
  UIWidget__set_width((UIWidget_o *)baseWindow, 984, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  UIWidget__set_height((UIWidget_o *)baseWindow, 1024, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v12 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v12, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v11 )
    goto LABEL_66;
  v14 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v14 == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)v14;
  UIWidget__set_width((UIWidget_o *)v11, v15, 0LL);
  v16 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v16 == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)v16;
  UIWidget__set_height((UIWidget_o *)v11, v17, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_66;
  v18 = *(_QWORD *)&baseWindow[7].fields.m_CachedPtr;
  v45.fields.z = 0.0;
  v45.fields.x = *(float *)(v18 + 60);
  v45.fields.y = *(float *)(v18 + 64);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Camera__ScreenToWorldPoint_69064168(this->fields.dialogCamera, v45, 0LL);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  v22 = v19;
  v23 = v20;
  v24 = v21;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v46.fields.x = v22;
  v46.fields.y = v23;
  v46.fields.z = v24;
  v47 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v46, 0LL);
  v25 = ManagerConfig_TypeInfo;
  x = v47.fields.x;
  y = v47.fields.y;
  cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  v29 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v30 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  value = v47.fields.z;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v25 = ManagerConfig_TypeInfo;
    cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v31 = v30 * 0.5;
  v32 = (float)(v25->static_fields->WIDTH / 2);
  if ( x >= (float)(v29 - v32) )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ManagerConfig_TypeInfo;
      v32 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v33 = v32 - v29;
    if ( x > v33 )
    {
      if ( v25->_2.cctor_finished )
      {
        x = v33;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v29;
      }
    }
  }
  else if ( cctor_finished )
  {
    x = v29 - v32;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = ManagerConfig_TypeInfo;
    x = v29 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v34 = v25->_2.cctor_finished;
  v35 = v31 + 20.0;
  if ( !v34 )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = ManagerConfig_TypeInfo;
    v34 = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v36 = (float)(v25->static_fields->HEIGHT / 2);
  v37 = v35 - v36;
  if ( y >= (float)(v35 - v36) )
  {
    if ( !v34 )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ManagerConfig_TypeInfo;
      v36 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v38 = v36 - v35;
    v37 = y;
    if ( y > v38 )
    {
      v37 = v38;
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v37 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v31 + 20.0);
      }
    }
  }
  else if ( !v34 )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v37 = (float)(v31 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v48.fields.z = value;
  v48.fields.x = x;
  v48.fields.y = v37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v48, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0LL);
  if ( !baseWindow )
    goto LABEL_66;
  *(UnityEngine_Vector3_o *)(&v39 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v40 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  v41 = v39;
  UIWidget__set_width((UIWidget_o *)baseWindow, v40, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow
    || (printedSize.fields.y != INFINITY ? (v42 = (int)printedSize.fields.y) : (v42 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)baseWindow, v42, 0LL),
         (baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0LL)
     || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)baseWindow,
                                                    0LL)) == 0LL) )
  {
LABEL_66:
    sub_1B71828(baseWindow, message);
  }
  v49.fields.y = printedSize.fields.y * 0.5;
  v49.fields.x = printedSize.fields.x * -0.5;
  v49.fields.z = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v49, 0LL);
  this->fields.isButtonEnable = 0;
  v43 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}