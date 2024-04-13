void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_Int32_array **v48; // x1
  struct ScriptMessageLabel_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v56; // x19
  __int64 v57; // x0
  __int64 v58; // x1
  struct ScriptMessageLabel_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_Dictionary_int__int__o *v66; // x19
  struct ScriptMessageLabel_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42EE450 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15991/*"[line "*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_20719/*"medium"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_22471/*"small"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_23681/*"x-small"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20433/*"large"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_23661/*"x-large"*/, v44, v45, v46);
    byte_42EE450 = 1;
  }
  ScriptMessageLabel_TypeInfo->static_fields->PLAY_VOICE_POSITION_X = -490.0;
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  v48 = (System_Int32_array **)StringLiteral_15991/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15991/*"[line "*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->LINE_ORDER, v48, v2, v3, v4, v5, v6, v7);
  v49 = ScriptMessageLabel_TypeInfo->static_fields;
  v49->codeClassSplitStringList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v49->codeClassSplitStringList, 0LL, v50, v51, v52, v53, v54, v55);
  v56 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v56,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v56 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_755/*"-"*/,
    29,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_23681/*"x-small"*/,
    19,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_22471/*"small"*/,
    24,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_20719/*"medium"*/,
    29,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_20433/*"large"*/,
    48,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v56,
    (UIPanel_o *)StringLiteral_23661/*"x-large"*/,
    64,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v59 = ScriptMessageLabel_TypeInfo->static_fields;
  v59->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v56;
  sub_B5D560((BattleServantConfConponent_o *)&v59->fontSizes, (System_Int32_array **)v56, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v66,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v66 )
LABEL_6:
    sub_B5D69C(v57, v58);
  System_Collections_Generic_Dictionary_int__int___Add(
    v66,
    24,
    0,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v66,
    29,
    1,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v66,
    48,
    2,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v66,
    64,
    3,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v67 = ScriptMessageLabel_TypeInfo->static_fields;
  v67->fontSizeIndexTable = v66;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v67->fontSizeIndexTable,
    (System_Int32_array **)v66,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
}


void __fastcall ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42EE44F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EE44F = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_array *__fastcall ScriptMessageLabel__AnalysTagParam(
        System_String_o *txt,
        int32_t bindex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w21
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Text_StringBuilder_o *Chars; // x0
  __int64 v20; // x1
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v22; // x22
  int v23; // w25
  int32_t v24; // w1
  __int16 v25; // w23
  int32_t v26; // w23
  uint16_t v27; // w0

  v4 = bindex;
  if ( (byte_42EE437 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, bindex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v15, v16, v17);
    byte_42EE437 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_31;
  m_stringLength = txt->fields.m_stringLength;
  v22 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v22, m_stringLength, 0LL);
  if ( txt->fields.m_stringLength > v4 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = v4++;
      Chars = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v24, 0LL);
      v25 = (__int16)Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v23 )
        goto LABEL_17;
      if ( !v22 )
        goto LABEL_31;
      Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                                               v22,
                                               v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v18 )
        goto LABEL_31;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      System_Text_StringBuilder__set_Length(v22, 0, 0LL);
      v23 = 0;
LABEL_24:
      if ( v4 >= txt->fields.m_stringLength )
        goto LABEL_25;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v23;
      if ( !v22 )
        goto LABEL_31;
    }
    else
    {
      if ( (unsigned __int16)Chars == 93 && --v23 < 0 )
        goto LABEL_25;
LABEL_17:
      if ( !v22 )
        goto LABEL_31;
    }
    Chars = System_Text_StringBuilder__Append_42956988(v22, (uint16_t)Chars, 0LL);
    if ( v25 == 34 )
    {
      if ( v4 < txt->fields.m_stringLength )
      {
        do
        {
          v26 = v4 + 1;
          v27 = System_String__get_Chars(txt, v4, 0LL);
          if ( v27 == 34 )
            break;
          System_Text_StringBuilder__Append_42956988(v22, v27, 0LL);
          ++v4;
        }
        while ( v26 < txt->fields.m_stringLength );
        v4 = v26;
      }
      Chars = System_Text_StringBuilder__Append_42956988(v22, 0x22u, 0LL);
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( !v22 )
    goto LABEL_31;
  Chars = (System_Text_StringBuilder_o *)System_Text_StringBuilder__get_Length(v22, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v18 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_31:
    sub_B5D69C(Chars, v20);
  }
  Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                                           v22,
                                           v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v18 )
    goto LABEL_31;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v18,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_42EE44B & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE44B = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    playVoiceAssetName = this->fields.playVoiceAssetName;
    playVoiceObjectName = this->fields.playVoiceObjectName;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0LL) )
      this->fields.isPlayingVoice = 1;
  }
}


void __fastcall ScriptMessageLabel__ClearLogDraw(
        ScriptMessageLabel_o *this,
        UnityEngine_GameObject_o *mainObject,
        UnityEngine_GameObject_o *rubyObject,
        UnityEngine_GameObject_o *imageObject,
        UnityEngine_GameObject_o *playVoiceObject,
        UnityEngine_GameObject_o *playVoiceEffect,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UILabel_o *v18; // x23
  UILabel_o *v19; // x22
  ScriptMessageLabel_o *v20; // x21

  if ( (byte_42EE440 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UILabel___,
      (_DWORD)mainObject,
      (_DWORD)rubyObject,
      imageObject);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13, v14);
    this = (ScriptMessageLabel_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EE440 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   mainObject,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v18 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   rubyObject,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v19 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         imageObject,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v18)
    || (v20 = this, UILabel__set_text(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v19)
    || (UILabel__set_text(v19, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v20)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, float))v20->klass[1]._1.castClass)(
                                         v20,
                                         v20->klass[1]._1.declaringType,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0LL), !playVoiceEffect) )
  {
LABEL_12:
    sub_B5D69C(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_B5D69C(0LL, method);
  if ( s->fields.m_stringLength < 1 )
    return 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    Chars = System_String__get_Chars(s, v3, 0LL);
    if ( (unsigned __int16)(Chars - 65) > 0x19u )
      break;
    ++v3;
    v4 = (Chars - 65) | (v4 << 8);
    if ( v3 >= s->fields.m_stringLength )
      return v4;
  }
  return -1;
}


int32_t __fastcall ScriptMessageLabel__ConvertInteger(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w20
  int v4; // w21
  int v5; // w22
  uint16_t Chars; // w0

  if ( !s )
    sub_B5D69C(0LL, method);
  if ( s->fields.m_stringLength >= 1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 1;
    while ( 1 )
    {
      Chars = System_String__get_Chars(s, v3, 0LL);
      if ( (unsigned __int16)(Chars - 48) > 9u )
      {
        if ( (unsigned __int16)(Chars + 240) <= 9u )
        {
          v4 = v4 + Chars + 10 * v4 - 65296;
        }
        else
        {
          if ( Chars != 65293 && Chars != 45 || v5 != 1 )
            return 0;
          v5 = -1;
        }
      }
      else
      {
        v4 = v4 + Chars + 10 * v4 - 48;
      }
      if ( ++v3 >= s->fields.m_stringLength )
        return v5 * v4;
    }
  }
  v4 = 0;
  v5 = 1;
  return v5 * v4;
}


void __fastcall ScriptMessageLabel__DestoryEffect(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_GameObject_o **p_frontEffect; // x20
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_effect; // x19
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EE43D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE43D = 1;
  }
  p_frontEffect = &this->fields.frontEffect;
  frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v7, 0LL);
    *p_frontEffect = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.frontEffect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  effect = this->fields.effect;
  p_effect = (BattleServantConfConponent_o *)&this->fields.effect;
  v15 = (UnityEngine_Object_o *)effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_effect->klass = 0LL;
    sub_B5D560(p_effect, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  UnityEngine_Object_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_42EE43B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE43B = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v10, v11, v12, v13, v14, v15);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_49;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v18, 0LL);
    *p_ruby = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.ruby, 0LL, v19, v20, v21, v22, v23, v24);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_49;
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v27, 0LL);
    *p_image = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.image, 0LL, v28, v29, v30, v31, v32, v33);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_49;
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v36, 0LL);
    *p_playVoice = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoice, 0LL, v37, v38, v39, v40, v41, v42);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v45 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v45, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceEffect, 0LL, v46, v47, v48, v49, v50, v51);
      goto LABEL_48;
    }
LABEL_49:
    sub_B5D69C(v8, v7);
  }
LABEL_48:
  ScriptMessageLabel__DestoryEffect(this, v7);
  this->fields.fontType = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v52, v53, v54, v55, v56, v57);
}


bool __fastcall ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  bool result; // w0
  System_String_o *v15; // x0
  int Chars; // w8
  int32_t m_stringLength; // w8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  int32_t v25; // w22
  int32_t v26; // w23
  uint16_t v27; // w24
  System_String_o **v28; // x0

  if ( (byte_42EE431 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)text, (_DWORD)overrideColor, method);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42EE431 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v15 = *text;
  if ( !*text )
    goto LABEL_30;
  Chars = System_String__get_Chars(v15, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v15 = *text;
  if ( !*text )
LABEL_30:
    sub_B5D69C(v15, v13);
  m_stringLength = v15->fields.m_stringLength;
  if ( m_stringLength != 10 && m_stringLength != 8 )
  {
    if ( m_stringLength == 3 && System_String__op_Equality(v15, (System_String_o *)StringLiteral_15834/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        v24 = (System_Int32_array **)StringLiteral_1/*""*/;
LABEL_27:
        v28 = colorTag;
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    return 0;
  }
  v25 = m_stringLength - 1;
  if ( System_String__get_Chars(v15, m_stringLength - 1, 0LL) != 93 )
    return 0;
  v26 = 1;
  do
  {
    v15 = *text;
    if ( !*text )
      goto LABEL_30;
    v27 = System_String__get_Chars(v15, v26, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( (unsigned __int16)(v27 - 48) >= 0xAu
      && ((unsigned int)v27 - 65 > 0x25 || ((1LL << ((unsigned __int8)v27 - 65)) & 0x3F0000003FLL) == 0) )
    {
      return 0;
    }
    ++v26;
  }
  while ( v26 < v25 );
  if ( !overrideColor )
  {
    v24 = (System_Int32_array **)*text;
    *colorTag = *text;
    goto LABEL_27;
  }
LABEL_25:
  *text = overrideColor;
  sub_B5D560((BattleServantConfConponent_o *)text, (System_Int32_array **)overrideColor, v18, v19, v20, v21, v22, v23);
  *colorTag = overrideColor;
  v28 = colorTag;
  v24 = (System_Int32_array **)overrideColor;
LABEL_28:
  sub_B5D560((BattleServantConfConponent_o *)v28, v24, v18, v19, v20, v21, v22, v23);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_B5D69C(0LL, start);
  v3 = start;
  if ( txt->fields.m_stringLength > start )
  {
    v5 = 0;
    do
    {
      if ( System_String__get_Chars(txt, v3, 0LL) == 91 )
      {
        ++v5;
      }
      else if ( System_String__get_Chars(txt, v3, 0LL) == 93 )
      {
        if ( !v5 )
          return v3;
        --v5;
      }
      ++v3;
    }
    while ( v3 < txt->fields.m_stringLength );
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ScriptMessageLabel__GetColor(System_String_o *colorTag, const MethodInfo *method)
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
  System_Char_array *v14; // x0
  System_Char_array *v15; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v23; // x0
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE444 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_319/*"#"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EE444 = 1;
  }
  *(_QWORD *)&v24.fields.r = 0LL;
  *(_QWORD *)&v24.fields.b = 0LL;
  if ( !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15834/*"[-]"*/, 0LL) )
  {
    goto LABEL_11;
  }
  v14 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_14;
  max_length = v14->max_length;
  v15 = v14;
  if ( !max_length || (v14->m_Items[2] = 91, max_length == 1) )
  {
    v23 = sub_B5D6C8(v14);
    sub_B5D668(v23, 0LL);
  }
  v14->m_Items[3] = 93;
  if ( !colorTag )
LABEL_14:
    sub_B5D69C(v14, v15);
  v17 = System_String__Trim(colorTag, v14, 0LL);
  v18 = System_String__Concat_44577788((System_String_o *)StringLiteral_319/*"#"*/, v17, 0LL);
  if ( UnityEngine_ColorUtility__TryParseHtmlString(v18, &v24, 0LL) )
  {
    g = v24.fields.g;
    r = v24.fields.r;
    b = v24.fields.b;
    a = v24.fields.a;
  }
  else
  {
LABEL_11:
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  }
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


System_String_o *__fastcall ScriptMessageLabel__GetCommandName(
        System_String_o *txt,
        int32_t start,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  System_Text_StringBuilder_o *v6; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v8; // x1

  v4 = start;
  if ( (byte_42EE436 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, start, (_DWORD)method, v3);
    byte_42EE436 = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v6, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        v4 < txt->fields.m_stringLength;
        appended = System_Text_StringBuilder__Append_42956988(v6, (uint16_t)appended, 0LL) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v4, 0LL);
    v8 = (unsigned int)appended;
    if ( (unsigned int)(unsigned __int16)appended - 32 <= 0x3D
      && ((1LL << ((unsigned __int8)appended - 32)) & 0x2800000004000001LL) != 0 )
    {
      break;
    }
    if ( !v6 )
      goto LABEL_11;
    ++v4;
  }
  if ( !v6 )
LABEL_11:
    sub_B5D69C(appended, v8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int32_t __fastcall ScriptMessageLabel__GetFontSize(
        System_String_o *sizeName,
        int32_t defaultSize,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  ScriptMessageLabel_c *v14; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v16; // x0

  if ( (byte_42EE42B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, defaultSize, (_DWORD)method, v3);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v9, v10, v11);
    byte_42EE42B = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_755/*"-"*/, 0LL) )
  {
    v16 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v16 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = v16->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               fontSizes,
               sizeName,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_17:
    sub_B5D69C(fontSizes, v12);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v14 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v14 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v14->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_17;
  sizeName = (System_String_o *)StringLiteral_755/*"-"*/;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           fontSizes,
           sizeName,
           (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *__fastcall ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  ScriptMessageLabel_c *v26; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  int v29; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE42C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v17, v18, v19);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v23, v24, v25);
    byte_42EE42C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v26 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v26 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v26->static_fields->fontSizes;
  if ( !fontSizes )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v31,
    fontSizes,
    (const MethodInfo_2F1B9D8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v31,
            (const MethodInfo_27659D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v31.fields.current.fields.value) == size )
    {
      key = v31.fields.current.fields.key;
      v29 = 8;
      goto LABEL_12;
    }
  }
  key = 0LL;
  v29 = 2;
LABEL_12:
  System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v31,
    (const MethodInfo_2765B3C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  if ( v29 != 8 )
    return (System_String_o *)StringLiteral_755/*"-"*/;
  return (System_String_o *)key;
}


float __fastcall ScriptMessageLabel__GetHorizontalAlignedPosition(
        ScriptMessageLabel_o *this,
        float posX,
        float width,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( horizontalAlign == 2 )
    return posX - width;
  if ( horizontalAlign == 1 )
    return posX + (float)(width * -0.5);
  return posX;
}


ScriptMessageLabel_o *__fastcall ScriptMessageLabel__GetLogLabel(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **mainText; // x1
  System_Int32_array **rubyText; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **imageText; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **playVoiceAssetName; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **playVoiceObjectName; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **setReplayingVoice; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **fontType; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **colorTag; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  ScriptMessageLabel_o *result; // x0

  if ( (byte_42EE43E & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE43E = 1;
  }
  v5 = sub_B5D694(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v5, v6);
  if ( !v5 )
    sub_B5D69C(v7, v8);
  mainText = (System_Int32_array **)this->fields.mainText;
  *(_QWORD *)(v5 + 120) = mainText;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 120), mainText, v9, v10, v11, v12, v13, v14);
  rubyText = (System_Int32_array **)this->fields.rubyText;
  *(_QWORD *)(v5 + 128) = rubyText;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 128), rubyText, v17, v18, v19, v20, v21, v22);
  imageText = (System_Int32_array **)this->fields.imageText;
  *(_QWORD *)(v5 + 136) = imageText;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 136), imageText, v24, v25, v26, v27, v28, v29);
  playVoiceAssetName = (System_Int32_array **)this->fields.playVoiceAssetName;
  *(_QWORD *)(v5 + 144) = playVoiceAssetName;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 144), playVoiceAssetName, v31, v32, v33, v34, v35, v36);
  playVoiceObjectName = (System_Int32_array **)this->fields.playVoiceObjectName;
  *(_QWORD *)(v5 + 152) = playVoiceObjectName;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 152), playVoiceObjectName, v38, v39, v40, v41, v42, v43);
  *(float *)(v5 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = (System_Int32_array **)this->fields.setReplayingVoice;
  *(_QWORD *)(v5 + 184) = setReplayingVoice;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 184), setReplayingVoice, v45, v46, v47, v48, v49, v50);
  fontType = (System_Int32_array **)this->fields.fontType;
  *(_QWORD *)(v5 + 88) = fontType;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 88), fontType, v52, v53, v54, v55, v56, v57);
  *(_DWORD *)(v5 + 96) = this->fields.fontSize;
  *(_DWORD *)(v5 + 100) = this->fields.rubySize;
  colorTag = (System_Int32_array **)this->fields.colorTag;
  *(_QWORD *)(v5 + 112) = colorTag;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 112), colorTag, v59, v60, v61, v62, v63, v64);
  result = (ScriptMessageLabel_o *)v5;
  *(float *)(v5 + 104) = this->fields.widthSize;
  *(struct UnityEngine_Vector2_o *)(v5 + 72) = this->fields.mainPosition;
  *(struct UnityEngine_Vector2_o *)(v5 + 80) = this->fields.rubyPosition;
  *(float *)(v5 + 108) = this->fields.yOffset;
  *(_BYTE *)(v5 + 192) = this->fields.isPlayingVoice;
  return result;
}


float __fastcall ScriptMessageLabel__GetLogRangeY(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  return this->fields.mainPosition.fields.y + (float)this->fields.fontSize;
}


System_String_o *__fastcall ScriptMessageLabel__GetServantChangeName(
        System_String_array *param,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x8
  int32_t v15; // w20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantEntity_o *Entity; // x0
  LocalizationManager_c *v20; // x0
  unsigned int max_length; // w8
  __int64 v22; // x0

  v4 = param;
  if ( (byte_42EE43A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    param = (System_String_array *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE43A = 1;
  }
  if ( !v4 )
    goto LABEL_29;
  v14 = *(_QWORD *)&v4->max_length;
  if ( !v14 )
    goto LABEL_29;
  if ( !(_DWORD)v14 )
    goto LABEL_26;
  v15 = System_Int32__Parse(v4->m_Items[0], 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v17);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v15,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( (int)v4->max_length < 3 )
      return ServantEntity__getName(Entity, -1, -1, 0LL);
    param = (System_String_array *)ServantEntity__IsNameTrue(Entity, 0LL);
    max_length = v4->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( max_length > 2 )
        return v4->m_Items[2];
LABEL_26:
      v22 = sub_B5D6C8(param);
      sub_B5D668(v22, 0LL);
    }
    if ( max_length <= 1 )
      goto LABEL_26;
    return v4->m_Items[1];
  }
  else
  {
LABEL_29:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E6772 = 1;
    }
    v20 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager_TypeInfo;
    }
    return v20->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int m_stringLength; // w24
  System_Collections_Generic_List_int__o *v33; // x20
  int32_t v34; // w21
  int v35; // w23
  int32_t v36; // w21
  int v37; // w23
  System_Text_StringBuilder_o *v38; // x21
  int v39; // w25
  int32_t i; // w22
  int v41; // w28
  int v42; // w8
  System_String_o **v43; // x8
  _BYTE v45[32]; // [xsp+8h] [xbp-98h] BYREF
  int v46; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+30h] [xbp-70h] BYREF

  v4 = txt;
  if ( (byte_42EE435 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_24290/*"［"*/, v26, v27, v28);
    txt = (System_String_o *)sub_B5D5C4(&StringLiteral_24291/*"］"*/, v29, v30, v31);
    byte_42EE435 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  if ( !v4 )
    goto LABEL_44;
  m_stringLength = v4->fields.m_stringLength;
  v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( m_stringLength >= 1 )
  {
    v34 = 0;
    v35 = 0;
    do
    {
      if ( System_String__get_Chars(v4, v34, 0LL) == 91 )
      {
        ++v35;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v4, v34, 0LL);
        if ( (unsigned __int16)txt == 93 && --v35 < 0 )
        {
          if ( !v33 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v33,
            v34,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v35 = 0;
        }
      }
      ++v34;
    }
    while ( v34 < m_stringLength );
  }
  v36 = m_stringLength - 1;
  if ( m_stringLength - 1 >= 0 )
  {
    v37 = 0;
    do
    {
      if ( System_String__get_Chars(v4, v36, 0LL) == 93 )
      {
        ++v37;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v4, v36, 0LL);
        if ( (unsigned __int16)txt == 91 && --v37 < 0 )
        {
          if ( !v33 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v33,
            v36,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v37 = 0;
        }
      }
      --v36;
    }
    while ( v36 >= 0 );
  }
  v38 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v38, 0LL);
  if ( m_stringLength < 1 )
  {
    if ( v38 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
                                  v38,
                                  v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_44:
    sub_B5D69C(txt, method);
  }
  if ( !v33 )
    goto LABEL_44;
  v39 = 0;
  for ( i = 0; i < m_stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v45,
      v33,
      (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v47 = *(System_Collections_Generic_List_Enumerator_int__o *)v45;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v47,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      if ( i == v47.fields.current )
      {
        v41 = 1;
        goto LABEL_30;
      }
    }
    v41 = 0;
LABEL_30:
    *(_DWORD *)&v45[4 * v39 + 24] = 203;
    v39 = ++v46;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v47,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v39 )
    {
      v42 = v39 - 1;
      if ( *(_DWORD *)&v45[4 * v39 + 20] == 203 )
      {
        --v39;
        v46 = v42;
      }
    }
    txt = (System_String_o *)System_String__get_Chars(v4, i, 0LL);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v41 )
    {
      if ( !v38 )
        goto LABEL_44;
      v43 = (System_String_o **)&StringLiteral_24290/*"［"*/;
      if ( (unsigned __int16)txt != 91 )
        v43 = (System_String_o **)&StringLiteral_24291/*"］"*/;
      System_Text_StringBuilder__Append_42953744(v38, *v43, 0LL);
    }
    else
    {
      if ( !v38 )
        goto LABEL_44;
      System_Text_StringBuilder__Append_42956988(v38, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
                              v38,
                              v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  int v5; // w22
  System_String_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v11; // x20
  int v12; // w25
  System_String_o *v13; // x23
  int v14; // w26
  __int16 v15; // w24
  int v16; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_42EE438 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, bindex, index, method);
    txt = (System_String_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EE438 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  m_stringLength = v6->fields.m_stringLength;
  v11 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v11, m_stringLength, 0LL);
  v12 = 1;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v6->fields.m_stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v14 = 0;
    bindex = v5;
    while ( 1 )
    {
      v5 = bindex + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0LL);
      v15 = (__int16)txt;
      if ( (unsigned __int16)txt == 58 )
        break;
      if ( (unsigned __int16)txt != 91 )
      {
        if ( (unsigned __int16)txt == 93 && --v14 < 0 )
          goto LABEL_28;
        goto LABEL_14;
      }
      ++v14;
      if ( !v11 )
        goto LABEL_32;
LABEL_15:
      txt = (System_String_o *)System_Text_StringBuilder__Append_42956988(v11, (uint16_t)txt, 0LL);
      if ( v15 == 34 )
      {
        if ( v5 < v6->fields.m_stringLength )
        {
          do
          {
            v16 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_42956988(v11, Chars, 0LL);
            ++v5;
          }
          while ( v16 < v6->fields.m_stringLength );
          v5 = v16;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_42956988(v11, 0x22u, 0LL);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields.m_stringLength )
        goto LABEL_28;
    }
    if ( v14 )
    {
LABEL_14:
      if ( !v11 )
        goto LABEL_32;
      goto LABEL_15;
    }
    if ( v12 == index )
    {
      if ( v11 )
      {
        v13 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                                   v11,
                                   v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_B5D69C(txt, *(_QWORD *)&bindex);
    }
    if ( !v11 )
      goto LABEL_32;
LABEL_27:
    ++v12;
    System_Text_StringBuilder__set_Length(v11, 0, 0LL);
  }
  while ( v5 < v6->fields.m_stringLength );
LABEL_28:
  if ( v12 != index )
    return v13;
  if ( !v11 )
    goto LABEL_32;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall ScriptMessageLabel__GetTalkName(
        System_String_o **imageName,
        System_String_o **className,
        System_String_o **charaName,
        int32_t *charaIndex,
        System_String_o *talkName,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  unsigned __int64 Chars; // x0
  const MethodInfo *v51; // x1
  System_Int32_array **v52; // x26
  ScriptMessageLabel_c *v53; // x8
  __int64 v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ScriptMessageLabel_c *v61; // x8
  System_Int32_array **v62; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_String_array *codeClassSplitStringList; // x25
  System_String_array *v71; // x25
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x8
  int v91; // w9
  int v92; // w28
  int v93; // w26
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  Il2CppClass **v109; // x26
  System_String_o **v110; // x26
  System_String_o *v111; // t1
  System_String_o *v112; // x26
  int32_t m_stringLength; // w8
  System_String_o **v114; // x8
  System_String_o **v115; // x0
  System_String_o *v116; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // x20
  __int64 v118; // x8
  unsigned __int64 i; // x19
  __int64 v120; // x0
  __int64 v121; // x0
  System_Int32_array **v122; // [xsp+0h] [xbp-80h]
  int v123; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint16_t v125; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EE439 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantClassMaster___,
      (_DWORD)className,
      (_DWORD)charaName,
      charaIndex);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&string___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_19557/*"icon_class_{0:D3}"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_24286/*"："*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11721/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    byte_42EE439 = 1;
  }
  v125 = 0;
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Chars = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11721/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v52 = (System_Int32_array **)Chars;
  v53 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v53 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v53->static_fields->codeClassSplitStringList )
  {
    v54 = sub_B5D5DC(string___TypeInfo, 1LL);
    v61 = ScriptMessageLabel_TypeInfo;
    v62 = (System_Int32_array **)v54;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v61 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v61->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v62;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->codeClassSplitStringList,
      v62,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    codeClassSplitStringList = ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_66:
      sub_B5D69C(Chars, v51);
    if ( v52 )
    {
      Chars = sub_B5D684(v52, codeClassSplitStringList->obj.klass->_1.element_class);
      if ( !Chars )
      {
        v121 = sub_B5D6BC(0LL);
        sub_B5D668(v121, 0LL);
      }
    }
    if ( !codeClassSplitStringList->max_length )
      goto LABEL_67;
    codeClassSplitStringList->m_Items[0] = (System_String_o *)v52;
    sub_B5D560((BattleServantConfConponent_o *)codeClassSplitStringList->m_Items, v52, v64, v65, v66, v67, v68, v69);
    v53 = ScriptMessageLabel_TypeInfo;
  }
  if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v53);
  if ( !talkName )
    goto LABEL_66;
  v71 = System_String__Split_44640408(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)imageName, 0LL, v72, v73, v74, v75, v76, v77);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)className,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  *charaIndex = -1;
  if ( !v71 )
    goto LABEL_66;
  v90 = *(_QWORD *)&v71->max_length;
  v91 = v90 - 1;
  if ( (int)v90 - 1 < 1 )
    goto LABEL_48;
  v122 = v52;
  v92 = 0;
  do
  {
    if ( v92 >= (unsigned int)v90 )
      goto LABEL_67;
    v109 = &v71->obj.klass + v92;
    v111 = (System_String_o *)v109[4];
    v110 = (System_String_o **)(v109 + 4);
    Chars = (unsigned __int64)v111;
    if ( !v111 )
      goto LABEL_66;
    Chars = System_String__get_Chars((System_String_o *)Chars, 0, 0LL);
    if ( v92 >= v71->max_length )
      goto LABEL_67;
    v112 = *v110;
    if ( !v112 )
      goto LABEL_66;
    m_stringLength = v112->fields.m_stringLength;
    if ( (unsigned __int16)(Chars - 65) <= 0x19u && m_stringLength == 1 )
      goto LABEL_42;
    if ( (unsigned __int16)Chars == 91 && m_stringLength == 9 )
    {
      v125 = System_String__get_Chars(v112, 8, 0LL);
      v112 = System_Char__ToString((uint16_t)&v125, 0LL);
LABEL_42:
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = ScriptMessageLabel__ConvertCharaIndex(v112, v51);
      *charaIndex = Chars;
      goto LABEL_46;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v93 = ScriptMessageLabel__ConvertInteger(v112, v51);
    Chars = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Chars )
      goto LABEL_66;
    Chars = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Chars,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !Chars )
      goto LABEL_66;
    Chars = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Chars,
              &entity,
              v93,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (Chars & 1) != 0 )
    {
      v123 = v93;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
      v95 = System_String__Format((System_String_o *)StringLiteral_19557/*"icon_class_{0:D3}"*/, v94, 0LL);
      *imageName = v95;
      sub_B5D560((BattleServantConfConponent_o *)imageName, (System_Int32_array **)v95, v96, v97, v98, v99, v100, v101);
      if ( !entity )
        goto LABEL_66;
      v102 = System_String__Concat_44577788(entity->fields.age, (System_String_o *)StringLiteral_24286/*"："*/, 0LL);
      *className = v102;
      sub_B5D560(
        (BattleServantConfConponent_o *)className,
        (System_Int32_array **)v102,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
    }
LABEL_46:
    v90 = *(_QWORD *)&v71->max_length;
    ++v92;
    v91 = v90 - 1;
  }
  while ( v92 < (int)v90 - 1 );
  v52 = v122;
LABEL_48:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v115 = charaName;
    v116 = talkName;
  }
  else
  {
    if ( (int)v90 >= 3 )
    {
      v117 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v117,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
      v118 = *(_QWORD *)&v71->max_length;
      if ( (int)v118 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v118; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v118 )
              goto LABEL_67;
            if ( !v117 )
              goto LABEL_66;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v117,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v71->m_Items[i],
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            LODWORD(v118) = v71->max_length;
          }
        }
      }
      v116 = System_String__Join_44633232(
               (System_String_o *)v52,
               (System_Collections_Generic_IEnumerable_string__o *)v117,
               0LL);
      *charaName = v116;
    }
    else
    {
      if ( v90 )
      {
        if ( (_DWORD)v90 )
        {
          v114 = &v71->m_Items[v91];
          goto LABEL_63;
        }
LABEL_67:
        v120 = sub_B5D6C8(Chars);
        sub_B5D668(v120, 0LL);
      }
      v114 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_63:
      v116 = *v114;
      *charaName = *v114;
    }
    v115 = charaName;
  }
  sub_B5D560((BattleServantConfConponent_o *)v115, (System_Int32_array **)v116, v84, v85, v86, v87, v88, v89);
}


void __fastcall ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w22
  int32_t v19; // w24
  ScriptMessageLabel_c *v20; // x0
  const MethodInfo *v21; // x1
  int v22; // w26
  System_String_o *v23; // x23
  void *v24; // x0
  System_String_o *v25; // x23
  int32_t v26; // w0
  __int64 v27; // x8
  System_String_o *v28; // x0
  System_String_o *v29; // x1
  __int64 v30; // x0

  if ( (byte_42EE42E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, len, (_DWORD)dispText, length);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EE42E = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)dispText,
      (System_Int32_array **)StringLiteral_1/*""*/,
      (System_String_array **)dispText,
      (System_String_array **)length,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    v19 = 0;
    goto LABEL_47;
  }
  v18 = 0;
  if ( !len )
  {
    v19 = 0;
    goto LABEL_43;
  }
  v19 = 0;
  if ( text->fields.m_stringLength < 1 )
    goto LABEL_43;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v18, 0LL) != 91 )
    {
      ++v19;
      goto LABEL_23;
    }
    if ( System_String__get_Chars(text, v18 + 1, 0LL) == 35 )
      break;
    v20 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v20 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v20->static_fields->LINE_ORDER, 0LL) )
    {
      v24 = ScriptMessageLabel_TypeInfo;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v24 = ScriptMessageLabel_TypeInfo;
      }
      v27 = *(_QWORD *)(*((_QWORD *)v24 + 23) + 8LL);
      if ( v27 )
      {
        v28 = System_String__Substring_44641524(
                text,
                *(_DWORD *)(v27 + 16),
                text->fields.m_stringLength + ~*(_DWORD *)(v27 + 16),
                0LL);
        v26 = System_Int32__Parse(v28, 0LL);
        goto LABEL_42;
      }
LABEL_48:
      sub_B5D69C(v24, v21);
    }
    v18 += 2;
    if ( v18 < text->fields.m_stringLength )
    {
      v22 = 0;
      do
      {
        if ( System_String__get_Chars(text, v18, 0LL) == 91 )
        {
          ++v22;
        }
        else if ( System_String__get_Chars(text, v18, 0LL) == 93 )
        {
          if ( !v22 )
            break;
          --v22;
        }
        ++v18;
      }
      while ( v18 < text->fields.m_stringLength );
    }
LABEL_23:
    ++v18;
    if ( v19 == len || v18 >= text->fields.m_stringLength )
      goto LABEL_43;
  }
  v23 = System_String__Substring_44641524(text, v18 + 2, text->fields.m_stringLength - 2, 0LL);
  v24 = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v24 )
    goto LABEL_48;
  v21 = (const MethodInfo *)v24;
  if ( !*((_DWORD *)v24 + 6) )
    goto LABEL_49;
  *((_WORD *)v24 + 16) = 58;
  if ( !v23 )
    goto LABEL_48;
  v24 = System_String__Split(v23, (System_Char_array *)v24, 0LL);
  if ( !v24 )
    goto LABEL_48;
  if ( !*((_DWORD *)v24 + 6) )
  {
LABEL_49:
    v30 = sub_B5D6C8(v24);
    sub_B5D668(v30, 0LL);
  }
  v25 = (System_String_o *)*((_QWORD *)v24 + 4);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v26 = ScriptMessageLabel__StrlenByDisp(v25, v21);
LABEL_42:
  v19 += v26;
LABEL_43:
  if ( v18 <= text->fields.m_stringLength )
    v29 = System_String__Substring_44641524(text, 0, v18, 0LL);
  else
    v29 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)dispText,
    (System_Int32_array **)v29,
    (System_String_array **)dispText,
    (System_String_array **)length,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
LABEL_47:
  *length = v19;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EE42D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17098/*"bottom"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23031/*"top"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17474/*"center"*/, v8, v9, v10);
    byte_42EE42D = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || !str
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_23031/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17474/*"center"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(str, (System_String_o *)StringLiteral_17098/*"bottom"*/, 0LL) )
    return 0;
  else
    return 2;
}


bool __fastcall ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int32_t m_stringLength; // w20
  int Chars; // w8
  bool result; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  uint16_t v10; // w22

  v4 = text;
  if ( (byte_42EE434 & 1) == 0 )
  {
    text = (System_String_o *)sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE434 = 1;
  }
  if ( !v4 )
    sub_B5D69C(text, method);
  m_stringLength = v4->fields.m_stringLength;
  if ( (m_stringLength | 2) != 10 )
    return 0;
  Chars = System_String__get_Chars(v4, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v8 = m_stringLength - 1;
  if ( System_String__get_Chars(v4, v8, 0LL) != 93 )
    return 0;
  v9 = 1;
  while ( 1 )
  {
    v10 = System_String__get_Chars(v4, v9, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( (unsigned __int16)(v10 - 48) >= 0xAu )
    {
      result = 0;
      if ( (unsigned int)v10 - 65 > 0x25 || ((1LL << ((unsigned __int8)v10 - 65)) & 0x3F0000003FLL) == 0 )
        break;
    }
    if ( ++v9 >= v8 )
      return 1;
  }
  return result;
}


bool __fastcall ScriptMessageLabel__IsColorChar(uint16_t c, const MethodInfo *method)
{
  return (unsigned __int16)(c - 48) < 0xAu || (unsigned __int16)(c - 97) < 6u || (unsigned __int16)(c - 65) < 6u;
}


bool __fastcall ScriptMessageLabel__IsExistColorTag(System_String_o *txt, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w20
  int32_t v12; // w0
  int32_t v13; // w21
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x21

  v4 = txt;
  if ( (byte_42EE433 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v5, v6, v7);
    txt = (System_String_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v8, v9, v10);
    byte_42EE433 = 1;
  }
  if ( !v4 )
    sub_B5D69C(txt, method);
  v11 = 0;
  while ( v11 < v4->fields.m_stringLength )
  {
    v12 = System_String__IndexOf_44650152(v4, (System_String_o *)StringLiteral_15824/*"["*/, v11, 0LL);
    if ( (v12 & 0x80000000) != 0 )
      break;
    v13 = v12;
    v14 = System_String__IndexOf_44650152(v4, (System_String_o *)StringLiteral_16061/*"]"*/, v12, 0LL);
    if ( (v14 & 0x80000000) != 0 )
      break;
    v11 = v14 + 1;
    v16 = System_String__Substring_44641524(v4, v13, v14 + 1 - v13, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( ScriptMessageLabel__IsColorBeginTag(v16, v15) )
      return 1;
  }
  return 0;
}


void __fastcall ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  __int64 v19; // x1
  System_Action_string__string__bool__o *setReplayingVoice; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  float playVoiceVolume; // s8
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x1

  if ( (byte_42EE44C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__string__bool__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__, v8, v9, v10);
    sub_B5D5C4(&SeManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EE44C = 1;
  }
  playVoiceAssetName = this->fields.playVoiceAssetName;
  playVoiceObjectName = this->fields.playVoiceObjectName;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
  }
  else
  {
    setReplayingVoice = this->fields.setReplayingVoice;
    if ( !setReplayingVoice )
      sub_B5D69C(0LL, v19);
    System_Action_string__string__bool___Invoke(
      setReplayingVoice,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      (const MethodInfo_259BB40 *)Method_System_Action_string__string__bool__Invoke__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
    v21 = this->fields.playVoiceAssetName;
    v22 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_23391328(v21, v22, playVoiceVolume, v24, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v25);
  }
}


void __fastcall ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v48; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_42EE43C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EE43C = 1;
  }
  this->fields.fontType = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainText, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v40, v41, v42, v43, v44, v45, v46);
  this->fields.isPlayingVoice = 0;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    gameObject = this->fields.main;
    if ( !gameObject )
      goto LABEL_36;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    gameObject = this->fields.ruby;
    if ( !gameObject )
      goto LABEL_36;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.image;
    if ( !gameObject )
      goto LABEL_36;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))gameObject->klass->vtable._8_set_alpha.method)(
      gameObject,
      gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.playVoice;
    if ( !gameObject )
      goto LABEL_36;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.playVoiceEffect;
    if ( gameObject )
    {
      gameObject = (UILabel_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        goto LABEL_35;
      }
    }
LABEL_36:
    sub_B5D69C(gameObject, v48);
  }
LABEL_35:
  ScriptMessageLabel__DestoryEffect(this, v48);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  int32_t v13; // w24
  System_String_o *v14; // x20
  int32_t v15; // w22
  int v16; // w25
  int32_t v17; // w0
  int32_t v18; // w21
  System_String_o *v19; // x23
  int32_t v20; // w24
  unsigned __int16 v21; // w25

  if ( (byte_42EE432 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EE432 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v13 = 0;
    v14 = text;
LABEL_12:
    v16 = 1 - v13;
    while ( v13 < text->fields.m_stringLength )
    {
      v15 = v13;
      if ( System_String__get_Chars(text, v13, 0LL) != 91 )
        goto LABEL_11;
      ++v13;
      v17 = System_String__IndexOf_44649884(text, 0x5Du, v15 + 1, 0LL);
      if ( (v17 & 0x80000000) != 0 )
        goto LABEL_11;
      v18 = v17;
      IsNullOrEmpty = System_String__Substring_44641524(text, v15, v17 + v16, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v19 = IsNullOrEmpty;
      --v16;
      if ( (IsNullOrEmpty->fields.m_stringLength | 2) == 10 )
      {
        v20 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v19, v20, 0LL);
          v21 = (unsigned __int16)IsNullOrEmpty;
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          if ( (unsigned __int16)(v21 - 48) >= 0xAu
            && ((unsigned int)v21 - 65 > 0x25 || ((1LL << ((unsigned __int8)v21 - 65)) & 0x3F0000003FLL) == 0) )
          {
            goto LABEL_11;
          }
          ++v20;
        }
        while ( v20 <= v19->fields.m_stringLength - 2 );
        if ( !v14 )
          goto LABEL_27;
        IsNullOrEmpty = System_String__Replace_44585024(v14, v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !IsNullOrEmpty )
          goto LABEL_27;
        v14 = IsNullOrEmpty;
        IsNullOrEmpty = (System_String_o *)System_String__IndexOf_44650136(
                                             IsNullOrEmpty,
                                             (System_String_o *)StringLiteral_15834/*"[-]"*/,
                                             0LL);
        if ( ((unsigned int)IsNullOrEmpty & 0x80000000) == 0 )
        {
          if ( StringLiteral_15834/*"[-]"*/ )
          {
            v14 = System_String__Remove(v14, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15834/*"[-]"*/ + 4), 0LL);
            goto LABEL_10;
          }
LABEL_27:
          sub_B5D69C(IsNullOrEmpty, v12);
        }
LABEL_10:
        v15 = v18;
LABEL_11:
        v13 = v15 + 1;
        goto LABEL_12;
      }
    }
    return v14;
  }
  return text;
}


void __fastcall ScriptMessageLabel__SetLogDraw(
        ScriptMessageLabel_o *this,
        UnityEngine_GameObject_o *mainObject,
        UnityEngine_GameObject_o *rubyObject,
        UnityEngine_GameObject_o *imageObject,
        UnityEngine_GameObject_o *playVoiceObject,
        UnityEngine_GameObject_o *playVoiceEffect,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  __int64 v50; // x26
  UILabel_o *Component_srcLineSprite; // x0
  __int64 v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UILabel_o *v59; // x21
  System_Int32_array **v60; // x0
  UnityEngine_GameObject_o **v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UISprite_o *v68; // x20
  UnityEngine_Component_o *v69; // x22
  System_Action_o *v70; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  double v73; // d0
  const MethodInfo *v74; // x1
  System_String_o *colorTag; // x19
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *klass; // x22
  EventDelegate_Callback_o *v84; // x23
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE43F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mainObject, (_DWORD)rubyObject, imageObject);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EventDelegate_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ScriptMessageLabel_OnClickPlayVoice__, v35, v36, v37);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__, v41, v42, v43);
    sub_B5D5C4(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    byte_42EE43F = 1;
  }
  v50 = sub_B5D694(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  ScriptMessageLabel___c__DisplayClass60_0___ctor((ScriptMessageLabel___c__DisplayClass60_0_o *)v50, 0LL);
  if ( !v50 )
    goto LABEL_49;
  *(_QWORD *)(v50 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)this, v53, v54, v55, v56, v57, v58);
  if ( !mainObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           mainObject,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_49;
  v59 = Component_srcLineSprite;
  v60 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 rubyObject,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v50 + 24) = v60;
  v61 = (UnityEngine_GameObject_o **)(v50 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 24), v60, v62, v63, v64, v65, v66, v67);
  if ( !imageObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           imageObject,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_49;
  v68 = (UISprite_o *)Component_srcLineSprite;
  v69 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     playVoiceObject,
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v50,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_srcLineSprite = (UILabel_o *)System_String__op_Inequality(
                                           this->fields.imageText,
                                           (System_String_o *)StringLiteral_1/*""*/,
                                           0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v68 )
      goto LABEL_49;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v68->klass->vtable._8_set_alpha.method)(
      v68,
      v68->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMark(v68, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v68->klass->vtable._33_MakePixelPerfect.method)(
      v68,
      v68->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v73 = widthSize == INFINITY ? -widthSize : widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v68, (int)v73, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    Color = ScriptMessageLabel__GetColor(colorTag, v74);
    UIWidget__set_color((UIWidget_o *)v68, Color, 0LL);
    if ( !v70 )
      goto LABEL_49;
    System_Action__Invoke(v70, 0LL);
    if ( !v59 )
      goto LABEL_49;
    UILabel__set_text(v59, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v69 )
      goto LABEL_49;
    goto LABEL_36;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.playVoiceEffect,
      (System_Int32_array **)playVoiceEffect,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    if ( v69 )
    {
      Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
      if ( Component_srcLineSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 1, 0LL);
        if ( playVoiceEffect )
        {
          Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__get_gameObject(playVoiceEffect, 0LL);
          if ( Component_srcLineSprite )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)Component_srcLineSprite,
              this->fields.isPlayingVoice,
              0LL);
            klass = (System_Collections_Generic_List_EventDelegate__o *)v69[8].klass;
            v84 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v84, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventDelegate_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            }
            Component_srcLineSprite = (UILabel_o *)EventDelegate__Set_29826436(klass, v84, 0LL);
            if ( v59 )
            {
              UILabel__set_text(v59, 0LL, 0LL);
              Component_srcLineSprite = (UILabel_o *)*v61;
              if ( *v61 )
              {
                UILabel__set_text(Component_srcLineSprite, 0LL, 0LL);
                if ( v68 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v68->klass->vtable._8_set_alpha.method)(
                    v68,
                    v68->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                    0.0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_B5D69C(Component_srcLineSprite, v52);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_49;
    UILabel__set_trueTypeFont(v59, this->fields.fontType, 0LL);
  }
  else if ( !v59 )
  {
    goto LABEL_49;
  }
  UILabel__set_fontSize(v59, this->fields.fontSize, 0LL);
  UILabel__set_text(v59, this->fields.mainText, 0LL);
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v59, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  v85.fields.z = 0.0;
  v85.fields.y = -this->fields.yOffset;
  v85.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_srcLineSprite, v85, 0LL);
  if ( !v70 )
    goto LABEL_49;
  System_Action__Invoke(v70, 0LL);
  if ( !v68 )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v68->klass->vtable._8_set_alpha.method)(
                                           v68,
                                           v68->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                                           0.0);
  if ( !v69 )
    goto LABEL_49;
LABEL_36:
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42EE44D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE44D = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v7 = this->fields.playVoiceEffect;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42EE44E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE44E = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v7 = this->fields.playVoiceEffect;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int32_t length; // [xsp+4h] [xbp-1Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE430 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE430 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v4);
  return length;
}


System_String_o *__fastcall ScriptMessageLabel__SubstrByDisp(
        System_String_o *text,
        int32_t len,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int32_t length; // [xsp+Ch] [xbp-24h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42EE42F & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, len, (_DWORD)method, v3);
    byte_42EE42F = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  ScriptMessageLabel__GetTextByLen(text, len, &dispText, &length, v4);
  return dispText;
}


void __fastcall ScriptMessageLabel__UpdateBouten(
        ScriptMessageLabel_o *this,
        UILabel_o **main,
        UILabel_o **ruby,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t maxFontSize,
        int32_t verticalAlign,
        System_String_o *mainStr,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UILabel_o *transform; // x0
  __int64 v68; // x1
  int32_t v69; // w19
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  const MethodInfo *v77; // x3
  float *p_y; // x19
  float VerticalAlignOffset; // s0
  float v80; // s8
  float v81; // w9
  float v82; // s0
  float v83; // s8
  float v84; // s1
  const MethodInfo *v85; // x1
  float v86; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE442 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)main, (_DWORD)ruby, pos);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_24158/*"・"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EE442 = 1;
  }
  v25 = System_String__Concat_44577788(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  colorTag = this->fields.colorTag;
  p_rubyText = &this->fields.rubyText;
  this->fields.rubyText = colorTag;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)colorTag,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v54, v55, v56, v57, v58, v59, v60);
  this->fields.fontType = font;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_38;
  if ( mainStr->fields.m_stringLength >= 1 )
  {
    v69 = 0;
    do
    {
      v70 = (System_Int32_array **)System_String__Concat_44577788(
                                     *p_rubyText,
                                     (System_String_o *)StringLiteral_24158/*"・"*/,
                                     0LL);
      *p_rubyText = (System_String_o *)v70;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v70, v71, v72, v73, v74, v75, v76);
      ++v69;
    }
    while ( v69 < mainStr->fields.m_stringLength );
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_38;
    UILabel__set_trueTypeFont(transform, font, 0LL);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_38;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v77);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v80 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v91.fields.x = pos->fields.x;
        v91.fields.z = 0.0;
        v91.fields.y = pos->fields.y - v80;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v91, 0LL);
        goto LABEL_26;
      }
    }
LABEL_38:
    sub_B5D69C(transform, v68);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  p_y = &pos->fields.y;
  v90.fields.y = pos->fields.y;
  v90.fields.x = pos->fields.x;
  v90.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v90, 0LL);
  this->fields.yOffset = 0.0;
LABEL_26:
  v81 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v81;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  UILabel__set_text(transform, *p_rubyText, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                         transform,
                                                         transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                     * 0.5))
                                     - (float)(v82 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  v83 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v83 + (float)((float)(v84 + v84) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  v92.fields.x = this->fields.rubyPosition.fields.x;
  v92.fields.y = this->fields.rubyPosition.fields.y;
  v92.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v92, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  v86 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v86;
  pos->fields.x = v86 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v85);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateEffect(
        ScriptMessageLabel_o *this,
        UnityEngine_GameObject_o **effect,
        UnityEngine_Vector2_o *pos,
        System_String_o *effectName,
        float ewait,
        int32_t dlength,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Int32_array **v26; // x1
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct UnityEngine_Vector2_o v55; // x8
  UnityEngine_Object_o *v56; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v60; // x21
  __int64 v61; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v63; // x20
  UnityEngine_GameObject_o *v64; // x19
  int32_t v65; // w1
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE448 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effect, (_DWORD)pos, effectName);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6894/*"FrontCommonUI"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42EE448 = 1;
  }
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v26,
    (System_String_array **)pos,
    (System_String_array **)effectName,
    *(System_Boolean_array ***)&dlength,
    (System_Int32_array **)method,
    v7,
    v8);
  v27 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v48, v49, v50, v51, v52, v53, v54);
  v55 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  this->fields.mainPosition = v55;
  v56 = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v60 = this->fields.frontEffect;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      v66.fields.z = 0.0;
      v66.fields.x = x;
      v66.fields.y = y;
      CommonEffectManager__CreateParam_18152088(v60, effectName, v66, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                      transform,
                                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v63 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v63) )
      {
        sub_B5D69C(transform, v61);
      }
      SyncTransformComponent__setChild(v63, (UnityEngine_Transform_o *)transform, 0LL);
      v64 = this->fields.frontEffect;
      v65 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6894/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v64, v65, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImage(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Int32_array **v17; // x1
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UISprite_o *v51; // x24
  __int64 v52; // x1
  UIWidget_o *transform; // x0
  int32_t v54; // w23
  float v55; // s0
  float v56; // s8
  float v57; // s1
  float v58; // s0
  double v59; // d0
  int v60; // w23
  UIWidget_o *v61; // x24
  int v62; // s0
  float x; // s0
  float v67; // s8
  struct UnityEngine_Vector2_o v68; // x8
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE446 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)image, (_DWORD)pos, *(_QWORD *)&fontSize);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EE446 = 1;
  }
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v17,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v7);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v18, v19, v20, v21, v22, v23, v24);
  this->fields.imageText = imageStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.fontType = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.fontSize = fontSize;
  v51 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v51, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  v54 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  v56 = v55;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  v58 = (float)(v56 * (float)v54) / v57;
  transform = (UIWidget_o *)*image;
  v59 = v58 == INFINITY ? -v58 : v58;
  if ( !transform )
    goto LABEL_21;
  v60 = (int)v59;
  UIWidget__SetDimensions(transform, (int)v59, this->fields.fontSize, 0LL);
  v61 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v62 = UnityEngine_Color__get_white(0LL);
  if ( !v61 )
    goto LABEL_21;
  UIWidget__set_color(v61, *(UnityEngine_Color_o *)&v62, 0LL);
  x = pos->fields.x;
  v67 = (float)v60;
  if ( horizontalAlign == 2 )
  {
    x = x - v67;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v67 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(transform, v52);
  }
  v69.fields.x = pos->fields.x;
  v69.fields.y = pos->fields.y;
  v69.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
  v68 = *pos;
  this->fields.widthSize = v67;
  this->fields.mainPosition = v68;
  pos->fields.x = pos->fields.x + v67;
  this->fields.dispLength = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImageRuby(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UILabel_o **ruby,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        System_String_o *imageStr,
        System_String_o *rubyStr,
        UnityEngine_Font_o *font,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Int32_array **v24; // x1
  struct System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UIWidget_o *transform; // x0
  __int64 v59; // x1
  UISprite_o *v60; // x26
  int32_t v61; // w25
  float v62; // s0
  float v63; // s8
  float v64; // s1
  float v65; // s0
  double v66; // d0
  int v67; // w25
  UIWidget_o *v68; // x26
  int v69; // s0
  float x; // s0
  float v74; // s8
  float y; // s9
  float v76; // s1
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE449 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)image, (_DWORD)ruby, pos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42EE449 = 1;
  }
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v24,
    (System_String_array **)ruby,
    (System_String_array **)pos,
    *(System_Boolean_array ***)&fontSize,
    (System_Int32_array **)imageStr,
    (System_Int32_array *)rubyStr,
    (System_Int32_array *)font);
  v25 = System_String__Concat_44577788(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.imageText = imageStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v60 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v60, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v61 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v63 = v62;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  v65 = (float)(v63 * (float)v61) / v64;
  transform = (UIWidget_o *)*image;
  v66 = v65 == INFINITY ? -v65 : v65;
  if ( !transform )
    goto LABEL_33;
  v67 = (int)v66;
  UIWidget__SetDimensions(transform, (int)v66, this->fields.fontSize, 0LL);
  v68 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
  if ( !v68 )
    goto LABEL_33;
  UIWidget__set_color(v68, *(UnityEngine_Color_o *)&v69, 0LL);
  x = pos->fields.x;
  v74 = (float)v67;
  if ( horizontalAlign == 2 )
  {
    x = x - v74;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v74 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v77.fields.x = pos->fields.x;
  v77.fields.y = pos->fields.y;
  v77.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v77, 0LL);
  this->fields.mainPosition = *pos;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = (UIWidget_o *)*ruby;
    if ( !*ruby )
      goto LABEL_33;
    UILabel__set_trueTypeFont((UILabel_o *)transform, font, 0LL);
  }
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)transform, this->fields.rubyText, 0LL);
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby
    || (this->fields.rubyPosition.fields.x = (float)((float)(v74 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v76,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B5D69C(transform, v59);
  }
  v78.fields.x = this->fields.rubyPosition.fields.x;
  v78.fields.y = this->fields.rubyPosition.fields.y;
  v78.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v78, 0LL);
  this->fields.widthSize = v74;
  pos->fields.x = pos->fields.x + v74;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_34902708(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x6
  UnityEngine_Vector2_o zero; // 0:s1.4,4:s2.4

  zero = UnityEngine_Vector2__get_zero(0LL);
  ScriptMessageLabel__UpdateImage_34902836(this, image, pos, fontSize, scale, imageStr, zero, horizontalAlign, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImage_34902836(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        UnityEngine_Vector2_o offset,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  float y; // s8
  float x; // s9
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Int32_array **v22; // x1
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  float v56; // s0
  double v57; // d0
  UISprite_o *v58; // x25
  __int64 v59; // x1
  UIWidget_o *transform; // x0
  int32_t v61; // w24
  float v62; // s0
  float v63; // s10
  float v64; // s1
  float v65; // s0
  double v66; // d0
  int v67; // w24
  UIWidget_o *v68; // x25
  int v69; // s0
  float v73; // s0
  float v74; // s10
  int32_t v75; // w8
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_42EE447 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)image, (_DWORD)pos, *(_QWORD *)&fontSize);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42EE447 = 1;
  }
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v22,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v9);
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v23, v24, v25, v26, v27, v28, v29);
  this->fields.imageText = imageStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v43, v44, v45, v46, v47, v48, v49);
  this->fields.fontType = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v50, v51, v52, v53, v54, v55);
  v56 = (float)fontSize * scale;
  if ( v56 == INFINITY )
    v57 = -v56;
  else
    v57 = v56;
  this->fields.fontSize = (int)v57;
  v58 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v58, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  v61 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  v63 = v62;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v65 = (float)(v63 * (float)v61) / v64;
  v66 = v65 == INFINITY ? -INFINITY : v65;
  if ( !transform )
    goto LABEL_24;
  v67 = (int)v66;
  UIWidget__SetDimensions(transform, (int)v66, this->fields.fontSize, 0LL);
  v68 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
  if ( !v68 )
    goto LABEL_24;
  UIWidget__set_color(v68, *(UnityEngine_Color_o *)&v69, 0LL);
  v73 = pos->fields.x;
  v74 = (float)v67;
  if ( horizontalAlign == 2 )
  {
    v73 = v73 - v74;
  }
  else if ( horizontalAlign == 1 )
  {
    v73 = v73 + (float)(v74 * -0.5);
  }
  pos->fields.x = v73;
  v75 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v73;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v75 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(transform, v59);
  }
  v76.fields.x = this->fields.mainPosition.fields.x;
  v76.fields.y = this->fields.mainPosition.fields.y;
  v76.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v76, 0LL);
  this->fields.widthSize = v74;
  pos->fields.x = pos->fields.x + v74;
  this->fields.dispLength = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateLabel(
        ScriptMessageLabel_o *this,
        UILabel_o **main,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t maxFontSize,
        int32_t verticalAlign,
        System_String_o *mainStr,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v66; // x3
  float *p_y; // x22
  float VerticalAlignOffset; // s0
  float v69; // s8
  float v70; // w9
  const MethodInfo *v71; // x1
  float v72; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE441 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)main, (_DWORD)pos, *(_QWORD *)&fontSize);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EE441 = 1;
  }
  v23 = System_String__Concat_44577788(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v51, v52, v53, v54, v55, v56, v57);
  this->fields.fontType = font;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.fontSize = fontSize;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_26;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize == maxFontSize )
  {
    transform = *main;
    if ( *main )
    {
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v74.fields.y = pos->fields.y;
        v74.fields.x = pos->fields.x;
        v74.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_B5D69C(transform, v64);
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v66);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v69 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  p_y = &pos->fields.y;
  v75.fields.x = pos->fields.x;
  v75.fields.z = 0.0;
  v75.fields.y = pos->fields.y - v69;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v75, 0LL);
LABEL_21:
  v70 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v70;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v72 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v72;
  pos->fields.x = v72 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v71);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateLine(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t length,
        System_String_o *imageStr,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Int32_array **v20; // x1
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UISprite_o *v54; // x24
  System_String_o *imageText; // x25
  __int64 v56; // x1
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v59; // x24
  int32_t v60; // w23
  const MethodInfo *v61; // x1
  UIWidget_o *v62; // x22
  System_String_o *colorTag; // x25
  int v64; // s0
  float v68; // s8
  struct UnityEngine_Vector2_o v69; // x8
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE445 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)image, (_DWORD)pos, *(_QWORD *)&fontSize);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EE445 = 1;
  }
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v20,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    *(System_Boolean_array ***)&length,
    (System_Int32_array **)imageStr,
    (System_Int32_array *)method,
    v7);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v21, v22, v23, v24, v25, v26, v27);
  this->fields.imageText = imageStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v41, v42, v43, v44, v45, v46, v47);
  this->fields.fontType = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v48, v49, v50, v51, v52, v53);
  this->fields.fontSize = fontSize;
  v54 = *image;
  imageText = this->fields.imageText;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v54, imageText, 0LL);
  transform = *image;
  if ( !*image )
    goto LABEL_18;
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = *image;
  if ( !*image )
    goto LABEL_18;
  AtlasSprite = UISprite__GetAtlasSprite(transform, 0LL);
  if ( !AtlasSprite )
    return;
  v59 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_18;
  v60 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v60, fontSize, 0LL);
  v62 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  *(UnityEngine_Color_o *)&v64 = ScriptMessageLabel__GetColor(colorTag, v61);
  if ( !v62
    || (UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v64, 0LL),
        v68 = (float)v60,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v60 / (float)v59->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(transform, v56);
  }
  v70.fields.x = pos->fields.x;
  v70.fields.y = pos->fields.y;
  v70.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v70, 0LL);
  v69 = *pos;
  this->fields.widthSize = v68;
  this->fields.mainPosition = v69;
  pos->fields.x = pos->fields.x + v68;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdatePlayVoice(
        ScriptMessageLabel_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_string__string__bool__o *setReplayingVoice,
        const MethodInfo *method)
{
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  ScriptMessageLabel_c *v50; // x0

  if ( (byte_42EE44A & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)assetName, (_DWORD)objectName, setReplayingVoice);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EE44A = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setReplayingVoice,
    (System_Int32_array **)setReplayingVoice,
    (System_String_array **)objectName,
    (System_String_array **)setReplayingVoice,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rubyText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  this->fields.playVoiceAssetName = assetName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAssetName,
    (System_Int32_array **)assetName,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.playVoiceObjectName = objectName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playVoiceObjectName,
    (System_Int32_array **)objectName,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.playVoiceVolume = volume;
  v50 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v50 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v50->static_fields->PLAY_VOICE_POSITION_X;
}


void __fastcall ScriptMessageLabel__UpdateRuby(
        ScriptMessageLabel_o *this,
        UILabel_o **main,
        UILabel_o **ruby,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t maxFontSize,
        int32_t verticalAlign,
        System_String_o *mainStr,
        System_String_o *rubyStr,
        UnityEngine_Font_o *font,
        bool isTalkName,
        const MethodInfo *method)
{
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UILabel_o *transform; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x3
  float *p_y; // x19
  float VerticalAlignOffset; // s0
  float v71; // s8
  float v72; // w9
  float v73; // s0
  float v74; // s8
  float v75; // s1
  const MethodInfo *v76; // x1
  float v77; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE443 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)main, (_DWORD)ruby, pos);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EE443 = 1;
  }
  v25 = System_String__Concat_44577788(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = System_String__Concat_44577788(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.imageText, v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v53, v54, v55, v56, v57, v58, v59);
  this->fields.fontType = font;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_36;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_36;
    UILabel__set_trueTypeFont(transform, font, 0LL);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_36;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  if ( isTalkName )
    pos->fields.y = -16.0;
  transform = *main;
  if ( !*main || (UILabel__set_fontSize(transform, fontSize, 0LL), (transform = *main) == 0LL) )
LABEL_36:
    sub_B5D69C(transform, v67);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v68);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v71 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v81.fields.x = pos->fields.x;
        v81.fields.z = 0.0;
        v81.fields.y = pos->fields.y - v71;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v81, 0LL);
        goto LABEL_25;
      }
    }
    goto LABEL_36;
  }
  transform = *main;
  if ( !*main )
    goto LABEL_36;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_36;
  p_y = &pos->fields.y;
  v80.fields.y = pos->fields.y;
  v80.fields.x = pos->fields.x;
  v80.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v80, 0LL);
  this->fields.yOffset = 0.0;
LABEL_25:
  v72 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v72;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  UILabel__set_text(transform, this->fields.rubyText, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = *main;
  if ( !*main )
    goto LABEL_36;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                         transform,
                                                         transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                     * 0.5))
                                     - (float)(v73 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  v74 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v74 + v75;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_36;
  v82.fields.x = this->fields.rubyPosition.fields.x;
  v82.fields.y = this->fields.rubyPosition.fields.y;
  v82.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v82, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_36;
  v77 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v77;
  pos->fields.x = v77 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v76);
}


float __fastcall ScriptMessageLabel__getVerticalAlignOffset(
        int32_t vAlign,
        int32_t fontSize,
        int32_t maxFontSize,
        const MethodInfo *method)
{
  unsigned int v4; // w9
  unsigned int v5; // w10
  float v6; // s8
  double v8; // d0
  double v9; // d0
  float v10; // s1
  __int64 v11; // x8
  float result; // s0
  float v13; // s1
  double iptr; // [xsp+8h] [xbp-18h] BYREF

  if ( fontSize >= 0 )
    v4 = fontSize;
  else
    v4 = fontSize + 1;
  if ( maxFontSize >= 0 )
    v5 = maxFontSize;
  else
    v5 = maxFontSize + 1;
  v6 = (float)(int)(2 * ((v5 >> 1) - (v4 >> 1))) * 0.9;
  v8 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      result = floorf(v6 + 0.5);
      goto LABEL_17;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      result = ceilf(v6 + -0.5);
      goto LABEL_17;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = (__int64)v9;
  result = v9;
  v13 = result + v10;
  if ( (v11 & 1) != 0 )
    result = v13;
LABEL_17:
  if ( vAlign == 1 )
    return result * 0.5;
  if ( vAlign != 2 )
    return 0.0;
  return result;
}


void __fastcall ScriptMessageLabel___c__DisplayClass60_0___ctor(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel___c__DisplayClass60_0___SetLogDraw_b__0(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageLabel___c__DisplayClass60_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v10; // x8
  struct ScriptMessageLabel_o *v11; // x8
  struct UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v13; // x9
  struct ScriptMessageLabel_o *v14; // x8
  float32x2_t *v15; // x8
  int v16; // s2 OVERLAPPED
  unsigned __int64 v17; // d0 OVERLAPPED
  int v18; // s1

  v4 = this;
  if ( (byte_42E5D12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E5D12 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  fontType = (UnityEngine_Object_o *)_4__this->fields.fontType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.__4__this;
    if ( !v10 )
      goto LABEL_23;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v4->fields.ruby;
    if ( !this )
      goto LABEL_23;
    UILabel__set_trueTypeFont((UILabel_o *)this, v10->fields.fontType, 0LL);
  }
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_23;
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)System_String__op_Inequality(
                                                         v11->fields.rubyText,
                                                         (System_String_o *)StringLiteral_1/*""*/,
                                                         0LL);
  ruby = v4->fields.ruby;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v4->fields.__4__this;
    if ( v13 )
    {
      if ( ruby )
      {
        UILabel__set_fontSize(v4->fields.ruby, v13->fields.rubySize, 0LL);
        v14 = v4->fields.__4__this;
        if ( v14 )
        {
          this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v4->fields.ruby;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v14->fields.rubyText, 0LL);
            this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v4->fields.ruby;
            if ( this )
            {
              this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
              v15 = (float32x2_t *)v4->fields.__4__this;
              if ( v15 )
              {
                if ( this )
                {
                  v16 = 0;
                  v17 = vsub_f32(v15[10], v15[9]).n64_u64[0];
                  v18 = HIDWORD(v17);
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)this,
                    *(UnityEngine_Vector3_o *)(&v16 - 2),
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B5D69C(this, method);
  }
  if ( !ruby )
    goto LABEL_23;
  UILabel__set_text(v4->fields.ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}