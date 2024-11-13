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
    sub_1BCAA3C(restTimeLabel, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B19B46 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_RestTimeNoticeControl__Start_b__6_0__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B19B46 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1BCAA3C(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v11);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__LoadOutGameAtlas(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestTimeNoticeControl__UpdateRestTime(
        RestTimeNoticeControl_o *this,
        int64_t now,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t endAt; // x24
  System_String_o *v18; // x0
  __int64 v19; // x1
  long double inited; // q0
  _QWORD *v21; // x22
  System_String_o *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x21
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v30; // x20
  unsigned __int64 v31; // x21
  System_String_o *v32; // x20
  int *v33; // x1
  unsigned __int64 v34; // x21
  Il2CppObject *v35; // x0
  UILabel_o *v36; // x8
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  int v41; // w21
  System_String_o *v42; // x20
  Il2CppObject *v43; // x0
  int v44; // [xsp+Ch] [xbp-44h] BYREF
  int v45; // [xsp+18h] [xbp-38h] BYREF
  int v46; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19B47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, now, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5699/*"EVENT_DAY_TXT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_5812/*"EVENT_TIME_TXT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5724/*"EVENT_MIN_TXT"*/, v15, v16);
    byte_4B19B47 = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, now);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v21 = Method_System_Array_Empty_object___;
  v22 = v18;
  v23 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v23 )
  {
    sub_1C1C718(Method_System_Array_Empty_object___, v19);
    v23 = v21[7];
  }
  v24 = *(_QWORD *)(v23 + 16);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v24 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v24, v19);
  v25 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(inited);
  v26 = System_String__Format_62415728(v22, **(System_Object_array ***)(v25 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v27);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  v30 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v47, 0LL);
  if ( (__int64)v30 < 1 )
    goto LABEL_26;
  v31 = v30 / 0x15180;
  if ( (int)(v30 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_DAY_TXT"*/, 0LL);
    v33 = &v46;
    v46 = v31;
LABEL_23:
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v33);
    restTimeLabel = (UILabel_o *)System_String__Format(v32, v35, 0LL);
    v36 = this->fields.restTimeLabel;
    if ( !v36 )
      goto LABEL_32;
    v26 = (System_String_o *)restTimeLabel;
    v37 = 0.0;
    v38 = 0.0;
    v39 = 0.0;
    goto LABEL_25;
  }
  v34 = v30 / 0xE10;
  if ( (int)(v30 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EVENT_TIME_TXT"*/, 0LL);
    v45 = v34;
    v33 = &v45;
    goto LABEL_23;
  }
  v41 = (v30 / 0x3C) & ~((int)(v30 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_MIN_TXT"*/, 0LL);
  v44 = v41;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  restTimeLabel = (UILabel_o *)System_String__Format(v42, v43, 0LL);
  v36 = this->fields.restTimeLabel;
  if ( !v36 )
LABEL_32:
    sub_1BCAA3C(restTimeLabel, v28);
  v26 = (System_String_o *)restTimeLabel;
  v37 = 1.0;
  v38 = 1.0;
  v39 = 1.0;
LABEL_25:
  v40 = 1.0;
  UILabel__set_effectColor(v36, *(UnityEngine_Color_o *)&v37, 0LL);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v26, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *textImage; // x20
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4B19B48 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20810/*"img_txt_special_ascension"*/, v4, v5);
    byte_4B19B48 = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20810/*"img_txt_special_ascension"*/, 0LL);
  v8 = this->fields.textImage;
  if ( !v8 )
    sub_1BCAA3C(0LL, v7);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}