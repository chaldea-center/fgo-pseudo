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
    sub_21FFECC(restTimeLabel, method);
  }
  v5.fields.a = 1.0;
  v5.fields.r = 0.69804;
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
  __int64 v6; // x1

  if ( (byte_593C95D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_RestTimeNoticeControl__Start_b__6_0__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C95D = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_21FFECC(0, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v4);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
  AtlasManager__LoadOutGameAtlas(v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void RestTimeNoticeControl__UpdateRestTime(RestTimeNoticeControl_o *this, int64_t now, const MethodInfo *method)
{
  int64_t endAt; // x24
  System_String_o *v6; // x0
  __int64 v7; // x1
  long double v8; // q0
  _QWORD *v9; // x22
  System_String_o *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  System_String_o *v14; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v18; // x20
  unsigned __int64 v19; // x21
  System_String_o *v20; // x20
  int *v21; // x1
  unsigned __int64 v22; // x21
  Il2CppObject *v23; // x0
  UILabel_o *v24; // x8
  float v25; // s0 OVERLAPPED
  float v26; // s1
  float v27; // s2
  float v28; // s3
  int v29; // w21
  System_String_o *v30; // x20
  Il2CppObject *v31; // x0
  int v32; // [xsp+Ch] [xbp-44h] BYREF
  int v33; // [xsp+18h] [xbp-38h] BYREF
  int v34; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C95E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5786/*"EVENT_DAY_TXT"*/);
    sub_21FFC50(&StringLiteral_5951/*"EVENT_TIMEOVER_TXT"*/);
    sub_21FFC50(&StringLiteral_5952/*"EVENT_TIME_TXT"*/);
    sub_21FFC50(&StringLiteral_5854/*"EVENT_MIN_TXT"*/);
    byte_593C95E = 1;
  }
  endAt = this->fields.endAt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, now);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5951/*"EVENT_TIMEOVER_TXT"*/, 0);
  v9 = Method_System_Array_Empty_object___;
  v10 = v6;
  v11 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v11 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v11 = v9[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, v7);
  v13 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v8);
  v14 = System_String__Format_75484712(v10, **(System_Object_array ***)(v13 + 184), 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v15);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v35.fields.r = 1.0;
  v35.fields.g = 1.0;
  v35.fields.b = 1.0;
  v35.fields.a = 1.0;
  v18 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v35, 0);
  if ( (__int64)v18 < 1 )
    goto LABEL_26;
  v19 = v18 / 0x15180;
  if ( (int)(v18 / 0x15180) >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_DAY_TXT"*/, 0);
    v21 = &v34;
    v34 = v19;
LABEL_23:
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, v21);
    restTimeLabel = (UILabel_o *)System_String__Format(v20, v23, 0);
    v24 = this->fields.restTimeLabel;
    if ( !v24 )
      goto LABEL_32;
    v14 = (System_String_o *)restTimeLabel;
    v25 = 0.0;
    v26 = 0.0;
    v27 = 0.0;
    goto LABEL_25;
  }
  v22 = v18 / 0xE10;
  if ( (int)(v18 / 0xE10) >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5952/*"EVENT_TIME_TXT"*/, 0);
    v21 = &v33;
    v33 = v22;
    goto LABEL_23;
  }
  v29 = (v18 / 0x3C) & ~((int)(v18 / 0x3C) >> 31);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5854/*"EVENT_MIN_TXT"*/, 0);
  v32 = v29;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
  restTimeLabel = (UILabel_o *)System_String__Format(v30, v31, 0);
  v24 = this->fields.restTimeLabel;
  if ( !v24 )
LABEL_32:
    sub_21FFECC(restTimeLabel, v16);
  v25 = 1.0;
  v26 = 1.0;
  v14 = (System_String_o *)restTimeLabel;
  v27 = 1.0;
LABEL_25:
  v28 = 1.0;
  UILabel__set_effectColor(v24, *(UnityEngine_Color_o *)&v25, 0);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v14, 0);
}


void RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UISprite_o *textImage; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_593C95F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21676/*"img_txt_special_ascension"*/);
    byte_593C95F = 1;
  }
  textImage = this->fields.textImage;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_21676/*"img_txt_special_ascension"*/, 0);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_21FFECC(0, v4);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v5,
    v5->klass->vtable._33_MakePixelPerfect.method);
}