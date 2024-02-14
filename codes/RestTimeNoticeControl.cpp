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
  int v5; // s0
  UILabel_o *v9; // x19
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_4;
  UILabel__set_gradientTop(restTimeLabel, *(UnityEngine_Color_o *)&v5, 0LL);
  v15.fields.r = 0.69804;
  v9 = this->fields.restTimeLabel;
  v15.fields.a = 1.0;
  v15.fields.g = 0.69804;
  v15.fields.b = 0.69804;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  UnityEngine_Color___ctor(v15, v10, v11, v12, v13, (const MethodInfo *)&v14);
  if ( !v9 )
LABEL_4:
    sub_B0D97C(v4);
  UILabel__set_gradientBottom(v9, v14, 0LL);
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

  if ( (byte_4217C1A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217C1A = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_B0D97C(0LL);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  UILabel_o *v22; // x0
  int v23; // s0
  unsigned __int64 v27; // x20
  unsigned __int64 v28; // x21
  System_String_o *v29; // x20
  int *v30; // x1
  unsigned __int64 v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *v34; // x20
  int v35; // s0
  int v39; // w21
  System_String_o *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int v43; // [xsp+Ch] [xbp-44h] BYREF
  int v44; // [xsp+18h] [xbp-38h] BYREF
  int v45; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4217C1B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_object___, now);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5639/*"EVENT_DAY_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_5750/*"EVENT_TIMEOVER_TXT"*/, v8);
    sub_B0D8A4(&StringLiteral_5751/*"EVENT_TIME_TXT"*/, v9);
    sub_B0D8A4(&StringLiteral_5663/*"EVENT_MIN_TXT"*/, v10);
    byte_4217C1B = 1;
  }
  endAt = this->fields.endAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v13 = (_QWORD **)Method_System_Array_Empty_object___;
  v14 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AA65A4(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AA65A4(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AA65A4(*v13[6]);
  v19 = System_String__Format_43928628(v12, **(System_Object_array ***)(v18 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v20);
  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_37;
  v27 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, *(UnityEngine_Color_o *)&v23, 0LL);
  if ( (__int64)v27 < 1 )
    goto LABEL_31;
  v28 = v27 / 0x15180;
  if ( (int)(v27 / 0x15180) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_DAY_TXT"*/, 0LL);
    v30 = &v45;
    v45 = v28;
    goto LABEL_29;
  }
  v31 = v27 / 0xE10;
  if ( (int)(v27 / 0xE10) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EVENT_TIME_TXT"*/, 0LL);
    v44 = v31;
    v30 = &v44;
LABEL_29:
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v30);
    v33 = System_String__Format(v29, v32, 0LL);
    v34 = this->fields.restTimeLabel;
    v19 = v33;
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_black(0LL);
    if ( !v34 )
      goto LABEL_37;
    goto LABEL_30;
  }
  v39 = (v27 / 0x3C) & ~((int)(v27 / 0x3C) >> 31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_MIN_TXT"*/, 0LL);
  v43 = v39;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = System_String__Format(v40, v41, 0LL);
  v34 = this->fields.restTimeLabel;
  v19 = v42;
  *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
  if ( !v34 )
LABEL_37:
    sub_B0D97C(v22);
LABEL_30:
  UILabel__set_effectColor(v34, *(UnityEngine_Color_o *)&v35, 0LL);
LABEL_31:
  v22 = this->fields.restTimeLabel;
  if ( !v22 )
    goto LABEL_37;
  UILabel__set_text(v22, v19, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *textImage; // x20
  struct UISprite_o *v5; // x0

  if ( (byte_4217C1C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19805/*"img_txt_special_ascension"*/, v3);
    byte_4217C1C = 1;
  }
  textImage = this->fields.textImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_19805/*"img_txt_special_ascension"*/, 0LL);
  v5 = this->fields.textImage;
  if ( !v5 )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}