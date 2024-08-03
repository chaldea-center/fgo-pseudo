void __fastcall ScriptMessageLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  int32_t v18; // w1
  struct ScriptMessageLabel_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_object__int__o *v24; // x19
  __int64 v25; // x0
  struct ScriptMessageLabel_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_int__int__o *v31; // x19
  struct ScriptMessageLabel_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FE01B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_15929/*"[line "*/, v10);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v11);
    sub_1B640C8(&StringLiteral_21290/*"medium"*/, v12);
    sub_1B640C8(&StringLiteral_23278/*"small"*/, v13);
    sub_1B640C8(&StringLiteral_24701/*"x-small"*/, v14);
    sub_1B640C8(&StringLiteral_20957/*"large"*/, v15);
    sub_1B640C8(&StringLiteral_24681/*"x-large"*/, v16);
    byte_49FE01B = 1;
  }
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  v18 = StringLiteral_15929/*"[line "*/;
  static_fields->LINE_ORDER = (struct System_String_o *)StringLiteral_15929/*"[line "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->LINE_ORDER, v18, v2, v3);
  v19 = ScriptMessageLabel_TypeInfo->static_fields;
  v19->codeClassSplitStringList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->codeClassSplitStringList, 0, v20, v21);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v22,
                                                                  v23);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v24 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_920/*"-"*/,
    29,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_24701/*"x-small"*/,
    19,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_23278/*"small"*/,
    24,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_21290/*"medium"*/,
    29,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_20957/*"large"*/,
    48,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v24,
    (Il2CppObject *)StringLiteral_24681/*"x-large"*/,
    64,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v26 = ScriptMessageLabel_TypeInfo->static_fields;
  v26->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->fontSizes, (int32_t)v24, v27, v28);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v29,
                                                               v30);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v31 )
LABEL_6:
    sub_1B64324(v25);
  System_Collections_Generic_Dictionary_int__int___Add(
    v31,
    24,
    0,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v31,
    29,
    1,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v31,
    48,
    2,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v31,
    64,
    3,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v32 = ScriptMessageLabel_TypeInfo->static_fields;
  v32->fontSizeIndexTable = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->fontSizeIndexTable, (int32_t)v31, v33, v34);
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

  if ( (byte_49FE01A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FE01A = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.colorTag, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v18, v19, v20);
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
  unsigned __int64 Chars; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v14; // x22
  int v15; // w25
  int32_t v16; // w1
  __int16 v17; // w23
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Text_StringBuilder_o *v23; // x1
  Il2CppClass **v24; // x0
  int32_t v25; // w23
  uint16_t v26; // w0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  System_Text_StringBuilder_o *v32; // x1
  Il2CppClass **v33; // x0

  v3 = bindex;
  if ( (byte_49FE002 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&bindex);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v8);
    byte_49FE002 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      *(_QWORD *)&bindex,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v14 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v11, v12);
  System_Text_StringBuilder___ctor_60529900(v14, stringLength, 0LL);
  if ( txt->fields._stringLength > v3 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = v3++;
      Chars = System_String__get_Chars(txt, v16, 0LL);
      v17 = Chars;
      if ( (unsigned __int16)Chars != 58 )
        break;
      if ( v15 )
        goto LABEL_18;
      if ( !v14 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                v14,
                v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !v9 )
        goto LABEL_36;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v9->fields._size;
      v23 = (System_Text_StringBuilder_o *)Chars;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)Chars,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
      }
      System_Text_StringBuilder__set_Length(v14, 0, 0LL);
      v15 = 0;
LABEL_25:
      if ( v3 >= txt->fields._stringLength )
        goto LABEL_29;
    }
    if ( (unsigned __int16)Chars == 91 )
    {
      ++v15;
    }
    else if ( (unsigned __int16)Chars == 93 && --v15 < 0 )
    {
      goto LABEL_29;
    }
LABEL_18:
    if ( !v14 )
      goto LABEL_36;
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_60538876(v14, Chars, 0LL);
    if ( v17 == 34 )
    {
      if ( v3 < txt->fields._stringLength )
      {
        do
        {
          v25 = v3 + 1;
          v26 = System_String__get_Chars(txt, v3, 0LL);
          if ( v26 == 34 )
            break;
          System_Text_StringBuilder__Append_60538876(v14, v26, 0LL);
          ++v3;
        }
        while ( v25 < txt->fields._stringLength );
        v3 = v25;
      }
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_60538876(v14, 0x22u, 0LL);
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( !v14 )
    goto LABEL_36;
  Chars = System_Text_StringBuilder__get_Length(v14, 0LL);
  if ( (int)Chars < 1 )
  {
    if ( v9 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_1B64324(Chars);
  }
  Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
            v14,
            v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v9 )
    goto LABEL_36;
  v29 = v9->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v9->fields._version;
  if ( !v29 )
    goto LABEL_36;
  v31 = v9->fields._size;
  v32 = (System_Text_StringBuilder_o *)Chars;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)Chars,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v29->obj.klass + v31;
    v9->fields._size = v31 + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v9,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceObjectName; // x20
  System_String_o *playVoiceAssetName; // x21

  if ( (byte_49FE016 & 1) == 0 )
  {
    sub_1B640C8(&SeManager_TypeInfo, method);
    byte_49FE016 = 1;
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

  if ( (byte_49FE00B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, mainObject);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12);
    this = (ScriptMessageLabel_o *)sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FE00B = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v14 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v15 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0LL);
}


int32_t __fastcall ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FE008 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE008 = 1;
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
    UnityEngine_Object__Destroy_69127736(v5, 0LL);
    *p_frontEffect = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frontEffect, 0, v6, v7);
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
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_effect->klass = 0LL;
    sub_1B6406C(p_effect, 0, v12, v13);
  }
}


void __fastcall ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FE006 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE006 = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    p_fields->main = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v7, v8);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v11, 0LL);
    *p_ruby = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ruby, 0, v12, v13);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v16, 0LL);
    *p_image = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.image, 0, v17, v18);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v21, 0LL);
    *p_playVoice = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoice, 0, v22, v23);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v5, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v27, 0LL);
      *p_playVoiceEffect = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceEffect, 0, v28, v29);
      goto LABEL_38;
    }
LABEL_39:
    sub_1B64324(v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v26);
  this->fields.fontType = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v30, v31);
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
  int32_t stringLength; // w23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x1
  int i; // w24
  uint16_t v17; // w22
  System_String_o **v18; // x0

  if ( (byte_49FDFFC & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, text);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FDFFC = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0LL) )
    return 0;
  v10 = *text;
  if ( !*text )
    goto LABEL_28;
  Chars = System_String__get_Chars(v10, 0, 0LL);
  result = 0;
  if ( Chars != 91 )
    return result;
  v10 = *text;
  if ( !*text )
LABEL_28:
    sub_1B64324(v10);
  stringLength = v10->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v10, (System_String_o *)StringLiteral_15763/*"[-]"*/, 0LL) )
    {
      if ( !overrideColor )
      {
        *colorTag = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v15) = (_DWORD)StringLiteral_1/*""*/;
LABEL_25:
        v18 = colorTag;
        goto LABEL_26;
      }
      goto LABEL_23;
    }
    return 0;
  }
  if ( System_String__get_Chars(v10, stringLength - 1, 0LL) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v10 = *text;
    if ( !*text )
      goto LABEL_28;
    v17 = System_String__get_Chars(v10, i - 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    if ( (unsigned __int16)(v17 - 48) >= 0xAu && (unsigned __int16)((v17 & 0xFFDF) - 65) > 5u )
      return 0;
  }
  if ( !overrideColor )
  {
    v15 = *text;
    *colorTag = *text;
    goto LABEL_25;
  }
LABEL_23:
  *text = overrideColor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)text, (int32_t)overrideColor, v13, v14);
  *colorTag = overrideColor;
  v18 = colorTag;
  LODWORD(v15) = (_DWORD)overrideColor;
LABEL_26:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v18, (int32_t)v15, v13, v14);
  return 1;
}


int32_t __fastcall ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v3; // w19
  int v5; // w21

  if ( !txt )
    sub_1B64324(0LL);
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
  il2cpp_array_size_t max_length; // w8
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  bool v11; // w0
  float g; // s1
  float b; // s2
  float a; // s3
  float v15; // s0
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE00F & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, method);
    sub_1B640C8(&StringLiteral_402/*"#"*/, v3);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FE00F = 1;
  }
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_15763/*"[-]"*/, 0LL) )
  {
    v7 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_14;
    max_length = v7->max_length;
    if ( !max_length || (v7->m_Items[2] = 91, max_length == 1) )
      sub_1B6432C(v7, v7);
    v7->m_Items[3] = 93;
    if ( !colorTag )
LABEL_14:
      sub_1B64324(v7);
    v9 = System_String__Trim_61405136(colorTag, v7, 0LL);
    v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_402/*"#"*/, v9, 0LL);
    v11 = UnityEngine_ColorUtility__TryParseHtmlString(v10, &v16, 0LL);
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( v11 )
    {
      g = v16.fields.g;
      r = v16.fields.r;
      b = v16.fields.b;
      a = v16.fields.a;
    }
  }
  else
  {
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v15 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v15;
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
  if ( (byte_49FE001 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start);
    byte_49FE001 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&start, method);
  System_Text_StringBuilder___ctor_60529900(v5, 32, 0LL);
  if ( !txt )
    goto LABEL_11;
  for ( ; v3 < txt->fields._stringLength; appended = System_Text_StringBuilder__Append_60538876(
                                                       v5,
                                                       (uint16_t)appended,
                                                       0LL) )
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
    sub_1B64324(appended);
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
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  ScriptMessageLabel_c *v10; // x0

  if ( (byte_49FDFF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, *(_QWORD *)&defaultSize);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v6);
    byte_49FDFF6 = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0LL)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_920/*"-"*/, 0LL) )
  {
    v10 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v10 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->fontSizes;
    if ( fontSizes )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               (Il2CppObject *)sizeName,
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_15:
    sub_1B64324(fontSizes);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v8 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v8 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v8->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_15;
  sizeName = (System_String_o *)StringLiteral_920/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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

  if ( (byte_49FDFF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v7);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v9);
    byte_49FDFF7 = 1;
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
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v14,
    fontSizes,
    (const MethodInfo_3170AA0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v14,
            (const MethodInfo_327442C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v14.fields._current.fields.value) == size )
    {
      key = v14.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v14,
        (const MethodInfo_3274550 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v14,
    (const MethodInfo_3274550 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_920/*"-"*/;
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

  if ( (byte_49FE009 & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    byte_49FE009 = 1;
  }
  v4 = sub_1B64314(ScriptMessageLabel_TypeInfo, method, v2);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v4, v5);
  if ( !v4 )
    sub_1B64324(v6);
  mainText = this->fields.mainText;
  *(_QWORD *)(v4 + 120) = mainText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 120), (int32_t)mainText, v7, v8);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v4 + 128) = rubyText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 128), (int32_t)rubyText, v11, v12);
  imageText = this->fields.imageText;
  *(_QWORD *)(v4 + 136) = imageText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 136), (int32_t)imageText, v14, v15);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v4 + 144) = playVoiceAssetName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 144), (int32_t)playVoiceAssetName, v17, v18);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v4 + 152) = playVoiceObjectName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 152), (int32_t)playVoiceObjectName, v20, v21);
  *(float *)(v4 + 160) = this->fields.playVoiceVolume;
  setReplayingVoice = this->fields.setReplayingVoice;
  *(_QWORD *)(v4 + 184) = setReplayingVoice;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 184), (int32_t)setReplayingVoice, v23, v24);
  fontType = this->fields.fontType;
  *(_QWORD *)(v4 + 88) = fontType;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 88), (int32_t)fontType, v26, v27);
  *(_QWORD *)(v4 + 96) = *(_QWORD *)&this->fields.fontSize;
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v4 + 112) = colorTag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 112), (int32_t)colorTag, v29, v30);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v11; // x0
  unsigned int max_length; // w8

  v2 = param;
  if ( (byte_49FE005 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    param = (System_String_array *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FE005 = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  v6 = *(_QWORD *)&v2->max_length;
  if ( !v6 )
    goto LABEL_27;
  if ( !(_DWORD)v6 )
    goto LABEL_24;
  v7 = System_Int32__Parse(v2->m_Items[0], 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v7,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      sub_1B6432C(param, method);
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
    if ( !byte_49F7D6A )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, method);
      byte_49F7D6A = 1;
    }
    v11 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  int stringLength; // w24
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w21
  int v18; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int32_t v22; // w21
  int v23; // w23
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Text_StringBuilder_o *v27; // x21
  int32_t i; // w22
  _BOOL4 v29; // w23
  System_String_o **v30; // x8
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+20h] [xbp-80h] BYREF

  v3 = txt;
  if ( (byte_49FE000 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_25367/*"［"*/, v11);
    txt = (System_String_o *)sub_1B640C8(&StringLiteral_25368/*"］"*/, v12);
    byte_49FE000 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !v3 )
    goto LABEL_46;
  stringLength = v3->fields._stringLength;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( stringLength >= 1 )
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
            goto LABEL_46;
          items = v14->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v17,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            v18 = 0;
          }
          else
          {
            v18 = 0;
            v14->fields._size = size + 1;
            items->m_Items[size + 1] = v17;
          }
        }
      }
      ++v17;
    }
    while ( stringLength != v17 );
  }
  v22 = stringLength - 1;
  if ( stringLength - 1 >= 0 )
  {
    v23 = 0;
    do
    {
      if ( System_String__get_Chars(v3, v22, 0LL) == 93 )
      {
        ++v23;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v3, v22, 0LL);
        if ( (unsigned __int16)txt == 91 && --v23 < 0 )
        {
          if ( !v14 )
            goto LABEL_46;
          v24 = v14->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !v24 )
            goto LABEL_46;
          v26 = v14->fields._size;
          if ( (unsigned int)v26 >= v24->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v22,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            v23 = 0;
          }
          else
          {
            v23 = 0;
            v14->fields._size = v26 + 1;
            v24->m_Items[v26 + 1] = v22;
          }
        }
      }
      --v22;
    }
    while ( v22 >= 0 );
  }
  v27 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v15, v16);
  System_Text_StringBuilder___ctor(v27, 0LL);
  if ( stringLength < 1 )
  {
    if ( v27 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v27->klass->vtable._3_ToString.method)(
                                  v27,
                                  v27->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_46:
    sub_1B64324(txt);
  }
  if ( !v14 )
    goto LABEL_46;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      v14,
      (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v33 = v32;
    do
      v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v33,
              (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( i != v33.fields._current && v29 );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v33,
      (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    txt = (System_String_o *)System_String__get_Chars(v3, i, 0LL);
    if ( v29 )
    {
      if ( !v27 )
        goto LABEL_46;
      if ( (unsigned __int16)txt == 91 )
        v30 = (System_String_o **)&StringLiteral_25367/*"［"*/;
      else
        v30 = (System_String_o **)&StringLiteral_25368/*"］"*/;
      System_Text_StringBuilder__Append_60536548(v27, *v30, 0LL);
    }
    else
    {
      if ( !v27 )
        goto LABEL_46;
      System_Text_StringBuilder__Append_60538876(v27, (uint16_t)txt, 0LL);
    }
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v27->klass->vtable._3_ToString.method)(
                              v27,
                              v27->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScriptMessageLabel__GetTagSplitString(
        System_String_o *txt,
        int32_t bindex,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v5; // w22
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v9; // x21
  System_String_o *v10; // x23
  int v11; // w25
  int v12; // w26
  int32_t v13; // w1
  __int16 v14; // w24
  int v15; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_49FE003 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&bindex);
    txt = (System_String_o *)sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FE003 = 1;
  }
  if ( !v6 )
    goto LABEL_32;
  stringLength = v6->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_1B64314(
                                        System_Text_StringBuilder_TypeInfo,
                                        *(_QWORD *)&bindex,
                                        *(_QWORD *)&index);
  System_Text_StringBuilder___ctor_60529900(v9, stringLength, 0LL);
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  v11 = 1;
  if ( v6->fields._stringLength <= v5 )
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
      txt = (System_String_o *)System_Text_StringBuilder__Append_60538876(v9, (uint16_t)txt, 0LL);
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
            System_Text_StringBuilder__Append_60538876(v9, Chars, 0LL);
            ++v5;
          }
          while ( v15 < v6->fields._stringLength );
          v5 = v15;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_60538876(v9, 0x22u, 0LL);
      }
      v13 = v5;
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
      sub_1B64324(txt);
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
  ScriptMessageLabel_c *v26; // x8
  System_String_o *v27; // x28
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  ScriptMessageLabel_c *v31; // x8
  __int64 v32; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_array *v37; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x2
  int32_t v43; // w3
  __int64 v44; // x8
  int v45; // w9
  int v46; // w28
  Il2CppClass **v47; // x26
  System_String_o **v48; // x26
  unsigned __int64 v49; // t1
  System_String_o *v50; // x26
  int32_t stringLength; // w8
  int v52; // w26
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o **v60; // x8
  System_String_o **v61; // x0
  System_String_o *v62; // x1
  System_Collections_Generic_List_object__o *v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x8
  unsigned __int64 i; // x19
  Il2CppObject *v68; // x1
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  System_String_o *v73; // x0
  System_String_o *v74; // [xsp+0h] [xbp-90h]
  System_String_o **v75; // [xsp+10h] [xbp-80h]
  int v76; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FE004 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, className);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&string___TypeInfo, v20);
    sub_1B640C8(&StringLiteral_20043/*"icon_class_{0:D3}"*/, v21);
    sub_1B640C8(&StringLiteral_25363/*"："*/, v22);
    sub_1B640C8(&StringLiteral_11405/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    byte_49FE004 = 1;
  }
  Chars = 0;
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11405/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0LL);
  v26 = ScriptMessageLabel_TypeInfo;
  v27 = (System_String_o *)codeClassSplitStringList;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v26 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v26->static_fields->codeClassSplitStringList )
  {
    v28 = sub_1B64170(string___TypeInfo, 1LL);
    v31 = ScriptMessageLabel_TypeInfo;
    v32 = v28;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v31 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v31->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->codeClassSplitStringList, v32, v29, v30);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_1B64324(codeClassSplitStringList);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(codeClassSplitStringList + 32), (int32_t)v27, v35, v36);
    v26 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v26->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v26);
  if ( !talkName )
    goto LABEL_63;
  v37 = System_String__Split_61401620(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0LL);
  *imageName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)imageName, 0, v38, v39);
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)className, (int32_t)StringLiteral_1/*""*/, v40, v41);
  *charaIndex = -1;
  if ( !v37 )
    goto LABEL_63;
  v44 = *(_QWORD *)&v37->max_length;
  v45 = v44 - 1;
  if ( (int)v44 - 1 < 1 )
    goto LABEL_42;
  v74 = v27;
  v75 = charaName;
  v46 = 0;
  do
  {
    if ( v46 >= (unsigned int)v44 )
      goto LABEL_64;
    v47 = &v37->obj.klass + v46;
    v49 = (unsigned __int64)v47[4];
    v48 = (System_String_o **)(v47 + 4);
    codeClassSplitStringList = v49;
    if ( !v49 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0LL);
    if ( v46 >= v37->max_length )
      goto LABEL_64;
    v50 = *v48;
    if ( !v50 )
      goto LABEL_63;
    stringLength = v50->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v50, 8, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v50 = System_Char__ToString((uint16_t)&Chars, 0LL);
LABEL_30:
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v50, v34);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v52 = ScriptMessageLabel__ConvertInteger(v50, v34);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v52,
                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v76 = v52;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
      v54 = System_String__Format((System_String_o *)StringLiteral_20043/*"icon_class_{0:D3}"*/, v53, 0LL);
      *imageName = v54;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)imageName, (int32_t)v54, v55, v56);
      if ( !entity )
        goto LABEL_63;
      v57 = System_String__Concat_61375396(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_25363/*"："*/,
              0LL);
      *className = v57;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)className, (int32_t)v57, v58, v59);
    }
LABEL_33:
    v44 = *(_QWORD *)&v37->max_length;
    ++v46;
    v45 = v44 - 1;
  }
  while ( v46 < (int)v44 - 1 );
  charaName = v75;
  v27 = v74;
LABEL_42:
  if ( (*charaIndex & 0x80000000) != 0 )
  {
    *charaName = talkName;
    v61 = charaName;
    LODWORD(v62) = (_DWORD)talkName;
  }
  else
  {
    if ( (int)v44 >= 3 )
    {
      v63 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_string__TypeInfo,
                                                           v34,
                                                           v42);
      System_Collections_Generic_List_object____ctor(
        v63,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
      v66 = *(_QWORD *)&v37->max_length;
      if ( (int)v66 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v66; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v66 )
              goto LABEL_64;
            if ( !v63 )
              goto LABEL_63;
            v68 = (Il2CppObject *)v37->m_Items[i];
            items = v63->fields._items;
            v70 = Method_System_Collections_Generic_List_string__Add__;
            ++v63->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v63->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v63,
                v68,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = &items->obj.klass + size;
              v63->fields._size = size + 1;
              v72[4] = (Il2CppClass *)v68;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v68, v64, v65);
            }
          }
          LODWORD(v66) = v37->max_length;
        }
      }
      v73 = System_String__Join_61391052(v27, (System_Collections_Generic_IEnumerable_string__o *)v63, 0LL);
      LODWORD(v62) = (_DWORD)v73;
      *charaName = v73;
    }
    else
    {
      if ( v44 )
      {
        if ( (_DWORD)v44 )
        {
          v60 = &v37->m_Items[v45];
          goto LABEL_60;
        }
LABEL_64:
        sub_1B6432C(codeClassSplitStringList, v34);
      }
      v60 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v62 = *v60;
      *charaName = *v60;
    }
    v61 = charaName;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v61, (int32_t)v62, v42, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w22
  int32_t v12; // w24
  ScriptMessageLabel_c *v13; // x0
  int v14; // w26
  System_String_o *v15; // x23
  void *v16; // x0
  const MethodInfo *v17; // x1
  System_String_o *v18; // x23
  int32_t v19; // w0
  __int64 v20; // x8
  System_String_o *v21; // x0
  System_String_o *v22; // x1

  if ( (byte_49FDFF9 & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, *(_QWORD *)&len);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FDFF9 = 1;
  }
  if ( !text )
  {
    *dispText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)dispText,
      (int32_t)StringLiteral_1/*""*/,
      (int32_t)dispText,
      (int32_t)length);
    v12 = 0;
    goto LABEL_44;
  }
  v11 = 0;
  if ( !len )
  {
    v12 = 0;
    goto LABEL_40;
  }
  v12 = 0;
  if ( text->fields._stringLength < 1 )
    goto LABEL_40;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(text, v11, 0LL) != 91 )
    {
      ++v12;
      goto LABEL_22;
    }
    if ( System_String__get_Chars(text, v11 + 1, 0LL) == 35 )
      break;
    v13 = ScriptMessageLabel_TypeInfo;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v13 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v13->static_fields->LINE_ORDER, 0LL) )
    {
      v16 = ScriptMessageLabel_TypeInfo;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v16 = ScriptMessageLabel_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL);
      if ( v20 )
      {
        v21 = System_String__Substring_61394392(
                text,
                *(_DWORD *)(v20 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v20 + 16),
                0LL);
        v19 = System_Int32__Parse(v21, 0LL);
        goto LABEL_39;
      }
LABEL_45:
      sub_1B64324(v16);
    }
    v11 += 2;
    if ( v11 < text->fields._stringLength )
    {
      v14 = 0;
      do
      {
        if ( System_String__get_Chars(text, v11, 0LL) == 91 )
        {
          ++v14;
        }
        else if ( System_String__get_Chars(text, v11, 0LL) == 93 )
        {
          if ( !v14 )
            break;
          --v14;
        }
        ++v11;
      }
      while ( v11 < text->fields._stringLength );
    }
LABEL_22:
    ++v11;
    if ( v12 == len || v11 >= text->fields._stringLength )
      goto LABEL_40;
  }
  v15 = System_String__Substring_61394392(text, v11 + 2, text->fields._stringLength - 2, 0LL);
  v16 = (void *)sub_1B64170(char___TypeInfo, 1LL);
  if ( !v16 )
    goto LABEL_45;
  v17 = (const MethodInfo *)v16;
  if ( !*((_DWORD *)v16 + 6) )
    goto LABEL_46;
  *((_WORD *)v16 + 16) = 58;
  if ( !v15 )
    goto LABEL_45;
  v16 = System_String__Split_61397544(v15, (System_Char_array *)v16, 0LL);
  if ( !v16 )
    goto LABEL_45;
  if ( !*((_DWORD *)v16 + 6) )
LABEL_46:
    sub_1B6432C(v16, v17);
  v18 = (System_String_o *)*((_QWORD *)v16 + 4);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v19 = ScriptMessageLabel__StrlenByDisp(v18, v17);
LABEL_39:
  v12 += v19;
LABEL_40:
  if ( v11 <= text->fields._stringLength )
    v22 = System_String__Substring_61394392(text, 0, v11, 0LL);
  else
    v22 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)dispText, (int32_t)v22, (int32_t)dispText, (int32_t)length);
LABEL_44:
  *length = v12;
}


int32_t __fastcall ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_49FDFF8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17316/*"bottom"*/, method);
    sub_1B640C8(&StringLiteral_23884/*"top"*/, v3);
    sub_1B640C8(&StringLiteral_17725/*"center"*/, v4);
    byte_49FDFF8 = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0LL)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_23884/*"top"*/, 0LL) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17725/*"center"*/, 0LL) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_17316/*"bottom"*/, 0LL) )
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
  if ( (byte_49FDFFF & 1) == 0 )
  {
    text = (System_String_o *)sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    byte_49FDFFF = 1;
  }
  if ( !v2 )
    sub_1B64324(text);
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
  if ( (byte_49FDFFE & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v3);
    txt = (System_String_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v4);
    byte_49FDFFE = 1;
  }
  if ( !v2 )
    sub_1B64324(txt);
  v5 = 0;
  while ( v5 < v2->fields._stringLength )
  {
    v6 = System_String__IndexOf_61406980(v2, (System_String_o *)StringLiteral_15744/*"["*/, v5, 0LL);
    if ( (v6 & 0x80000000) != 0 )
      break;
    v7 = v6;
    v8 = System_String__IndexOf_61406980(v2, (System_String_o *)StringLiteral_16000/*"]"*/, v6, 0LL);
    if ( (v8 & 0x80000000) != 0 )
      break;
    v5 = v8 + 1;
    v10 = System_String__Substring_61394392(v2, v7, v8 + 1 - v7, 0LL);
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
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  float playVoiceVolume; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x1

  if ( (byte_49FE017 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__, v3);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    byte_49FE017 = 1;
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
      sub_1B64324(IsBusyVoice);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, struct System_String_o *, __int64, _QWORD))setReplayingVoice->fields.m_target)(
      setReplayingVoice->fields.original_method_info,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1LL,
      *(_QWORD *)&setReplayingVoice->fields.extra_arg);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    v10 = this->fields.playVoiceAssetName;
    v11 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0LL);
    SoundManager__playVoice_38387180(v10, v11, playVoiceVolume, v15, 0LL);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v16);
  }
}


void __fastcall ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
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
  UnityEngine_Object_o *main; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20
  const MethodInfo *v27; // x1

  if ( (byte_49FE007 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FE007 = 1;
  }
  this->fields.fontType = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v18, v19, v20);
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
    sub_1B64324(gameObject);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v27);
}


System_String_o *__fastcall ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *IsNullOrEmpty; // x0
  int32_t v6; // w24
  System_String_o *v7; // x20
  int v8; // w25
  int32_t v9; // w22
  int32_t v10; // w0
  int32_t v11; // w21
  System_String_o *v12; // x23
  int32_t v13; // w24
  __int16 v14; // w25

  if ( (byte_49FDFFD & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FDFFD = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_27;
    v6 = 0;
    v7 = text;
LABEL_6:
    v8 = 1 - v6;
    while ( v6 < text->fields._stringLength )
    {
      v9 = v6;
      if ( System_String__get_Chars(text, v6, 0LL) != 91
        || (++v6, v10 = System_String__IndexOf_61405612(text, 0x5Du, v9 + 1, 0LL), (v10 & 0x80000000) != 0) )
      {
LABEL_23:
        v11 = v9;
LABEL_24:
        v6 = v11 + 1;
        goto LABEL_6;
      }
      v11 = v10;
      IsNullOrEmpty = System_String__Substring_61394392(text, v9, v10 + v8, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      v12 = IsNullOrEmpty;
      --v8;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 10 )
      {
        v13 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v12, v13, 0LL);
          v14 = (__int16)IsNullOrEmpty;
          if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          if ( (unsigned __int16)(v14 - 48) >= 0xAu && (unsigned __int16)((v14 & 0xFFDF) - 65) > 5u )
            goto LABEL_23;
          ++v13;
        }
        while ( v13 <= v12->fields._stringLength - 2 );
        if ( v7 )
        {
          IsNullOrEmpty = System_String__Replace_61395016(v7, v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( IsNullOrEmpty )
          {
            v7 = IsNullOrEmpty;
            IsNullOrEmpty = (System_String_o *)System_String__IndexOf_61406964(
                                                 IsNullOrEmpty,
                                                 (System_String_o *)StringLiteral_15763/*"[-]"*/,
                                                 0LL);
            if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
              goto LABEL_24;
            if ( StringLiteral_15763/*"[-]"*/ )
            {
              v7 = System_String__Remove(v7, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_15763/*"[-]"*/ + 4), 0LL);
              goto LABEL_24;
            }
          }
        }
LABEL_27:
        sub_1B64324(IsNullOrEmpty);
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
  __int64 Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  UILabel_o *v30; // x21
  Il2CppObject *v31; // x0
  __int64 *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  UISprite_o *v35; // x20
  UnityEngine_Component_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x24
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v42; // w1
  const MethodInfo *v43; // x1
  System_String_o *colorTag; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  EventDelegate_Callback_o *v51; // x23
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE00A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, mainObject);
    sub_1B640C8(&AtlasManager_TypeInfo, v14);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v15);
    sub_1B640C8(&EventDelegate_TypeInfo, v16);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v17);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_ScriptMessageLabel_OnClickPlayVoice__, v21);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v22);
    sub_1B640C8(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__, v23);
    sub_1B640C8(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_1/*""*/, v25);
    byte_49FE00A = 1;
  }
  v26 = sub_1B64314(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo, mainObject, rubyObject);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_45;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v28, v29);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v30 = (UILabel_o *)Component_object;
  v31 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v26 + 24) = v31;
  v32 = (__int64 *)(v26 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 24), (int32_t)v31, v33, v34);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v35 = (UISprite_o *)Component_object;
  v36 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v39 = sub_1B64314(System_Action_TypeInfo, v37, v38);
  System_Action___ctor(
    (System_Action_o *)v39,
    (Il2CppObject *)v26,
    Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__,
    0LL);
  Component_object = System_String__op_Inequality(this->fields.imageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v35->klass->vtable._8_set_alpha.method)(
      v35,
      v35->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    imageText = this->fields.imageText;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMark(v35, imageText, 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v35->klass->vtable._33_MakePixelPerfect.method)(
      v35,
      v35->klass->vtable._34_get_minWidth.methodPtr);
    widthSize = this->fields.widthSize;
    v42 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v35, v42, this->fields.fontSize, 0LL);
    colorTag = this->fields.colorTag;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    Color = ScriptMessageLabel__GetColor(colorTag, v43);
    UIWidget__set_color((UIWidget_o *)v35, Color, 0LL);
    if ( !v39 )
      goto LABEL_45;
    Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v39 + 24))(
                         *(_QWORD *)(v39 + 64),
                         *(_QWORD *)(v39 + 40));
    if ( !v30 )
      goto LABEL_45;
    UILabel__set_text(v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v36 )
      goto LABEL_45;
    goto LABEL_33;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0LL) )
  {
    this->fields.playVoiceEffect = playVoiceEffect;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceEffect, (int32_t)playVoiceEffect, v45, v46);
    if ( v36 )
    {
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v36, 0LL);
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
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v36[8].monitor;
            v51 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v49, v50);
            EventDelegate_Callback___ctor(v51, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0LL);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            Component_object = (__int64)EventDelegate__Set_46493216(monitor, v51, 0LL);
            if ( v30 )
            {
              UILabel__set_text(v30, 0LL, 0LL);
              Component_object = *v32;
              if ( *v32 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0LL, 0LL);
                if ( v35 )
                {
                  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v35->klass->vtable._8_set_alpha.method)(
                    v35,
                    v35->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_1B64324(Component_object);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(fontType, 0LL, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_45;
    UILabel__set_trueTypeFont(v30, this->fields.fontType, 0LL);
  }
  else if ( !v30 )
  {
    goto LABEL_45;
  }
  UILabel__set_fontSize(v30, this->fields.fontSize, 0LL);
  UILabel__set_text(v30, this->fields.mainText, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  v52.fields.z = 0.0;
  v52.fields.y = -this->fields.yOffset;
  v52.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v52, 0LL);
  if ( !v39 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v39 + 24))(
                       *(_QWORD *)(v39 + 64),
                       *(_QWORD *)(v39 + 40));
  if ( !v35 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer, float))v35->klass->vtable._8_set_alpha.method)(
                       v35,
                       v35->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                       0.0);
  if ( !v36 )
    goto LABEL_45;
LABEL_33:
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v36, 0LL);
  if ( !Component_object )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
}


void __fastcall ScriptMessageLabel__StartPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FE018 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE018 = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
  }
}


void __fastcall ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playVoiceEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FE019 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE019 = 1;
  }
  this->fields.isPlayingVoice = 0;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0LL, 0LL) )
  {
    v4 = this->fields.playVoiceEffect;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
  }
}


int32_t __fastcall ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDFFB & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    byte_49FDFFB = 1;
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

  if ( (byte_49FDFFA & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, *(_QWORD *)&len);
    byte_49FDFFA = 1;
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
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
  int32_t v37; // w25
  System_String_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x3
  float VerticalAlignOffset; // s0
  float v43; // s8
  float v44; // s0
  float y; // s8
  float v46; // s1
  const MethodInfo *v47; // x1
  float v48; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE00D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, main);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_25223/*"・"*/, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FE00D = 1;
  }
  v18 = System_String__Concat_61375396(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v18, v19, v20);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)colorTag, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v31, v32, v33);
  this->fields.fontType = font;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v34, v35);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v37 = 0;
    do
    {
      v38 = System_String__Concat_61375396(*p_rubyText, (System_String_o *)StringLiteral_25223/*"・"*/, 0LL);
      *p_rubyText = v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v38, v39, v40);
      ++v37;
    }
    while ( v37 < mainStr->fields._stringLength );
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
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v41);
    this->fields.yOffset = VerticalAlignOffset;
    transform = *main;
    if ( *main )
    {
      v43 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v54.fields.x = pos->fields.x;
        v54.fields.z = 0.0;
        v54.fields.y = pos->fields.y - v43;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v54, 0LL);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_1B64324(transform);
  }
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v53.fields.x = pos->fields.x;
  v53.fields.y = pos->fields.y;
  v53.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v53, 0LL);
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
                                     - (float)(v44 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + (float)((float)(v46 + v46) / 3.0);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  v55.fields.x = this->fields.rubyPosition.fields.x;
  v55.fields.y = this->fields.rubyPosition.fields.y;
  v55.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v55, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_35;
  v48 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v48;
  pos->fields.x = v48 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v47);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t v16; // w1
  int32_t v17; // w1
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
  struct UnityEngine_Vector2_o v29; // x8
  UnityEngine_Object_o *v30; // x22
  UnityEngine_Object_o *frontEffect; // x22
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v36; // x20
  UnityEngine_GameObject_o *v37; // x19
  int32_t v38; // w1
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE013 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, effect);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_6824/*"FrontCommonUI"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49FE013 = 1;
  }
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v16, (int32_t)pos, (int32_t)effectName);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v17, v18, v19);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v20, v21, v22);
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v23, v24, v25);
  v26 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v26, v27, v28);
  v29 = *pos;
  this->fields.dispLength = dlength;
  this->fields.effectWait = ewait;
  v30 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.mainPosition = v29;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v34 = this->fields.frontEffect;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v39.fields.z = 0.0;
      v39.fields.x = x;
      v39.fields.y = y;
      CommonEffectManager__CreateParam_40326320(v34, effectName, v39, 0LL, 0, 0, 0, 0LL);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v36 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0LL),
            !v36) )
      {
        sub_1B64324(transform);
      }
      SyncTransformComponent__setChild(v36, (UnityEngine_Transform_o *)transform, 0LL);
      v37 = this->fields.frontEffect;
      v38 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_6824/*"FrontCommonUI"*/, 0LL);
      GameObjectExtensions__SetLayerRecursively(v37, v38, 0LL);
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
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  UISprite_o *v28; // x24
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

  if ( (byte_49FE011 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, image);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FE011 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v14, (int32_t)pos, fontSize);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v15, v16, v17);
  this->fields.imageText = imageStr;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v18, v19);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v20, v21, v22);
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v23, v24, v25);
  this->fields.fontType = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v26, v27);
  this->fields.fontSize = fontSize;
  v28 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v28, imageStr, 0LL);
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
    sub_1B64324(transform);
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
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t v20; // w1
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
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
  UIWidget_o *transform; // x0
  UISprite_o *v35; // x26
  int32_t v36; // w25
  float v37; // s0
  float v38; // s8
  float v39; // s1
  float v40; // s0
  int32_t v41; // w25
  float x; // s0
  float v43; // s8
  float y; // s9
  float v45; // s1
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE014 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, image);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49FE014 = 1;
  }
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v20, (int32_t)ruby, (int32_t)pos);
  v21 = System_String__Concat_61375396(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v21, v22, v23);
  this->fields.imageText = imageStr;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v24, v25);
  v26 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v26, v27, v28);
  v29 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v29, v30, v31);
  this->fields.fontType = font;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v32, v33);
  this->fields.fontSize = fontSize;
  if ( !*ruby )
    goto LABEL_31;
  this->fields.rubySize = (*ruby)->fields.mFontSize;
  v35 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v35, imageStr, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._33_MakePixelPerfect.method)(
    transform,
    transform->klass->vtable._34_get_minWidth.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v36 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v38 = v37;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  transform = (UIWidget_o *)*image;
  v40 = (float)(v38 * (float)v36) / v39;
  v41 = v40 == INFINITY ? 0x80000000 : (int)v40;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v41, this->fields.fontSize, 0LL);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v48.fields.r = 1.0;
  v48.fields.g = 1.0;
  v48.fields.b = 1.0;
  v48.fields.a = 1.0;
  UIWidget__set_color(transform, v48, 0LL);
  x = pos->fields.x;
  v43 = (float)v41;
  if ( horizontalAlign == 2 )
  {
    x = x - v43;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v43 * -0.5);
  }
  pos->fields.x = x;
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_31;
  v46.fields.x = pos->fields.x;
  v46.fields.y = pos->fields.y;
  v46.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v46, 0LL);
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
    || (this->fields.rubyPosition.fields.x = (float)((float)(v43 * 0.5) + pos->fields.x)
                                           - (float)(((float (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
                                                       transform,
                                                       transform->klass->vtable._23_get_drawingDimensions.methodPtr)
                                                   * 0.5),
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr),
        this->fields.rubyPosition.fields.y = y + v45,
        (transform = (UIWidget_o *)*ruby) == 0LL)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1B64324(transform);
  }
  v47.fields.x = this->fields.rubyPosition.fields.x;
  v47.fields.y = this->fields.rubyPosition.fields.y;
  v47.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v47, 0LL);
  this->fields.widthSize = v43;
  pos->fields.x = pos->fields.x + v43;
  this->fields.dispLength = 1;
}


void __fastcall ScriptMessageLabel__UpdateImage_41361868(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, image);
    byte_49F700A = 1;
  }
  ScriptMessageLabel__UpdateImage_41362020(
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
void __fastcall ScriptMessageLabel__UpdateImage_41362020(
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
  __int64 v18; // x1
  int32_t v19; // w1
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
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
  float v33; // s0
  int32_t v34; // w8
  UISprite_o *v35; // x25
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
  if ( (byte_49FE012 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, image);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FE012 = 1;
  }
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v19, (int32_t)pos, fontSize);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v20, v21, v22);
  this->fields.imageText = imageStr;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v28, v29, v30);
  this->fields.fontType = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v31, v32);
  v33 = (float)fontSize * scale;
  v34 = (int)v33;
  if ( v33 == INFINITY )
    v34 = 0x80000000;
  this->fields.fontSize = v34;
  v35 = *image;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v35, imageStr, 0LL);
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
    sub_1B64324(transform);
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
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_String_o *v19; // x0
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
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  UILabel_o *transform; // x0
  const MethodInfo *v37; // x3
  float VerticalAlignOffset; // s0
  float v39; // s8
  const MethodInfo *v40; // x1
  float v41; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE00C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, main);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FE00C = 1;
  }
  v19 = System_String__Concat_61375396(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v19, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v22, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v31, v32, v33);
  this->fields.fontType = font;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v34, v35);
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
        v43.fields.x = pos->fields.x;
        v43.fields.y = pos->fields.y;
        v43.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_1B64324(transform);
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v37);
  this->fields.yOffset = VerticalAlignOffset;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v39 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_23;
  v44.fields.x = pos->fields.x;
  v44.fields.z = 0.0;
  v44.fields.y = pos->fields.y - v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0LL);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v41 = ((float (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
          transform,
          transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.widthSize = v41;
  pos->fields.x = v41 + pos->fields.x;
  mainText = this->fields.mainText;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v40);
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
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w1
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  UISprite_o *v29; // x24
  System_String_o *imageText; // x25
  UISprite_o *transform; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v33; // x24
  int32_t v34; // w23
  const MethodInfo *v35; // x1
  UIWidget_o *v36; // x22
  System_String_o *colorTag; // x25
  int v38; // s0
  float v42; // s8
  struct UnityEngine_Vector2_o v43; // x8
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE010 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, image);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FE010 = 1;
  }
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v15, (int32_t)pos, fontSize);
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v16, v17, v18);
  this->fields.imageText = imageStr;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, (int32_t)imageStr, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v24, v25, v26);
  this->fields.fontType = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v27, v28);
  this->fields.fontSize = fontSize;
  v29 = *image;
  imageText = this->fields.imageText;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMark(v29, imageText, 0LL);
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
  v33 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v34 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v34, fontSize, 0LL);
  v36 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  *(UnityEngine_Color_o *)&v38 = ScriptMessageLabel__GetColor(colorTag, v35);
  if ( !v36
    || (UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v38, 0LL),
        v42 = (float)v34,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v34 / (float)v33->fields.width) * 6.0)),
        (transform = *image) == 0LL)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B64324(transform);
  }
  v44.fields.x = pos->fields.x;
  v44.fields.y = pos->fields.y;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0LL);
  v43 = *pos;
  this->fields.widthSize = v42;
  this->fields.mainPosition = v43;
  pos->fields.x = pos->fields.x + v42;
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
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  ScriptMessageLabel_c *v25; // x0

  if ( (byte_49FE015 & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, assetName);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FE015 = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.setReplayingVoice,
    (int32_t)setReplayingVoice,
    (int32_t)objectName,
    (int32_t)setReplayingVoice);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v18, v19, v20);
  this->fields.playVoiceAssetName = assetName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, (int32_t)assetName, v21, v22);
  this->fields.playVoiceObjectName = objectName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, (int32_t)objectName, v23, v24);
  this->fields.playVoiceVolume = volume;
  v25 = ScriptMessageLabel_TypeInfo;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v25 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v25->static_fields->PLAY_VOICE_POSITION_X;
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
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  UILabel_o *transform; // x0
  const MethodInfo *v39; // x3
  float VerticalAlignOffset; // s0
  float v41; // s8
  float v42; // s0
  float y; // s8
  float v44; // s1
  const MethodInfo *v45; // x1
  float v46; // s0
  System_String_o *mainText; // x20
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE00E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, main);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    byte_49FE00E = 1;
  }
  v21 = System_String__Concat_61375396(this->fields.colorTag, mainStr, 0LL);
  this->fields.mainText = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainText, (int32_t)v21, v22, v23);
  v24 = System_String__Concat_61375396(this->fields.colorTag, rubyStr, 0LL);
  this->fields.rubyText = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyText, (int32_t)v24, v25, v26);
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageText, v27, v28, v29);
  v30 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAssetName, v30, v31, v32);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceObjectName, v33, v34, v35);
  this->fields.fontType = font;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)font, v36, v37);
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
    sub_1B64324(transform);
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
        v50.fields.x = pos->fields.x;
        v50.fields.z = 0.0;
        v50.fields.y = pos->fields.y - v41;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0LL);
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
  v49.fields.x = pos->fields.x;
  v49.fields.y = pos->fields.y;
  v49.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0LL);
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
                                     - (float)(v42 * 0.5);
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))transform->klass->vtable._22_get_localSize.method)(
    transform,
    transform->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyPosition.fields.y = y + v44;
  transform = *ruby;
  if ( !*ruby )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_33;
  v51.fields.x = this->fields.rubyPosition.fields.x;
  v51.fields.y = this->fields.rubyPosition.fields.y;
  v51.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0LL);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
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
  if ( (byte_49FE01C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FE01C = 1;
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
    sub_1B64324(this);
  }
  if ( !ruby )
    goto LABEL_22;
  UILabel__set_text(ruby, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}