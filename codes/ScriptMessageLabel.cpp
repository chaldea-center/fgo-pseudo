void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ScriptMessageLabel_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  struct ScriptMessageLabel_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_Dictionary_int__int__o *v26; // x19
  struct ScriptMessageLabel_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42B5AC0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_15906/*"[line "*/);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_20614/*"medium"*/);
    sub_B52984(&StringLiteral_22356/*"small"*/);
    sub_B52984(&StringLiteral_23563/*"x-small"*/);
    sub_B52984(&StringLiteral_20330/*"large"*/);
    sub_B52984(&StringLiteral_23543/*"x-large"*/);
    byte_42B5AC0 = 1;
  }
  ScriptMessageLabel_TypeInfo->static_fields->PLAY_VOICE_POSITION_X = -490.0;
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15906/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15906/*"[line "*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->LINE_ORDER, v8, v1, v2, v3, v4, v5, v6);
  v9 = ScriptMessageLabel_TypeInfo->static_fields;
  v9->codeClassSplitStringList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v9->codeClassSplitStringList, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v16,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v16 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_757/*"-"*/,
    29,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_23563/*"x-small"*/,
    19,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_22356/*"small"*/,
    24,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_20614/*"medium"*/,
    29,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_20330/*"large"*/,
    48,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
    (UIPanel_o *)StringLiteral_23543/*"x-large"*/,
    64,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v19 = ScriptMessageLabel_TypeInfo->static_fields;
  v19->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v16;
  sub_B52920((BattleServantConfConponent_o *)&v19->fontSizes, (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v26 )
LABEL_6:
    sub_B52A5C(v17, v18);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    24,
    0,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    29,
    1,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    48,
    2,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    64,
    3,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v27 = ScriptMessageLabel_TypeInfo->static_fields;
  v27->fontSizeIndexTable = v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&v27->fontSizeIndexTable,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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

  if ( (byte_42B5ABF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5ABF = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_array *__fastcall ScriptMessageLabel__AnalysTagParam(
        System_String_o *txt,
        int32_t bindex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Text_StringBuilder_o *Chars; // x0
  __int64 v7; // x1
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v9; // x22
  int v10; // w25
  int32_t v11; // w1
  __int16 v12; // w23
  int v13; // w23
  uint16_t v14; // w0

  if ( (byte_42B5AA7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    byte_42B5AA7 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_31;
  m_stringLength = txt->fields.m_stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42988076(v9, m_stringLength, 0LL);
  if ( txt->fields.m_stringLength > bindex )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = bindex++;
      Chars = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v11, 0LL);
      v12 = (__int16)Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v10 )
        goto LABEL_17;
      if ( !v9 )
        goto LABEL_31;
      Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                               v9,
                                               v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v5 )
        goto LABEL_31;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      System_Text_StringBuilder__set_Length(v9, 0, 0LL);
      v10 = 0;
LABEL_24:
      if ( bindex >= txt->fields.m_stringLength )
        goto LABEL_25;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v10;
      if ( !v9 )
        goto LABEL_31;
    }
    else
    {
      if ( (unsigned __int16)Chars == 93 && --v10 < 0 )
        goto LABEL_25;
LABEL_17:
      if ( !v9 )
        goto LABEL_31;
    }
    Chars = System_Text_StringBuilder__Append_42997292(v9, (uint16_t)Chars, 0LL);
    if ( v12 == 34 )
    {
      if ( bindex < txt->fields.m_stringLength )
      {
        do
        {
          v13 = bindex + 1;
          v14 = System_String__get_Chars(txt, bindex, 0LL);
          if ( v14 == 34 )
            break;
          System_Text_StringBuilder__Append_42997292(v9, v14, 0LL);
          ++bindex;
        }
        while ( v13 < txt->fields.m_stringLength );
        bindex = v13;
      }
      Chars = System_Text_StringBuilder__Append_42997292(v9, 0x22u, 0LL);
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( !v9 )
    goto LABEL_31;
  Chars = (System_Text_StringBuilder_o *)System_Text_StringBuilder__get_Length(v9, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_31:
    sub_B52A5C(Chars, v7);
  }
  Chars = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                           v9,
                                           v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v5 )
    goto LABEL_31;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Chars,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_42B5ABB & 1) == 0 )
  {
    sub_B52984(&SeManager_TypeInfo);
    byte_42B5ABB = 1;
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
  UILabel_o *v12; // x23
  UILabel_o *v13; // x22
  ScriptMessageLabel_o *v14; // x21

  if ( (byte_42B5AB0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (ScriptMessageLabel_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB0 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   mainObject,
                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v12 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   rubyObject,
                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v13 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         imageObject,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v12)
    || (v14 = this, UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v13)
    || (UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v14)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, float))v14->klass[1]._1.castClass)(
                                         v14,
                                         v14->klass[1]._1.declaringType,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0LL), !playVoiceEffect) )
  {
LABEL_12:
    sub_B52A5C(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B5AAD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5AAD = 1;
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
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
    *p_frontEffect = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.frontEffect, 0LL, v6, v7, v8, v9, v10, v11);
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
    UnityEngine_Object__Destroy_35616956(klass, 0LL);
    p_effect->klass = 0LL;
    sub_B52920(p_effect, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
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

  if ( (byte_42B5AAB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5AAB = 1;
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
    v6 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields, 0LL, v8, v9, v10, v11, v12, v13);
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
    v6 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_49;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v16, 0LL);
    *p_ruby = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.ruby, 0LL, v17, v18, v19, v20, v21, v22);
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
    v6 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_49;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v25, 0LL);
    *p_image = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.image, 0LL, v26, v27, v28, v29, v30, v31);
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
    v6 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_49;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v34, 0LL);
    *p_playVoice = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoice, 0LL, v35, v36, v37, v38, v39, v40);
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
    v6 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v6, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v43, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceEffect, 0LL, v44, v45, v46, v47, v48, v49);
      goto LABEL_48;
    }
LABEL_49:
    sub_B52A5C(v6, v5);
  }
LABEL_48:
  ScriptMessageLabel__DestoryEffect(this, v5);
  this->fields.fontType = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v50, v51, v52, v53, v54, v55);
}


bool __fastcall ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  bool result; // w0
  System_String_o *v9; // x0
  int Chars; // w8
  int32_t m_stringLength; // w8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  int32_t v19; // w22
  int32_t v20; // w23
  uint16_t v21; // w24
  System_String_o **v22; // x0

  if ( (byte_42B5AA1 & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_15749/*"[-]"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AA1 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v9 = *text;
  if ( !*text )
    goto LABEL_30;
  Chars = System_String__get_Chars(v9, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v9 = *text;
  if ( !*text )
LABEL_30:
    sub_B52A5C(v9, v7);
  m_stringLength = v9->fields.m_stringLength;
  if ( m_stringLength != 10 && m_stringLength != 8 )
  {
    if ( m_stringLength == 3 && System_String__op_Equality(v9, (System_String_o *)StringLiteral_15749/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        v18 = (System_Int32_array **)StringLiteral_1/*""*/;
LABEL_27:
        v22 = colorTag;
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    return 0;
  }
  v19 = m_stringLength - 1;
  if ( System_String__get_Chars(v9, m_stringLength - 1, 0LL) != 93 )
    return 0;
  v20 = 1;
  do
  {
    v9 = *text;
    if ( !*text )
      goto LABEL_30;
    v21 = System_String__get_Chars(v9, v20, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( (unsigned __int16)(v21 - 48) >= 0xAu
      && ((unsigned int)v21 - 65 > 0x25 || ((1LL << ((unsigned __int8)v21 - 65)) & 0x3F0000003FLL) == 0) )
    {
      return 0;
    }
    ++v20;
  }
  while ( v20 < v19 );
  if ( !overrideColor )
  {
    v18 = (System_Int32_array **)*text;
    *colorTag = *text;
    goto LABEL_27;
  }
LABEL_25:
  *text = overrideColor;
  sub_B52920((BattleServantConfConponent_o *)text, (System_Int32_array **)overrideColor, v12, v13, v14, v15, v16, v17);
  *colorTag = overrideColor;
  v22 = colorTag;
  v18 = (System_Int32_array **)overrideColor;
LABEL_28:
  sub_B52920((BattleServantConfConponent_o *)v22, v18, v12, v13, v14, v15, v16, v17);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_B52A5C(0LL, start);
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
  System_Char_array *v3; // x0
  System_Char_array *v4; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v12; // x0
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B5AB4 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&StringLiteral_320/*"#"*/);
    sub_B52984(&StringLiteral_15749/*"[-]"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB4 = 1;
  }
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  if ( !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || !System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15749/*"[-]"*/, 0LL) )
  {
    goto LABEL_11;
  }
  v3 = (System_Char_array *)sub_B5299C(char___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v4 = v3;
  if ( !max_length || (v3->m_Items[2] = 91, max_length == 1) )
  {
    v12 = sub_B52A88(v3);
    sub_B52A28(v12, 0LL);
  }
  v3->m_Items[3] = 93;
  if ( !colorTag )
LABEL_14:
    sub_B52A5C(v3, v4);
  v6 = System_String__Trim(colorTag, v3, 0LL);
  v7 = System_String__Concat_44568316((System_String_o *)StringLiteral_320/*"#"*/, v6, 0LL);
  if ( UnityEngine_ColorUtility__TryParseHtmlString(v7, &v13, 0LL) )
  {
    g = v13.fields.g;
    r = v13.fields.r;
    b = v13.fields.b;
    a = v13.fields.a;
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
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1

  if ( (byte_42B5AA6 & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    byte_42B5AA6 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42988076(v5, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        start < txt->fields.m_stringLength;
        appended = System_Text_StringBuilder__Append_42997292(v5, (uint16_t)appended, 0LL) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, start, 0LL);
    v7 = (unsigned int)appended;
    if ( (unsigned int)(unsigned __int16)appended - 32 <= 0x3D
      && ((1LL << ((unsigned __int8)appended - 32)) & 0x2800000004000001LL) != 0 )
    {
      break;
    }
    if ( !v5 )
      goto LABEL_11;
    ++start;
  }
  if ( !v5 )
LABEL_11:
    sub_B52A5C(appended, v7);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
                              v5,
                              v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int32_t __fastcall ScriptMessageLabel__GetFontSize(
        System_String_o *sizeName,
        int32_t defaultSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptMessageLabel_c *v7; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v9; // x0

  if ( (byte_42B5A9B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_757/*"-"*/);
    byte_42B5A9B = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_757/*"-"*/, 0LL) )
  {
    v9 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v9 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = v9->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               fontSizes,
               sizeName,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_17:
    sub_B52A5C(fontSizes, v5);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v7 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v7 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v7->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_17;
  sizeName = (System_String_o *)StringLiteral_757/*"-"*/;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           fontSizes,
           sizeName,
           (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *__fastcall ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  ScriptMessageLabel_c *v3; // x0
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  int v6; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B5A9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_757/*"-"*/);
    byte_42B5A9C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  v3 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v3 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = v3->static_fields->fontSizes;
  if ( !fontSizes )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v8,
    fontSizes,
    (const MethodInfo_2F1061C *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v8,
            (const MethodInfo_274C2FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v8.fields.current.fields.value) == size )
    {
      key = v8.fields.current.fields.key;
      v6 = 8;
      goto LABEL_12;
    }
  }
  key = 0LL;
  v6 = 2;
LABEL_12:
  System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_string__int__o *)&v8,
    (const MethodInfo_274C468 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  if ( v6 != 8 )
    return (System_String_o *)StringLiteral_757/*"-"*/;
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
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
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

  if ( (byte_42B5AAE & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    byte_42B5AAE = 1;
  }
  v3 = sub_B52A54(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_B52A5C(v5, v6);
  mainText = (System_Int32_array **)this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 120), mainText, v7, v8, v9, v10, v11, v12);
  rubyText = (System_Int32_array **)this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 128), rubyText, v15, v16, v17, v18, v19, v20);
  imageText = (System_Int32_array **)this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 136), imageText, v22, v23, v24, v25, v26, v27);
  playVoiceAssetName = (System_Int32_array **)this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 144), playVoiceAssetName, v29, v30, v31, v32, v33, v34);
  playVoiceObjectName = (System_Int32_array **)this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 152), playVoiceObjectName, v36, v37, v38, v39, v40, v41);
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = (System_Int32_array **)this->fields.setReplayingVoice;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 184), setReplayingVoice, v43, v44, v45, v46, v47, v48);
  fontType = (System_Int32_array **)this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 88), fontType, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)(v3 + 96) = this->fields.fontSize;
  *(_DWORD *)(v3 + 100) = this->fields.rubySize;
  colorTag = (System_Int32_array **)this->fields.colorTag;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 112), colorTag, v57, v58, v59, v60, v61, v62);
  result = (ScriptMessageLabel_o *)v3;
  *(float *)(v3 + 104) = this->fields.widthSize;
  *(struct UnityEngine_Vector2_o *)(v3 + 72) = this->fields.mainPosition;
  *(struct UnityEngine_Vector2_o *)(v3 + 80) = this->fields.rubyPosition;
  *(float *)(v3 + 108) = this->fields.yOffset;
  *(_BYTE *)(v3 + 192) = this->fields.isPlayingVoice;
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
  __int64 v3; // x8
  int32_t v4; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantEntity_o *Entity; // x0
  LocalizationManager_c *v9; // x0
  unsigned int max_length; // w8
  __int64 v11; // x0

  v2 = param;
  if ( (byte_42B5AAA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    param = (System_String_array *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5AAA = 1;
  }
  if ( !v2 )
    goto LABEL_29;
  v3 = *(_QWORD *)&v2->max_length;
  if ( !v3 )
    goto LABEL_29;
  if ( !(_DWORD)v3 )
    goto LABEL_26;
  v4 = System_Int32__Parse(v2->m_Items[0], 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v4,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      v11 = sub_B52A88(param);
      sub_B52A28(v11, 0LL);
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
    if ( !byte_42ADEE6 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      byte_42ADEE6 = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    return v9->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int m_stringLength; // w24
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w21
  int v6; // w23
  int32_t v7; // w21
  int v8; // w23
  System_Text_StringBuilder_o *v9; // x21
  int v10; // w25
  int32_t i; // w22
  int v12; // w28
  int v13; // w8
  System_String_o **v14; // x8
  _BYTE v16[32]; // [xsp+8h] [xbp-98h] BYREF
  int v17; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+30h] [xbp-70h] BYREF

  v2 = txt;
  if ( (byte_42B5AA5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_24170/*"［"*/);
    txt = (System_String_o *)sub_B52984(&StringLiteral_24171/*"］"*/);
    byte_42B5AA5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
  if ( !v2 )
    goto LABEL_44;
  m_stringLength = v2->fields.m_stringLength;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( m_stringLength >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v5, 0LL) == 91 )
      {
        ++v6;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v5, 0LL);
        if ( (unsigned __int16)txt == 93 && --v6 < 0 )
        {
          if ( !v4 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v4,
            v5,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          v6 = 0;
        }
      }
      ++v5;
    }
    while ( v5 < m_stringLength );
  }
  v7 = m_stringLength - 1;
  if ( m_stringLength - 1 >= 0 )
  {
    v8 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v7, 0LL) == 93 )
      {
        ++v8;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v7, 0LL);
        if ( (unsigned __int16)txt == 91 && --v8 < 0 )
        {
          if ( !v4 )
            goto LABEL_44;
          System_Collections_Generic_List_int___Add(
            v4,
            v7,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          v8 = 0;
        }
      }
      --v7;
    }
    while ( v7 >= 0 );
  }
  v9 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0LL);
  if ( m_stringLength < 1 )
  {
    if ( v9 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_44:
    sub_B52A5C(txt, method);
  }
  if ( !v4 )
    goto LABEL_44;
  v10 = 0;
  for ( i = 0; i < m_stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v16,
      v4,
      (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v18 = *(System_Collections_Generic_List_Enumerator_int__o *)v16;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v18,
              (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      if ( i == v18.fields.current )
      {
        v12 = 1;
        goto LABEL_30;
      }
    }
    v12 = 0;
LABEL_30:
    *(_DWORD *)&v16[4 * v10 + 24] = 203;
    v10 = ++v17;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v18,
      (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v10 )
    {
      v13 = v10 - 1;
      if ( *(_DWORD *)&v16[4 * v10 + 20] == 203 )
      {
        --v10;
        v17 = v13;
      }
    }
    txt = (System_String_o *)System_String__get_Chars(v2, i, 0LL);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v12 )
    {
      if ( !v9 )
        goto LABEL_44;
      v14 = (System_String_o **)&StringLiteral_24170/*"［"*/;
      if ( (unsigned __int16)txt != 91 )
        v14 = (System_String_o **)&StringLiteral_24171/*"］"*/;
      System_Text_StringBuilder__Append_42994048(v9, *v14, 0LL);
    }
    else
    {
      if ( !v9 )
        goto LABEL_44;
      System_Text_StringBuilder__Append_42997292(v9, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  int32_t m_stringLength; // w23
  System_Text_StringBuilder_o *v8; // x20
  int v9; // w25
  System_String_o *v10; // x23
  int v11; // w26
  __int16 v12; // w24
  int v13; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_42B5AA8 & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    txt = (System_String_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AA8 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  m_stringLength = v6->fields.m_stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42988076(v8, m_stringLength, 0LL);
  v9 = 1;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v6->fields.m_stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v11 = 0;
    bindex = v5;
    while ( 1 )
    {
      v5 = bindex + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0LL);
      v12 = (__int16)txt;
      if ( (unsigned __int16)txt == 58 )
        break;
      if ( (unsigned __int16)txt != 91 )
      {
        if ( (unsigned __int16)txt == 93 && --v11 < 0 )
          goto LABEL_28;
        goto LABEL_14;
      }
      ++v11;
      if ( !v8 )
        goto LABEL_32;
LABEL_15:
      txt = (System_String_o *)System_Text_StringBuilder__Append_42997292(v8, (uint16_t)txt, 0LL);
      if ( v12 == 34 )
      {
        if ( v5 < v6->fields.m_stringLength )
        {
          do
          {
            v13 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_42997292(v8, Chars, 0LL);
            ++v5;
          }
          while ( v13 < v6->fields.m_stringLength );
          v5 = v13;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_42997292(v8, 0x22u, 0LL);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields.m_stringLength )
        goto LABEL_28;
    }
    if ( v11 )
    {
LABEL_14:
      if ( !v8 )
        goto LABEL_32;
      goto LABEL_15;
    }
    if ( v9 == index )
    {
      if ( v8 )
      {
        v10 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                   v8,
                                   v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_B52A5C(txt, *(_QWORD *)&bindex);
    }
    if ( !v8 )
      goto LABEL_32;
LABEL_27:
    ++v9;
    System_Text_StringBuilder__set_Length(v8, 0, 0LL);
  }
  while ( v5 < v6->fields.m_stringLength );
LABEL_28:
  if ( v9 != index )
    return v10;
  if ( !v8 )
    goto LABEL_32;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall ScriptMessageLabel__GetTalkName(
        System_String_o **imageName,
        System_String_o **className,
        System_String_o **charaName,
        int32_t *charaIndex,
        System_String_o *talkName,
        const MethodInfo *method)
{
  unsigned __int64 Chars; // x0
  const MethodInfo *v12; // x1
  System_Int32_array **v13; // x26
  ScriptMessageLabel_c *v14; // x8
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ScriptMessageLabel_c *v22; // x8
  System_Int32_array **v23; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *codeClassSplitStringList; // x25
  System_String_array *v32; // x25
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
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
  __int64 v51; // x8
  int v52; // w9
  int v53; // w28
  int v54; // w26
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppClass **v70; // x26
  System_String_o **v71; // x26
  System_String_o *v72; // t1
  System_String_o *v73; // x26
  int32_t m_stringLength; // w8
  System_String_o **v75; // x8
  System_String_o **v76; // x0
  System_String_o *v77; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x20
  __int64 v79; // x8
  unsigned __int64 i; // x19
  __int64 v81; // x0
  __int64 v82; // x0
  System_Int32_array **v83; // [xsp+0h] [xbp-80h]
  int v84; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint16_t v86; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B5AA9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_19459/*"icon_class_{0:D3}"*/);
    sub_B52984(&StringLiteral_24166/*"："*/);
    sub_B52984(&StringLiteral_11675/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AA9 = 1;
  }
  v86 = 0;
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Chars = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11675/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v13 = (System_Int32_array **)Chars;
  v14 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v14 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v14->static_fields->codeClassSplitStringList )
  {
    v15 = sub_B5299C(string___TypeInfo, 1LL);
    v22 = ScriptMessageLabel_TypeInfo;
    v23 = (System_Int32_array **)v15;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v22 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v23;
    sub_B52920(
      (BattleServantConfConponent_o *)&static_fields->codeClassSplitStringList,
      v23,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    codeClassSplitStringList = ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_66:
      sub_B52A5C(Chars, v12);
    if ( v13 )
    {
      Chars = sub_B52A44(v13, codeClassSplitStringList->obj.klass->_1.element_class);
      if ( !Chars )
      {
        v82 = sub_B52A7C(0LL);
        sub_B52A28(v82, 0LL);
      }
    }
    if ( !codeClassSplitStringList->max_length )
      goto LABEL_67;
    codeClassSplitStringList->m_Items[0] = (System_String_o *)v13;
    sub_B52920((BattleServantConfConponent_o *)codeClassSplitStringList->m_Items, v13, v25, v26, v27, v28, v29, v30);
    v14 = ScriptMessageLabel_TypeInfo;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !talkName )
    goto LABEL_66;
  v32 = System_String__Split_44630936(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_B52920((BattleServantConfConponent_o *)imageName, 0LL, v33, v34, v35, v36, v37, v38);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)className,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *charaIndex = -1;
  if ( !v32 )
    goto LABEL_66;
  v51 = *(_QWORD *)&v32->max_length;
  v52 = v51 - 1;
  if ( (int)v51 - 1 < 1 )
    goto LABEL_48;
  v83 = v13;
  v53 = 0;
  do
  {
    if ( v53 >= (unsigned int)v51 )
      goto LABEL_67;
    v70 = &v32->obj.klass + v53;
    v72 = (System_String_o *)v70[4];
    v71 = (System_String_o **)(v70 + 4);
    Chars = (unsigned __int64)v72;
    if ( !v72 )
      goto LABEL_66;
    Chars = System_String__get_Chars((System_String_o *)Chars, 0, 0LL);
    if ( v53 >= v32->max_length )
      goto LABEL_67;
    v73 = *v71;
    if ( !v73 )
      goto LABEL_66;
    m_stringLength = v73->fields.m_stringLength;
    if ( (unsigned __int16)(Chars - 65) <= 0x19u && m_stringLength == 1 )
      goto LABEL_42;
    if ( (unsigned __int16)Chars == 91 && m_stringLength == 9 )
    {
      v86 = System_String__get_Chars(v73, 8, 0LL);
      v73 = System_Char__ToString((uint16_t)&v86, 0LL);
LABEL_42:
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = ScriptMessageLabel__ConvertCharaIndex(v73, v12);
      *charaIndex = Chars;
      goto LABEL_46;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v54 = ScriptMessageLabel__ConvertInteger(v73, v12);
    Chars = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Chars )
      goto LABEL_66;
    Chars = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Chars,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !Chars )
      goto LABEL_66;
    Chars = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Chars,
              &entity,
              v54,
              (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (Chars & 1) != 0 )
    {
      v84 = v54;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
      v56 = System_String__Format((System_String_o *)StringLiteral_19459/*"icon_class_{0:D3}"*/, v55, 0LL);
      *imageName = v56;
      sub_B52920((BattleServantConfConponent_o *)imageName, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
      if ( !entity )
        goto LABEL_66;
      v63 = System_String__Concat_44568316(entity->fields.age, (System_String_o *)StringLiteral_24166/*"："*/, 0LL);
      *className = v63;
      sub_B52920((BattleServantConfConponent_o *)className, (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
    }
LABEL_46:
    v51 = *(_QWORD *)&v32->max_length;
    ++v53;
    v52 = v51 - 1;
  }
  while ( v53 < (int)v51 - 1 );
  v13 = v83;
LABEL_48:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v76 = charaName;
    v77 = talkName;
  }
  else
  {
    if ( (int)v51 >= 3 )
    {
      v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v78,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
      v79 = *(_QWORD *)&v32->max_length;
      if ( (int)v79 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v79; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v79 )
              goto LABEL_67;
            if ( !v78 )
              goto LABEL_66;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v78,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v32->m_Items[i],
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
            LODWORD(v79) = v32->max_length;
          }
        }
      }
      v77 = System_String__Join_44623760(
              (System_String_o *)v13,
              (System_Collections_Generic_IEnumerable_string__o *)v78,
              0LL);
      *charaName = v77;
    }
    else
    {
      if ( v51 )
      {
        if ( (_DWORD)v51 )
        {
          v75 = &v32->m_Items[v52];
          goto LABEL_63;
        }
LABEL_67:
        v81 = sub_B52A88(Chars);
        sub_B52A28(v81, 0LL);
      }
      v75 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_63:
      v77 = *v75;
      *charaName = *v75;
    }
    v76 = charaName;
  }
  sub_B52920((BattleServantConfConponent_o *)v76, (System_Int32_array **)v77, v45, v46, v47, v48, v49, v50);
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
  int32_t v12; // w22
  int32_t v13; // w24
  ScriptMessageLabel_c *v14; // x0
  const MethodInfo *v15; // x1
  int v16; // w26
  System_String_o *v17; // x23
  void *v18; // x0
  System_String_o *v19; // x23
  int32_t v20; // w0
  __int64 v21; // x8
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  __int64 v24; // x0

  if ( (byte_42B5A9E & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5A9E = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_B52920(
      (BattleServantConfConponent_o *)dispText,
      (System_Int32_array **)StringLiteral_1/*""*/,
      (System_String_array **)dispText,
      (System_String_array **)length,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    v13 = 0;
    goto LABEL_47;
  }
  v12 = 0;
  if ( !len )
  {
    v13 = 0;
    goto LABEL_43;
  }
  v13 = 0;
  if ( text->fields.m_stringLength < 1 )
    goto LABEL_43;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v12, 0LL) != 91 )
    {
      ++v13;
      goto LABEL_23;
    }
    if ( System_String__get_Chars(text, v12 + 1, 0LL) == 35 )
      break;
    v14 = ScriptMessageLabel_TypeInfo;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v14 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v14->static_fields->LINE_ORDER, 0LL) )
    {
      v18 = ScriptMessageLabel_TypeInfo;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v18 = ScriptMessageLabel_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)v18 + 23) + 8LL);
      if ( v21 )
      {
        v22 = System_String__Substring_44632052(
                text,
                *(_DWORD *)(v21 + 16),
                text->fields.m_stringLength + ~*(_DWORD *)(v21 + 16),
                0LL);
        v20 = System_Int32__Parse(v22, 0LL);
        goto LABEL_42;
      }
LABEL_48:
      sub_B52A5C(v18, v15);
    }
    v12 += 2;
    if ( v12 < text->fields.m_stringLength )
    {
      v16 = 0;
      do
      {
        if ( System_String__get_Chars(text, v12, 0LL) == 91 )
        {
          ++v16;
        }
        else if ( System_String__get_Chars(text, v12, 0LL) == 93 )
        {
          if ( !v16 )
            break;
          --v16;
        }
        ++v12;
      }
      while ( v12 < text->fields.m_stringLength );
    }
LABEL_23:
    ++v12;
    if ( v13 == len || v12 >= text->fields.m_stringLength )
      goto LABEL_43;
  }
  v17 = System_String__Substring_44632052(text, v12 + 2, text->fields.m_stringLength - 2, 0LL);
  v18 = (void *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v18 )
    goto LABEL_48;
  v15 = (const MethodInfo *)v18;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_49;
  *((_WORD *)v18 + 16) = 58;
  if ( !v17 )
    goto LABEL_48;
  v18 = System_String__Split(v17, (System_Char_array *)v18, 0LL);
  if ( !v18 )
    goto LABEL_48;
  if ( !*((_DWORD *)v18 + 6) )
  {
LABEL_49:
    v24 = sub_B52A88(v18);
    sub_B52A28(v24, 0LL);
  }
  v19 = (System_String_o *)*((_QWORD *)v18 + 4);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v20 = ScriptMessageLabel__StrlenByDisp(v19, v15);
LABEL_42:
  v13 += v20;
LABEL_43:
  if ( v12 <= text->fields.m_stringLength )
    v23 = System_String__Substring_44632052(text, 0, v12, 0LL);
  else
    v23 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v23;
  sub_B52920(
    (BattleServantConfConponent_o *)dispText,
    (System_Int32_array **)v23,
    (System_String_array **)dispText,
    (System_String_array **)length,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
LABEL_47:
  *length = v13;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  if ( (byte_42B5A9D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17007/*"bottom"*/);
    sub_B52984(&StringLiteral_22916/*"top"*/);
    sub_B52984(&StringLiteral_17380/*"center"*/);
    byte_42B5A9D = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || !str
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_22916/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17380/*"center"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(str, (System_String_o *)StringLiteral_17007/*"bottom"*/, 0LL) )
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
  if ( (byte_42B5AA4 & 1) == 0 )
  {
    text = (System_String_o *)sub_B52984(&ScriptMessageLabel_TypeInfo);
    byte_42B5AA4 = 1;
  }
  if ( !v2 )
    sub_B52A5C(text, method);
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
  int32_t v3; // w20
  int32_t v4; // w0
  int32_t v5; // w21
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x21

  v2 = txt;
  if ( (byte_42B5AA3 & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_15739/*"["*/);
    txt = (System_String_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B5AA3 = 1;
  }
  if ( !v2 )
    sub_B52A5C(txt, method);
  v3 = 0;
  while ( v3 < v2->fields.m_stringLength )
  {
    v4 = System_String__IndexOf_44640680(v2, (System_String_o *)StringLiteral_15739/*"["*/, v3, 0LL);
    if ( (v4 & 0x80000000) != 0 )
      break;
    v5 = v4;
    v6 = System_String__IndexOf_44640680(v2, (System_String_o *)StringLiteral_15976/*"]"*/, v4, 0LL);
    if ( (v6 & 0x80000000) != 0 )
      break;
    v3 = v6 + 1;
    v8 = System_String__Substring_44632052(v2, v5, v6 + 1 - v5, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    if ( ScriptMessageLabel__IsColorBeginTag(v8, v7) )
      return 1;
  }
  return 0;
}


void __fastcall ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  __int64 v5; // x1
  System_Action_string__string__bool__o *setReplayingVoice; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  float playVoiceVolume; // s8
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x1

  if ( (byte_42B5ABC & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string__string__bool__Invoke__);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B5ABC = 1;
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
      sub_B52A5C(0LL, v5);
    System_Action_string__string__bool___Invoke(
      setReplayingVoice,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      (const MethodInfo_2637FA0 *)Method_System_Action_string__string__bool__Invoke__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
    v7 = this->fields.playVoiceAssetName;
    v8 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_23788136(v7, v8, playVoiceVolume, v10, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v11);
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
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
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
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v45; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_42B5AAC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AAC = 1;
  }
  this->fields.fontType = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mainText, v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v37, v38, v39, v40, v41, v42, v43);
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
    sub_B52A5C(gameObject, v45);
  }
LABEL_35:
  ScriptMessageLabel__DestoryEffect(this, v45);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w24
  System_String_o *v6; // x20
  int32_t v7; // w22
  int v8; // w25
  int32_t v9; // w0
  int32_t v10; // w21
  System_String_o *v11; // x23
  int32_t v12; // w24
  unsigned __int16 v13; // w25

  if ( (byte_42B5AA2 & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_15749/*"[-]"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AA2 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v5 = 0;
    v6 = text;
LABEL_12:
    v8 = 1 - v5;
    while ( v5 < text->fields.m_stringLength )
    {
      v7 = v5;
      if ( System_String__get_Chars(text, v5, 0LL) != 91 )
        goto LABEL_11;
      ++v5;
      v9 = System_String__IndexOf_44640412(text, 0x5Du, v7 + 1, 0LL);
      if ( (v9 & 0x80000000) != 0 )
        goto LABEL_11;
      v10 = v9;
      IsNullOrEmpty = System_String__Substring_44632052(text, v7, v9 + v8, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v11 = IsNullOrEmpty;
      --v8;
      if ( (IsNullOrEmpty->fields.m_stringLength | 2) == 10 )
      {
        v12 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v11, v12, 0LL);
          v13 = (unsigned __int16)IsNullOrEmpty;
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          if ( (unsigned __int16)(v13 - 48) >= 0xAu
            && ((unsigned int)v13 - 65 > 0x25 || ((1LL << ((unsigned __int8)v13 - 65)) & 0x3F0000003FLL) == 0) )
          {
            goto LABEL_11;
          }
          ++v12;
        }
        while ( v12 <= v11->fields.m_stringLength - 2 );
        if ( !v6 )
          goto LABEL_27;
        IsNullOrEmpty = System_String__Replace_44575552(v6, v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !IsNullOrEmpty )
          goto LABEL_27;
        v6 = IsNullOrEmpty;
        IsNullOrEmpty = (System_String_o *)System_String__IndexOf_44640664(
                                             IsNullOrEmpty,
                                             (System_String_o *)StringLiteral_15749/*"[-]"*/,
                                             0LL);
        if ( ((unsigned int)IsNullOrEmpty & 0x80000000) == 0 )
        {
          if ( StringLiteral_15749/*"[-]"*/ )
          {
            v6 = System_String__Remove(v6, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15749/*"[-]"*/ + 4), 0LL);
            goto LABEL_10;
          }
LABEL_27:
          sub_B52A5C(IsNullOrEmpty, v4);
        }
LABEL_10:
        v7 = v10;
LABEL_11:
        v5 = v7 + 1;
        goto LABEL_12;
      }
    }
    return v6;
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
  __int64 v14; // x26
  UILabel_o *Component_srcLineSprite; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UILabel_o *v23; // x21
  System_Int32_array **v24; // x0
  UnityEngine_GameObject_o **v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UISprite_o *v32; // x20
  UnityEngine_Component_o *v33; // x22
  System_Action_o *v34; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  double v37; // d0
  const MethodInfo *v38; // x1
  System_String_o *colorTag; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *klass; // x22
  EventDelegate_Callback_o *v48; // x23
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B5AAF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ScriptMessageLabel_OnClickPlayVoice__);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__);
    sub_B52984(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AAF = 1;
  }
  v14 = sub_B52A54(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  ScriptMessageLabel___c__DisplayClass60_0___ctor((ScriptMessageLabel___c__DisplayClass60_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_49;
  *(_QWORD *)(v14 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( !mainObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           mainObject,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_49;
  v23 = Component_srcLineSprite;
  v24 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 rubyObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v14 + 24) = v24;
  v25 = (UnityEngine_GameObject_o **)(v14 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v14 + 24), v24, v26, v27, v28, v29, v30, v31);
  if ( !imageObject )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           imageObject,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_49;
  v32 = (UISprite_o *)Component_srcLineSprite;
  v33 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     playVoiceObject,
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v14,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_srcLineSprite = (UILabel_o *)System_String__op_Inequality(
                                           this->fields.imageText,
                                           (System_String_o *)StringLiteral_1/*""*/,
                                           0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_49;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v32->klass->vtable._8_set_alpha.method)(
      v32,
      v32->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMark(v32, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v32->klass->vtable._33_MakePixelPerfect.method)(
      v32,
      v32->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v37 = widthSize == INFINITY ? -widthSize : widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v32, (int)v37, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    Color = ScriptMessageLabel__GetColor(colorTag, v38);
    UIWidget__set_color((UIWidget_o *)v32, Color, 0LL);
    if ( !v34 )
      goto LABEL_49;
    System_Action__Invoke(v34, 0LL);
    if ( !v23 )
      goto LABEL_49;
    UILabel__set_text(v23, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v33 )
      goto LABEL_49;
    goto LABEL_36;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.playVoiceEffect,
      (System_Int32_array **)playVoiceEffect,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( v33 )
    {
      Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
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
            klass = (System_Collections_Generic_List_EventDelegate__o *)v33[8].klass;
            v48 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v48, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventDelegate_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            }
            Component_srcLineSprite = (UILabel_o *)EventDelegate__Set_29653788(klass, v48, 0LL);
            if ( v23 )
            {
              UILabel__set_text(v23, 0LL, 0LL);
              Component_srcLineSprite = (UILabel_o *)*v25;
              if ( *v25 )
              {
                UILabel__set_text(Component_srcLineSprite, 0LL, 0LL);
                if ( v32 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v32->klass->vtable._8_set_alpha.method)(
                    v32,
                    v32->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_B52A5C(Component_srcLineSprite, v16);
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
    if ( !v23 )
      goto LABEL_49;
    UILabel__set_trueTypeFont(v23, this->fields.fontType, 0LL);
  }
  else if ( !v23 )
  {
    goto LABEL_49;
  }
  UILabel__set_fontSize(v23, this->fields.fontSize, 0LL);
  UILabel__set_text(v23, this->fields.mainText, 0LL);
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  v49.fields.z = 0.0;
  v49.fields.y = -this->fields.yOffset;
  v49.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_srcLineSprite, v49, 0LL);
  if ( !v34 )
    goto LABEL_49;
  System_Action__Invoke(v34, 0LL);
  if ( !v32 )
    goto LABEL_49;
  Component_srcLineSprite = (UILabel_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v32->klass->vtable._8_set_alpha.method)(
                                           v32,
                                           v32->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                                           0.0);
  if ( !v33 )
    goto LABEL_49;
LABEL_36:
  Component_srcLineSprite = (UILabel_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42B5ABD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5ABD = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42B5ABE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5ABE = 1;
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
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-1Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B5AA0 & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    byte_42B5AA0 = 1;
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


System_String_o *__fastcall ScriptMessageLabel__SubstrByDisp(
        System_String_o *text,
        int32_t len,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+Ch] [xbp-24h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42B5A9F & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    byte_42B5A9F = 1;
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
  struct System_String_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
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
  UILabel_o *transform; // x0
  __int64 v59; // x1
  int32_t v60; // w19
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
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
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_24040/*"・"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB2 = 1;
  }
  v16 = System_String__Concat_44568316(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  colorTag = this->fields.colorTag;
  p_rubyText = &this->fields.rubyText;
  this->fields.rubyText = colorTag;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)colorTag,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_38;
  if ( mainStr->fields.m_stringLength >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = (System_Int32_array **)System_String__Concat_44568316(
                                     *p_rubyText,
                                     (System_String_o *)StringLiteral_24040/*"・"*/,
                                     0LL);
      *p_rubyText = (System_String_o *)v61;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v61, v62, v63, v64, v65, v66, v67);
      ++v60;
    }
    while ( v60 < mainStr->fields.m_stringLength );
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
        v82.fields.x = pos->fields.x;
        v82.fields.z = 0.0;
        v82.fields.y = pos->fields.y - v71;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v82, 0LL);
        goto LABEL_26;
      }
    }
LABEL_38:
    sub_B52A5C(transform, v59);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  p_y = &pos->fields.y;
  v81.fields.y = pos->fields.y;
  v81.fields.x = pos->fields.x;
  v81.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v81, 0LL);
  this->fields.yOffset = 0.0;
LABEL_26:
  v72 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v72;
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
                                     - (float)(v73 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  v74 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v74 + (float)((float)(v75 + v75) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_38;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_38;
  v83.fields.x = this->fields.rubyPosition.fields.x;
  v83.fields.y = this->fields.rubyPosition.fields.y;
  v83.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v83, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_38;
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
  System_Int32_array **v14; // x1
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
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_Vector2_o v43; // x8
  UnityEngine_Object_o *v44; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v48; // x21
  __int64 v49; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v51; // x20
  UnityEngine_GameObject_o *v52; // x19
  int32_t v53; // w1
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB8 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6858/*"FrontCommonUI"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB8 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v14,
    (System_String_array **)pos,
    (System_String_array **)effectName,
    *(System_Boolean_array ***)&dlength,
    (System_Int32_array **)method,
    v7,
    v8);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v36, v37, v38, v39, v40, v41, v42);
  v43 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  this->fields.mainPosition = v43;
  v44 = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
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
      v48 = this->fields.frontEffect;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      v54.fields.z = 0.0;
      v54.fields.x = x;
      v54.fields.y = y;
      CommonEffectManager__CreateParam_18108148(v48, effectName, v54, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                      transform,
                                                      (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v51 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v51) )
      {
        sub_B52A5C(transform, v49);
      }
      SyncTransformComponent__setChild(v51, (UnityEngine_Transform_o *)transform, 0LL);
      v52 = this->fields.frontEffect;
      v53 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6858/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v52, v53, 0LL);
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
  System_Int32_array **v14; // x1
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
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
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UISprite_o *v48; // x24
  __int64 v49; // x1
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

  if ( (byte_42B5AB6 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB6 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v14,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v7);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.fontSize = fontSize;
  v48 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v48, imageStr, 0LL);
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
    sub_B52A5C(transform, v49);
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
  System_Int32_array **v18; // x1
  struct System_String_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UIWidget_o *transform; // x0
  __int64 v53; // x1
  UISprite_o *v54; // x26
  int32_t v55; // w25
  float v56; // s0
  float v57; // s8
  float v58; // s1
  float v59; // s0
  double v60; // d0
  int v61; // w25
  UIWidget_o *v62; // x26
  int v63; // s0
  float x; // s0
  float v68; // s8
  float y; // s9
  float v70; // s1
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB9 = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v18,
    (System_String_array **)ruby,
    (System_String_array **)pos,
    *(System_Boolean_array ***)&fontSize,
    (System_Int32_array **)imageStr,
    (System_Int32_array *)rubyStr,
    (System_Int32_array *)font);
  v19 = System_String__Concat_44568316(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.imageText = imageStr;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v39, v40, v41, v42, v43, v44, v45);
  this->fields.fontType = font;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v54 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v54, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v55 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  v57 = v56;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  v59 = (float)(v57 * (float)v55) / v58;
  transform = (UIWidget_o *)*image;
  v60 = v59 == INFINITY ? -v59 : v59;
  if ( !transform )
    goto LABEL_33;
  v61 = (int)v60;
  UIWidget__SetDimensions(transform, (int)v60, this->fields.fontSize, 0LL);
  v62 = (UIWidget_o *)*image;
  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
  if ( !v62 )
    goto LABEL_33;
  UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
  x = pos->fields.x;
  v68 = (float)v61;
  if ( horizontalAlign == 2 )
  {
    x = x - v68;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v68 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_33;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v71.fields.x = pos->fields.x;
  v71.fields.y = pos->fields.y;
  v71.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v71, 0LL);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v68 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v70,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B52A5C(transform, v53);
  }
  v72.fields.x = this->fields.rubyPosition.fields.x;
  v72.fields.y = this->fields.rubyPosition.fields.y;
  v72.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0LL);
  this->fields.widthSize = v68;
  pos->fields.x = pos->fields.x + v68;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_34782352(
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
  ScriptMessageLabel__UpdateImage_34782480(this, image, pos, fontSize, scale, imageStr, zero, horizontalAlign, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImage_34782480(
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
  System_Int32_array **v19; // x1
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  float v53; // s0
  double v54; // d0
  UISprite_o *v55; // x25
  __int64 v56; // x1
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
  if ( (byte_42B5AB7 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB7 = 1;
  }
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v19,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    (System_Boolean_array **)imageStr,
    *(System_Int32_array ***)&horizontalAlign,
    (System_Int32_array *)method,
    v9);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v20, v21, v22, v23, v24, v25, v26);
  this->fields.imageText = imageStr;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v40, v41, v42, v43, v44, v45, v46);
  this->fields.fontType = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v47, v48, v49, v50, v51, v52);
  v53 = (float)fontSize * scale;
  if ( v53 == INFINITY )
    v54 = -v53;
  else
    v54 = v53;
  this->fields.fontSize = (int)v54;
  v55 = *image;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v55, imageStr, 0LL);
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
    sub_B52A5C(transform, v56);
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
  struct System_String_o *v17; // x0
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
  __int64 v58; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v60; // x3
  float *p_y; // x22
  float VerticalAlignOffset; // s0
  float v63; // s8
  float v64; // w9
  const MethodInfo *v65; // x1
  float v66; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB1 = 1;
  }
  v17 = System_String__Concat_44568316(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
        v68.fields.y = pos->fields.y;
        v68.fields.x = pos->fields.x;
        v68.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_B52A5C(transform, v58);
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v60);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v63 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  p_y = &pos->fields.y;
  v69.fields.x = pos->fields.x;
  v69.fields.z = 0.0;
  v69.fields.y = pos->fields.y - v63;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
LABEL_21:
  v64 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v64;
  transform = *main;
  if ( !*main )
    goto LABEL_26;
  v66 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v66;
  pos->fields.x = v66 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v65);
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
  System_Int32_array **v14; // x1
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
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
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UISprite_o *v48; // x24
  System_String_o *imageText; // x25
  __int64 v50; // x1
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v53; // x24
  int32_t v54; // w23
  const MethodInfo *v55; // x1
  UIWidget_o *v56; // x22
  System_String_o *colorTag; // x25
  int v58; // s0
  float v62; // s8
  struct UnityEngine_Vector2_o v63; // x8
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB5 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB5 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    v14,
    (System_String_array **)pos,
    *(System_String_array ***)&fontSize,
    *(System_Boolean_array ***)&length,
    (System_Int32_array **)imageStr,
    (System_Int32_array *)method,
    v7);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.imageText,
    (System_Int32_array **)imageStr,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fontType, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.fontSize = fontSize;
  v48 = *image;
  imageText = this->fields.imageText;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v48, imageText, 0LL);
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
  v53 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_18;
  v54 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v54, fontSize, 0LL);
  v56 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  *(UnityEngine_Color_o *)&v58 = ScriptMessageLabel__GetColor(colorTag, v55);
  if ( !v56
    || (UIWidget__set_color(v56, *(UnityEngine_Color_o *)&v58, 0LL),
        v62 = (float)v54,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v54 / (float)v53->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(transform, v50);
  }
  v64.fields.x = pos->fields.x;
  v64.fields.y = pos->fields.y;
  v64.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v64, 0LL);
  v63 = *pos;
  this->fields.widthSize = v62;
  this->fields.mainPosition = v63;
  pos->fields.x = pos->fields.x + v62;
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
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  ScriptMessageLabel_c *v47; // x0

  if ( (byte_42B5ABA & 1) == 0 )
  {
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5ABA = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setReplayingVoice,
    (System_Int32_array **)setReplayingVoice,
    (System_String_array **)objectName,
    (System_String_array **)setReplayingVoice,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mainText, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.rubyText, v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v28, v29, v30, v31, v32, v33, v34);
  this->fields.playVoiceAssetName = assetName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAssetName,
    (System_Int32_array **)assetName,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.playVoiceObjectName = objectName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playVoiceObjectName,
    (System_Int32_array **)objectName,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.playVoiceVolume = volume;
  v47 = ScriptMessageLabel_TypeInfo;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v47 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v47->static_fields->PLAY_VOICE_POSITION_X;
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
  struct System_String_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *v26; // x0
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
  __int64 v61; // x1
  const MethodInfo *v62; // x3
  float *p_y; // x19
  float VerticalAlignOffset; // s0
  float v65; // s8
  float v66; // w9
  float v67; // s0
  float v68; // s8
  float v69; // s1
  const MethodInfo *v70; // x1
  float v71; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5AB3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptMessageLabel_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5AB3 = 1;
  }
  v19 = System_String__Concat_44568316(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainText,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = System_String__Concat_44568316(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rubyText,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.imageText, v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceAssetName, v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceObjectName, v47, v48, v49, v50, v51, v52, v53);
  this->fields.fontType = font;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
    sub_B52A5C(transform, v61);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v62);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v65 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        p_y = &pos->fields.y;
        v75.fields.x = pos->fields.x;
        v75.fields.z = 0.0;
        v75.fields.y = pos->fields.y - v65;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v75, 0LL);
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
  v74.fields.y = pos->fields.y;
  v74.fields.x = pos->fields.x;
  v74.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0LL);
  this->fields.yOffset = 0.0;
LABEL_25:
  v66 = *p_y;
  this->fields.mainPosition.fields.x = pos->fields.x;
  this->fields.mainPosition.fields.y = v66;
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
                                     - (float)(v67 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  v68 = *p_y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = v68 + v69;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_36;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_36;
  v76.fields.x = this->fields.rubyPosition.fields.x;
  v76.fields.y = this->fields.rubyPosition.fields.y;
  v76.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v76, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_36;
  v71 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v71;
  pos->fields.x = v71 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v70);
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
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v5; // x8
  struct ScriptMessageLabel_o *v6; // x8
  struct UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v8; // x9
  struct ScriptMessageLabel_o *v9; // x8
  float32x2_t *v10; // x8
  int v11; // s2 OVERLAPPED
  unsigned __int64 v12; // d0 OVERLAPPED
  int v13; // s1

  v2 = this;
  if ( (byte_42AD2FA & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD2FA = 1;
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
    v5 = v2->fields.__4__this;
    if ( !v5 )
      goto LABEL_23;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
    if ( !this )
      goto LABEL_23;
    UILabel__set_trueTypeFont((UILabel_o *)this, v5->fields.fontType, 0LL);
  }
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_23;
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)System_String__op_Inequality(
                                                         v6->fields.rubyText,
                                                         (System_String_o *)StringLiteral_1/*""*/,
                                                         0LL);
  ruby = v2->fields.ruby;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v2->fields.__4__this;
    if ( v8 )
    {
      if ( ruby )
      {
        UILabel__set_fontSize(v2->fields.ruby, v8->fields.rubySize, 0LL);
        v9 = v2->fields.__4__this;
        if ( v9 )
        {
          this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v9->fields.rubyText, 0LL);
            this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
            if ( this )
            {
              this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
              v10 = (float32x2_t *)v2->fields.__4__this;
              if ( v10 )
              {
                if ( this )
                {
                  v11 = 0;
                  v12 = vsub_f32(v10[10], v10[9]).n64_u64[0];
                  v13 = HIDWORD(v12);
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)this,
                    *(UnityEngine_Vector3_o *)(&v11 - 2),
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
    sub_B52A5C(this, method);
  }
  if ( !ruby )
    goto LABEL_23;
  UILabel__set_text(v2->fields.ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}