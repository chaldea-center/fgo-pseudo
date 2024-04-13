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
  if ( (byte_42E75D8 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)message, (_DWORD)method, v3);
    byte_42E75D8 = 1;
  }
  v63[0] = 0;
  if ( !message )
    sub_B5D69C(this, message);
  m_stringLength = message->fields.m_stringLength;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  v9->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = &v9->fields.mainText;
  sub_B5D560((BattleServantConfConponent_o *)p_mainText, v11, (System_String_array **)method, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  v14 = p_mainText + 1;
  p_mainText[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)(p_mainText + 1), v13, v15, v16, v17, v18, v19, v20);
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
        v36 = (System_Int32_array **)System_String__Concat_44577788(v34, v35, 0LL);
        *p_mainText = (struct System_String_o *)v36;
        sub_B5D560((BattleServantConfConponent_o *)p_mainText, v36, v37, v38, v39, v40, v41, v42);
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
        v46 = (System_Int32_array **)System_String__Concat_44577788(v44, v45, 0LL);
        *v14 = (System_String_o *)v46;
        sub_B5D560((BattleServantConfConponent_o *)(p_mainText + 1), v46, v47, v48, v49, v50, v51, v52);
        v23 = 1;
      }
      else
      {
        v25 = *p_mainText;
        v26 = System_Char__ToString((uint16_t)v63, 0LL);
        v27 = (System_Int32_array **)System_String__Concat_44577788(v25, v26, 0LL);
        *p_mainText = (struct System_String_o *)v27;
        sub_B5D560((BattleServantConfConponent_o *)p_mainText, v27, v28, v29, v30, v31, v32, v33);
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
      v55 = (System_Int32_array **)System_String__Concat_44577788(v53, v54, 0LL);
      *p_mainText = (struct System_String_o *)v55;
      sub_B5D560((BattleServantConfConponent_o *)p_mainText, v55, v56, v57, v58, v59, v60, v61);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_o *v24; // x22
  System_Collections_Generic_List_char__o *v25; // x21
  System_String_o *Chars; // x0
  __int64 v27; // x1
  int32_t v28; // w23
  char v29; // w28
  char v30; // w19
  char v31; // w26
  System_String_o *v32; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v40; // [xsp+0h] [xbp-60h]
  __int16 v41[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E75D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_char__Add__, (_DWORD)labelText, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_char___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_char__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15827/*"[#"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42E75D9 = 1;
  }
  v41[0] = 0;
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  v25 = (System_Collections_Generic_List_char__o *)sub_B5D694(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v25,
    (const MethodInfo_301A704 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_34;
  v40 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 1;
    v32 = v24;
    while ( 1 )
    {
      v41[0] = System_String__get_Chars(labelText, v28, 0LL);
      v33 = System_Char__ToString((uint16_t)v41, 0LL);
      v24 = System_String__Concat_44577788(v24, v33, 0LL);
      if ( (v30 & 1) != 0 )
      {
        v41[0] = System_String__get_Chars(labelText, v28, 0LL);
        v34 = System_Char__ToString((uint16_t)v41, 0LL);
        v32 = System_String__Concat_44577788(v32, v34, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v28, 0LL);
      if ( !v25 )
        goto LABEL_34;
      System_Collections_Generic_List_char___Add(
        v25,
        (uint16_t)Chars,
        (const MethodInfo_301B460 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v28, 0LL) == 91
        && System_String__get_Chars(labelText, v28 + 1, 0LL) == 35 )
      {
        v31 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v28, 0LL);
        if ( (unsigned __int16)Chars != 35 || (v29 & 1) == 0 )
        {
          if ( ((unsigned __int8)v29 & (System_String__get_Chars(labelText, v28, 0LL) == 58)) != 0 )
          {
            v29 = 1;
            v30 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v28, 0LL);
            if ( (unsigned __int16)Chars == 93 && (v29 & 1) != 0 )
            {
              if ( (v30 & 1) != 0 )
              {
                Chars = System_String__Concat_44577788((System_String_o *)StringLiteral_1245/*":"*/, v32, 0LL);
                if ( !v24 )
                  goto LABEL_34;
                v35 = Chars;
              }
              else
              {
                if ( !v24 )
                  goto LABEL_34;
                v35 = (System_String_o *)StringLiteral_16061/*"]"*/;
              }
              v36 = System_String__Replace_44585024(v24, v35, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v32 = (System_String_o *)StringLiteral_1/*""*/;
              v24 = v36;
              v29 = 0;
              v30 = 0;
            }
          }
          goto LABEL_25;
        }
        if ( !v24 )
          goto LABEL_34;
        v24 = System_String__Replace_44585024(
                v24,
                (System_String_o *)StringLiteral_15827/*"[#"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
      }
      v29 = 1;
LABEL_25:
      if ( ++v28 >= labelText->fields.m_stringLength )
        goto LABEL_28;
    }
  }
  v31 = 1;
LABEL_28:
  Chars = (System_String_o *)v40->fields.mainLabel;
  if ( !Chars )
    goto LABEL_34;
  Chars = (System_String_o *)WrapControlText__textAdjust((UILabel_o *)Chars, v24, (int32_t)Chars[17].monitor, 0, 0, 0LL);
  if ( (v31 & 1) != 0 )
  {
    mainLabel = v40->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_34:
    sub_B5D69C(Chars, v27);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v40, v25, v37);
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
  __int64 v3; // x3
  UnityEngine_Object_o *mainLabel; // x21
  bool v7; // w0
  UnityEngine_Object_o *rubyLabel; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v12; // x2
  struct UILabel_o *v13; // x0

  if ( (byte_42E75D7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)text, (_DWORD)method, v3);
    byte_42E75D7 = 1;
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( text && v7 )
  {
    rubyLabel = (UnityEngine_Object_o *)this->fields.rubyLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rubyLabel, 0LL, 0LL)
      && (FormalText = WarBoardOverlayEffectComponent__GetFormalText(this, text, v10),
          WarBoardOverlayEffectComponent__CheckRubyText(this, FormalText, v12)) )
    {
      WarBoardOverlayEffectComponent__SetMainObject(this, v9);
    }
    else
    {
      v13 = this->fields.mainLabel;
      if ( !v13 )
        sub_B5D69C(0LL, v9);
      WrapControlText__fontSizeAdjust(v13, text, v13->fields.mFontSize, 0LL);
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
      UILabel__SetCondensedScale_41950620(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(mainLabel, method);
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardOverlayEffectComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t size; // w8
  System_String_o *v13; // x22
  unsigned int v14; // w24
  int32_t v15; // w21
  struct UILabel_o *v16; // x8
  System_String_o *v17; // x0
  struct UILabel_o *v18; // x8
  struct System_String_o *v19; // x8
  System_String_o *v20; // x0
  struct UILabel_o *mainLabel; // x8
  int v22; // w26
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x8
  struct System_String_o *mText; // x9
  int32_t v26; // w8
  unsigned int v27; // w25
  struct UILabel_o *v28; // x8
  int v29; // w26
  struct UILabel_o *v30; // x8
  System_String_o *v31; // x0
  struct UILabel_o *v32; // x8
  struct System_String_o *v33; // x8
  System_String_o *v34; // x0
  __int16 v36[2]; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_42E75DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_char__get_Count__, (_DWORD)localMainTextList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_char__get_Item__, v6, v7, v8);
    this = (WarBoardOverlayEffectComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E75DA = 1;
  }
  v36[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B5D69C(this, localMainTextList);
  size = localMainTextList->fields._size;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( size >= 1 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      if ( size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      mainLabel = v5->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_53;
      v22 = localMainTextList->fields._items->m_Items[v14 + 2];
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v15, 0LL);
      if ( localMainTextList->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v22 == (unsigned __int16)this )
      {
        v36[0] = localMainTextList->fields._items->m_Items[v14 + 2];
        v23 = System_Char__ToString((uint16_t)v36, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44577788(v13, v23, 0LL);
        v24 = v5->fields.mainLabel;
        if ( !v24 )
          goto LABEL_53;
        mText = v24->fields.mText;
        if ( !mText )
          goto LABEL_53;
        v13 = (System_String_o *)this;
        if ( v15 < mText->fields.m_stringLength - 1 )
          ++v15;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v14 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v14 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36[0] = localMainTextList->fields._items->m_Items[v14 + 2];
          v34 = System_Char__ToString((uint16_t)v36, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44577788(v13, v34, 0LL);
          v13 = (System_String_o *)this;
          goto LABEL_51;
        }
        v24 = v5->fields.mainLabel;
        if ( !v24 )
          goto LABEL_53;
      }
      this = (WarBoardOverlayEffectComponent_o *)v24->fields.mText;
      if ( !this )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v15, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v26 = localMainTextList->fields._size;
        v27 = v14 + 1;
        if ( (int)(v14 + 1) >= v26 )
          goto LABEL_41;
        if ( v26 <= v27 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v28 = v5->fields.mainLabel;
        if ( !v28 )
          goto LABEL_53;
        this = (WarBoardOverlayEffectComponent_o *)v28->fields.mText;
        if ( !this )
          goto LABEL_53;
        v29 = localMainTextList->fields._items->m_Items[v27 + 2];
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v15 + 1, 0LL);
        if ( v29 == (unsigned __int16)this )
        {
LABEL_41:
          v30 = v5->fields.mainLabel;
          if ( !v30 )
            goto LABEL_53;
          this = (WarBoardOverlayEffectComponent_o *)v30->fields.mText;
          if ( !this )
            goto LABEL_53;
          v36[0] = System_String__get_Chars((System_String_o *)this, v15, 0LL);
          v31 = System_Char__ToString((uint16_t)v36, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44577788(v13, v31, 0LL);
          v32 = v5->fields.mainLabel;
          if ( !v32 )
            goto LABEL_53;
          v33 = v32->fields.mText;
          if ( !v33 )
            goto LABEL_53;
          v13 = (System_String_o *)this;
          if ( v15 < v33->fields.m_stringLength - 1 )
            ++v15;
        }
        else
        {
          if ( localMainTextList->fields._size <= v27 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( localMainTextList->fields._items->m_Items[v27 + 2] == 10 )
          {
            v16 = v5->fields.mainLabel;
            if ( !v16 )
              goto LABEL_53;
            this = (WarBoardOverlayEffectComponent_o *)v16->fields.mText;
            if ( !this )
              goto LABEL_53;
            v36[0] = System_String__get_Chars((System_String_o *)this, v15, 0LL);
            v17 = System_Char__ToString((uint16_t)v36, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44577788(v13, v17, 0LL);
            v18 = v5->fields.mainLabel;
            if ( !v18 )
              goto LABEL_53;
            v19 = v18->fields.mText;
            if ( !v19 )
              goto LABEL_53;
            v13 = (System_String_o *)this;
            if ( v15 < v19->fields.m_stringLength - 1 )
              ++v15;
          }
          else
          {
            if ( localMainTextList->fields._size <= v27 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v36[0] = localMainTextList->fields._items->m_Items[v27 + 2];
            v20 = System_Char__ToString((uint16_t)v36, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44577788(v13, v20, 0LL);
            v13 = (System_String_o *)this;
            ++v14;
          }
        }
      }
LABEL_51:
      size = localMainTextList->fields._size;
      ++v14;
    }
    while ( (int)v14 < size );
  }
  return v13;
}