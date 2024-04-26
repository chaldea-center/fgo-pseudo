void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4351C02 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4351C02 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4351C01 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351C01 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B7076C(0LL, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4351C00 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_PopupMessageDialog_EndClose__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351C00 = 1;
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
    v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  char *baseWindow; // x0
  char *v6; // x21
  struct UILabel_o **p_messageLabel; // x22
  System_String_o *v8; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v10; // s0
  double v11; // d0
  float v12; // s0
  double v13; // d0
  __int64 v14; // x9
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float x; // s11
  float y; // s12
  ManagerConfig_c *v23; // x0
  float v24; // s15
  float v25; // s10
  __int16 v26; // w8
  int v27; // w8
  float v28; // s10
  float v29; // s0
  float v30; // s0
  __int16 v31; // w8
  float v32; // s15
  int v33; // w8
  float v34; // s0
  float v35; // s13
  float v36; // s0
  float v37; // s2
  double v38; // d0
  float v39; // s10
  double v40; // d0
  System_Action_o *v41; // x20
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351BFF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&Method_PopupMessageDialog_EndOpen__);
    sub_B70694(&UICamera_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351BFF = 1;
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)baseWindow,
                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = baseWindow;
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
                                                                      *(int32x2_t *)(v6 + 160),
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
  v8 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v8, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v6 )
    goto LABEL_78;
  v10 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v10 == INFINITY )
    v11 = -v10;
  else
    v11 = v10;
  UIWidget__set_width((UIWidget_o *)v6, (int)v11, 0LL);
  v12 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v12 == INFINITY )
    v13 = -INFINITY;
  else
    v13 = v12;
  UIWidget__set_height((UIWidget_o *)v6, (int)v13, 0LL);
  baseWindow = (char *)UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (char *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_78;
  v14 = *((_QWORD *)baseWindow + 23);
  v43.fields.z = 0.0;
  v43.fields.x = *(float *)(v14 + 60);
  v43.fields.y = *(float *)(v14 + 64);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__ScreenToWorldPoint_41062500(this->fields.dialogCamera, v43, 0LL);
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  v18 = v15;
  v19 = v16;
  v20 = v17;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v44.fields.x = v18;
  v44.fields.y = v19;
  v44.fields.z = v20;
  v45 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v44, 0LL);
  value = v45.fields.z;
  x = v45.fields.x;
  y = v45.fields.y;
  v23 = ManagerConfig_TypeInfo;
  v24 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v25 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  v26 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v26 & 0x400) != 0 )
  {
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v23 = ManagerConfig_TypeInfo;
      v26 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v27 = v26 & 0x400;
  }
  else
  {
    v27 = 0;
  }
  v28 = v25 * 0.5;
  v29 = (float)(v23->static_fields->WIDTH / 2);
  if ( x >= (float)(v24 - v29) )
  {
    if ( v27 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ManagerConfig_TypeInfo;
      v29 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v30 = v29 - v24;
    if ( x > v30 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v24;
      }
      else
      {
        x = v30;
      }
    }
  }
  else if ( v27 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = ManagerConfig_TypeInfo;
    x = v24 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  else
  {
    x = v24 - v29;
  }
  v31 = WORD1(v23->vtable._0_Equals.methodPtr);
  v32 = v28 + 20.0;
  if ( (v31 & 0x400) != 0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ManagerConfig_TypeInfo;
      v31 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v33 = v31 & 0x400;
  }
  else
  {
    v33 = 0;
  }
  v34 = (float)(v23->static_fields->HEIGHT / 2);
  v35 = v32 - v34;
  if ( y >= (float)(v32 - v34) )
  {
    if ( v33 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ManagerConfig_TypeInfo;
      v34 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v36 = v34 - v32;
    v35 = y;
    if ( y > v36 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v35 = v36;
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v35 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v28 + 20.0);
        }
      }
      else
      {
        v35 = v36;
      }
    }
  }
  else if ( v33 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v35 = (float)(v28 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v46.fields.z = value;
  v46.fields.x = x;
  v46.fields.y = v35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v46, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  *(UnityEngine_Vector3_o *)(&v37 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v38 = printedSize.fields.x;
  if ( printedSize.fields.x == INFINITY )
    v38 = -INFINITY;
  v39 = v37;
  UIWidget__set_width((UIWidget_o *)baseWindow, (int)v38, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v40 = printedSize.fields.y;
  if ( printedSize.fields.y == INFINITY )
    v40 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)baseWindow, (int)v40, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel
    || (baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL)) == 0LL )
  {
LABEL_78:
    sub_B7076C(baseWindow, message);
  }
  v47.fields.x = printedSize.fields.x * -0.5;
  v47.fields.y = printedSize.fields.y * 0.5;
  v47.fields.z = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v47, 0LL);
  this->fields.isButtonEnable = 0;
  v41 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}