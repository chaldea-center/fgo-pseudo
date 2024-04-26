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
    sub_B7076C(v4, v5);
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
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_435430E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_RestTimeNoticeControl__Start_b__6_0__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435430E = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_B7076C(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v4);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  System_String_o *v6; // x21
  _QWORD **v7; // x25
  __int64 v8; // x22
  __int16 v9; // w8
  __int64 v10; // x22
  __int64 v11; // x22
  __int64 v12; // x22
  System_String_o *v13; // x21
  const MethodInfo *v14; // x1
  UILabel_o *restTimeLabel; // x22
  UILabel_o *v16; // x0
  __int64 v17; // x1
  int v18; // s0
  unsigned __int64 v22; // x20
  unsigned __int64 v23; // x21
  __int64 v24; // x2
  System_String_o *v25; // x20
  int *v26; // x1
  unsigned __int64 v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x20
  int v31; // s0
  int v35; // w21
  System_String_o *v36; // x20
  __int64 v37; // x2
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int v40; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  int v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_435430F & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_object___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5711/*"EVENT_DAY_TXT"*/);
    sub_B70694(&StringLiteral_5823/*"EVENT_TIMEOVER_TXT"*/);
    sub_B70694(&StringLiteral_5824/*"EVENT_TIME_TXT"*/);
    sub_B70694(&StringLiteral_5736/*"EVENT_MIN_TXT"*/);
    byte_435430F = 1;
  }
  endAt = this->fields.endAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5823/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v7 = (_QWORD **)Method_System_Array_Empty_object___;
  v8 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B08394(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B08394(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_B08394(*v7[6]);
  v13 = System_String__Format_44836892(v6, **(System_Object_array ***)(v12 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v14);
  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_37;
  v22 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, *(UnityEngine_Color_o *)&v18, 0LL);
  if ( (__int64)v22 < 1 )
    goto LABEL_31;
  v23 = v22 / 0x15180;
  if ( (int)(v22 / 0x15180) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5711/*"EVENT_DAY_TXT"*/, 0LL);
    v26 = &v42;
    v42 = v23;
    goto LABEL_29;
  }
  v27 = v22 / 0xE10;
  if ( (int)(v22 / 0xE10) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5824/*"EVENT_TIME_TXT"*/, 0LL);
    v41 = v27;
    v26 = &v41;
LABEL_29:
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v26, v24);
    v29 = System_String__Format(v25, v28, 0LL);
    v30 = this->fields.restTimeLabel;
    v13 = v29;
    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_black(0LL);
    if ( !v30 )
      goto LABEL_37;
    goto LABEL_30;
  }
  v35 = (v22 / 0x3C) & ~((int)(v22 / 0x3C) >> 31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5736/*"EVENT_MIN_TXT"*/, 0LL);
  v40 = v35;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v37);
  v39 = System_String__Format(v36, v38, 0LL);
  v30 = this->fields.restTimeLabel;
  v13 = v39;
  *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
  if ( !v30 )
LABEL_37:
    sub_B7076C(v16, v17);
LABEL_30:
  UILabel__set_effectColor(v30, *(UnityEngine_Color_o *)&v31, 0LL);
LABEL_31:
  v16 = this->fields.restTimeLabel;
  if ( !v16 )
    goto LABEL_37;
  UILabel__set_text(v16, v13, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  UISprite_o *textImage; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4354310 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&StringLiteral_20051/*"img_txt_special_ascension"*/);
    byte_4354310 = 1;
  }
  textImage = this->fields.textImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20051/*"img_txt_special_ascension"*/, 0LL);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_B7076C(0LL, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}