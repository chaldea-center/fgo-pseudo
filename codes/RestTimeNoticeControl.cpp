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
    sub_1B8880C(restTimeLabel, method);
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
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A5E9F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_RestTimeNoticeControl__Start_b__6_0__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E9F5 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1B8880C(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v4);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestTimeNoticeControl__UpdateRestTime(
        RestTimeNoticeControl_o *this,
        int64_t now,
        const MethodInfo *method)
{
  int64_t endAt; // x24
  System_String_o *v6; // x0
  _QWORD *v7; // x22
  System_String_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_String_o *v12; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_String_o *v21; // x20
  int *v22; // x1
  unsigned __int64 v23; // x21
  Il2CppObject *v24; // x0
  UILabel_o *v25; // x8
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  int v30; // w21
  System_String_o *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  int v36; // [xsp+Ch] [xbp-44h] BYREF
  int v37; // [xsp+18h] [xbp-38h] BYREF
  int v38; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E9F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5615/*"EVENT_DAY_TXT"*/);
    sub_1B885B0(&StringLiteral_5727/*"EVENT_TIMEOVER_TXT"*/);
    sub_1B885B0(&StringLiteral_5728/*"EVENT_TIME_TXT"*/);
    sub_1B885B0(&StringLiteral_5640/*"EVENT_MIN_TXT"*/);
    byte_4A5E9F6 = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v7 = Method_System_Array_Empty_object___;
  v8 = v6;
  v9 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v9 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_object___);
    v9 = v7[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  if ( !*(_DWORD *)(v10 + 224) )
    j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = System_String__Format_61721540(v8, **(System_Object_array ***)(v11 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v13);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v39.fields.r = 1.0;
  v39.fields.g = 1.0;
  v39.fields.b = 1.0;
  v39.fields.a = 1.0;
  v16 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v39, 0LL);
  if ( (__int64)v16 < 1 )
    goto LABEL_26;
  v17 = v16 / 0x15180;
  if ( (int)(v16 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_DAY_TXT"*/, 0LL);
    v22 = &v38;
    v38 = v17;
LABEL_23:
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v22, v18, v19, v20);
    restTimeLabel = (UILabel_o *)System_String__Format(v21, v24, 0LL);
    v25 = this->fields.restTimeLabel;
    if ( !v25 )
      goto LABEL_32;
    v12 = (System_String_o *)restTimeLabel;
    v26 = 0.0;
    v27 = 0.0;
    v28 = 0.0;
    goto LABEL_25;
  }
  v23 = v16 / 0xE10;
  if ( (int)(v16 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_TIME_TXT"*/, 0LL);
    v37 = v23;
    v22 = &v37;
    goto LABEL_23;
  }
  v30 = (v16 / 0x3C) & ~((int)(v16 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_MIN_TXT"*/, 0LL);
  v36 = v30;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v32, v33, v34);
  restTimeLabel = (UILabel_o *)System_String__Format(v31, v35, 0LL);
  v25 = this->fields.restTimeLabel;
  if ( !v25 )
LABEL_32:
    sub_1B8880C(restTimeLabel, v14);
  v12 = (System_String_o *)restTimeLabel;
  v26 = 1.0;
  v27 = 1.0;
  v28 = 1.0;
LABEL_25:
  v29 = 1.0;
  UILabel__set_effectColor(v25, *(UnityEngine_Color_o *)&v26, 0LL);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v12, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UISprite_o *textImage; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4A5E9F7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20587/*"img_txt_special_ascension"*/);
    byte_4A5E9F7 = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20587/*"img_txt_special_ascension"*/, 0LL);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}