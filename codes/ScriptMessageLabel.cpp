void ScriptMessageLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v4; // w1
  struct ScriptMessageLabel_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_Dictionary_object__int__o *v8; // x19
  __int64 v9; // x0
  struct ScriptMessageLabel_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__int__o *v13; // x19
  struct ScriptMessageLabel_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C399C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_15987/*"[line "*/);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_21514/*"medium"*/);
    sub_1C32C20(&StringLiteral_23548/*"small"*/);
    sub_1C32C20(&StringLiteral_24916/*"x-small"*/);
    sub_1C32C20(&StringLiteral_21166/*"large"*/);
    sub_1C32C20(&StringLiteral_24896/*"x-large"*/);
    byte_4C399C4 = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v4 = StringLiteral_15987/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15987/*"[line "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->LINE_ORDER, v4, v1, v2);
  v5 = ScriptMessageLabel_TypeInfo->static_fields;
  v5->codeClassSplitStringList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->codeClassSplitStringList, 0, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v8 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_861/*"-"*/,
    29,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_24916/*"x-small"*/,
    19,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_23548/*"small"*/,
    24,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_21514/*"medium"*/,
    29,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_21166/*"large"*/,
    48,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_24896/*"x-large"*/,
    64,
    (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v10 = ScriptMessageLabel_TypeInfo->static_fields;
  v10->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fontSizes, (int32_t)v8, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v13 )
LABEL_6:
    sub_1C32E7C(v9);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    24,
    0,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    29,
    1,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    48,
    2,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    64,
    3,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v14 = ScriptMessageLabel_TypeInfo->static_fields;
  v14->fontSizeIndexTable = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->fontSizeIndexTable, (int32_t)v13, v15, v16);
}


void ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C399C3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399C3 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.colorTag, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v18, v19, v20);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_array *ScriptMessageLabel__AnalysTagParam(System_String_o *txt, int32_t bindex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  unsigned __int64 Chars; // x0
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v8; // x22
  int v9; // w25
  int32_t v10; // w1
  __int16 v11; // w23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Text_StringBuilder_o *v17; // x1
  Il2CppClass **v18; // x0
  int v19; // w23
  uint16_t v20; // w0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  System_Text_StringBuilder_o *v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_4C399AB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    byte_4C399AB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v8, stringLength, 0);
  if ( txt->fields._stringLength > bindex )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = bindex++;
      Chars = System_String__get_Chars(txt, v10, 0);
      v11 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v9 )
        goto LABEL_18;
      if ( !v8 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                v8,
                v8->klass->vtable._3_ToString.method);
      if ( !v5 )
        goto LABEL_36;
      items = v5->fields._items;
      v15 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v5->fields._size;
      v17 = (System_Text_StringBuilder_o *)Chars;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Chars,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
      System_Text_StringBuilder__set_Length(v8, 0, 0);
      v9 = 0;
LABEL_25:
      if ( bindex >= txt->fields._stringLength )
        goto LABEL_29;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v9;
    }
    else if ( (unsigned __int16)Chars == 93 && --v9 < 0 )
    {
      goto LABEL_29;
    }
LABEL_18:
    if ( !v8 )
      goto LABEL_36;
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_63605936(v8, Chars, 0);
    if ( v11 == 34 )
    {
      if ( bindex < txt->fields._stringLength )
      {
        do
        {
          v19 = bindex + 1;
          v20 = System_String__get_Chars(txt, bindex, 0);
          if ( v20 == 34 )
            break;
          System_Text_StringBuilder__Append_63605936(v8, v20, 0);
          ++bindex;
        }
        while ( v19 < txt->fields._stringLength );
        bindex = v19;
      }
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_63605936(v8, 0x22u, 0);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v8 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v8, 0);
  if ( (int)Chars < 1 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1C32E7C(Chars);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
            v8,
            v8->klass->vtable._3_ToString.method);
  if ( !v5 )
    goto LABEL_36;
  v23 = v5->fields._items;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v23 )
    goto LABEL_36;
  v25 = v5->fields._size;
  v26 = (System_Text_StringBuilder_o *)Chars;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Chars,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v23->obj.klass + v25;
    v5->fields._size = v25 + 1;
    v27[4] = (Il2CppClass *)v26;
    sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4C399BF & 1) == 0 )
  {
    sub_1C32C20(&SeManager_TypeInfo);
    byte_4C399BF = 1;
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

  if ( (byte_4C399B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (ScriptMessageLabel_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B4 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v12 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v13 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
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
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0);
}


int32_t ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int32_t v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p_effect; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C399B1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C399B1 = 1;
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
    UnityEngine_Object__Destroy_71223640(v5, 0);
    *p_frontEffect = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.frontEffect, 0, v6, v7);
  }
  effect = this->fields.effect;
  p_effect = (CGThumbnailListItem_o *)&this->fields.effect;
  v9 = (UnityEngine_Object_o *)effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(klass, 0);
    p_effect->klass = 0;
    sub_1C32BC4(p_effect, 0, v12, v13);
  }
}


void ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C399AF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C399AF = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    p_fields->main = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v7, v8);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v11, 0);
    *p_ruby = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ruby, 0, v12, v13);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v16, 0);
    *p_image = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.image, 0, v17, v18);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v21, 0);
    *p_playVoice = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoice, 0, v22, v23);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v27, 0);
      *p_playVoiceEffect = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceEffect, 0, v28, v29);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C32E7C(v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v26);
  this->fields.fontType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, 0, v30, v31);
}


bool ScriptMessageLabel__EnforceColorTag(
        System_String_o **colorTag,
        System_String_o **text,
        System_String_o *overrideColor,
        const MethodInfo *method)
{
  bool result; // w0
  System_String_o *v8; // x0
  int Chars; // w8
  int32_t stringLength; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1
  int i; // w24
  uint16_t v15; // w22
  System_String_o **v16; // x0

  if ( (byte_4C399A5 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399A5 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0) )
    return 0;
  v8 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v8, 0, 0);
  result = 0;
  if ( Chars != 91 )
    return result;
  v8 = *text;
  if ( !*text )
LABEL_28:
    sub_1C32E7C(v8);
  stringLength = v8->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v8, (System_String_o *)StringLiteral_15821/*"[-]"*/, 0) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v13) = StringLiteral_1/*""*/;
LABEL_25:
        v16 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v8, stringLength - 1, 0) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v8 = *text;
    if ( !*text )
      goto LABEL_28;
    v15 = System_String__get_Chars(v8, i - 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( (unsigned __int16)(v15 - 48) >= 0xAu && (unsigned __int16)((v15 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v13 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1C32BC4((CGThumbnailListItem_o *)text, (int32_t)overrideColor, v11, v12);
  *colorTag = overrideColor;
  v16 = colorTag;
  LODWORD(v13) = (_DWORD)overrideColor;
LABEL_26:
  sub_1C32BC4((CGThumbnailListItem_o *)v16, (int32_t)v13, v11, v12);
  return 1;
}


int32_t ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1C32E7C(0);
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
  int v5; // w8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  bool v8; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v12; // s0
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C399B8 & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&StringLiteral_370/*"#"*/);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B8 = 1;
  }
  *(_QWORD *)&v13.fields.r = 0;
  *(_QWORD *)&v13.fields.b = 0;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15821/*"[-]"*/, 0) )
  {
    v4 = sub_1C32CC8(char___TypeInfo, 2);
    if ( !v4 )
      goto LABEL_14;
    v5 = *(_DWORD *)(v4 + 24);
    if ( !v5 || (*(_WORD *)(v4 + 32) = 91, v5 == 1) )
      sub_1C32E84(v4);
    *(_WORD *)(v4 + 34) = 93;
    if ( !colorTag )
LABEL_14:
      sub_1C32E7C(v4);
    v6 = System_String__Trim_63575092(colorTag, (System_Char_array *)v4, 0);
    v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_370/*"#"*/, v6, 0);
    v8 = UnityEngine_ColorUtility__TryParseHtmlString(v7, &v13, 0);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v8 )
    {
      g = v13.fields.g;
      r = v13.fields.r;
      a = v13.fields.a;
      b = v13.fields.b;
    }
  }
  else
  {
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v12 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v12;
  return result;
}


System_String_o *ScriptMessageLabel__GetCommandName(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0

  if ( (byte_4C399AA & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    byte_4C399AA = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v5, 32, 0);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        start < txt->fields._stringLength;
        appended = System_Text_StringBuilder__Append_63605936(v5, (uint16_t)appended, 0) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, start, 0);
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
    sub_1C32E7C(appended);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
                              v5,
                              v5->klass->vtable._3_ToString.method);
}


int32_t ScriptMessageLabel__GetFontSize(System_String_o *sizeName, int32_t defaultSize, const MethodInfo *method)
{
  ScriptMessageLabel_c *v6; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v8; // x0

  if ( (byte_4C3999F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    byte_4C3999F = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_861/*"-"*/, 0) )
  {
    v8 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v8 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v8->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               (Il2CppObject *)sizeName,
               (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1C32E7C(fontSizes);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v6 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v6 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v6->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_15;
  sizeName = (System_String_o *)StringLiteral_861/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  ScriptMessageLabel_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C399A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    byte_4C399A0 = 1;
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
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v7,
    fontSizes,
    (const MethodInfo_3450488 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v7,
            (const MethodInfo_3553CF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v7.fields._current.fields.value) == size )
    {
      key = v7.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v7,
        (const MethodInfo_3553E14 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v7,
    (const MethodInfo_3553E14 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_861/*"-"*/;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_o *imageText; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_o *playVoiceAssetName; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *playVoiceObjectName; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *colorTag; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4C399B2 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C399B2 = 1;
  }
  v3 = sub_1C32E6C(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_1C32E7C(v5);
  mainText = this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 120), (int32_t)mainText, v6, v7);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 128), (int32_t)rubyText, v10, v11);
  imageText = this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 136), (int32_t)imageText, v13, v14);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 144), (int32_t)playVoiceAssetName, v16, v17);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 152), (int32_t)playVoiceObjectName, v19, v20);
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 184), (int32_t)setReplayingVoice, v22, v23);
  fontType = this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 88), (int32_t)fontType, v25, v26);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 112), (int32_t)colorTag, v28, v29);
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
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v8; // x0
  unsigned int v9; // w8

  v2 = param;
  if ( (byte_4C399AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    param = (System_String_array *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C399AE = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  max_length = v2->max_length;
  if ( !max_length )
    goto LABEL_27;
  if ( !(_DWORD)max_length )
    goto LABEL_24;
  v4 = System_Int32__Parse(v2->m_Items[0], 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v4,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( SLODWORD(v2->max_length) < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0);
    v9 = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( v9 > 2 )
        return v2->m_Items[2];
LABEL_24:
      sub_1C32E84(param);
    }
    if ( v9 <= 1 )
      goto LABEL_24;
    return v2->m_Items[1];
  }
  else
  {
LABEL_27:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C32D4C )
    {
      sub_1C32C20(&LocalizationManager_TypeInfo);
      byte_4C32D4C = 1;
    }
    v8 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager_TypeInfo;
    }
    return v8->static_fields->unknownNameText;
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
  if ( (byte_4C399A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_25582/*"［"*/);
    txt = (System_String_o *)sub_1C32C20(&StringLiteral_25583/*"］"*/);
    byte_4C399A9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v2 )
    goto LABEL_46;
  stringLength = v2->fields._stringLength;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
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
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
  v15 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v15, 0);
  if ( stringLength < 1 )
  {
    if ( v15 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                  v15,
                                  v15->klass->vtable._3_ToString.method);
LABEL_46:
    sub_1C32E7C(txt);
  }
  if ( !v4 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      v4,
      (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    do
      v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v21.fields._current && v17 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v21,
      (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v2, i, 0);
    if ( v17 )
    {
      if ( !v15 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v18 = (System_String_o **)&StringLiteral_25582/*"［"*/;
      else
        v18 = (System_String_o **)&StringLiteral_25583/*"］"*/;
      System_Text_StringBuilder__Append_63603608(v15, *v18, 0);
    }
    else
    {
      if ( !v15 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_63605936(v15, (uint16_t)txt, 0);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                              v15,
                              v15->klass->vtable._3_ToString.method);
}


System_String_o *ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v8; // x21
  System_String_o *v9; // x23
  int v10; // w25
  int v11; // w26
  int32_t v12; // w1
  __int16 v13; // w24
  int32_t v14; // w24
  uint16_t Chars; // w0

  v6 = txt;
  if ( (byte_4C399AC & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    txt = (System_String_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399AC = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v8, stringLength, 0);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 1;
  if ( v6->fields._stringLength <= bindex )
    goto LABEL_28;
  do
  {
    v11 = 0;
    v12 = bindex;
    while ( 1 )
    {
      bindex = v12 + 1;
      txt = (System_String_o *)System_String__get_Chars(v6, v12, 0);
      v13 = (__int16)txt;
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
      txt = (System_String_o *)System_Text_StringBuilder__Append_63605936(v8, (uint16_t)txt, 0);
      if ( v13 == 34 )
      {
        if ( bindex < v6->fields._stringLength )
        {
          do
          {
            v14 = bindex + 1;
            Chars = System_String__get_Chars(v6, bindex, 0);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_63605936(v8, Chars, 0);
            ++bindex;
          }
          while ( v14 < v6->fields._stringLength );
          bindex = v14;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_63605936(v8, 0x22u, 0);
      }
      v12 = bindex;
      if ( bindex >= v6->fields._stringLength )
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
      sub_1C32E7C(txt);
    }
    if ( !v8 )
      goto LABEL_32;
LABEL_27:
    ++v10;
    System_Text_StringBuilder__set_Length(v8, 0, 0);
  }
  while ( bindex < v6->fields._stringLength );
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
  ScriptMessageLabel_c *v12; // x8
  System_String_o *v13; // x28
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ScriptMessageLabel_c *v17; // x8
  __int64 v18; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_array *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  il2cpp_array_size_t max_length; // x8
  int v30; // w9
  int v31; // w28
  Il2CppClass **v32; // x26
  System_String_o **v33; // x26
  unsigned __int64 v34; // t1
  const MethodInfo *v35; // x1
  System_String_o *v36; // x26
  int32_t stringLength; // w8
  int32_t v38; // w26
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_o **v50; // x8
  System_String_o **v51; // x0
  System_String_o *v52; // x1
  System_Collections_Generic_List_object__o *v53; // x20
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  il2cpp_array_size_t v56; // x8
  unsigned __int64 i; // x19
  Il2CppObject *v58; // x1
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // [xsp+0h] [xbp-90h]
  System_String_o **v65; // [xsp+10h] [xbp-80h]
  int32_t v66; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C399AD & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_20164/*"icon_class_{0:D3}"*/);
    sub_1C32C20(&StringLiteral_25578/*"："*/);
    sub_1C32C20(&StringLiteral_11483/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399AD = 1;
  }
  Chars = 0;
  entity = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11483/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0);
  v12 = ScriptMessageLabel_TypeInfo;
  v13 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v12 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v12->static_fields->codeClassSplitStringList )
  {
    v14 = sub_1C32CC8(string___TypeInfo, 1);
    v17 = ScriptMessageLabel_TypeInfo;
    v18 = v14;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v17 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->codeClassSplitStringList, v18, v15, v16);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1C32E7C(codeClassSplitStringList);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(codeClassSplitStringList + 32), (int32_t)v13, v20, v21);
    v12 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v12->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v12);
  if ( !talkName )
    goto LABEL_63;
  v22 = System_String__Split_63571576(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0);
  *imageName = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)imageName, 0, v23, v24);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)className, StringLiteral_1/*""*/, v25, v26);
  *charaIndex = -1;
  if ( !v22 )
    goto LABEL_63;
  max_length = v22->max_length;
  v30 = max_length - 1;
  if ( (int)max_length - 1 < 1 )
    goto LABEL_42;
  v64 = v13;
  v65 = charaName;
  v31 = 0;
  do
  {
    if ( v31 >= (unsigned int)max_length )
      goto LABEL_64;
    v32 = &v22->obj.klass + v31;
    v34 = (unsigned __int64)v32[4];
    v33 = (System_String_o **)(v32 + 4);
    codeClassSplitStringList = v34;
    if ( !v34 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0);
    if ( (unsigned int)v31 >= LODWORD(v22->max_length) )
      goto LABEL_64;
    v36 = *v33;
    if ( !v36 )
      goto LABEL_63;
    stringLength = v36->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v36, 8, 0);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v36 = System_Char__ToString((uint16_t)&Chars, 0);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v36, v35);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v38 = ScriptMessageLabel__ConvertInteger(v36, v35);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v38,
                                 (const MethodInfo_3396884 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v66 = v38;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v27, v28, v39, v40, v41, v42);
      v44 = System_String__Format((System_String_o *)StringLiteral_20164/*"icon_class_{0:D3}"*/, v43, 0);
      *imageName = v44;
      sub_1C32BC4((CGThumbnailListItem_o *)imageName, (int32_t)v44, v45, v46);
      if ( !entity )
        goto LABEL_63;
      v47 = System_String__Concat_63518544(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25578/*"："*/,
              0);
      *className = v47;
      sub_1C32BC4((CGThumbnailListItem_o *)className, (int32_t)v47, v48, v49);
    }
LABEL_33:
    max_length = v22->max_length;
    ++v31;
    v30 = max_length - 1;
  }
  while ( v31 < (int)max_length - 1 );
  charaName = v65;
  v13 = v64;
LABEL_42:
  if ( *charaIndex < 0 )
  {
    *charaName = talkName;
    v51 = charaName;
    LODWORD(v52) = (_DWORD)talkName;
  }
  else
  {
    if ( (int)max_length >= 3 )
    {
      v53 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v53,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
      v56 = v22->max_length;
      if ( (int)v56 >= 1 )
      {
        for ( i = 0; (__int64)i < (int)v56; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v56 )
              goto LABEL_64;
            if ( !v53 )
              goto LABEL_63;
            v58 = (Il2CppObject *)v22->m_Items[i];
            items = v53->fields._items;
            v60 = Method_System_Collections_Generic_List_string__Add__;
            ++v53->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v53->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v53,
                v58,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = &items->obj.klass + size;
              v53->fields._size = size + 1;
              v62[4] = (Il2CppClass *)v58;
              sub_1C32BC4((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v58, v54, v55);
            }
          }
          LODWORD(v56) = v22->max_length;
        }
      }
      v63 = System_String__Join_63561120(v13, (System_Collections_Generic_IEnumerable_string__o *)v53, 0);
      LODWORD(v52) = (_DWORD)v63;
      *charaName = v63;
    }
    else
    {
      if ( max_length )
      {
        if ( (_DWORD)max_length )
        {
          v50 = &v22->m_Items[v30];
          goto LABEL_60;
        }
LABEL_64:
        sub_1C32E84(codeClassSplitStringList);
      }
      v50 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v52 = *v50;
      *charaName = *v50;
    }
    v51 = charaName;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v51, (int32_t)v52, v27, v28);
}


void ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  int32_t v9; // w22
  int32_t v10; // w24
  ScriptMessageLabel_c *v11; // x0
  int v12; // w26
  System_String_o *v13; // x23
  void *v14; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x23
  int32_t v17; // w0
  __int64 v18; // x8
  System_String_o *v19; // x0
  System_String_o *v20; // x1

  if ( (byte_4C399A2 & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399A2 = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)dispText, StringLiteral_1/*""*/, (int32_t)dispText, (const MethodInfo *)length);
    v10 = 0;
    goto LABEL_44;
  }
  v9 = 0;
  if ( !len )
  {
    v10 = 0;
    goto LABEL_40;
  }
  v10 = 0;
  if ( text->fields._stringLength < 1 )
    goto LABEL_40;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v9, 0) != 91 )
    {
      ++v10;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v9 + 1, 0) == 35 )
      break;
    v11 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v11 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v11->static_fields->LINE_ORDER, 0) )
    {
      v14 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v14 = ScriptMessageLabel_TypeInfo;
      }
      v18 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 8LL);
      if ( v18 )
      {
        v19 = System_String__Substring_63564468(
                text,
                *(_DWORD *)(v18 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v18 + 16),
                0);
        v17 = System_Int32__Parse(v19, 0);
        goto LABEL_39;
      }
LABEL_45:
      sub_1C32E7C(v14);
    }
    v9 += 2;
    if ( v9 < text->fields._stringLength )
    {
      v12 = 0;
      do
      {
        if ( System_String__get_Chars(text, v9, 0) == 91 )
        {
          ++v12;
        }
        else if ( System_String__get_Chars(text, v9, 0) == 93 )
        {
          if ( !v12 )
            break;
          --v12;
        }
        ++v9;
      }
      while ( v9 < text->fields._stringLength );
    }
LABEL_22:
    ++v9;
    if ( v10 == len || v9 >= text->fields._stringLength )
      goto LABEL_40;
  }
  v13 = System_String__Substring_63564468(text, v9 + 2, text->fields._stringLength - 2, 0);
  v14 = (void *)sub_1C32CC8(char___TypeInfo, 1);
  if ( !v14 )
    goto LABEL_45;
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_46;
  *((_WORD *)v14 + 16) = 58;
  if ( !v13 )
    goto LABEL_45;
  v14 = System_String__Split_63567620(v13, (System_Char_array *)v14, 0);
  if ( !v14 )
    goto LABEL_45;
  if ( !*((_DWORD *)v14 + 6) )
LABEL_46:
    sub_1C32E84(v14);
  v16 = (System_String_o *)*((_QWORD *)v14 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v17 = ScriptMessageLabel__StrlenByDisp(v16, v15);
LABEL_39:
  v10 += v17;
LABEL_40:
  if ( v9 <= text->fields._stringLength )
    v20 = System_String__Substring_63564468(text, 0, v9, 0);
  else
    v20 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)dispText, (int32_t)v20, (int32_t)dispText, (const MethodInfo *)length);
LABEL_44:
  *length = v10;
}


int32_t ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4C399A1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17354/*"bottom"*/);
    sub_1C32C20(&StringLiteral_24117/*"top"*/);
    sub_1C32C20(&StringLiteral_17791/*"center"*/);
    byte_4C399A1 = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_24117/*"top"*/, 0) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17791/*"center"*/, 0) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17354/*"bottom"*/, 0) )
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
  if ( (byte_4C399A8 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C399A8 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(text);
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
  if ( (byte_4C399A7 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    txt = (System_String_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C399A7 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(txt);
  v3 = 0;
  while ( v3 < v2->fields._stringLength )
  {
    v4 = System_String__IndexOf_63576936(v2, (System_String_o *)StringLiteral_15802/*"["*/, v3, 0);
    if ( v4 < 0 )
      break;
    v5 = v4;
    v6 = System_String__IndexOf_63576936(v2, (System_String_o *)StringLiteral_16056/*"]"*/, v4, 0);
    if ( v6 < 0 )
      break;
    v3 = v6 + 1;
    v8 = System_String__Substring_63564468(v2, v5, v6 + 1 - v5, 0);
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
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  float playVoiceVolume; // s8
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x1

  if ( (byte_4C399C0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__);
    sub_1C32C20(&SeManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C399C0 = 1;
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
      sub_1C32E7C(IsBusyVoice);
    ((void (__fastcall *)(intptr_t, struct System_String_o *, struct System_String_o *, __int64, intptr_t))setReplayingVoice->fields.invoke_impl)(
      setReplayingVoice->fields.method_code,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      setReplayingVoice->fields.method);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
    v7 = this->fields.playVoiceAssetName;
    v8 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0);
    SoundManager__playVoice_41418932(v7, v8, playVoiceVolume, v10, 0, 0);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v11);
  }
}


void ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *main; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20
  const MethodInfo *v26; // x1

  if ( (byte_4C399B0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B0 = 1;
  }
  this->fields.fontType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, 0, v2, v3);
  v5 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v5, v6, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v8, v9, v10);
  v11 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v11, v12, v13);
  v14 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v17, v18, v19);
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
    sub_1C32E7C(gameObject);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v26);
}


System_String_o *ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  int32_t v4; // w24
  System_String_o *v5; // x20
  int v6; // w25
  int32_t v7; // w22
  int32_t v8; // w0
  int32_t v9; // w21
  System_String_o *v10; // x23
  int32_t v11; // w24
  __int16 v12; // w25

  if ( (byte_4C399A6 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399A6 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v4 = 0;
    v5 = text;
LABEL_6:
    v6 = 1 - v4;
    while ( v4 < text->fields._stringLength )
    {
      v7 = v4;
      if ( System_String__get_Chars(text, v4, 0) != 91
        || (++v4, v8 = System_String__IndexOf_63575568(text, 0x5Du, v7 + 1, 0), v8 < 0) )
      {
LABEL_23:
        v9 = v7;
LABEL_24:
        v4 = v9 + 1;
        goto LABEL_6;
      }
      v9 = v8;
      IsNullOrEmpty = System_String__Substring_63564468(text, v7, v8 + v6, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v10 = IsNullOrEmpty;
      --v6;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 0xA )
      {
        v11 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v10, v11, 0);
          v12 = (__int16)IsNullOrEmpty;
          if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          if ( (unsigned __int16)(v12 - 48) >= 0xAu && (unsigned __int16)((v12 & 0xFFDF) - 65) > 5u )
            goto LABEL_23;
          ++v11;
        }
        while ( v11 <= v10->fields._stringLength - 2 );
        if ( v5 )
        {
          IsNullOrEmpty = System_String__Replace_63565092(v5, v10, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( IsNullOrEmpty )
          {
            v5 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_63576920(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_15821/*"[-]"*/,
                                                 0);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_15821/*"[-]"*/ )
            {
              v5 = System_String__Remove(v5, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15821/*"[-]"*/ + 4), 0);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1C32E7C(IsNullOrEmpty);
      }
    }
    return v5;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *v18; // x21
  Il2CppObject *v19; // x0
  __int64 *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UISprite_o *v23; // x20
  UnityEngine_Component_o *v24; // x22
  __int64 v25; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v28; // w1
  const MethodInfo *v29; // x1
  System_String_o *colorTag; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  EventDelegate_Callback_o *v35; // x23
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C399B3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageLabel_OnClickPlayVoice__);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__);
    sub_1C32C20(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B3 = 1;
  }
  v14 = sub_1C32E6C(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_45;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v18 = (UILabel_o *)Component_object;
  v19 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v14 + 24) = v19;
  v20 = (__int64 *)(v14 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 24), (int32_t)v19, v21, v22);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v23 = (UISprite_o *)Component_object;
  v24 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v25 = sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v25,
    (Il2CppObject *)v14,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *, float))v23->klass->vtable._8_set_alpha.methodPtr)(
      v23,
      v23->klass->vtable._8_set_alpha.method,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMark(v23, imageText, 0);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v23->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v23,
      v23->klass->vtable._33_MakePixelPerfect.method);
    widthSize = this->fields.widthSize;
    v28 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v23, v28, this->fields.fontSize, 0);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    Color = ScriptMessageLabel__GetColor(colorTag, v29);
    UIWidget__set_color((UIWidget_o *)v23, Color, 0);
    if ( !v25 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(
                         *(_QWORD *)(v25 + 64),
                         *(_QWORD *)(v25 + 40));
    if ( !v18 )
      goto LABEL_45;
    UILabel__set_text(v18, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v24 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceEffect, (int32_t)playVoiceEffect, v31, v32);
    if ( v24 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v24, 0);
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
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v24[8].monitor;
            v35 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v35, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            Component_object = (__int64)EventDelegate__Set_49215508(monitor, v35, 0);
            if ( v18 )
            {
              UILabel__set_text(v18, 0, 0);
              Component_object = *v20;
              if ( *v20 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0, 0);
                if ( v23 )
                {
                  ((void (__fastcall *)(UISprite_o *, const MethodInfo *, float))v23->klass->vtable._8_set_alpha.methodPtr)(
                    v23,
                    v23->klass->vtable._8_set_alpha.method,
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
    sub_1C32E7C(Component_object);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v18, this->fields.fontType, 0);
  }
  else if ( !v18 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v18, this->fields.fontSize, 0);
  UILabel__set_text(v18, this->fields.mainText, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
  if ( !Component_object )
    goto LABEL_45;
  v36.fields.z = 0.0;
  v36.fields.y = -this->fields.yOffset;
  v36.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v36, 0);
  if ( !v25 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(
                       *(_QWORD *)(v25 + 64),
                       *(_QWORD *)(v25 + 40));
  if ( !v23 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *, float))v23->klass->vtable._8_set_alpha.methodPtr)(
                       v23,
                       v23->klass->vtable._8_set_alpha.method,
                       0.0);
  if ( !v24 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v24, 0);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
}


void ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C399C1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C399C1 = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v4, 1, 0);
  }
}


void ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C399C2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C399C2 = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v4, 0, 0);
  }
}


int32_t ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C399A4 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C399A4 = 1;
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

  if ( (byte_4C399A3 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C399A3 = 1;
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
  const MethodInfo *v17; // x3
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UILabel_o *transform; // x0
  int32_t v34; // w25
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  float VerticalAlignOffset; // s0
  float v40; // s8
  float v41; // s0
  float y; // s8
  float v43; // s1
  const MethodInfo *v44; // x1
  float v45; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C399B6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_25435/*"・"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B6 = 1;
  }
  v15 = System_String__Concat_63518544(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, (int32_t)v15, v16, v17);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, (int32_t)colorTag, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v22, v23, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v28, v29, v30);
  this->fields.fontType = font;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v31, v32);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v34 = 0;
    do
    {
      v35 = System_String__Concat_63518544(*p_rubyText, (System_String_o *)StringLiteral_25435/*"・"*/, 0);
      *p_rubyText = v35;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, (int32_t)v35, v36, v37);
      ++v34;
    }
    while ( v34 < mainStr->fields._stringLength );
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
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v38);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v40 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v51.fields.x = pos->fields.x;
        v51.fields.z = 0.0;
        v51.fields.y = pos->fields.y - v40;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1C32E7C(transform);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v50.fields.x = pos->fields.x;
  v50.fields.y = pos->fields.y;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0);
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
                                     - (float)(v41 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v43 + v43) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v52.fields.x = this->fields.rubyPosition.fields.x;
  v52.fields.y = this->fields.rubyPosition.fields.y;
  v52.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v52, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v45 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v45;
  pos->fields.x = v45 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v44);
}


void ScriptMessageLabel__UpdateEffect(
        ScriptMessageLabel_o *this,
        UnityEngine_GameObject_o **effect,
        UnityEngine_Vector2_o *pos,
        System_String_o *effectName,
        float ewait,
        int32_t dlength,
        const MethodInfo *method)
{
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UnityEngine_Vector2_o v25; // x8
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v30; // x21
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x19
  int32_t v34; // w1
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C399BC & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6882/*"FrontCommonUI"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399BC = 1;
  }
  v12 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v12, (int32_t)pos, (const MethodInfo *)effectName);
  v13 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v16, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  v25 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v26 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v25;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0, 0) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v30 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v35.fields.z = 0.0;
      v35.fields.x = x;
      v35.fields.y = y;
      CommonEffectManager__CreateParam_43652328(v30, effectName, v35, 0, 0, 0, 0, 0);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v32 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0),
            !v32) )
      {
        sub_1C32E7C(transform);
      }
      SyncTransformComponent__setChild(v32, (UnityEngine_Transform_o *)transform, 0);
      v33 = this->fields.frontEffect;
      v34 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6882/*"FrontCommonUI"*/, 0);
      GameObjectExtensions__SetLayerRecursively(v33, v34, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageLabel__UpdateImage(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  int32_t v13; // w1
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UISprite_o *v27; // x24
  UIWidget_o *transform; // x0
  int32_t v29; // w23
  float v30; // s0
  float v31; // s8
  float v32; // s1
  float v33; // s0
  int32_t v34; // w23
  float x; // s0
  float v36; // s8
  struct UnityEngine_Vector2_o v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C399BA & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399BA = 1;
  }
  v13 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v13, (int32_t)pos, *(const MethodInfo **)&fontSize);
  v14 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v14, v15, v16);
  this->fields.imageText = imageStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, (int32_t)imageStr, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  this->fields.fontType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, 0, v25, v26);
  this->fields.fontSize = fontSize;
  v27 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v27, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v29 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v31 = v30;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v33 = (float)(v31 * (float)v29) / v32;
  v34 = v33 == INFINITY ? 0x80000000 : (int)v33;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v34, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v39.fields.r = 1.0;
  v39.fields.g = 1.0;
  v39.fields.b = 1.0;
  v39.fields.a = 1.0;
  UIWidget__set_color(transform, v39, 0);
  x = pos->fields.x;
  v36 = (float)v34;
  if ( horizontalAlign == 2 )
  {
    x = x - v36;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v36 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_20:
    sub_1C32E7C(transform);
  }
  v38.fields.x = pos->fields.x;
  v38.fields.y = pos->fields.y;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v38, 0);
  v37 = *pos;
  this->fields.widthSize = v36;
  this->fields.mainPosition = v37;
  pos->fields.x = pos->fields.x + v36;
  this->fields.dispLength = 1;
}


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
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UIWidget_o *transform; // x0
  UISprite_o *v33; // x26
  int32_t v34; // w25
  float v35; // s0
  float v36; // s8
  float v37; // s1
  float v38; // s0
  int32_t v39; // w25
  float x; // s0
  float v41; // s8
  float y; // s9
  float v43; // s1
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C399BD & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399BD = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v18, (int32_t)ruby, (const MethodInfo *)pos);
  v19 = System_String__Concat_63518544(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, (int32_t)v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v24, v25, v26);
  v27 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v27, v28, v29);
  this->fields.fontType = font;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v30, v31);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v33 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v33, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v34 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v36 = v35;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v38 = (float)(v36 * (float)v34) / v37;
  v39 = v38 == INFINITY ? 0x80000000 : (int)v38;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v39, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v46.fields.r = 1.0;
  v46.fields.g = 1.0;
  v46.fields.b = 1.0;
  v46.fields.a = 1.0;
  UIWidget__set_color(transform, v46, 0);
  x = pos->fields.x;
  v41 = (float)v39;
  if ( horizontalAlign == 2 )
  {
    x = x - v41;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v41 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_31;
  v44.fields.x = pos->fields.x;
  v44.fields.y = pos->fields.y;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v41 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
                                                       transform,
                                                       transform->klass->vtable._22_get_localSize.method)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method),
        this->fields.rubyPosition.fields.y = y + v43,
        (transform = (UIWidget_o *)*ruby) == 0)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_31:
    sub_1C32E7C(transform);
  }
  v45.fields.x = this->fields.rubyPosition.fields.x;
  v45.fields.y = this->fields.rubyPosition.fields.y;
  v45.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v45, 0);
  this->fields.widthSize = v41;
  pos->fields.x = pos->fields.x + v41;
  this->fields.dispLength = 1;
}


void ScriptMessageLabel__UpdateImage_44765884(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  ScriptMessageLabel__UpdateImage_44766036(
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
void ScriptMessageLabel__UpdateImage_44766036(
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
  float y; // s8
  float x; // s9
  int32_t v18; // w1
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  float v32; // s0
  int32_t v33; // w8
  UISprite_o *v34; // x25
  UIWidget_o *transform; // x0
  int32_t v36; // w24
  float v37; // s0
  float v38; // s10
  float v39; // s1
  float v40; // s0
  int32_t v41; // w24
  float v42; // s0
  float v43; // s10
  int32_t v44; // w8
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4C399BB & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399BB = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v18, (int32_t)pos, *(const MethodInfo **)&fontSize);
  v19 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v24, v25, v26);
  v27 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v27, v28, v29);
  this->fields.fontType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, 0, v30, v31);
  v32 = (float)fontSize * scale;
  v33 = (int)v32;
  if ( v32 == INFINITY )
    v33 = 0x80000000;
  this->fields.fontSize = v33;
  v34 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v34, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v36 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v38 = v37;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v40 = (float)(v38 * (float)v36) / v39;
  v41 = v40 == INFINITY ? 0x80000000 : (int)v40;
  if ( !transform )
    goto LABEL_22;
  UIWidget__SetDimensions(transform, v41, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v46.fields.r = 1.0;
  v46.fields.g = 1.0;
  v46.fields.b = 1.0;
  v46.fields.a = 1.0;
  UIWidget__set_color(transform, v46, 0);
  v42 = pos->fields.x;
  v43 = (float)v41;
  if ( horizontalAlign == 2 )
  {
    v42 = v42 - v43;
  }
  else if ( horizontalAlign == 1 )
  {
    v42 = v42 + (float)(v43 * -0.5);
  }
  pos->fields.x = v42;
  v44 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v42;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v44 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_22:
    sub_1C32E7C(transform);
  }
  v45.fields.x = this->fields.mainPosition.fields.x;
  v45.fields.y = this->fields.mainPosition.fields.y;
  v45.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v45, 0);
  this->fields.widthSize = v43;
  pos->fields.x = pos->fields.x + v43;
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
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UILabel_o *transform; // x0
  const MethodInfo *v35; // x3
  float VerticalAlignOffset; // s0
  float v37; // s8
  const MethodInfo *v38; // x1
  float v39; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C399B5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B5 = 1;
  }
  v17 = System_String__Concat_63518544(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, (int32_t)v17, v18, v19);
  v20 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v20, v21, v22);
  v23 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v23, v24, v25);
  v26 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v26, v27, v28);
  v29 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v29, v30, v31);
  this->fields.fontType = font;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v32, v33);
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
        v41.fields.x = pos->fields.x;
        v41.fields.y = pos->fields.y;
        v41.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v41, 0);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1C32E7C(transform);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v35);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v37 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_23;
  v42.fields.x = pos->fields.x;
  v42.fields.z = 0.0;
  v42.fields.y = pos->fields.y - v37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v39 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v39;
  pos->fields.x = v39 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v38);
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
  int32_t v13; // w1
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UISprite_o *v27; // x24
  System_String_o *imageText; // x25
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v31; // x24
  int32_t v32; // w23
  const MethodInfo *v33; // x1
  UIWidget_o *v34; // x22
  System_String_o *colorTag; // x25
  float v36; // s8
  struct UnityEngine_Vector2_o v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C399B9 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B9 = 1;
  }
  v13 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v13, (int32_t)pos, *(const MethodInfo **)&fontSize);
  v14 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v14, v15, v16);
  this->fields.imageText = imageStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, (int32_t)imageStr, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  this->fields.fontType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, 0, v25, v26);
  this->fields.fontSize = fontSize;
  v27 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v27, imageText, 0);
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
  v31 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v32 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v32, fontSize, 0);
  v34 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Color = ScriptMessageLabel__GetColor(colorTag, v33);
  if ( !v34
    || (UIWidget__set_color(v34, Color, 0),
        v36 = (float)v32,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v32 / (float)v31->fields.width) * 6.0)),
        (transform = *image) == 0)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_16:
    sub_1C32E7C(transform);
  }
  v38.fields.x = pos->fields.x;
  v38.fields.y = pos->fields.y;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v38, 0);
  v37 = *pos;
  this->fields.widthSize = v36;
  this->fields.mainPosition = v37;
  pos->fields.x = pos->fields.x + v36;
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
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ScriptMessageLabel_c *v24; // x0

  if ( (byte_4C399BE & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399BE = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.setReplayingVoice,
    (int32_t)setReplayingVoice,
    (int32_t)objectName,
    (const MethodInfo *)setReplayingVoice);
  v11 = StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, v11, v12, v13);
  v14 = StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v17, v18, v19);
  this->fields.playVoiceAssetName = assetName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, (int32_t)assetName, v20, v21);
  this->fields.playVoiceObjectName = objectName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, (int32_t)objectName, v22, v23);
  this->fields.playVoiceVolume = volume;
  v24 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v24 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v24->static_fields->PLAY_VOICE_POSITION_X;
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
  const MethodInfo *v21; // x3
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UILabel_o *transform; // x0
  const MethodInfo *v37; // x3
  float VerticalAlignOffset; // s0
  float v39; // s8
  float v40; // s0
  float y; // s8
  float v42; // s1
  const MethodInfo *v43; // x1
  float v44; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C399B7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399B7 = 1;
  }
  v19 = System_String__Concat_63518544(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainText, (int32_t)v19, v20, v21);
  v22 = System_String__Concat_63518544(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyText, (int32_t)v22, v23, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageText, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playVoiceObjectName, v31, v32, v33);
  this->fields.fontType = font;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v34, v35);
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
    sub_1C32E7C(transform);
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize != maxFontSize )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v37);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v39 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v48.fields.x = pos->fields.x;
        v48.fields.z = 0.0;
        v48.fields.y = pos->fields.y - v39;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v48, 0);
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
  v47.fields.x = pos->fields.x;
  v47.fields.y = pos->fields.y;
  v47.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v47, 0);
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
                                     - (float)(v40 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  this->fields.rubyPosition.fields.y = y + v42;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_33;
  v49.fields.x = this->fields.rubyPosition.fields.x;
  v49.fields.y = this->fields.rubyPosition.fields.y;
  v49.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v44 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v44;
  pos->fields.x = v44 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v43);
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
  if ( (byte_4C399C5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C399C5 = 1;
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
    sub_1C32E7C(this);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0);
}