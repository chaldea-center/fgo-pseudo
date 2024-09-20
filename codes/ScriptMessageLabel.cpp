void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v4; // w1
  struct ScriptMessageLabel_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_Dictionary_object__int__o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  struct ScriptMessageLabel_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_Dictionary_int__int__o *v14; // x19
  struct ScriptMessageLabel_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5CDA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_15997/*"[line "*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_21372/*"medium"*/);
    sub_1B885B0(&StringLiteral_23376/*"small"*/);
    sub_1B885B0(&StringLiteral_24800/*"x-small"*/);
    sub_1B885B0(&StringLiteral_21039/*"large"*/);
    sub_1B885B0(&StringLiteral_24780/*"x-large"*/);
    byte_4A5CDA7 = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v4 = StringLiteral_15997/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15997/*"[line "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->LINE_ORDER, v4, v1, v2);
  v5 = ScriptMessageLabel_TypeInfo->static_fields;
  v5->codeClassSplitStringList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->codeClassSplitStringList, 0, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v8 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_919/*"-"*/,
    29,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_24800/*"x-small"*/,
    19,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_23376/*"small"*/,
    24,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_21372/*"medium"*/,
    29,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_21039/*"large"*/,
    48,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v8,
    (Il2CppObject *)StringLiteral_24780/*"x-large"*/,
    64,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v11 = ScriptMessageLabel_TypeInfo->static_fields;
  v11->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fontSizes, (int32_t)v8, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
LABEL_6:
    sub_1B8880C(v9, v10);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    24,
    0,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    29,
    1,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    48,
    2,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    64,
    3,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v15 = ScriptMessageLabel_TypeInfo->static_fields;
  v15->fontSizeIndexTable = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fontSizeIndexTable, (int32_t)v14, v16, v17);
}


void __fastcall ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5CDA6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CDA6 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorTag, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v18, v19, v20);
  this->fields.playVoiceVolume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_array *__fastcall ScriptMessageLabel__AnalysTagParam(
        System_String_o *txt,
        int32_t bindex,
        const MethodInfo *method)
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
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  System_Text_StringBuilder_o *v18; // x1
  Il2CppClass **v19; // x0
  int v20; // w23
  uint16_t v21; // w0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Text_StringBuilder_o *v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4A5CD8E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    byte_4A5CD8E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v9, stringLength, 0LL);
  if ( txt->fields._stringLength > bindex )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = bindex++;
      Chars = System_String__get_Chars(txt, v11, 0LL);
      v12 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v10 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                v9,
                v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v5 )
        goto LABEL_36;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v5->fields._size;
      v18 = (System_Text_StringBuilder_o *)Chars;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Chars,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
      }
      System_Text_StringBuilder__set_Length(v9, 0, 0LL);
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
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_60871256(v9, Chars, 0LL);
    if ( v12 == 34 )
    {
      if ( bindex < txt->fields._stringLength )
      {
        do
        {
          v20 = bindex + 1;
          v21 = System_String__get_Chars(txt, bindex, 0LL);
          if ( v21 == 34 )
            break;
          System_Text_StringBuilder__Append_60871256(v9, v21, 0LL);
          ++bindex;
        }
        while ( v20 < txt->fields._stringLength );
        bindex = v20;
      }
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_60871256(v9, 0x22u, 0LL);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v9 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v9, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1B8880C(Chars, v7);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
            v9,
            v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v5 )
    goto LABEL_36;
  v24 = v5->fields._items;
  v25 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v24 )
    goto LABEL_36;
  v26 = v5->fields._size;
  v27 = (System_Text_StringBuilder_o *)Chars;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Chars,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v24->obj.klass + v26;
    v5->fields._size = v26 + 1;
    v28[4] = (Il2CppClass *)v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_4A5CDA2 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5CDA2 = 1;
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
  UILabel_o *v12; // x23
  UILabel_o *v13; // x22
  ScriptMessageLabel_o *v14; // x21

  if ( (byte_4A5CD97 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (ScriptMessageLabel_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD97 = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v12 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v13 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
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
    sub_1B8880C(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p_effect; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5CD94 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CD94 = 1;
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
    UnityEngine_Object__Destroy_69459380(v5, 0LL);
    *p_frontEffect = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.frontEffect, 0, v6, v7);
  }
  effect = this->fields.effect;
  p_effect = (ServantStatusBattleListViewItem_o *)&this->fields.effect;
  v9 = (UnityEngine_Object_o *)effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_effect->klass = 0LL;
    sub_1B88554(p_effect, 0, v12, v13);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A5CD92 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CD92 = 1;
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v8, v9);
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
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    *p_ruby = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ruby, 0, v13, v14);
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
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v17, 0LL);
    *p_image = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.image, 0, v18, v19);
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
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v22, 0LL);
    *p_playVoice = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoice, 0, v23, v24);
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
      v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v6, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v27, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceEffect, 0, v28, v29);
      goto LABEL_38;
    }
LABEL_39:
    sub_1B8880C(v6, v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v5);
  this->fields.fontType = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v30, v31);
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
  int32_t stringLength; // w23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x1
  int i; // w24
  uint16_t v16; // w22
  System_String_o **v17; // x0

  if ( (byte_4A5CD88 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD88 = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v9 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v9, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v9 = *text;
  if ( !*text )
LABEL_28:
    sub_1B8880C(v9, v7);
  stringLength = v9->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v9, (System_String_o *)StringLiteral_15831/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v14) = (_DWORD)StringLiteral_1/*""*/;
LABEL_25:
        v17 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v9, stringLength - 1, 0LL) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v9 = *text;
    if ( !*text )
      goto LABEL_28;
    v16 = System_String__get_Chars(v9, i - 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( (unsigned __int16)(v16 - 48) >= 0xAu && (unsigned __int16)((v16 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v14 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)text, (int32_t)overrideColor, v12, v13);
  *colorTag = overrideColor;
  v17 = colorTag;
  LODWORD(v14) = (_DWORD)overrideColor;
LABEL_26:
  sub_1B88554((ServantStatusBattleListViewItem_o *)v17, (int32_t)v14, v12, v13);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1B8880C(0LL, start);
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
  float r; // s8
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  bool v9; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v13; // s0
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5CD9B & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&StringLiteral_401/*"#"*/);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9B = 1;
  }
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15831/*"[-]"*/, 0LL) )
  {
    v4 = (System_Char_array *)sub_1B88658(char___TypeInfo, 2LL);
    if ( !v4 )
      goto LABEL_14;
    max_length = v4->max_length;
    v5 = v4;
    if ( !max_length || (v4->m_Items[2] = 91, max_length == 1) )
      sub_1B88814(v4, v4);
    v4->m_Items[3] = 93;
    if ( !colorTag )
LABEL_14:
      sub_1B8880C(v4, v5);
    v7 = System_String__Trim_61736780(colorTag, v4, 0LL);
    v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_401/*"#"*/, v7, 0LL);
    v9 = UnityEngine_ColorUtility__TryParseHtmlString(v8, &v14, 0LL);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v9 )
    {
      g = v14.fields.g;
      r = v14.fields.r;
      b = v14.fields.b;
      a = v14.fields.a;
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


System_String_o *__fastcall ScriptMessageLabel__GetCommandName(
        System_String_o *txt,
        int32_t start,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1

  if ( (byte_4A5CD8D & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    byte_4A5CD8D = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v5, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ;
        start < txt->fields._stringLength;
        appended = System_Text_StringBuilder__Append_60871256(v5, (uint16_t)appended, 0LL) )
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
    sub_1B8880C(appended, v7);
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
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v9; // x0

  if ( (byte_4A5CD82 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    byte_4A5CD82 = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_919/*"-"*/, 0LL) )
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
               (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1B8880C(fontSizes, v5);
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
  sizeName = (System_String_o *)StringLiteral_919/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *__fastcall ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  ScriptMessageLabel_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4A5CD83 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    byte_4A5CD83 = 1;
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
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v7,
    fontSizes,
    (const MethodInfo_31BE6D0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v7,
            (const MethodInfo_32C244C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v7.fields._current.fields.value) == size )
    {
      key = v7.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v7,
        (const MethodInfo_32C2570 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v7,
    (const MethodInfo_32C2570 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_919/*"-"*/;
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_o *imageText; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *playVoiceAssetName; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_o *playVoiceObjectName; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_o *colorTag; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  ScriptMessageLabel_o *result; // x0

  if ( (byte_4A5CD95 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    byte_4A5CD95 = 1;
  }
  v3 = sub_1B887FC(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_1B8880C(v5, v6);
  mainText = this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 120), (int32_t)mainText, v7, v8);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 128), (int32_t)rubyText, v11, v12);
  imageText = this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 136), (int32_t)imageText, v14, v15);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 144), (int32_t)playVoiceAssetName, v17, v18);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 152), (int32_t)playVoiceObjectName, v20, v21);
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 184), (int32_t)setReplayingVoice, v23, v24);
  fontType = this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 88), (int32_t)fontType, v26, v27);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 112), (int32_t)colorTag, v29, v30);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v9; // x0
  unsigned int max_length; // w8

  v2 = param;
  if ( (byte_4A5CD91 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    param = (System_String_array *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5CD91 = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  v3 = *(_QWORD *)&v2->max_length;
  if ( !v3 )
    goto LABEL_27;
  if ( !(_DWORD)v3 )
    goto LABEL_24;
  v4 = System_Int32__Parse(v2->m_Items[0], 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v4,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( (int)v2->max_length < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0LL);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0LL);
    max_length = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( max_length > 2 )
        return v2->m_Items[2];
LABEL_24:
      sub_1B88814(param, method);
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
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
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


System_String_o *__fastcall ScriptMessageLabel__GetTagFairingString(System_String_o *txt, const MethodInfo *method)
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
  if ( (byte_4A5CD8C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_25469/*"［"*/);
    txt = (System_String_o *)sub_1B885B0(&StringLiteral_25470/*"］"*/);
    byte_4A5CD8C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v2 )
    goto LABEL_46;
  stringLength = v2->fields._stringLength;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( stringLength >= 1 )
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
            goto LABEL_46;
          items = v4->fields._items;
          v8 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v5,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
            v6 = 0;
          }
          else
          {
            v6 = 0;
            v4->fields._size = size + 1;
            items->m_Items[size + 1] = v5;
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
      if ( System_String__get_Chars(v2, v10, 0LL) == 93 )
      {
        ++v11;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v10, 0LL);
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
          if ( (unsigned int)v14 >= v12->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v10,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            v11 = 0;
          }
          else
          {
            v11 = 0;
            v4->fields._size = v14 + 1;
            v12->m_Items[v14 + 1] = v10;
          }
        }
      }
      --v10;
    }
    while ( v10 >= 0 );
  }
  v15 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v15, 0LL);
  if ( stringLength < 1 )
  {
    if ( v15 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v15->klass->vtable._3_ToString.method)(
                                  v15,
                                  v15->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_46:
    sub_1B8880C(txt, method);
  }
  if ( !v4 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      v4,
      (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    do
      v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v21.fields._current && v17 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v21,
      (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v2, i, 0LL);
    method = (const MethodInfo *)(unsigned int)txt;
    if ( v17 )
    {
      if ( !v15 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v18 = (System_String_o **)&StringLiteral_25469/*"［"*/;
      else
        v18 = (System_String_o **)&StringLiteral_25470/*"］"*/;
      System_Text_StringBuilder__Append_60868928(v15, *v18, 0LL);
    }
    else
    {
      if ( !v15 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_60871256(v15, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v15->klass->vtable._3_ToString.method)(
                              v15,
                              v15->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v8; // x21
  System_String_o *v9; // x23
  int v10; // w25
  int v11; // w26
  __int16 v12; // w24
  int v13; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_4A5CD8F & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    txt = (System_String_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD8F = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v8, stringLength, 0LL);
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
      txt = (System_String_o *)System_String__get_Chars(v6, bindex, 0LL);
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
      txt = (System_String_o *)System_Text_StringBuilder__Append_60871256(v8, (uint16_t)txt, 0LL);
      if ( v12 == 34 )
      {
        if ( v5 < v6->fields._stringLength )
        {
          do
          {
            v13 = v5 + 1;
            Chars = System_String__get_Chars(v6, v5, 0LL);
            if ( Chars == 34 )
              break;
            System_Text_StringBuilder__Append_60871256(v8, Chars, 0LL);
            ++v5;
          }
          while ( v13 < v6->fields._stringLength );
          v5 = v13;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_60871256(v8, 0x22u, 0LL);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields._stringLength )
        goto LABEL_28;
    }
    if ( v10 == index )
    {
      if ( v8 )
      {
        v9 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                  v8,
                                  v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        goto LABEL_27;
      }
LABEL_32:
      sub_1B8880C(txt, *(_QWORD *)&bindex);
    }
    if ( !v8 )
      goto LABEL_32;
LABEL_27:
    ++v10;
    System_Text_StringBuilder__set_Length(v8, 0, 0LL);
  }
  while ( v5 < v6->fields._stringLength );
LABEL_28:
  if ( v10 != index )
    return v9;
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
  unsigned __int64 codeClassSplitStringList; // x0
  MethodInfo *v12; // x1
  ScriptMessageLabel_c *v13; // x8
  System_String_o *v14; // x28
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  ScriptMessageLabel_c *v18; // x8
  __int64 v19; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x8
  int v31; // w9
  int v32; // w28
  Il2CppClass **v33; // x26
  System_String_o **v34; // x26
  unsigned __int64 v35; // t1
  System_String_o *v36; // x26
  int32_t stringLength; // w8
  int v38; // w26
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o **v47; // x8
  System_String_o **v48; // x0
  System_String_o *v49; // x1
  System_Collections_Generic_List_object__o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  unsigned __int64 i; // x19
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_String_o *v59; // x0
  System_String_o *v60; // [xsp+0h] [xbp-90h]
  System_String_o **v61; // [xsp+10h] [xbp-80h]
  int v62; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5CD90 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_20123/*"icon_class_{0:D3}"*/);
    sub_1B885B0(&StringLiteral_25465/*"："*/);
    sub_1B885B0(&StringLiteral_11459/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD90 = 1;
  }
  Chars = 0;
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v13 = ScriptMessageLabel_TypeInfo;
  v14 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v13 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v13->static_fields->codeClassSplitStringList )
  {
    v15 = sub_1B88658(string___TypeInfo, 1LL);
    v18 = ScriptMessageLabel_TypeInfo;
    v19 = v15;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v18 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->codeClassSplitStringList, v19, v16, v17);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1B8880C(codeClassSplitStringList, v12);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(codeClassSplitStringList + 32), (int32_t)v14, v21, v22);
    v13 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !talkName )
    goto LABEL_63;
  v23 = System_String__Split_61733264(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)imageName, 0, v24, v25);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)className, (int32_t)StringLiteral_1/*""*/, v26, v27);
  *charaIndex = -1;
  if ( !v23 )
    goto LABEL_63;
  v30 = *(_QWORD *)&v23->max_length;
  v31 = v30 - 1;
  if ( (int)v30 - 1 < 1 )
    goto LABEL_42;
  v60 = v14;
  v61 = charaName;
  v32 = 0;
  do
  {
    if ( v32 >= (unsigned int)v30 )
      goto LABEL_64;
    v33 = &v23->obj.klass + v32;
    v35 = (unsigned __int64)v33[4];
    v34 = (System_String_o **)(v33 + 4);
    codeClassSplitStringList = v35;
    if ( !v35 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0LL);
    if ( v32 >= v23->max_length )
      goto LABEL_64;
    v36 = *v34;
    if ( !v36 )
      goto LABEL_63;
    stringLength = v36->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v36, 8, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v36 = System_Char__ToString((uint16_t)&Chars, 0LL);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v36, v12);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v38 = ScriptMessageLabel__ConvertInteger(v36, v12);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v38,
                                 (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v62 = v38;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v28, v29, v39);
      v41 = System_String__Format((System_String_o *)StringLiteral_20123/*"icon_class_{0:D3}"*/, v40, 0LL);
      *imageName = v41;
      sub_1B88554((ServantStatusBattleListViewItem_o *)imageName, (int32_t)v41, v42, v43);
      if ( !entity )
        goto LABEL_63;
      v44 = System_String__Concat_61707032(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25465/*"："*/,
              0LL);
      *className = v44;
      sub_1B88554((ServantStatusBattleListViewItem_o *)className, (int32_t)v44, v45, v46);
    }
LABEL_33:
    v30 = *(_QWORD *)&v23->max_length;
    ++v32;
    v31 = v30 - 1;
  }
  while ( v32 < (int)v30 - 1 );
  charaName = v61;
  v14 = v60;
LABEL_42:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v48 = charaName;
    LODWORD(v49) = (_DWORD)talkName;
  }
  else
  {
    if ( (int)v30 >= 3 )
    {
      v50 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
      v53 = *(_QWORD *)&v23->max_length;
      if ( (int)v53 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v53; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v53 )
              goto LABEL_64;
            if ( !v50 )
              goto LABEL_63;
            v12 = (MethodInfo *)v23->m_Items[i];
            items = v50->fields._items;
            v56 = Method_System_Collections_Generic_List_string__Add__;
            ++v50->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v50->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                (Il2CppObject *)v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &items->obj.klass + size;
              v50->fields._size = size + 1;
              v58[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v12, v51, v52);
            }
          }
          LODWORD(v53) = v23->max_length;
        }
      }
      v59 = System_String__Join_61722688(v14, (System_Collections_Generic_IEnumerable_string__o *)v50, 0LL);
      LODWORD(v49) = (_DWORD)v59;
      *charaName = v59;
    }
    else
    {
      if ( v30 )
      {
        if ( (_DWORD)v30 )
        {
          v47 = &v23->m_Items[v31];
          goto LABEL_60;
        }
LABEL_64:
        sub_1B88814(codeClassSplitStringList, v12);
      }
      v47 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v49 = *v47;
      *charaName = *v47;
    }
    v48 = charaName;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v48, (int32_t)v49, v28, v29);
}


void __fastcall ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  int32_t v9; // w22
  int32_t v10; // w24
  ScriptMessageLabel_c *v11; // x0
  const MethodInfo *v12; // x1
  int v13; // w26
  System_String_o *v14; // x23
  void *v15; // x0
  System_String_o *v16; // x23
  int32_t v17; // w0
  __int64 v18; // x8
  System_String_o *v19; // x0
  System_String_o *v20; // x1

  if ( (byte_4A5CD85 & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD85 = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)dispText,
      (int32_t)StringLiteral_1/*""*/,
      (int32_t)dispText,
      (int32_t)length);
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
    if ( System_String__get_Chars(text, v9, 0LL) != 91 )
    {
      ++v10;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v9 + 1, 0LL) == 35 )
      break;
    v11 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v11 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v11->static_fields->LINE_ORDER, 0LL) )
    {
      v15 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v15 = ScriptMessageLabel_TypeInfo;
      }
      v18 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 8LL);
      if ( v18 )
      {
        v19 = System_String__Substring_61726036(
                text,
                *(_DWORD *)(v18 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v18 + 16),
                0LL);
        v17 = System_Int32__Parse(v19, 0LL);
        goto LABEL_39;
      }
LABEL_45:
      sub_1B8880C(v15, v12);
    }
    v9 += 2;
    if ( v9 < text->fields._stringLength )
    {
      v13 = 0;
      do
      {
        if ( System_String__get_Chars(text, v9, 0LL) == 91 )
        {
          ++v13;
        }
        else if ( System_String__get_Chars(text, v9, 0LL) == 93 )
        {
          if ( !v13 )
            break;
          --v13;
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
  v14 = System_String__Substring_61726036(text, v9 + 2, text->fields._stringLength - 2, 0LL);
  v15 = (void *)sub_1B88658(char___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_45;
  v12 = (const MethodInfo *)v15;
  if ( !*((_DWORD *)v15 + 6) )
    goto LABEL_46;
  *((_WORD *)v15 + 16) = 58;
  if ( !v14 )
    goto LABEL_45;
  v15 = System_String__Split_61729188(v14, (System_Char_array *)v15, 0LL);
  if ( !v15 )
    goto LABEL_45;
  if ( !*((_DWORD *)v15 + 6) )
LABEL_46:
    sub_1B88814(v15, v12);
  v16 = (System_String_o *)*((_QWORD *)v15 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v17 = ScriptMessageLabel__StrlenByDisp(v16, v12);
LABEL_39:
  v10 += v17;
LABEL_40:
  if ( v9 <= text->fields._stringLength )
    v20 = System_String__Substring_61726036(text, 0, v9, 0LL);
  else
    v20 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)dispText, (int32_t)v20, (int32_t)dispText, (int32_t)length);
LABEL_44:
  *length = v10;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4A5CD84 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17386/*"bottom"*/);
    sub_1B885B0(&StringLiteral_23983/*"top"*/);
    sub_1B885B0(&StringLiteral_17795/*"center"*/);
    byte_4A5CD84 = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_23983/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17795/*"center"*/, 0LL) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17386/*"bottom"*/, 0LL) )
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
  if ( (byte_4A5CD8B & 1) == 0 )
  {
    text = (System_String_o *)sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    byte_4A5CD8B = 1;
  }
  if ( !v2 )
    sub_1B8880C(text, method);
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
  int32_t v3; // w20
  int32_t v4; // w0
  int32_t v5; // w21
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x21

  v2 = txt;
  if ( (byte_4A5CD8A & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    txt = (System_String_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5CD8A = 1;
  }
  if ( !v2 )
    sub_1B8880C(txt, method);
  v3 = 0;
  while ( v3 < v2->fields._stringLength )
  {
    v4 = System_String__IndexOf_61738624(v2, (System_String_o *)StringLiteral_15812/*"["*/, v3, 0LL);
    if ( (v4 & 0x80000000) != 0 )
      break;
    v5 = v4;
    v6 = System_String__IndexOf_61738624(v2, (System_String_o *)StringLiteral_16069/*"]"*/, v4, 0LL);
    if ( (v6 & 0x80000000) != 0 )
      break;
    v3 = v6 + 1;
    v8 = System_String__Substring_61726036(v2, v5, v6 + 1 - v5, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( ScriptMessageLabel__IsColorBeginTag(v8, v7) )
      return 1;
  }
  return 0;
}


void __fastcall ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
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

  if ( (byte_4A5CDA3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5CDA3 = 1;
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
      sub_1B8880C(IsBusyVoice, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, struct System_String_o *, __int64, _QWORD))setReplayingVoice->fields.m_target)(
      setReplayingVoice->fields.original_method_info,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1LL,
      *(_QWORD *)&setReplayingVoice->fields.extra_arg);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    v8 = this->fields.playVoiceAssetName;
    v9 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_38702940(v8, v9, playVoiceVolume, v11, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v12);
  }
}


void __fastcall ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v21; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_4A5CD93 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD93 = 1;
  }
  this->fields.fontType = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v2, v3);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v8, v9, v10);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v11, v12, v13);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v17, v18, v19);
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
    sub_1B8880C(gameObject, v21);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v21);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
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

  if ( (byte_4A5CD89 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD89 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
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
      if ( System_String__get_Chars(text, v5, 0LL) != 91
        || (++v5, v9 = System_String__IndexOf_61737256(text, 0x5Du, v8 + 1, 0LL), (v9 & 0x80000000) != 0) )
      {
LABEL_23:
        v10 = v8;
LABEL_24:
        v5 = v10 + 1;
        goto LABEL_6;
      }
      v10 = v9;
      IsNullOrEmpty = System_String__Substring_61726036(text, v8, v9 + v7, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v11 = IsNullOrEmpty;
      --v7;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 10 )
      {
        v12 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v11, v12, 0LL);
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
          IsNullOrEmpty = System_String__Replace_61726660(v6, v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( IsNullOrEmpty )
          {
            v6 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_61738608(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_15831/*"[-]"*/,
                                                 0LL);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_15831/*"[-]"*/ )
            {
              v6 = System_String__Remove(v6, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15831/*"[-]"*/ + 4), 0LL);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1B8880C(IsNullOrEmpty, v4);
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
  __int64 Component_object; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  UILabel_o *v19; // x21
  Il2CppObject *v20; // x0
  __int64 *v21; // x25
  int32_t v22; // w2
  int32_t v23; // w3
  UISprite_o *v24; // x20
  UnityEngine_Component_o *v25; // x22
  __int64 v26; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v29; // w1
  const MethodInfo *v30; // x1
  System_String_o *colorTag; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  EventDelegate_Callback_o *v36; // x23
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5CD96 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ScriptMessageLabel_OnClickPlayVoice__);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__);
    sub_1B885B0(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD96 = 1;
  }
  v14 = sub_1B887FC(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  ScriptMessageLabel___c__DisplayClass60_0___ctor((ScriptMessageLabel___c__DisplayClass60_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_45;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v19 = (UILabel_o *)Component_object;
  v20 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v14 + 24) = v20;
  v21 = (__int64 *)(v14 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v20, v22, v23);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v24 = (UISprite_o *)Component_object;
  v25 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v26 = sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v26,
    (Il2CppObject *)v14,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v24->klass->vtable._8_set_alpha.method)(
      v24,
      v24->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMark(v24, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._33_MakePixelPerfect.method)(
      v24,
      v24->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v29 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v24, v29, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    Color = ScriptMessageLabel__GetColor(colorTag, v30);
    UIWidget__set_color((UIWidget_o *)v24, Color, 0LL);
    if ( !v26 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(
                         *(_QWORD *)(v26 + 64),
                         *(_QWORD *)(v26 + 40));
    if ( !v19 )
      goto LABEL_45;
    UILabel__set_text(v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v25 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceEffect, (int32_t)playVoiceEffect, v32, v33);
    if ( v25 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v25, 0LL);
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
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v25[8].monitor;
            v36 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v36, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            Component_object = (__int64)EventDelegate__Set_46771408(monitor, v36, 0LL);
            if ( v19 )
            {
              UILabel__set_text(v19, 0LL, 0LL);
              Component_object = *v21;
              if ( *v21 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0LL, 0LL);
                if ( v24 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v24->klass->vtable._8_set_alpha.method)(
                    v24,
                    v24->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_1B8880C(Component_object, v16);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v19, this->fields.fontType, 0LL);
  }
  else if ( !v19 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v19, this->fields.fontSize, 0LL);
  UILabel__set_text(v19, this->fields.mainText, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  v37.fields.z = 0.0;
  v37.fields.y = -this->fields.yOffset;
  v37.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v37, 0LL);
  if ( !v26 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(
                       *(_QWORD *)(v26 + 64),
                       *(_QWORD *)(v26 + 40));
  if ( !v24 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v24->klass->vtable._8_set_alpha.method)(
                       v24,
                       v24->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                       0.0);
  if ( !v25 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4A5CDA4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CDA4 = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4A5CDA5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CDA5 = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5CD87 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    byte_4A5CD87 = 1;
  }
  dispText = 0LL;
  length = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v2);
  return length;
}


System_String_o *__fastcall ScriptMessageLabel__SubstrByDisp(
        System_String_o *text,
        int32_t len,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5CD86 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    byte_4A5CD86 = 1;
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
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  UILabel_o *transform; // x0
  __int64 v34; // x1
  int32_t v35; // w25
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x3
  float VerticalAlignOffset; // s0
  float v41; // s8
  float v42; // s0
  float y; // s8
  float v44; // s1
  const MethodInfo *v45; // x1
  float v46; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD99 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_25325/*"・"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD99 = 1;
  }
  v15 = System_String__Concat_61707032(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v15, v16, v17);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)colorTag, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v22, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v28, v29, v30);
  this->fields.fontType = font;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v31, v32);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v35 = 0;
    do
    {
      v36 = System_String__Concat_61707032(*p_rubyText, (System_String_o *)StringLiteral_25325/*"・"*/, 0LL);
      *p_rubyText = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v36, v37, v38);
      ++v35;
    }
    while ( v35 < mainStr->fields._stringLength );
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
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v39);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v41 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v52.fields.x = pos->fields.x;
        v52.fields.z = 0.0;
        v52.fields.y = pos->fields.y - v41;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v52, 0LL);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1B8880C(transform, v34);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v51.fields.x = pos->fields.x;
  v51.fields.y = pos->fields.y;
  v51.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0LL);
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
                                     - (float)(v42 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v44 + v44) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v53.fields.x = this->fields.rubyPosition.fields.x;
  v53.fields.y = this->fields.rubyPosition.fields.y;
  v53.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v53, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v46 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v46;
  pos->fields.x = v46 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v45);
}


void __fastcall ScriptMessageLabel__UpdateEffect(
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
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_Vector2_o v25; // x8
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v30; // x21
  __int64 v31; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x19
  int32_t v35; // w1
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD9F & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6852/*"FrontCommonUI"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9F = 1;
  }
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v12, (int32_t)pos, (int32_t)effectName);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v13, v14, v15);
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v16, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  v25 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v26 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v25;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v30 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v36.fields.z = 0.0;
      v36.fields.x = x;
      v36.fields.y = y;
      CommonEffectManager__CreateParam_40661880(v30, effectName, v36, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v33 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v33) )
      {
        sub_1B8880C(transform, v31);
      }
      SyncTransformComponent__setChild(v33, (UnityEngine_Transform_o *)transform, 0LL);
      v34 = this->fields.frontEffect;
      v35 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6852/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v34, v35, 0LL);
    }
  }
}


void __fastcall ScriptMessageLabel__UpdateImage(
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  UISprite_o *v27; // x24
  __int64 v28; // x1
  UIWidget_o *transform; // x0
  int32_t v30; // w23
  float v31; // s0
  float v32; // s8
  float v33; // s1
  float v34; // s0
  int32_t v35; // w23
  float x; // s0
  float v37; // s8
  struct UnityEngine_Vector2_o v38; // x8
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5CD9D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9D = 1;
  }
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v13, (int32_t)pos, fontSize);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v14, v15, v16);
  this->fields.imageText = imageStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  this->fields.fontType = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v25, v26);
  this->fields.fontSize = fontSize;
  v27 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v27, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v30 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v32 = v31;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v34 = (float)(v32 * (float)v30) / v33;
  v35 = v34 == INFINITY ? 0x80000000 : (int)v34;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v35, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v40.fields.r = 1.0;
  v40.fields.g = 1.0;
  v40.fields.b = 1.0;
  v40.fields.a = 1.0;
  UIWidget__set_color(transform, v40, 0LL);
  x = pos->fields.x;
  v37 = (float)v35;
  if ( horizontalAlign == 2 )
  {
    x = x - v37;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v37 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(transform, v28);
  }
  v39.fields.x = pos->fields.x;
  v39.fields.y = pos->fields.y;
  v39.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v39, 0LL);
  v38 = *pos;
  this->fields.widthSize = v37;
  this->fields.mainPosition = v38;
  pos->fields.x = pos->fields.x + v37;
  this->fields.dispLength = 1;
}


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
  int32_t v18; // w1
  struct System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  UIWidget_o *transform; // x0
  __int64 v33; // x1
  UISprite_o *v34; // x26
  int32_t v35; // w25
  float v36; // s0
  float v37; // s8
  float v38; // s1
  float v39; // s0
  int32_t v40; // w25
  float x; // s0
  float v42; // s8
  float y; // s9
  float v44; // s1
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5CDA0 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CDA0 = 1;
  }
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v18, (int32_t)ruby, (int32_t)pos);
  v19 = System_String__Concat_61707032(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v24, v25, v26);
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v27, v28, v29);
  this->fields.fontType = font;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v30, v31);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v34 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v34, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v35 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v37 = v36;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v39 = (float)(v37 * (float)v35) / v38;
  v40 = v39 == INFINITY ? 0x80000000 : (int)v39;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v40, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  UIWidget__set_color(transform, v47, 0LL);
  x = pos->fields.x;
  v42 = (float)v40;
  if ( horizontalAlign == 2 )
  {
    x = x - v42;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v42 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_31;
  v45.fields.x = pos->fields.x;
  v45.fields.y = pos->fields.y;
  v45.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v45, 0LL);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v42 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v44,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1B8880C(transform, v33);
  }
  v46.fields.x = this->fields.rubyPosition.fields.x;
  v46.fields.y = this->fields.rubyPosition.fields.y;
  v46.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v46, 0LL);
  this->fields.widthSize = v42;
  pos->fields.x = pos->fields.x + v42;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_41641416(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_4A55BDA )
  {
    sub_1B885B0(&UnityEngine_Vector2_TypeInfo);
    byte_4A55BDA = 1;
  }
  ScriptMessageLabel__UpdateImage_41641568(
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
void __fastcall ScriptMessageLabel__UpdateImage_41641568(
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
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  float v32; // s0
  int32_t v33; // w8
  UISprite_o *v34; // x25
  __int64 v35; // x1
  UIWidget_o *transform; // x0
  int32_t v37; // w24
  float v38; // s0
  float v39; // s10
  float v40; // s1
  float v41; // s0
  int32_t v42; // w24
  float v43; // s0
  float v44; // s10
  int32_t v45; // w8
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4A5CD9E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9E = 1;
  }
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v18, (int32_t)pos, fontSize);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v24, v25, v26);
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v27, v28, v29);
  this->fields.fontType = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v30, v31);
  v32 = (float)fontSize * scale;
  v33 = (int)v32;
  if ( v32 == INFINITY )
    v33 = 0x80000000;
  this->fields.fontSize = v33;
  v34 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v34, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v37 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v39 = v38;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v41 = (float)(v39 * (float)v37) / v40;
  v42 = v41 == INFINITY ? 0x80000000 : (int)v41;
  if ( !transform )
    goto LABEL_22;
  UIWidget__SetDimensions(transform, v42, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_22;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  UIWidget__set_color(transform, v47, 0LL);
  v43 = pos->fields.x;
  v44 = (float)v42;
  if ( horizontalAlign == 2 )
  {
    v43 = v43 - v44;
  }
  else if ( horizontalAlign == 1 )
  {
    v43 = v43 + (float)(v44 * -0.5);
  }
  pos->fields.x = v43;
  v45 = this->fields.fontSize;
  this->fields.mainPosition.fields.x = x + v43;
  this->fields.mainPosition.fields.y = y + (float)(pos->fields.y + (float)(v45 - fontSize));
  transform = (UIWidget_o *)*image;
  if ( !*image
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(transform, v35);
  }
  v46.fields.x = this->fields.mainPosition.fields.x;
  v46.fields.y = this->fields.mainPosition.fields.y;
  v46.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v46, 0LL);
  this->fields.widthSize = v44;
  pos->fields.x = pos->fields.x + v44;
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v36; // x3
  float VerticalAlignOffset; // s0
  float v38; // s8
  const MethodInfo *v39; // x1
  float v40; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD98 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD98 = 1;
  }
  v17 = System_String__Concat_61707032(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v17, v18, v19);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v20, v21, v22);
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v23, v24, v25);
  v26 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v26, v27, v28);
  v29 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v29, v30, v31);
  this->fields.fontType = font;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v32, v33);
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
        v42.fields.x = pos->fields.x;
        v42.fields.y = pos->fields.y;
        v42.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1B8880C(transform, v34);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v36);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v38 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_23;
  v43.fields.x = pos->fields.x;
  v43.fields.z = 0.0;
  v43.fields.y = pos->fields.y - v38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v40 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v40;
  pos->fields.x = v40 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v39);
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
  int32_t v13; // w1
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  UISprite_o *v27; // x24
  System_String_o *imageText; // x25
  __int64 v29; // x1
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v32; // x24
  int32_t v33; // w23
  const MethodInfo *v34; // x1
  UIWidget_o *v35; // x22
  System_String_o *colorTag; // x25
  int v37; // s0
  float v41; // s8
  struct UnityEngine_Vector2_o v42; // x8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD9C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9C = 1;
  }
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v13, (int32_t)pos, fontSize);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v14, v15, v16);
  this->fields.imageText = imageStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v19, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v22, v23, v24);
  this->fields.fontType = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v25, v26);
  this->fields.fontSize = fontSize;
  v27 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v27, imageText, 0LL);
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
  v32 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v33 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v33, fontSize, 0LL);
  v35 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  *(UnityEngine_Color_o *)&v37 = ScriptMessageLabel__GetColor(colorTag, v34);
  if ( !v35
    || (UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v37, 0LL),
        v41 = (float)v33,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v33 / (float)v32->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(transform, v29);
  }
  v43.fields.x = pos->fields.x;
  v43.fields.y = pos->fields.y;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
  v42 = *pos;
  this->fields.widthSize = v41;
  this->fields.mainPosition = v42;
  pos->fields.x = pos->fields.x + v41;
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
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  ScriptMessageLabel_c *v24; // x0

  if ( (byte_4A5CDA1 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CDA1 = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.setReplayingVoice,
    (int32_t)setReplayingVoice,
    (int32_t)objectName,
    (int32_t)setReplayingVoice);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v11, v12, v13);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v17, v18, v19);
  this->fields.playVoiceAssetName = assetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, (int32_t)assetName, v20, v21);
  this->fields.playVoiceObjectName = objectName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, (int32_t)objectName, v22, v23);
  this->fields.playVoiceVolume = volume;
  v24 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v24 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v24->static_fields->PLAY_VOICE_POSITION_X;
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  UILabel_o *transform; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  float VerticalAlignOffset; // s0
  float v40; // s8
  float v41; // s0
  float y; // s8
  float v43; // s1
  const MethodInfo *v44; // x1
  float v45; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD9A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD9A = 1;
  }
  v19 = System_String__Concat_61707032(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v19, v20, v21);
  v22 = System_String__Concat_61707032(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v22, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v31, v32, v33);
  this->fields.fontType = font;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v34, v35);
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
    sub_1B8880C(transform, v37);
  UILabel__set_text(transform, this->fields.mainText, 0LL);
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
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v49.fields.x = pos->fields.x;
        v49.fields.z = 0.0;
        v49.fields.y = pos->fields.y - v40;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0LL);
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
  v48.fields.x = pos->fields.x;
  v48.fields.y = pos->fields.y;
  v48.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v48, 0LL);
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
                                     - (float)(v41 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + v43;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v50.fields.x = this->fields.rubyPosition.fields.x;
  v50.fields.y = this->fields.rubyPosition.fields.y;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v45 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v45;
  pos->fields.x = v45 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v44);
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
  UILabel_o *ruby; // x8
  struct ScriptMessageLabel_o *v8; // x9
  struct ScriptMessageLabel_o *v9; // x8
  float32x2_t *v10; // x8
  int v11; // s2 OVERLAPPED
  unsigned __int64 v12; // d0 OVERLAPPED
  int v13; // s1

  v2 = this;
  if ( (byte_4A5CDA8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CDA8 = 1;
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
    v5 = v2->fields.__4__this;
    if ( !v5 )
      goto LABEL_22;
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
    if ( !this )
      goto LABEL_22;
    UILabel__set_trueTypeFont((UILabel_o *)this, v5->fields.fontType, 0LL);
  }
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_22;
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
LABEL_22:
    sub_1B8880C(this, method);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}