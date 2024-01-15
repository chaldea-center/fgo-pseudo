void __fastcall RestTimeNoticeControl___ctor(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestTimeNoticeControl__SetRestTimeLabelColorWhite(
        RestTimeNoticeControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *restTimeLabel; // x20
  int v4; // s0
  UILabel_o *v8; // x19
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_4;
  UILabel__set_gradientTop(restTimeLabel, *(UnityEngine_Color_o *)&v4, 0LL);
  v14.fields.r = 0.69804;
  v8 = this->fields.restTimeLabel;
  v14.fields.a = 1.0;
  v14.fields.g = 0.69804;
  v14.fields.b = 0.69804;
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_Color___ctor(v14, v9, v10, v11, v12, (const MethodInfo *)&v13);
  if ( !v8 )
LABEL_4:
    sub_B170D4();
  UILabel__set_gradientBottom(v8, v13, 0LL);
}


void __fastcall RestTimeNoticeControl__SetTime(
        RestTimeNoticeControl_o *this,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  this->fields.endAt = endAt;
  this->fields.startAt = startAt;
}


void __fastcall RestTimeNoticeControl__Start(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x20

  if ( (byte_40FD380 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FD380 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_B170D4();
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestTimeNoticeControl__UpdateRestTime(
        RestTimeNoticeControl_o *this,
        int64_t now,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t endAt; // x24
  System_String_o *v12; // x21
  _QWORD **v13; // x25
  __int64 v14; // x22
  __int16 v15; // w8
  __int64 v16; // x22
  __int64 v17; // x22
  __int64 v18; // x22
  System_String_o *v19; // x21
  const MethodInfo *v20; // x1
  UILabel_o *restTimeLabel; // x22
  int v22; // s0
  unsigned __int64 v26; // x20
  unsigned __int64 v27; // x21
  System_String_o *v28; // x20
  int *v29; // x1
  unsigned __int64 v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *v33; // x20
  int v34; // s0
  UILabel_o *v38; // x0
  int v39; // w21
  System_String_o *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int v43; // [xsp+Ch] [xbp-44h] BYREF
  int v44; // [xsp+18h] [xbp-38h] BYREF
  int v45; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FD381 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, now);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5608/*"EVENT_DAY_TXT"*/, v7);
    sub_B16FFC(&StringLiteral_5716/*"EVENT_TIMEOVER_TXT"*/, v8);
    sub_B16FFC(&StringLiteral_5717/*"EVENT_TIME_TXT"*/, v9);
    sub_B16FFC(&StringLiteral_5631/*"EVENT_MIN_TXT"*/, v10);
    byte_40FD381 = 1;
  }
  endAt = this->fields.endAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v13 = (_QWORD **)Method_System_Array_Empty_object___;
  v14 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(*v13[6]);
  v19 = System_String__Format_43822456(v12, **(System_Object_array ***)(v18 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v20);
  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_37;
  v26 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, *(UnityEngine_Color_o *)&v22, 0LL);
  if ( (__int64)v26 < 1 )
    goto LABEL_31;
  v27 = v26 / 0x15180;
  if ( (int)(v26 / 0x15180) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5608/*"EVENT_DAY_TXT"*/, 0LL);
    v29 = &v45;
    v45 = v27;
    goto LABEL_29;
  }
  v30 = v26 / 0xE10;
  if ( (int)(v26 / 0xE10) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_TIME_TXT"*/, 0LL);
    v44 = v30;
    v29 = &v44;
LABEL_29:
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v29);
    v32 = System_String__Format(v28, v31, 0LL);
    v33 = this->fields.restTimeLabel;
    v19 = v32;
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_black(0LL);
    if ( !v33 )
      goto LABEL_37;
    goto LABEL_30;
  }
  v39 = (v26 / 0x3C) & ~((int)(v26 / 0x3C) >> 31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5631/*"EVENT_MIN_TXT"*/, 0LL);
  v43 = v39;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = System_String__Format(v40, v41, 0LL);
  v33 = this->fields.restTimeLabel;
  v19 = v42;
  *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
  if ( !v33 )
LABEL_37:
    sub_B170D4();
LABEL_30:
  UILabel__set_effectColor(v33, *(UnityEngine_Color_o *)&v34, 0LL);
LABEL_31:
  v38 = this->fields.restTimeLabel;
  if ( !v38 )
    goto LABEL_37;
  UILabel__set_text(v38, v19, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *textImage; // x20
  struct UISprite_o *v5; // x0

  if ( (byte_40FD382 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19669/*"img_txt_special_ascension"*/, v3);
    byte_40FD382 = 1;
  }
  textImage = this->fields.textImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_19669/*"img_txt_special_ascension"*/, 0LL);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}