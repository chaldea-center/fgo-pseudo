void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BE018B & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE018B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4BE018A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE018A = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C22094(0LL, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BE0189 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PopupMessageDialog_EndClose__);
    sub_1C21E38(&Method_PopupMessageDialog_OnClickClose__);
    byte_4BE0189 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_PopupMessageDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PopupMessageDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PopupMessageDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *v7; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v9; // s0
  int32_t v10; // w1
  float v11; // s0
  int32_t v12; // w1
  __int64 v13; // x9
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s10
  float v18; // s11
  float v19; // s12
  ManagerConfig_c *v20; // x0
  float x; // s11
  float y; // s12
  uint32_t cctor_finished; // w8
  float v24; // s14
  float v25; // s10
  float v26; // s15
  float v27; // s0
  float v28; // s0
  uint32_t v29; // w8
  float v30; // s14
  float v31; // s0
  float v32; // s13
  float v33; // s0
  float v34; // s2
  int32_t v35; // w1
  float v36; // s10
  int32_t v37; // w1
  System_Action_o *v38; // x20
  float value; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0188 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_PopupMessageDialog_EndOpen__);
    sub_1C21E38(&UICamera_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0188 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             baseWindow,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  UIWidget__set_width((UIWidget_o *)baseWindow, 984, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  UIWidget__set_height((UIWidget_o *)baseWindow, 1024, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v7 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v7, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v6 )
    goto LABEL_66;
  v9 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v9;
  UIWidget__set_width((UIWidget_o *)v6, v10, 0LL);
  v11 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)v11;
  UIWidget__set_height((UIWidget_o *)v6, v12, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_66;
  v13 = *(_QWORD *)&baseWindow[7].fields.m_CachedPtr;
  v40.fields.z = 0.0;
  v40.fields.x = *(float *)(v13 + 60);
  v40.fields.y = *(float *)(v13 + 64);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Camera__ScreenToWorldPoint_70675608(this->fields.dialogCamera, v40, 0LL);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  v17 = v14;
  v18 = v15;
  v19 = v16;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v41.fields.x = v17;
  v41.fields.y = v18;
  v41.fields.z = v19;
  v42 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v41, 0LL);
  v20 = ManagerConfig_TypeInfo;
  x = v42.fields.x;
  y = v42.fields.y;
  cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  v24 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v25 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  value = v42.fields.z;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
    cctor_finished = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v26 = v25 * 0.5;
  v27 = (float)(v20->static_fields->WIDTH / 2);
  if ( x >= (float)(v24 - v27) )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ManagerConfig_TypeInfo;
      v27 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v28 = v27 - v24;
    if ( x > v28 )
    {
      if ( v20->_2.cctor_finished )
      {
        x = v28;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v24;
      }
    }
  }
  else if ( cctor_finished )
  {
    x = v24 - v27;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = ManagerConfig_TypeInfo;
    x = v24 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  v29 = v20->_2.cctor_finished;
  v30 = v26 + 20.0;
  if ( !v29 )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = ManagerConfig_TypeInfo;
    v29 = ManagerConfig_TypeInfo->_2.cctor_finished;
  }
  v31 = (float)(v20->static_fields->HEIGHT / 2);
  v32 = v30 - v31;
  if ( y >= (float)(v30 - v31) )
  {
    if ( !v29 )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ManagerConfig_TypeInfo;
      v31 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v33 = v31 - v30;
    v32 = y;
    if ( y > v33 )
    {
      v32 = v33;
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v32 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v26 + 20.0);
      }
    }
  }
  else if ( !v29 )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v32 = (float)(v26 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_66;
  v43.fields.z = value;
  v43.fields.x = x;
  v43.fields.y = v32;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v43, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseWindow,
                                             0LL);
  if ( !baseWindow )
    goto LABEL_66;
  *(UnityEngine_Vector3_o *)(&v34 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow )
    goto LABEL_66;
  v35 = printedSize.fields.x == INFINITY ? 0x80000000 : (int)printedSize.fields.x;
  v36 = v34;
  UIWidget__set_width((UIWidget_o *)baseWindow, v35, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !baseWindow
    || (printedSize.fields.y != INFINITY ? (v37 = (int)printedSize.fields.y) : (v37 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)baseWindow, v37, 0LL),
         (baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0LL)
     || (baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)baseWindow,
                                                    0LL)) == 0LL) )
  {
LABEL_66:
    sub_1C22094(baseWindow, message);
  }
  v44.fields.y = printedSize.fields.y * 0.5;
  v44.fields.x = printedSize.fields.x * -0.5;
  v44.fields.z = v36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v44, 0LL);
  this->fields.isButtonEnable = 0;
  v38 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}