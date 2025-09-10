void RestTimeNoticeControl___ctor(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RestTimeNoticeControl__SetRestTimeLabelColorWhite(RestTimeNoticeControl_o *this, const MethodInfo *method)
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
        UILabel__set_gradientTop(restTimeLabel, v4, 0),
        (restTimeLabel = this->fields.restTimeLabel) == 0) )
  {
    sub_1C2D6EC(restTimeLabel, method);
  }
  v5.fields.r = 0.69804;
  v5.fields.a = 1.0;
  v5.fields.g = 0.69804;
  v5.fields.b = 0.69804;
  UILabel__set_gradientBottom(restTimeLabel, v5, 0);
}


void RestTimeNoticeControl__SetTime(
        RestTimeNoticeControl_o *this,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  this->fields.endAt = endAt;
  this->fields.startAt = startAt;
}


void RestTimeNoticeControl__Start(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C2B279 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_RestTimeNoticeControl__Start_b__6_0__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B279 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1C2D6EC(0, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v4);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void RestTimeNoticeControl__UpdateRestTime(RestTimeNoticeControl_o *this, int64_t now, const MethodInfo *method)
{
  int64_t endAt; // x24
  System_String_o *v6; // x0
  long double inited; // q0
  _QWORD *v8; // x22
  System_String_o *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_String_o *v13; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v17; // x20
  unsigned __int64 v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_String_o *v22; // x20
  int *v23; // x1
  unsigned __int64 v24; // x21
  Il2CppObject *v25; // x0
  UILabel_o *v26; // x8
  float v27; // s0 OVERLAPPED
  float v28; // s1
  float v29; // s2
  float v30; // s3
  int v31; // w21
  System_String_o *v32; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  int v37; // [xsp+Ch] [xbp-44h] BYREF
  int v38; // [xsp+18h] [xbp-38h] BYREF
  int v39; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B27A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_object___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5589/*"EVENT_DAY_TXT"*/);
    sub_1C2D490(&StringLiteral_5723/*"EVENT_TIMEOVER_TXT"*/);
    sub_1C2D490(&StringLiteral_5724/*"EVENT_TIME_TXT"*/);
    sub_1C2D490(&StringLiteral_5626/*"EVENT_MIN_TXT"*/);
    byte_4C2B27A = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EVENT_TIMEOVER_TXT"*/, 0);
  v8 = Method_System_Array_Empty_object___;
  v9 = v6;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v10 )
  {
    sub_1C7DC00(Method_System_Array_Empty_object___);
    v10 = v8[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C7DBA4(inited);
  v13 = System_String__Format_63499292(v9, **(System_Object_array ***)(v12 + 184), 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v14);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v40.fields.r = 1.0;
  v40.fields.g = 1.0;
  v40.fields.b = 1.0;
  v40.fields.a = 1.0;
  v17 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v40, 0);
  if ( (__int64)v17 < 1 )
    goto LABEL_26;
  v18 = v17 / 0x15180;
  if ( (int)(v17 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_DAY_TXT"*/, 0);
    v23 = &v39;
    v39 = v18;
LABEL_23:
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v23, v19, v20, v21);
    restTimeLabel = (UILabel_o *)System_String__Format(v22, v25, 0);
    v26 = this->fields.restTimeLabel;
    if ( !v26 )
      goto LABEL_32;
    v13 = (System_String_o *)restTimeLabel;
    v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    goto LABEL_25;
  }
  v24 = v17 / 0xE10;
  if ( (int)(v17 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_TIME_TXT"*/, 0);
    v38 = v24;
    v23 = &v38;
    goto LABEL_23;
  }
  v31 = (v17 / 0x3C) & ~((int)(v17 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_MIN_TXT"*/, 0);
  v37 = v31;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v33, v34, v35);
  restTimeLabel = (UILabel_o *)System_String__Format(v32, v36, 0);
  v26 = this->fields.restTimeLabel;
  if ( !v26 )
LABEL_32:
    sub_1C2D6EC(restTimeLabel, v15);
  v13 = (System_String_o *)restTimeLabel;
  v27 = 1.0;
  v28 = 1.0;
  v29 = 1.0;
LABEL_25:
  v30 = 1.0;
  UILabel__set_effectColor(v26, *(UnityEngine_Color_o *)&v27, 0);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v13, 0);
}


void RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UISprite_o *textImage; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4C2B27B & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20704/*"img_txt_special_ascension"*/);
    byte_4C2B27B = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20704/*"img_txt_special_ascension"*/, 0);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_1C2D6EC(0, v4);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v5,
    v5->klass->vtable._33_MakePixelPerfect.method);
}