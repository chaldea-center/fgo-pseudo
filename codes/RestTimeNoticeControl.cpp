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
    sub_1C372B4(restTimeLabel);
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

  if ( (byte_4C46FAB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_RestTimeNoticeControl__Start_b__6_0__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46FAB = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1C372B4(0);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v4);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  System_String_o *v24; // x20
  int *v25; // x1
  unsigned __int64 v26; // x21
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x8
  float v29; // s0 OVERLAPPED
  float v30; // s1
  float v31; // s2
  float v32; // s3
  int v33; // w21
  System_String_o *v34; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  int v42; // [xsp+Ch] [xbp-44h] BYREF
  int v43; // [xsp+18h] [xbp-38h] BYREF
  int v44; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C46FAC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_5598/*"EVENT_DAY_TXT"*/);
    sub_1C37058(&StringLiteral_5732/*"EVENT_TIMEOVER_TXT"*/);
    sub_1C37058(&StringLiteral_5733/*"EVENT_TIME_TXT"*/);
    sub_1C37058(&StringLiteral_5635/*"EVENT_MIN_TXT"*/);
    byte_4C46FAC = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_TIMEOVER_TXT"*/, 0);
  v8 = Method_System_Array_Empty_object___;
  v9 = v6;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v10 )
  {
    sub_1C877C8(Method_System_Array_Empty_object___);
    v10 = v8[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8776C(inited);
  v13 = System_String__Format_63603084(v9, **(System_Object_array ***)(v12 + 184), 0);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v14);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v45.fields.r = 1.0;
  v45.fields.g = 1.0;
  v45.fields.b = 1.0;
  v45.fields.a = 1.0;
  v16 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v45, 0);
  if ( (__int64)v16 < 1 )
    goto LABEL_26;
  v17 = v16 / 0x15180;
  if ( (int)(v16 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_DAY_TXT"*/, 0);
    v25 = &v44;
    v44 = v17;
LABEL_23:
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v25, v18, v19, v20, v21, v22, v23);
    restTimeLabel = (UILabel_o *)System_String__Format(v24, v27, 0);
    v28 = this->fields.restTimeLabel;
    if ( !v28 )
      goto LABEL_32;
    v13 = (System_String_o *)restTimeLabel;
    v29 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    goto LABEL_25;
  }
  v26 = v16 / 0xE10;
  if ( (int)(v16 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EVENT_TIME_TXT"*/, 0);
    v43 = v26;
    v25 = &v43;
    goto LABEL_23;
  }
  v33 = (v16 / 0x3C) & ~((int)(v16 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5635/*"EVENT_MIN_TXT"*/, 0);
  v42 = v33;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v35, v36, v37, v38, v39, v40);
  restTimeLabel = (UILabel_o *)System_String__Format(v34, v41, 0);
  v28 = this->fields.restTimeLabel;
  if ( !v28 )
LABEL_32:
    sub_1C372B4(restTimeLabel);
  v13 = (System_String_o *)restTimeLabel;
  v29 = 1.0;
  v30 = 1.0;
  v31 = 1.0;
LABEL_25:
  v32 = 1.0;
  UILabel__set_effectColor(v28, *(UnityEngine_Color_o *)&v29, 0);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v13, 0);
}


void RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UISprite_o *textImage; // x20
  struct UISprite_o *v4; // x0

  if ( (byte_4C46FAD & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&StringLiteral_20719/*"img_txt_special_ascension"*/);
    byte_4C46FAD = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20719/*"img_txt_special_ascension"*/, 0);
  v4 = this->fields.textImage;
  if ( !v4 )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v4,
    v4->klass->vtable._33_MakePixelPerfect.method);
}