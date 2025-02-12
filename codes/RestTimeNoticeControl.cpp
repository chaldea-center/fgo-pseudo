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
    sub_1C13F80(restTimeLabel, method);
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
  System_Action_o *v8; // x20

  if ( (byte_4BB80E7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AtlasManager_TypeInfo, v3);
    sub_1C13D24(&Method_RestTimeNoticeControl__Start_b__6_0__, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB80E7 = 1;
  }
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    sub_1C13F80(0LL, method);
  UILabel__set_text(restTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v7);
  v8 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RestTimeNoticeControl__Start_b__6_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
  System_String_o *v12; // x0
  long double inited; // q0
  _QWORD *v14; // x22
  System_String_o *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_String_o *v19; // x21
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UILabel_o *restTimeLabel; // x0
  unsigned __int64 v23; // x20
  unsigned __int64 v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x20
  int *v29; // x1
  unsigned __int64 v30; // x21
  Il2CppObject *v31; // x0
  UILabel_o *v32; // x8
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  int v37; // w21
  System_String_o *v38; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  int v43; // [xsp+Ch] [xbp-44h] BYREF
  int v44; // [xsp+18h] [xbp-38h] BYREF
  int v45; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB80E8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_object___, now);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_5724/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/, v7);
    sub_1C13D24(&StringLiteral_5840/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, v8);
    sub_1C13D24(&StringLiteral_5841/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v9);
    sub_1C13D24(&StringLiteral_5753/*"EVENT_ITEM_UNIT"*/, v10);
    byte_4BB80E8 = 1;
  }
  endAt = this->fields.endAt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  v14 = Method_System_Array_Empty_object___;
  v15 = v12;
  v16 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v16 )
  {
    sub_1C65C5C(Method_System_Array_Empty_object___);
    v16 = v14[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C65C00(inited);
  v19 = System_String__Format_62982452(v15, **(System_Object_array ***)(v18 + 184), 0LL);
  RestTimeNoticeControl__SetRestTimeLabelColorWhite(this, v20);
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  v46.fields.r = 1.0;
  v46.fields.g = 1.0;
  v46.fields.b = 1.0;
  v46.fields.a = 1.0;
  v23 = endAt - now;
  UILabel__set_effectColor(restTimeLabel, v46, 0LL);
  if ( (__int64)v23 < 1 )
    goto LABEL_26;
  v24 = v23 / 0x15180;
  if ( (int)(v23 / 0x15180) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/, 0LL);
    v29 = &v45;
    v45 = v24;
LABEL_23:
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v29, v25, v26, v27);
    restTimeLabel = (UILabel_o *)System_String__Format(v28, v31, 0LL);
    v32 = this->fields.restTimeLabel;
    if ( !v32 )
      goto LABEL_32;
    v19 = (System_String_o *)restTimeLabel;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
    goto LABEL_25;
  }
  v30 = v23 / 0xE10;
  if ( (int)(v23 / 0xE10) >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5841/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
    v44 = v30;
    v29 = &v44;
    goto LABEL_23;
  }
  v37 = (v23 / 0x3C) & ~((int)(v23 / 0x3C) >> 31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EVENT_ITEM_UNIT"*/, 0LL);
  v43 = v37;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v39, v40, v41);
  restTimeLabel = (UILabel_o *)System_String__Format(v38, v42, 0LL);
  v32 = this->fields.restTimeLabel;
  if ( !v32 )
LABEL_32:
    sub_1C13F80(restTimeLabel, v21);
  v19 = (System_String_o *)restTimeLabel;
  v33 = 1.0;
  v34 = 1.0;
  v35 = 1.0;
LABEL_25:
  v36 = 1.0;
  UILabel__set_effectColor(v32, *(UnityEngine_Color_o *)&v33, 0LL);
LABEL_26:
  restTimeLabel = this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_32;
  UILabel__set_text(restTimeLabel, v19, 0LL);
}


void __fastcall RestTimeNoticeControl___Start_b__6_0(RestTimeNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *textImage; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4BB80E9 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_20928/*"img_txt_recommendedsupport"*/, v3);
    byte_4BB80E9 = 1;
  }
  textImage = this->fields.textImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBondAtlasImage(textImage, (System_String_o *)StringLiteral_20928/*"img_txt_recommendedsupport"*/, 0LL);
  v6 = this->fields.textImage;
  if ( !v6 )
    sub_1C13F80(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}