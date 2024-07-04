void __fastcall RestTimeNoticeControl___ctor(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RestTimeNoticeControl__SetRestTimeLabelColorWhite(
        RestTimeNoticeControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *restTimeLabel; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel
    || (v4.fields.r = 1.0,
        v4.fields.g = 1.0,
        v4.fields.b = 1.0,
        v4.fields.a = 1.0,
        UILabel__set_gradientTop(restTimeLabel, v4, 0LL),
        (restTimeLabel = this->fields.restTimeLabel) == 0LL) )
  {
    sub_1B00F28(restTimeLabel, method);
  }
  v5.fields.r = 0.69804;
  v5.fields.a = 1.0;
  v5.fields.g = 0.69804;
  v5.fields.b = 0.69804;
  UILabel__set_gradientBottom(restTimeLabel, v5, 0LL);
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
  System_Action_o *v8; // x20

  if ( (byte_48E5EF4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_1B00CCC(&StringLiteral_1/*""*/, v5);
    byte_48E5EF4 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1B00F28(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v8, 0LL);
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
  System_String_o *v12; // x0
  _QWORD *v13; // x22
  System_String_o *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  System_String_o *v18; // x21
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v22; // x20
  unsigned __int64 v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *v27; // x20
  int *v28; // x1
  unsigned __int64 v29; // x21
  Il2CppObject *v30; // x0
  UILabel_o *v31; // x8
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s3
  int v36; // w21
  System_String_o *v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  int v42; // [xsp+Ch] [xbp-44h] BYREF
  int v43; // [xsp+18h] [xbp-38h] BYREF
  int v44; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E5EF5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_object___, now);
    sub_1B00CCC(&int_TypeInfo, v5);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_5556/*"EVENT_DAY_TXT"*/, v7);
    sub_1B00CCC(&StringLiteral_5668/*"EVENT_TIMEOVER_TXT"*/, v8);
    sub_1B00CCC(&StringLiteral_5669/*"EVENT_TIME_TXT"*/, v9);
    sub_1B00CCC(&StringLiteral_5581/*"EVENT_MIN_TXT"*/, v10);
    byte_48E5EF5 = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v13 = Method_System_Array_Empty_object___;
  v14 = v12;
  v15 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v15 )
  {
    sub_1B52C04(Method_System_Array_Empty_object___);
    v15 = v13[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1B52BA8(v16);
  if ( !*(_DWORD *)(v16 + 224) )
    j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1B52BA8(v17);
  v18 = System_String__Format_60340256(v14, **(System_Object_array ***)(v17 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v19);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v45.fields.r = 1.0;
  v45.fields.g = 1.0;
  v45.fields.b = 1.0;
  v45.fields.a = 1.0;
  v22 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v45, 0LL);
  if ( (__int64)v22 < 1 )
    goto LABEL_26;
  v23 = v22 / 0x15180;
  if ( (int)(v22 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5556/*"EVENT_DAY_TXT"*/, 0LL);
    v28 = &v44;
    v44 = v23;
LABEL_23:
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v24, v25, v26);
    restTimeLabel = (UILabel_o *)System_String__Format(v27, v30, 0LL);
    v31 = this->fields.restTimeLabel;
    if ( !v31 )
      goto LABEL_32;
    v18 = (System_String_o *)restTimeLabel;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    goto LABEL_25;
  }
  v29 = v22 / 0xE10;
  if ( (int)(v22 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_TIME_TXT"*/, 0LL);
    v43 = v29;
    v28 = &v43;
    goto LABEL_23;
  }
  v36 = (v22 / 0x3C) & ~((int)(v22 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5581/*"EVENT_MIN_TXT"*/, 0LL);
  v42 = v36;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v38, v39, v40);
  restTimeLabel = (UILabel_o *)System_String__Format(v37, v41, 0LL);
  v31 = this->fields.restTimeLabel;
  if ( !v31 )
LABEL_32:
    sub_1B00F28(restTimeLabel, v20);
  v18 = (System_String_o *)restTimeLabel;
  v32 = 1.0;
  v33 = 1.0;
  v34 = 1.0;
LABEL_25:
  v35 = 1.0;
  UILabel__set_effectColor(v31, *(UnityEngine_Color_o *)&v32, 0LL);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v18, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *textImage; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_48E5EF6 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_20306/*"img_txt_special_ascension"*/, v3);
    byte_48E5EF6 = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20306/*"img_txt_special_ascension"*/, 0LL);
  v6 = this->fields.textImage;
  if ( !v6 )
    sub_1B00F28(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}