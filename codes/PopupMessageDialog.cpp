void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E843D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E843D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *messageLabel; // x0

  if ( (byte_42E843C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E843C = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B5D69C(0LL, method);
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E843B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PopupMessageDialog_EndClose__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E843B = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char *baseWindow; // x0
  char *v22; // x21
  struct UILabel_o **p_messageLabel; // x22
  System_String_o *v24; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v26; // s0
  double v27; // d0
  float v28; // s0
  double v29; // d0
  __int64 v30; // x9
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s10
  float v35; // s11
  float v36; // s12
  float x; // s11
  float y; // s12
  ManagerConfig_c *v39; // x0
  float v40; // s15
  float v41; // s10
  __int16 v42; // w8
  int v43; // w8
  float v44; // s10
  float v45; // s0
  float v46; // s0
  __int16 v47; // w8
  float v48; // s15
  int v49; // w8
  float v50; // s0
  float v51; // s13
  float v52; // s0
  float v53; // s2
  double v54; // d0
  float v55; // s10
  double v56; // d0
  System_Action_o *v57; // x20
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E843A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7, v8);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_PopupMessageDialog_EndOpen__, v12, v13, v14);
    sub_B5D5C4(&UICamera_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E843A = 1;
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)baseWindow,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v22 = baseWindow;
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
                                                                      *(int32x2_t *)(v22 + 160),
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
  v24 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)baseWindow, v24, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  printedSize = UILabel__get_printedSize((UILabel_o *)baseWindow, 0LL);
  if ( !v22 )
    goto LABEL_78;
  v26 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v26 == INFINITY )
    v27 = -v26;
  else
    v27 = v26;
  UIWidget__set_width((UIWidget_o *)v22, (int)v27, 0LL);
  v28 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v28 == INFINITY )
    v29 = -INFINITY;
  else
    v29 = v28;
  UIWidget__set_height((UIWidget_o *)v22, (int)v29, 0LL);
  baseWindow = (char *)UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    baseWindow = (char *)UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_78;
  v30 = *((_QWORD *)baseWindow + 23);
  v59.fields.z = 0.0;
  v59.fields.x = *(float *)(v30 + 60);
  v59.fields.y = *(float *)(v30 + 64);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Camera__ScreenToWorldPoint_41565372(this->fields.dialogCamera, v59, 0LL);
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  v34 = v31;
  v35 = v32;
  v36 = v33;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v60.fields.x = v34;
  v60.fields.y = v35;
  v60.fields.z = v36;
  v61 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)baseWindow, v60, 0LL);
  value = v61.fields.z;
  x = v61.fields.x;
  y = v61.fields.y;
  v39 = ManagerConfig_TypeInfo;
  v40 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v41 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  v42 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v42 & 0x400) != 0 )
  {
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v39 = ManagerConfig_TypeInfo;
      v42 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v43 = v42 & 0x400;
  }
  else
  {
    v43 = 0;
  }
  v44 = v41 * 0.5;
  v45 = (float)(v39->static_fields->WIDTH / 2);
  if ( x >= (float)(v40 - v45) )
  {
    if ( v43 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ManagerConfig_TypeInfo;
      v45 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v46 = v45 - v40;
    if ( x > v46 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v40;
      }
      else
      {
        x = v46;
      }
    }
  }
  else if ( v43 && !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v39 = ManagerConfig_TypeInfo;
    x = v40 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  else
  {
    x = v40 - v45;
  }
  v47 = WORD1(v39->vtable._0_Equals.methodPtr);
  v48 = v44 + 20.0;
  if ( (v47 & 0x400) != 0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ManagerConfig_TypeInfo;
      v47 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v49 = v47 & 0x400;
  }
  else
  {
    v49 = 0;
  }
  v50 = (float)(v39->static_fields->HEIGHT / 2);
  v51 = v48 - v50;
  if ( y >= (float)(v48 - v50) )
  {
    if ( v49 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ManagerConfig_TypeInfo;
      v50 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v52 = v50 - v48;
    v51 = y;
    if ( y > v52 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v51 = v52;
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v51 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v44 + 20.0);
        }
      }
      else
      {
        v51 = v52;
      }
    }
  }
  else if ( v49 && !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v51 = (float)(v44 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  baseWindow = (char *)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  v62.fields.z = value;
  v62.fields.x = x;
  v62.fields.y = v51;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v62, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL);
  if ( !baseWindow )
    goto LABEL_78;
  *(UnityEngine_Vector3_o *)(&v53 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseWindow,
                                           0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v54 = printedSize.fields.x;
  if ( printedSize.fields.x == INFINITY )
    v54 = -INFINITY;
  v55 = v53;
  UIWidget__set_width((UIWidget_o *)baseWindow, (int)v54, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_78;
  v56 = printedSize.fields.y;
  if ( printedSize.fields.y == INFINITY )
    v56 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)baseWindow, (int)v56, 0LL);
  baseWindow = (char *)*p_messageLabel;
  if ( !*p_messageLabel
    || (baseWindow = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL)) == 0LL )
  {
LABEL_78:
    sub_B5D69C(baseWindow, message);
  }
  v63.fields.x = printedSize.fields.x * -0.5;
  v63.fields.y = printedSize.fields.y * 0.5;
  v63.fields.z = v55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v63, 0LL);
  this->fields.isButtonEnable = 0;
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}