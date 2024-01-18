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
  if ( (byte_4186552 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, message);
    byte_4186552 = 1;
  }
  v63[0] = 0;
  if ( !message )
    sub_B2C434(this, message);
  m_stringLength = message->fields.m_stringLength;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  v9->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = &v9->fields.mainText;
  sub_B2C2F8((BattleServantConfConponent_o *)p_mainText, v11, (System_String_array **)method, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  v14 = p_mainText + 1;
  p_mainText[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_mainText + 1), v13, v15, v16, v17, v18, v19, v20);
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
        v36 = (System_Int32_array **)System_String__Concat_44305532(v34, v35, 0LL);
        *p_mainText = (struct System_String_o *)v36;
        sub_B2C2F8((BattleServantConfConponent_o *)p_mainText, v36, v37, v38, v39, v40, v41, v42);
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
        v46 = (System_Int32_array **)System_String__Concat_44305532(v44, v45, 0LL);
        *v14 = (System_String_o *)v46;
        sub_B2C2F8((BattleServantConfConponent_o *)(p_mainText + 1), v46, v47, v48, v49, v50, v51, v52);
        v23 = 1;
      }
      else
      {
        v25 = *p_mainText;
        v26 = System_Char__ToString((uint16_t)v63, 0LL);
        v27 = (System_Int32_array **)System_String__Concat_44305532(v25, v26, 0LL);
        *p_mainText = (struct System_String_o *)v27;
        sub_B2C2F8((BattleServantConfConponent_o *)p_mainText, v27, v28, v29, v30, v31, v32, v33);
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
      v55 = (System_Int32_array **)System_String__Concat_44305532(v53, v54, 0LL);
      *p_mainText = (struct System_String_o *)v55;
      sub_B2C2F8((BattleServantConfConponent_o *)p_mainText, v55, v56, v57, v58, v59, v60, v61);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_Collections_Generic_List_char__o *v12; // x21
  System_String_o *Chars; // x0
  __int64 v14; // x1
  int32_t v15; // w23
  char v16; // w28
  char v17; // w19
  char v18; // w26
  System_String_o *v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v27; // [xsp+0h] [xbp-60h]
  __int16 v28[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4186553 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_char__Add__, labelText);
    sub_B2C35C(&Method_System_Collections_Generic_List_char___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_char__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15637/*"[#"*/, v7);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_4186553 = 1;
  }
  v28[0] = 0;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = (System_Collections_Generic_List_char__o *)sub_B2C42C(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v12,
    (const MethodInfo_2F33CE4 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_34;
  v27 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = v11;
    while ( 1 )
    {
      v28[0] = System_String__get_Chars(labelText, v15, 0LL);
      v20 = System_Char__ToString((uint16_t)v28, 0LL);
      v11 = System_String__Concat_44305532(v11, v20, 0LL);
      if ( (v17 & 1) != 0 )
      {
        v28[0] = System_String__get_Chars(labelText, v15, 0LL);
        v21 = System_Char__ToString((uint16_t)v28, 0LL);
        v19 = System_String__Concat_44305532(v19, v21, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v15, 0LL);
      if ( !v12 )
        goto LABEL_34;
      System_Collections_Generic_List_char___Add(
        v12,
        (uint16_t)Chars,
        (const MethodInfo_2F34A40 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v15, 0LL) == 91
        && System_String__get_Chars(labelText, v15 + 1, 0LL) == 35 )
      {
        v18 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v15, 0LL);
        if ( (unsigned __int16)Chars != 35 || (v16 & 1) == 0 )
        {
          if ( ((unsigned __int8)v16 & (System_String__get_Chars(labelText, v15, 0LL) == 58)) != 0 )
          {
            v16 = 1;
            v17 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v15, 0LL);
            if ( (unsigned __int16)Chars == 93 && (v16 & 1) != 0 )
            {
              if ( (v17 & 1) != 0 )
              {
                Chars = System_String__Concat_44305532((System_String_o *)StringLiteral_1225/*":"*/, v19, 0LL);
                if ( !v11 )
                  goto LABEL_34;
                v22 = Chars;
              }
              else
              {
                if ( !v11 )
                  goto LABEL_34;
                v22 = (System_String_o *)StringLiteral_15870/*"]"*/;
              }
              v23 = System_String__Replace_44312768(v11, v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v19 = (System_String_o *)StringLiteral_1/*""*/;
              v11 = v23;
              v16 = 0;
              v17 = 0;
            }
          }
          goto LABEL_25;
        }
        if ( !v11 )
          goto LABEL_34;
        v11 = System_String__Replace_44312768(
                v11,
                (System_String_o *)StringLiteral_15637/*"[#"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
      }
      v16 = 1;
LABEL_25:
      if ( ++v15 >= labelText->fields.m_stringLength )
        goto LABEL_28;
    }
  }
  v18 = 1;
LABEL_28:
  Chars = (System_String_o *)v27->fields.mainLabel;
  if ( !Chars )
    goto LABEL_34;
  Chars = (System_String_o *)WrapControlText__textAdjust((UILabel_o *)Chars, v11, (int32_t)Chars[17].monitor, 0, 0, 0LL);
  if ( (v18 & 1) != 0 )
  {
    mainLabel = v27->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_34:
    sub_B2C434(Chars, v14);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v27, v12, v24);
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

  if ( (byte_4186551 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_4186551 = 1;
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
        sub_B2C434(0LL, v8);
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
      UILabel__SetCondensedScale_41673556(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(mainLabel, method);
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  WarBoardOverlayEffectComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t size; // w8
  System_String_o *v8; // x22
  unsigned int v9; // w24
  int32_t v10; // w21
  struct UILabel_o *v11; // x8
  System_String_o *v12; // x0
  struct UILabel_o *v13; // x8
  struct System_String_o *v14; // x8
  System_String_o *v15; // x0
  struct UILabel_o *mainLabel; // x8
  int v17; // w26
  System_String_o *v18; // x0
  struct UILabel_o *v19; // x8
  struct System_String_o *mText; // x9
  int32_t v21; // w8
  unsigned int v22; // w25
  struct UILabel_o *v23; // x8
  int v24; // w26
  struct UILabel_o *v25; // x8
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x8
  struct System_String_o *v28; // x8
  System_String_o *v29; // x0
  __int16 v31[2]; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4186554 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_char__get_Count__, localMainTextList);
    sub_B2C35C(&Method_System_Collections_Generic_List_char__get_Item__, v5);
    this = (WarBoardOverlayEffectComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4186554 = 1;
  }
  v31[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B2C434(this, localMainTextList);
  size = localMainTextList->fields._size;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_53;
      v17 = localMainTextList->fields._items->m_Items[v9 + 2];
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v10, 0LL);
      if ( localMainTextList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v17 == (unsigned __int16)this )
      {
        v31[0] = localMainTextList->fields._items->m_Items[v9 + 2];
        v18 = System_Char__ToString((uint16_t)v31, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44305532(v8, v18, 0LL);
        v19 = v4->fields.mainLabel;
        if ( !v19 )
          goto LABEL_53;
        mText = v19->fields.mText;
        if ( !mText )
          goto LABEL_53;
        v8 = (System_String_o *)this;
        if ( v10 < mText->fields.m_stringLength - 1 )
          ++v10;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v9 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v31[0] = localMainTextList->fields._items->m_Items[v9 + 2];
          v29 = System_Char__ToString((uint16_t)v31, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44305532(v8, v29, 0LL);
          v8 = (System_String_o *)this;
          goto LABEL_51;
        }
        v19 = v4->fields.mainLabel;
        if ( !v19 )
          goto LABEL_53;
      }
      this = (WarBoardOverlayEffectComponent_o *)v19->fields.mText;
      if ( !this )
        goto LABEL_53;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v10, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v21 = localMainTextList->fields._size;
        v22 = v9 + 1;
        if ( (int)(v9 + 1) >= v21 )
          goto LABEL_41;
        if ( v21 <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v23 = v4->fields.mainLabel;
        if ( !v23 )
          goto LABEL_53;
        this = (WarBoardOverlayEffectComponent_o *)v23->fields.mText;
        if ( !this )
          goto LABEL_53;
        v24 = localMainTextList->fields._items->m_Items[v22 + 2];
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v10 + 1, 0LL);
        if ( v24 == (unsigned __int16)this )
        {
LABEL_41:
          v25 = v4->fields.mainLabel;
          if ( !v25 )
            goto LABEL_53;
          this = (WarBoardOverlayEffectComponent_o *)v25->fields.mText;
          if ( !this )
            goto LABEL_53;
          v31[0] = System_String__get_Chars((System_String_o *)this, v10, 0LL);
          v26 = System_Char__ToString((uint16_t)v31, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44305532(v8, v26, 0LL);
          v27 = v4->fields.mainLabel;
          if ( !v27 )
            goto LABEL_53;
          v28 = v27->fields.mText;
          if ( !v28 )
            goto LABEL_53;
          v8 = (System_String_o *)this;
          if ( v10 < v28->fields.m_stringLength - 1 )
            ++v10;
        }
        else
        {
          if ( localMainTextList->fields._size <= v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( localMainTextList->fields._items->m_Items[v22 + 2] == 10 )
          {
            v11 = v4->fields.mainLabel;
            if ( !v11 )
              goto LABEL_53;
            this = (WarBoardOverlayEffectComponent_o *)v11->fields.mText;
            if ( !this )
              goto LABEL_53;
            v31[0] = System_String__get_Chars((System_String_o *)this, v10, 0LL);
            v12 = System_Char__ToString((uint16_t)v31, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44305532(v8, v12, 0LL);
            v13 = v4->fields.mainLabel;
            if ( !v13 )
              goto LABEL_53;
            v14 = v13->fields.mText;
            if ( !v14 )
              goto LABEL_53;
            v8 = (System_String_o *)this;
            if ( v10 < v14->fields.m_stringLength - 1 )
              ++v10;
          }
          else
          {
            if ( localMainTextList->fields._size <= v22 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v31[0] = localMainTextList->fields._items->m_Items[v22 + 2];
            v15 = System_Char__ToString((uint16_t)v31, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_44305532(v8, v15, 0LL);
            v8 = (System_String_o *)this;
            ++v9;
          }
        }
      }
LABEL_51:
      size = localMainTextList->fields._size;
      ++v9;
    }
    while ( (int)v9 < size );
  }
  return v8;
}