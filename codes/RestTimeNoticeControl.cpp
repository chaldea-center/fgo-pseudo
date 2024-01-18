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
    sub_B2C434(v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *restTimeLabel; // x0
  const MethodInfo *v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_418ADDE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418ADDE = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_B2C434(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  __int64 v23; // x1
  int v24; // s0
  unsigned __int64 v28; // x20
  unsigned __int64 v29; // x21
  System_String_o *v30; // x20
  int *v31; // x1
  unsigned __int64 v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *v35; // x20
  int v36; // s0
  int v40; // w21
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  int v44; // [xsp+Ch] [xbp-44h] BYREF
  int v45; // [xsp+18h] [xbp-38h] BYREF
  int v46; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_418ADDF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, now);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_5623/*"EVENT_DAY_TXT"*/, v7);
    sub_B2C35C(&StringLiteral_5734/*"EVENT_TIMEOVER_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_5735/*"EVENT_TIME_TXT"*/, v9);
    sub_B2C35C(&StringLiteral_5647/*"EVENT_MIN_TXT"*/, v10);
    byte_418ADDF = 1;
  }
  endAt = this->fields.endAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5734/*"EVENT_TIMEOVER_TXT"*/, 0LL);
  v13 = (_QWORD **)Method_System_Array_Empty_object___;
  v14 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AC505C(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AC505C(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AC505C(*v13[6]);
  v19 = System_String__Format_44384256(v12, **(System_Object_array ***)(v18 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v20);
  restTimeLabel = this->fields.restTimeLabel;
  *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
  if ( !restTimeLabel )
    goto LABEL_37;
  v28 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, *(UnityEngine_Color_o *)&v24, 0LL);
  if ( (__int64)v28 < 1 )
    goto LABEL_31;
  v29 = v28 / 0x15180;
  if ( (int)(v28 / 0x15180) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5623/*"EVENT_DAY_TXT"*/, 0LL);
    v31 = &v46;
    v46 = v29;
    goto LABEL_29;
  }
  v32 = v28 / 0xE10;
  if ( (int)(v28 / 0xE10) >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_TIME_TXT"*/, 0LL);
    v45 = v32;
    v31 = &v45;
LABEL_29:
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v31);
    v34 = System_String__Format(v30, v33, 0LL);
    v35 = this->fields.restTimeLabel;
    v19 = v34;
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_black(0LL);
    if ( !v35 )
      goto LABEL_37;
    goto LABEL_30;
  }
  v40 = (v28 / 0x3C) & ~((int)(v28 / 0x3C) >> 31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_MIN_TXT"*/, 0LL);
  v44 = v40;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v43 = System_String__Format(v41, v42, 0LL);
  v35 = this->fields.restTimeLabel;
  v19 = v43;
  *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
  if ( !v35 )
LABEL_37:
    sub_B2C434(v22, v23);
LABEL_30:
  UILabel__set_effectColor(v35, *(UnityEngine_Color_o *)&v36, 0LL);
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
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_418ADE0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_19743/*"img_txt_special_ascension"*/, v3);
    byte_418ADE0 = 1;
  }
  textImage = this->fields.textImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_19743/*"img_txt_special_ascension"*/, 0LL);
  v6 = this->fields.textImage;
  if ( !v6 )
    sub_B2C434(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}