void WarBoardOverlayEffectComponent___ctor(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.mainLabelOffsetY = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool WarBoardOverlayEffectComponent__CheckRubyText(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardOverlayEffectComponent_o *v9; // x20
  int32_t stringLength; // w24
  int32_t v11; // w1
  MissionNaviTransitionBoardItem_o *p_mainText; // x21
  int32_t v13; // w1
  MissionNaviTransitionBoardItem_o *p_rubyText; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool v21; // w25
  char v22; // w28
  char v23; // w27
  int32_t v24; // w22
  uint16_t Chars; // w0
  __int64 v26; // x1
  __int64 v27; // x2
  int v28; // w8
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x23
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2
  System_String_o *v49; // x23
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *klass; // x23
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  _WORD v68[2]; // [xsp+Ch] [xbp-54h] BYREF

  v9 = this;
  if ( (byte_5935E74 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935E74 = 1;
  }
  v68[0] = 0;
  if ( !message )
    sub_21FFECC(this, message);
  stringLength = message->fields._stringLength;
  v11 = (int)StringLiteral_1/*""*/;
  v9->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = (MissionNaviTransitionBoardItem_o *)&v9->fields.mainText;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.mainText,
    v11,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (int)StringLiteral_1/*""*/;
  v9->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_rubyText = (MissionNaviTransitionBoardItem_o *)&v9->fields.rubyText;
  sub_21FFBF4(p_rubyText, v13, v15, v16, v17, v18, v19, v20);
  if ( stringLength >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(message, v24, 0);
      v68[0] = Chars;
      if ( Chars > 0x5Au )
        break;
      if ( Chars == 35 )
      {
        if ( (v22 & 1) == 0 )
          goto LABEL_21;
      }
      else
      {
        if ( Chars != 58 )
          goto LABEL_15;
        if ( (v22 & 1) == 0 )
          goto LABEL_21;
        v23 = 1;
      }
      v22 = 1;
LABEL_25:
      if ( stringLength == ++v24 )
        return v21;
    }
    if ( Chars == 91 )
    {
      if ( System_String__get_Chars(message, v24 + 1, 0) == 35 )
      {
        v22 = 1;
        v21 = 1;
      }
      else
      {
        klass = (System_String_o *)p_mainText->klass;
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v47, v48);
        v59 = System_Char__ToString((uint16_t)v68, 0);
        v60 = System_String__Concat_75438412(klass, v59, 0);
        p_mainText->klass = (MissionNaviTransitionBoardItem_c *)v60;
        sub_21FFBF4(p_mainText, (int32_t)v60, v61, v62, v63, v64, v65, v66);
      }
      goto LABEL_25;
    }
    if ( Chars != 93 )
    {
LABEL_15:
      v28 = *(_DWORD *)(qword_594C0B0 + 228);
      if ( (v23 & 1) != 0 )
      {
        v29 = (System_String_o *)p_rubyText->klass;
        if ( !v28 )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v26, v27);
        v30 = System_Char__ToString((uint16_t)v68, 0);
        v31 = System_String__Concat_75438412(v29, v30, 0);
        p_rubyText->klass = (MissionNaviTransitionBoardItem_c *)v31;
        sub_21FFBF4(p_rubyText, (int32_t)v31, v32, v33, v34, v35, v36, v37);
        v23 = 1;
      }
      else
      {
        v49 = (System_String_o *)p_mainText->klass;
        if ( !v28 )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v26, v27);
        v50 = System_Char__ToString((uint16_t)v68, 0);
        v51 = System_String__Concat_75438412(v49, v50, 0);
        p_mainText->klass = (MissionNaviTransitionBoardItem_c *)v51;
        sub_21FFBF4(p_mainText, (int32_t)v51, v52, v53, v54, v55, v56, v57);
        v23 = 0;
      }
      goto LABEL_25;
    }
    if ( (v22 & 1) != 0 )
    {
      v23 = 0;
    }
    else
    {
LABEL_21:
      v38 = (System_String_o *)p_mainText->klass;
      if ( !*(_DWORD *)(qword_594C0B0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_594C0B0, v26, v27);
      v39 = System_Char__ToString((uint16_t)v68, 0);
      v40 = System_String__Concat_75438412(v38, v39, 0);
      p_mainText->klass = (MissionNaviTransitionBoardItem_c *)v40;
      sub_21FFBF4(p_mainText, (int32_t)v40, v41, v42, v43, v44, v45, v46);
    }
    v22 = 0;
    goto LABEL_25;
  }
  return 0;
}


System_String_o *WarBoardOverlayEffectComponent__GetFormalText(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  System_Collections_Generic_List_char__o *v6; // x21
  System_String_o *Chars; // x0
  __int64 v8; // x1
  int32_t v9; // w23
  char v10; // w28
  char v11; // w19
  char v12; // w26
  System_String_o *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x0
  struct System_Char_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v28; // [xsp+0h] [xbp-70h]
  _WORD v29[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5935E75 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_char__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_char___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_char__TypeInfo);
    sub_21FFC50(&StringLiteral_16408/*"[#"*/);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5935E75 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v29[0] = 0;
  v6 = (System_Collections_Generic_List_char__o *)sub_21FFEBC(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_43E1E40 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_42;
  v28 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v29[0] = System_String__get_Chars(labelText, v9, 0);
      if ( !*(_DWORD *)(qword_594C0B0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_594C0B0, v14, v15);
      v16 = System_Char__ToString((uint16_t)v29, 0);
      v5 = System_String__Concat_75438412(v5, v16, 0);
      if ( (v11 & 1) != 0 )
      {
        v29[0] = System_String__get_Chars(labelText, v9, 0);
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v17, v18);
        v19 = System_Char__ToString((uint16_t)v29, 0);
        v13 = System_String__Concat_75438412(v13, v19, 0);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
      if ( !v6 )
        goto LABEL_42;
      items = v6->fields._items;
      v21 = Method_System_Collections_Generic_List_char__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_42;
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v6,
          (uint16_t)Chars,
          *(const MethodInfo_43E26D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v9, 0) == 91 && System_String__get_Chars(labelText, v9 + 1, 0) == 35 )
      {
        v12 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
        if ( (unsigned __int16)Chars != 35 || (v10 & 1) == 0 )
        {
          if ( ((unsigned __int8)v10 & (System_String__get_Chars(labelText, v9, 0) == 58)) != 0 )
          {
            v10 = 1;
            v11 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
            if ( (unsigned __int16)Chars == 93 && (v10 & 1) != 0 )
            {
              if ( (v11 & 1) != 0 )
              {
                Chars = System_String__Concat_75438412((System_String_o *)StringLiteral_1532/*":"*/, v13, 0);
                if ( !v5 )
                  goto LABEL_42;
                v23 = Chars;
              }
              else
              {
                if ( !v5 )
                  goto LABEL_42;
                v23 = (System_String_o *)StringLiteral_16659/*"]"*/;
              }
              v24 = System_String__Replace_75490096(v5, v23, (System_String_o *)StringLiteral_1/*""*/, 0);
              v13 = (System_String_o *)StringLiteral_1/*""*/;
              v5 = v24;
              v10 = 0;
              v11 = 0;
            }
          }
          goto LABEL_33;
        }
        if ( !v5 )
          goto LABEL_42;
        v5 = System_String__Replace_75490096(
               v5,
               (System_String_o *)StringLiteral_16408/*"[#"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
      }
      v10 = 1;
LABEL_33:
      if ( ++v9 >= labelText->fields._stringLength )
        goto LABEL_36;
    }
  }
  v12 = 1;
LABEL_36:
  Chars = (System_String_o *)v28->fields.mainLabel;
  if ( !Chars )
    goto LABEL_42;
  Chars = (System_String_o *)WrapControlText__textAdjust((UILabel_o *)Chars, v5, Chars[17].fields._stringLength, 0, 0);
  if ( (v12 & 1) != 0 )
  {
    mainLabel = v28->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_42:
    sub_21FFECC(Chars, v8);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v28, v6, v25);
}


bool WarBoardOverlayEffectComponent__GetIsLoop(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isLoop;
}


int32_t WarBoardOverlayEffectComponent__GetKind(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


float WarBoardOverlayEffectComponent__GetWaitTime(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.waitTime;
}


void WarBoardOverlayEffectComponent__Init(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mainLabel; // x21
  bool v6; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *rubyLabel; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v13; // x2
  struct UILabel_o *v14; // x0

  if ( (byte_5935E73 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E73 = 1;
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, method);
  v6 = UnityEngine_Object__op_Inequality(mainLabel, 0, 0);
  if ( text && v6 )
  {
    rubyLabel = (UnityEngine_Object_o *)this->fields.rubyLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(rubyLabel, 0, 0)
      && (FormalText = WarBoardOverlayEffectComponent__GetFormalText(this, text, v11),
          WarBoardOverlayEffectComponent__CheckRubyText(this, FormalText, v13)) )
    {
      WarBoardOverlayEffectComponent__SetMainObject(this, v10);
    }
    else
    {
      v14 = this->fields.mainLabel;
      if ( !v14 )
        sub_21FFECC(0, v10);
      WrapControlText__fontSizeAdjust(v14, text, v14->fields.mFontSize, 0);
    }
  }
}


void WarBoardOverlayEffectComponent__SetMainObject(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  UILabel_o *mainLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s0
  float v6; // s8

  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  UILabel__set_text(mainLabel, this->fields.mainText, 0);
  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainLabel, 0);
  GameObjectExtensions__AddLocalPositionY(gameObject, this->fields.mainLabelOffsetY, 0);
  mainLabel = this->fields.rubyLabel;
  if ( !mainLabel )
    goto LABEL_10;
  UILabel__set_text(mainLabel, this->fields.rubyText, 0);
  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  LODWORD(v5) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0);
  mainLabel = this->fields.rubyLabel;
  if ( !mainLabel )
    goto LABEL_10;
  v6 = v5;
  if ( UILabel__get_printedSize(mainLabel, 0).fields.x > v5 )
  {
    mainLabel = this->fields.rubyLabel;
    if ( mainLabel )
    {
      UILabel__SetCondensedScale_56386440(mainLabel, v6, 0.0, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(mainLabel, method);
  }
}


System_String_o *WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  WarBoardOverlayEffectComponent_o *v4; // x20
  System_String_o *v5; // x22
  int32_t v6; // w23
  int32_t v7; // w21
  struct UILabel_o *mainLabel; // x8
  unsigned __int16 v9; // w24
  uint16_t Chars; // w25
  __int64 v11; // x2
  System_String_o *v12; // x0
  struct UILabel_o *v13; // x8
  struct System_String_o *mText; // x9
  int32_t v15; // w24
  struct UILabel_o *v16; // x8
  unsigned __int16 v17; // w26
  struct UILabel_o *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x8
  struct System_String_o *v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x0
  struct UILabel_o *v31; // x8
  struct System_String_o *v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x0
  _WORD v37[2]; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_5935E76 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_char__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_char__get_Item__);
    this = (WarBoardOverlayEffectComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935E76 = 1;
  }
  v37[0] = 0;
  if ( !localMainTextList )
LABEL_52:
    sub_21FFECC(this, localMainTextList);
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( localMainTextList->fields._size >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v6,
                                                   (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_52;
      v9 = (unsigned __int16)this;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_52;
      Chars = System_String__get_Chars((System_String_o *)this, v7, 0);
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v6,
                                                   (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
      if ( v9 == Chars )
      {
        v37[0] = (_WORD)this;
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, localMainTextList, v11);
        v12 = System_Char__ToString((uint16_t)v37, 0);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_75438412(v5, v12, 0);
        v13 = v4->fields.mainLabel;
        if ( !v13 )
          goto LABEL_52;
        mText = v13->fields.mText;
        if ( !mText )
          goto LABEL_52;
        v5 = (System_String_o *)this;
        if ( v7 < mText->fields._stringLength - 1 )
          ++v7;
      }
      else
      {
        if ( (unsigned __int16)this != 10 )
        {
          v37[0] = System_Collections_Generic_List_char___get_Item(
                     localMainTextList,
                     v6,
                     (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( !*(_DWORD *)(qword_594C0B0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_594C0B0, v24, v25);
          v26 = System_Char__ToString((uint16_t)v37, 0);
          v5 = System_String__Concat_75438412(v5, v26, 0);
          goto LABEL_36;
        }
        v13 = v4->fields.mainLabel;
        if ( !v13 )
          goto LABEL_52;
      }
      this = (WarBoardOverlayEffectComponent_o *)v13->fields.mText;
      if ( !this )
        goto LABEL_52;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v7, 0);
      if ( (unsigned __int16)this == 10 )
      {
        v15 = v6 + 1;
        if ( v6 + 1 >= localMainTextList->fields._size )
          goto LABEL_24;
        this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                     localMainTextList,
                                                     v15,
                                                     (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
        v16 = v4->fields.mainLabel;
        if ( !v16 )
          goto LABEL_52;
        v17 = (unsigned __int16)this;
        this = (WarBoardOverlayEffectComponent_o *)v16->fields.mText;
        if ( !this )
          goto LABEL_52;
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v7 + 1, 0);
        if ( v17 == (unsigned __int16)this )
        {
LABEL_24:
          v18 = v4->fields.mainLabel;
          if ( !v18 )
            goto LABEL_52;
          this = (WarBoardOverlayEffectComponent_o *)v18->fields.mText;
          if ( !this )
            goto LABEL_52;
          v37[0] = System_String__get_Chars((System_String_o *)this, v7, 0);
          if ( !*(_DWORD *)(qword_594C0B0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_594C0B0, v19, v20);
          v21 = System_Char__ToString((uint16_t)v37, 0);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_75438412(v5, v21, 0);
          v22 = v4->fields.mainLabel;
          if ( !v22 )
            goto LABEL_52;
          v23 = v22->fields.mText;
          if ( !v23 )
            goto LABEL_52;
          v5 = (System_String_o *)this;
          if ( v7 < v23->fields._stringLength - 1 )
            ++v7;
        }
        else
        {
          this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                       localMainTextList,
                                                       v15,
                                                       (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( (unsigned __int16)this == 10 )
          {
            v27 = v4->fields.mainLabel;
            if ( !v27 )
              goto LABEL_52;
            this = (WarBoardOverlayEffectComponent_o *)v27->fields.mText;
            if ( !this )
              goto LABEL_52;
            v37[0] = System_String__get_Chars((System_String_o *)this, v7, 0);
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v28, v29);
            v30 = System_Char__ToString((uint16_t)v37, 0);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_75438412(v5, v30, 0);
            v31 = v4->fields.mainLabel;
            if ( !v31 )
              goto LABEL_52;
            v32 = v31->fields.mText;
            if ( !v32 )
              goto LABEL_52;
            v5 = (System_String_o *)this;
            if ( v7 < v32->fields._stringLength - 1 )
              ++v7;
          }
          else
          {
            v37[0] = System_Collections_Generic_List_char___get_Item(
                       localMainTextList,
                       v15,
                       (const MethodInfo_43E23D8 *)Method_System_Collections_Generic_List_char__get_Item__);
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v33, v34);
            v35 = System_Char__ToString((uint16_t)v37, 0);
            v5 = System_String__Concat_75438412(v5, v35, 0);
            ++v6;
          }
        }
      }
LABEL_36:
      ++v6;
    }
    while ( v6 < localMainTextList->fields._size );
  }
  return v5;
}