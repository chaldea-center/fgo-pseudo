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
    sub_1B64324(restTimeLabel);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49FFC0C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FFC0C = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1B64324(0LL);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v10, 0LL);
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
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v21; // x20
  unsigned __int64 v22; // x21
  System_String_o *v23; // x20
  int *v24; // x1
  unsigned __int64 v25; // x21
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x8
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s3
  int v32; // w21
  System_String_o *v33; // x20
  Il2CppObject *v34; // x0
  int v35; // [xsp+Ch] [xbp-44h] BYREF
  int v36; // [xsp+18h] [xbp-38h] BYREF
  int v37; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFC0D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, now);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5589/*"EVENT_DAY_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_5701/*"EVENT_TIMEOVER_TXT"*/, v8);
    sub_1B640C8(&StringLiteral_5702/*"EVENT_TIME_TXT"*/, v9);
    sub_1B640C8(&StringLiteral_5614/*"EVENT_MIN_TXT"*/, v10);
    byte_49FFC0D = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v13 = Method_System_Array_Empty_object___;
  v14 = v12;
  v15 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v15 )
  {
    sub_1BB6000(Method_System_Array_Empty_object___);
    v15 = v13[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  if ( !*(_DWORD *)(v16 + 224) )
    j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB5FA4(v17);
  v18 = System_String__Format_61389904(v14, **(System_Object_array ***)(v17 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v19);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  v38.fields.a = 1.0;
  v21 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v38, 0LL);
  if ( (__int64)v21 < 1 )
    goto LABEL_26;
  v22 = v21 / 0x15180;
  if ( (int)(v21 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_DAY_TXT"*/, 0LL);
    v24 = &v37;
    v37 = v22;
LABEL_23:
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v24);
    restTimeLabel = (UILabel_o *)System_String__Format(v23, v26, 0LL);
    v27 = this->fields.restTimeLabel;
    if ( !v27 )
      goto LABEL_32;
    v18 = (System_String_o *)restTimeLabel;
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
    goto LABEL_25;
  }
  v25 = v21 / 0xE10;
  if ( (int)(v21 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_TIME_TXT"*/, 0LL);
    v36 = v25;
    v24 = &v36;
    goto LABEL_23;
  }
  v32 = (v21 / 0x3C) & ~((int)(v21 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_MIN_TXT"*/, 0LL);
  v35 = v32;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  restTimeLabel = (UILabel_o *)System_String__Format(v33, v34, 0LL);
  v27 = this->fields.restTimeLabel;
  if ( !v27 )
LABEL_32:
    sub_1B64324(restTimeLabel);
  v18 = (System_String_o *)restTimeLabel;
  v28 = 1.0;
  v29 = 1.0;
  v30 = 1.0;
LABEL_25:
  v31 = 1.0;
  UILabel__set_effectColor(v27, *(UnityEngine_Color_o *)&v28, 0LL);
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
  struct UISprite_o *v5; // x0

  if ( (byte_49FFC0E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_20506/*"img_txt_special_ascension"*/, v3);
    byte_49FFC0E = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20506/*"img_txt_special_ascension"*/, 0LL);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}