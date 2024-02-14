void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4213A8C & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4213A8C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4213A8B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4213A8B = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4213A8A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PopupMessageDialog_EndClose__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4213A8A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.isButtonEnable = 0;
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
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
  char *baseWindow; // x0
  char *v11; // x21
  struct UILabel_o **p_messageLabel; // x22
  System_String_o *v13; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v15; // s0
  double v16; // d0
  float v17; // s0
  double v18; // d0
  __int64 v19; // x9
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s10
  float v24; // s11
  float v25; // s12
  float x; // s11
  float y; // s12
  ManagerConfig_c *v28; // x0
  float v29; // s15
  float v30; // s10
  __int16 v31; // w8
  int v32; // w8
  float v33; // s10
  float v34; // s0
  float v35; // s0
  __int16 v36; // w8
  float v37; // s15
  int v38; // w8
  float v39; // s0
  float v40; // s13
  float v41; // s0
  float v42; // s2
  double v43; // d0
  float v44; // s10
  double v45; // d0
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x20
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213A89 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, message);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    sub_B0D8A4(&Method_PopupMessageDialog_EndOpen__, v7);
    sub_B0D8A4(&UICamera_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4213A89 = 1;
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)baseWindow,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = baseWindow;
  if ( this->fields.isInit )
  {
    p_messageLabel = &this->fields.messageLabel;
    baseWindow = (char *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_78;
  }
  else
  {
    this->fields.isInit = 1;
    if ( !baseWindow )
      goto LABEL_78;
    p_messageLabel = &this->fields.messageLabel;
    baseWindow = (char *)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_78;
    this->fields.windowOffsetSize = (struct UnityEngine_Vector2_o)vcvt_f32_s32(
                                                                    vsub_s32(
                                                                      *(int32x2_t *)(v11 + 160),
                                                                      *(int32x2_t *)(baseWindow + 160))).n64_u64[0];
  }
  UIWidget__set_width((UIWidget_o *)baseWindow, 984, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  UIWidget__set_height((UIWidget_o *)baseWindow, 1024, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v13 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v13, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v11 )
    goto LABEL_78;
  v15 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v15 == INFINITY )
    v16 = -v15;
  else
    v16 = v15;
  UIWidget__set_width((UIWidget_o *)v11, (int)v16, 0LL);
  v17 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v17 == INFINITY )
    v18 = -INFINITY;
  else
    v18 = v17;
  UIWidget__set_height((UIWidget_o *)v11, (int)v18, 0LL);
  baseWindow = (char *)UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (char *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_78;
  v19 = *((_QWORD *)baseWindow + 23);
  v50.fields.z = 0.0;
  v50.fields.x = *(float *)(v19 + 60);
  v50.fields.y = *(float *)(v19 + 64);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__ScreenToWorldPoint_40755080(this->fields.dialogCamera, v50, 0LL);
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  v23 = v20;
  v24 = v21;
  v25 = v22;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v51.fields.x = v23;
  v51.fields.y = v24;
  v51.fields.z = v25;
  v52 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v51, 0LL);
  value = v52.fields.z;
  x = v52.fields.x;
  y = v52.fields.y;
  v28 = ManagerConfig_TypeInfo;
  v29 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v30 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  v31 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v31 & 0x400) != 0 )
  {
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v28 = ManagerConfig_TypeInfo;
      v31 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v32 = v31 & 0x400;
  }
  else
  {
    v32 = 0;
  }
  v33 = v30 * 0.5;
  v34 = (float)(v28->static_fields->WIDTH / 2);
  if ( x >= (float)(v29 - v34) )
  {
    if ( v32 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ManagerConfig_TypeInfo;
      v34 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v35 = v34 - v29;
    if ( x > v35 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v29;
      }
      else
      {
        x = v35;
      }
    }
  }
  else if ( v32 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = ManagerConfig_TypeInfo;
    x = v29 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  else
  {
    x = v29 - v34;
  }
  v36 = WORD1(v28->vtable._0_Equals.methodPtr);
  v37 = v33 + 20.0;
  if ( (v36 & 0x400) != 0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ManagerConfig_TypeInfo;
      v36 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v38 = v36 & 0x400;
  }
  else
  {
    v38 = 0;
  }
  v39 = (float)(v28->static_fields->HEIGHT / 2);
  v40 = v37 - v39;
  if ( y >= (float)(v37 - v39) )
  {
    if ( v38 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ManagerConfig_TypeInfo;
      v39 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v41 = v39 - v37;
    v40 = y;
    if ( y > v41 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v40 = v41;
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v40 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v33 + 20.0);
        }
      }
      else
      {
        v40 = v41;
      }
    }
  }
  else if ( v38 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v40 = (float)(v33 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v53.fields.z = value;
  v53.fields.x = x;
  v53.fields.y = v40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v53, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  *(UnityEngine_Vector3_o *)(&v42 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v43 = printedSize.fields.x;
  if ( printedSize.fields.x == INFINITY )
    v43 = -INFINITY;
  v44 = v42;
  UIWidget__set_width((UIWidget_o *)baseWindow, (int)v43, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v45 = printedSize.fields.y;
  if ( printedSize.fields.y == INFINITY )
    v45 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)baseWindow, (int)v45, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel
    || (baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL)) == 0LL )
  {
LABEL_78:
    sub_B0D97C(baseWindow);
  }
  v54.fields.x = printedSize.fields.x * -0.5;
  v54.fields.y = printedSize.fields.y * 0.5;
  v54.fields.z = v44;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v54, 0LL);
  this->fields.isButtonEnable = 0;
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}