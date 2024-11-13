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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int64_t v35; // x1
  struct ScriptMessageLabel_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_Dictionary_object__int__o *v46; // x19
  __int64 v47; // x0
  __int64 v48; // x1
  struct ScriptMessageLabel_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_Dictionary_int__int__o *v59; // x19
  struct ScriptMessageLabel_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4B17E71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_16164/*"[line "*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_21604/*"medium"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_23624/*"small"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_25054/*"x-small"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21265/*"large"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_25034/*"x-large"*/, v32, v33);
    byte_4B17E71 = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v35 = StringLiteral_16164/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_16164/*"[line "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->LINE_ORDER, v35, v2, v3, v4, v5, v6, v7);
  v36 = ScriptMessageLabel_TypeInfo->static_fields;
  v36->codeClassSplitStringList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->codeClassSplitStringList, 0LL, v37, v38, v39, v40, v41, v42);
  v46 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v43,
                                                                  v44,
                                                                  v45);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v46,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v46 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_915/*"-"*/,
    29,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_25054/*"x-small"*/,
    19,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_23624/*"small"*/,
    24,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_21604/*"medium"*/,
    29,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_21265/*"large"*/,
    48,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v46,
    (Il2CppObject *)StringLiteral_25034/*"x-large"*/,
    64,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v49 = ScriptMessageLabel_TypeInfo->static_fields;
  v49->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->fontSizes, (int64_t)v46, v50, v51, v52, v53, v54, v55);
  v59 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v56,
                                                               v57,
                                                               v58);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v59,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v59 )
LABEL_6:
    sub_1BCAA3C(v47, v48);
  System_Collections_Generic_Dictionary_int__int___Add(
    v59,
    24,
    0,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v59,
    29,
    1,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v59,
    48,
    2,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v59,
    64,
    3,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v60 = ScriptMessageLabel_TypeInfo->static_fields;
  v60->fontSizeIndexTable = v59;
  sub_1BCA784((PartyOrganizationUtility_o *)&v60->fontSizeIndexTable, (int64_t)v59, v61, v62, v63, v64, v65, v66);
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

  if ( (byte_4B17E70 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17E70 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorTag, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
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
  sub_1BCA784(
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
  __int64 v3; // x3
  int32_t v4; // w21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t Chars; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v20; // x22
  int v21; // w25
  int32_t v22; // w1
  __int16 v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w23
  uint16_t v36; // w0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  int64_t v46; // x1
  Il2CppClass **v47; // x0

  v4 = bindex;
  if ( (byte_4B17E58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&bindex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v12, v13);
    byte_4B17E58 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&bindex,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v20 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v16, v17, v18);
  System_Text_StringBuilder___ctor_61556468(v20, stringLength, 0LL);
  if ( txt->fields._stringLength > v4 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = v4++;
      Chars = System_String__get_Chars(txt, v22, 0LL);
      v23 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v21 )
        goto LABEL_18;
      if ( !v20 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                v20,
                v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v14 )
        goto LABEL_36;
      items = v14->fields._items;
      v31 = Method_System_Collections_Generic_List_string__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v14->fields._size;
      v33 = Chars;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)Chars,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
      }
      System_Text_StringBuilder__set_Length(v20, 0, 0LL);
      v21 = 0;
LABEL_25:
      if ( v4 >= txt->fields._stringLength )
        goto LABEL_29;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v21;
    }
    else if ( (unsigned __int16)Chars == 93 && --v21 < 0 )
    {
      goto LABEL_29;
    }
LABEL_18:
    if ( !v20 )
      goto LABEL_36;
    Chars = (int64_t)System_Text_StringBuilder__Append_61565444(v20, Chars, 0LL);
    if ( v23 == 34 )
    {
      if ( v4 < txt->fields._stringLength )
      {
        do
        {
          v35 = v4 + 1;
          v36 = System_String__get_Chars(txt, v4, 0LL);
          if ( v36 == 34 )
            break;
          System_Text_StringBuilder__Append_61565444(v20, v36, 0LL);
          ++v4;
        }
        while ( v35 < txt->fields._stringLength );
        v4 = v35;
      }
      Chars = (int64_t)System_Text_StringBuilder__Append_61565444(v20, 0x22u, 0LL);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v20 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v20, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v14 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1BCAA3C(Chars, v16);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
            v20,
            v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v14 )
    goto LABEL_36;
  v43 = v14->fields._items;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++v14->fields._version;
  if ( !v43 )
    goto LABEL_36;
  v45 = v14->fields._size;
  v46 = Chars;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)Chars,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v43->obj.klass + v45;
    v14->fields._size = v45 + 1;
    v47[4] = (Il2CppClass *)v46;
    sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v46, v37, v38, v39, v40, v41, v42);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4B17E6C & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, method, v2);
    byte_4B17E6C = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    playVoiceAssetName = this->fields.playVoiceAssetName;
    playVoiceObjectName = this->fields.playVoiceObjectName;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v4);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *v16; // x23
  UILabel_o *v17; // x22
  ScriptMessageLabel_o *v18; // x21

  if ( (byte_4B17E61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, mainObject, rubyObject);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13);
    this = (ScriptMessageLabel_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B17E61 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v16 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v17 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v16)
    || (v18 = this, UILabel__set_text(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v17)
    || (UILabel__set_text(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v18)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, float))v18->klass[1]._1.castClass)(
                                         v18,
                                         v18->klass[1]._1.declaringType,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0LL), !playVoiceEffect) )
  {
LABEL_12:
    sub_1BCAA3C(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_frontEffect; // x20
  UnityEngine_Object_o *frontEffect; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_effect; // x19
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  __int64 v17; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17E5E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E5E = 1;
  }
  p_frontEffect = &this->fields.frontEffect;
  frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(v7, 0LL);
    *p_frontEffect = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.frontEffect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  effect = this->fields.effect;
  p_effect = (PartyOrganizationUtility_o *)&this->fields.effect;
  v15 = (UnityEngine_Object_o *)effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_effect->klass = 0LL;
    sub_1BCA784(p_effect, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  __int64 v38; // x1
  UnityEngine_Object_o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  __int64 v48; // x1
  UnityEngine_Object_o *v49; // x21
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

  if ( (byte_4B17E5C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E5C = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v10, v11, v12, v13, v14, v15);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244(v19, 0LL);
    *p_ruby = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ruby, 0LL, v20, v21, v22, v23, v24, v25);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    UnityEngine_Object__Destroy_70154244(v29, 0LL);
    *p_image = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.image, 0LL, v30, v31, v32, v33, v34, v35);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    UnityEngine_Object__Destroy_70154244(v39, 0LL);
    *p_playVoice = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoice, 0LL, v40, v41, v42, v43, v44, v45);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v49 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
      UnityEngine_Object__Destroy_70154244(v49, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoiceEffect, 0LL, v50, v51, v52, v53, v54, v55);
      goto LABEL_38;
    }
LABEL_39:
    sub_1BCAA3C(v7, v6);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v6);
  this->fields.fontType = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v56, v57, v58, v59, v60, v61);
}


bool __fastcall ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  bool result; // w0
  System_String_o *v13; // x0
  int Chars; // w8
  int32_t stringLength; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x1
  int i; // w24
  uint16_t v24; // w22
  System_String_o **v25; // x0

  if ( (byte_4B17E52 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, text, overrideColor);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B17E52 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v13 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v13, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v13 = *text;
  if ( !*text )
LABEL_28:
    sub_1BCAA3C(v13, v11);
  stringLength = v13->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v13, (System_String_o *)StringLiteral_15997/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
        v25 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v13, stringLength - 1, 0LL) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v13 = *text;
    if ( !*text )
      goto LABEL_28;
    v24 = System_String__get_Chars(v13, i - 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v11);
    if ( (unsigned __int16)(v24 - 48) >= 0xAu && (unsigned __int16)((v24 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v22 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1BCA784((PartyOrganizationUtility_o *)text, (int64_t)overrideColor, v16, v17, v18, v19, v20, v21);
  *colorTag = overrideColor;
  v25 = colorTag;
  v22 = overrideColor;
LABEL_26:
  sub_1BCA784((PartyOrganizationUtility_o *)v25, (int64_t)v22, v16, v17, v18, v19, v20, v21);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1BCAA3C(0LL, *(_QWORD *)&start);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  float r; // s8
  System_Char_array *v11; // x0
  System_Char_array *v12; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  bool v16; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v20; // s0
  UnityEngine_Color_o v21; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17E65 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_396/*"#"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B17E65 = 1;
  }
  *(_QWORD *)&v21.fields.r = 0LL;
  *(_QWORD *)&v21.fields.b = 0LL;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15997/*"[-]"*/, 0LL) )
  {
    v11 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
    if ( !v11 )
      goto LABEL_14;
    max_length = v11->max_length;
    v12 = v11;
    if ( !max_length || (v11->m_Items[2] = 91, max_length == 1) )
      sub_1BCAA44(v11, v11);
    v11->m_Items[3] = 93;
    if ( !colorTag )
LABEL_14:
      sub_1BCAA3C(v11, v12);
    v14 = System_String__Trim_62430968(colorTag, v11, 0LL);
    v15 = System_String__Concat_62401220((System_String_o *)StringLiteral_396/*"#"*/, v14, 0LL);
    v16 = UnityEngine_ColorUtility__TryParseHtmlString(v15, &v21, 0LL);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v16 )
    {
      g = v21.fields.g;
      r = v21.fields.r;
      b = v21.fields.b;
      a = v21.fields.a;
    }
  }
  else
  {
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v20 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v20;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B17E57 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start, method);
    byte_4B17E57 = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start, method, v3);
  System_Text_StringBuilder___ctor_61556468(v6, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ; v4 < txt->fields._stringLength; appended = System_Text_StringBuilder__Append_61565444(
                                                       v6,
                                                       (uint16_t)appended,
                                                       0LL) )
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
    sub_1BCAA3C(appended, v8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScriptMessageLabel__GetFontSize(
        System_String_o *sizeName,
        int32_t defaultSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  ScriptMessageLabel_c *v11; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v13; // x0

  if ( (byte_4B17E4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, *(_QWORD *)&defaultSize, method);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v7, v8);
    byte_4B17E4C = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_915/*"-"*/, 0LL) )
  {
    v13 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v9);
      v13 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v13->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               (Il2CppObject *)sizeName,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1BCAA3C(fontSizes, v9);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v11 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v9);
    v11 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v11->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_15;
  sizeName = (System_String_o *)StringLiteral_915/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *__fastcall ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  ScriptMessageLabel_c *v18; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B17E4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v12, v13);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v16, v17);
    byte_4B17E4D = 1;
  }
  v18 = ScriptMessageLabel_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
    v18 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v18->static_fields->fontSizes;
  if ( !fontSizes )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v22,
    fontSizes,
    (const MethodInfo_325C908 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v22,
            (const MethodInfo_33627FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v22.fields._current.fields.value) == size )
    {
      key = v22.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v22,
        (const MethodInfo_3362920 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v22,
    (const MethodInfo_3362920 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_915/*"-"*/;
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
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_String_o *imageText; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o *playVoiceAssetName; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_o *playVoiceObjectName; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct UnityEngine_Font_o *fontType; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_String_o *colorTag; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4B17E5F & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    byte_4B17E5F = 1;
  }
  v5 = sub_1BCAA2C(ScriptMessageLabel_TypeInfo, method, v2, v3);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v5, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  mainText = this->fields.mainText;
  *(_QWORD *)(v5 + 120) = mainText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 120), (int64_t)mainText, v9, v10, v11, v12, v13, v14);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v5 + 128) = rubyText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 128), (int64_t)rubyText, v17, v18, v19, v20, v21, v22);
  imageText = this->fields.imageText;
  *(_QWORD *)(v5 + 136) = imageText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 136), (int64_t)imageText, v24, v25, v26, v27, v28, v29);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v5 + 144) = playVoiceAssetName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 144), (int64_t)playVoiceAssetName, v31, v32, v33, v34, v35, v36);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v5 + 152) = playVoiceObjectName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 152), (int64_t)playVoiceObjectName, v38, v39, v40, v41, v42, v43);
  *(float *)(v5 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v5 + 184) = setReplayingVoice;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 184), (int64_t)setReplayingVoice, v45, v46, v47, v48, v49, v50);
  fontType = this->fields.fontType;
  *(_QWORD *)(v5 + 88) = fontType;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 88), (int64_t)fontType, v52, v53, v54, v55, v56, v57);
  *(_QWORD *)(v5 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v5 + 112) = colorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 112), (int64_t)colorTag, v59, v60, v61, v62, v63, v64);
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
  __int64 v2; // x2
  System_String_array *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  int32_t v11; // w20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v16; // x0
  unsigned int max_length; // w8

  v3 = param;
  if ( (byte_4B17E5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    param = (System_String_array *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17E5B = 1;
  }
  if ( !v3 )
    goto LABEL_27;
  v10 = *(_QWORD *)&v3->max_length;
  if ( !v10 )
    goto LABEL_27;
  if ( !(_DWORD)v10 )
    goto LABEL_24;
  v11 = System_Int32__Parse(v3->m_Items[0], 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v11,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( (int)v3->max_length < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0LL);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0LL);
    max_length = v3->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( max_length > 2 )
        return v3->m_Items[2];
LABEL_24:
      sub_1BCAA44(param, method);
    }
    if ( max_length <= 1 )
      goto LABEL_24;
    return v3->m_Items[1];
  }
  else
  {
LABEL_27:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
      byte_4B1194D = 1;
    }
    v16 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v16 = LocalizationManager_TypeInfo;
    }
    return v16->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x19
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int stringLength; // w24
  System_Collections_Generic_List_int__o *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  int32_t v27; // w21
  int v28; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int32_t v32; // w21
  int v33; // w23
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_Text_StringBuilder_o *v37; // x21
  int32_t i; // w22
  _BOOL4 v39; // w23
  System_String_o **v40; // x8
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+20h] [xbp-80h] BYREF

  v4 = txt;
  if ( (byte_4B17E56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_25724/*"［"*/, v19, v20);
    txt = (System_String_o *)sub_1BCA7E0(&StringLiteral_25725/*"］"*/, v21, v22);
    byte_4B17E56 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !v4 )
    goto LABEL_46;
  stringLength = v4->fields._stringLength;
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( stringLength >= 1 )
  {
    v27 = 0;
    v28 = 0;
    do
    {
      if ( System_String__get_Chars(v4, v27, 0LL) == 91 )
      {
        ++v28;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v4, v27, 0LL);
        if ( (unsigned __int16)txt == 93 && --v28 < 0 )
        {
          if ( !v24 )
            goto LABEL_46;
          items = v24->fields._items;
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v24,
              v27,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            v28 = 0;
          }
          else
          {
            v28 = 0;
            v24->fields._size = size + 1;
            items->m_Items[size + 1] = v27;
          }
        }
      }
      ++v27;
    }
    while ( stringLength != v27 );
  }
  v32 = stringLength - 1;
  if ( stringLength - 1 >= 0 )
  {
    v33 = 0;
    do
    {
      if ( System_String__get_Chars(v4, v32, 0LL) == 93 )
      {
        ++v33;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v4, v32, 0LL);
        if ( (unsigned __int16)txt == 91 && --v33 < 0 )
        {
          if ( !v24 )
            goto LABEL_46;
          v34 = v24->fields._items;
          v35 = Method_System_Collections_Generic_List_int__Add__;
          ++v24->fields._version;
          if ( !v34 )
            goto LABEL_46;
          v36 = v24->fields._size;
          if ( (unsigned int)v36 >= v34->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v24,
              v32,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            v33 = 0;
          }
          else
          {
            v33 = 0;
            v24->fields._size = v36 + 1;
            v34->m_Items[v36 + 1] = v32;
          }
        }
      }
      --v32;
    }
    while ( v32 >= 0 );
  }
  v37 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v25, v26);
  System_Text_StringBuilder___ctor(v37, 0LL);
  if ( stringLength < 1 )
  {
    if ( v37 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v37->klass->vtable._3_ToString.method)(
                                  v37,
                                  v37->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_46:
    sub_1BCAA3C(txt, method);
  }
  if ( !v24 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      v24,
      (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v43 = v42;
    do
      v39 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v43,
              (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v43.fields._current && v39 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v43,
      (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v4, i, 0LL);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v39 )
    {
      if ( !v37 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v40 = (System_String_o **)&StringLiteral_25724/*"［"*/;
      else
        v40 = (System_String_o **)&StringLiteral_25725/*"］"*/;
      System_Text_StringBuilder__Append_61563116(v37, *v40, 0LL);
    }
    else
    {
      if ( !v37 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_61565444(v37, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v37->klass->vtable._3_ToString.method)(
                              v37,
                              v37->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  __int64 v8; // x2
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v10; // x21
  System_String_o *v11; // x23
  int v12; // w25
  int v13; // w26
  __int16 v14; // w24
  int v15; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_4B17E59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&bindex, *(_QWORD *)&index);
    txt = (System_String_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B17E59 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v10 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                         System_Text_StringBuilder_TypeInfo,
                                         *(_QWORD *)&bindex,
                                         *(_QWORD *)&index,
                                         method);
  System_Text_StringBuilder___ctor_61556468(v10, stringLength, 0LL);
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = 1;
  if ( v6->fields._stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v13 = 0;
    bindex = v5;
    while ( 1 )
    {
      v5 = bindex + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0LL);
      v14 = (__int16)txt;
      if ( (unsigned __int16)txt != 58 )
      {
        if ( (unsigned __int16)txt == 91 )
        {
          ++v13;
        }
        else if ( (unsigned __int16)txt == 93 && --v13 < 0 )
        {
          goto LABEL_28;
        }
        goto LABEL_14;
      }
      if ( !v13 )
        break;
LABEL_14:
      if ( !v10 )
        goto LABEL_32;
      txt = (System_String_o *)System_Text_StringBuilder__Append_61565444(v10, (uint16_t)txt, 0LL);
      if ( v14 == 34 )
      {
        if ( v5 < v6->fields._stringLength )
        {
          do
          {
            v15 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_61565444(v10, Chars, 0LL);
            ++v5;
          }
          while ( v15 < v6->fields._stringLength );
          v5 = v15;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_61565444(v10, 0x22u, 0LL);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields._stringLength )
        goto LABEL_28;
    }
    if ( v12 == index )
    {
      if ( v10 )
      {
        v11 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                   v10,
                                   v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_1BCAA3C(txt, *(_QWORD *)&bindex);
    }
    if ( !v10 )
      goto LABEL_32;
LABEL_27:
    ++v12;
    System_Text_StringBuilder__set_Length(v10, 0, 0LL);
  }
  while ( v5 < v6->fields._stringLength );
LABEL_28:
  if ( v12 != index )
    return v11;
  if ( !v10 )
    goto LABEL_32;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall ScriptMessageLabel__GetTalkName(
        System_String_o **imageName,
        System_String_o **className,
        System_String_o **charaName,
        int32_t *charaIndex,
        System_String_o *talkName,
        const MethodInfo *method)
{
  System_String_o **v8; // x26
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 codeClassSplitStringList; // x0
  MethodInfo *v40; // x1
  ScriptMessageLabel_c *v41; // x8
  System_String_o *v42; // x28
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  ScriptMessageLabel_c *v51; // x8
  int64_t v52; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_array *v60; // x25
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  __int64 v74; // x3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x8
  int v80; // w9
  int v81; // w28
  Il2CppClass **v82; // x26
  System_String_o **v83; // x26
  unsigned __int64 v84; // t1
  System_String_o *v85; // x26
  int32_t stringLength; // w8
  __int64 v87; // x1
  int v88; // w26
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_String_o **v104; // x8
  PartyOrganizationUtility_o *v105; // x0
  System_String_o *v106; // x1
  System_Collections_Generic_List_object__o *v107; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x8
  unsigned __int64 i; // x19
  struct System_Object_array *items; // x8
  _QWORD *v117; // x9
  __int64 size; // x10
  Il2CppClass **v119; // x0
  System_String_o *v120; // [xsp+0h] [xbp-90h]
  System_String_o **v121; // [xsp+10h] [xbp-80h]
  int v122; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  v8 = charaName;
  if ( (byte_4B17E5A & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, className, charaName);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&string___TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_20331/*"icon_class_{0:D3}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_25720/*"："*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11597/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v37, v38);
    byte_4B17E5A = 1;
  }
  Chars = 0;
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, className);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v41 = ScriptMessageLabel_TypeInfo;
  v42 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v40);
    v41 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v41->static_fields->codeClassSplitStringList )
  {
    v43 = sub_1BCA888(string___TypeInfo, 1LL);
    v51 = ScriptMessageLabel_TypeInfo;
    v52 = v43;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v44);
      v51 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v51->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v52;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->codeClassSplitStringList,
      v52,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1BCAA3C(codeClassSplitStringList, v40);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v42;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(codeClassSplitStringList + 32),
      (int64_t)v42,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v41 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v41->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v41, v40);
  if ( !talkName )
    goto LABEL_63;
  v60 = System_String__Split_62427452(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)imageName, 0LL, v61, v62, v63, v64, v65, v66);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)className, (int64_t)StringLiteral_1/*""*/, v67, v68, v69, v70, v71, v72);
  *charaIndex = -1;
  if ( !v60 )
    goto LABEL_63;
  v79 = *(_QWORD *)&v60->max_length;
  v80 = v79 - 1;
  if ( (int)v79 - 1 < 1 )
    goto LABEL_42;
  v120 = v42;
  v121 = v8;
  v81 = 0;
  do
  {
    if ( v81 >= (unsigned int)v79 )
      goto LABEL_64;
    v82 = &v60->obj.klass + v81;
    v84 = (unsigned __int64)v82[4];
    v83 = (System_String_o **)(v82 + 4);
    codeClassSplitStringList = v84;
    if ( !v84 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0LL);
    if ( v81 >= v60->max_length )
      goto LABEL_64;
    v85 = *v83;
    if ( !v85 )
      goto LABEL_63;
    stringLength = v85->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v85, 8, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, v87);
      v85 = System_Char__ToString((uint16_t)&Chars, 0LL);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v40);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v85, v40);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v40);
    v88 = ScriptMessageLabel__ConvertInteger(v85, v40);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v88,
                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v122 = v88;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
      v90 = System_String__Format((System_String_o *)StringLiteral_20331/*"icon_class_{0:D3}"*/, v89, 0LL);
      *imageName = v90;
      sub_1BCA784((PartyOrganizationUtility_o *)imageName, (int64_t)v90, v91, v92, v93, v94, v95, v96);
      if ( !entity )
        goto LABEL_63;
      v97 = System_String__Concat_62401220(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25720/*"："*/,
              0LL);
      *className = v97;
      sub_1BCA784((PartyOrganizationUtility_o *)className, (int64_t)v97, v98, v99, v100, v101, v102, v103);
    }
LABEL_33:
    v79 = *(_QWORD *)&v60->max_length;
    ++v81;
    v80 = v79 - 1;
  }
  while ( v81 < (int)v79 - 1 );
  v8 = v121;
  v42 = v120;
LABEL_42:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *v8 = talkName;
    v105 = (PartyOrganizationUtility_o *)v8;
    v106 = talkName;
  }
  else
  {
    if ( (int)v79 >= 3 )
    {
      v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_string__TypeInfo,
                                                            v40,
                                                            v73,
                                                            v74);
      System_Collections_Generic_List_object____ctor(
        v107,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
      v114 = *(_QWORD *)&v60->max_length;
      if ( (int)v114 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v114; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v114 )
              goto LABEL_64;
            if ( !v107 )
              goto LABEL_63;
            v40 = (MethodInfo *)v60->m_Items[i];
            items = v107->fields._items;
            v117 = Method_System_Collections_Generic_List_string__Add__;
            ++v107->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v107->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v107,
                (Il2CppObject *)v40,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v119 = &items->obj.klass + size;
              v107->fields._size = size + 1;
              v119[4] = (Il2CppClass *)v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v119 + 4), (int64_t)v40, v108, v109, v110, v111, v112, v113);
            }
          }
          LODWORD(v114) = v60->max_length;
        }
      }
      v106 = System_String__Join_62416876(v42, (System_Collections_Generic_IEnumerable_string__o *)v107, 0LL);
      *v8 = v106;
    }
    else
    {
      if ( v79 )
      {
        if ( (_DWORD)v79 )
        {
          v104 = &v60->m_Items[v80];
          goto LABEL_60;
        }
LABEL_64:
        sub_1BCAA44(codeClassSplitStringList, v40);
      }
      v104 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v106 = *v104;
      *v8 = *v104;
    }
    v105 = (PartyOrganizationUtility_o *)v8;
  }
  sub_1BCA784(v105, (int64_t)v106, v73, v74, v75, v76, v77, v78);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w22
  int32_t v17; // w24
  __int64 v18; // x1
  ScriptMessageLabel_c *v19; // x0
  const MethodInfo *v20; // x1
  int v21; // w26
  System_String_o *v22; // x23
  void *v23; // x0
  System_String_o *v24; // x23
  int32_t v25; // w0
  __int64 v26; // x8
  System_String_o *v27; // x0
  System_String_o *v28; // x1

  if ( (byte_4B17E4F & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, *(_QWORD *)&len, dispText);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B17E4F = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)dispText,
      (int64_t)StringLiteral_1/*""*/,
      (int64_t)dispText,
      (int32_t)length,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    v17 = 0;
    goto LABEL_44;
  }
  v16 = 0;
  if ( !len )
  {
    v17 = 0;
    goto LABEL_40;
  }
  v17 = 0;
  if ( text->fields._stringLength < 1 )
    goto LABEL_40;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v16, 0LL) != 91 )
    {
      ++v17;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v16 + 1, 0LL) == 35 )
      break;
    v19 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v18);
      v19 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v19->static_fields->LINE_ORDER, 0LL) )
    {
      v23 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v20);
        v23 = ScriptMessageLabel_TypeInfo;
      }
      v26 = *(_QWORD *)(*((_QWORD *)v23 + 23) + 8LL);
      if ( v26 )
      {
        v27 = System_String__Substring_62420224(
                text,
                *(_DWORD *)(v26 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v26 + 16),
                0LL);
        v25 = System_Int32__Parse(v27, 0LL);
        goto LABEL_39;
      }
LABEL_45:
      sub_1BCAA3C(v23, v20);
    }
    v16 += 2;
    if ( v16 < text->fields._stringLength )
    {
      v21 = 0;
      do
      {
        if ( System_String__get_Chars(text, v16, 0LL) == 91 )
        {
          ++v21;
        }
        else if ( System_String__get_Chars(text, v16, 0LL) == 93 )
        {
          if ( !v21 )
            break;
          --v21;
        }
        ++v16;
      }
      while ( v16 < text->fields._stringLength );
    }
LABEL_22:
    ++v16;
    if ( v17 == len || v16 >= text->fields._stringLength )
      goto LABEL_40;
  }
  v22 = System_String__Substring_62420224(text, v16 + 2, text->fields._stringLength - 2, 0LL);
  v23 = (void *)sub_1BCA888(char___TypeInfo, 1LL);
  if ( !v23 )
    goto LABEL_45;
  v20 = (const MethodInfo *)v23;
  if ( !*((_DWORD *)v23 + 6) )
    goto LABEL_46;
  *((_WORD *)v23 + 16) = 58;
  if ( !v22 )
    goto LABEL_45;
  v23 = System_String__Split_62423376(v22, (System_Char_array *)v23, 0LL);
  if ( !v23 )
    goto LABEL_45;
  if ( !*((_DWORD *)v23 + 6) )
LABEL_46:
    sub_1BCAA44(v23, v20);
  v24 = (System_String_o *)*((_QWORD *)v23 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v20);
  v25 = ScriptMessageLabel__StrlenByDisp(v24, v20);
LABEL_39:
  v17 += v25;
LABEL_40:
  if ( v16 <= text->fields._stringLength )
    v28 = System_String__Substring_62420224(text, 0, v16, 0LL);
  else
    v28 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v28;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)dispText,
    (int64_t)v28,
    (int64_t)dispText,
    (int32_t)length,
    (System_String_o *)method,
    v5,
    v6,
    v7);
LABEL_44:
  *length = v17;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B17E4E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17559/*"bottom"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_24233/*"top"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17978/*"center"*/, v6, v7);
    byte_4B17E4E = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_24233/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17978/*"center"*/, 0LL) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17559/*"bottom"*/, 0LL) )
    return 2;
  return 0;
}


bool __fastcall ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  int32_t stringLength; // w21
  int Chars; // w8
  bool result; // w0
  int v7; // w22
  __int64 v8; // x1
  uint16_t v9; // w20
  unsigned int v10; // w8
  unsigned int v11; // w9

  v3 = text;
  if ( (byte_4B17E55 & 1) == 0 )
  {
    text = (System_String_o *)sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    byte_4B17E55 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(text, method);
  stringLength = v3->fields._stringLength;
  if ( (stringLength | 2) != 10 )
    return 0;
  Chars = System_String__get_Chars(v3, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  if ( System_String__get_Chars(v3, stringLength - 1, 0LL) != 93 )
    return 0;
  v7 = 3;
  do
  {
    v9 = System_String__get_Chars(v3, v7 - 2, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v8);
    v10 = (unsigned __int16)(v9 - 48);
    v11 = (unsigned __int16)((v9 & 0xFFDF) - 65);
    if ( stringLength == v7 )
      break;
    ++v7;
  }
  while ( v10 < 0xA || v11 < 6 );
  return v10 < 0xA || v11 < 6;
}


bool __fastcall ScriptMessageLabel__IsColorChar(uint16_t c, const MethodInfo *method)
{
  return (unsigned __int16)(c - 48) < 0xAu || (unsigned __int16)(c - 97) < 6u || (unsigned __int16)(c - 65) < 6u;
}


bool __fastcall ScriptMessageLabel__IsExistColorTag(System_String_o *txt, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20
  int32_t v9; // w0
  int32_t v10; // w21
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x21

  v3 = txt;
  if ( (byte_4B17E54 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v4, v5);
    txt = (System_String_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v6, v7);
    byte_4B17E54 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(txt, method);
  v8 = 0;
  while ( v8 < v3->fields._stringLength )
  {
    v9 = System_String__IndexOf_62432812(v3, (System_String_o *)StringLiteral_15978/*"["*/, v8, 0LL);
    if ( (v9 & 0x80000000) != 0 )
      break;
    v10 = v9;
    v11 = System_String__IndexOf_62432812(v3, (System_String_o *)StringLiteral_16236/*"]"*/, v9, 0LL);
    if ( (v11 & 0x80000000) != 0 )
      break;
    v8 = v11 + 1;
    v13 = System_String__Substring_62420224(v3, v10, v11 + 1 - v10, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v12);
    if ( ScriptMessageLabel__IsColorBeginTag(v13, v12) )
      return 1;
  }
  return 0;
}


void __fastcall ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  _BOOL8 IsBusyVoice; // x0
  __int64 v13; // x1
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  __int64 v15; // x1
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  float playVoiceVolume; // s8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x1

  if ( (byte_4B17E6D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    byte_4B17E6D = 1;
  }
  playVoiceAssetName = this->fields.playVoiceAssetName;
  playVoiceObjectName = this->fields.playVoiceObjectName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  IsBusyVoice = SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0LL);
  if ( IsBusyVoice )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
    SoundManager__stopVoiceAll(0.0, 0LL);
  }
  else
  {
    setReplayingVoice = this->fields.setReplayingVoice;
    if ( !setReplayingVoice )
      sub_1BCAA3C(IsBusyVoice, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, struct System_String_o *, __int64, _QWORD))setReplayingVoice->fields.m_target)(
      setReplayingVoice->fields.original_method_info,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1LL,
      *(_QWORD *)&setReplayingVoice->fields.extra_arg);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
    SoundManager__stopVoiceAll(0.0, 0LL);
    v16 = this->fields.playVoiceAssetName;
    v17 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_39419392(v16, v17, playVoiceVolume, v22, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v23);
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
  __int64 v10; // x2
  void *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  void *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v48; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_4B17E5D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B17E5D = 1;
  }
  this->fields.fontType = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.isPlayingVoice = 0;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    gameObject = this->fields.main;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    gameObject = this->fields.ruby;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
    sub_1BCAA3C(gameObject, v48);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v48);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  int32_t v10; // w24
  System_String_o *v11; // x20
  int v12; // w25
  int32_t v13; // w22
  int32_t v14; // w0
  int32_t v15; // w21
  System_String_o *v16; // x23
  int32_t v17; // w24
  __int16 v18; // w25

  if ( (byte_4B17E53 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17E53 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v10 = 0;
    v11 = text;
LABEL_6:
    v12 = 1 - v10;
    while ( v10 < text->fields._stringLength )
    {
      v13 = v10;
      if ( System_String__get_Chars(text, v10, 0LL) != 91
        || (++v10, v14 = System_String__IndexOf_62431444(text, 0x5Du, v13 + 1, 0LL), (v14 & 0x80000000) != 0) )
      {
LABEL_23:
        v15 = v13;
LABEL_24:
        v10 = v15 + 1;
        goto LABEL_6;
      }
      v15 = v14;
      IsNullOrEmpty = System_String__Substring_62420224(text, v13, v14 + v12, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v16 = IsNullOrEmpty;
      --v12;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 10 )
      {
        v17 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v16, v17, 0LL);
          v18 = (__int16)IsNullOrEmpty;
          if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v9);
          if ( (unsigned __int16)(v18 - 48) >= 0xAu && (unsigned __int16)((v18 & 0xFFDF) - 65) > 5u )
            goto LABEL_23;
          ++v17;
        }
        while ( v17 <= v16->fields._stringLength - 2 );
        if ( v11 )
        {
          IsNullOrEmpty = System_String__Replace_62420848(v11, v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( IsNullOrEmpty )
          {
            v11 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_62432796(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_15997/*"[-]"*/,
                                                 0LL);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_15997/*"[-]"*/ )
            {
              v11 = System_String__Remove(v11, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15997/*"[-]"*/ + 4), 0LL);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1BCAA3C(IsNullOrEmpty, v9);
      }
    }
    return v11;
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x26
  __int64 Component_object; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UILabel_o *v47; // x21
  Il2CppObject *v48; // x0
  __int64 *v49; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UISprite_o *v56; // x20
  UnityEngine_Component_o *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x24
  __int64 v62; // x1
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v65; // w1
  const MethodInfo *v66; // x1
  System_String_o *colorTag; // x19
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  EventDelegate_Callback_o *v80; // x23
  __int64 v81; // x1
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17E60 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainObject, rubyObject);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v16, v17);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_ScriptMessageLabel_OnClickPlayVoice__, v28, v29);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__, v32, v33);
    sub_1BCA7E0(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v36, v37);
    byte_4B17E60 = 1;
  }
  v38 = sub_1BCAA2C(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, mainObject, rubyObject, imageObject);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_45;
  *(_QWORD *)(v38 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)this, v41, v42, v43, v44, v45, v46);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v47 = (UILabel_o *)Component_object;
  v48 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v38 + 24) = v48;
  v49 = (__int64 *)(v38 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)v48, v50, v51, v52, v53, v54, v55);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v56 = (UISprite_o *)Component_object;
  v57 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v61 = sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(
    (System_Action_o *)v61,
    (Il2CppObject *)v38,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v56->klass->vtable._8_set_alpha.method)(
      v56,
      v56->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62);
    AtlasManager__SetMark(v56, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v56->klass->vtable._33_MakePixelPerfect.method)(
      v56,
      v56->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v65 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v56, v65, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v66);
    Color = ScriptMessageLabel__GetColor(colorTag, v66);
    UIWidget__set_color((UIWidget_o *)v56, Color, 0LL);
    if ( !v61 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(
                         *(_QWORD *)(v61 + 64),
                         *(_QWORD *)(v61 + 40));
    if ( !v47 )
      goto LABEL_45;
    UILabel__set_text(v47, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v57 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.playVoiceEffect,
      (int64_t)playVoiceEffect,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    if ( v57 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v57, 0LL);
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
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v57[8].monitor;
            v80 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v77, v78, v79);
            EventDelegate_Callback___ctor(v80, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v81);
            Component_object = (__int64)EventDelegate__Set_47333340(monitor, v80, 0LL);
            if ( v47 )
            {
              UILabel__set_text(v47, 0LL, 0LL);
              Component_object = *v49;
              if ( *v49 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0LL, 0LL);
                if ( v56 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v56->klass->vtable._8_set_alpha.method)(
                    v56,
                    v56->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_1BCAA3C(Component_object, v40);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v47 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v47, this->fields.fontType, 0LL);
  }
  else if ( !v47 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v47, this->fields.fontSize, 0LL);
  UILabel__set_text(v47, this->fields.mainText, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v47, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  v82.fields.z = 0.0;
  v82.fields.y = -this->fields.yOffset;
  v82.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v82, 0LL);
  if ( !v61 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(
                       *(_QWORD *)(v61 + 64),
                       *(_QWORD *)(v61 + 40));
  if ( !v56 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v56->klass->vtable._8_set_alpha.method)(
                       v56,
                       v56->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                       0.0);
  if ( !v57 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v57, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B17E6E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E6E = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v6 = this->fields.playVoiceEffect;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B17E6F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E6F = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v6 = this->fields.playVoiceEffect;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17E51 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    byte_4B17E51 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v3);
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

  if ( (byte_4B17E50 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, *(_QWORD *)&len, method);
    byte_4B17E50 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, *(_QWORD *)&len);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
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
  void *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UILabel_o *transform; // x0
  __int64 v64; // x1
  int32_t v65; // w25
  System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x3
  float VerticalAlignOffset; // s0
  float v75; // s8
  float v76; // s0
  float y; // s8
  float v78; // s1
  const MethodInfo *v79; // x1
  float v80; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E63 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, main, ruby);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_25580/*"・"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B17E63 = 1;
  }
  v21 = System_String__Concat_62401220(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)colorTag, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.fontType = font;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v57, v58, v59, v60, v61, v62);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v65 = 0;
    do
    {
      v66 = System_String__Concat_62401220(*p_rubyText, (System_String_o *)StringLiteral_25580/*"・"*/, 0LL);
      *p_rubyText = v66;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v66, v67, v68, v69, v70, v71, v72);
      ++v65;
    }
    while ( v65 < mainStr->fields._stringLength );
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
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
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v64);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v73);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v75 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v86.fields.x = pos->fields.x;
        v86.fields.z = 0.0;
        v86.fields.y = pos->fields.y - v75;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v86, 0LL);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1BCAA3C(transform, v64);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v85.fields.x = pos->fields.x;
  v85.fields.y = pos->fields.y;
  v85.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v85, 0LL);
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
                                     - (float)(v76 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v78 + v78) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v87.fields.x = this->fields.rubyPosition.fields.x;
  v87.fields.y = this->fields.rubyPosition.fields.y;
  v87.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v87, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v80 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v80;
  pos->fields.x = v80 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v79);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v79);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *v22; // x1
  void *v23; // x1
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
  void *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  struct UnityEngine_Vector2_o v52; // x8
  UnityEngine_Object_o *v53; // x22
  __int64 v54; // x1
  UnityEngine_Object_o *frontEffect; // x22
  __int64 v56; // x1
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v59; // x21
  __int64 v60; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v62; // x20
  UnityEngine_GameObject_o *v63; // x19
  int32_t v64; // w1
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E69 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effect, pos);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_6975/*"FrontCommonUI"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B17E69 = 1;
  }
  v22 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v22,
    (int64_t)pos,
    (int32_t)effectName,
    *(System_String_o **)&dlength,
    (BattleSetupInfo_o *)method,
    v7,
    v8);
  v23 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v52 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v53 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v52;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v59 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v56);
      v65.fields.z = 0.0;
      v65.fields.x = x;
      v65.fields.y = y;
      CommonEffectManager__CreateParam_41402572(v59, effectName, v65, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v62 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v62) )
      {
        sub_1BCAA3C(transform, v60);
      }
      SyncTransformComponent__setChild(v62, (UnityEngine_Transform_o *)transform, 0LL);
      v63 = this->fields.frontEffect;
      v64 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6975/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v63, v64, 0LL);
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
  __int64 v15; // x2
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
  __int64 v50; // x1
  UISprite_o *v51; // x24
  __int64 v52; // x1
  UIWidget_o *transform; // x0
  int32_t v54; // w23
  float v55; // s0
  float v56; // s8
  float v57; // s1
  float v58; // s0
  int32_t v59; // w23
  float x; // s0
  float v61; // s8
  struct UnityEngine_Vector2_o v62; // x8
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17E67 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, image, pos);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B17E67 = 1;
  }
  v16 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v16,
    (int64_t)pos,
    fontSize,
    imageStr,
    *(BattleSetupInfo_o **)&horizontalAlign,
    (FollowerInfo_o *)method,
    v7);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  this->fields.imageText = imageStr;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.fontType = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.fontSize = fontSize;
  v51 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
  AtlasManager__SetMark(v51, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v54 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v56 = v55;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v58 = (float)(v56 * (float)v54) / v57;
  v59 = v58 == INFINITY ? 0x80000000 : (int)v58;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v59, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v64.fields.r = 1.0;
  v64.fields.g = 1.0;
  v64.fields.b = 1.0;
  v64.fields.a = 1.0;
  UIWidget__set_color(transform, v64, 0LL);
  x = pos->fields.x;
  v61 = (float)v59;
  if ( horizontalAlign == 2 )
  {
    x = x - v61;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v61 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(transform, v52);
  }
  v63.fields.x = pos->fields.x;
  v63.fields.y = pos->fields.y;
  v63.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v63, 0LL);
  v62 = *pos;
  this->fields.widthSize = v61;
  this->fields.mainPosition = v62;
  pos->fields.x = pos->fields.x + v61;
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *v22; // x1
  struct System_String_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
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
  void *v43; // x1
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
  UIWidget_o *transform; // x0
  __int64 v57; // x1
  UISprite_o *v58; // x26
  int32_t v59; // w25
  float v60; // s0
  float v61; // s8
  float v62; // s1
  float v63; // s0
  int32_t v64; // w25
  float x; // s0
  float v66; // s8
  __int64 v67; // x1
  float y; // s9
  float v69; // s1
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17E6A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, image, ruby);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B17E6A = 1;
  }
  v22 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v22,
    (int64_t)ruby,
    (int32_t)pos,
    *(System_String_o **)&fontSize,
    (BattleSetupInfo_o *)imageStr,
    (FollowerInfo_o *)rubyStr,
    (PartyListViewItem_o *)font);
  v23 = System_String__Concat_62401220(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  this->fields.imageText = imageStr;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.fontType = font;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v50, v51, v52, v53, v54, v55);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v58 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v57);
  AtlasManager__SetMark(v58, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v59 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v61 = v60;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v63 = (float)(v61 * (float)v59) / v62;
  v64 = v63 == INFINITY ? 0x80000000 : (int)v63;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v64, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v72.fields.r = 1.0;
  v72.fields.g = 1.0;
  v72.fields.b = 1.0;
  v72.fields.a = 1.0;
  UIWidget__set_color(transform, v72, 0LL);
  x = pos->fields.x;
  v66 = (float)v64;
  if ( horizontalAlign == 2 )
  {
    x = x - v66;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v66 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_31;
  v70.fields.x = pos->fields.x;
  v70.fields.y = pos->fields.y;
  v70.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v70, 0LL);
  this->fields.mainPosition = *pos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v66 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v69,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(transform, v57);
  }
  v71.fields.x = this->fields.rubyPosition.fields.x;
  v71.fields.y = this->fields.rubyPosition.fields.y;
  v71.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v71, 0LL);
  this->fields.widthSize = v66;
  pos->fields.x = pos->fields.x + v66;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_42446300(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, image, pos);
    byte_4B108BA = 1;
  }
  ScriptMessageLabel__UpdateImage_42446452(
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
void __fastcall ScriptMessageLabel__UpdateImage_42446452(
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
  __int64 v20; // x2
  void *v21; // x1
  void *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
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
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  float v56; // s0
  int32_t v57; // w8
  UISprite_o *v58; // x25
  __int64 v59; // x1
  UIWidget_o *transform; // x0
  int32_t v61; // w24
  float v62; // s0
  float v63; // s10
  float v64; // s1
  float v65; // s0
  int32_t v66; // w24
  float v67; // s0
  float v68; // s10
  int32_t v69; // w8
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4B17E68 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, image, pos);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B17E68 = 1;
  }
  v21 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v21,
    (int64_t)pos,
    fontSize,
    imageStr,
    *(BattleSetupInfo_o **)&horizontalAlign,
    (FollowerInfo_o *)method,
    v9);
  v22 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  this->fields.imageText = imageStr;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.fontType = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v49, v50, v51, v52, v53, v54);
  v56 = (float)fontSize * scale;
  v57 = (int)v56;
  if ( v56 == INFINITY )
    v57 = 0x80000000;
  this->fields.fontSize = v57;
  v58 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55);
  AtlasManager__SetMark(v58, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v61 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v63 = v62;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v65 = (float)(v63 * (float)v61) / v64;
  v66 = v65 == INFINITY ? 0x80000000 : (int)v65;
  if ( !transform )
    goto LABEL_22;
  UIWidget__SetDimensions(transform, v66, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v71.fields.r = 1.0;
  v71.fields.g = 1.0;
  v71.fields.b = 1.0;
  v71.fields.a = 1.0;
  UIWidget__set_color(transform, v71, 0LL);
  v67 = pos->fields.x;
  v68 = (float)v66;
  if ( horizontalAlign == 2 )
  {
    v67 = v67 - v68;
  }
  else if ( horizontalAlign == 1 )
  {
    v67 = v67 + (float)(v68 * -0.5);
  }
  pos->fields.x = v67;
  v69 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v67;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v69 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(transform, v59);
  }
  v70.fields.x = this->fields.mainPosition.fields.x;
  v70.fields.y = this->fields.mainPosition.fields.y;
  v70.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v70, 0LL);
  this->fields.widthSize = v68;
  pos->fields.x = pos->fields.x + v68;
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x1
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
  __int64 v62; // x1
  __int64 v63; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v65; // x3
  float VerticalAlignOffset; // s0
  float v67; // s8
  const MethodInfo *v68; // x1
  float v69; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E62 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, main, pos);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B17E62 = 1;
  }
  v21 = System_String__Concat_62401220(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.fontType = font;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v56, v57, v58, v59, v60, v61);
  this->fields.fontSize = fontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
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
        v71.fields.x = pos->fields.x;
        v71.fields.y = pos->fields.y;
        v71.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v71, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1BCAA3C(transform, v63);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v63);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v65);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v67 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_23;
  v72.fields.x = pos->fields.x;
  v72.fields.z = 0.0;
  v72.fields.y = pos->fields.y - v67;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0LL);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v69 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v69;
  pos->fields.x = v69 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v68);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v68);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *v18; // x1
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  UISprite_o *v53; // x24
  System_String_o *imageText; // x25
  __int64 v55; // x1
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v58; // x24
  int32_t v59; // w23
  const MethodInfo *v60; // x1
  UIWidget_o *v61; // x22
  System_String_o *colorTag; // x25
  int v63; // s0
  float v67; // s8
  struct UnityEngine_Vector2_o v68; // x8
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E66 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, image, pos);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B17E66 = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainText,
    (int64_t)v18,
    (int64_t)pos,
    fontSize,
    *(System_String_o **)&length,
    (BattleSetupInfo_o *)imageStr,
    (FollowerInfo_o *)method,
    v7);
  v19 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  this->fields.imageText = imageStr;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)imageStr, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.fontType = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.fontSize = fontSize;
  v53 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v52);
  AtlasManager__SetMark(v53, imageText, 0LL);
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
  v58 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v59 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v59, fontSize, 0LL);
  v61 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v60);
  *(UnityEngine_Color_o *)&v63 = ScriptMessageLabel__GetColor(colorTag, v60);
  if ( !v61
    || (UIWidget__set_color(v61, *(UnityEngine_Color_o *)&v63, 0LL),
        v67 = (float)v59,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v59 / (float)v58->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(transform, v55);
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
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  void *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *v23; // x1
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
  __int64 v49; // x1
  ScriptMessageLabel_c *v50; // x0

  if ( (byte_4B17E6B & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, assetName, objectName);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B17E6B = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setReplayingVoice,
    (int64_t)setReplayingVoice,
    (int64_t)objectName,
    (int32_t)setReplayingVoice,
    (System_String_o *)method,
    v6,
    v7,
    v8);
  v16 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.playVoiceAssetName = assetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)assetName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.playVoiceObjectName = objectName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)objectName,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.playVoiceVolume = volume;
  v50 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v49);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_String_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o *v30; // x0
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
  void *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  void *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  UILabel_o *transform; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x3
  float VerticalAlignOffset; // s0
  float v68; // s8
  float v69; // s0
  float y; // s8
  float v71; // s1
  const MethodInfo *v72; // x1
  float v73; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E64 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, main, ruby);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B17E64 = 1;
  }
  v23 = System_String__Concat_62401220(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainText, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = System_String__Concat_62401220(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyText, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageText, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAssetName,
    (int64_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceObjectName,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.fontType = font;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)font, v58, v59, v60, v61, v62, v63);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
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
    sub_1BCAA3C(transform, v65);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v65);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v66);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v68 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v77.fields.x = pos->fields.x;
        v77.fields.z = 0.0;
        v77.fields.y = pos->fields.y - v68;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v77, 0LL);
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
  v76.fields.x = pos->fields.x;
  v76.fields.y = pos->fields.y;
  v76.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v76, 0LL);
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
                                     - (float)(v69 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + v71;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v78.fields.x = this->fields.rubyPosition.fields.x;
  v78.fields.y = this->fields.rubyPosition.fields.y;
  v78.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v78, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v73 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v73;
  pos->fields.x = v73 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v72);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v72);
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
  __int64 v2; // x2
  ScriptMessageLabel___c__DisplayClass60_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v8; // x8
  struct ScriptMessageLabel_o *v9; // x8
  UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v11; // x9
  struct ScriptMessageLabel_o *v12; // x8
  float32x2_t *v13; // x8
  int v14; // s2 OVERLAPPED
  unsigned __int64 v15; // d0 OVERLAPPED
  int v16; // s1

  v3 = this;
  if ( (byte_4B17E72 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B17E72 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  fontType = (UnityEngine_Object_o *)_4__this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v3->fields.__4__this;
    if ( !v8 )
      goto LABEL_22;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v3->fields.ruby;
    if ( !this )
      goto LABEL_22;
    UILabel__set_trueTypeFont((UILabel_o *)this, v8->fields.fontType, 0LL);
  }
  v9 = v3->fields.__4__this;
  if ( !v9 )
    goto LABEL_22;
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)System_String__op_Inequality(
                                                         v9->fields.rubyText,
                                                         (System_String_o *)StringLiteral_1/*""*/,
                                                         0LL);
  ruby = v3->fields.ruby;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v3->fields.__4__this;
    if ( v11 )
    {
      if ( ruby )
      {
        UILabel__set_fontSize(v3->fields.ruby, v11->fields.rubySize, 0LL);
        v12 = v3->fields.__4__this;
        if ( v12 )
        {
          this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v3->fields.ruby;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v12->fields.rubyText, 0LL);
            this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v3->fields.ruby;
            if ( this )
            {
              this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
              v13 = (float32x2_t *)v3->fields.__4__this;
              if ( v13 )
              {
                if ( this )
                {
                  v14 = 0;
                  v15 = vsub_f32(v13[10], v13[9]).n64_u64[0];
                  v16 = HIDWORD(v15);
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)this,
                    *(UnityEngine_Vector3_o *)(&v14 - 2),
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
    sub_1BCAA3C(this, method);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}