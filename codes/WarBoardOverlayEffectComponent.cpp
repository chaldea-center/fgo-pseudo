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
  int32_t v3; // w3
  WarBoardOverlayEffectComponent_o *v5; // x20
  __int64 v6; // x1
  int32_t stringLength; // w24
  int32_t v8; // w1
  ServantStatusBattleListViewItem_o *p_mainText; // x21
  int32_t v10; // w1
  ServantStatusBattleListViewItem_o *p_rubyText; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  bool v14; // w25
  char v15; // w28
  char v16; // w27
  int32_t v17; // w22
  uint16_t Chars; // w0
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x23
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *klass; // x23
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int16 v40[2]; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_49FC66C & 1) == 0 )
  {
    sub_1B64A00(&char_TypeInfo, message);
    this = (WarBoardOverlayEffectComponent_o *)sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FC66C = 1;
  }
  v40[0] = 0;
  if ( !message )
    sub_1B64C5C(this, message);
  stringLength = message->fields._stringLength;
  v8 = (int)StringLiteral_1/*""*/;
  v5->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = (ServantStatusBattleListViewItem_o *)&v5->fields.mainText;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v5->fields.mainText, v8, (int32_t)method, v3);
  v10 = (int)StringLiteral_1/*""*/;
  v5->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_rubyText = (ServantStatusBattleListViewItem_o *)&v5->fields.rubyText;
  sub_1B649A4(p_rubyText, v10, v12, v13);
  if ( stringLength >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(message, v17, 0LL);
      v40[0] = Chars;
      if ( Chars > 0x5Au )
        break;
      if ( Chars == 35 )
      {
        if ( (v15 & 1) == 0 )
          goto LABEL_21;
      }
      else
      {
        if ( Chars != 58 )
          goto LABEL_15;
        if ( (v15 & 1) == 0 )
          goto LABEL_21;
        v16 = 1;
      }
      v15 = 1;
LABEL_33:
      if ( stringLength == ++v17 )
        return v14;
    }
    if ( Chars == 91 )
    {
      if ( System_String__get_Chars(message, v17 + 1, 0LL) == 35 )
      {
        v15 = 1;
        v14 = 1;
      }
      else
      {
        klass = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v35 = System_Char__ToString((uint16_t)v40, 0LL);
        v36 = System_String__Concat_61385136(klass, v35, 0LL);
        p_mainText->klass = (ServantStatusBattleListViewItem_c *)v36;
        sub_1B649A4(p_mainText, (int32_t)v36, v37, v38);
      }
      goto LABEL_33;
    }
    if ( Chars != 93 )
    {
LABEL_15:
      if ( (v16 & 1) != 0 )
      {
        v19 = (System_String_o *)p_rubyText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v20 = System_Char__ToString((uint16_t)v40, 0LL);
        v21 = System_String__Concat_61385136(v19, v20, 0LL);
        p_rubyText->klass = (ServantStatusBattleListViewItem_c *)v21;
        sub_1B649A4(p_rubyText, (int32_t)v21, v22, v23);
        v16 = 1;
      }
      else
      {
        v29 = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v30 = System_Char__ToString((uint16_t)v40, 0LL);
        v31 = System_String__Concat_61385136(v29, v30, 0LL);
        p_mainText->klass = (ServantStatusBattleListViewItem_c *)v31;
        sub_1B649A4(p_mainText, (int32_t)v31, v32, v33);
        v16 = 0;
      }
      goto LABEL_33;
    }
    if ( (v15 & 1) != 0 )
    {
      v16 = 0;
    }
    else
    {
LABEL_21:
      v24 = (System_String_o *)p_mainText->klass;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v25 = System_Char__ToString((uint16_t)v40, 0LL);
      v26 = System_String__Concat_61385136(v24, v25, 0LL);
      p_mainText->klass = (ServantStatusBattleListViewItem_c *)v26;
      sub_1B649A4(p_mainText, (int32_t)v26, v27, v28);
    }
    v15 = 0;
    goto LABEL_33;
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
  __int64 v11; // x1
  System_String_o *v12; // x22
  System_Collections_Generic_List_char__o *v13; // x21
  System_String_o *Chars; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  char v17; // w29
  char v18; // w19
  char v19; // w26
  System_String_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct System_Char_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v31; // [xsp+0h] [xbp-70h]
  __int16 v32[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FC66D & 1) == 0 )
  {
    sub_1B64A00(&char_TypeInfo, labelText);
    sub_1B64A00(&Method_System_Collections_Generic_List_char__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_char___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_List_char__TypeInfo, v7);
    sub_1B64A00(&StringLiteral_15759/*"[#"*/, v8);
    sub_1B64A00(&StringLiteral_1546/*":"*/, v9);
    sub_1B64A00(&StringLiteral_1/*""*/, v10);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v11);
    byte_49FC66D = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v32[0] = 0;
  v13 = (System_Collections_Generic_List_char__o *)sub_1B64C4C(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v13,
    (const MethodInfo_346A5D0 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_42;
  v31 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = v12;
    while ( 1 )
    {
      v32[0] = System_String__get_Chars(labelText, v16, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v21 = System_Char__ToString((uint16_t)v32, 0LL);
      v12 = System_String__Concat_61385136(v12, v21, 0LL);
      if ( (v18 & 1) != 0 )
      {
        v32[0] = System_String__get_Chars(labelText, v16, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__ToString((uint16_t)v32, 0LL);
        v20 = System_String__Concat_61385136(v20, v22, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v16, 0LL);
      if ( !v13 )
        goto LABEL_42;
      items = v13->fields._items;
      v24 = Method_System_Collections_Generic_List_char__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_42;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v13,
          (uint16_t)Chars,
          *(const MethodInfo_346AE24 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size + 2] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v16, 0LL) == 91
        && System_String__get_Chars(labelText, v16 + 1, 0LL) == 35 )
      {
        v19 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v16, 0LL);
        if ( (unsigned __int16)Chars != 35 || (v17 & 1) == 0 )
        {
          if ( ((unsigned __int8)v17 & (System_String__get_Chars(labelText, v16, 0LL) == 58)) != 0 )
          {
            v17 = 1;
            v18 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v16, 0LL);
            if ( (unsigned __int16)Chars == 93 && (v17 & 1) != 0 )
            {
              if ( (v18 & 1) != 0 )
              {
                Chars = System_String__Concat_61385136((System_String_o *)StringLiteral_1546/*":"*/, v20, 0LL);
                if ( !v12 )
                  goto LABEL_42;
                v26 = Chars;
              }
              else
              {
                if ( !v12 )
                  goto LABEL_42;
                v26 = (System_String_o *)StringLiteral_16003/*"]"*/;
              }
              v27 = System_String__Replace_61404756(v12, v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v20 = (System_String_o *)StringLiteral_1/*""*/;
              v12 = v27;
              v17 = 0;
              v18 = 0;
            }
          }
          goto LABEL_33;
        }
        if ( !v12 )
          goto LABEL_42;
        v12 = System_String__Replace_61404756(
                v12,
                (System_String_o *)StringLiteral_15759/*"[#"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
      }
      v17 = 1;
LABEL_33:
      if ( ++v16 >= labelText->fields._stringLength )
        goto LABEL_36;
    }
  }
  v19 = 1;
LABEL_36:
  Chars = (System_String_o *)v31->fields.mainLabel;
  if ( !Chars )
    goto LABEL_42;
  Chars = (System_String_o *)WrapControlText__textAdjust(
                               (UILabel_o *)Chars,
                               v12,
                               Chars[17].fields._stringLength,
                               0,
                               0,
                               0LL);
  if ( (v19 & 1) != 0 )
  {
    mainLabel = v31->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_42:
    sub_1B64C5C(Chars, v15);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v31, v13, v28);
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

  if ( (byte_49FC66B & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, text);
    byte_49FC66B = 1;
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( text && v6 )
  {
    rubyLabel = (UnityEngine_Object_o *)this->fields.rubyLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1B64C5C(0LL, v8);
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
      UILabel__SetCondensedScale_46771224(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_1B64C5C(mainLabel, method);
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
  __int64 v7; // x1
  System_String_o *v8; // x22
  int32_t v9; // w23
  int32_t v10; // w21
  struct UILabel_o *mainLabel; // x8
  unsigned __int16 v12; // w24
  uint16_t Chars; // w25
  System_String_o *v14; // x0
  struct UILabel_o *v15; // x8
  struct System_String_o *mText; // x9
  int32_t v17; // w24
  struct UILabel_o *v18; // x8
  unsigned __int16 v19; // w26
  struct UILabel_o *v20; // x8
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x8
  struct System_String_o *v23; // x8
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x8
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x8
  struct System_String_o *v28; // x8
  System_String_o *v29; // x0
  __int16 v31[2]; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_49FC66E & 1) == 0 )
  {
    sub_1B64A00(&char_TypeInfo, localMainTextList);
    sub_1B64A00(&Method_System_Collections_Generic_List_char__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_char__get_Item__, v6);
    this = (WarBoardOverlayEffectComponent_o *)sub_1B64A00(&StringLiteral_1/*""*/, v7);
    byte_49FC66E = 1;
  }
  v31[0] = 0;
  if ( !localMainTextList )
LABEL_52:
    sub_1B64C5C(this, localMainTextList);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( localMainTextList->fields._size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v9,
                                                   (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_52;
      v12 = (unsigned __int16)this;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_52;
      Chars = System_String__get_Chars((System_String_o *)this, v10, 0LL);
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v9,
                                                   (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
      if ( v12 == Chars )
      {
        v31[0] = (__int16)this;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v14 = System_Char__ToString((uint16_t)v31, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61385136(v8, v14, 0LL);
        v15 = v4->fields.mainLabel;
        if ( !v15 )
          goto LABEL_52;
        mText = v15->fields.mText;
        if ( !mText )
          goto LABEL_52;
        v8 = (System_String_o *)this;
        if ( v10 < mText->fields._stringLength - 1 )
          ++v10;
      }
      else
      {
        if ( (unsigned __int16)this != 10 )
        {
          v31[0] = System_Collections_Generic_List_char___get_Item(
                     localMainTextList,
                     v9,
                     (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v24 = System_Char__ToString((uint16_t)v31, 0LL);
          v8 = System_String__Concat_61385136(v8, v24, 0LL);
          goto LABEL_36;
        }
        v15 = v4->fields.mainLabel;
        if ( !v15 )
          goto LABEL_52;
      }
      this = (WarBoardOverlayEffectComponent_o *)v15->fields.mText;
      if ( !this )
        goto LABEL_52;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v10, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v17 = v9 + 1;
        if ( v9 + 1 >= localMainTextList->fields._size )
          goto LABEL_24;
        this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                     localMainTextList,
                                                     v17,
                                                     (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
        v18 = v4->fields.mainLabel;
        if ( !v18 )
          goto LABEL_52;
        v19 = (unsigned __int16)this;
        this = (WarBoardOverlayEffectComponent_o *)v18->fields.mText;
        if ( !this )
          goto LABEL_52;
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v10 + 1, 0LL);
        if ( v19 == (unsigned __int16)this )
        {
LABEL_24:
          v20 = v4->fields.mainLabel;
          if ( !v20 )
            goto LABEL_52;
          this = (WarBoardOverlayEffectComponent_o *)v20->fields.mText;
          if ( !this )
            goto LABEL_52;
          v31[0] = System_String__get_Chars((System_String_o *)this, v10, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v21 = System_Char__ToString((uint16_t)v31, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61385136(v8, v21, 0LL);
          v22 = v4->fields.mainLabel;
          if ( !v22 )
            goto LABEL_52;
          v23 = v22->fields.mText;
          if ( !v23 )
            goto LABEL_52;
          v8 = (System_String_o *)this;
          if ( v10 < v23->fields._stringLength - 1 )
            ++v10;
        }
        else
        {
          this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                       localMainTextList,
                                                       v17,
                                                       (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( (unsigned __int16)this == 10 )
          {
            v25 = v4->fields.mainLabel;
            if ( !v25 )
              goto LABEL_52;
            this = (WarBoardOverlayEffectComponent_o *)v25->fields.mText;
            if ( !this )
              goto LABEL_52;
            v31[0] = System_String__get_Chars((System_String_o *)this, v10, 0LL);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v26 = System_Char__ToString((uint16_t)v31, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61385136(v8, v26, 0LL);
            v27 = v4->fields.mainLabel;
            if ( !v27 )
              goto LABEL_52;
            v28 = v27->fields.mText;
            if ( !v28 )
              goto LABEL_52;
            v8 = (System_String_o *)this;
            if ( v10 < v28->fields._stringLength - 1 )
              ++v10;
          }
          else
          {
            v31[0] = System_Collections_Generic_List_char___get_Item(
                       localMainTextList,
                       v17,
                       (const MethodInfo_346AB34 *)Method_System_Collections_Generic_List_char__get_Item__);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v29 = System_Char__ToString((uint16_t)v31, 0LL);
            v8 = System_String__Concat_61385136(v8, v29, 0LL);
            ++v9;
          }
        }
      }
LABEL_36:
      ++v9;
    }
    while ( v9 < localMainTextList->fields._size );
  }
  return v8;
}