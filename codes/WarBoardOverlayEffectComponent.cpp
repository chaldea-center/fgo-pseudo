void __fastcall WarBoardOverlayEffectComponent___ctor(WarBoardOverlayEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.mainLabelOffsetY = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall WarBoardOverlayEffectComponent__CheckRubyText(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardOverlayEffectComponent_o *v9; // x20
  int32_t m_stringLength; // w24
  System_Int32_array **v11; // x1
  struct System_String_o **p_mainText; // x20
  System_Int32_array **v13; // x1
  System_String_o **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool v21; // w25
  char v22; // w27
  char v23; // w26
  int32_t v24; // w22
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *v34; // x23
  System_String_o *v35; // x0
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  uint16_t Chars; // w0
  System_String_o *v44; // x23
  System_String_o *v45; // x0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int16 v63[2]; // [xsp+Ch] [xbp-44h] BYREF

  v9 = this;
  if ( (byte_438AEC3 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AEC3 = 1;
  }
  v63[0] = 0;
  if ( !message )
    sub_B7769C(this, message);
  m_stringLength = message->fields.m_stringLength;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  v9->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = &v9->fields.mainText;
  sub_B77560((BattleServantConfConponent_o *)p_mainText, v11, (System_String_array **)method, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  v14 = p_mainText + 1;
  p_mainText[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)(p_mainText + 1), v13, v15, v16, v17, v18, v19, v20);
  if ( m_stringLength >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(message, v24, 0LL);
      v63[0] = Chars;
      if ( Chars > 0x5Au )
        break;
      if ( Chars == 35 )
      {
        if ( (v22 & 1) == 0 )
          goto LABEL_23;
      }
      else
      {
        if ( Chars != 58 )
          goto LABEL_19;
        if ( (v22 & 1) == 0 )
          goto LABEL_23;
        v23 = 1;
      }
      v22 = 1;
LABEL_25:
      if ( m_stringLength == ++v24 )
        return v21;
    }
    if ( Chars == 91 )
    {
      if ( System_String__get_Chars(message, v24 + 1, 0LL) == 35 )
      {
        v22 = 1;
        v21 = 1;
      }
      else
      {
        v34 = *p_mainText;
        v35 = System_Char__ToString((uint16_t)v63, 0LL);
        v36 = (System_Int32_array **)System_String__Concat_44901936(v34, v35, 0LL);
        *p_mainText = (struct System_String_o *)v36;
        sub_B77560((BattleServantConfConponent_o *)p_mainText, v36, v37, v38, v39, v40, v41, v42);
      }
      goto LABEL_25;
    }
    if ( Chars != 93 )
    {
LABEL_19:
      if ( (v23 & 1) != 0 )
      {
        v44 = *v14;
        v45 = System_Char__ToString((uint16_t)v63, 0LL);
        v46 = (System_Int32_array **)System_String__Concat_44901936(v44, v45, 0LL);
        *v14 = (System_String_o *)v46;
        sub_B77560((BattleServantConfConponent_o *)(p_mainText + 1), v46, v47, v48, v49, v50, v51, v52);
        v23 = 1;
      }
      else
      {
        v25 = *p_mainText;
        v26 = System_Char__ToString((uint16_t)v63, 0LL);
        v27 = (System_Int32_array **)System_String__Concat_44901936(v25, v26, 0LL);
        *p_mainText = (struct System_String_o *)v27;
        sub_B77560((BattleServantConfConponent_o *)p_mainText, v27, v28, v29, v30, v31, v32, v33);
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
LABEL_23:
      v53 = *p_mainText;
      v54 = System_Char__ToString((uint16_t)v63, 0LL);
      v55 = (System_Int32_array **)System_String__Concat_44901936(v53, v54, 0LL);
      *p_mainText = (struct System_String_o *)v55;
      sub_B77560((BattleServantConfConponent_o *)p_mainText, v55, v56, v57, v58, v59, v60, v61);
    }
    v22 = 0;
    goto LABEL_25;
  }
  return 0;
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__GetFormalText(
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
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v21; // [xsp+0h] [xbp-60h]
  __int16 v22[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438AEC4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_char__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_char___ctor__);
    sub_B775C4(&System_Collections_Generic_List_char__TypeInfo);
    sub_B775C4(&StringLiteral_15928/*"[#"*/);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438AEC4 = 1;
  }
  v22[0] = 0;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = (System_Collections_Generic_List_char__o *)sub_B77694(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_30A5324 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_34;
  v21 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v22[0] = System_String__get_Chars(labelText, v9, 0LL);
      v14 = System_Char__ToString((uint16_t)v22, 0LL);
      v5 = System_String__Concat_44901936(v5, v14, 0LL);
      if ( (v11 & 1) != 0 )
      {
        v22[0] = System_String__get_Chars(labelText, v9, 0LL);
        v15 = System_Char__ToString((uint16_t)v22, 0LL);
        v13 = System_String__Concat_44901936(v13, v15, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
      if ( !v6 )
        goto LABEL_34;
      System_Collections_Generic_List_char___Add(
        v6,
        (uint16_t)Chars,
        (const MethodInfo_30A6080 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v9, 0LL) == 91 && System_String__get_Chars(labelText, v9 + 1, 0LL) == 35 )
      {
        v12 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
        if ( (unsigned __int16)Chars != 35 || (v10 & 1) == 0 )
        {
          if ( ((unsigned __int8)v10 & (System_String__get_Chars(labelText, v9, 0LL) == 58)) != 0 )
          {
            v10 = 1;
            v11 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
            if ( (unsigned __int16)Chars == 93 && (v10 & 1) != 0 )
            {
              if ( (v11 & 1) != 0 )
              {
                Chars = System_String__Concat_44901936((System_String_o *)StringLiteral_1252/*":"*/, v13, 0LL);
                if ( !v5 )
                  goto LABEL_34;
                v16 = Chars;
              }
              else
              {
                if ( !v5 )
                  goto LABEL_34;
                v16 = (System_String_o *)StringLiteral_16162/*"]"*/;
              }
              v17 = System_String__Replace_44909172(v5, v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v13 = (System_String_o *)StringLiteral_1/*""*/;
              v5 = v17;
              v10 = 0;
              v11 = 0;
            }
          }
          goto LABEL_25;
        }
        if ( !v5 )
          goto LABEL_34;
        v5 = System_String__Replace_44909172(
               v5,
               (System_String_o *)StringLiteral_15928/*"[#"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
      }
      v10 = 1;
LABEL_25:
      if ( ++v9 >= labelText->fields.m_stringLength )
        goto LABEL_28;
    }
  }
  v12 = 1;
LABEL_28:
  Chars = (System_String_o *)v21->fields.mainLabel;
  if ( !Chars )
    goto LABEL_34;
  Chars = (System_String_o *)WrapControlText__textAdjust((UILabel_o *)Chars, v5, (int32_t)Chars[17].monitor, 0, 0, 0LL);
  if ( (v12 & 1) != 0 )
  {
    mainLabel = v21->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_34:
    sub_B7769C(Chars, v8);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v21, v6, v18);
}


bool __fastcall WarBoardOverlayEffectComponent__GetIsLoop(
        WarBoardOverlayEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isLoop;
}


int32_t __fastcall WarBoardOverlayEffectComponent__GetKind(
        WarBoardOverlayEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.kind;
}


float __fastcall WarBoardOverlayEffectComponent__GetWaitTime(
        WarBoardOverlayEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.waitTime;
}


void __fastcall WarBoardOverlayEffectComponent__Init(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mainLabel; // x21
  bool v6; // w0
  UnityEngine_Object_o *rubyLabel; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v11; // x2
  struct UILabel_o *v12; // x0

  if ( (byte_438AEC2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AEC2 = 1;
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( text && v6 )
  {
    rubyLabel = (UnityEngine_Object_o *)this->fields.rubyLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rubyLabel, 0LL, 0LL)
      && (FormalText = WarBoardOverlayEffectComponent__GetFormalText(this, text, v9),
          WarBoardOverlayEffectComponent__CheckRubyText(this, FormalText, v11)) )
    {
      WarBoardOverlayEffectComponent__SetMainObject(this, v8);
    }
    else
    {
      v12 = this->fields.mainLabel;
      if ( !v12 )
        sub_B7769C(0LL, v8);
      WrapControlText__fontSizeAdjust(v12, text, v12->fields.mFontSize, 0LL);
    }
  }
}


void __fastcall WarBoardOverlayEffectComponent__SetMainObject(
        WarBoardOverlayEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *mainLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s0
  float v6; // s8

  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  UILabel__set_text(mainLabel, this->fields.mainText, 0LL);
  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainLabel, 0LL);
  GameObjectExtensions__AddLocalPositionY(gameObject, this->fields.mainLabelOffsetY, 0LL);
  mainLabel = this->fields.rubyLabel;
  if ( !mainLabel )
    goto LABEL_10;
  UILabel__set_text(mainLabel, this->fields.rubyText, 0LL);
  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  LODWORD(v5) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  mainLabel = this->fields.rubyLabel;
  if ( !mainLabel )
    goto LABEL_10;
  v6 = v5;
  if ( UILabel__get_printedSize(mainLabel, 0LL).fields.x > v5 )
  {
    mainLabel = this->fields.rubyLabel;
    if ( mainLabel )
    {
      UILabel__SetCondensedScale_41780892(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(mainLabel, method);
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  WarBoardOverlayEffectComponent_o *v4; // x20
  int32_t size; // w8
  System_String_o *v6; // x22
  unsigned int v7; // w24
  int32_t v8; // w21
  struct UILabel_o *v9; // x8
  System_String_o *v10; // x0
  struct UILabel_o *v11; // x8
  struct System_String_o *v12; // x8
  System_String_o *v13; // x0
  struct UILabel_o *mainLabel; // x8
  int v15; // w26
  System_String_o *v16; // x0
  struct UILabel_o *v17; // x8
  struct System_String_o *mText; // x9
  int32_t v19; // w8
  unsigned int v20; // w25
  struct UILabel_o *v21; // x8
  int v22; // w26
  struct UILabel_o *v23; // x8
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x8
  struct System_String_o *v26; // x8
  System_String_o *v27; // x0
  __int16 v29[2]; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_438AEC5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_char__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_char__get_Item__);
    this = (WarBoardOverlayEffectComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AEC5 = 1;
  }
  v29[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B7769C(this, localMainTextList);
  size = localMainTextList->fields._size;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_53;
      v15 = localMainTextList->fields._items->m_Items[v7 + 2];
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v8, 0LL);
      if ( localMainTextList->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( v15 == (unsigned __int16)this )
      {
        v29[0] = localMainTextList->fields._items->m_Items[v7 + 2];
        v16 = System_Char__ToString((uint16_t)v29, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44901936(v6, v16, 0LL);
        v17 = v4->fields.mainLabel;
        if ( !v17 )
          goto LABEL_53;
        mText = v17->fields.mText;
        if ( !mText )
          goto LABEL_53;
        v6 = (System_String_o *)this;
        if ( v8 < mText->fields.m_stringLength - 1 )
          ++v8;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v7 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v29[0] = localMainTextList->fields._items->m_Items[v7 + 2];
          v27 = System_Char__ToString((uint16_t)v29, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44901936(v6, v27, 0LL);
          v6 = (System_String_o *)this;
          goto LABEL_51;
        }
        v17 = v4->fields.mainLabel;
        if ( !v17 )
          goto LABEL_53;
      }
      this = (WarBoardOverlayEffectComponent_o *)v17->fields.mText;
      if ( !this )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v8, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v19 = localMainTextList->fields._size;
        v20 = v7 + 1;
        if ( (int)(v7 + 1) >= v19 )
          goto LABEL_41;
        if ( v19 <= v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v21 = v4->fields.mainLabel;
        if ( !v21 )
          goto LABEL_53;
        this = (WarBoardOverlayEffectComponent_o *)v21->fields.mText;
        if ( !this )
          goto LABEL_53;
        v22 = localMainTextList->fields._items->m_Items[v20 + 2];
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v8 + 1, 0LL);
        if ( v22 == (unsigned __int16)this )
        {
LABEL_41:
          v23 = v4->fields.mainLabel;
          if ( !v23 )
            goto LABEL_53;
          this = (WarBoardOverlayEffectComponent_o *)v23->fields.mText;
          if ( !this )
            goto LABEL_53;
          v29[0] = System_String__get_Chars((System_String_o *)this, v8, 0LL);
          v24 = System_Char__ToString((uint16_t)v29, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44901936(v6, v24, 0LL);
          v25 = v4->fields.mainLabel;
          if ( !v25 )
            goto LABEL_53;
          v26 = v25->fields.mText;
          if ( !v26 )
            goto LABEL_53;
          v6 = (System_String_o *)this;
          if ( v8 < v26->fields.m_stringLength - 1 )
            ++v8;
        }
        else
        {
          if ( localMainTextList->fields._size <= v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( localMainTextList->fields._items->m_Items[v20 + 2] == 10 )
          {
            v9 = v4->fields.mainLabel;
            if ( !v9 )
              goto LABEL_53;
            this = (WarBoardOverlayEffectComponent_o *)v9->fields.mText;
            if ( !this )
              goto LABEL_53;
            v29[0] = System_String__get_Chars((System_String_o *)this, v8, 0LL);
            v10 = System_Char__ToString((uint16_t)v29, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44901936(v6, v10, 0LL);
            v11 = v4->fields.mainLabel;
            if ( !v11 )
              goto LABEL_53;
            v12 = v11->fields.mText;
            if ( !v12 )
              goto LABEL_53;
            v6 = (System_String_o *)this;
            if ( v8 < v12->fields.m_stringLength - 1 )
              ++v8;
          }
          else
          {
            if ( localMainTextList->fields._size <= v20 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v29[0] = localMainTextList->fields._items->m_Items[v20 + 2];
            v13 = System_Char__ToString((uint16_t)v29, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44901936(v6, v13, 0LL);
            v6 = (System_String_o *)this;
            ++v7;
          }
        }
      }
LABEL_51:
      size = localMainTextList->fields._size;
      ++v7;
    }
    while ( (int)v7 < size );
  }
  return v6;
}