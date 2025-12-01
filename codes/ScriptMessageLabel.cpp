void ScriptMessageLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v8; // w1
  struct ScriptMessageLabel_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_Dictionary_object__int__o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  struct ScriptMessageLabel_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_Dictionary_int__int__o *v26; // x19
  struct ScriptMessageLabel_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CC943D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_15989/*"[line "*/);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    sub_1C713B0(&StringLiteral_21618/*"medium"*/);
    sub_1C713B0(&StringLiteral_23664/*"small"*/);
    sub_1C713B0(&StringLiteral_25051/*"x-small"*/);
    sub_1C713B0(&StringLiteral_21262/*"large"*/);
    sub_1C713B0(&StringLiteral_25031/*"x-large"*/);
    byte_4CC943D = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v8 = StringLiteral_15989/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15989/*"[line "*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->LINE_ORDER, v8, v1, v2, v3, v4, v5, v6);
  v9 = ScriptMessageLabel_TypeInfo->static_fields;
  v9->codeClassSplitStringList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->codeClassSplitStringList, 0, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v16,
    (const MethodInfo_34C1FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v16 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_858/*"-"*/,
    29,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_25051/*"x-small"*/,
    19,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_23664/*"small"*/,
    24,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_21618/*"medium"*/,
    29,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_21262/*"large"*/,
    48,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_25031/*"x-large"*/,
    64,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v19 = ScriptMessageLabel_TypeInfo->static_fields;
  v19->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->fontSizes, (int32_t)v16, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v26 )
LABEL_6:
    sub_1C71608(v17, v18);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    24,
    0,
    (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    29,
    1,
    (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    48,
    2,
    (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    64,
    3,
    (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v27 = ScriptMessageLabel_TypeInfo->static_fields;
  v27->fontSizeIndexTable = v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->fontSizeIndexTable, (int32_t)v26, v28, v29, v30, v31, v32, v33);
}


void ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CC943C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC943C = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.colorTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_array *ScriptMessageLabel__AnalysTagParam(System_String_o *txt, int32_t bindex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  unsigned __int64 Chars; // x0
  __int64 v7; // x1
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v9; // x22
  int v10; // w25
  int32_t v11; // w1
  __int16 v12; // w23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Text_StringBuilder_o *v22; // x1
  Il2CppClass **v23; // x0
  int v24; // w23
  uint16_t v25; // w0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  System_Text_StringBuilder_o *v35; // x1
  Il2CppClass **v36; // x0

  if ( (byte_4CC9424 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    byte_4CC9424 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64109036(v9, stringLength, 0);
  if ( txt->fields._stringLength > bindex )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = bindex++;
      Chars = System_String__get_Chars(txt, v11, 0);
      v12 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v10 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                v9,
                v9->klass->vtable._3_ToString.method);
      if ( !v5 )
        goto LABEL_36;
      items = v5->fields._items;
      v20 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v5->fields._size;
      v22 = (System_Text_StringBuilder_o *)Chars;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Chars,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
      }
      System_Text_StringBuilder__set_Length(v9, 0, 0);
      v10 = 0;
LABEL_25:
      if ( bindex >= txt->fields._stringLength )
        goto LABEL_29;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v10;
    }
    else if ( (unsigned __int16)Chars == 93 && --v10 < 0 )
    {
      goto LABEL_29;
    }
LABEL_18:
    if ( !v9 )
      goto LABEL_36;
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_64118012(v9, Chars, 0);
    if ( v12 == 34 )
    {
      if ( bindex < txt->fields._stringLength )
      {
        do
        {
          v24 = bindex + 1;
          v25 = System_String__get_Chars(txt, bindex, 0);
          if ( v25 == 34 )
            break;
          System_Text_StringBuilder__Append_64118012(v9, v25, 0);
          ++bindex;
        }
        while ( v24 < txt->fields._stringLength );
        bindex = v24;
      }
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_64118012(v9, 0x22u, 0);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v9 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v9, 0);
  if ( (int)Chars < 1 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1C71608(Chars, v7);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
            v9,
            v9->klass->vtable._3_ToString.method);
  if ( !v5 )
    goto LABEL_36;
  v32 = v5->fields._items;
  v33 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v32 )
    goto LABEL_36;
  v34 = v5->fields._size;
  v35 = (System_Text_StringBuilder_o *)Chars;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Chars,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v32->obj.klass + v34;
    v5->fields._size = v34 + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v35, v26, v27, v28, v29, v30, v31);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4CC9438 & 1) == 0 )
  {
    sub_1C713B0(&SeManager_TypeInfo);
    byte_4CC9438 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0) )
  {
    playVoiceAssetName = this->fields.playVoiceAssetName;
    playVoiceObjectName = this->fields.playVoiceObjectName;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0) )
      this->fields.isPlayingVoice = 1;
  }
}


void ScriptMessageLabel__ClearLogDraw(
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

  if ( (byte_4CC942D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (ScriptMessageLabel_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC942D = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v12 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v13 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v12)
    || (v14 = this, UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0), !v13)
    || (UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0), !v14)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, float))v14->klass[1]._1.element_class)(
                                         v14,
                                         v14->klass[1]._1.castClass,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0), !playVoiceEffect) )
  {
LABEL_12:
    sub_1C71608(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0);
}


int32_t ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int32_t v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1C71608(0, method);
  if ( s->fields._stringLength < 1 )
    return 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    Chars = System_String__get_Chars(s, v3, 0);
    if ( (unsigned __int16)(Chars - 65) > 0x19u )
      break;
    ++v3;
    v4 = (Chars - 65) | (v4 << 8);
    if ( v3 >= s->fields._stringLength )
      return v4;
  }
  return -1;
}


int32_t ScriptMessageLabel__ConvertInteger(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w20
  int v4; // w21
  int v5; // w22
  uint16_t Chars; // w0

  if ( !s )
    sub_1C71608(0, method);
  if ( s->fields._stringLength >= 1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 1;
    while ( 1 )
    {
      Chars = System_String__get_Chars(s, v3, 0);
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


void ScriptMessageLabel__DestoryEffect(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_frontEffect; // x20
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  GrandQuestFolderBoardItem_o *p_effect; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC942A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC942A = 1;
  }
  p_frontEffect = &this->fields.frontEffect;
  frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontEffect, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v5, 0);
    *p_frontEffect = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.frontEffect, 0, v6, v7, v8, v9, v10, v11);
  }
  effect = this->fields.effect;
  p_effect = (GrandQuestFolderBoardItem_o *)&this->fields.effect;
  v13 = (UnityEngine_Object_o *)effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(klass, 0);
    p_effect->klass = 0;
    sub_1C71354(p_effect, 0, v16, v17, v18, v19, v20, v21);
  }
}


void ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  UnityEngine_Object_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7

  if ( (byte_4CC9428 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9428 = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    p_fields->main = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, 0, v8, v9, v10, v11, v12, v13);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v16, 0);
    *p_ruby = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.ruby, 0, v17, v18, v19, v20, v21, v22);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v25, 0);
    *p_image = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.image, 0, v26, v27, v28, v29, v30, v31);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v34, 0);
    *p_playVoice = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoice, 0, v35, v36, v37, v38, v39, v40);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v6, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v43, 0);
      *p_playVoiceEffect = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceEffect, 0, v44, v45, v46, v47, v48, v49);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C71608(v6, v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v5);
  this->fields.fontType = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v50, v51, v52, v53, v54, v55);
}


bool ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  bool result; // w0
  System_String_o *v9; // x0
  int Chars; // w8
  int32_t stringLength; // w23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o *v18; // x1
  int i; // w24
  uint16_t v20; // w22
  System_String_o **v21; // x0

  if ( (byte_4CC941E & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_15827/*"[-]"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC941E = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0) )
    return 0;
  v9 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v9, 0, 0);
  result = 0;
  if ( Chars != 91 )
    return result;
  v9 = *text;
  if ( !*text )
LABEL_28:
    sub_1C71608(v9, v7);
  stringLength = v9->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v9, (System_String_o *)StringLiteral_15827/*"[-]"*/, 0) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v18) = StringLiteral_1/*""*/;
LABEL_25:
        v21 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v9, stringLength - 1, 0) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v9 = *text;
    if ( !*text )
      goto LABEL_28;
    v20 = System_String__get_Chars(v9, i - 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( (unsigned __int16)(v20 - 48) >= 0xAu && (unsigned __int16)((v20 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v18 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1C71354((GrandQuestFolderBoardItem_o *)text, (int32_t)overrideColor, v12, v13, v14, v15, v16, v17);
  *colorTag = overrideColor;
  v21 = colorTag;
  LODWORD(v18) = (_DWORD)overrideColor;
LABEL_26:
  sub_1C71354((GrandQuestFolderBoardItem_o *)v21, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  return 1;
}


int32_t ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1C71608(0, start);
  v3 = start;
  if ( txt->fields._stringLength > start )
  {
    v5 = 0;
    do
    {
      if ( System_String__get_Chars(txt, v3, 0) == 91 )
      {
        ++v5;
      }
      else if ( System_String__get_Chars(txt, v3, 0) == 93 )
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


UnityEngine_Color_o ScriptMessageLabel__GetColor(System_String_o *colorTag, const MethodInfo *method)
{
  float r; // s8
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w8
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  bool v9; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v13; // s0
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC9431 & 1) == 0 )
  {
    sub_1C713B0(&char___TypeInfo);
    sub_1C713B0(&StringLiteral_369/*"#"*/);
    sub_1C713B0(&StringLiteral_15827/*"[-]"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9431 = 1;
  }
  *(_QWORD *)&v14.fields.r = 0;
  *(_QWORD *)&v14.fields.b = 0;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15827/*"[-]"*/, 0) )
  {
    v4 = sub_1C71458(char___TypeInfo, 2);
    if ( !v4 )
      goto LABEL_14;
    v6 = *(_DWORD *)(v4 + 24);
    v5 = v4;
    if ( !v6 || (*(_WORD *)(v4 + 32) = 91, v6 == 1) )
      sub_1C71610(v4);
    *(_WORD *)(v4 + 34) = 93;
    if ( !colorTag )
LABEL_14:
      sub_1C71608(v4, v5);
    v7 = System_String__Trim_64088288(colorTag, (System_Char_array *)v4, 0);
    v8 = System_String__Concat_64031724((System_String_o *)StringLiteral_369/*"#"*/, v7, 0);
    v9 = UnityEngine_ColorUtility__TryParseHtmlString(v8, &v14, 0);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v9 )
    {
      g = v14.fields.g;
      r = v14.fields.r;
      a = v14.fields.a;
      b = v14.fields.b;
    }
  }
  else
  {
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v13 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v13;
  return result;
}


System_String_o *ScriptMessageLabel__GetCommandName(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1

  if ( (byte_4CC9423 & 1) == 0 )
  {
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    byte_4CC9423 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64109036(v5, 32, 0);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        start < txt->fields._stringLength;
        appended = System_Text_StringBuilder__Append_64118012(v5, (uint16_t)appended, 0) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, start, 0);
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
    sub_1C71608(appended, v7);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
                              v5,
                              v5->klass->vtable._3_ToString.method);
}


int32_t ScriptMessageLabel__GetFontSize(System_String_o *sizeName, int32_t defaultSize, const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptMessageLabel_c *v7; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v9; // x0

  if ( (byte_4CC9418 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    byte_4CC9418 = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_858/*"-"*/, 0) )
  {
    v9 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v9 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v9->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               (Il2CppObject *)sizeName,
               (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1C71608(fontSizes, v5);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v7 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v7 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v7->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_15;
  sizeName = (System_String_o *)StringLiteral_858/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  ScriptMessageLabel_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4CC9419 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    byte_4CC9419 = 1;
  }
  v3 = ScriptMessageLabel_TypeInfo;
  memset(&v7, 0, sizeof(v7));
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v3 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->fontSizes;
  if ( !fontSizes )
    sub_1C71608(0, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v7,
    fontSizes,
    (const MethodInfo_34C2DA0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v7,
            (const MethodInfo_35C7214 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v7.fields._current.fields.value) == size )
    {
      key = v7.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v7,
        (const MethodInfo_35C7338 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v7,
    (const MethodInfo_35C7338 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_858/*"-"*/;
}


float ScriptMessageLabel__GetHorizontalAlignedPosition(
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


ScriptMessageLabel_o *ScriptMessageLabel__GetLogLabel(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_o *imageText; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_String_o *playVoiceAssetName; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_String_o *playVoiceObjectName; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_String_o *colorTag; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4CC942B & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    byte_4CC942B = 1;
  }
  v3 = sub_1C715FC(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_1C71608(v5, v6);
  mainText = this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 120), (int32_t)mainText, v7, v8, v9, v10, v11, v12);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 128), (int32_t)rubyText, v15, v16, v17, v18, v19, v20);
  imageText = this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 136), (int32_t)imageText, v22, v23, v24, v25, v26, v27);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 144), (int32_t)playVoiceAssetName, v29, v30, v31, v32, v33, v34);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 152), (int32_t)playVoiceObjectName, v36, v37, v38, v39, v40, v41);
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 184), (int32_t)setReplayingVoice, v43, v44, v45, v46, v47, v48);
  fontType = this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 88), (int32_t)fontType, v50, v51, v52, v53, v54, v55);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 112), (int32_t)colorTag, v57, v58, v59, v60, v61, v62);
  result = (ScriptMessageLabel_o *)v3;
  *(float *)(v3 + 104) = this->fields.widthSize;
  *(struct UnityEngine_Vector2_o *)(v3 + 72) = this->fields.mainPosition;
  *(struct UnityEngine_Vector2_o *)(v3 + 80) = this->fields.rubyPosition;
  *(float *)(v3 + 108) = this->fields.yOffset;
  *(_BYTE *)(v3 + 192) = this->fields.isPlayingVoice;
  return result;
}


float ScriptMessageLabel__GetLogRangeY(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  return this->fields.mainPosition.fields.y + (float)this->fields.fontSize;
}


System_String_o *ScriptMessageLabel__GetServantChangeName(System_String_array *param, const MethodInfo *method)
{
  System_String_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  int32_t v4; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v9; // x0
  unsigned int v10; // w8

  v2 = param;
  if ( (byte_4CC9427 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    param = (System_String_array *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC9427 = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  max_length = v2->max_length;
  if ( !max_length )
    goto LABEL_27;
  if ( !(_DWORD)max_length )
    goto LABEL_24;
  v4 = System_Int32__Parse(v2->m_Items[0], 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v4,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( SLODWORD(v2->max_length) < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0);
    v10 = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( v10 > 2 )
        return v2->m_Items[2];
LABEL_24:
      sub_1C71610(param);
    }
    if ( v10 <= 1 )
      goto LABEL_24;
    return v2->m_Items[1];
  }
  else
  {
LABEL_27:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CC26AA )
    {
      sub_1C713B0(&LocalizationManager_TypeInfo);
      byte_4CC26AA = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    return v9->static_fields->unknownNameText;
  }
}


System_String_o *ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int stringLength; // w24
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w21
  int v6; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  int32_t v10; // w21
  int v11; // w23
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  System_Text_StringBuilder_o *v15; // x21
  int32_t i; // w22
  _BOOL4 v17; // w23
  System_String_o **v18; // x8
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+20h] [xbp-80h] BYREF

  v2 = txt;
  if ( (byte_4CC9422 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&StringLiteral_25717/*"［"*/);
    txt = (System_String_o *)sub_1C713B0(&StringLiteral_25718/*"］"*/);
    byte_4CC9422 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v2 )
    goto LABEL_46;
  stringLength = v2->fields._stringLength;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( stringLength >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v5, 0) == 91 )
      {
        ++v6;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v5, 0);
        if ( (unsigned __int16)txt == 93 && --v6 < 0 )
        {
          if ( !v4 )
            goto LABEL_46;
          items = v4->fields._items;
          v8 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v5,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
            v6 = 0;
          }
          else
          {
            v6 = 0;
            v4->fields._size = size + 1;
            items->m_Items[size] = v5;
          }
        }
      }
      ++v5;
    }
    while ( stringLength != v5 );
  }
  v10 = stringLength - 1;
  if ( stringLength - 1 >= 0 )
  {
    v11 = 0;
    do
    {
      if ( System_String__get_Chars(v2, v10, 0) == 93 )
      {
        ++v11;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v10, 0);
        if ( (unsigned __int16)txt == 91 && --v11 < 0 )
        {
          if ( !v4 )
            goto LABEL_46;
          v12 = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !v12 )
            goto LABEL_46;
          v14 = v4->fields._size;
          if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v10,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            v11 = 0;
          }
          else
          {
            v11 = 0;
            v4->fields._size = v14 + 1;
            v12->m_Items[v14] = v10;
          }
        }
      }
      --v10;
    }
    while ( v10 >= 0 );
  }
  v15 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v15, 0);
  if ( stringLength < 1 )
  {
    if ( v15 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                  v15,
                                  v15->klass->vtable._3_ToString.method);
LABEL_46:
    sub_1C71608(txt, method);
  }
  if ( !v4 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      v4,
      (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    do
      v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v21.fields._current && v17 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v21,
      (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v2, i, 0);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v17 )
    {
      if ( !v15 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v18 = (System_String_o **)&StringLiteral_25717/*"［"*/;
      else
        v18 = (System_String_o **)&StringLiteral_25718/*"］"*/;
      System_Text_StringBuilder__Append_64115684(v15, *v18, 0);
    }
    else
    {
      if ( !v15 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_64118012(v15, (uint16_t)txt, 0);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                              v15,
                              v15->klass->vtable._3_ToString.method);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  int v5; // w22
  System_String_o *v6; // x20
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v8; // x21
  System_String_o *v9; // x23
  int v10; // w25
  int v11; // w26
  __int16 v12; // w24
  int32_t v13; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_4CC9425 & 1) == 0 )
  {
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    txt = (System_String_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9425 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64109036(v8, stringLength, 0);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 1;
  if ( v6->fields._stringLength <= v5 )
    goto LABEL_28;
  do
  {
    v11 = 0;
    bindex = v5;
    while ( 1 )
    {
      v5 = bindex + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0);
      v12 = (__int16)txt;
      if ( (unsigned __int16)txt != 58 )
      {
        if ( (unsigned __int16)txt == 91 )
        {
          ++v11;
        }
        else if ( (unsigned __int16)txt == 93 && --v11 < 0 )
        {
          goto LABEL_28;
        }
        goto LABEL_14;
      }
      if ( !v11 )
        break;
LABEL_14:
      if ( !v8 )
        goto LABEL_32;
      txt = (System_String_o *)System_Text_StringBuilder__Append_64118012(v8, (uint16_t)txt, 0);
      if ( v12 == 34 )
      {
        if ( v5 < v6->fields._stringLength )
        {
          do
          {
            v13 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_64118012(v8, Chars, 0);
            ++v5;
          }
          while ( v13 < v6->fields._stringLength );
          v5 = v13;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_64118012(v8, 0x22u, 0);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields._stringLength )
        goto LABEL_28;
    }
    if ( v10 == index )
    {
      if ( v8 )
      {
        v9 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                  v8,
                                  v8->klass->vtable._3_ToString.method);
        goto LABEL_27;
      }
LABEL_32:
      sub_1C71608(txt, *(_QWORD *)&bindex);
    }
    if ( !v8 )
      goto LABEL_32;
LABEL_27:
    ++v10;
    System_Text_StringBuilder__set_Length(v8, 0, 0);
  }
  while ( v5 < v6->fields._stringLength );
LABEL_28:
  if ( v10 != index )
    return v9;
  if ( !v8 )
    goto LABEL_32;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                              v8,
                              v8->klass->vtable._3_ToString.method);
}


void ScriptMessageLabel__GetTalkName(
        System_String_o **imageName,
        System_String_o **className,
        System_String_o **charaName,
        int32_t *charaIndex,
        System_String_o *talkName,
        const MethodInfo *method)
{
  unsigned __int64 codeClassSplitStringList; // x0
  MethodInfo *v12; // x1
  ScriptMessageLabel_c *v13; // x8
  System_String_o *v14; // x28
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  ScriptMessageLabel_c *v22; // x8
  __int64 v23; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_array *v31; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  il2cpp_array_size_t max_length; // x8
  int v51; // w9
  int v52; // w28
  Il2CppClass **v53; // x26
  System_String_o **v54; // x26
  unsigned __int64 v55; // t1
  System_String_o *v56; // x26
  int32_t stringLength; // w8
  int32_t v58; // w26
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_String_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_String_o **v74; // x8
  System_String_o **v75; // x0
  System_String_o *v76; // x1
  System_Collections_Generic_List_object__o *v77; // x20
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  il2cpp_array_size_t v84; // x8
  unsigned __int64 i; // x19
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // [xsp+0h] [xbp-90h]
  System_String_o **v92; // [xsp+10h] [xbp-80h]
  int32_t v93; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CC9426 & 1) == 0 )
  {
    sub_1C713B0(&char_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_20243/*"icon_class_{0:D3}"*/);
    sub_1C713B0(&StringLiteral_25713/*"："*/);
    sub_1C713B0(&StringLiteral_11489/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9426 = 1;
  }
  Chars = 0;
  entity = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11489/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0);
  v13 = ScriptMessageLabel_TypeInfo;
  v14 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v13 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v13->static_fields->codeClassSplitStringList )
  {
    v15 = sub_1C71458(string___TypeInfo, 1);
    v22 = ScriptMessageLabel_TypeInfo;
    v23 = v15;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v22 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v23;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->codeClassSplitStringList,
      v23,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1C71608(codeClassSplitStringList, v12);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v14;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(codeClassSplitStringList + 32),
      (int32_t)v14,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v13 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !talkName )
    goto LABEL_63;
  v31 = System_String__Split_64084772(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0);
  *imageName = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)imageName, 0, v32, v33, v34, v35, v36, v37);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)className, StringLiteral_1/*""*/, v38, v39, v40, v41, v42, v43);
  *charaIndex = -1;
  if ( !v31 )
    goto LABEL_63;
  max_length = v31->max_length;
  v51 = max_length - 1;
  if ( (int)max_length - 1 < 1 )
    goto LABEL_42;
  v91 = v14;
  v92 = charaName;
  v52 = 0;
  do
  {
    if ( v52 >= (unsigned int)max_length )
      goto LABEL_64;
    v53 = &v31->obj.klass + v52;
    v55 = (unsigned __int64)v53[4];
    v54 = (System_String_o **)(v53 + 4);
    codeClassSplitStringList = v55;
    if ( !v55 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0);
    if ( (unsigned int)v52 >= LODWORD(v31->max_length) )
      goto LABEL_64;
    v56 = *v54;
    if ( !v56 )
      goto LABEL_63;
    stringLength = v56->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v56, 8, 0);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v56 = System_Char__ToString((uint16_t)&Chars, 0);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v56, v12);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v58 = ScriptMessageLabel__ConvertInteger(v56, v12);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v58,
                                 (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v93 = v58;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
      v60 = System_String__Format((System_String_o *)StringLiteral_20243/*"icon_class_{0:D3}"*/, v59, 0);
      *imageName = v60;
      sub_1C71354((GrandQuestFolderBoardItem_o *)imageName, (int32_t)v60, v61, v62, v63, v64, v65, v66);
      if ( !entity )
        goto LABEL_63;
      v67 = System_String__Concat_64031724(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25713/*"："*/,
              0);
      *className = v67;
      sub_1C71354((GrandQuestFolderBoardItem_o *)className, (int32_t)v67, v68, v69, v70, v71, v72, v73);
    }
LABEL_33:
    max_length = v31->max_length;
    ++v52;
    v51 = max_length - 1;
  }
  while ( v52 < (int)max_length - 1 );
  charaName = v92;
  v14 = v91;
LABEL_42:
  if ( *charaIndex < 0 )
  {
    *charaName = talkName;
    v75 = charaName;
    LODWORD(v76) = (_DWORD)talkName;
  }
  else
  {
    if ( (int)max_length >= 3 )
    {
      v77 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v77,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
      v84 = v31->max_length;
      if ( (int)v84 >= 1 )
      {
        for ( i = 0; (__int64)i < (int)v84; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v84 )
              goto LABEL_64;
            if ( !v77 )
              goto LABEL_63;
            v12 = (MethodInfo *)v31->m_Items[i];
            items = v77->fields._items;
            v87 = Method_System_Collections_Generic_List_string__Add__;
            ++v77->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v77->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v77,
                (Il2CppObject *)v12,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v89 = &items->obj.klass + size;
              v77->fields._size = size + 1;
              v89[4] = (Il2CppClass *)v12;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v12, v78, v79, v80, v81, v82, v83);
            }
          }
          LODWORD(v84) = v31->max_length;
        }
      }
      v90 = System_String__Join_64074316(v14, (System_Collections_Generic_IEnumerable_string__o *)v77, 0);
      LODWORD(v76) = (_DWORD)v90;
      *charaName = v90;
    }
    else
    {
      if ( max_length )
      {
        if ( (_DWORD)max_length )
        {
          v74 = &v31->m_Items[v51];
          goto LABEL_60;
        }
LABEL_64:
        sub_1C71610(codeClassSplitStringList);
      }
      v74 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v76 = *v74;
      *charaName = *v74;
    }
    v75 = charaName;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v75, (int32_t)v76, v44, v45, v46, v47, v48, v49);
}


void ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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

  if ( (byte_4CC941B & 1) == 0 )
  {
    sub_1C713B0(&char___TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC941B = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)dispText,
      StringLiteral_1/*""*/,
      (int32_t)dispText,
      (int32_t)length,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    v13 = 0;
    goto LABEL_44;
  }
  v12 = 0;
  if ( !len )
  {
    v13 = 0;
    goto LABEL_40;
  }
  v13 = 0;
  if ( text->fields._stringLength < 1 )
    goto LABEL_40;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v12, 0) != 91 )
    {
      ++v13;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v12 + 1, 0) == 35 )
      break;
    v14 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v14 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v14->static_fields->LINE_ORDER, 0) )
    {
      v18 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v18 = ScriptMessageLabel_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)v18 + 23) + 8LL);
      if ( v21 )
      {
        v22 = System_String__Substring_64077664(
                text,
                *(_DWORD *)(v21 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v21 + 16),
                0);
        v20 = System_Int32__Parse(v22, 0);
        goto LABEL_39;
      }
LABEL_45:
      sub_1C71608(v18, v15);
    }
    v12 += 2;
    if ( v12 < text->fields._stringLength )
    {
      v16 = 0;
      do
      {
        if ( System_String__get_Chars(text, v12, 0) == 91 )
        {
          ++v16;
        }
        else if ( System_String__get_Chars(text, v12, 0) == 93 )
        {
          if ( !v16 )
            break;
          --v16;
        }
        ++v12;
      }
      while ( v12 < text->fields._stringLength );
    }
LABEL_22:
    ++v12;
    if ( v13 == len || v12 >= text->fields._stringLength )
      goto LABEL_40;
  }
  v17 = System_String__Substring_64077664(text, v12 + 2, text->fields._stringLength - 2, 0);
  v18 = (void *)sub_1C71458(char___TypeInfo, 1);
  if ( !v18 )
    goto LABEL_45;
  v15 = (const MethodInfo *)v18;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_46;
  *((_WORD *)v18 + 16) = 58;
  if ( !v17 )
    goto LABEL_45;
  v18 = System_String__Split_64080816(v17, (System_Char_array *)v18, 0);
  if ( !v18 )
    goto LABEL_45;
  if ( !*((_DWORD *)v18 + 6) )
LABEL_46:
    sub_1C71610(v18);
  v19 = (System_String_o *)*((_QWORD *)v18 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v20 = ScriptMessageLabel__StrlenByDisp(v19, v15);
LABEL_39:
  v13 += v20;
LABEL_40:
  if ( v12 <= text->fields._stringLength )
    v23 = System_String__Substring_64077664(text, 0, v12, 0);
  else
    v23 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v23;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)dispText,
    (int32_t)v23,
    (int32_t)dispText,
    (int32_t)length,
    (System_String_o *)method,
    v5,
    v6,
    v7);
LABEL_44:
  *length = v13;
}


int32_t ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4CC941A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17377/*"bottom"*/);
    sub_1C713B0(&StringLiteral_24239/*"top"*/);
    sub_1C713B0(&StringLiteral_17820/*"center"*/);
    byte_4CC941A = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_24239/*"top"*/, 0) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17820/*"center"*/, 0) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17377/*"bottom"*/, 0) )
    return 2;
  return 0;
}


bool ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
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
  if ( (byte_4CC9421 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    byte_4CC9421 = 1;
  }
  if ( !v2 )
    sub_1C71608(text, method);
  stringLength = v2->fields._stringLength;
  if ( (stringLength | 2) != 0xA )
    return 0;
  Chars = System_String__get_Chars(v2, 0, 0);
  result = 0;
  if ( Chars != 91 )
    return result;
  if ( System_String__get_Chars(v2, stringLength - 1, 0) != 93 )
    return 0;
  v6 = 3;
  do
  {
    v7 = System_String__get_Chars(v2, v6 - 2, 0);
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


bool ScriptMessageLabel__IsColorChar(uint16_t c, const MethodInfo *method)
{
  return (unsigned __int16)(c - 48) < 0xAu || (unsigned __int16)(c - 97) < 6u || (unsigned __int16)(c - 65) < 6u;
}


bool ScriptMessageLabel__IsExistColorTag(System_String_o *txt, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w20
  int32_t v4; // w0
  int32_t v5; // w21
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x21

  v2 = txt;
  if ( (byte_4CC9420 & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    txt = (System_String_o *)sub_1C713B0(&StringLiteral_16058/*"]"*/);
    byte_4CC9420 = 1;
  }
  if ( !v2 )
    sub_1C71608(txt, method);
  v3 = 0;
  while ( v3 < v2->fields._stringLength )
  {
    v4 = System_String__IndexOf_64090132(v2, (System_String_o *)StringLiteral_15808/*"["*/, v3, 0);
    if ( v4 < 0 )
      break;
    v5 = v4;
    v6 = System_String__IndexOf_64090132(v2, (System_String_o *)StringLiteral_16058/*"]"*/, v4, 0);
    if ( v6 < 0 )
      break;
    v3 = v6 + 1;
    v8 = System_String__Substring_64077664(v2, v5, v6 + 1 - v5, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( ScriptMessageLabel__IsColorBeginTag(v8, v7) )
      return 1;
  }
  return 0;
}


void ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21
  _BOOL8 IsBusyVoice; // x0
  __int64 v6; // x1
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  float playVoiceVolume; // s8
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x1

  if ( (byte_4CC9439 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__);
    sub_1C713B0(&SeManager_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC9439 = 1;
  }
  playVoiceAssetName = this->fields.playVoiceAssetName;
  playVoiceObjectName = this->fields.playVoiceObjectName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  IsBusyVoice = SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0);
  if ( IsBusyVoice )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
  }
  else
  {
    setReplayingVoice = this->fields.setReplayingVoice;
    if ( !setReplayingVoice )
      sub_1C71608(IsBusyVoice, v6);
    ((void (__fastcall *)(intptr_t, struct System_String_o *, struct System_String_o *, __int64, intptr_t))setReplayingVoice->fields.invoke_impl)(
      setReplayingVoice->fields.method_code,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      setReplayingVoice->fields.method);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
    v8 = this->fields.playVoiceAssetName;
    v9 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0);
    SoundManager__playVoice_41795520(v8, v9, playVoiceVolume, v11, 0, 0);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v12);
  }
}


void ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v45; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_4CC9429 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9429 = 1;
  }
  this->fields.fontType = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v2, v3, v4, v5, v6, v7);
  v9 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v30, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v37, v38, v39, v40, v41, v42, v43);
  this->fields.isPlayingVoice = 0;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    gameObject = this->fields.main;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    gameObject = this->fields.ruby;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.image;
    if ( !gameObject )
      goto LABEL_31;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))gameObject->klass->vtable._8_set_alpha.methodPtr)(
      gameObject,
      gameObject->klass->vtable._8_set_alpha.method,
      0.0);
  }
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.playVoice;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.playVoiceEffect;
    if ( gameObject )
    {
      gameObject = (UILabel_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C71608(gameObject, v45);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v45);
}


System_String_o *ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w24
  System_String_o *v6; // x20
  int v7; // w25
  int32_t v8; // w22
  int32_t v9; // w0
  int32_t v10; // w21
  System_String_o *v11; // x23
  int32_t v12; // w24
  __int16 v13; // w25

  if ( (byte_4CC941F & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_15827/*"[-]"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC941F = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v5 = 0;
    v6 = text;
LABEL_6:
    v7 = 1 - v5;
    while ( v5 < text->fields._stringLength )
    {
      v8 = v5;
      if ( System_String__get_Chars(text, v5, 0) != 91
        || (++v5, v9 = System_String__IndexOf_64088764(text, 0x5Du, v8 + 1, 0), v9 < 0) )
      {
LABEL_23:
        v10 = v8;
LABEL_24:
        v5 = v10 + 1;
        goto LABEL_6;
      }
      v10 = v9;
      IsNullOrEmpty = System_String__Substring_64077664(text, v8, v9 + v7, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v11 = IsNullOrEmpty;
      --v7;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 0xA )
      {
        v12 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v11, v12, 0);
          v13 = (__int16)IsNullOrEmpty;
          if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          if ( (unsigned __int16)(v13 - 48) >= 0xAu && (unsigned __int16)((v13 & 0xFFDF) - 65) > 5u )
            goto LABEL_23;
          ++v12;
        }
        while ( v12 <= v11->fields._stringLength - 2 );
        if ( v6 )
        {
          IsNullOrEmpty = System_String__Replace_64078288(v6, v11, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( IsNullOrEmpty )
          {
            v6 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_64090116(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_15827/*"[-]"*/,
                                                 0);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_15827/*"[-]"*/ )
            {
              v6 = System_String__Remove(v6, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15827/*"[-]"*/ + 4), 0);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1C71608(IsNullOrEmpty, v4);
      }
    }
    return v6;
  }
  return text;
}


void ScriptMessageLabel__SetLogDraw(
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
  __int64 Component_object; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UILabel_o *v23; // x21
  Il2CppObject *v24; // x0
  __int64 *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UISprite_o *v32; // x20
  UnityEngine_Component_o *v33; // x22
  __int64 v34; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v37; // w1
  const MethodInfo *v38; // x1
  System_String_o *colorTag; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  EventDelegate_Callback_o *v48; // x23
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC942C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ScriptMessageLabel_OnClickPlayVoice__);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__);
    sub_1C713B0(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC942C = 1;
  }
  v14 = sub_1C715FC(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_45;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 16), (int32_t)this, v17, v18, v19, v20, v21, v22);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v23 = (UILabel_o *)Component_object;
  v24 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v14 + 24) = v24;
  v25 = (__int64 *)(v14 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 24), (int32_t)v24, v26, v27, v28, v29, v30, v31);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v32 = (UISprite_o *)Component_object;
  v33 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v34 = sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v34,
    (Il2CppObject *)v14,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *, float))v32->klass->vtable._8_set_alpha.methodPtr)(
      v32,
      v32->klass->vtable._8_set_alpha.method,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMark(v32, imageText, 0);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v32->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v32,
      v32->klass->vtable._33_MakePixelPerfect.method);
    widthSize = this->fields.widthSize;
    v37 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v32, v37, this->fields.fontSize, 0);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    Color = ScriptMessageLabel__GetColor(colorTag, v38);
    UIWidget__set_color((UIWidget_o *)v32, Color, 0);
    if ( !v34 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(
                         *(_QWORD *)(v34 + 64),
                         *(_QWORD *)(v34 + 40));
    if ( !v23 )
      goto LABEL_45;
    UILabel__set_text(v23, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v33 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceEffect,
      (int32_t)playVoiceEffect,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( v33 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v33, 0);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        if ( playVoiceEffect )
        {
          Component_object = (__int64)UnityEngine_GameObject__get_gameObject(playVoiceEffect, 0);
          if ( Component_object )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)Component_object,
              this->fields.isPlayingVoice,
              0);
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v33[8].monitor;
            v48 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v48, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            Component_object = (__int64)EventDelegate__Set_49625676(monitor, v48, 0);
            if ( v23 )
            {
              UILabel__set_text(v23, 0, 0);
              Component_object = *v25;
              if ( *v25 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0, 0);
                if ( v32 )
                {
                  ((void (__fastcall *)(UISprite_o *, const MethodInfo *, float))v32->klass->vtable._8_set_alpha.methodPtr)(
                    v32,
                    v32->klass->vtable._8_set_alpha.method,
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
    sub_1C71608(Component_object, v16);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v23, this->fields.fontType, 0);
  }
  else if ( !v23 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v23, this->fields.fontSize, 0);
  UILabel__set_text(v23, this->fields.mainText, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0);
  if ( !Component_object )
    goto LABEL_45;
  v49.fields.z = 0.0;
  v49.fields.y = -this->fields.yOffset;
  v49.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v49, 0);
  if ( !v34 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(
                       *(_QWORD *)(v34 + 64),
                       *(_QWORD *)(v34 + 40));
  if ( !v32 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *, float))v32->klass->vtable._8_set_alpha.methodPtr)(
                       v32,
                       v32->klass->vtable._8_set_alpha.method,
                       0.0);
  if ( !v33 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v33, 0);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
}


void ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CC943A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC943A = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1C71608(0, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0);
  }
}


void ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CC943B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC943B = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1C71608(0, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0);
  }
}


int32_t ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC941D & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    byte_4CC941D = 1;
  }
  dispText = 0;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v2);
  return length;
}


System_String_o *ScriptMessageLabel__SubstrByDisp(System_String_o *text, int32_t len, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC941C & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    byte_4CC941C = 1;
  }
  dispText = 0;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTextByLen(text, len, &dispText, &length, v3);
  return dispText;
}


void ScriptMessageLabel__UpdateBouten(
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
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  UILabel_o *transform; // x0
  __int64 v58; // x1
  int32_t v59; // w25
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  const MethodInfo *v67; // x3
  float VerticalAlignOffset; // s0
  float v69; // s8
  float v70; // s0
  float y; // s8
  float v72; // s1
  const MethodInfo *v73; // x1
  float v74; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC942F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_25570/*"・"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC942F = 1;
  }
  v15 = System_String__Concat_64031724(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, (int32_t)colorTag, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v30, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v37, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v44, v45, v46, v47, v48, v49, v50);
  this->fields.fontType = font;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)font, v51, v52, v53, v54, v55, v56);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v59 = 0;
    do
    {
      v60 = System_String__Concat_64031724(*p_rubyText, (System_String_o *)StringLiteral_25570/*"・"*/, 0);
      *p_rubyText = v60;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, (int32_t)v60, v61, v62, v63, v64, v65, v66);
      ++v59;
    }
    while ( v59 < mainStr->fields._stringLength );
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  UILabel__set_fontSize(transform, fontSize, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v67);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v69 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v80.fields.x = pos->fields.x;
        v80.fields.z = 0.0;
        v80.fields.y = pos->fields.y - v69;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v80, 0);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1C71608(transform, v58);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v79.fields.x = pos->fields.x;
  v79.fields.y = pos->fields.y;
  v79.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v79, 0);
  this->fields.yOffset = 0.0;
LABEL_24:
  this->fields.mainPosition = *pos;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  UILabel__set_fontSize(transform, fontSize, 0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  UILabel__set_text(transform, *p_rubyText, 0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
                                                         transform,
                                                         transform->klass->vtable._22_get_localSize.method)
                                                     * 0.5))
                                     - (float)(v70 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v72 + v72) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v81.fields.x = this->fields.rubyPosition.fields.x;
  v81.fields.y = this->fields.rubyPosition.fields.y;
  v81.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v81, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v74 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v74;
  pos->fields.x = v74 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v73);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageLabel__UpdateEffect(
        ScriptMessageLabel_o *this,
        UnityEngine_GameObject_o **effect,
        UnityEngine_Vector2_o *pos,
        System_String_o *effectName,
        float ewait,
        int32_t dlength,
        const MethodInfo *method)
{
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
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

  if ( (byte_4CC9435 & 1) == 0 )
  {
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6878/*"FrontCommonUI"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9435 = 1;
  }
  v14 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainText,
    v14,
    (int32_t)pos,
    (int32_t)effectName,
    *(System_String_o **)&dlength,
    (int32_t)method,
    v7,
    v8);
  v15 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v36, v37, v38, v39, v40, v41, v42);
  v43 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v44 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v43;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0, 0) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v48 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v54.fields.z = 0.0;
      v54.fields.x = x;
      v54.fields.y = y;
      CommonEffectManager__CreateParam_44046860(v48, effectName, v54, 0, 0, 0, 0, 0);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v51 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0),
            !v51) )
      {
        sub_1C71608(transform, v49);
      }
      SyncTransformComponent__setChild(v51, (UnityEngine_Transform_o *)transform, 0);
      v52 = this->fields.frontEffect;
      v53 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6878/*"FrontCommonUI"*/, 0);
      GameObjectExtensions__SetLayerRecursively(v52, v53, 0);
    }
  }
}


void ScriptMessageLabel__UpdateImage(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UISprite_o *v48; // x24
  __int64 v49; // x1
  UIWidget_o *transform; // x0
  int32_t v51; // w23
  float v52; // s0
  float v53; // s8
  float v54; // s1
  float v55; // s0
  int32_t v56; // w23
  float x; // s0
  float v58; // s8
  struct UnityEngine_Vector2_o v59; // x8
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC9433 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9433 = 1;
  }
  v14 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainText,
    v14,
    (int32_t)pos,
    fontSize,
    imageStr,
    horizontalAlign,
    (int64_t)method,
    v7);
  v15 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v42, v43, v44, v45, v46, v47);
  this->fields.fontSize = fontSize;
  v48 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v48, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v51 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v53 = v52;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v55 = (float)(v53 * (float)v51) / v54;
  v56 = v55 == INFINITY ? 0x80000000 : (int)v55;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v56, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  v61.fields.b = 1.0;
  v61.fields.a = 1.0;
  UIWidget__set_color(transform, v61, 0);
  x = pos->fields.x;
  v58 = (float)v56;
  if ( horizontalAlign == 2 )
  {
    x = x - v58;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v58 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_20:
    sub_1C71608(transform, v49);
  }
  v60.fields.x = pos->fields.x;
  v60.fields.y = pos->fields.y;
  v60.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v60, 0);
  v59 = *pos;
  this->fields.widthSize = v58;
  this->fields.mainPosition = v59;
  pos->fields.x = pos->fields.x + v58;
  this->fields.dispLength = 1;
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageLabel__UpdateImageRuby(
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
  int32_t v18; // w1
  struct System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  UIWidget_o *transform; // x0
  __int64 v53; // x1
  UISprite_o *v54; // x26
  int32_t v55; // w25
  float v56; // s0
  float v57; // s8
  float v58; // s1
  float v59; // s0
  int32_t v60; // w25
  float x; // s0
  float v62; // s8
  float y; // s9
  float v64; // s1
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC9436 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9436 = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainText,
    v18,
    (int32_t)ruby,
    (int32_t)pos,
    *(System_String_o **)&fontSize,
    (int32_t)imageStr,
    (int64_t)rubyStr,
    (System_String_o *)font);
  v19 = System_String__Concat_64031724(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  this->fields.imageText = imageStr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, (int32_t)imageStr, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v32, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v39, v40, v41, v42, v43, v44, v45);
  this->fields.fontType = font;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)font, v46, v47, v48, v49, v50, v51);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v54 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v54, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v55 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v57 = v56;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v59 = (float)(v57 * (float)v55) / v58;
  v60 = v59 == INFINITY ? 0x80000000 : (int)v59;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v60, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v67.fields.r = 1.0;
  v67.fields.g = 1.0;
  v67.fields.b = 1.0;
  v67.fields.a = 1.0;
  UIWidget__set_color(transform, v67, 0);
  x = pos->fields.x;
  v62 = (float)v60;
  if ( horizontalAlign == 2 )
  {
    x = x - v62;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v62 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_31;
  v65.fields.x = pos->fields.x;
  v65.fields.y = pos->fields.y;
  v65.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v65, 0);
  this->fields.mainPosition = *pos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0) )
  {
    transform = (UIWidget_o *)*ruby;
    if ( !*ruby )
      goto LABEL_31;
    UILabel__set_trueTypeFont((UILabel_o *)transform, font, 0);
  }
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)transform, this->fields.rubyText, 0);
  transform = (UIWidget_o *)*ruby;
  if ( !*ruby
    || (this->fields.rubyPosition.fields.x = (float)((float)(v62 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
                                                       transform,
                                                       transform->klass->vtable._22_get_localSize.method)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method),
        this->fields.rubyPosition.fields.y = y + v64,
        (transform = (UIWidget_o *)*ruby) == 0)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_31:
    sub_1C71608(transform, v53);
  }
  v66.fields.x = this->fields.rubyPosition.fields.x;
  v66.fields.y = this->fields.rubyPosition.fields.y;
  v66.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v66, 0);
  this->fields.widthSize = v62;
  pos->fields.x = pos->fields.x + v62;
  this->fields.dispLength = 1;
}


void ScriptMessageLabel__UpdateImage_45168872(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  ScriptMessageLabel__UpdateImage_45169024(
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


void ScriptMessageLabel__UpdateImage_45169024(
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
  System_String_o *v9; // x7
  float y; // s8
  float x; // s9
  int32_t v19; // w1
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  float v53; // s0
  int32_t v54; // w8
  UISprite_o *v55; // x25
  __int64 v56; // x1
  UIWidget_o *transform; // x0
  int32_t v58; // w24
  float v59; // s0
  float v60; // s10
  float v61; // s1
  float v62; // s0
  int32_t v63; // w24
  float v64; // s0
  float v65; // s10
  int32_t v66; // w8
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4CC9434 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9434 = 1;
  }
  v19 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainText,
    v19,
    (int32_t)pos,
    fontSize,
    imageStr,
    horizontalAlign,
    (int64_t)method,
    v9);
  v20 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v20, v21, v22, v23, v24, v25, v26);
  this->fields.imageText = imageStr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, (int32_t)imageStr, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v33, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v40, v41, v42, v43, v44, v45, v46);
  this->fields.fontType = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v47, v48, v49, v50, v51, v52);
  v53 = (float)fontSize * scale;
  v54 = (int)v53;
  if ( v53 == INFINITY )
    v54 = 0x80000000;
  this->fields.fontSize = v54;
  v55 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v55, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v58 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v60 = v59;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v62 = (float)(v60 * (float)v58) / v61;
  v63 = v62 == INFINITY ? 0x80000000 : (int)v62;
  if ( !transform )
    goto LABEL_22;
  UIWidget__SetDimensions(transform, v63, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  v68.fields.b = 1.0;
  v68.fields.a = 1.0;
  UIWidget__set_color(transform, v68, 0);
  v64 = pos->fields.x;
  v65 = (float)v63;
  if ( horizontalAlign == 2 )
  {
    v64 = v64 - v65;
  }
  else if ( horizontalAlign == 1 )
  {
    v64 = v64 + (float)(v65 * -0.5);
  }
  pos->fields.x = v64;
  v66 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v64;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v66 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_22:
    sub_1C71608(transform, v56);
  }
  v67.fields.x = this->fields.mainPosition.fields.x;
  v67.fields.y = this->fields.mainPosition.fields.y;
  v67.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v67, 0);
  this->fields.widthSize = v65;
  pos->fields.x = pos->fields.x + v65;
  this->fields.dispLength = 1;
}


void ScriptMessageLabel__UpdateLabel(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v60; // x3
  float VerticalAlignOffset; // s0
  float v62; // s8
  const MethodInfo *v63; // x1
  float v64; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC942E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC942E = 1;
  }
  v17 = System_String__Concat_64031724(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)font, v52, v53, v54, v55, v56, v57);
  this->fields.fontSize = fontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_23;
    UILabel__set_trueTypeFont(transform, font, 0);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  UILabel__set_fontSize(transform, fontSize, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize == maxFontSize )
  {
    transform = *main;
    if ( *main )
    {
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v66.fields.x = pos->fields.x;
        v66.fields.y = pos->fields.y;
        v66.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v66, 0);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1C71608(transform, v58);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v60);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v62 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_23;
  v67.fields.x = pos->fields.x;
  v67.fields.z = 0.0;
  v67.fields.y = pos->fields.y - v62;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v67, 0);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v64 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v64;
  pos->fields.x = v64 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v63);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageLabel__UpdateLine(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        int32_t length,
        System_String_o *imageStr,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
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
  float v58; // s8
  struct UnityEngine_Vector2_o v59; // x8
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC9432 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9432 = 1;
  }
  v14 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainText,
    v14,
    (int32_t)pos,
    fontSize,
    *(System_String_o **)&length,
    (int32_t)imageStr,
    (int64_t)method,
    v7);
  v15 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v42, v43, v44, v45, v46, v47);
  this->fields.fontSize = fontSize;
  v48 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v48, imageText, 0);
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  AtlasSprite = UISprite__GetAtlasSprite(transform, 0);
  if ( !AtlasSprite )
    return;
  v53 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v54 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v54, fontSize, 0);
  v56 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Color = ScriptMessageLabel__GetColor(colorTag, v55);
  if ( !v56
    || (UIWidget__set_color(v56, Color, 0),
        v58 = (float)v54,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v54 / (float)v53->fields.width) * 6.0)),
        (transform = *image) == 0)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_16:
    sub_1C71608(transform, v50);
  }
  v60.fields.x = pos->fields.x;
  v60.fields.y = pos->fields.y;
  v60.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v60, 0);
  v59 = *pos;
  this->fields.widthSize = v58;
  this->fields.mainPosition = v59;
  pos->fields.x = pos->fields.x + v58;
  this->fields.dispLength = 1;
}


void ScriptMessageLabel__UpdatePlayVoice(
        ScriptMessageLabel_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_string__string__bool__o *setReplayingVoice,
        const MethodInfo *method)
{
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  ScriptMessageLabel_c *v47; // x0

  if ( (byte_4CC9437 & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9437 = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.setReplayingVoice,
    (int32_t)setReplayingVoice,
    (int32_t)objectName,
    (int32_t)setReplayingVoice,
    (System_String_o *)method,
    v6,
    v7,
    v8);
  v14 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, v21, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v28, v29, v30, v31, v32, v33, v34);
  this->fields.playVoiceAssetName = assetName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName,
    (int32_t)assetName,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.playVoiceObjectName = objectName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName,
    (int32_t)objectName,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.playVoiceVolume = volume;
  v47 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v47 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v47->static_fields->PLAY_VOICE_POSITION_X;
}


void ScriptMessageLabel__UpdateRuby(
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  UILabel_o *transform; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x3
  float VerticalAlignOffset; // s0
  float v64; // s8
  float v65; // s0
  float y; // s8
  float v67; // s1
  const MethodInfo *v68; // x1
  float v69; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC9430 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9430 = 1;
  }
  v19 = System_String__Concat_64031724(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainText, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = System_String__Concat_64031724(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rubyText, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.imageText, v33, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceAssetName, v40, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceObjectName, v47, v48, v49, v50, v51, v52, v53);
  this->fields.fontType = font;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)font, v54, v55, v56, v57, v58, v59);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_33;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0) )
  {
    transform = *main;
    if ( !*main )
      goto LABEL_33;
    UILabel__set_trueTypeFont(transform, font, 0);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_33;
    UILabel__set_trueTypeFont(transform, font, 0);
  }
  if ( isTalkName )
    pos->fields.y = -16.0;
  transform = *main;
  if ( !*main || (UILabel__set_fontSize(transform, fontSize, 0), (transform = *main) == 0) )
LABEL_33:
    sub_1C71608(transform, v61);
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v62);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v64 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v73.fields.x = pos->fields.x;
        v73.fields.z = 0.0;
        v73.fields.y = pos->fields.y - v64;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v73, 0);
        goto LABEL_23;
      }
    }
    goto LABEL_33;
  }
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_33;
  v72.fields.x = pos->fields.x;
  v72.fields.y = pos->fields.y;
  v72.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0);
  this->fields.yOffset = 0.0;
LABEL_23:
  this->fields.mainPosition = *pos;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  UILabel__set_text(transform, this->fields.rubyText, 0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x
                                             + (float)(((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
                                                         transform,
                                                         transform->klass->vtable._22_get_localSize.method)
                                                     * 0.5))
                                     - (float)(v65 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  this->fields.rubyPosition.fields.y = y + v67;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_33;
  v74.fields.x = this->fields.rubyPosition.fields.x;
  v74.fields.y = this->fields.rubyPosition.fields.y;
  v74.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v69 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v69;
  pos->fields.x = v69 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v68);
}


float ScriptMessageLabel__getVerticalAlignOffset(
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


void ScriptMessageLabel___c__DisplayClass60_0___ctor(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageLabel___c__DisplayClass60_0___SetLogDraw_b__0(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  ScriptMessageLabel___c__DisplayClass60_0_o *v2; // x19
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v5; // x8
  struct ScriptMessageLabel_o *v6; // x8
  UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v8; // x9
  struct ScriptMessageLabel_o *v9; // x8
  float32x2_t *v10; // x8
  int v11; // s2 OVERLAPPED
  unsigned __int64 v12; // d0 OVERLAPPED
  int v13; // s1

  v2 = this;
  if ( (byte_4CC943E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC943E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  fontType = (UnityEngine_Object_o *)_4__this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Object__op_Inequality(fontType, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( !v5 )
      goto LABEL_22;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
    if ( !this )
      goto LABEL_22;
    UILabel__set_trueTypeFont((UILabel_o *)this, v5->fields.fontType, 0);
  }
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_22;
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)System_String__op_Inequality(
                                                         v6->fields.rubyText,
                                                         (System_String_o *)StringLiteral_1/*""*/,
                                                         0);
  ruby = v2->fields.ruby;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v2->fields.__4__this;
    if ( v8 )
    {
      if ( ruby )
      {
        UILabel__set_fontSize(v2->fields.ruby, v8->fields.rubySize, 0);
        v9 = v2->fields.__4__this;
        if ( v9 )
        {
          this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v9->fields.rubyText, 0);
            this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
            if ( this )
            {
              this = (ScriptMessageLabel___c__DisplayClass60_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
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
                    0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C71608(this, method);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0);
}