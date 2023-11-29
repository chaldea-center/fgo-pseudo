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

  if ( (byte_40F859B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, message);
    byte_40F859B = 1;
  }
  v63[0] = 0;
  if ( !message )
    sub_B170D4();
  m_stringLength = message->fields.m_stringLength;
  v11 = (System_Int32_array **)StringLiteral_1;
  this->fields.mainText = (struct System_String_o *)StringLiteral_1;
  p_mainText = &this->fields.mainText;
  sub_B16F98((BattleServantConfConponent_o *)p_mainText, v11, (System_String_array **)method, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1;
  v14 = p_mainText + 1;
  p_mainText[1] = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)(p_mainText + 1), v13, v15, v16, v17, v18, v19, v20);
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
        v36 = (System_Int32_array **)System_String__Concat_43743732(v34, v35, 0LL);
        *p_mainText = (struct System_String_o *)v36;
        sub_B16F98((BattleServantConfConponent_o *)p_mainText, v36, v37, v38, v39, v40, v41, v42);
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
        v46 = (System_Int32_array **)System_String__Concat_43743732(v44, v45, 0LL);
        *v14 = (System_String_o *)v46;
        sub_B16F98((BattleServantConfConponent_o *)(p_mainText + 1), v46, v47, v48, v49, v50, v51, v52);
        v23 = 1;
      }
      else
      {
        v25 = *p_mainText;
        v26 = System_Char__ToString((uint16_t)v63, 0LL);
        v27 = (System_Int32_array **)System_String__Concat_43743732(v25, v26, 0LL);
        *p_mainText = (struct System_String_o *)v27;
        sub_B16F98((BattleServantConfConponent_o *)p_mainText, v27, v28, v29, v30, v31, v32, v33);
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
      v55 = (System_Int32_array **)System_String__Concat_43743732(v53, v54, 0LL);
      *p_mainText = (struct System_String_o *)v55;
      sub_B16F98((BattleServantConfConponent_o *)p_mainText, v55, v56, v57, v58, v59, v60, v61);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x22
  System_Collections_Generic_List_char__o *v14; // x21
  int32_t v15; // w23
  char v16; // w28
  char v17; // w19
  char v18; // w26
  System_String_o *v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  uint16_t Chars; // w0
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  UILabel_o *mainLabel; // x0
  const MethodInfo *v27; // x2
  struct UILabel_o *v28; // x8
  WarBoardOverlayEffectComponent_o *v30; // [xsp+0h] [xbp-60h]
  __int16 v31[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F859C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__Add__, labelText);
    sub_B16FFC(&Method_System_Collections_Generic_List_char___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_char__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15574, v9);
    sub_B16FFC(&StringLiteral_1223, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_15807, v12);
    byte_40F859C = 1;
  }
  v31[0] = 0;
  v13 = (System_String_o *)StringLiteral_1;
  v14 = (System_Collections_Generic_List_char__o *)sub_B170CC(
                                                     System_Collections_Generic_List_char__TypeInfo,
                                                     labelText,
                                                     method,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_char____ctor(
    v14,
    (const MethodInfo_2EB4D8C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_34;
  v30 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = v13;
    while ( 1 )
    {
      v31[0] = System_String__get_Chars(labelText, v15, 0LL);
      v20 = System_Char__ToString((uint16_t)v31, 0LL);
      v13 = System_String__Concat_43743732(v13, v20, 0LL);
      if ( (v17 & 1) != 0 )
      {
        v31[0] = System_String__get_Chars(labelText, v15, 0LL);
        v21 = System_Char__ToString((uint16_t)v31, 0LL);
        v19 = System_String__Concat_43743732(v19, v21, 0LL);
      }
      Chars = System_String__get_Chars(labelText, v15, 0LL);
      if ( !v14 )
        goto LABEL_34;
      System_Collections_Generic_List_char___Add(
        v14,
        Chars,
        (const MethodInfo_2EB5AE8 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v15, 0LL) == 91
        && System_String__get_Chars(labelText, v15 + 1, 0LL) == 35 )
      {
        v18 = 0;
      }
      else
      {
        if ( System_String__get_Chars(labelText, v15, 0LL) != 35 || (v16 & 1) == 0 )
        {
          if ( ((unsigned __int8)v16 & (System_String__get_Chars(labelText, v15, 0LL) == 58)) != 0 )
          {
            v16 = 1;
            v17 = 1;
          }
          else if ( System_String__get_Chars(labelText, v15, 0LL) == 93 && (v16 & 1) != 0 )
          {
            if ( (v17 & 1) != 0 )
            {
              v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_1223, v19, 0LL);
              if ( !v13 )
                goto LABEL_34;
              v24 = v23;
            }
            else
            {
              if ( !v13 )
                goto LABEL_34;
              v24 = (System_String_o *)StringLiteral_15807;
            }
            v25 = System_String__Replace_43750968(v13, v24, (System_String_o *)StringLiteral_1, 0LL);
            v19 = (System_String_o *)StringLiteral_1;
            v13 = v25;
            v16 = 0;
            v17 = 0;
          }
          goto LABEL_25;
        }
        if ( !v13 )
          goto LABEL_34;
        v13 = System_String__Replace_43750968(
                v13,
                (System_String_o *)StringLiteral_15574,
                (System_String_o *)StringLiteral_1,
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
  mainLabel = v30->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_34;
  WrapControlText__textAdjust(mainLabel, v13, mainLabel->fields.mFontSize, 0, 0, 0LL);
  if ( (v18 & 1) != 0 )
  {
    v28 = v30->fields.mainLabel;
    if ( v28 )
      return v28->fields.mText;
LABEL_34:
    sub_B170D4();
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v30, v14, v27);
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
  const MethodInfo *v8; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct UILabel_o *v12; // x0

  if ( (byte_40F859A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, text);
    byte_40F859A = 1;
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
      && (FormalText = WarBoardOverlayEffectComponent__GetFormalText(this, text, v8),
          WarBoardOverlayEffectComponent__CheckRubyText(this, FormalText, v10)) )
    {
      WarBoardOverlayEffectComponent__SetMainObject(this, v11);
    }
    else
    {
      v12 = this->fields.mainLabel;
      if ( !v12 )
        sub_B170D4();
      WrapControlText__fontSizeAdjust(v12, text, v12->fields.mFontSize, 0LL);
    }
  }
}


void __fastcall WarBoardOverlayEffectComponent__SetMainObject(
        WarBoardOverlayEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *mainLabel; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rubyLabel; // x0
  UILabel_o *v7; // x0
  float v8; // s0
  UILabel_o *v9; // x0
  float v10; // s8
  UILabel_o *v11; // x0

  mainLabel = this->fields.mainLabel;
  if ( !mainLabel )
    goto LABEL_10;
  UILabel__set_text(mainLabel, this->fields.mainText, 0LL);
  v4 = (UnityEngine_Component_o *)this->fields.mainLabel;
  if ( !v4 )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
  GameObjectExtensions__AddLocalPositionY(gameObject, this->fields.mainLabelOffsetY, 0LL);
  rubyLabel = this->fields.rubyLabel;
  if ( !rubyLabel )
    goto LABEL_10;
  UILabel__set_text(rubyLabel, this->fields.rubyText, 0LL);
  v7 = this->fields.mainLabel;
  if ( !v7 )
    goto LABEL_10;
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize(v7, 0LL);
  v9 = this->fields.rubyLabel;
  if ( !v9 )
    goto LABEL_10;
  v10 = v8;
  if ( UILabel__get_printedSize(v9, 0LL).fields.x > v8 )
  {
    v11 = this->fields.rubyLabel;
    if ( v11 )
    {
      UILabel__SetCondensedScale_40440812(v11, v10, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t size; // w8
  System_String_o *v8; // x22
  unsigned int v9; // w24
  int32_t v10; // w21
  struct UILabel_o *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  struct UILabel_o *v15; // x8
  struct System_String_o *v16; // x8
  System_String_o *v17; // x0
  struct UILabel_o *mainLabel; // x8
  System_String_o *mText; // x0
  int v20; // w26
  uint16_t Chars; // w23
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x8
  struct System_String_o *v25; // x9
  System_String_o *v26; // x0
  int32_t v27; // w8
  unsigned int v28; // w25
  struct UILabel_o *v29; // x8
  System_String_o *v30; // x0
  int v31; // w26
  struct UILabel_o *v32; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct UILabel_o *v36; // x8
  struct System_String_o *v37; // x8
  System_String_o *v38; // x0
  __int16 v40[2]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F859D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Count__, localMainTextList);
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Item__, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F859D = 1;
  }
  v40[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B170D4();
  size = localMainTextList->fields._size;
  v8 = (System_String_o *)StringLiteral_1;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      mainLabel = this->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_53;
      mText = mainLabel->fields.mText;
      if ( !mText )
        goto LABEL_53;
      v20 = localMainTextList->fields._items->m_Items[v9 + 2];
      Chars = System_String__get_Chars(mText, v10, 0LL);
      if ( localMainTextList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v20 == Chars )
      {
        v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
        v22 = System_Char__ToString((uint16_t)v40, 0LL);
        v23 = System_String__Concat_43743732(v8, v22, 0LL);
        v24 = this->fields.mainLabel;
        if ( !v24 )
          goto LABEL_53;
        v25 = v24->fields.mText;
        if ( !v25 )
          goto LABEL_53;
        v8 = v23;
        if ( v10 < v25->fields.m_stringLength - 1 )
          ++v10;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v9 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
          v38 = System_Char__ToString((uint16_t)v40, 0LL);
          v8 = System_String__Concat_43743732(v8, v38, 0LL);
          goto LABEL_51;
        }
        v24 = this->fields.mainLabel;
        if ( !v24 )
          goto LABEL_53;
      }
      v26 = v24->fields.mText;
      if ( !v26 )
        goto LABEL_53;
      if ( System_String__get_Chars(v26, v10, 0LL) == 10 )
      {
        v27 = localMainTextList->fields._size;
        v28 = v9 + 1;
        if ( (int)(v9 + 1) >= v27 )
          goto LABEL_41;
        if ( v27 <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = this->fields.mainLabel;
        if ( !v29 )
          goto LABEL_53;
        v30 = v29->fields.mText;
        if ( !v30 )
          goto LABEL_53;
        v31 = localMainTextList->fields._items->m_Items[v28 + 2];
        if ( v31 == System_String__get_Chars(v30, v10 + 1, 0LL) )
        {
LABEL_41:
          v32 = this->fields.mainLabel;
          if ( !v32 )
            goto LABEL_53;
          v33 = v32->fields.mText;
          if ( !v33 )
            goto LABEL_53;
          v40[0] = System_String__get_Chars(v33, v10, 0LL);
          v34 = System_Char__ToString((uint16_t)v40, 0LL);
          v35 = System_String__Concat_43743732(v8, v34, 0LL);
          v36 = this->fields.mainLabel;
          if ( !v36 )
            goto LABEL_53;
          v37 = v36->fields.mText;
          if ( !v37 )
            goto LABEL_53;
          v8 = v35;
          if ( v10 < v37->fields.m_stringLength - 1 )
            ++v10;
        }
        else
        {
          if ( localMainTextList->fields._size <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( localMainTextList->fields._items->m_Items[v28 + 2] == 10 )
          {
            v11 = this->fields.mainLabel;
            if ( !v11 )
              goto LABEL_53;
            v12 = v11->fields.mText;
            if ( !v12 )
              goto LABEL_53;
            v40[0] = System_String__get_Chars(v12, v10, 0LL);
            v13 = System_Char__ToString((uint16_t)v40, 0LL);
            v14 = System_String__Concat_43743732(v8, v13, 0LL);
            v15 = this->fields.mainLabel;
            if ( !v15 )
              goto LABEL_53;
            v16 = v15->fields.mText;
            if ( !v16 )
              goto LABEL_53;
            v8 = v14;
            if ( v10 < v16->fields.m_stringLength - 1 )
              ++v10;
          }
          else
          {
            if ( localMainTextList->fields._size <= v28 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v40[0] = localMainTextList->fields._items->m_Items[v28 + 2];
            v17 = System_Char__ToString((uint16_t)v40, 0LL);
            v8 = System_String__Concat_43743732(v8, v17, 0LL);
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