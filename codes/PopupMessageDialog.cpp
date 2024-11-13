void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19CF7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *messageLabel; // x0

  if ( (byte_4B19CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19CF6 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1BCAA3C(0LL, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B19CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PopupMessageDialog_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_PopupMessageDialog_OnClickClose__, v6, v7);
    byte_4B19CF5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v8 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PopupMessageDialog_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *v16; // x21
  System_String_o *v17; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v19; // s0
  int32_t v20; // w1
  float v21; // s0
  int32_t v22; // w1
  __int64 v23; // x9
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s10
  float v28; // s11
  float v29; // s12
  ManagerConfig_c *v30; // x0
  float x; // s11
  float y; // s12
  uint32_t cctor_finished; // w8
  float v34; // s14
  float v35; // s10
  float v36; // s15
  float v37; // s0
  float v38; // s0
  uint32_t v39; // w8
  float v40; // s14
  float v41; // s0
  float v42; // s13
  float v43; // s0
  float v44; // s2
  int32_t v45; // w1
  float v46; // s10
  int32_t v47; // w1
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x20
  float value; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_PopupMessageDialog_EndOpen__, v9, v10);
    sub_1BCA7E0(&UICamera_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19CF4 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v16 = baseWindow;
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
                                                                      (int32x2_t)v16[7].klass,
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
  v17 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v17, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v16 )
    goto LABEL_66;
  v19 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v19 == INFINITY )
    v20 = 0x80000000;
  else
    v20 = (int)v19;
  UIWidget__set_width((UIWidget_o *)v16, v20, 0LL);
  v21 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v21 == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)v21;
  UIWidget__set_height((UIWidget_o *)v16, v22, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, message);
    baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_66;
  v23 = *(_QWORD *)&baseWindow[7].fields.m_CachedPtr;
  v53.fields.z = 0.0;
  v53.fields.x = *(float *)(v23 + 60);
  v53.fields.y = *(float *)(v23 + 64);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Camera__ScreenToWorldPoint_69960472(this->fields.dialogCamera, v53, 0LL);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  v27 = v24;
  v28 = v25;
  v29 = v26;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v54.fields.x = v27;
  v54.fields.y = v28;
  v54.fields.z = v29;
  v55 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v54, 0LL);
  v30 = ManagerConfig_TypeInfo;
  x = v55.fields.x;
  y = v55.fields.y;
  cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  v34 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v35 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  value = v55.fields.z;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, message);
    v30 = ManagerConfig_TypeInfo;
    cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v36 = v35 * 0.5;
  v37 = (float)(v30->static_fields->WIDTH / 2);
  if ( x >= (float)(v34 - v37) )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, message);
      v30 = ManagerConfig_TypeInfo;
      v37 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v38 = v37 - v34;
    if ( x > v38 )
    {
      if ( v30->_2.cctor_finished )
      {
        x = v38;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v30, message);
        v30 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v34;
      }
    }
  }
  else if ( cctor_finished )
  {
    x = v34 - v37;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v30, message);
    v30 = ManagerConfig_TypeInfo;
    x = v34 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v39 = v30->_2.cctor_finished;
  v40 = v36 + 20.0;
  if ( !v39 )
  {
    j_il2cpp_runtime_class_init_0(v30, message);
    v30 = ManagerConfig_TypeInfo;
    v39 = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v41 = (float)(v30->static_fields->HEIGHT / 2);
  v42 = v40 - v41;
  if ( y >= (float)(v40 - v41) )
  {
    if ( !v39 )
    {
      j_il2cpp_runtime_class_init_0(v30, message);
      v30 = ManagerConfig_TypeInfo;
      v41 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v43 = v41 - v40;
    v42 = y;
    if ( y > v43 )
    {
      v42 = v43;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30, message);
        v42 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v36 + 20.0);
      }
    }
  }
  else if ( !v39 )
  {
    j_il2cpp_runtime_class_init_0(v30, message);
    v42 = (float)(v36 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v56.fields.z = value;
  v56.fields.x = x;
  v56.fields.y = v42;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v56, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0LL);
  if ( !baseWindow )
    goto LABEL_66;
  *(UnityEngine_Vector3_o *)(&v44 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v45 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  v46 = v44;
  UIWidget__set_width((UIWidget_o *)baseWindow, v45, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow
    || (printedSize.fields.y != INFINITY ? (v47 = (int)printedSize.fields.y) : (v47 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)baseWindow, v47, 0LL),
         (baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0LL)
     || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)baseWindow,
                                                    0LL)) == 0LL) )
  {
LABEL_66:
    sub_1BCAA3C(baseWindow, message);
  }
  v57.fields.y = printedSize.fields.y * 0.5;
  v57.fields.x = printedSize.fields.x * -0.5;
  v57.fields.z = v46;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v57, 0LL);
  this->fields.isButtonEnable = 0;
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
}