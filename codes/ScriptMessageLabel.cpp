void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_Int32_array **v22; // x1
  struct ScriptMessageLabel_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v32; // x19
  __int64 v33; // x0
  struct ScriptMessageLabel_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_Dictionary_int__int__o *v43; // x19
  struct ScriptMessageLabel_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_4219FF1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v12);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_15847/*"[line "*/, v14);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v15);
    sub_B0D8A4(&StringLiteral_20522/*"medium"*/, v16);
    sub_B0D8A4(&StringLiteral_22244/*"small"*/, v17);
    sub_B0D8A4(&StringLiteral_23448/*"x-small"*/, v18);
    sub_B0D8A4(&StringLiteral_20240/*"large"*/, v19);
    sub_B0D8A4(&StringLiteral_23428/*"x-large"*/, v20);
    byte_4219FF1 = 1;
  }
  ScriptMessageLabel_TypeInfo->static_fields->PLAY_VOICE_POSITION_X = -490.0;
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_15847/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15847/*"[line "*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->LINE_ORDER, v22, v2, v3, v4, v5, v6, v7);
  v23 = ScriptMessageLabel_TypeInfo->static_fields;
  v23->codeClassSplitStringList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v23->codeClassSplitStringList, 0LL, v24, v25, v26, v27, v28, v29);
  v32 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v30,
                                                                            v31);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v32,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v32 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_753/*"-"*/,
    29,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_23448/*"x-small"*/,
    19,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_22244/*"small"*/,
    24,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_20522/*"medium"*/,
    29,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_20240/*"large"*/,
    48,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
    (UIPanel_o *)StringLiteral_23428/*"x-large"*/,
    64,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v34 = ScriptMessageLabel_TypeInfo->static_fields;
  v34->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v34->fontSizes, (System_Int32_array **)v32, v35, v36, v37, v38, v39, v40);
  v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v41,
                                                               v42);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v43,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v43 )
LABEL_6:
    sub_B0D97C(v33);
  System_Collections_Generic_Dictionary_int__int___Add(
    v43,
    24,
    0,
    (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v43,
    29,
    1,
    (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v43,
    48,
    2,
    (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v43,
    64,
    3,
    (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v44 = ScriptMessageLabel_TypeInfo->static_fields;
  v44->fontSizeIndexTable = v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44->fontSizeIndexTable,
    (System_Int32_array **)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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

  if ( (byte_4219FF0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4219FF0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.colorTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall ScriptMessageLabel__AnalysTagParam(
        System_String_o *txt,
        int32_t bindex,
        const MethodInfo *method)
{
  int32_t v3; // w21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  System_Text_StringBuilder_o *Chars; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v14; // x22
  int v15; // w25
  int32_t v16; // w1
  __int16 v17; // w23
  int32_t v18; // w23
  uint16_t v19; // w0

  v3 = bindex;
  if ( (byte_4219FD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&bindex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v8);
    byte_4219FD8 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 *(_QWORD *)&bindex,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_31;
  m_stringLength = txt->fields.m_stringLength;
  v14 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v11, v12);
  System_Text_StringBuilder___ctor_42149428(v14, m_stringLength, 0LL);
  if ( txt->fields.m_stringLength > v3 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = v3++;
      Chars = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v16, 0LL);
      v17 = (__int16)Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v15 )
        goto LABEL_17;
      if ( !v14 )
        goto LABEL_31;
      Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                                               v14,
                                               v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v9 )
        goto LABEL_31;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      System_Text_StringBuilder__set_Length(v14, 0, 0LL);
      v15 = 0;
LABEL_24:
      if ( v3 >= txt->fields.m_stringLength )
        goto LABEL_25;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v15;
      if ( !v14 )
        goto LABEL_31;
    }
    else
    {
      if ( (unsigned __int16)Chars == 93 && --v15 < 0 )
        goto LABEL_25;
LABEL_17:
      if ( !v14 )
        goto LABEL_31;
    }
    Chars = System_Text_StringBuilder__Append_42158644(v14, (uint16_t)Chars, 0LL);
    if ( v17 == 34 )
    {
      if ( v3 < txt->fields.m_stringLength )
      {
        do
        {
          v18 = v3 + 1;
          v19 = System_String__get_Chars(txt, v3, 0LL);
          if ( v19 == 34 )
            break;
          System_Text_StringBuilder__Append_42158644(v14, v19, 0LL);
          ++v3;
        }
        while ( v18 < txt->fields.m_stringLength );
        v3 = v18;
      }
      Chars = System_Text_StringBuilder__Append_42158644(v14, 0x22u, 0LL);
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( !v14 )
    goto LABEL_31;
  Chars = (System_Text_StringBuilder_o *)System_Text_StringBuilder__get_Length(v14, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v9 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_31:
    sub_B0D97C(Chars);
  }
  Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                                           v14,
                                           v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v9 )
    goto LABEL_31;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4219FEC & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_4219FEC = 1;
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
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *v14; // x23
  UILabel_o *v15; // x22
  ScriptMessageLabel_o *v16; // x21

  if ( (byte_4219FE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, mainObject);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12);
    this = (ScriptMessageLabel_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4219FE1 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   mainObject,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v14 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   rubyObject,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v15 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         imageObject,
                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v14)
    || (v16 = this, UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v15)
    || (UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v16)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, float))v16->klass[1]._1.castClass)(
                                         v16,
                                         v16->klass[1]._1.declaringType,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0LL), !playVoiceEffect) )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  struct UnityEngine_GameObject_o **p_frontEffect; // x20
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_effect; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4219FDE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219FDE = 1;
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
    v5 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v5, 0LL);
    *p_frontEffect = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.frontEffect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  effect = this->fields.effect;
  p_effect = (BattleServantConfConponent_o *)&this->fields.effect;
  v13 = (UnityEngine_Object_o *)effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(klass, 0LL);
    p_effect->klass = 0LL;
    sub_B0D840(p_effect, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  const MethodInfo *v42; // x1
  UnityEngine_Object_o *v43; // x21
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

  if ( (byte_4219FDC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219FDC = 1;
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
    v5 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
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
    v5 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_49;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v15, 0LL);
    *p_ruby = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.ruby, 0LL, v16, v17, v18, v19, v20, v21);
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
    v5 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_49;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v24, 0LL);
    *p_image = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.image, 0LL, v25, v26, v27, v28, v29, v30);
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
    v5 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_49;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v33, 0LL);
    *p_playVoice = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoice, 0LL, v34, v35, v36, v37, v38, v39);
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
    v5 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v5, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v43, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceEffect, 0LL, v44, v45, v46, v47, v48, v49);
      goto LABEL_48;
    }
LABEL_49:
    sub_B0D97C(v5);
  }
LABEL_48:
  ScriptMessageLabel__DestoryEffect(this, v42);
  this->fields.fontType = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v50, v51, v52, v53, v54, v55);
}


bool __fastcall ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  System_String_o *v10; // x0
  int Chars; // w8
  int32_t m_stringLength; // w8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  int32_t v20; // w22
  int32_t v21; // w23
  uint16_t v22; // w24
  System_String_o **v23; // x0

  if ( (byte_4219FD2 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, text);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4219FD2 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v10 = *text;
  if ( !*text )
    goto LABEL_30;
  Chars = System_String__get_Chars(v10, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v10 = *text;
  if ( !*text )
LABEL_30:
    sub_B0D97C(v10);
  m_stringLength = v10->fields.m_stringLength;
  if ( m_stringLength != 10 && m_stringLength != 8 )
  {
    if ( m_stringLength == 3 && System_String__op_Equality(v10, (System_String_o *)StringLiteral_15691/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        v19 = (System_Int32_array **)StringLiteral_1/*""*/;
LABEL_27:
        v23 = colorTag;
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    return 0;
  }
  v20 = m_stringLength - 1;
  if ( System_String__get_Chars(v10, m_stringLength - 1, 0LL) != 93 )
    return 0;
  v21 = 1;
  do
  {
    v10 = *text;
    if ( !*text )
      goto LABEL_30;
    v22 = System_String__get_Chars(v10, v21, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( (unsigned __int16)(v22 - 48) >= 0xAu
      && ((unsigned int)v22 - 65 > 0x25 || ((1LL << ((unsigned __int8)v22 - 65)) & 0x3F0000003FLL) == 0) )
    {
      return 0;
    }
    ++v21;
  }
  while ( v21 < v20 );
  if ( !overrideColor )
  {
    v19 = (System_Int32_array **)*text;
    *colorTag = *text;
    goto LABEL_27;
  }
LABEL_25:
  *text = overrideColor;
  sub_B0D840((BattleServantConfConponent_o *)text, (System_Int32_array **)overrideColor, v13, v14, v15, v16, v17, v18);
  *colorTag = overrideColor;
  v23 = colorTag;
  v19 = (System_Int32_array **)overrideColor;
LABEL_28:
  sub_B0D840((BattleServantConfConponent_o *)v23, v19, v13, v14, v15, v16, v17, v18);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Char_array *v6; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v14; // x0
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4219FE5 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_318/*"#"*/, v3);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4219FE5 = 1;
  }
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  if ( !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15691/*"[-]"*/, 0LL) )
  {
    goto LABEL_11;
  }
  v6 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_14;
  max_length = v6->max_length;
  if ( !max_length || (v6->m_Items[2] = 91, max_length == 1) )
  {
    v14 = sub_B0D9A8(v6);
    sub_B0D948(v14, 0LL);
  }
  v6->m_Items[3] = 93;
  if ( !colorTag )
LABEL_14:
    sub_B0D97C(v6);
  v8 = System_String__Trim(colorTag, v6, 0LL);
  v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_318/*"#"*/, v8, 0LL);
  if ( UnityEngine_ColorUtility__TryParseHtmlString(v9, &v15, 0LL) )
  {
    g = v15.fields.g;
    r = v15.fields.r;
    b = v15.fields.b;
    a = v15.fields.a;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__GetCommandName(
        System_String_o *txt,
        int32_t start,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0

  v3 = start;
  if ( (byte_4219FD7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start);
    byte_4219FD7 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start, method);
  System_Text_StringBuilder___ctor_42149428(v5, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        v3 < txt->fields.m_stringLength;
        appended = System_Text_StringBuilder__Append_42158644(v5, (uint16_t)appended, 0LL) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v3, 0LL);
    if ( (unsigned int)(unsigned __int16)appended - 32 <= 0x3D
      && ((1LL << ((unsigned __int8)appended - 32)) & 0x2800000004000001LL) != 0 )
    {
      break;
    }
    if ( !v5 )
      goto LABEL_11;
    ++v3;
  }
  if ( !v5 )
LABEL_11:
    sub_B0D97C(appended);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
                              v5,
                              v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScriptMessageLabel__GetFontSize(
        System_String_o *sizeName,
        int32_t defaultSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ScriptMessageLabel_c *v8; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v10; // x0

  if ( (byte_4219FCC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, *(_QWORD *)&defaultSize);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v6);
    byte_4219FCC = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_753/*"-"*/, 0LL) )
  {
    v10 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v10 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = v10->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               fontSizes,
               sizeName,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_17:
    sub_B0D97C(fontSizes);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v8 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v8 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v8->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_17;
  sizeName = (System_String_o *)StringLiteral_753/*"-"*/;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           fontSizes,
           sizeName,
           (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *__fastcall ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ScriptMessageLabel_c *v10; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  int v13; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4219FCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v7);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v9);
    byte_4219FCD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v10 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v10 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v10->static_fields->fontSizes;
  if ( !fontSizes )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v15,
    fontSizes,
    (const MethodInfo_2E437A0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v15,
            (const MethodInfo_26C7B10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v15.fields.current.fields.value) == size )
    {
      key = v15.fields.current.fields.key;
      v13 = 8;
      goto LABEL_12;
    }
  }
  key = 0LL;
  v13 = 2;
LABEL_12:
  System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v15,
    (const MethodInfo_26C7C7C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  if ( v13 != 8 )
    return (System_String_o *)StringLiteral_753/*"-"*/;
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
  __int64 v2; // x2
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **mainText; // x1
  System_Int32_array **rubyText; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **imageText; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **playVoiceAssetName; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **playVoiceObjectName; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **setReplayingVoice; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **fontType; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **colorTag; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4219FDF & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    byte_4219FDF = 1;
  }
  v4 = sub_B0D974(ScriptMessageLabel_TypeInfo, method, v2);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v4, v5);
  if ( !v4 )
    sub_B0D97C(v6);
  mainText = (System_Int32_array **)this->fields.mainText;
  *(_QWORD *)(v4 + 120) = mainText;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 120), mainText, v7, v8, v9, v10, v11, v12);
  rubyText = (System_Int32_array **)this->fields.rubyText;
  *(_QWORD *)(v4 + 128) = rubyText;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 128), rubyText, v15, v16, v17, v18, v19, v20);
  imageText = (System_Int32_array **)this->fields.imageText;
  *(_QWORD *)(v4 + 136) = imageText;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 136), imageText, v22, v23, v24, v25, v26, v27);
  playVoiceAssetName = (System_Int32_array **)this->fields.playVoiceAssetName;
  *(_QWORD *)(v4 + 144) = playVoiceAssetName;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 144), playVoiceAssetName, v29, v30, v31, v32, v33, v34);
  playVoiceObjectName = (System_Int32_array **)this->fields.playVoiceObjectName;
  *(_QWORD *)(v4 + 152) = playVoiceObjectName;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 152), playVoiceObjectName, v36, v37, v38, v39, v40, v41);
  *(float *)(v4 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = (System_Int32_array **)this->fields.setReplayingVoice;
  *(_QWORD *)(v4 + 184) = setReplayingVoice;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 184), setReplayingVoice, v43, v44, v45, v46, v47, v48);
  fontType = (System_Int32_array **)this->fields.fontType;
  *(_QWORD *)(v4 + 88) = fontType;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 88), fontType, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)(v4 + 96) = this->fields.fontSize;
  *(_DWORD *)(v4 + 100) = this->fields.rubySize;
  colorTag = (System_Int32_array **)this->fields.colorTag;
  *(_QWORD *)(v4 + 112) = colorTag;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 112), colorTag, v57, v58, v59, v60, v61, v62);
  result = (ScriptMessageLabel_o *)v4;
  *(float *)(v4 + 104) = this->fields.widthSize;
  *(struct UnityEngine_Vector2_o *)(v4 + 72) = this->fields.mainPosition;
  *(struct UnityEngine_Vector2_o *)(v4 + 80) = this->fields.rubyPosition;
  *(float *)(v4 + 108) = this->fields.yOffset;
  *(_BYTE *)(v4 + 192) = this->fields.isPlayingVoice;
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
  System_String_array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x8
  int32_t v7; // w20
  DataManager_o *Instance; // x0
  ServantEntity_o *Entity; // x0
  LocalizationManager_c *v11; // x0
  unsigned int max_length; // w8
  __int64 v13; // x0

  v2 = param;
  if ( (byte_4219FDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    param = (System_String_array *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4219FDB = 1;
  }
  if ( !v2 )
    goto LABEL_29;
  v6 = *(_QWORD *)&v2->max_length;
  if ( !v6 )
    goto LABEL_29;
  if ( !(_DWORD)v6 )
    goto LABEL_26;
  v7 = System_Int32__Parse(v2->m_Items[0], 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v7,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( (int)v2->max_length < 3 )
      return ServantEntity__getName(Entity, -1, -1, 0LL);
    param = (System_String_array *)ServantEntity__IsNameTrue(Entity, 0LL);
    max_length = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( max_length > 2 )
        return v2->m_Items[2];
LABEL_26:
      v13 = sub_B0D9A8(param);
      sub_B0D948(v13, 0LL);
    }
    if ( max_length <= 1 )
      goto LABEL_26;
    return v2->m_Items[1];
  }
  else
  {
LABEL_29:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4212885 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, method);
      byte_4212885 = 1;
    }
    v11 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager_TypeInfo;
    }
    return v11->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int m_stringLength; // w24
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w21
  int v18; // w23
  int32_t v19; // w21
  int v20; // w23
  System_Text_StringBuilder_o *v21; // x21
  int v22; // w25
  int32_t i; // w22
  int v24; // w28
  int v25; // w8
  System_String_o **v26; // x8
  _BYTE v28[32]; // [xsp+8h] [xbp-98h] BYREF
  int v29; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+30h] [xbp-70h] BYREF

  v3 = txt;
  if ( (byte_4219FD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_24049/*"［"*/, v11);
    txt = (System_String_o *)sub_B0D8A4(&StringLiteral_24050/*"］"*/, v12);
    byte_4219FD6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  if ( !v3 )
    goto LABEL_44;
  m_stringLength = v3->fields.m_stringLength;
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( m_stringLength >= 1 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      if ( System_String__get_Chars(v3, v17, 0LL) == 91 )
      {
        ++v18;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v3, v17, 0LL);
        if ( (unsigned __int16)txt == 93 && --v18 < 0 )
        {
          if ( !v14 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v14,
            v17,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v18 = 0;
        }
      }
      ++v17;
    }
    while ( v17 < m_stringLength );
  }
  v19 = m_stringLength - 1;
  if ( m_stringLength - 1 >= 0 )
  {
    v20 = 0;
    do
    {
      if ( System_String__get_Chars(v3, v19, 0LL) == 93 )
      {
        ++v20;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v3, v19, 0LL);
        if ( (unsigned __int16)txt == 91 && --v20 < 0 )
        {
          if ( !v14 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v14,
            v19,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v20 = 0;
        }
      }
      --v19;
    }
    while ( v19 >= 0 );
  }
  v21 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v15, v16);
  System_Text_StringBuilder___ctor(v21, 0LL);
  if ( m_stringLength < 1 )
  {
    if ( v21 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                                  v21,
                                  v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_44:
    sub_B0D97C(txt);
  }
  if ( !v14 )
    goto LABEL_44;
  v22 = 0;
  for ( i = 0; i < m_stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v28,
      v14,
      (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v30 = *(System_Collections_Generic_List_Enumerator_int__o *)v28;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v30,
              (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      if ( i == v30.fields.current )
      {
        v24 = 1;
        goto LABEL_30;
      }
    }
    v24 = 0;
LABEL_30:
    *(_DWORD *)&v28[4 * v22 + 24] = 203;
    v22 = ++v29;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v30,
      (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v22 )
    {
      v25 = v22 - 1;
      if ( *(_DWORD *)&v28[4 * v22 + 20] == 203 )
      {
        --v22;
        v29 = v25;
      }
    }
    txt = (System_String_o *)System_String__get_Chars(v3, i, 0LL);
    if ( v24 )
    {
      if ( !v21 )
        goto LABEL_44;
      v26 = (System_String_o **)&StringLiteral_24049/*"［"*/;
      if ( (unsigned __int16)txt != 91 )
        v26 = (System_String_o **)&StringLiteral_24050/*"］"*/;
      System_Text_StringBuilder__Append_42155400(v21, *v26, 0LL);
    }
    else
    {
      if ( !v21 )
        goto LABEL_44;
      System_Text_StringBuilder__Append_42158644(v21, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                              v21,
                              v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v5; // w22
  System_String_o *v6; // x21
  __int64 v7; // x1
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v9; // x20
  int v10; // w25
  System_String_o *v11; // x23
  int v12; // w26
  int32_t v13; // w1
  __int16 v14; // w24
  int v15; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_4219FD9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&bindex);
    txt = (System_String_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4219FD9 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  m_stringLength = v6->fields.m_stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_B0D974(
                                        System_Text_StringBuilder_TypeInfo,
                                        *(_QWORD *)&bindex,
                                        *(_QWORD *)&index);
  System_Text_StringBuilder___ctor_42149428(v9, m_stringLength, 0LL);
  v10 = 1;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v6->fields.m_stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v12 = 0;
    v13 = v5;
    while ( 1 )
    {
      v5 = v13 + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, v13, 0LL);
      v14 = (__int16)txt;
      if ( (unsigned __int16)txt == 58 )
        break;
      if ( (unsigned __int16)txt != 91 )
      {
        if ( (unsigned __int16)txt == 93 && --v12 < 0 )
          goto LABEL_28;
        goto LABEL_14;
      }
      ++v12;
      if ( !v9 )
        goto LABEL_32;
LABEL_15:
      txt = (System_String_o *)System_Text_StringBuilder__Append_42158644(v9, (uint16_t)txt, 0LL);
      if ( v14 == 34 )
      {
        if ( v5 < v6->fields.m_stringLength )
        {
          do
          {
            v15 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_42158644(v9, Chars, 0LL);
            ++v5;
          }
          while ( v15 < v6->fields.m_stringLength );
          v5 = v15;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_42158644(v9, 0x22u, 0LL);
      }
      v13 = v5;
      if ( v5 >= v6->fields.m_stringLength )
        goto LABEL_28;
    }
    if ( v12 )
    {
LABEL_14:
      if ( !v9 )
        goto LABEL_32;
      goto LABEL_15;
    }
    if ( v10 == index )
    {
      if ( v9 )
      {
        v11 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                   v9,
                                   v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_B0D97C(txt);
    }
    if ( !v9 )
      goto LABEL_32;
LABEL_27:
    ++v10;
    System_Text_StringBuilder__set_Length(v9, 0, 0LL);
  }
  while ( v5 < v6->fields.m_stringLength );
LABEL_28:
  if ( v10 != index )
    return v11;
  if ( !v9 )
    goto LABEL_32;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall ScriptMessageLabel__GetTalkName(
        System_String_o **imageName,
        System_String_o **className,
        System_String_o **charaName,
        int32_t *charaIndex,
        System_String_o *talkName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  unsigned __int64 Chars; // x0
  System_Int32_array **v25; // x26
  ScriptMessageLabel_c *v26; // x8
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ScriptMessageLabel_c *v34; // x8
  System_Int32_array **v35; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_String_array *codeClassSplitStringList; // x25
  System_String_array *v44; // x25
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x8
  int v65; // w9
  int v66; // w28
  const MethodInfo *v67; // x1
  int v68; // w26
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  Il2CppClass **v84; // x26
  System_String_o **v85; // x26
  System_String_o *v86; // t1
  System_String_o *v87; // x26
  int32_t m_stringLength; // w8
  System_String_o **v89; // x8
  System_String_o **v90; // x0
  System_String_o *v91; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x20
  __int64 v93; // x8
  unsigned __int64 i; // x19
  __int64 v95; // x0
  __int64 v96; // x0
  System_Int32_array **v97; // [xsp+0h] [xbp-80h]
  int v98; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint16_t v100; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4219FDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, className);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&string___TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_19374/*"icon_class_{0:D3}"*/, v20);
    sub_B0D8A4(&StringLiteral_24045/*"："*/, v21);
    sub_B0D8A4(&StringLiteral_11615/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    byte_4219FDA = 1;
  }
  v100 = 0;
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Chars = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11615/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v25 = (System_Int32_array **)Chars;
  v26 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v26 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v26->static_fields->codeClassSplitStringList )
  {
    v27 = sub_B0D8BC(string___TypeInfo, 1LL);
    v34 = ScriptMessageLabel_TypeInfo;
    v35 = (System_Int32_array **)v27;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v34 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v34->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v35;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->codeClassSplitStringList,
      v35,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    codeClassSplitStringList = ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_66:
      sub_B0D97C(Chars);
    if ( v25 )
    {
      Chars = sub_B0D964(v25, codeClassSplitStringList->obj.klass->_1.element_class);
      if ( !Chars )
      {
        v96 = sub_B0D99C(0LL);
        sub_B0D948(v96, 0LL);
      }
    }
    if ( !codeClassSplitStringList->max_length )
      goto LABEL_67;
    codeClassSplitStringList->m_Items[0] = (System_String_o *)v25;
    sub_B0D840((BattleServantConfConponent_o *)codeClassSplitStringList->m_Items, v25, v37, v38, v39, v40, v41, v42);
    v26 = ScriptMessageLabel_TypeInfo;
  }
  if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v26);
  if ( !talkName )
    goto LABEL_66;
  v44 = System_String__Split_43912524(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)imageName, 0LL, v45, v46, v47, v48, v49, v50);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)className,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  *charaIndex = -1;
  if ( !v44 )
    goto LABEL_66;
  v64 = *(_QWORD *)&v44->max_length;
  v65 = v64 - 1;
  if ( (int)v64 - 1 < 1 )
    goto LABEL_48;
  v97 = v25;
  v66 = 0;
  do
  {
    if ( v66 >= (unsigned int)v64 )
      goto LABEL_67;
    v84 = &v44->obj.klass + v66;
    v86 = (System_String_o *)v84[4];
    v85 = (System_String_o **)(v84 + 4);
    Chars = (unsigned __int64)v86;
    if ( !v86 )
      goto LABEL_66;
    Chars = System_String__get_Chars((System_String_o *)Chars, 0, 0LL);
    if ( v66 >= v44->max_length )
      goto LABEL_67;
    v87 = *v85;
    if ( !v87 )
      goto LABEL_66;
    m_stringLength = v87->fields.m_stringLength;
    if ( (unsigned __int16)(Chars - 65) <= 0x19u && m_stringLength == 1 )
      goto LABEL_42;
    if ( (unsigned __int16)Chars == 91 && m_stringLength == 9 )
    {
      v100 = System_String__get_Chars(v87, 8, 0LL);
      v87 = System_Char__ToString((uint16_t)&v100, 0LL);
LABEL_42:
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = ScriptMessageLabel__ConvertCharaIndex(v87, v67);
      *charaIndex = Chars;
      goto LABEL_46;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v68 = ScriptMessageLabel__ConvertInteger(v87, v67);
    Chars = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Chars )
      goto LABEL_66;
    Chars = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Chars,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !Chars )
      goto LABEL_66;
    Chars = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Chars,
              &entity,
              v68,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (Chars & 1) != 0 )
    {
      v98 = v68;
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
      v70 = System_String__Format((System_String_o *)StringLiteral_19374/*"icon_class_{0:D3}"*/, v69, 0LL);
      *imageName = v70;
      sub_B0D840((BattleServantConfConponent_o *)imageName, (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
      if ( !entity )
        goto LABEL_66;
      v77 = System_String__Concat_43849904(entity->fields.age, (System_String_o *)StringLiteral_24045/*"："*/, 0LL);
      *className = v77;
      sub_B0D840((BattleServantConfConponent_o *)className, (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
    }
LABEL_46:
    v64 = *(_QWORD *)&v44->max_length;
    ++v66;
    v65 = v64 - 1;
  }
  while ( v66 < (int)v64 - 1 );
  v25 = v97;
LABEL_48:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v90 = charaName;
    v91 = talkName;
  }
  else
  {
    if ( (int)v64 >= 3 )
    {
      v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v57, v58);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v92,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
      v93 = *(_QWORD *)&v44->max_length;
      if ( (int)v93 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v93; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v93 )
              goto LABEL_67;
            if ( !v92 )
              goto LABEL_66;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v92,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v44->m_Items[i],
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
            LODWORD(v93) = v44->max_length;
          }
        }
      }
      v91 = System_String__Join_43905348(
              (System_String_o *)v25,
              (System_Collections_Generic_IEnumerable_string__o *)v92,
              0LL);
      *charaName = v91;
    }
    else
    {
      if ( v64 )
      {
        if ( (_DWORD)v64 )
        {
          v89 = &v44->m_Items[v65];
          goto LABEL_63;
        }
LABEL_67:
        v95 = sub_B0D9A8(Chars);
        sub_B0D948(v95, 0LL);
      }
      v89 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_63:
      v91 = *v89;
      *charaName = *v89;
    }
    v90 = charaName;
  }
  sub_B0D840((BattleServantConfConponent_o *)v90, (System_Int32_array **)v91, v58, v59, v60, v61, v62, v63);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w22
  int32_t v15; // w24
  ScriptMessageLabel_c *v16; // x0
  int v17; // w26
  System_String_o *v18; // x23
  void *v19; // x0
  const MethodInfo *v20; // x1
  System_String_o *v21; // x23
  int32_t v22; // w0
  __int64 v23; // x8
  System_String_o *v24; // x0
  System_String_o *v25; // x1
  __int64 v26; // x0

  if ( (byte_4219FCF & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&len);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4219FCF = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840(
      (BattleServantConfConponent_o *)dispText,
      (System_Int32_array **)StringLiteral_1/*""*/,
      (System_String_array **)dispText,
      (System_String_array **)length,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    v15 = 0;
    goto LABEL_47;
  }
  v14 = 0;
  if ( !len )
  {
    v15 = 0;
    goto LABEL_43;
  }
  v15 = 0;
  if ( text->fields.m_stringLength < 1 )
    goto LABEL_43;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v14, 0LL) != 91 )
    {
      ++v15;
      goto LABEL_23;
    }
    if ( System_String__get_Chars(text, v14 + 1, 0LL) == 35 )
      break;
    v16 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v16 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v16->static_fields->LINE_ORDER, 0LL) )
    {
      v19 = ScriptMessageLabel_TypeInfo;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v19 = ScriptMessageLabel_TypeInfo;
      }
      v23 = *(_QWORD *)(*((_QWORD *)v19 + 23) + 8LL);
      if ( v23 )
      {
        v24 = System_String__Substring_43913640(
                text,
                *(_DWORD *)(v23 + 16),
                text->fields.m_stringLength + ~*(_DWORD *)(v23 + 16),
                0LL);
        v22 = System_Int32__Parse(v24, 0LL);
        goto LABEL_42;
      }
LABEL_48:
      sub_B0D97C(v19);
    }
    v14 += 2;
    if ( v14 < text->fields.m_stringLength )
    {
      v17 = 0;
      do
      {
        if ( System_String__get_Chars(text, v14, 0LL) == 91 )
        {
          ++v17;
        }
        else if ( System_String__get_Chars(text, v14, 0LL) == 93 )
        {
          if ( !v17 )
            break;
          --v17;
        }
        ++v14;
      }
      while ( v14 < text->fields.m_stringLength );
    }
LABEL_23:
    ++v14;
    if ( v15 == len || v14 >= text->fields.m_stringLength )
      goto LABEL_43;
  }
  v18 = System_String__Substring_43913640(text, v14 + 2, text->fields.m_stringLength - 2, 0LL);
  v19 = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v19 )
    goto LABEL_48;
  if ( !*((_DWORD *)v19 + 6) )
    goto LABEL_49;
  *((_WORD *)v19 + 16) = 58;
  if ( !v18 )
    goto LABEL_48;
  v19 = System_String__Split(v18, (System_Char_array *)v19, 0LL);
  if ( !v19 )
    goto LABEL_48;
  if ( !*((_DWORD *)v19 + 6) )
  {
LABEL_49:
    v26 = sub_B0D9A8(v19);
    sub_B0D948(v26, 0LL);
  }
  v21 = (System_String_o *)*((_QWORD *)v19 + 4);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v22 = ScriptMessageLabel__StrlenByDisp(v21, v20);
LABEL_42:
  v15 += v22;
LABEL_43:
  if ( v14 <= text->fields.m_stringLength )
    v25 = System_String__Substring_43913640(text, 0, v14, 0LL);
  else
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)dispText,
    (System_Int32_array **)v25,
    (System_String_array **)dispText,
    (System_String_array **)length,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
LABEL_47:
  *length = v15;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4219FCE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16941/*"bottom"*/, method);
    sub_B0D8A4(&StringLiteral_22802/*"top"*/, v3);
    sub_B0D8A4(&StringLiteral_17311/*"center"*/, v4);
    byte_4219FCE = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || !str
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_22802/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17311/*"center"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(str, (System_String_o *)StringLiteral_16941/*"bottom"*/, 0LL) )
    return 0;
  else
    return 2;
}


bool __fastcall ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t m_stringLength; // w20
  int Chars; // w8
  bool result; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  uint16_t v8; // w22

  v2 = text;
  if ( (byte_4219FD5 & 1) == 0 )
  {
    text = (System_String_o *)sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    byte_4219FD5 = 1;
  }
  if ( !v2 )
    sub_B0D97C(text);
  m_stringLength = v2->fields.m_stringLength;
  if ( (m_stringLength | 2) != 10 )
    return 0;
  Chars = System_String__get_Chars(v2, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v6 = m_stringLength - 1;
  if ( System_String__get_Chars(v2, v6, 0LL) != 93 )
    return 0;
  v7 = 1;
  while ( 1 )
  {
    v8 = System_String__get_Chars(v2, v7, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( (unsigned __int16)(v8 - 48) >= 0xAu )
    {
      result = 0;
      if ( (unsigned int)v8 - 65 > 0x25 || ((1LL << ((unsigned __int8)v8 - 65)) & 0x3F0000003FLL) == 0 )
        break;
    }
    if ( ++v7 >= v6 )
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
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w20
  int32_t v6; // w0
  int32_t v7; // w21
  int32_t v8; // w0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x21

  v2 = txt;
  if ( (byte_4219FD4 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v3);
    txt = (System_String_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v4);
    byte_4219FD4 = 1;
  }
  if ( !v2 )
    sub_B0D97C(txt);
  v5 = 0;
  while ( v5 < v2->fields.m_stringLength )
  {
    v6 = System_String__IndexOf_43922268(v2, (System_String_o *)StringLiteral_15681/*"["*/, v5, 0LL);
    if ( (v6 & 0x80000000) != 0 )
      break;
    v7 = v6;
    v8 = System_String__IndexOf_43922268(v2, (System_String_o *)StringLiteral_15917/*"]"*/, v6, 0LL);
    if ( (v8 & 0x80000000) != 0 )
      break;
    v5 = v8 + 1;
    v10 = System_String__Substring_43913640(v2, v7, v8 + 1 - v7, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( ScriptMessageLabel__IsColorBeginTag(v10, v9) )
      return 1;
  }
  return 0;
}


void __fastcall ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  System_Action_string__string__bool__o *setReplayingVoice; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  float playVoiceVolume; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x1

  if ( (byte_4219FED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__string__bool__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__, v4);
    sub_B0D8A4(&SeManager_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4219FED = 1;
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
      sub_B0D97C(0LL);
    System_Action_string__string__bool___Invoke(
      setReplayingVoice,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      (const MethodInfo_247F25C *)Method_System_Action_string__string__bool__Invoke__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
    v10 = this->fields.playVoiceAssetName;
    v11 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_24977528(v10, v11, playVoiceVolume, v15, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v16);
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
  __int64 v9; // x1
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
  UnityEngine_Object_o *main; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20
  const MethodInfo *v51; // x1

  if ( (byte_4219FDD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4219FDD = 1;
  }
  this->fields.fontType = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
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
    sub_B0D97C(gameObject);
  }
LABEL_35:
  ScriptMessageLabel__DestoryEffect(this, v51);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *IsNullOrEmpty; // x0
  int32_t v6; // w24
  System_String_o *v7; // x20
  int32_t v8; // w22
  int v9; // w25
  int32_t v10; // w0
  int32_t v11; // w21
  System_String_o *v12; // x23
  int32_t v13; // w24
  unsigned __int16 v14; // w25

  if ( (byte_4219FD3 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4219FD3 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v6 = 0;
    v7 = text;
LABEL_12:
    v9 = 1 - v6;
    while ( v6 < text->fields.m_stringLength )
    {
      v8 = v6;
      if ( System_String__get_Chars(text, v6, 0LL) != 91 )
        goto LABEL_11;
      ++v6;
      v10 = System_String__IndexOf_43922000(text, 0x5Du, v8 + 1, 0LL);
      if ( (v10 & 0x80000000) != 0 )
        goto LABEL_11;
      v11 = v10;
      IsNullOrEmpty = System_String__Substring_43913640(text, v8, v10 + v9, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v12 = IsNullOrEmpty;
      --v9;
      if ( (IsNullOrEmpty->fields.m_stringLength | 2) == 10 )
      {
        v13 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v12, v13, 0LL);
          v14 = (unsigned __int16)IsNullOrEmpty;
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          if ( (unsigned __int16)(v14 - 48) >= 0xAu
            && ((unsigned int)v14 - 65 > 0x25 || ((1LL << ((unsigned __int8)v14 - 65)) & 0x3F0000003FLL) == 0) )
          {
            goto LABEL_11;
          }
          ++v13;
        }
        while ( v13 <= v12->fields.m_stringLength - 2 );
        if ( !v7 )
          goto LABEL_27;
        IsNullOrEmpty = System_String__Replace_43857140(v7, v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !IsNullOrEmpty )
          goto LABEL_27;
        v7 = IsNullOrEmpty;
        IsNullOrEmpty = (System_String_o *)System_String__IndexOf_43922252(
                                             IsNullOrEmpty,
                                             (System_String_o *)StringLiteral_15691/*"[-]"*/,
                                             0LL);
        if ( ((unsigned int)IsNullOrEmpty & 0x80000000) == 0 )
        {
          if ( StringLiteral_15691/*"[-]"*/ )
          {
            v7 = System_String__Remove(v7, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15691/*"[-]"*/ + 4), 0LL);
            goto LABEL_10;
          }
LABEL_27:
          sub_B0D97C(IsNullOrEmpty);
        }
LABEL_10:
        v8 = v11;
LABEL_11:
        v6 = v8 + 1;
        goto LABEL_12;
      }
    }
    return v7;
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x26
  UILabel_o *Component_srcLineSprite; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UILabel_o *v34; // x21
  System_Int32_array **v35; // x0
  UnityEngine_GameObject_o **v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UISprite_o *v43; // x20
  UnityEngine_Component_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  double v50; // d0
  const MethodInfo *v51; // x1
  System_String_o *colorTag; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *klass; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  EventDelegate_Callback_o *v63; // x23
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4219FE0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, mainObject);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v15);
    sub_B0D8A4(&EventDelegate_TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v17);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v18);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_ScriptMessageLabel_OnClickPlayVoice__, v21);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v22);
    sub_B0D8A4(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__, v23);
    sub_B0D8A4(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4219FE0 = 1;
  }
  v26 = sub_B0D974(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, mainObject, rubyObject);
  ScriptMessageLabel___c__DisplayClass60_0___ctor((ScriptMessageLabel___c__DisplayClass60_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_49;
  *(_QWORD *)(v26 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  if ( !mainObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           mainObject,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_49;
  v34 = Component_srcLineSprite;
  v35 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 rubyObject,
                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v26 + 24) = v35;
  v36 = (UnityEngine_GameObject_o **)(v26 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 24), v35, v37, v38, v39, v40, v41, v42);
  if ( !imageObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           imageObject,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_49;
  v43 = (UISprite_o *)Component_srcLineSprite;
  v44 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     playVoiceObject,
                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v47 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v26,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_srcLineSprite = (UILabel_o *)System_String__op_Inequality(
                                           this->fields.imageText,
                                           (System_String_o *)StringLiteral_1/*""*/,
                                           0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_49;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v43->klass->vtable._8_set_alpha.method)(
      v43,
      v43->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMark(v43, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v43->klass->vtable._33_MakePixelPerfect.method)(
      v43,
      v43->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v50 = widthSize == INFINITY ? -widthSize : widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v43, (int)v50, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    Color = ScriptMessageLabel__GetColor(colorTag, v51);
    UIWidget__set_color((UIWidget_o *)v43, Color, 0LL);
    if ( !v47 )
      goto LABEL_49;
    System_Action__Invoke(v47, 0LL);
    if ( !v34 )
      goto LABEL_49;
    UILabel__set_text(v34, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v44 )
      goto LABEL_49;
    goto LABEL_36;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.playVoiceEffect,
      (System_Int32_array **)playVoiceEffect,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    if ( v44 )
    {
      Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v44, 0LL);
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
            klass = (System_Collections_Generic_List_EventDelegate__o *)v44[8].klass;
            v63 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v61, v62);
            EventDelegate_Callback___ctor(v63, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventDelegate_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            }
            Component_srcLineSprite = (UILabel_o *)EventDelegate__Set_28893376(klass, v63, 0LL);
            if ( v34 )
            {
              UILabel__set_text(v34, 0LL, 0LL);
              Component_srcLineSprite = (UILabel_o *)*v36;
              if ( *v36 )
              {
                UILabel__set_text(Component_srcLineSprite, 0LL, 0LL);
                if ( v43 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v43->klass->vtable._8_set_alpha.method)(
                    v43,
                    v43->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_B0D97C(Component_srcLineSprite);
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
    if ( !v34 )
      goto LABEL_49;
    UILabel__set_trueTypeFont(v34, this->fields.fontType, 0LL);
  }
  else if ( !v34 )
  {
    goto LABEL_49;
  }
  UILabel__set_fontSize(v34, this->fields.fontSize, 0LL);
  UILabel__set_text(v34, this->fields.mainText, 0LL);
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v34, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  v64.fields.z = 0.0;
  v64.fields.y = -this->fields.yOffset;
  v64.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_srcLineSprite, v64, 0LL);
  if ( !v47 )
    goto LABEL_49;
  System_Action__Invoke(v47, 0LL);
  if ( !v43 )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v43->klass->vtable._8_set_alpha.method)(
                                           v43,
                                           v43->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                                           0.0);
  if ( !v44 )
    goto LABEL_49;
LABEL_36:
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v44, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4219FEE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219FEE = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4219FEF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219FEF = 1;
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
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-1Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4219FD1 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    byte_4219FD1 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v2);
  return length;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__SubstrByDisp(
        System_String_o *text,
        int32_t len,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+Ch] [xbp-24h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4219FD0 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, *(_QWORD *)&len);
    byte_4219FD0 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  ScriptMessageLabel__GetTextByLen(text, len, &dispText, &length, v3);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_String_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UILabel_o *transform; // x0
  int32_t v62; // w19
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x3
  float *p_y; // x19
  float VerticalAlignOffset; // s0
  float v73; // s8
  float v74; // w9
  float v75; // s0
  float v76; // s8
  float v77; // s1
  const MethodInfo *v78; // x1
  float v79; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, main);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_23921/*"・"*/, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_4219FE3 = 1;
  }
  v19 = System_String__Concat_43849904(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  colorTag = this->fields.colorTag;
  p_rubyText = &this->fields.rubyText;
  this->fields.rubyText = colorTag;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)colorTag,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v48, v49, v50, v51, v52, v53, v54);
  this->fields.fontType = font;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_38;
  if ( mainStr->fields.m_stringLength >= 1 )
  {
    v62 = 0;
    do
    {
      v63 = (System_Int32_array **)System_String__Concat_43849904(
                                     *p_rubyText,
                                     (System_String_o *)StringLiteral_23921/*"・"*/,
                                     0LL);
      *p_rubyText = (System_String_o *)v63;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v63, v64, v65, v66, v67, v68, v69);
      ++v62;
    }
    while ( v62 < mainStr->fields.m_stringLength );
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
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v70);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v73 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v84.fields.x = pos->fields.x;
        v84.fields.z = 0.0;
        v84.fields.y = pos->fields.y - v73;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v84, 0LL);
        goto LABEL_26;
      }
    }
LABEL_38:
    sub_B0D97C(transform);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  p_y = &pos->fields.y;
  v83.fields.y = pos->fields.y;
  v83.fields.x = pos->fields.x;
  v83.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v83, 0LL);
  this->fields.yOffset = 0.0;
LABEL_26:
  v74 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v74;
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
                                     - (float)(v75 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  v76 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v76 + (float)((float)(v77 + v77) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  v85.fields.x = this->fields.rubyPosition.fields.x;
  v85.fields.y = this->fields.rubyPosition.fields.y;
  v85.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v85, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  v79 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v79;
  pos->fields.x = v79 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v78);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Int32_array **v18; // x1
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
  struct UnityEngine_Vector2_o v47; // x8
  UnityEngine_Object_o *v48; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v52; // x21
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v54; // x20
  UnityEngine_GameObject_o *v55; // x19
  int32_t v56; // w1
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE9 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, effect);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_6831/*"FrontCommonUI"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4219FE9 = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v18,
    (System_String_array **)pos,
    (System_String_array **)effectName,
    *(System_Boolean_array ***)&dlength,
    (System_Int32_array **)method,
    v7,
    v8);
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v40, v41, v42, v43, v44, v45, v46);
  v47 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  this->fields.mainPosition = v47;
  v48 = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
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
      v52 = this->fields.frontEffect;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      v57.fields.z = 0.0;
      v57.fields.x = x;
      v57.fields.y = y;
      CommonEffectManager__CreateParam_16966936(v52, effectName, v57, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                      transform,
                                                      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v54 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v54) )
      {
        sub_B0D97C(transform);
      }
      SyncTransformComponent__setChild(v54, (UnityEngine_Transform_o *)transform, 0LL);
      v55 = this->fields.frontEffect;
      v56 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6831/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v55, v56, 0LL);
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
  __int64 v14; // x1
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
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
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UISprite_o *v49; // x24
  UIWidget_o *transform; // x0
  int32_t v51; // w23
  float v52; // s0
  float v53; // s8
  float v54; // s1
  float v55; // s0
  double v56; // d0
  int v57; // w23
  UIWidget_o *v58; // x24
  int v59; // s0
  float x; // s0
  float v64; // s8
  struct UnityEngine_Vector2_o v65; // x8
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, image);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4219FE7 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v15,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v7);
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v16, v17, v18, v19, v20, v21, v22);
  this->fields.imageText = imageStr;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v36, v37, v38, v39, v40, v41, v42);
  this->fields.fontType = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.fontSize = fontSize;
  v49 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v49, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  v51 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_21;
  v53 = v52;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  v55 = (float)(v53 * (float)v51) / v54;
  transform = (UIWidget_o *)*image;
  v56 = v55 == INFINITY ? -v55 : v55;
  if ( !transform )
    goto LABEL_21;
  v57 = (int)v56;
  UIWidget__SetDimensions(transform, (int)v56, this->fields.fontSize, 0LL);
  v58 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v59 = UnityEngine_Color__get_white(0LL);
  if ( !v58 )
    goto LABEL_21;
  UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v59, 0LL);
  x = pos->fields.x;
  v64 = (float)v57;
  if ( horizontalAlign == 2 )
  {
    x = x - v64;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v64 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B0D97C(transform);
  }
  v66.fields.x = pos->fields.x;
  v66.fields.y = pos->fields.y;
  v66.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v66, 0LL);
  v65 = *pos;
  this->fields.widthSize = v64;
  this->fields.mainPosition = v65;
  pos->fields.x = pos->fields.x + v64;
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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Int32_array **v20; // x1
  struct System_String_o *v21; // x0
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
  UIWidget_o *transform; // x0
  UISprite_o *v55; // x26
  int32_t v56; // w25
  float v57; // s0
  float v58; // s8
  float v59; // s1
  float v60; // s0
  double v61; // d0
  int v62; // w25
  UIWidget_o *v63; // x26
  int v64; // s0
  float x; // s0
  float v69; // s8
  float y; // s9
  float v71; // s1
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FEA & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, image);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_4219FEA = 1;
  }
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v20,
    (System_String_array **)ruby,
    (System_String_array **)pos,
    *(System_Boolean_array ***)&fontSize,
    (System_Int32_array **)imageStr,
    (System_Int32_array *)rubyStr,
    (System_Int32_array *)font);
  v21 = System_String__Concat_43849904(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.imageText = imageStr;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v41, v42, v43, v44, v45, v46, v47);
  this->fields.fontType = font;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v55 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v55, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v56 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v58 = v57;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  v60 = (float)(v58 * (float)v56) / v59;
  transform = (UIWidget_o *)*image;
  v61 = v60 == INFINITY ? -v60 : v60;
  if ( !transform )
    goto LABEL_33;
  v62 = (int)v61;
  UIWidget__SetDimensions(transform, (int)v61, this->fields.fontSize, 0LL);
  v63 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_white(0LL);
  if ( !v63 )
    goto LABEL_33;
  UIWidget__set_color(v63, *(UnityEngine_Color_o *)&v64, 0LL);
  x = pos->fields.x;
  v69 = (float)v62;
  if ( horizontalAlign == 2 )
  {
    x = x - v69;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v69 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v72.fields.x = pos->fields.x;
  v72.fields.y = pos->fields.y;
  v72.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0LL);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v69 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v71,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B0D97C(transform);
  }
  v73.fields.x = this->fields.rubyPosition.fields.x;
  v73.fields.y = this->fields.rubyPosition.fields.y;
  v73.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v73, 0LL);
  this->fields.widthSize = v69;
  pos->fields.x = pos->fields.x + v69;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_33984332(
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
  ScriptMessageLabel__UpdateImage_33984460(this, image, pos, fontSize, scale, imageStr, zero, horizontalAlign, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImage_33984460(
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
  __int64 v19; // x1
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
  float v54; // s0
  double v55; // d0
  UISprite_o *v56; // x25
  UIWidget_o *transform; // x0
  int32_t v58; // w24
  float v59; // s0
  float v60; // s10
  float v61; // s1
  float v62; // s0
  double v63; // d0
  int v64; // w24
  UIWidget_o *v65; // x25
  int v66; // s0
  float v70; // s0
  float v71; // s10
  int32_t v72; // w8
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4219FE8 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, image);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_4219FE8 = 1;
  }
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v20,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v9);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v21, v22, v23, v24, v25, v26, v27);
  this->fields.imageText = imageStr;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v41, v42, v43, v44, v45, v46, v47);
  this->fields.fontType = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v48, v49, v50, v51, v52, v53);
  v54 = (float)fontSize * scale;
  if ( v54 == INFINITY )
    v55 = -v54;
  else
    v55 = v54;
  this->fields.fontSize = (int)v55;
  v56 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v56, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  v58 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_24;
  v60 = v59;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v62 = (float)(v60 * (float)v58) / v61;
  v63 = v62 == INFINITY ? -INFINITY : v62;
  if ( !transform )
    goto LABEL_24;
  v64 = (int)v63;
  UIWidget__SetDimensions(transform, (int)v63, this->fields.fontSize, 0LL);
  v65 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_white(0LL);
  if ( !v65 )
    goto LABEL_24;
  UIWidget__set_color(v65, *(UnityEngine_Color_o *)&v66, 0LL);
  v70 = pos->fields.x;
  v71 = (float)v64;
  if ( horizontalAlign == 2 )
  {
    v70 = v70 - v71;
  }
  else if ( horizontalAlign == 1 )
  {
    v70 = v70 + (float)(v71 * -0.5);
  }
  pos->fields.x = v70;
  v72 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v70;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v72 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B0D97C(transform);
  }
  v73.fields.x = this->fields.mainPosition.fields.x;
  v73.fields.y = this->fields.mainPosition.fields.y;
  v73.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v73, 0LL);
  this->fields.widthSize = v71;
  pos->fields.x = pos->fields.x + v71;
  this->fields.dispLength = 1;
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_String_o *v19; // x0
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
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UILabel_o *transform; // x0
  const MethodInfo *v61; // x3
  float *p_y; // x22
  float VerticalAlignOffset; // s0
  float v64; // s8
  float v65; // w9
  const MethodInfo *v66; // x1
  float v67; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, main);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_4219FE2 = 1;
  }
  v19 = System_String__Concat_43849904(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v47, v48, v49, v50, v51, v52, v53);
  this->fields.fontType = font;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
        v69.fields.y = pos->fields.y;
        v69.fields.x = pos->fields.x;
        v69.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_B0D97C(transform);
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v61);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v64 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  p_y = &pos->fields.y;
  v70.fields.x = pos->fields.x;
  v70.fields.z = 0.0;
  v70.fields.y = pos->fields.y - v64;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v70, 0LL);
LABEL_21:
  v65 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v65;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v67 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v67;
  pos->fields.x = v67 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateLine(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t length,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Int32_array **v16; // x1
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UISprite_o *v51; // x24
  System_String_o *imageText; // x25
  UIWidget_o *transform; // x0
  float v54; // s0
  float v55; // s8
  float v56; // s1
  float v57; // s0
  double v58; // d0
  int v59; // w23
  const MethodInfo *v60; // x1
  UIWidget_o *v61; // x22
  System_String_o *colorTag; // x24
  int v63; // s0
  float v67; // s8
  struct UnityEngine_Vector2_o v68; // x8
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE6 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, image);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_20291/*"line"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4219FE6 = 1;
  }
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v16,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    *(System_Boolean_array ***)&length,
    (System_Int32_array **)method,
    v6,
    v7);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_20291/*"line"*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_20291/*"line"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.fontType = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.fontSize = fontSize;
  v51 = *image;
  imageText = this->fields.imageText;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v51, imageText, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v55 = v54;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v57 = (float)((float)((float)(v55 * (float)fontSize) / v56) * (float)length) / 10.0;
  v58 = v57 == INFINITY ? -v57 : v57;
  if ( !transform )
    goto LABEL_20;
  v59 = (int)v58;
  UIWidget__SetDimensions(transform, (int)v58, fontSize, 0LL);
  v61 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  *(UnityEngine_Color_o *)&v63 = ScriptMessageLabel__GetColor(colorTag, v60);
  if ( !v61
    || (UIWidget__set_color(v61, *(UnityEngine_Color_o *)&v63, 0LL),
        v67 = (float)v59,
        pos->fields.x = (float)((float)((float)((float)v59 / -231.0) * 6.0) + 6.0) + pos->fields.x,
        (transform = (UIWidget_o *)*image) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_20:
    sub_B0D97C(transform);
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
  __int64 v14; // x1
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  ScriptMessageLabel_c *v48; // x0

  if ( (byte_4219FEB & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, assetName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4219FEB = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setReplayingVoice,
    (System_Int32_array **)setReplayingVoice,
    (System_String_array **)objectName,
    (System_String_array **)setReplayingVoice,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mainText, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rubyText, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v29, v30, v31, v32, v33, v34, v35);
  this->fields.playVoiceAssetName = assetName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAssetName,
    (System_Int32_array **)assetName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.playVoiceObjectName = objectName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playVoiceObjectName,
    (System_Int32_array **)objectName,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.playVoiceVolume = volume;
  v48 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v48 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v48->static_fields->PLAY_VOICE_POSITION_X;
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
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UILabel_o *transform; // x0
  const MethodInfo *v63; // x3
  float *p_y; // x19
  float VerticalAlignOffset; // s0
  float v66; // s8
  float v67; // w9
  float v68; // s0
  float v69; // s8
  float v70; // s1
  const MethodInfo *v71; // x1
  float v72; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FE4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, main);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_4219FE4 = 1;
  }
  v21 = System_String__Concat_43849904(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = System_String__Concat_43849904(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.imageText, v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v42, v43, v44, v45, v46, v47, v48);
  v49 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v49, v50, v51, v52, v53, v54, v55);
  this->fields.fontType = font;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
    sub_B0D97C(transform);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v63);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v66 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v76.fields.x = pos->fields.x;
        v76.fields.z = 0.0;
        v76.fields.y = pos->fields.y - v66;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v76, 0LL);
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
  v75.fields.y = pos->fields.y;
  v75.fields.x = pos->fields.x;
  v75.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v75, 0LL);
  this->fields.yOffset = 0.0;
LABEL_25:
  v67 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v67;
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
                                     - (float)(v68 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  v69 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v69 + v70;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_36;
  v77.fields.x = this->fields.rubyPosition.fields.x;
  v77.fields.y = this->fields.rubyPosition.fields.y;
  v77.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v77, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_36;
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
  ScriptMessageLabel___c__DisplayClass60_0_o *v2; // x19
  __int64 v3; // x1
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v6; // x8
  struct ScriptMessageLabel_o *v7; // x8
  struct UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v9; // x9
  struct ScriptMessageLabel_o *v10; // x8
  float32x2_t *v11; // x8
  int v12; // s2 OVERLAPPED
  unsigned __int64 v13; // d0 OVERLAPPED
  int v14; // s1

  v2 = this;
  if ( (byte_421238C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_421238C = 1;
  }
  _4__this = v2->fields.__4__this;
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
    v6 = v2->fields.__4__this;
    if ( !v6 )
      goto LABEL_23;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
    if ( !this )
      goto LABEL_23;
    UILabel__set_trueTypeFont((UILabel_o *)this, v6->fields.fontType, 0LL);
  }
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_23;
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)System_String__op_Inequality(
                                                         v7->fields.rubyText,
                                                         (System_String_o *)StringLiteral_1/*""*/,
                                                         0LL);
  ruby = v2->fields.ruby;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.__4__this;
    if ( v9 )
    {
      if ( ruby )
      {
        UILabel__set_fontSize(v2->fields.ruby, v9->fields.rubySize, 0LL);
        v10 = v2->fields.__4__this;
        if ( v10 )
        {
          this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v10->fields.rubyText, 0LL);
            this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
            if ( this )
            {
              this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
              v11 = (float32x2_t *)v2->fields.__4__this;
              if ( v11 )
              {
                if ( this )
                {
                  v12 = 0;
                  v13 = vsub_f32(v11[10], v11[9]).n64_u64[0];
                  v14 = HIDWORD(v13);
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)this,
                    *(UnityEngine_Vector3_o *)(&v12 - 2),
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
    sub_B0D97C(this);
  }
  if ( !ruby )
    goto LABEL_23;
  UILabel__set_text(v2->fields.ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}