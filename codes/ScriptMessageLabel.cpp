void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v22; // x1
  struct ScriptMessageLabel_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_Dictionary_object__int__o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  struct ScriptMessageLabel_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_Dictionary_int__int__o *v40; // x19
  struct ScriptMessageLabel_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4C23CD3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_16313/*"activeSelf"*/, v14);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v15);
    sub_1C3B764(&StringLiteral_21804/*"not"*/, v16);
    sub_1C3B764(&StringLiteral_23869/*"unity-dragline"*/, v17);
    sub_1C3B764(&StringLiteral_25312, v18);
    sub_1C3B764(&StringLiteral_21464/*"mstQuestAdd"*/, v19);
    sub_1C3B764(&StringLiteral_25292, v20);
    byte_4C23CD3 = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v22 = StringLiteral_16313/*"activeSelf"*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_16313/*"activeSelf"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->LINE_ORDER, v22, v2, v3, v4, v5, v6, v7);
  v23 = ScriptMessageLabel_TypeInfo->static_fields;
  v23->codeClassSplitStringList = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&v23->codeClassSplitStringList, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v30,
    (const MethodInfo_334BECC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v30 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_897/*"--MM--Z"*/,
    29,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_25312,
    19,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_23869/*"unity-dragline"*/,
    24,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_21804/*"not"*/,
    29,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_21464/*"mstQuestAdd"*/,
    48,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v30,
    (Il2CppObject *)StringLiteral_25292,
    64,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v33 = ScriptMessageLabel_TypeInfo->static_fields;
  v33->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&v33->fontSizes, (int64_t)v30, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v40,
    (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v40 )
LABEL_6:
    sub_1C3B9C0(v31, v32);
  System_Collections_Generic_Dictionary_int__int___Add(
    v40,
    24,
    0,
    (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v40,
    29,
    1,
    (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v40,
    48,
    2,
    (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v40,
    64,
    3,
    (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v41 = ScriptMessageLabel_TypeInfo->static_fields;
  v41->fontSizeIndexTable = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&v41->fontSizeIndexTable, (int64_t)v40, v42, v43, v44, v45, v46, v47);
}


void __fastcall ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  void *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4C23CD2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C23CD2 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.colorTag, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
  System_Collections_Generic_List_object__o *v9; // x19
  int64_t Chars; // x0
  __int64 v11; // x1
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v13; // x22
  int v14; // w25
  int32_t v15; // w1
  __int16 v16; // w23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0
  int32_t v28; // w23
  uint16_t v29; // w0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  int64_t v39; // x1
  Il2CppClass **v40; // x0

  v3 = bindex;
  if ( (byte_4C23CBA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&bindex);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v8);
    byte_4C23CBA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v13 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62523116(v13, stringLength, 0LL);
  if ( txt->fields._stringLength > v3 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v3++;
      Chars = System_String__get_Chars(txt, v15, 0LL);
      v16 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v14 )
        goto LABEL_18;
      if ( !v13 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                v13,
                v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v9 )
        goto LABEL_36;
      items = v9->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v9->fields._size;
      v26 = Chars;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)Chars,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
      }
      System_Text_StringBuilder__set_Length(v13, 0, 0LL);
      v14 = 0;
LABEL_25:
      if ( v3 >= txt->fields._stringLength )
        goto LABEL_29;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v14;
    }
    else if ( (unsigned __int16)Chars == 93 && --v14 < 0 )
    {
      goto LABEL_29;
    }
LABEL_18:
    if ( !v13 )
      goto LABEL_36;
    Chars = (int64_t)System_Text_StringBuilder__Append_62532092(v13, Chars, 0LL);
    if ( v16 == 34 )
    {
      if ( v3 < txt->fields._stringLength )
      {
        do
        {
          v28 = v3 + 1;
          v29 = System_String__get_Chars(txt, v3, 0LL);
          if ( v29 == 34 )
            break;
          System_Text_StringBuilder__Append_62532092(v13, v29, 0LL);
          ++v3;
        }
        while ( v28 < txt->fields._stringLength );
        v3 = v28;
      }
      Chars = (int64_t)System_Text_StringBuilder__Append_62532092(v13, 0x22u, 0LL);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v13 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v13, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v9 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1C3B9C0(Chars, v11);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
            v13,
            v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v9 )
    goto LABEL_36;
  v36 = v9->fields._items;
  v37 = Method_System_Collections_Generic_List_string__Add__;
  ++v9->fields._version;
  if ( !v36 )
    goto LABEL_36;
  v38 = v9->fields._size;
  v39 = Chars;
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)Chars,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v36->obj.klass + v38;
    v9->fields._size = v38 + 1;
    v40[4] = (Il2CppClass *)v39;
    sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 4), v39, v30, v31, v32, v33, v34, v35);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v9,
                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4C23CCE & 1) == 0 )
  {
    sub_1C3B764(&SeManager_TypeInfo, method);
    byte_4C23CCE = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    playVoiceAssetName = this->fields.playVoiceAssetName;
    playVoiceObjectName = this->fields.playVoiceObjectName;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C23CC3 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, mainObject);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12);
    this = (ScriptMessageLabel_o *)sub_1C3B764(&StringLiteral_1/*""*/, v13);
    byte_4C23CC3 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v14 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v15 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
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
    sub_1C3B9C0(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1C3B9C0(0LL, method);
  if ( s->fields._stringLength < 1 )
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
    if ( v3 >= s->fields._stringLength )
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
    sub_1C3B9C0(0LL, method);
  if ( s->fields._stringLength >= 1 )
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
      if ( ++v3 >= s->fields._stringLength )
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_effect; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C23CC0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23CC0 = 1;
  }
  p_frontEffect = &this->fields.frontEffect;
  frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v5, 0LL);
    *p_frontEffect = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.frontEffect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  effect = this->fields.effect;
  p_effect = (PartyOrganizationUtility_o *)&this->fields.effect;
  v13 = (UnityEngine_Object_o *)effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(klass, 0LL);
    p_effect->klass = 0LL;
    sub_1C3B708(p_effect, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  UnityEngine_Object_o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4C23CBE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23CBE = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v16, 0LL);
    *p_ruby = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.ruby, 0LL, v17, v18, v19, v20, v21, v22);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v25, 0LL);
    *p_image = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.image, 0LL, v26, v27, v28, v29, v30, v31);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v34, 0LL);
    *p_playVoice = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.playVoice, 0LL, v35, v36, v37, v38, v39, v40);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v6, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v43, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.playVoiceEffect, 0LL, v44, v45, v46, v47, v48, v49);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C3B9C0(v6, v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v5);
  this->fields.fontType = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v50, v51, v52, v53, v54, v55);
}


bool __fastcall ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool result; // w0
  System_String_o *v11; // x0
  int Chars; // w8
  int32_t stringLength; // w23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *v20; // x1
  int i; // w24
  uint16_t v22; // w22
  System_String_o **v23; // x0

  if ( (byte_4C23CB4 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, text);
    sub_1C3B764(&StringLiteral_16146/*"__max-thumb"*/, v7);
    sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C23CB4 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v11 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v11, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v11 = *text;
  if ( !*text )
LABEL_28:
    sub_1C3B9C0(v11, v9);
  stringLength = v11->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v11, (System_String_o *)StringLiteral_16146/*"__max-thumb"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        v20 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
        v23 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v11, stringLength - 1, 0LL) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v11 = *text;
    if ( !*text )
      goto LABEL_28;
    v22 = System_String__get_Chars(v11, i - 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( (unsigned __int16)(v22 - 48) >= 0xAu && (unsigned __int16)((v22 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v20 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1C3B708((PartyOrganizationUtility_o *)text, (int64_t)overrideColor, v14, v15, v16, v17, v18, v19);
  *colorTag = overrideColor;
  v23 = colorTag;
  v20 = overrideColor;
LABEL_26:
  sub_1C3B708((PartyOrganizationUtility_o *)v23, (int64_t)v20, v14, v15, v16, v17, v18, v19);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1C3B9C0(0LL, start);
  v3 = start;
  if ( txt->fields._stringLength > start )
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
    while ( v3 < txt->fields._stringLength );
  }
  return -1;
}


UnityEngine_Color_o __fastcall ScriptMessageLabel__GetColor(System_String_o *colorTag, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  float r; // s8
  System_Char_array *v7; // x0
  System_Char_array *v8; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  bool v12; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v16; // s0
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23CC7 & 1) == 0 )
  {
    sub_1C3B764(&char___TypeInfo, method);
    sub_1C3B764(&StringLiteral_377/*"#######0"*/, v3);
    sub_1C3B764(&StringLiteral_16146/*"__max-thumb"*/, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C23CC7 = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_16146/*"__max-thumb"*/, 0LL) )
  {
    v7 = (System_Char_array *)sub_1C3B80C(char___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_14;
    max_length = v7->max_length;
    v8 = v7;
    if ( !max_length || (v7->m_Items[2] = 91, max_length == 1) )
      sub_1C3B9C8(v7, v7);
    v7->m_Items[3] = 93;
    if ( !colorTag )
LABEL_14:
      sub_1C3B9C0(v7, v8);
    v10 = System_String__Trim_63398360(colorTag, v7, 0LL);
    v11 = System_String__Concat_63368612((System_String_o *)StringLiteral_377/*"#######0"*/, v10, 0LL);
    v12 = UnityEngine_ColorUtility__TryParseHtmlString(v11, &v17, 0LL);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v12 )
    {
      g = v17.fields.g;
      r = v17.fields.r;
      b = v17.fields.b;
      a = v17.fields.a;
    }
  }
  else
  {
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v16 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v16;
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
  __int64 v7; // x1

  v3 = start;
  if ( (byte_4C23CB9 & 1) == 0 )
  {
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start);
    byte_4C23CB9 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62523116(v5, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ; v3 < txt->fields._stringLength; appended = System_Text_StringBuilder__Append_62532092(
                                                       v5,
                                                       (uint16_t)appended,
                                                       0LL) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, v3, 0LL);
    v7 = (unsigned int)appended;
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
    sub_1C3B9C0(appended, v7);
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
  __int64 v7; // x1
  ScriptMessageLabel_c *v9; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v11; // x0

  if ( (byte_4C23CAE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, *(_QWORD *)&defaultSize);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v6);
    byte_4C23CAE = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_897/*"--MM--Z"*/, 0LL) )
  {
    v11 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v11 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v11->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               (Il2CppObject *)sizeName,
               (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1C3B9C0(fontSizes, v7);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v9 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v9 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v9->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_15;
  sizeName = (System_String_o *)StringLiteral_897/*"--MM--Z"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C23CAF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v7);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v9);
    byte_4C23CAF = 1;
  }
  v10 = ScriptMessageLabel_TypeInfo;
  memset(&v14, 0, sizeof(v14));
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v10 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->fontSizes;
  if ( !fontSizes )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v14,
    fontSizes,
    (const MethodInfo_334CC70 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v14,
            (const MethodInfo_344FA48 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v14.fields._current.fields.value) == size )
    {
      key = v14.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v14,
        (const MethodInfo_344FB6C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v14,
    (const MethodInfo_344FB6C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_897/*"--MM--Z"*/;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_o *imageText; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *playVoiceAssetName; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *playVoiceObjectName; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct UnityEngine_Font_o *fontType; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_String_o *colorTag; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4C23CC1 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    byte_4C23CC1 = 1;
  }
  v3 = sub_1C3B9B0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_1C3B9C0(v5, v6);
  mainText = this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 120), (int64_t)mainText, v7, v8, v9, v10, v11, v12);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 128), (int64_t)rubyText, v15, v16, v17, v18, v19, v20);
  imageText = this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 136), (int64_t)imageText, v22, v23, v24, v25, v26, v27);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 144), (int64_t)playVoiceAssetName, v29, v30, v31, v32, v33, v34);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 152), (int64_t)playVoiceObjectName, v36, v37, v38, v39, v40, v41);
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 184), (int64_t)setReplayingVoice, v43, v44, v45, v46, v47, v48);
  fontType = this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 88), (int64_t)fontType, v50, v51, v52, v53, v54, v55);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 112), (int64_t)colorTag, v57, v58, v59, v60, v61, v62);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x8
  int32_t v7; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v12; // x0
  unsigned int max_length; // w8

  v2 = param;
  if ( (byte_4C23CBD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    param = (System_String_array *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C23CBD = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  v6 = *(_QWORD *)&v2->max_length;
  if ( !v6 )
    goto LABEL_27;
  if ( !(_DWORD)v6 )
    goto LABEL_24;
  v7 = System_Int32__Parse(v2->m_Items[0], 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v7,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( (int)v2->max_length < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0LL);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0LL);
    max_length = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( max_length > 2 )
        return v2->m_Items[2];
LABEL_24:
      sub_1C3B9C8(param, method);
    }
    if ( max_length <= 1 )
      goto LABEL_24;
    return v2->m_Items[1];
  }
  else
  {
LABEL_27:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C1D52E )
    {
      sub_1C3B764(&LocalizationManager_TypeInfo, method);
      byte_4C1D52E = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager_TypeInfo;
    }
    return v12->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int stringLength; // w24
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t v14; // w21
  int v15; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int32_t v19; // w21
  int v20; // w23
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  System_Text_StringBuilder_o *v24; // x21
  int32_t i; // w22
  _BOOL4 v26; // w23
  System_String_o **v27; // x8
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-80h] BYREF

  v2 = txt;
  if ( (byte_4C23CB8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_25991, v10);
    txt = (System_String_o *)sub_1C3B764(&StringLiteral_25992, v11);
    byte_4C23CB8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !v2 )
    goto LABEL_46;
  stringLength = v2->fields._stringLength;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( stringLength >= 1 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v14, 0LL) == 91 )
      {
        ++v15;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v14, 0LL);
        if ( (unsigned __int16)txt == 93 && --v15 < 0 )
        {
          if ( !v13 )
            goto LABEL_46;
          items = v13->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v14,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            v15 = 0;
          }
          else
          {
            v15 = 0;
            v13->fields._size = size + 1;
            items->m_Items[size + 1] = v14;
          }
        }
      }
      ++v14;
    }
    while ( stringLength != v14 );
  }
  v19 = stringLength - 1;
  if ( stringLength - 1 >= 0 )
  {
    v20 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v19, 0LL) == 93 )
      {
        ++v20;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v19, 0LL);
        if ( (unsigned __int16)txt == 91 && --v20 < 0 )
        {
          if ( !v13 )
            goto LABEL_46;
          v21 = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !v21 )
            goto LABEL_46;
          v23 = v13->fields._size;
          if ( (unsigned int)v23 >= v21->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v19,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            v20 = 0;
          }
          else
          {
            v20 = 0;
            v13->fields._size = v23 + 1;
            v21->m_Items[v23 + 1] = v19;
          }
        }
      }
      --v19;
    }
    while ( v19 >= 0 );
  }
  v24 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  if ( stringLength < 1 )
  {
    if ( v24 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                                  v24,
                                  v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_46:
    sub_1C3B9C0(txt, method);
  }
  if ( !v13 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      v13,
      (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v30 = v29;
    do
      v26 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v30,
              (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v30.fields._current && v26 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v30,
      (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v2, i, 0LL);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v26 )
    {
      if ( !v24 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v27 = (System_String_o **)&StringLiteral_25991;
      else
        v27 = (System_String_o **)&StringLiteral_25992;
      System_Text_StringBuilder__Append_62529764(v24, *v27, 0LL);
    }
    else
    {
      if ( !v24 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_62532092(v24, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                              v24,
                              v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  int v5; // w22
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v9; // x21
  System_String_o *v10; // x23
  int v11; // w25
  int v12; // w26
  __int16 v13; // w24
  int v14; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_4C23CBB & 1) == 0 )
  {
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&bindex);
    txt = (System_String_o *)sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C23CBB = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62523116(v9, stringLength, 0LL);
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  v11 = 1;
  if ( v6->fields._stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v12 = 0;
    bindex = v5;
    while ( 1 )
    {
      v5 = bindex + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0LL);
      v13 = (__int16)txt;
      if ( (unsigned __int16)txt != 58 )
      {
        if ( (unsigned __int16)txt == 91 )
        {
          ++v12;
        }
        else if ( (unsigned __int16)txt == 93 && --v12 < 0 )
        {
          goto LABEL_28;
        }
        goto LABEL_14;
      }
      if ( !v12 )
        break;
LABEL_14:
      if ( !v9 )
        goto LABEL_32;
      txt = (System_String_o *)System_Text_StringBuilder__Append_62532092(v9, (uint16_t)txt, 0LL);
      if ( v13 == 34 )
      {
        if ( v5 < v6->fields._stringLength )
        {
          do
          {
            v14 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_62532092(v9, Chars, 0LL);
            ++v5;
          }
          while ( v14 < v6->fields._stringLength );
          v5 = v14;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_62532092(v9, 0x22u, 0LL);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields._stringLength )
        goto LABEL_28;
    }
    if ( v11 == index )
    {
      if ( v9 )
      {
        v10 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                   v9,
                                   v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_1C3B9C0(txt, *(_QWORD *)&bindex);
    }
    if ( !v9 )
      goto LABEL_32;
LABEL_27:
    ++v11;
    System_Text_StringBuilder__set_Length(v9, 0, 0LL);
  }
  while ( v5 < v6->fields._stringLength );
LABEL_28:
  if ( v11 != index )
    return v10;
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
  __int64 v24; // x1
  unsigned __int64 codeClassSplitStringList; // x0
  MethodInfo *v26; // x1
  ScriptMessageLabel_c *v27; // x8
  System_String_o *v28; // x28
  __int64 v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  ScriptMessageLabel_c *v36; // x8
  int64_t v37; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_array *v45; // x25
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  __int64 v59; // x3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x8
  int v65; // w9
  int v66; // w28
  Il2CppClass **v67; // x26
  System_String_o **v68; // x26
  unsigned __int64 v69; // t1
  System_String_o *v70; // x26
  int32_t stringLength; // w8
  int v72; // w26
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_String_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_String_o **v88; // x8
  System_String_o **v89; // x0
  System_String_o *v90; // x1
  System_Collections_Generic_List_object__o *v91; // x20
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  unsigned __int64 i; // x19
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  Il2CppClass **v103; // x0
  System_String_o *v104; // [xsp+0h] [xbp-90h]
  System_String_o **v105; // [xsp+10h] [xbp-80h]
  int v106; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C23CBC & 1) == 0 )
  {
    sub_1C3B764(&char_TypeInfo, className);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&int_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&string___TypeInfo, v20);
    sub_1C3B764(&StringLiteral_20518/*"iso-8859-2"*/, v21);
    sub_1C3B764(&StringLiteral_25987, v22);
    sub_1C3B764(&StringLiteral_11694/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v23);
    sub_1C3B764(&StringLiteral_1/*""*/, v24);
    byte_4C23CBC = 1;
  }
  Chars = 0;
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11694/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, 0LL);
  v27 = ScriptMessageLabel_TypeInfo;
  v28 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v27 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v27->static_fields->codeClassSplitStringList )
  {
    v29 = sub_1C3B80C(string___TypeInfo, 1LL);
    v36 = ScriptMessageLabel_TypeInfo;
    v37 = v29;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v36 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v36->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v37;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->codeClassSplitStringList,
      v37,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1C3B9C0(codeClassSplitStringList, v26);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v28;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)(codeClassSplitStringList + 32),
      (int64_t)v28,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v27 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v27->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v27);
  if ( !talkName )
    goto LABEL_63;
  v45 = System_String__Split_63394844(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)imageName, 0LL, v46, v47, v48, v49, v50, v51);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)className, (int64_t)StringLiteral_1/*""*/, v52, v53, v54, v55, v56, v57);
  *charaIndex = -1;
  if ( !v45 )
    goto LABEL_63;
  v64 = *(_QWORD *)&v45->max_length;
  v65 = v64 - 1;
  if ( (int)v64 - 1 < 1 )
    goto LABEL_42;
  v104 = v28;
  v105 = charaName;
  v66 = 0;
  do
  {
    if ( v66 >= (unsigned int)v64 )
      goto LABEL_64;
    v67 = &v45->obj.klass + v66;
    v69 = (unsigned __int64)v67[4];
    v68 = (System_String_o **)(v67 + 4);
    codeClassSplitStringList = v69;
    if ( !v69 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0LL);
    if ( v66 >= v45->max_length )
      goto LABEL_64;
    v70 = *v68;
    if ( !v70 )
      goto LABEL_63;
    stringLength = v70->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v70, 8, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v70 = System_Char__ToString((uint16_t)&Chars, 0LL);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v70, v26);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v72 = ScriptMessageLabel__ConvertInteger(v70, v26);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v72,
                                 (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v106 = v72;
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v58, v59, v60);
      v74 = System_String__Format((System_String_o *)StringLiteral_20518/*"iso-8859-2"*/, v73, 0LL);
      *imageName = v74;
      sub_1C3B708((PartyOrganizationUtility_o *)imageName, (int64_t)v74, v75, v76, v77, v78, v79, v80);
      if ( !entity )
        goto LABEL_63;
      v81 = System_String__Concat_63368612(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25987,
              0LL);
      *className = v81;
      sub_1C3B708((PartyOrganizationUtility_o *)className, (int64_t)v81, v82, v83, v84, v85, v86, v87);
    }
LABEL_33:
    v64 = *(_QWORD *)&v45->max_length;
    ++v66;
    v65 = v64 - 1;
  }
  while ( v66 < (int)v64 - 1 );
  charaName = v105;
  v28 = v104;
LABEL_42:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v89 = charaName;
    v90 = talkName;
  }
  else
  {
    if ( (int)v64 >= 3 )
    {
      v91 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v91,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
      v98 = *(_QWORD *)&v45->max_length;
      if ( (int)v98 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v98; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v98 )
              goto LABEL_64;
            if ( !v91 )
              goto LABEL_63;
            v26 = (MethodInfo *)v45->m_Items[i];
            items = v91->fields._items;
            v101 = Method_System_Collections_Generic_List_string__Add__;
            ++v91->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v91->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v91,
                (Il2CppObject *)v26,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &items->obj.klass + size;
              v91->fields._size = size + 1;
              v103[4] = (Il2CppClass *)v26;
              sub_1C3B708((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v26, v92, v93, v94, v95, v96, v97);
            }
          }
          LODWORD(v98) = v45->max_length;
        }
      }
      v90 = System_String__Join_63384268(v28, (System_Collections_Generic_IEnumerable_string__o *)v91, 0LL);
      *charaName = v90;
    }
    else
    {
      if ( v64 )
      {
        if ( (_DWORD)v64 )
        {
          v88 = &v45->m_Items[v65];
          goto LABEL_60;
        }
LABEL_64:
        sub_1C3B9C8(codeClassSplitStringList, v26);
      }
      v88 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v90 = *v88;
      *charaName = *v88;
    }
    v89 = charaName;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)v89, (int64_t)v90, v58, v59, v60, v61, v62, v63);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w22
  int32_t v15; // w24
  ScriptMessageLabel_c *v16; // x0
  const MethodInfo *v17; // x1
  int v18; // w26
  System_String_o *v19; // x23
  void *v20; // x0
  System_String_o *v21; // x23
  int32_t v22; // w0
  __int64 v23; // x8
  System_String_o *v24; // x0
  System_String_o *v25; // x1

  if ( (byte_4C23CB1 & 1) == 0 )
  {
    sub_1C3B764(&char___TypeInfo, *(_QWORD *)&len);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    byte_4C23CB1 = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)dispText,
      (int64_t)StringLiteral_1/*""*/,
      (int64_t)dispText,
      (int32_t)length,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    v15 = 0;
    goto LABEL_44;
  }
  v14 = 0;
  if ( !len )
  {
    v15 = 0;
    goto LABEL_40;
  }
  v15 = 0;
  if ( text->fields._stringLength < 1 )
    goto LABEL_40;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v14, 0LL) != 91 )
    {
      ++v15;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v14 + 1, 0LL) == 35 )
      break;
    v16 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v16 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v16->static_fields->LINE_ORDER, 0LL) )
    {
      v20 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v20 = ScriptMessageLabel_TypeInfo;
      }
      v23 = *(_QWORD *)(*((_QWORD *)v20 + 23) + 8LL);
      if ( v23 )
      {
        v24 = System_String__Substring_63387616(
                text,
                *(_DWORD *)(v23 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v23 + 16),
                0LL);
        v22 = System_Int32__Parse(v24, 0LL);
        goto LABEL_39;
      }
LABEL_45:
      sub_1C3B9C0(v20, v17);
    }
    v14 += 2;
    if ( v14 < text->fields._stringLength )
    {
      v18 = 0;
      do
      {
        if ( System_String__get_Chars(text, v14, 0LL) == 91 )
        {
          ++v18;
        }
        else if ( System_String__get_Chars(text, v14, 0LL) == 93 )
        {
          if ( !v18 )
            break;
          --v18;
        }
        ++v14;
      }
      while ( v14 < text->fields._stringLength );
    }
LABEL_22:
    ++v14;
    if ( v15 == len || v14 >= text->fields._stringLength )
      goto LABEL_40;
  }
  v19 = System_String__Substring_63387616(text, v14 + 2, text->fields._stringLength - 2, 0LL);
  v20 = (void *)sub_1C3B80C(char___TypeInfo, 1LL);
  if ( !v20 )
    goto LABEL_45;
  v17 = (const MethodInfo *)v20;
  if ( !*((_DWORD *)v20 + 6) )
    goto LABEL_46;
  *((_WORD *)v20 + 16) = 58;
  if ( !v19 )
    goto LABEL_45;
  v20 = System_String__Split_63390768(v19, (System_Char_array *)v20, 0LL);
  if ( !v20 )
    goto LABEL_45;
  if ( !*((_DWORD *)v20 + 6) )
LABEL_46:
    sub_1C3B9C8(v20, v17);
  v21 = (System_String_o *)*((_QWORD *)v20 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v22 = ScriptMessageLabel__StrlenByDisp(v21, v17);
LABEL_39:
  v15 += v22;
LABEL_40:
  if ( v14 <= text->fields._stringLength )
    v25 = System_String__Substring_63387616(text, 0, v14, 0LL);
  else
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v25;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)dispText,
    (int64_t)v25,
    (int64_t)dispText,
    (int32_t)length,
    (System_String_o *)method,
    v5,
    v6,
    v7);
LABEL_44:
  *length = v15;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4C23CB0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17719/*"column-reverse"*/, method);
    sub_1C3B764(&StringLiteral_24483/*"xh-ZA"*/, v3);
    sub_1C3B764(&StringLiteral_18143/*"dayTimeDuration"*/, v4);
    byte_4C23CB0 = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_24483/*"xh-ZA"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_18143/*"dayTimeDuration"*/, 0LL) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17719/*"column-reverse"*/, 0LL) )
    return 2;
  return 0;
}


bool __fastcall ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w21
  int Chars; // w8
  bool result; // w0
  int v6; // w22
  uint16_t v7; // w20
  unsigned int v8; // w8
  unsigned int v9; // w9

  v2 = text;
  if ( (byte_4C23CB7 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    byte_4C23CB7 = 1;
  }
  if ( !v2 )
    sub_1C3B9C0(text, method);
  stringLength = v2->fields._stringLength;
  if ( (stringLength | 2) != 10 )
    return 0;
  Chars = System_String__get_Chars(v2, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  if ( System_String__get_Chars(v2, stringLength - 1, 0LL) != 93 )
    return 0;
  v6 = 3;
  do
  {
    v7 = System_String__get_Chars(v2, v6 - 2, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v8 = (unsigned __int16)(v7 - 48);
    v9 = (unsigned __int16)((v7 & 0xFFDF) - 65);
    if ( stringLength == v6 )
      break;
    ++v6;
  }
  while ( v8 < 0xA || v9 < 6 );
  return v8 < 0xA || v9 < 6;
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
  if ( (byte_4C23CB6 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v3);
    txt = (System_String_o *)sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v4);
    byte_4C23CB6 = 1;
  }
  if ( !v2 )
    sub_1C3B9C0(txt, method);
  v5 = 0;
  while ( v5 < v2->fields._stringLength )
  {
    v6 = System_String__IndexOf_63400204(v2, (System_String_o *)StringLiteral_16127/*"__field-group"*/, v5, 0LL);
    if ( (v6 & 0x80000000) != 0 )
      break;
    v7 = v6;
    v8 = System_String__IndexOf_63400204(v2, (System_String_o *)StringLiteral_16386/*"align-items"*/, v6, 0LL);
    if ( (v8 & 0x80000000) != 0 )
      break;
    v5 = v8 + 1;
    v10 = System_String__Substring_63387616(v2, v7, v8 + 1 - v7, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  _BOOL8 IsBusyVoice; // x0
  __int64 v9; // x1
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  float playVoiceVolume; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x1

  if ( (byte_4C23CCF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__, v3);
    sub_1C3B764(&SeManager_TypeInfo, v4);
    sub_1C3B764(&SoundManager_TypeInfo, v5);
    byte_4C23CCF = 1;
  }
  playVoiceAssetName = this->fields.playVoiceAssetName;
  playVoiceObjectName = this->fields.playVoiceObjectName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  IsBusyVoice = SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0LL);
  if ( IsBusyVoice )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
  }
  else
  {
    setReplayingVoice = this->fields.setReplayingVoice;
    if ( !setReplayingVoice )
      sub_1C3B9C0(IsBusyVoice, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, struct System_String_o *, __int64, _QWORD))setReplayingVoice->fields.m_target)(
      setReplayingVoice->fields.original_method_info,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1LL,
      *(_QWORD *)&setReplayingVoice->fields.extra_arg);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    v11 = this->fields.playVoiceAssetName;
    v12 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_40137440(v11, v12, playVoiceVolume, v14, 0, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v15);
  }
}


void __fastcall ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  void *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v46; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_4C23CBF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C23CBF = 1;
  }
  this->fields.fontType = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.isPlayingVoice = 0;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    gameObject = this->fields.main;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    gameObject = this->fields.ruby;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.image;
    if ( !gameObject )
      goto LABEL_31;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))gameObject->klass->vtable._8_set_alpha.method)(
      gameObject,
      gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.playVoice;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.playVoiceEffect;
    if ( gameObject )
    {
      gameObject = (UILabel_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C3B9C0(gameObject, v46);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v46);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t v7; // w24
  System_String_o *v8; // x20
  int v9; // w25
  int32_t v10; // w22
  int32_t v11; // w0
  int32_t v12; // w21
  System_String_o *v13; // x23
  int32_t v14; // w24
  __int16 v15; // w25

  if ( (byte_4C23CB5 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16146/*"__max-thumb"*/, v3);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C23CB5 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v7 = 0;
    v8 = text;
LABEL_6:
    v9 = 1 - v7;
    while ( v7 < text->fields._stringLength )
    {
      v10 = v7;
      if ( System_String__get_Chars(text, v7, 0LL) != 91
        || (++v7, v11 = System_String__IndexOf_63398836(text, 0x5Du, v10 + 1, 0LL), (v11 & 0x80000000) != 0) )
      {
LABEL_23:
        v12 = v10;
LABEL_24:
        v7 = v12 + 1;
        goto LABEL_6;
      }
      v12 = v11;
      IsNullOrEmpty = System_String__Substring_63387616(text, v10, v11 + v9, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v13 = IsNullOrEmpty;
      --v9;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 10 )
      {
        v14 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v13, v14, 0LL);
          v15 = (__int16)IsNullOrEmpty;
          if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          if ( (unsigned __int16)(v15 - 48) >= 0xAu && (unsigned __int16)((v15 & 0xFFDF) - 65) > 5u )
            goto LABEL_23;
          ++v14;
        }
        while ( v14 <= v13->fields._stringLength - 2 );
        if ( v8 )
        {
          IsNullOrEmpty = System_String__Replace_63388240(v8, v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( IsNullOrEmpty )
          {
            v8 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_63400188(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_16146/*"__max-thumb"*/,
                                                 0LL);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_16146/*"__max-thumb"*/ )
            {
              v8 = System_String__Remove(v8, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_16146/*"__max-thumb"*/ + 4), 0LL);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1C3B9C0(IsNullOrEmpty, v6);
      }
    }
    return v8;
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
  __int64 Component_object; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UILabel_o *v35; // x21
  Il2CppObject *v36; // x0
  __int64 *v37; // x25
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UISprite_o *v44; // x20
  UnityEngine_Component_o *v45; // x22
  __int64 v46; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v49; // w1
  const MethodInfo *v50; // x1
  System_String_o *colorTag; // x19
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  EventDelegate_Callback_o *v60; // x23
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23CC2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, mainObject);
    sub_1C3B764(&AtlasManager_TypeInfo, v14);
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, v15);
    sub_1C3B764(&EventDelegate_TypeInfo, v16);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v17);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v18);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v20);
    sub_1C3B764(&Method_ScriptMessageLabel_OnClickPlayVoice__, v21);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v22);
    sub_1C3B764(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__, v23);
    sub_1C3B764(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, v24);
    sub_1C3B764(&StringLiteral_1/*""*/, v25);
    byte_4C23CC2 = 1;
  }
  v26 = sub_1C3B9B0(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_45;
  *(_QWORD *)(v26 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v35 = (UILabel_o *)Component_object;
  v36 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v26 + 24) = v36;
  v37 = (__int64 *)(v26 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)v36, v38, v39, v40, v41, v42, v43);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v44 = (UISprite_o *)Component_object;
  v45 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v46 = sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v46,
    (Il2CppObject *)v26,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v44->klass->vtable._8_set_alpha.method)(
      v44,
      v44->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMark(v44, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
      v44,
      v44->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v49 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v44, v49, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    Color = ScriptMessageLabel__GetColor(colorTag, v50);
    UIWidget__set_color((UIWidget_o *)v44, Color, 0LL);
    if ( !v46 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v46 + 24))(
                         *(_QWORD *)(v46 + 64),
                         *(_QWORD *)(v46 + 40));
    if ( !v35 )
      goto LABEL_45;
    UILabel__set_text(v35, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v45 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.playVoiceEffect,
      (int64_t)playVoiceEffect,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    if ( v45 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v45, 0LL);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
        if ( playVoiceEffect )
        {
          Component_object = (__int64)UnityEngine_GameObject__get_gameObject(playVoiceEffect, 0LL);
          if ( Component_object )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)Component_object,
              this->fields.isPlayingVoice,
              0LL);
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v45[8].monitor;
            v60 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v60, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            Component_object = (__int64)EventDelegate__Set_48207248(monitor, v60, 0LL);
            if ( v35 )
            {
              UILabel__set_text(v35, 0LL, 0LL);
              Component_object = *v37;
              if ( *v37 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0LL, 0LL);
                if ( v44 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v44->klass->vtable._8_set_alpha.method)(
                    v44,
                    v44->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                    0.0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_1C3B9C0(Component_object, v28);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v35, this->fields.fontType, 0LL);
  }
  else if ( !v35 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v35, this->fields.fontSize, 0LL);
  UILabel__set_text(v35, this->fields.mainText, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v35, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  v61.fields.z = 0.0;
  v61.fields.y = -this->fields.yOffset;
  v61.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v61, 0LL);
  if ( !v46 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v46 + 24))(
                       *(_QWORD *)(v46 + 64),
                       *(_QWORD *)(v46 + 40));
  if ( !v44 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v44->klass->vtable._8_set_alpha.method)(
                       v44,
                       v44->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                       0.0);
  if ( !v45 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v45, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C23CD0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23CD0 = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C23CD1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23CD1 = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23CB3 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    byte_4C23CB3 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  int32_t length; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C23CB2 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, *(_QWORD *)&len);
    byte_4C23CB2 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_String_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  void *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  UILabel_o *transform; // x0
  __int64 v61; // x1
  int32_t v62; // w25
  System_String_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x3
  float VerticalAlignOffset; // s0
  float v72; // s8
  float v73; // s0
  float y; // s8
  float v75; // s1
  const MethodInfo *v76; // x1
  float v77; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23CC5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, main);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_25847, v16);
    sub_1C3B764(&StringLiteral_1/*""*/, v17);
    byte_4C23CC5 = 1;
  }
  v18 = System_String__Concat_63368612(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v18;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)colorTag, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.fontType = font;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v54, v55, v56, v57, v58, v59);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v62 = 0;
    do
    {
      v63 = System_String__Concat_63368612(*p_rubyText, (System_String_o *)StringLiteral_25847, 0LL);
      *p_rubyText = v63;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v63, v64, v65, v66, v67, v68, v69);
      ++v62;
    }
    while ( v62 < mainStr->fields._stringLength );
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0LL);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v70);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v72 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v83.fields.x = pos->fields.x;
        v83.fields.z = 0.0;
        v83.fields.y = pos->fields.y - v72;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v83, 0LL);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1C3B9C0(transform, v61);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v82.fields.x = pos->fields.x;
  v82.fields.y = pos->fields.y;
  v82.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v82, 0LL);
  this->fields.yOffset = 0.0;
LABEL_24:
  this->fields.mainPosition = *pos;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  UILabel__set_text(transform, *p_rubyText, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                         transform,
                                                         transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                     * 0.5))
                                     - (float)(v73 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v75 + v75) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v84.fields.x = this->fields.rubyPosition.fields.x;
  v84.fields.y = this->fields.rubyPosition.fields.y;
  v84.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v84, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v77 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v77;
  pos->fields.x = v77 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *v18; // x1
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  void *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UnityEngine_Vector2_o v47; // x8
  UnityEngine_Object_o *v48; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v52; // x21
  __int64 v53; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v55; // x20
  UnityEngine_GameObject_o *v56; // x19
  int32_t v57; // w1
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23CCB & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectManager_TypeInfo, effect);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_7021/*"HH:mm"*/, v16);
    sub_1C3B764(&StringLiteral_1/*""*/, v17);
    byte_4C23CCB = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v18,
    (int64_t)pos,
    (int32_t)effectName,
    *(System_String_o **)&dlength,
    (BattleSetupInfo_o *)method,
    v7,
    v8);
  v19 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v48 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v47;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v52 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v58.fields.z = 0.0;
      v58.fields.x = x;
      v58.fields.y = y;
      CommonEffectManager__CreateParam_42152040(v52, effectName, v58, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v55 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v55) )
      {
        sub_1C3B9C0(transform, v53);
      }
      SyncTransformComponent__setChild(v55, (UnityEngine_Transform_o *)transform, 0LL);
      v56 = this->fields.frontEffect;
      v57 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_7021/*"HH:mm"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v56, v57, 0LL);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  void *v15; // x1
  void *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  void *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  void *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UISprite_o *v49; // x24
  __int64 v50; // x1
  UIWidget_o *transform; // x0
  int32_t v52; // w23
  float v53; // s0
  float v54; // s8
  float v55; // s1
  float v56; // s0
  int32_t v57; // w23
  float x; // s0
  float v59; // s8
  struct UnityEngine_Vector2_o v60; // x8
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23CC9 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, image);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C23CC9 = 1;
  }
  v15 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v15,
    (int64_t)pos,
    fontSize,
    imageStr,
    *(BattleSetupInfo_o **)&horizontalAlign,
    (FollowerInfo_o *)method,
    v7);
  v16 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this->fields.imageText = imageStr;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.fontType = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.fontSize = fontSize;
  v49 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v49, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v52 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v54 = v53;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v56 = (float)(v54 * (float)v52) / v55;
  v57 = v56 == INFINITY ? 0x80000000 : (int)v56;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v57, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v62.fields.r = 1.0;
  v62.fields.g = 1.0;
  v62.fields.b = 1.0;
  v62.fields.a = 1.0;
  UIWidget__set_color(transform, v62, 0LL);
  x = pos->fields.x;
  v59 = (float)v57;
  if ( horizontalAlign == 2 )
  {
    x = x - v59;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v59 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1C3B9C0(transform, v50);
  }
  v61.fields.x = pos->fields.x;
  v61.fields.y = pos->fields.y;
  v61.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v61, 0LL);
  v60 = *pos;
  this->fields.widthSize = v59;
  this->fields.mainPosition = v60;
  pos->fields.x = pos->fields.x + v59;
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
  void *v20; // x1
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  void *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UIWidget_o *transform; // x0
  __int64 v55; // x1
  UISprite_o *v56; // x26
  int32_t v57; // w25
  float v58; // s0
  float v59; // s8
  float v60; // s1
  float v61; // s0
  int32_t v62; // w25
  float x; // s0
  float v64; // s8
  float y; // s9
  float v66; // s1
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23CCC & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, image);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C23CCC = 1;
  }
  v20 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v20,
    (int64_t)ruby,
    (int32_t)pos,
    *(System_String_o **)&fontSize,
    (BattleSetupInfo_o *)imageStr,
    (FollowerInfo_o *)rubyStr,
    (PartyListViewItem_o *)font);
  v21 = System_String__Concat_63368612(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v21;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  this->fields.imageText = imageStr;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.fontType = font;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v48, v49, v50, v51, v52, v53);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v56 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v56, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v57 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v59 = v58;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v61 = (float)(v59 * (float)v57) / v60;
  v62 = v61 == INFINITY ? 0x80000000 : (int)v61;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v62, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v69.fields.r = 1.0;
  v69.fields.g = 1.0;
  v69.fields.b = 1.0;
  v69.fields.a = 1.0;
  UIWidget__set_color(transform, v69, 0LL);
  x = pos->fields.x;
  v64 = (float)v62;
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
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_31;
  v67.fields.x = pos->fields.x;
  v67.fields.y = pos->fields.y;
  v67.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v67, 0LL);
  this->fields.mainPosition = *pos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = (UIWidget_o *)*ruby;
    if ( !*ruby )
      goto LABEL_31;
    UILabel__set_trueTypeFont((UILabel_o *)transform, font, 0LL);
  }
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)transform, this->fields.rubyText, 0LL);
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby
    || (this->fields.rubyPosition.fields.x = (float)((float)(v64 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v66,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1C3B9C0(transform, v55);
  }
  v68.fields.x = this->fields.rubyPosition.fields.x;
  v68.fields.y = this->fields.rubyPosition.fields.y;
  v68.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
  this->fields.widthSize = v64;
  pos->fields.x = pos->fields.x + v64;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_43219472(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_4C1C40A )
  {
    sub_1C3B764(&UnityEngine_Vector2_TypeInfo, image);
    byte_4C1C40A = 1;
  }
  ScriptMessageLabel__UpdateImage_43219624(
    this,
    image,
    pos,
    fontSize,
    scale,
    imageStr,
    UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
    horizontalAlign,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__UpdateImage_43219624(
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
  PartyListViewItem_o *v9; // x7
  float y; // s8
  float x; // s9
  __int64 v19; // x1
  void *v20; // x1
  void *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  void *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  float v54; // s0
  int32_t v55; // w8
  UISprite_o *v56; // x25
  __int64 v57; // x1
  UIWidget_o *transform; // x0
  int32_t v59; // w24
  float v60; // s0
  float v61; // s10
  float v62; // s1
  float v63; // s0
  int32_t v64; // w24
  float v65; // s0
  float v66; // s10
  int32_t v67; // w8
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4C23CCA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, image);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C23CCA = 1;
  }
  v20 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v20,
    (int64_t)pos,
    fontSize,
    imageStr,
    *(BattleSetupInfo_o **)&horizontalAlign,
    (FollowerInfo_o *)method,
    v9);
  v21 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  this->fields.imageText = imageStr;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.fontType = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v48, v49, v50, v51, v52, v53);
  v54 = (float)fontSize * scale;
  v55 = (int)v54;
  if ( v54 == INFINITY )
    v55 = 0x80000000;
  this->fields.fontSize = v55;
  v56 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v56, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v59 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v61 = v60;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v63 = (float)(v61 * (float)v59) / v62;
  v64 = v63 == INFINITY ? 0x80000000 : (int)v63;
  if ( !transform )
    goto LABEL_22;
  UIWidget__SetDimensions(transform, v64, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v69.fields.r = 1.0;
  v69.fields.g = 1.0;
  v69.fields.b = 1.0;
  v69.fields.a = 1.0;
  UIWidget__set_color(transform, v69, 0LL);
  v65 = pos->fields.x;
  v66 = (float)v64;
  if ( horizontalAlign == 2 )
  {
    v65 = v65 - v66;
  }
  else if ( horizontalAlign == 1 )
  {
    v65 = v65 + (float)(v66 * -0.5);
  }
  pos->fields.x = v65;
  v67 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v65;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v67 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_22:
    sub_1C3B9C0(transform, v57);
  }
  v68.fields.x = this->fields.mainPosition.fields.x;
  v68.fields.y = this->fields.mainPosition.fields.y;
  v68.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
  this->fields.widthSize = v66;
  pos->fields.x = pos->fields.x + v66;
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  void *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v62; // x3
  float VerticalAlignOffset; // s0
  float v64; // s8
  const MethodInfo *v65; // x1
  float v66; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23CC4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, main);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_1/*""*/, v18);
    byte_4C23CC4 = 1;
  }
  v19 = System_String__Concat_63368612(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.fontType = font;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v54, v55, v56, v57, v58, v59);
  this->fields.fontSize = fontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_23;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  UILabel__set_fontSize(transform, fontSize, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize == maxFontSize )
  {
    transform = *main;
    if ( *main )
    {
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v68.fields.x = pos->fields.x;
        v68.fields.y = pos->fields.y;
        v68.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1C3B9C0(transform, v60);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v62);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v64 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_23;
  v69.fields.x = pos->fields.x;
  v69.fields.z = 0.0;
  v69.fields.y = pos->fields.y - v64;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v66 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v66;
  pos->fields.x = v66 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  void *v16; // x1
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  void *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UISprite_o *v50; // x24
  System_String_o *imageText; // x25
  __int64 v52; // x1
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v55; // x24
  int32_t v56; // w23
  const MethodInfo *v57; // x1
  UIWidget_o *v58; // x22
  System_String_o *colorTag; // x25
  int v60; // s0
  float v64; // s8
  struct UnityEngine_Vector2_o v65; // x8
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23CC8 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, image);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    byte_4C23CC8 = 1;
  }
  v16 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v16,
    (int64_t)pos,
    fontSize,
    *(System_String_o **)&length,
    (BattleSetupInfo_o *)imageStr,
    (FollowerInfo_o *)method,
    v7);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  this->fields.imageText = imageStr;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.fontType = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.fontSize = fontSize;
  v50 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v50, imageText, 0LL);
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  AtlasSprite = UISprite__GetAtlasSprite(transform, 0LL);
  if ( !AtlasSprite )
    return;
  v55 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v56 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v56, fontSize, 0LL);
  v58 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  *(UnityEngine_Color_o *)&v60 = ScriptMessageLabel__GetColor(colorTag, v57);
  if ( !v58
    || (UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v60, 0LL),
        v64 = (float)v56,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v56 / (float)v55->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1C3B9C0(transform, v52);
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


void __fastcall ScriptMessageLabel__UpdatePlayVoice(
        ScriptMessageLabel_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_string__string__bool__o *setReplayingVoice,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v14; // x1
  void *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  void *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  void *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ScriptMessageLabel_c *v48; // x0

  if ( (byte_4C23CCD & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, assetName);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C23CCD = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.setReplayingVoice,
    (int64_t)setReplayingVoice,
    (int64_t)objectName,
    (int32_t)setReplayingVoice,
    (System_String_o *)method,
    v6,
    v7,
    v8);
  v15 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  this->fields.playVoiceAssetName = assetName;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)assetName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.playVoiceObjectName = objectName;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)objectName,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.playVoiceVolume = volume;
  v48 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  void *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  void *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  void *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UILabel_o *transform; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x3
  float VerticalAlignOffset; // s0
  float v66; // s8
  float v67; // s0
  float y; // s8
  float v69; // s1
  const MethodInfo *v70; // x1
  float v71; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23CC6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, main);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_1/*""*/, v20);
    byte_4C23CC6 = 1;
  }
  v21 = System_String__Concat_63368612(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v21;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = System_String__Concat_63368612(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.fontType = font;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v56, v57, v58, v59, v60, v61);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_33;
    UILabel__set_trueTypeFont(transform, font, 0LL);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_33;
    UILabel__set_trueTypeFont(transform, font, 0LL);
  }
  if ( isTalkName )
    pos->fields.y = -16.0;
  transform = *main;
  if ( !*main || (UILabel__set_fontSize(transform, fontSize, 0LL), (transform = *main) == 0LL) )
LABEL_33:
    sub_1C3B9C0(transform, v63);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v64);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v66 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v75.fields.x = pos->fields.x;
        v75.fields.z = 0.0;
        v75.fields.y = pos->fields.y - v66;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v75, 0LL);
        goto LABEL_23;
      }
    }
    goto LABEL_33;
  }
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v74.fields.x = pos->fields.x;
  v74.fields.y = pos->fields.y;
  v74.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0LL);
  this->fields.yOffset = 0.0;
LABEL_23:
  this->fields.mainPosition = *pos;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  UILabel__set_text(transform, this->fields.rubyText, 0LL);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                         transform,
                                                         transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                     * 0.5))
                                     - (float)(v67 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + v69;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v76.fields.x = this->fields.rubyPosition.fields.x;
  v76.fields.y = this->fields.rubyPosition.fields.y;
  v76.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v76, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v71 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v71;
  pos->fields.x = v71 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  __int64 v3; // x1
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v6; // x8
  struct ScriptMessageLabel_o *v7; // x8
  UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v9; // x9
  struct ScriptMessageLabel_o *v10; // x8
  float32x2_t *v11; // x8
  int v12; // s2 OVERLAPPED
  unsigned __int64 v13; // d0 OVERLAPPED
  int v14; // s1

  v2 = this;
  if ( (byte_4C23CD4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C23CD4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  fontType = (UnityEngine_Object_o *)_4__this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.__4__this;
    if ( !v6 )
      goto LABEL_22;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
    if ( !this )
      goto LABEL_22;
    UILabel__set_trueTypeFont((UILabel_o *)this, v6->fields.fontType, 0LL);
  }
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_22;
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
LABEL_22:
    sub_1C3B9C0(this, method);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}