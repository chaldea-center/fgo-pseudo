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
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  UILabel_o *v10; // x19
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_4;
  UILabel__set_gradientTop(restTimeLabel, *(UnityEngine_Color_o *)&v6, 0LL);
  v16.fields.r = 0.69804;
  v10 = this->fields.restTimeLabel;
  v16.fields.a = 1.0;
  v16.fields.g = 0.69804;
  v16.fields.b = 0.69804;
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  UnityEngine_Color___ctor(v16, v11, v12, v13, v14, (const MethodInfo *)&v15);
  if ( !v10 )
LABEL_4:
    sub_B5D69C(v4, v5);
  UILabel__set_gradientBottom(v10, v15, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_42EAEED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_RestTimeNoticeControl__Start_b__6_0__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EAEED = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_B5D69C(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v15);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestTimeNoticeControl__UpdateRestTime(
        RestTimeNoticeControl_o *this,
        int64_t now,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int64_t endAt; // x24
  System_String_o *v25; // x21
  _QWORD **v26; // x25
  __int64 v27; // x22
  __int16 v28; // w8
  __int64 v29; // x22
  __int64 v30; // x22
  __int64 v31; // x22
  System_String_o *v32; // x21
  const MethodInfo *v33; // x1
  UILabel_o *restTimeLabel; // x22
  UILabel_o *v35; // x0
  __int64 v36; // x1
  int v37; // s0
  unsigned __int64 v41; // x20
  unsigned __int64 v42; // x21
  System_String_o *v43; // x20
  int *v44; // x1
  unsigned __int64 v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UILabel_o *v48; // x20
  int v49; // s0
  int v53; // w21
  System_String_o *v54; // x20
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  int v57; // [xsp+Ch] [xbp-44h] BYREF
  int v58; // [xsp+18h] [xbp-38h] BYREF
  int v59; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EAEEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, now, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5700/*"EVENT_DAY_TXT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5812/*"EVENT_TIME_TXT"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5724/*"EVENT_MIN_TXT"*/, v21, v22, v23);
    byte_42EAEEE = 1;
  }
  endAt = this->fields.endAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v26 = (_QWORD **)Method_System_Array_Empty_object___;
  v27 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v28 = *(_WORD *)(v27 + 306);
  if ( (v28 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v28 = *(_WORD *)(v27 + 306);
  }
  if ( (v28 & 0x400) != 0 )
  {
    v29 = *v26[6];
    if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
      sub_AF52C4(*v26[6]);
    if ( !*(_DWORD *)(v29 + 224) )
    {
      v30 = *v26[6];
      if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
        sub_AF52C4(*v26[6]);
      j_il2cpp_runtime_class_init_0(v30);
    }
  }
  v31 = *v26[6];
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AF52C4(*v26[6]);
  v32 = System_String__Format_44656512(v25, **(System_Object_array ***)(v31 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v33);
  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_37;
  v41 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, *(UnityEngine_Color_o *)&v37, 0LL);
  if ( (__int64)v41 < 1 )
    goto LABEL_31;
  v42 = v41 / 0x15180;
  if ( (int)(v41 / 0x15180) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_DAY_TXT"*/, 0LL);
    v44 = &v59;
    v59 = v42;
    goto LABEL_29;
  }
  v45 = v41 / 0xE10;
  if ( (int)(v41 / 0xE10) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EVENT_TIME_TXT"*/, 0LL);
    v58 = v45;
    v44 = &v58;
LABEL_29:
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v44);
    v47 = System_String__Format(v43, v46, 0LL);
    v48 = this->fields.restTimeLabel;
    v32 = v47;
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_black(0LL);
    if ( !v48 )
      goto LABEL_37;
    goto LABEL_30;
  }
  v53 = (v41 / 0x3C) & ~((int)(v41 / 0x3C) >> 31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_MIN_TXT"*/, 0LL);
  v57 = v53;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v56 = System_String__Format(v54, v55, 0LL);
  v48 = this->fields.restTimeLabel;
  v32 = v56;
  *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
  if ( !v48 )
LABEL_37:
    sub_B5D69C(v35, v36);
LABEL_30:
  UILabel__set_effectColor(v48, *(UnityEngine_Color_o *)&v49, 0LL);
LABEL_31:
  v35 = this->fields.restTimeLabel;
  if ( !v35 )
    goto LABEL_37;
  UILabel__set_text(v35, v32, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UISprite_o *textImage; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0

  if ( (byte_42EAEEF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19992/*"img_txt_special_ascension"*/, v5, v6, v7);
    byte_42EAEEF = 1;
  }
  textImage = this->fields.textImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_19992/*"img_txt_special_ascension"*/, 0LL);
  v10 = this->fields.textImage;
  if ( !v10 )
    sub_B5D69C(0LL, v9);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
    v10,
    v10->klass->vtable._34_get_minWidth.methodPtr);
}