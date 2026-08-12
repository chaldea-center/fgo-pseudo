void ScriptMessageLabel___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  struct ScriptMessageLabel_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_object__int__o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  struct ScriptMessageLabel_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_Dictionary_int__int__o *v26; // x19
  struct ScriptMessageLabel_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_59728DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_16621/*"[line "*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_22614/*"medium"*/);
    sub_2213A60(&StringLiteral_24798/*"small"*/);
    sub_2213A60(&StringLiteral_26299/*"x-small"*/);
    sub_2213A60(&StringLiteral_22232/*"large"*/);
    sub_2213A60(&StringLiteral_26279/*"x-large"*/);
    byte_59728DE = 1;
  }
  v7 = StringLiteral_16621/*"[line "*/;
  static_fields = ScriptMessageLabel_TypeInfo->static_fields;
  static_fields->PLAY_VOICE_POSITION_X = -490.0;
  static_fields->LINE_ORDER = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->LINE_ORDER, v7, v1, v2, v3, v4, v5, v6);
  v9 = ScriptMessageLabel_TypeInfo->static_fields;
  v9->codeClassSplitStringList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->codeClassSplitStringList, 0, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v16,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v16 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_923/*"-"*/,
    29,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_26299/*"x-small"*/,
    19,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_24798/*"small"*/,
    24,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_22614/*"medium"*/,
    29,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_22232/*"large"*/,
    48,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v16,
    (Il2CppObject *)StringLiteral_26279/*"x-large"*/,
    64,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  v19 = ScriptMessageLabel_TypeInfo->static_fields;
  v19->fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->fontSizes, (int32_t)v16, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v26 )
LABEL_6:
    sub_2213CDC(v17, v18);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    24,
    0,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    29,
    1,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    48,
    2,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v26,
    64,
    3,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v27 = ScriptMessageLabel_TypeInfo->static_fields;
  v27->fontSizeIndexTable = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->fontSizeIndexTable, (int32_t)v26, v28, v29, v30, v31, v32, v33);
}


void ScriptMessageLabel___ctor(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_59728DD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728DD = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.colorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, v10, v11, v12, v13, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v17, v18, v19, v20, v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v31, v32, v33, v34, v35, v36, v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v38, v39, v40, v41, v42, v43, v44);
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
  int v13; // w23
  uint16_t v14; // w0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Text_StringBuilder_o *v24; // x1
  Il2CppClass **v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  System_Text_StringBuilder_o *v35; // x1
  Il2CppClass **v36; // x0

  if ( (byte_59728C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    byte_59728C5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !txt )
    goto LABEL_36;
  stringLength = txt->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v9, stringLength, 0);
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
        goto LABEL_13;
      if ( !v9 )
        goto LABEL_36;
      Chars = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                v9,
                v9->klass->vtable._3_ToString.method);
      if ( !v5 )
        goto LABEL_36;
      items = v5->fields._items;
      v22 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_36;
      size = v5->fields._size;
      v24 = (System_Text_StringBuilder_o *)Chars;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Chars,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v24;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v24, v15, v16, v17, v18, v19, v20);
      }
      System_Text_StringBuilder__set_Length(v9, 0, 0);
      v10 = 0;
LABEL_20:
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
LABEL_13:
    if ( !v9 )
      goto LABEL_36;
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_75737396(v9, Chars, 0);
    if ( v12 == 34 )
    {
      if ( bindex < txt->fields._stringLength )
      {
        do
        {
          v13 = bindex + 1;
          v14 = System_String__get_Chars(txt, bindex, 0);
          if ( v14 == 34 )
            break;
          System_Text_StringBuilder__Append_75737396(v9, v14, 0);
          ++bindex;
        }
        while ( v13 < txt->fields._stringLength );
        bindex = v13;
      }
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_75737396(v9, 0x22u, 0);
    }
    goto LABEL_20;
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
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_36:
    sub_2213CDC(Chars, v7);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v32->obj.klass + v34;
    v5->fields._size = v34 + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v35, v26, v27, v28, v29, v30, v31);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void ScriptMessageLabel__CheckPlayingVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *playVoiceAssetName; // x20
  System_String_o *playVoiceObjectName; // x21

  if ( (byte_59728D9 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59728D9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.playVoiceAssetName, 0)
    && !System_String__IsNullOrEmpty(this->fields.playVoiceObjectName, 0) )
  {
    playVoiceAssetName = this->fields.playVoiceAssetName;
    playVoiceObjectName = this->fields.playVoiceObjectName;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v3);
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

  if ( (byte_59728CE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (ScriptMessageLabel_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728CE = 1;
  }
  if ( !mainObject )
    goto LABEL_12;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   mainObject,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_12;
  v12 = (UILabel_o *)this;
  this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                   rubyObject,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !imageObject
    || (v13 = (UILabel_o *)this,
        this = (ScriptMessageLabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                         imageObject,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !v12)
    || (v14 = this, UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0), !v13)
    || (UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0), !v14)
    || (this = (ScriptMessageLabel_o *)((__int64 (__fastcall *)(ScriptMessageLabel_o *, Il2CppClass *, double))v14->klass[1]._1.element_class)(
                                         v14,
                                         v14->klass[1]._1.castClass,
                                         0.0),
        !playVoiceObject)
    || (UnityEngine_GameObject__SetActive(playVoiceObject, 0, 0), !playVoiceEffect) )
  {
LABEL_12:
    sub_2213CDC(this, mainObject);
  }
  UnityEngine_GameObject__SetActive(playVoiceEffect, 0, 0);
}


int32_t ScriptMessageLabel__ConvertCharaIndex(System_String_o *s, const MethodInfo *method)
{
  int32_t v3; // w21
  int32_t v4; // w20
  uint16_t Chars; // w0

  if ( !s )
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
  if ( s->fields._stringLength < 1 )
    return 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  do
  {
    Chars = System_String__get_Chars(s, v3, 0);
    if ( (unsigned __int16)(Chars - 58) >= 0xFFF6u )
    {
      v4 = Chars + 11 * v4 - 48;
    }
    else if ( (unsigned __int16)(Chars + 230) >= 0xFFF6u )
    {
      v4 = Chars + 11 * v4 - 65296;
    }
    else
    {
      if ( Chars != 65293 && Chars != 45 || v5 != 1 )
        return 0;
      v5 = -1;
    }
    ++v3;
  }
  while ( v3 < s->fields._stringLength );
  return v5 * v4;
}


void ScriptMessageLabel__DestoryEffect(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_frontEffect; // x20
  UnityEngine_Object_o *frontEffect; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_effect; // x19
  UnityEngine_Object_o *v14; // x20
  struct UnityEngine_GameObject_o *effect; // t1
  __int64 v16; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_59728CB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728CB = 1;
  }
  p_frontEffect = &this->fields.frontEffect;
  frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(frontEffect, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_frontEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83459800(v6, 0);
    *p_frontEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.frontEffect, 0, v7, v8, v9, v10, v11, v12);
  }
  effect = this->fields.effect;
  p_effect = (MissionNaviTransitionBoardItem_o *)&this->fields.effect;
  v14 = (UnityEngine_Object_o *)effect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_effect->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_effect->klass = 0;
    sub_2213A04(p_effect, 0, v18, v19, v20, v21, v22, v23);
  }
}


void ScriptMessageLabel__Destroy(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_Fields *p_fields; // x20
  UnityEngine_Object_o *main; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UILabel_o **p_ruby; // x20
  UnityEngine_Object_o *ruby; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UISprite_o **p_image; // x20
  UnityEngine_Object_o *image; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UIButton_o **p_playVoice; // x20
  UnityEngine_Object_o *playVoice; // x21
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UnityEngine_GameObject_o **p_playVoiceEffect; // x20
  UnityEngine_Object_o *playVoiceEffect; // x21
  __int64 v47; // x1
  UnityEngine_Object_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7

  if ( (byte_59728C9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728C9 = 1;
  }
  p_fields = &this->fields;
  main = (UnityEngine_Object_o *)this->fields.main;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)p_fields->main;
    if ( !p_fields->main )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    p_fields->main = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v9, v10, v11, v12, v13, v14);
  }
  p_ruby = &this->fields.ruby;
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_39;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_83459800(v18, 0);
    *p_ruby = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ruby, 0, v19, v20, v21, v22, v23, v24);
  }
  p_image = &this->fields.image;
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_image;
    if ( !*p_image )
      goto LABEL_39;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    UnityEngine_Object__Destroy_83459800(v28, 0);
    *p_image = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.image, 0, v29, v30, v31, v32, v33, v34);
  }
  p_playVoice = &this->fields.playVoice;
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(playVoice, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoice;
    if ( !*p_playVoice )
      goto LABEL_39;
    v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    UnityEngine_Object__Destroy_83459800(v38, 0);
    *p_playVoice = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoice, 0, v39, v40, v41, v42, v43, v44);
  }
  p_playVoiceEffect = &this->fields.playVoiceEffect;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(playVoiceEffect, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_playVoiceEffect;
    if ( *p_playVoiceEffect )
    {
      v48 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
      UnityEngine_Object__Destroy_83459800(v48, 0);
      *p_playVoiceEffect = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceEffect, 0, v49, v50, v51, v52, v53, v54);
      goto LABEL_38;
    }
LABEL_39:
    sub_2213CDC(v6, v5);
  }
LABEL_38:
  ScriptMessageLabel__DestoryEffect(this, v5);
  this->fields.fontType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v55, v56, v57, v58, v59, v60);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x1
  int i; // w25
  uint16_t v20; // w22
  System_String_o **v21; // x0

  if ( (byte_59728BF & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728BF = 1;
  }
  if ( System_String__IsNullOrEmpty(*text, 0) )
    return 0;
  v9 = *text;
  if ( !*text )
    goto LABEL_29;
  Chars = System_String__get_Chars(v9, 0, 0);
  result = 0;
  if ( Chars != 91 )
    return result;
  v9 = *text;
  if ( !*text )
LABEL_29:
    sub_2213CDC(v9, v7);
  stringLength = v9->fields._stringLength;
  if ( stringLength != 10 && stringLength != 8 )
  {
    if ( stringLength == 3 && System_String__op_Equality(v9, (System_String_o *)StringLiteral_16447/*"[-]"*/, 0) )
    {
      if ( !overrideColor )
      {
        v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
        v21 = colorTag;
        *colorTag = v18;
        goto LABEL_27;
      }
      goto LABEL_24;
    }
    return 0;
  }
  if ( System_String__get_Chars(v9, stringLength - 1, 0) != 93 )
    return 0;
  for ( i = 2; i != stringLength; ++i )
  {
    v9 = *text;
    if ( !*text )
      goto LABEL_29;
    v20 = System_String__get_Chars(v9, i - 1, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v7);
    if ( (unsigned __int16)(v20 - 48) >= 0xAu
      && ((unsigned int)v20 - 65 > 0x25 || ((1LL << ((unsigned __int8)v20 - 65)) & 0x3F0000003FLL) == 0) )
    {
      return 0;
    }
  }
  if ( !overrideColor )
  {
    v18 = *text;
    goto LABEL_26;
  }
LABEL_24:
  *text = overrideColor;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)text, (int32_t)overrideColor, v12, v13, v14, v15, v16, v17);
  *colorTag = overrideColor;
  v21 = colorTag;
  LODWORD(v18) = (_DWORD)overrideColor;
LABEL_27:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v21, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t ScriptMessageLabel__GetBraceIndex(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  int32_t v4; // w19
  int v5; // w21

  if ( !txt )
    sub_2213CDC(0, *(_QWORD *)&start);
  v4 = start;
  if ( txt->fields._stringLength > start )
  {
    v5 = 0;
    do
    {
      if ( System_String__get_Chars(txt, v4, 0) == 91 )
      {
        ++v5;
      }
      else if ( System_String__get_Chars(txt, v4, 0) == 93 )
      {
        if ( !v5 )
          return v4;
        --v5;
      }
      ++v4;
    }
    while ( v4 < txt->fields._stringLength );
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
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59728D2 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&StringLiteral_395/*"#"*/);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D2 = 1;
  }
  *(_QWORD *)&v14.fields.r = 0;
  *(_QWORD *)&v14.fields.b = 0;
  r = 1.0;
  if ( System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_1/*""*/, 0)
    && System_String__op_Inequality(colorTag, (System_String_o *)StringLiteral_16447/*"[-]"*/, 0) )
  {
    v4 = sub_2213B20(char___TypeInfo, 2);
    if ( !v4 )
      goto LABEL_14;
    v6 = *(_DWORD *)(v4 + 24);
    v5 = v4;
    if ( !v6 || (*(_WORD *)(v4 + 32) = 91, v6 == 1) )
      sub_2213CE4(v4);
    *(_WORD *)(v4 + 34) = 93;
    if ( !colorTag )
LABEL_14:
      sub_2213CDC(v4, v5);
    v7 = System_String__Trim_75713456(colorTag, (System_Char_array *)v4, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_395/*"#"*/, v7, 0);
    v9 = UnityEngine_ColorUtility__TryParseHtmlString(v8, &v14, 0);
    result.fields.g = 1.0;
    result.fields.b = 1.0;
    result.fields.a = 1.0;
    if ( v9 )
    {
      result.fields.g = v14.fields.g;
      r = v14.fields.r;
      result.fields.b = v14.fields.b;
      result.fields.a = v14.fields.a;
    }
  }
  else
  {
    result.fields.g = 1.0;
    result.fields.b = 1.0;
    result.fields.a = 1.0;
  }
  result.fields.r = r;
  return result;
}


System_String_o *ScriptMessageLabel__GetCommandName(System_String_o *txt, int32_t start, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1

  if ( (byte_59728C4 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    byte_59728C4 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v5, 32, 0);
  if ( !txt )
    goto LABEL_14;
  for ( ;
        start < txt->fields._stringLength;
        appended = System_Text_StringBuilder__Append_75737396(v5, (uint16_t)appended, 0) )
  {
    appended = (System_Text_StringBuilder_o *)System_String__get_Chars(txt, start, 0);
    if ( (unsigned int)(unsigned __int16)appended - 32 <= 0x3D
      && ((1LL << ((unsigned __int8)appended - 32)) & 0x2800000004000001LL) != 0 )
    {
      break;
    }
    if ( !v5 )
      goto LABEL_14;
    ++start;
  }
  if ( !v5 )
LABEL_14:
    sub_2213CDC(appended, v7);
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
           v5,
           v5->klass->vtable._3_ToString.method);
}


int32_t ScriptMessageLabel__GetFontSize(System_String_o *sizeName, int32_t defaultSize, const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptMessageLabel_c *v7; // x0
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *v9; // x1
  ScriptMessageLabel_c *v10; // x0

  if ( (byte_59728B9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    byte_59728B9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(sizeName, 0)
    && !System_String__op_Equality(sizeName, (System_String_o *)StringLiteral_923/*"-"*/, 0) )
  {
    v10 = ScriptMessageLabel_TypeInfo;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v5);
      v10 = ScriptMessageLabel_TypeInfo;
    }
    fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->fontSizes;
    if ( fontSizes )
    {
      v9 = (Il2CppObject *)sizeName;
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               fontSizes,
               v9,
               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    }
LABEL_16:
    sub_2213CDC(fontSizes, v5);
  }
  if ( defaultSize > 0 )
    return defaultSize;
  v7 = ScriptMessageLabel_TypeInfo;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v5);
    v7 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v7->static_fields->fontSizes;
  if ( !fontSizes )
    goto LABEL_16;
  v9 = (Il2CppObject *)StringLiteral_923/*"-"*/;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           fontSizes,
           v9,
           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


System_String_o *ScriptMessageLabel__GetFontSizeString(int32_t size, const MethodInfo *method)
{
  ScriptMessageLabel_c *v3; // x0
  int v4; // w8
  System_Collections_Generic_Dictionary_object__int__o *fontSizes; // x0
  Il2CppObject *key; // x19
  __int64 v8; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v9; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_59728BA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    byte_59728BA = 1;
  }
  v3 = ScriptMessageLabel_TypeInfo;
  v4 = *(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1);
  memset(&v10, 0, sizeof(v10));
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
    v3 = ScriptMessageLabel_TypeInfo;
  }
  fontSizes = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->fontSizes;
  if ( !fontSizes )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v10,
    fontSizes,
    (const MethodInfo_3FF4498 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v10,
            (const MethodInfo_4167460 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    if ( LODWORD(v10.fields._current.fields.value) == size )
    {
      key = v10.fields._current.fields.key;
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
        &v10,
        (const MethodInfo_4167584 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
      return (System_String_o *)key;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v10,
    (const MethodInfo_4167584 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  return (System_String_o *)StringLiteral_923/*"-"*/;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *mainText; // x1
  struct System_String_o *rubyText; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o *imageText; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_String_o *playVoiceAssetName; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_String_o *playVoiceObjectName; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Action_string__string__bool__o *setReplayingVoice; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UnityEngine_Font_o *fontType; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_String_o *colorTag; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  bool isPlayingVoice; // w8

  if ( (byte_59728CC & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59728CC = 1;
  }
  v3 = sub_2213CCC(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor((ScriptMessageLabel_o *)v3, v4);
  if ( !v3 )
    sub_2213CDC(v5, v6);
  mainText = this->fields.mainText;
  *(_QWORD *)(v3 + 120) = mainText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 120), (int32_t)mainText, v7, v8, v9, v10, v11, v12);
  rubyText = this->fields.rubyText;
  *(_QWORD *)(v3 + 128) = rubyText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 128), (int32_t)rubyText, v15, v16, v17, v18, v19, v20);
  imageText = this->fields.imageText;
  *(_QWORD *)(v3 + 136) = imageText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 136), (int32_t)imageText, v22, v23, v24, v25, v26, v27);
  playVoiceAssetName = this->fields.playVoiceAssetName;
  *(_QWORD *)(v3 + 144) = playVoiceAssetName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 144), (int32_t)playVoiceAssetName, v29, v30, v31, v32, v33, v34);
  playVoiceObjectName = this->fields.playVoiceObjectName;
  *(_QWORD *)(v3 + 152) = playVoiceObjectName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 152),
    (int32_t)playVoiceObjectName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  setReplayingVoice = this->fields.setReplayingVoice;
  *(float *)(v3 + 160) = this->fields.playVoiceVolume;
  *(_QWORD *)(v3 + 184) = setReplayingVoice;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 184), (int32_t)setReplayingVoice, v43, v44, v45, v46, v47, v48);
  fontType = this->fields.fontType;
  *(_QWORD *)(v3 + 88) = fontType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 88), (int32_t)fontType, v50, v51, v52, v53, v54, v55);
  colorTag = this->fields.colorTag;
  *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->fields.fontSize;
  *(_QWORD *)(v3 + 112) = colorTag;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 112), (int32_t)colorTag, v57, v58, v59, v60, v61, v62);
  *(float *)(v3 + 104) = this->fields.widthSize;
  *(struct UnityEngine_Vector2_o *)(v3 + 72) = this->fields.mainPosition;
  *(struct UnityEngine_Vector2_o *)(v3 + 80) = this->fields.rubyPosition;
  isPlayingVoice = this->fields.isPlayingVoice;
  *(float *)(v3 + 108) = this->fields.yOffset;
  *(_BYTE *)(v3 + 192) = isPlayingVoice;
  return (ScriptMessageLabel_o *)v3;
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
  il2cpp_array_size_t v10; // x8

  v2 = param;
  if ( (byte_59728C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    param = (System_String_array *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59728C8 = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  max_length = v2->max_length;
  if ( !max_length )
    goto LABEL_27;
  if ( !(_DWORD)max_length )
    goto LABEL_24;
  v4 = System_Int32__Parse(v2->m_Items[0], 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v4,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( SLODWORD(v2->max_length) < 3 )
      return ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0, 0);
    param = (System_String_array *)ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0);
    v10 = v2->max_length;
    if ( ((unsigned __int8)param & 1) != 0 )
    {
      if ( (unsigned int)v10 > 2 )
        return v2->m_Items[2];
LABEL_24:
      sub_2213CE4(param);
    }
    if ( (v10 & 0xFFFFFFFE) == 0 )
      goto LABEL_24;
    return v2->m_Items[1];
  }
  else
  {
LABEL_27:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  int v10; // w23
  int32_t v11; // w21
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  System_Text_StringBuilder_o *v15; // x21
  int32_t i; // w22
  __int128 v17; // q0
  bool v18; // w23
  System_String_o **v19; // x8
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-80h] BYREF

  v2 = txt;
  if ( (byte_59728C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_26987/*"［"*/);
    txt = (System_String_o *)sub_2213A60(&StringLiteral_26988/*"］"*/);
    byte_59728C3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !v2 )
    goto LABEL_44;
  stringLength = v2->fields._stringLength;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
            goto LABEL_44;
          items = v4->fields._items;
          v8 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v5,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( stringLength - 1 >= 0 )
  {
    v10 = 0;
    v11 = stringLength;
    do
    {
      if ( System_String__get_Chars(v2, --v11, 0) == 93 )
      {
        ++v10;
      }
      else
      {
        txt = (System_String_o *)System_String__get_Chars(v2, v11, 0);
        if ( (unsigned __int16)txt == 91 && --v10 < 0 )
        {
          if ( !v4 )
            goto LABEL_44;
          v12 = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !v12 )
            goto LABEL_44;
          v14 = v4->fields._size;
          if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v11,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            v10 = 0;
          }
          else
          {
            v10 = 0;
            v4->fields._size = v14 + 1;
            v12->m_Items[v14] = v11;
          }
        }
      }
    }
    while ( v11 > 0 );
  }
  v15 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v15, 0);
  if ( stringLength < 1 )
  {
    if ( v15 )
      return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
               v15,
               v15->klass->vtable._3_ToString.method);
LABEL_44:
    sub_2213CDC(txt, method);
  }
  if ( !v4 )
    goto LABEL_44;
  for ( i = 0; i != stringLength; ++i )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      &v21,
      v4,
      (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17 = *(_OWORD *)&v21.fields._list;
    v21.fields._list = 0;
    *(_QWORD *)&v21.fields._index = &v22;
    *(_OWORD *)&v22.fields._list = v17;
    *(_QWORD *)&v22.fields._current = v21.fields._current;
    do
      v18 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v22,
              (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    while ( v18 && i != v22.fields._current );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v22,
      (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v18 )
    {
      txt = (System_String_o *)System_String__get_Chars(v2, i, 0);
      if ( !v15 )
        goto LABEL_44;
      v19 = (System_String_o **)&StringLiteral_26987/*"［"*/;
      if ( (unsigned __int16)txt != 91 )
        v19 = (System_String_o **)&StringLiteral_26988/*"］"*/;
      System_Text_StringBuilder__Append_75735064(v15, *v19, 0);
    }
    else
    {
      txt = (System_String_o *)System_String__get_Chars(v2, i, 0);
      if ( !v15 )
        goto LABEL_44;
      System_Text_StringBuilder__Append_75737396(v15, (uint16_t)txt, 0);
    }
  }
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
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
  System_String_o *v6; // x21
  int32_t stringLength; // w23
  System_Text_StringBuilder_o *v8; // x20
  System_String_o *v9; // x23
  int v10; // w25
  int v11; // w26
  __int16 v12; // w24
  int32_t v13; // w24
  uint16_t Chars; // w0

  v5 = bindex;
  v6 = txt;
  if ( (byte_59728C6 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    txt = (System_String_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728C6 = 1;
  }
  if ( !v6 )
    goto LABEL_31;
  stringLength = v6->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v8, stringLength, 0);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 1;
  if ( v6->fields._stringLength <= v5 )
    goto LABEL_27;
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
          goto LABEL_27;
        }
        goto LABEL_13;
      }
      if ( !v11 )
        break;
LABEL_13:
      if ( !v8 )
        goto LABEL_31;
      txt = (System_String_o *)System_Text_StringBuilder__Append_75737396(v8, (uint16_t)txt, 0);
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
            System_Text_StringBuilder__Append_75737396(v8, Chars, 0);
            ++v5;
          }
          while ( v13 < v6->fields._stringLength );
          v5 = v13;
        }
        txt = (System_String_o *)System_Text_StringBuilder__Append_75737396(v8, 0x22u, 0);
      }
      *(_QWORD *)&bindex = (unsigned int)v5;
      if ( v5 >= v6->fields._stringLength )
        goto LABEL_27;
    }
    if ( v10 == index )
    {
      if ( v8 )
      {
        v9 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                  v8,
                                  v8->klass->vtable._3_ToString.method);
        goto LABEL_26;
      }
LABEL_31:
      sub_2213CDC(txt, *(_QWORD *)&bindex);
    }
    if ( !v8 )
      goto LABEL_31;
LABEL_26:
    ++v10;
    System_Text_StringBuilder__set_Length(v8, 0, 0);
  }
  while ( v5 < v6->fields._stringLength );
LABEL_27:
  if ( v10 != index )
    return v9;
  if ( !v8 )
    goto LABEL_31;
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
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
  int v11; // w8
  unsigned __int64 codeClassSplitStringList; // x0
  MethodInfo *v13; // x1
  ScriptMessageLabel_c *v14; // x8
  System_String_o *v15; // x28
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  ScriptMessageLabel_c *v24; // x8
  __int64 v25; // x25
  struct ScriptMessageLabel_StaticFields *static_fields; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_array *v33; // x25
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  il2cpp_array_size_t max_length; // x8
  int v54; // w9
  int v55; // w20
  Il2CppClass **v56; // x26
  System_String_o **v57; // x26
  unsigned __int64 v58; // t1
  System_String_o *v59; // x26
  int32_t stringLength; // w8
  __int64 v61; // x1
  int32_t v62; // w26
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_o **v78; // x8
  System_String_o **v79; // x0
  System_String_o *v80; // x1
  System_Collections_Generic_List_object__o *v81; // x20
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  il2cpp_array_size_t v88; // x8
  unsigned __int64 i; // x19
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  System_String_o *v94; // x0
  System_String_o **v95; // [xsp+10h] [xbp-80h]
  int32_t v96; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  uint16_t Chars; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_59728C7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_21138/*"icon_class_{0:D3}"*/);
    sub_2213A60(&StringLiteral_26983/*"："*/);
    sub_2213A60(&StringLiteral_11992/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728C7 = 1;
  }
  v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  Chars = 0;
  entity = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, className);
  codeClassSplitStringList = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_11992/*"SCRIPT_ACTION_CODE_CLASS_SPLIT"*/, 0);
  v14 = ScriptMessageLabel_TypeInfo;
  v15 = (System_String_o *)codeClassSplitStringList;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v13);
    v14 = ScriptMessageLabel_TypeInfo;
  }
  if ( !v14->static_fields->codeClassSplitStringList )
  {
    v16 = sub_2213B20(string___TypeInfo, 1);
    v24 = ScriptMessageLabel_TypeInfo;
    v25 = v16;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v17);
      v24 = ScriptMessageLabel_TypeInfo;
    }
    static_fields = v24->static_fields;
    static_fields->codeClassSplitStringList = (struct System_String_array *)v25;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->codeClassSplitStringList,
      v25,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    codeClassSplitStringList = (unsigned __int64)ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList;
    if ( !codeClassSplitStringList )
LABEL_63:
      sub_2213CDC(codeClassSplitStringList, v13);
    if ( !*(_DWORD *)(codeClassSplitStringList + 24) )
      goto LABEL_64;
    *(_QWORD *)(codeClassSplitStringList + 32) = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(codeClassSplitStringList + 32),
      (int32_t)v15,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v14 = ScriptMessageLabel_TypeInfo;
  }
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v13);
  if ( !talkName )
    goto LABEL_63;
  v33 = System_String__Split_75709916(
          talkName,
          ScriptMessageLabel_TypeInfo->static_fields->codeClassSplitStringList,
          1,
          0);
  *imageName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)imageName, 0, v34, v35, v36, v37, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  *className = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)className, v40, v41, v42, v43, v44, v45, v46);
  *charaIndex = -1;
  if ( !v33 )
    goto LABEL_63;
  max_length = v33->max_length;
  v54 = max_length - 1;
  if ( (int)max_length - 1 < 1 )
    goto LABEL_42;
  v95 = charaName;
  v55 = 0;
  do
  {
    if ( v55 >= (unsigned int)max_length )
      goto LABEL_64;
    v56 = &v33->obj.klass + v55;
    v58 = (unsigned __int64)v56[4];
    v57 = (System_String_o **)(v56 + 4);
    codeClassSplitStringList = v58;
    if ( !v58 )
      goto LABEL_63;
    codeClassSplitStringList = System_String__get_Chars((System_String_o *)codeClassSplitStringList, 0, 0);
    if ( (unsigned int)v55 >= LODWORD(v33->max_length) )
      goto LABEL_64;
    v59 = *v57;
    if ( !v59 )
      goto LABEL_63;
    stringLength = v59->fields._stringLength;
    if ( (unsigned __int16)(codeClassSplitStringList - 65) <= 0x19u && stringLength == 1 )
      goto LABEL_30;
    if ( (unsigned __int16)codeClassSplitStringList == 91 && stringLength == 9 )
    {
      Chars = System_String__get_Chars(v59, 8, 0);
      if ( !*(_DWORD *)(qword_5984388 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984388, v61);
      v59 = System_Char__ToString((uint16_t)&Chars, 0);
LABEL_30:
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v13);
      codeClassSplitStringList = ScriptMessageLabel__ConvertCharaIndex(v59, v13);
      *charaIndex = codeClassSplitStringList;
      goto LABEL_33;
    }
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v13);
    v62 = ScriptMessageLabel__ConvertInteger(v59, v13);
    codeClassSplitStringList = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = (unsigned __int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)codeClassSplitStringList,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !codeClassSplitStringList )
      goto LABEL_63;
    codeClassSplitStringList = DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)codeClassSplitStringList,
                                 &entity,
                                 v62,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( (codeClassSplitStringList & 1) != 0 )
    {
      v96 = v62;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v96);
      v64 = System_String__Format((System_String_o *)StringLiteral_21138/*"icon_class_{0:D3}"*/, v63, 0);
      *imageName = v64;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)imageName, (int32_t)v64, v65, v66, v67, v68, v69, v70);
      if ( !entity )
        goto LABEL_63;
      v71 = System_String__Concat_75651716(
              (System_String_o *)entity[1].monitor,
              (System_String_o *)StringLiteral_26983/*"："*/,
              0);
      *className = v71;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)className, (int32_t)v71, v72, v73, v74, v75, v76, v77);
    }
LABEL_33:
    max_length = v33->max_length;
    ++v55;
    v54 = max_length - 1;
  }
  while ( v55 < (int)max_length - 1 );
  charaName = v95;
LABEL_42:
  if ( *charaIndex < 0 )
  {
    *charaName = talkName;
    v79 = charaName;
    LODWORD(v80) = (_DWORD)talkName;
  }
  else
  {
    if ( (int)max_length >= 3 )
    {
      v81 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v81,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
      v88 = v33->max_length;
      if ( (int)v88 >= 1 )
      {
        for ( i = 0; (__int64)i < (int)v88; ++i )
        {
          if ( i )
          {
            if ( i >= (unsigned int)v88 )
              goto LABEL_64;
            if ( !v81 )
              goto LABEL_63;
            items = v81->fields._items;
            v13 = (MethodInfo *)v33->m_Items[i];
            v91 = Method_System_Collections_Generic_List_string__Add__;
            ++v81->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v81->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v81,
                (Il2CppObject *)v13,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = &items->obj.klass + size;
              v81->fields._size = size + 1;
              v93[4] = (Il2CppClass *)v13;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 4), (int32_t)v13, v82, v83, v84, v85, v86, v87);
            }
          }
          LODWORD(v88) = v33->max_length;
        }
      }
      v94 = System_String__Join_75699092(v15, (System_Collections_Generic_IEnumerable_string__o *)v81, 0);
      LODWORD(v80) = (_DWORD)v94;
      *charaName = v94;
    }
    else
    {
      if ( max_length )
      {
        if ( (_DWORD)max_length )
        {
          v78 = &v33->m_Items[v54];
          goto LABEL_60;
        }
LABEL_64:
        sub_2213CE4(codeClassSplitStringList);
      }
      v78 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_60:
      v80 = *v78;
      *charaName = *v78;
    }
    v79 = charaName;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v79, (int32_t)v80, v47, v48, v49, v50, v51, v52);
}


void ScriptMessageLabel__GetTextByLen(
        System_String_o *text,
        int32_t len,
        System_String_o **dispText,
        int32_t *length,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v12; // w22
  int32_t v13; // w24
  __int64 v14; // x1
  ScriptMessageLabel_c *v15; // x0
  const MethodInfo *v16; // x1
  int v17; // w26
  System_String_o *v18; // x23
  void *v19; // x0
  System_String_o *v20; // x23
  int32_t v21; // w0
  __int64 v22; // x8
  System_String_o *v23; // x0
  System_String_o *v24; // x1

  if ( (byte_59728BC & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728BC = 1;
  }
  if ( !text )
  {
    v13 = 0;
    goto LABEL_40;
  }
  v12 = 0;
  v13 = 0;
  if ( text->fields._stringLength < 1 || !len )
    goto LABEL_39;
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
    v15 = ScriptMessageLabel_TypeInfo;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v14);
      v15 = ScriptMessageLabel_TypeInfo;
    }
    if ( System_String__StartsWith(text, v15->static_fields->LINE_ORDER, 0) )
    {
      v19 = ScriptMessageLabel_TypeInfo;
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v16);
        v19 = ScriptMessageLabel_TypeInfo;
      }
      v22 = *(_QWORD *)(*((_QWORD *)v19 + 23) + 8LL);
      if ( v22 )
      {
        v23 = System_String__Substring_75702848(
                text,
                *(_DWORD *)(v22 + 16),
                text->fields._stringLength + ~*(_DWORD *)(v22 + 16),
                0);
        v21 = System_Int32__Parse(v23, 0);
        goto LABEL_38;
      }
LABEL_43:
      sub_2213CDC(v19, v16);
    }
    v12 += 2;
    if ( v12 < text->fields._stringLength )
    {
      v17 = 0;
      do
      {
        if ( System_String__get_Chars(text, v12, 0) == 91 )
        {
          ++v17;
        }
        else if ( System_String__get_Chars(text, v12, 0) == 93 )
        {
          if ( !v17 )
            break;
          --v17;
        }
        ++v12;
      }
      while ( v12 < text->fields._stringLength );
    }
LABEL_22:
    if ( ++v12 >= text->fields._stringLength || v13 == len )
      goto LABEL_39;
  }
  v18 = System_String__Substring_75702848(text, v12 + 2, text->fields._stringLength - 2, 0);
  v19 = (void *)sub_2213B20(char___TypeInfo, 1);
  if ( !v19 )
    goto LABEL_43;
  v16 = (const MethodInfo *)v19;
  if ( !*((_DWORD *)v19 + 6) )
    goto LABEL_44;
  *((_WORD *)v19 + 16) = 58;
  if ( !v18 )
    goto LABEL_43;
  v19 = System_String__Split_75705984(v18, (System_Char_array *)v19, 0);
  if ( !v19 )
    goto LABEL_43;
  if ( !*((_DWORD *)v19 + 6) )
LABEL_44:
    sub_2213CE4(v19);
  v20 = (System_String_o *)*((_QWORD *)v19 + 4);
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v16);
  v21 = ScriptMessageLabel__StrlenByDisp(v20, v16);
LABEL_38:
  v13 += v21;
LABEL_39:
  if ( v12 <= text->fields._stringLength )
    v24 = System_String__Substring_75702848(text, 0, v12, 0);
  else
LABEL_40:
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  *dispText = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)dispText,
    (int32_t)v24,
    (System_String_o *)dispText,
    (System_String_o *)length,
    (int32_t)method,
    v5,
    v6,
    v7);
  *length = v13;
}


int32_t ScriptMessageLabel__GetVerticalAlignFromString(System_String_o *str, const MethodInfo *method)
{
  if ( (byte_59728BB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18113/*"bottom"*/);
    sub_2213A60(&StringLiteral_25418/*"top"*/);
    sub_2213A60(&StringLiteral_18581/*"center"*/);
    byte_59728BB = 1;
  }
  if ( System_String__IsNullOrEmpty(str, 0)
    || System_String__op_Equality(str, (System_String_o *)StringLiteral_25418/*"top"*/, 0) )
  {
    return 0;
  }
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_18581/*"center"*/, 0) )
    return 1;
  if ( System_String__op_Equality(str, (System_String_o *)StringLiteral_18113/*"bottom"*/, 0) )
    return 2;
  return 0;
}


bool ScriptMessageLabel__IsColorBeginTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w21
  int Chars; // w8
  bool result; // w0
  int v6; // w23
  __int64 v7; // x1
  uint16_t v8; // w20

  v2 = text;
  if ( (byte_59728C2 & 1) == 0 )
  {
    text = (System_String_o *)sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59728C2 = 1;
  }
  if ( !v2 )
    sub_2213CDC(text, method);
  stringLength = v2->fields._stringLength;
  if ( (stringLength | 2) != 0xA )
    return 0;
  Chars = System_String__get_Chars(v2, 0, 0);
  result = 0;
  if ( Chars != 91 )
    return result;
  if ( System_String__get_Chars(v2, stringLength - 1, 0) != 93 )
    return 0;
  v6 = 2;
  while ( 1 )
  {
    v8 = System_String__get_Chars(v2, v6 - 1, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v7);
    if ( (unsigned __int16)(v8 - 48) >= 0xAu )
    {
      result = 0;
      if ( (unsigned int)v8 - 65 > 0x25 || ((1LL << ((unsigned __int8)v8 - 65)) & 0x3F0000003FLL) == 0 )
        break;
    }
    if ( stringLength == ++v6 )
      return 1;
  }
  return result;
}


bool ScriptMessageLabel__IsColorChar(uint16_t c, const MethodInfo *method)
{
  char v2; // w10

  v2 = (unsigned int)c - 65 < 6;
  if ( (unsigned int)c - 103 > 0xFFFFFFF9 )
    v2 = 1;
  if ( (unsigned int)c - 58 <= 0xFFFFFFF5 )
    return v2;
  else
    return 1;
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
  if ( (byte_59728C1 & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    txt = (System_String_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_59728C1 = 1;
  }
  if ( !v2 )
    sub_2213CDC(txt, method);
  v3 = 0;
  while ( v3 < v2->fields._stringLength )
  {
    v4 = System_String__IndexOf_75715212(v2, (System_String_o *)StringLiteral_16427/*"["*/, v3, 0);
    if ( v4 < 0 )
      break;
    v5 = v4;
    v6 = System_String__IndexOf_75715212(v2, (System_String_o *)StringLiteral_16691/*"]"*/, v4, 0);
    if ( v6 < 0 )
      break;
    v3 = v6 + 1;
    v8 = System_String__Substring_75702848(v2, v5, v6 + 1 - v5, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v7);
    if ( ScriptMessageLabel__IsColorBeginTag(v8, v7) )
      return 1;
  }
  return 0;
}


void ScriptMessageLabel__OnClickPlayVoice(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *playVoiceAssetName; // x20
  System_String_o *playVoiceObjectName; // x21
  _BOOL8 IsBusyVoice; // x0
  __int64 v6; // x1
  struct System_Action_string__string__bool__o *setReplayingVoice; // x8
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  float playVoiceVolume; // s8
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x1

  if ( (byte_59728DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScriptMessageLabel_StopPlayVoiceAnimation__);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59728DA = 1;
  }
  playVoiceAssetName = this->fields.playVoiceAssetName;
  playVoiceObjectName = this->fields.playVoiceObjectName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  IsBusyVoice = SeManager__IsBusyVoice(playVoiceAssetName, playVoiceObjectName, 0);
  if ( IsBusyVoice )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
    SoundManager__stopVoiceAll(0.0, 0);
  }
  else
  {
    setReplayingVoice = this->fields.setReplayingVoice;
    if ( !setReplayingVoice )
      sub_2213CDC(IsBusyVoice, v6);
    ((void (__fastcall *)(intptr_t, struct System_String_o *, struct System_String_o *, __int64, intptr_t))setReplayingVoice->fields.invoke_impl)(
      setReplayingVoice->fields.method_code,
      this->fields.playVoiceAssetName,
      this->fields.playVoiceObjectName,
      1,
      setReplayingVoice->fields.method);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v8);
    SoundManager__stopVoiceAll(0.0, 0);
    v9 = this->fields.playVoiceAssetName;
    v10 = this->fields.playVoiceObjectName;
    playVoiceVolume = this->fields.playVoiceVolume;
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ScriptMessageLabel_StopPlayVoiceAnimation__, 0);
    SoundManager__playVoice_48511684(v9, v10, playVoiceVolume, v12, 0, 0);
    ScriptMessageLabel__StartPlayVoiceAnimation(this, v13);
  }
}


void ScriptMessageLabel__Release(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  UnityEngine_Object_c *v45; // x0
  UnityEngine_Object_o *main; // x20
  const MethodInfo *v47; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *ruby; // x20
  UnityEngine_Object_o *image; // x20
  UnityEngine_Object_o *playVoice; // x20
  UnityEngine_Object_o *playVoiceEffect; // x20

  if ( (byte_59728CA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728CA = 1;
  }
  this->fields.fontType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v2, v3, v4, v5, v6, v7);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, v9, v10, v11, v12, v13, v14, v15);
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v16, v17, v18, v19, v20, v21, v22);
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v23, v24, v25, v26, v27, v28, v29);
  v30 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v30, v31, v32, v33, v34, v35, v36);
  v37 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v37, v38, v39, v40, v41, v42, v43);
  v45 = UnityEngine_Object_TypeInfo;
  main = (UnityEngine_Object_o *)this->fields.main;
  this->fields.isPlayingVoice = 0;
  if ( !*(&v45->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v45, v44);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    gameObject = this->fields.main;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  ruby = (UnityEngine_Object_o *)this->fields.ruby;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    gameObject = this->fields.ruby;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.image;
    if ( !gameObject )
      goto LABEL_31;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *, double))gameObject->klass->vtable._8_set_alpha.methodPtr)(
      gameObject,
      gameObject->klass->vtable._8_set_alpha.method,
      0.0);
  }
  playVoice = (UnityEngine_Object_o *)this->fields.playVoice;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
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
    sub_2213CDC(gameObject, v47);
  }
LABEL_30:
  ScriptMessageLabel__DestoryEffect(this, v47);
}


System_String_o *ScriptMessageLabel__RemoveColorTag(System_String_o *text, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w8
  System_String_o *v6; // x20
  int v7; // w24
  int32_t v8; // w22
  int32_t v9; // w0
  int32_t v10; // w21
  System_String_o *v11; // x23
  int32_t v12; // w24
  unsigned __int16 v13; // w25

  if ( (byte_59728C0 & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728C0 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !text )
      goto LABEL_28;
    v5 = 0;
    v6 = text;
LABEL_6:
    v7 = 1 - v5;
    while ( v5 < text->fields._stringLength )
    {
      v8 = v5;
      if ( System_String__get_Chars(text, v5, 0) != 91 )
        goto LABEL_25;
      v9 = System_String__IndexOf_75713816(text, 0x5Du, v8 + 1, 0);
      if ( v9 < 0 )
        goto LABEL_25;
      v10 = v9;
      IsNullOrEmpty = System_String__Substring_75702848(text, v8, v9 + v7, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_28;
      v11 = IsNullOrEmpty;
      --v7;
      v5 = v8 + 1;
      if ( (IsNullOrEmpty->fields._stringLength | 2) == 0xA )
      {
        v12 = 1;
        do
        {
          IsNullOrEmpty = (System_String_o *)System_String__get_Chars(v11, v12, 0);
          v13 = (unsigned __int16)IsNullOrEmpty;
          if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v4);
          if ( (unsigned __int16)(v13 - 48) >= 0xAu
            && ((unsigned int)v13 - 65 > 0x25 || ((1LL << ((unsigned __int8)v13 - 65)) & 0x3F0000003FLL) == 0) )
          {
            goto LABEL_25;
          }
          ++v12;
        }
        while ( v12 <= v11->fields._stringLength - 2 );
        if ( !v6 )
          goto LABEL_28;
        IsNullOrEmpty = System_String__Replace_75703400(v6, v11, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !IsNullOrEmpty )
          goto LABEL_28;
        v6 = IsNullOrEmpty;
        IsNullOrEmpty = (System_String_o *)System_String__IndexOf_75715196(
                                             IsNullOrEmpty,
                                             (System_String_o *)StringLiteral_16447/*"[-]"*/,
                                             0);
        if ( ((unsigned int)IsNullOrEmpty & 0x80000000) == 0 )
        {
          if ( StringLiteral_16447/*"[-]"*/ )
          {
            v6 = System_String__Remove(v6, (int32_t)IsNullOrEmpty, *((_DWORD *)StringLiteral_16447/*"[-]"*/ + 4), 0);
            goto LABEL_24;
          }
LABEL_28:
          sub_2213CDC(IsNullOrEmpty, v4);
        }
LABEL_24:
        v8 = v10;
LABEL_25:
        v5 = v8 + 1;
        goto LABEL_6;
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UILabel_o *v23; // x21
  Il2CppObject *v24; // x0
  __int64 *v25; // x25
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UISprite_o *v32; // x20
  UnityEngine_Component_o *v33; // x22
  __int64 v34; // x24
  __int64 v35; // x1
  System_String_o *imageText; // x23
  float widthSize; // s0
  int32_t v38; // w1
  const MethodInfo *v39; // x1
  System_String_o *colorTag; // x19
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UnityEngine_Object_o *fontType; // x23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x22
  EventDelegate_Callback_o *v50; // x23
  __int64 v51; // x1
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59728CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScriptMessageLabel_OnClickPlayVoice__);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&Method_ScriptMessageLabel___c__DisplayClass60_0__SetLogDraw_b__0__);
    sub_2213A60(&ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728CD = 1;
  }
  v14 = sub_2213CCC(ScriptMessageLabel___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_45;
  *(_QWORD *)(v14 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)this, v17, v18, v19, v20, v21, v22);
  if ( !mainObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                mainObject,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !rubyObject )
    goto LABEL_45;
  v23 = (UILabel_o *)Component_object;
  v24 = UnityEngine_GameObject__GetComponent_object_(
          rubyObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  *(_QWORD *)(v14 + 24) = v24;
  v25 = (__int64 *)(v14 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v24, v26, v27, v28, v29, v30, v31);
  if ( !imageObject )
    goto LABEL_45;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                imageObject,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !playVoiceObject )
    goto LABEL_45;
  v32 = (UISprite_o *)Component_object;
  v33 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                     playVoiceObject,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v34 = sub_2213CCC(System_Action_TypeInfo);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
    AtlasManager__SetMark(v32, imageText, 0);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v32->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v32,
      v32->klass->vtable._33_MakePixelPerfect.method);
    widthSize = this->fields.widthSize;
    v38 = widthSize == INFINITY ? 0x80000000 : (int)widthSize;
    UIWidget__SetDimensions((UIWidget_o *)v32, v38, this->fields.fontSize, 0);
    colorTag = this->fields.colorTag;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v39);
    Color = ScriptMessageLabel__GetColor(colorTag, v39);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceEffect,
      (int32_t)playVoiceEffect,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
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
            v50 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v50, (Il2CppObject *)this, Method_ScriptMessageLabel_OnClickPlayVoice__, 0);
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v51);
            Component_object = (__int64)EventDelegate__Set_56322328(monitor, v50, 0);
            if ( v23 )
            {
              UILabel__set_text(v23, 0, 0);
              Component_object = *v25;
              if ( *v25 )
              {
                UILabel__set_text((UILabel_o *)Component_object, 0, 0);
                if ( v32 )
                {
                  ((void (__fastcall *)(UISprite_o *, const MethodInfo *, double))v32->klass->vtable._8_set_alpha.methodPtr)(
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
    sub_2213CDC(Component_object, v16);
  }
  fontType = (UnityEngine_Object_o *)this->fields.fontType;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
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
  v52.fields.z = 0.0;
  v52.fields.y = -this->fields.yOffset;
  v52.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v52, 0);
  if ( !v34 )
    goto LABEL_45;
  Component_object = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(
                       *(_QWORD *)(v34 + 64),
                       *(_QWORD *)(v34 + 40));
  if ( !v32 )
    goto LABEL_45;
  Component_object = ((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *, double))v32->klass->vtable._8_set_alpha.methodPtr)(
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

  if ( (byte_59728DB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728DB = 1;
  }
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v5 = this->fields.playVoiceEffect;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0);
  }
}


void ScriptMessageLabel__StopPlayVoiceAnimation(ScriptMessageLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *playVoiceEffect; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_59728DC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728DC = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  playVoiceEffect = (UnityEngine_Object_o *)this->fields.playVoiceEffect;
  this->fields.isPlayingVoice = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !UnityEngine_Object__op_Equality(playVoiceEffect, 0, 0) )
  {
    v6 = this->fields.playVoiceEffect;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0);
  }
}


int32_t ScriptMessageLabel__StrlenByDisp(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t length; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o *dispText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59728BE & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59728BE = 1;
  }
  dispText = 0;
  length = 0;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  ScriptMessageLabel__GetTextByLen(text, -1, &dispText, &length, v2);
  return length;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ScriptMessageLabel__SubstrByDisp(System_String_o *text, int32_t len, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t length; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *dispText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59728BD & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59728BD = 1;
  }
  dispText = 0;
  length = 0;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, *(_QWORD *)&len);
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
  struct System_String_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_String_o *colorTag; // x1
  System_String_o **p_rubyText; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  UILabel_o *transform; // x0
  __int64 v59; // x1
  int32_t v60; // w21
  System_String_o *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  const MethodInfo *v68; // x3
  float VerticalAlignOffset; // s0
  float v70; // s8
  float v71; // s0
  float v72; // s8
  float v73; // s0
  float y; // s8
  float v75; // s1
  const MethodInfo *v76; // x1
  float v77; // s0
  ScriptMessageLabel_c *v78; // x0
  System_String_o *mainText; // x21
  int v80; // w8
  UILabel_o **v83; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728D0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_26840/*"・"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D0 = 1;
  }
  v83 = main;
  v16 = System_String__Concat_75651716(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  colorTag = this->fields.colorTag;
  this->fields.rubyText = colorTag;
  p_rubyText = &this->fields.rubyText;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rubyText,
    (int32_t)colorTag,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, (int32_t)font, v52, v53, v54, v55, v56, v57);
  this->fields.fontSize = fontSize;
  this->fields.rubySize = fontSize;
  if ( !mainStr )
    goto LABEL_35;
  if ( mainStr->fields._stringLength >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = System_String__Concat_75651716(*p_rubyText, (System_String_o *)StringLiteral_26840/*"・"*/, 0);
      *p_rubyText = v61;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rubyText,
        (int32_t)v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      ++v60;
    }
    while ( v60 < mainStr->fields._stringLength );
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0) )
  {
    transform = *v83;
    if ( !*v83 )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0);
    transform = *ruby;
    if ( !*ruby )
      goto LABEL_35;
    UILabel__set_trueTypeFont(transform, font, 0);
  }
  transform = *v83;
  if ( !*v83 )
    goto LABEL_35;
  UILabel__set_fontSize(transform, fontSize, 0);
  transform = *v83;
  if ( !*v83 )
    goto LABEL_35;
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize != maxFontSize )
  {
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v59);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v68);
    transform = *v83;
    this->fields.yOffset = VerticalAlignOffset;
    if ( transform )
    {
      v70 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v85.fields.x = pos->fields.x;
        v85.fields.z = 0.0;
        v85.fields.y = pos->fields.y - v70;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v85, 0);
        goto LABEL_24;
      }
    }
LABEL_35:
    sub_2213CDC(transform, v59);
  }
  transform = *v83;
  if ( !*v83 )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v84.fields.z = 0.0;
  v84.fields.x = pos->fields.x;
  v84.fields.y = pos->fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v84, 0);
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
  transform = *v83;
  if ( !*v83 )
    goto LABEL_35;
  v72 = v71;
  v73 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  transform = *ruby;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x + (float)(v73 * 0.5)) - (float)(v72 * 0.5);
  if ( !transform )
    goto LABEL_35;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = *ruby;
  this->fields.rubyPosition.fields.y = y + (float)((float)(v75 + v75) / 3.0);
  if ( !transform )
    goto LABEL_35;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  v86.fields.z = 0.0;
  v86.fields.x = this->fields.rubyPosition.fields.x;
  v86.fields.y = this->fields.rubyPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v86, 0);
  transform = *v83;
  if ( !*v83 )
    goto LABEL_35;
  v77 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v77;
  v78 = ScriptMessageLabel_TypeInfo;
  mainText = this->fields.mainText;
  v80 = *(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1);
  pos->fields.x = v77 + pos->fields.x;
  if ( !v80 )
    j_il2cpp_runtime_class_init_0(v78, v76);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v76);
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
  bool v7; // w6
  bool v8; // w7
  int32_t v14; // w1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  struct UnityEngine_Vector2_o v44; // x8
  UnityEngine_Object_c *v45; // x0
  UnityEngine_Object_o *v46; // x22
  __int64 v47; // x1
  UnityEngine_Object_o *frontEffect; // x22
  __int64 v49; // x1
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v52; // x21
  __int64 v53; // x1
  UnityEngine_GameObject_o *transform; // x0
  SyncTransformComponent_o *v55; // x20
  UnityEngine_GameObject_o *v56; // x19
  int32_t v57; // w1
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728D6 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7173/*"FrontCommonUI"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D6 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainText,
    v14,
    (System_String_o *)pos,
    effectName,
    dlength,
    (int32_t)method,
    v7,
    v8);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v22, v23, v24, v25, v26, v27, v28);
  v29 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v29, v30, v31, v32, v33, v34, v35);
  v36 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v36, v37, v38, v39, v40, v41, v42);
  v44 = *pos;
  v45 = UnityEngine_Object_TypeInfo;
  this->fields.dispLength = dlength;
  v46 = (UnityEngine_Object_o *)this->fields.effect;
  this->fields.effectWait = ewait;
  this->fields.mainPosition = v44;
  if ( !*(&v45->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v45, v43);
  if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
  {
    frontEffect = (UnityEngine_Object_o *)this->fields.frontEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    if ( UnityEngine_Object__op_Inequality(frontEffect, 0, 0) )
    {
      x = pos->fields.x;
      y = pos->fields.y;
      v52 = this->fields.frontEffect;
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v49);
      v58.fields.z = 0.0;
      v58.fields.x = x;
      v58.fields.y = y;
      CommonEffectManager__CreateParam_50761980(v52, effectName, v58, 0, 0, 0, 0, 0);
      transform = this->fields.effect;
      if ( !transform
        || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      transform,
                                                      (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_SyncTransformComponent___),
            !this->fields.frontEffect)
        || (v55 = (SyncTransformComponent_o *)transform,
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.frontEffect, 0),
            !v55) )
      {
        sub_2213CDC(transform, v53);
      }
      SyncTransformComponent__setChild(v55, (UnityEngine_Transform_o *)transform, 0);
      v56 = this->fields.frontEffect;
      v57 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_7173/*"FrontCommonUI"*/, 0);
      GameObjectExtensions__SetLayerRecursively(v56, v57, 0);
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
  bool v7; // w7
  int32_t v14; // w1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  AtlasManager_c *v49; // x0
  UISprite_o *v50; // x25
  __int64 v51; // x1
  UIWidget_o *transform; // x0
  int32_t v53; // w23
  float v54; // s0
  float v55; // s8
  float v56; // s1
  float v57; // s0
  int32_t v58; // w23
  float v59; // s8
  float x; // s0
  struct UnityEngine_Vector2_o v61; // x8
  float v62; // s0
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59728D4 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D4 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainText,
    v14,
    (System_String_o *)pos,
    *(System_String_o **)&fontSize,
    (int32_t)imageStr,
    horizontalAlign,
    (bool)method,
    v7);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageText,
    (int32_t)imageStr,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v42, v43, v44, v45, v46, v47);
  v49 = AtlasManager_TypeInfo;
  v50 = *image;
  this->fields.fontSize = fontSize;
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, v48);
  AtlasManager__SetMark(v50, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v53 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v55 = v54;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v57 = (float)(v55 * (float)v53) / v56;
  v58 = v57 == INFINITY ? 0x80000000 : (int)v57;
  if ( !transform )
    goto LABEL_20;
  UIWidget__SetDimensions(transform, v58, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_20;
  v64.fields.r = 1.0;
  v64.fields.g = 1.0;
  v64.fields.b = 1.0;
  v64.fields.a = 1.0;
  UIWidget__set_color(transform, v64, 0);
  v59 = (float)v58;
  x = pos->fields.x;
  if ( horizontalAlign == 2 )
  {
    x = x - v59;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v59 * -0.5);
  }
  transform = (UIWidget_o *)*image;
  pos->fields.x = x;
  if ( !transform
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_20:
    sub_2213CDC(transform, v51);
  }
  v63.fields.z = 0.0;
  v63.fields.x = pos->fields.x;
  v63.fields.y = pos->fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v63, 0);
  v61 = *pos;
  this->fields.widthSize = v59;
  this->fields.mainPosition = v61;
  v62 = pos->fields.x;
  this->fields.dispLength = 1;
  pos->fields.x = v62 + v59;
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  UIWidget_o *transform; // x0
  __int64 v53; // x1
  UILabel_o *v54; // x8
  UISprite_o *v55; // x26
  AtlasManager_c *v56; // x0
  int32_t v57; // w25
  float v58; // s0
  float v59; // s8
  float v60; // s1
  float v61; // s0
  int32_t v62; // w25
  float v63; // s8
  float x; // s0
  __int64 v65; // x1
  UnityEngine_Object_c *v66; // x0
  float v67; // s0
  float y; // s9
  float v69; // s1
  float v70; // s0
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59728D7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D7 = 1;
  }
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainText,
    v18,
    (System_String_o *)ruby,
    (System_String_o *)pos,
    fontSize,
    (int32_t)imageStr,
    (bool)rubyStr,
    (bool)font);
  v19 = System_String__Concat_75651716(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  this->fields.imageText = imageStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageText,
    (int32_t)imageStr,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v32, v33, v34, v35, v36, v37, v38);
  v39 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v39, v40, v41, v42, v43, v44, v45);
  this->fields.fontType = font;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, (int32_t)font, v46, v47, v48, v49, v50, v51);
  v54 = *ruby;
  this->fields.fontSize = fontSize;
  if ( !v54 )
    goto LABEL_31;
  v55 = *image;
  v56 = AtlasManager_TypeInfo;
  this->fields.rubySize = v54->fields.mFontSize;
  if ( !*(&v56->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v56, v53);
  AtlasManager__SetMark(v55, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v57 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v59 = v58;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v61 = (float)(v59 * (float)v57) / v60;
  v62 = v61 == INFINITY ? 0x80000000 : (int)v61;
  if ( !transform )
    goto LABEL_31;
  UIWidget__SetDimensions(transform, v62, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_31;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color(transform, v73, 0);
  v63 = (float)v62;
  x = pos->fields.x;
  if ( horizontalAlign == 2 )
  {
    x = x - v63;
  }
  else if ( horizontalAlign == 1 )
  {
    x = x + (float)(v63 * -0.5);
  }
  transform = (UIWidget_o *)*image;
  pos->fields.x = x;
  if ( !transform )
    goto LABEL_31;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_31;
  v71.fields.z = 0.0;
  v71.fields.x = pos->fields.x;
  v71.fields.y = pos->fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v71, 0);
  v66 = UnityEngine_Object_TypeInfo;
  this->fields.mainPosition = *pos;
  if ( !*(&v66->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v66, v65);
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
  if ( !*ruby )
    goto LABEL_31;
  v67 = ((float (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*ruby;
  this->fields.rubyPosition.fields.x = (float)((float)(v63 * 0.5) + pos->fields.x) - (float)(v67 * 0.5);
  if ( !transform
    || (y = pos->fields.y,
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method),
        transform = (UIWidget_o *)*ruby,
        this->fields.rubyPosition.fields.y = y + v69,
        !transform)
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_31:
    sub_2213CDC(transform, v53);
  }
  v72.fields.z = 0.0;
  v72.fields.x = this->fields.rubyPosition.fields.x;
  v72.fields.y = this->fields.rubyPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0);
  this->fields.widthSize = v63;
  v70 = pos->fields.x;
  this->fields.dispLength = 1;
  pos->fields.x = v70 + v63;
}


void ScriptMessageLabel__UpdateImage_51891848(
        ScriptMessageLabel_o *this,
        UISprite_o **image,
        UnityEngine_Vector2_o *pos,
        int32_t fontSize,
        float scale,
        System_String_o *imageStr,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  ScriptMessageLabel__UpdateImage_51892000(
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
void ScriptMessageLabel__UpdateImage_51892000(
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
  bool v9; // w7
  float y; // s8
  float x; // s9
  int32_t v19; // w1
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  AtlasManager_c *v54; // x0
  UISprite_o *v55; // x25
  int v56; // w10
  float v57; // s0
  int32_t v58; // w8
  __int64 v59; // x1
  UIWidget_o *transform; // x0
  int32_t v61; // w24
  float v62; // s0
  float v63; // s10
  float v64; // s1
  float v65; // s0
  int32_t v66; // w24
  float v67; // s10
  float v68; // s0
  int32_t v69; // w8
  float v70; // s2
  float v71; // s0
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_59728D5 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D5 = 1;
  }
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainText,
    v19,
    (System_String_o *)pos,
    *(System_String_o **)&fontSize,
    (int32_t)imageStr,
    horizontalAlign,
    (bool)method,
    v9);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v20, v21, v22, v23, v24, v25, v26);
  this->fields.imageText = imageStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageText,
    (int32_t)imageStr,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v33, v34, v35, v36, v37, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v40, v41, v42, v43, v44, v45, v46);
  this->fields.fontType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v47, v48, v49, v50, v51, v52);
  v54 = AtlasManager_TypeInfo;
  v55 = *image;
  v56 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  v57 = (float)fontSize * scale;
  if ( v57 == INFINITY )
    v58 = 0x80000000;
  else
    v58 = (int)v57;
  this->fields.fontSize = v58;
  if ( !v56 )
    j_il2cpp_runtime_class_init_0(v54, v53);
  AtlasManager__SetMark(v55, imageStr, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_23;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._33_MakePixelPerfect.methodPtr)(
    transform,
    transform->klass->vtable._33_MakePixelPerfect.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_23;
  v61 = this->fields.fontSize;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_23;
  v63 = v62;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = (UIWidget_o *)*image;
  v65 = (float)(v63 * (float)v61) / v64;
  v66 = v65 == INFINITY ? 0x80000000 : (int)v65;
  if ( !transform )
    goto LABEL_23;
  UIWidget__SetDimensions(transform, v66, this->fields.fontSize, 0);
  transform = (UIWidget_o *)*image;
  if ( !*image )
    goto LABEL_23;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color(transform, v73, 0);
  v67 = (float)v66;
  v68 = pos->fields.x;
  if ( horizontalAlign == 2 )
  {
    v68 = v68 - v67;
  }
  else if ( horizontalAlign == 1 )
  {
    v68 = v68 + (float)(v67 * -0.5);
  }
  v69 = this->fields.fontSize;
  v70 = pos->fields.y;
  transform = (UIWidget_o *)*image;
  pos->fields.x = v68;
  this->fields.mainPosition.fields.x = x + v68;
  this->fields.mainPosition.fields.y = y + (float)(v70 + (float)(v69 - fontSize));
  if ( !transform
    || (transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_23:
    sub_2213CDC(transform, v59);
  }
  v72.fields.z = 0.0;
  v72.fields.x = this->fields.mainPosition.fields.x;
  v72.fields.y = this->fields.mainPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0);
  this->fields.widthSize = v67;
  v71 = pos->fields.x;
  this->fields.dispLength = 1;
  pos->fields.x = v71 + v67;
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  UnityEngine_Object_c *v59; // x0
  __int64 v60; // x1
  UILabel_o *transform; // x0
  const MethodInfo *v62; // x3
  float VerticalAlignOffset; // s0
  float v64; // s8
  const MethodInfo *v65; // x1
  float v66; // s0
  ScriptMessageLabel_c *v67; // x0
  System_String_o *mainText; // x21
  int v69; // w8
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728CF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728CF = 1;
  }
  v17 = System_String__Concat_75651716(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v24, v25, v26, v27, v28, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v31, v32, v33, v34, v35, v36, v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v45, v46, v47, v48, v49, v50, v51);
  this->fields.fontType = font;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, (int32_t)font, v52, v53, v54, v55, v56, v57);
  v59 = UnityEngine_Object_TypeInfo;
  this->fields.fontSize = fontSize;
  if ( !*(&v59->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v59, v58);
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
        v70.fields.z = 0.0;
        v70.fields.x = pos->fields.x;
        v70.fields.y = pos->fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v70, 0);
        this->fields.yOffset = 0.0;
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_2213CDC(transform, v60);
  }
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v60);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v62);
  transform = *main;
  this->fields.yOffset = VerticalAlignOffset;
  if ( !transform )
    goto LABEL_23;
  v64 = VerticalAlignOffset;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_23;
  v71.fields.x = pos->fields.x;
  v71.fields.z = 0.0;
  v71.fields.y = pos->fields.y - v64;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v71, 0);
LABEL_19:
  this->fields.mainPosition = *pos;
  transform = *main;
  if ( !*main )
    goto LABEL_23;
  v66 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v66;
  v67 = ScriptMessageLabel_TypeInfo;
  mainText = this->fields.mainText;
  v69 = *(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1);
  pos->fields.x = v66 + pos->fields.x;
  if ( !v69 )
    j_il2cpp_runtime_class_init_0(v67, v65);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v65);
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
  bool v7; // w7
  int32_t v14; // w1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  AtlasManager_c *v49; // x0
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
  float v60; // s8
  struct UnityEngine_Vector2_o v61; // x8
  float x; // s0
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59728D3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D3 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainText,
    v14,
    (System_String_o *)pos,
    *(System_String_o **)&fontSize,
    length,
    (int32_t)imageStr,
    (bool)method,
    v7);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v15, v16, v17, v18, v19, v20, v21);
  this->fields.imageText = imageStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageText,
    (int32_t)imageStr,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v28, v29, v30, v31, v32, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v35, v36, v37, v38, v39, v40, v41);
  this->fields.fontType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v42, v43, v44, v45, v46, v47);
  v49 = AtlasManager_TypeInfo;
  v50 = *image;
  imageText = this->fields.imageText;
  this->fields.fontSize = fontSize;
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, v48);
  AtlasManager__SetMark(v50, imageText, 0);
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
  v55 = AtlasSprite;
  transform = *image;
  if ( !*image )
    goto LABEL_16;
  v56 = length * fontSize;
  UIWidget__SetDimensions((UIWidget_o *)transform, v56, fontSize, 0);
  v58 = (UIWidget_o *)*image;
  colorTag = this->fields.colorTag;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v57);
  Color = ScriptMessageLabel__GetColor(colorTag, v57);
  if ( !v58
    || (UIWidget__set_color(v58, Color, 0),
        v60 = (float)v56,
        transform = *image,
        pos->fields.x = pos->fields.x + (float)(6.0 - (float)((float)((float)v56 / (float)v55->fields.width) * 6.0)),
        !transform)
    || (transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_16:
    sub_2213CDC(transform, v52);
  }
  v63.fields.z = 0.0;
  v63.fields.x = pos->fields.x;
  v63.fields.y = pos->fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v63, 0);
  v61 = *pos;
  this->fields.widthSize = v60;
  this->fields.mainPosition = v61;
  x = pos->fields.x;
  this->fields.dispLength = 1;
  pos->fields.x = x + v60;
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
  bool v7; // w6
  bool v8; // w7
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  ScriptMessageLabel_c *v48; // x0

  if ( (byte_59728D8 & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D8 = 1;
  }
  this->fields.isPlayingVoice = 0;
  this->fields.setReplayingVoice = setReplayingVoice;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setReplayingVoice,
    (int32_t)setReplayingVoice,
    objectName,
    (System_String_o *)setReplayingVoice,
    (int32_t)method,
    v6,
    v7,
    v8);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, v14, v15, v16, v17, v18, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, v21, v22, v23, v24, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v28, v29, v30, v31, v32, v33, v34);
  this->fields.playVoiceAssetName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName,
    (int32_t)assetName,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.playVoiceObjectName = objectName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName,
    (int32_t)objectName,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = ScriptMessageLabel_TypeInfo;
  this->fields.playVoiceVolume = volume;
  if ( !*(&v48->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v48, v47);
    v48 = ScriptMessageLabel_TypeInfo;
  }
  this->fields.mainPosition.fields.x = v48->static_fields->PLAY_VOICE_POSITION_X;
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  UILabel_o *transform; // x0
  __int64 v61; // x1
  UILabel_o *v62; // x8
  UnityEngine_Object_c *v63; // x0
  const MethodInfo *v64; // x3
  float VerticalAlignOffset; // s0
  float v66; // s8
  float v67; // s0
  float v68; // s8
  float v69; // s0
  float y; // s8
  float v71; // s1
  const MethodInfo *v72; // x1
  float v73; // s0
  ScriptMessageLabel_c *v74; // x0
  System_String_o *mainText; // x21
  int v76; // w8
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728D1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728D1 = 1;
  }
  v19 = System_String__Concat_75651716(this->fields.colorTag, mainStr, 0);
  this->fields.mainText = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainText, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = System_String__Concat_75651716(this->fields.colorTag, rubyStr, 0);
  this->fields.rubyText = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyText, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.imageText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageText, v33, v34, v35, v36, v37, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAssetName, v40, v41, v42, v43, v44, v45, v46);
  v47 = (int)StringLiteral_1/*""*/;
  this->fields.playVoiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceObjectName, v47, v48, v49, v50, v51, v52, v53);
  this->fields.fontType = font;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, (int32_t)font, v54, v55, v56, v57, v58, v59);
  v62 = *ruby;
  this->fields.fontSize = fontSize;
  if ( !v62 )
    goto LABEL_33;
  v63 = UnityEngine_Object_TypeInfo;
  this->fields.rubySize = v62->fields.mFontSize;
  if ( !*(&v63->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v63, v61);
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
    sub_2213CDC(transform, v61);
  UILabel__set_text(transform, this->fields.mainText, 0);
  if ( fontSize != maxFontSize )
  {
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v61);
    VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(verticalAlign, fontSize, maxFontSize, v64);
    transform = *main;
    this->fields.yOffset = VerticalAlignOffset;
    if ( transform )
    {
      v66 = VerticalAlignOffset;
      transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v79.fields.x = pos->fields.x;
        v79.fields.z = 0.0;
        v79.fields.y = pos->fields.y - v66;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v79, 0);
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
  v78.fields.z = 0.0;
  v78.fields.x = pos->fields.x;
  v78.fields.y = pos->fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v78, 0);
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
  v68 = v67;
  v69 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  transform = *ruby;
  this->fields.rubyPosition.fields.x = (float)(pos->fields.x + (float)(v69 * 0.5)) - (float)(v68 * 0.5);
  if ( !transform )
    goto LABEL_33;
  y = pos->fields.y;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
    transform,
    transform->klass->vtable._22_get_localSize.method);
  transform = *ruby;
  this->fields.rubyPosition.fields.y = y + v71;
  if ( !transform )
    goto LABEL_33;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_33;
  v80.fields.z = 0.0;
  v80.fields.x = this->fields.rubyPosition.fields.x;
  v80.fields.y = this->fields.rubyPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v80, 0);
  transform = *main;
  if ( !*main )
    goto LABEL_33;
  v73 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._22_get_localSize.methodPtr)(
          transform,
          transform->klass->vtable._22_get_localSize.method);
  this->fields.widthSize = v73;
  v74 = ScriptMessageLabel_TypeInfo;
  mainText = this->fields.mainText;
  v76 = *(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1);
  pos->fields.x = v73 + pos->fields.x;
  if ( !v76 )
    j_il2cpp_runtime_class_init_0(v74, v72);
  this->fields.dispLength = ScriptMessageLabel__StrlenByDisp(mainText, v72);
}


float ScriptMessageLabel__getVerticalAlignOffset(
        int32_t vAlign,
        int32_t fontSize,
        int32_t maxFontSize,
        const MethodInfo *method)
{
  unsigned int v5; // w8
  unsigned int v6; // w9
  float v7; // s8
  double v8; // d0
  double v9; // d0
  float v10; // s2
  float v11; // s1
  __int64 v12; // x8
  float result; // s0
  float v14; // s2
  double iptr; // [xsp+8h] [xbp-18h] BYREF

  if ( fontSize >= 0 )
    v5 = fontSize;
  else
    v5 = fontSize + 1;
  if ( maxFontSize >= 0 )
    v6 = maxFontSize;
  else
    v6 = maxFontSize + 1;
  v7 = (float)(int)(2 * ((v6 >> 1) - (v5 >> 1))) * 0.9;
  v8 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      result = floorf(v7 + 0.5);
      goto LABEL_17;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      result = ceilf(v7 + -0.5);
      goto LABEL_17;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9;
  v12 = (__int64)v9;
  result = v11 + v10;
  if ( (v12 & 1) == 0 )
    result = v11;
LABEL_17:
  v14 = result * 0.5;
  if ( vAlign != 2 )
    result = 0.0;
  if ( vAlign == 1 )
    return v14;
  return result;
}


void ScriptMessageLabel___c__DisplayClass60_0___ctor(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptMessageLabel___c__DisplayClass60_0___SetLogDraw_b__0(
        ScriptMessageLabel___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  ScriptMessageLabel___c__DisplayClass60_0_o *v2; // x19
  struct ScriptMessageLabel_o *_4__this; // x8
  UnityEngine_Object_o *fontType; // x20
  struct ScriptMessageLabel_o *v5; // x8
  struct ScriptMessageLabel_o *v6; // x8
  bool v7; // w8
  struct ScriptMessageLabel_o *v8; // x8
  struct ScriptMessageLabel_o *v9; // x8
  float32x2_t *v10; // x8
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  v2 = this;
  if ( (byte_59728DF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageLabel___c__DisplayClass60_0_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728DF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  fontType = (UnityEngine_Object_o *)_4__this->fields.fontType;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  v7 = System_String__op_Inequality(v6->fields.rubyText, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (ScriptMessageLabel___c__DisplayClass60_0_o *)v2->fields.ruby;
  if ( v7 )
  {
    v8 = v2->fields.__4__this;
    if ( v8 )
    {
      if ( this )
      {
        UILabel__set_fontSize((UILabel_o *)this, v8->fields.rubySize, 0);
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
                  *(float32x2_t *)&v11.fields.x = vsub_f32(v10[10], v10[9]);
                  v11.fields.z = 0.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v11, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
}