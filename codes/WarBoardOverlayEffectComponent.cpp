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
  int32_t stringLength; // w24
  int32_t v7; // w1
  ServantStatusBattleListViewItem_o *p_mainText; // x21
  int32_t v9; // w1
  ServantStatusBattleListViewItem_o *p_rubyText; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  bool v13; // w25
  char v14; // w28
  char v15; // w27
  int32_t v16; // w22
  uint16_t Chars; // w0
  System_String_o *v18; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *klass; // x23
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int16 v39[2]; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_4A58C6F & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    this = (WarBoardOverlayEffectComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58C6F = 1;
  }
  v39[0] = 0;
  if ( !message )
    sub_1B8880C(this, message);
  stringLength = message->fields._stringLength;
  v7 = (int)StringLiteral_1/*""*/;
  v5->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = (ServantStatusBattleListViewItem_o *)&v5->fields.mainText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.mainText, v7, (int32_t)method, v3);
  v9 = (int)StringLiteral_1/*""*/;
  v5->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_rubyText = (ServantStatusBattleListViewItem_o *)&v5->fields.rubyText;
  sub_1B88554(p_rubyText, v9, v11, v12);
  if ( stringLength >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(message, v16, 0LL);
      v39[0] = Chars;
      if ( Chars > 0x5Au )
        break;
      if ( Chars == 35 )
      {
        if ( (v14 & 1) == 0 )
          goto LABEL_21;
      }
      else
      {
        if ( Chars != 58 )
          goto LABEL_15;
        if ( (v14 & 1) == 0 )
          goto LABEL_21;
        v15 = 1;
      }
      v14 = 1;
LABEL_33:
      if ( stringLength == ++v16 )
        return v13;
    }
    if ( Chars == 91 )
    {
      if ( System_String__get_Chars(message, v16 + 1, 0LL) == 35 )
      {
        v14 = 1;
        v13 = 1;
      }
      else
      {
        klass = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v34 = System_Char__ToString((uint16_t)v39, 0LL);
        v35 = System_String__Concat_61707032(klass, v34, 0LL);
        p_mainText->klass = (ServantStatusBattleListViewItem_c *)v35;
        sub_1B88554(p_mainText, (int32_t)v35, v36, v37);
      }
      goto LABEL_33;
    }
    if ( Chars != 93 )
    {
LABEL_15:
      if ( (v15 & 1) != 0 )
      {
        v18 = (System_String_o *)p_rubyText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v19 = System_Char__ToString((uint16_t)v39, 0LL);
        v20 = System_String__Concat_61707032(v18, v19, 0LL);
        p_rubyText->klass = (ServantStatusBattleListViewItem_c *)v20;
        sub_1B88554(p_rubyText, (int32_t)v20, v21, v22);
        v15 = 1;
      }
      else
      {
        v28 = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v29 = System_Char__ToString((uint16_t)v39, 0LL);
        v30 = System_String__Concat_61707032(v28, v29, 0LL);
        p_mainText->klass = (ServantStatusBattleListViewItem_c *)v30;
        sub_1B88554(p_mainText, (int32_t)v30, v31, v32);
        v15 = 0;
      }
      goto LABEL_33;
    }
    if ( (v14 & 1) != 0 )
    {
      v15 = 0;
    }
    else
    {
LABEL_21:
      v23 = (System_String_o *)p_mainText->klass;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v24 = System_Char__ToString((uint16_t)v39, 0LL);
      v25 = System_String__Concat_61707032(v23, v24, 0LL);
      p_mainText->klass = (ServantStatusBattleListViewItem_c *)v25;
      sub_1B88554(p_mainText, (int32_t)v25, v26, v27);
    }
    v14 = 0;
    goto LABEL_33;
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
  char v10; // w29
  char v11; // w19
  char v12; // w26
  System_String_o *v13; // x24
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  struct System_Char_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v24; // [xsp+0h] [xbp-70h]
  __int16 v25[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A58C70 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_char__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_char___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_char__TypeInfo);
    sub_1B885B0(&StringLiteral_15824/*"[#"*/);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A58C70 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v25[0] = 0;
  v6 = (System_Collections_Generic_List_char__o *)sub_1B887FC(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_34B9044 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_42;
  v24 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v25[0] = System_String__get_Chars(labelText, v9, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v14 = System_Char__ToString((uint16_t)v25, 0LL);
      v5 = System_String__Concat_61707032(v5, v14, 0LL);
      if ( (v11 & 1) != 0 )
      {
        v25[0] = System_String__get_Chars(labelText, v9, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v15 = System_Char__ToString((uint16_t)v25, 0LL);
        v13 = System_String__Concat_61707032(v13, v15, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
      if ( !v6 )
        goto LABEL_42;
      items = v6->fields._items;
      v17 = Method_System_Collections_Generic_List_char__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_42;
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v6,
          (uint16_t)Chars,
          *(const MethodInfo_34B9898 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size + 2] = (unsigned __int16)Chars;
      }
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
                Chars = System_String__Concat_61707032((System_String_o *)StringLiteral_1544/*":"*/, v13, 0LL);
                if ( !v5 )
                  goto LABEL_42;
                v19 = Chars;
              }
              else
              {
                if ( !v5 )
                  goto LABEL_42;
                v19 = (System_String_o *)StringLiteral_16069/*"]"*/;
              }
              v20 = System_String__Replace_61726660(v5, v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v13 = (System_String_o *)StringLiteral_1/*""*/;
              v5 = v20;
              v10 = 0;
              v11 = 0;
            }
          }
          goto LABEL_33;
        }
        if ( !v5 )
          goto LABEL_42;
        v5 = System_String__Replace_61726660(
               v5,
               (System_String_o *)StringLiteral_15824/*"[#"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
      }
      v10 = 1;
LABEL_33:
      if ( ++v9 >= labelText->fields._stringLength )
        goto LABEL_36;
    }
  }
  v12 = 1;
LABEL_36:
  Chars = (System_String_o *)v24->fields.mainLabel;
  if ( !Chars )
    goto LABEL_42;
  Chars = (System_String_o *)WrapControlText__textAdjust(
                               (UILabel_o *)Chars,
                               v5,
                               Chars[17].fields._stringLength,
                               0,
                               0,
                               0LL);
  if ( (v12 & 1) != 0 )
  {
    mainLabel = v24->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_42:
    sub_1B8880C(Chars, v8);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v24, v6, v21);
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

  if ( (byte_4A58C6E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C6E = 1;
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
        sub_1B8880C(0LL, v8);
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
      UILabel__SetCondensedScale_47038932(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(mainLabel, method);
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
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
  System_String_o *v11; // x0
  struct UILabel_o *v12; // x8
  struct System_String_o *mText; // x9
  int32_t v14; // w24
  struct UILabel_o *v15; // x8
  unsigned __int16 v16; // w26
  struct UILabel_o *v17; // x8
  System_String_o *v18; // x0
  struct UILabel_o *v19; // x8
  struct System_String_o *v20; // x8
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x8
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x8
  struct System_String_o *v25; // x8
  System_String_o *v26; // x0
  __int16 v28[2]; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4A58C71 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_char__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_char__get_Item__);
    this = (WarBoardOverlayEffectComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58C71 = 1;
  }
  v28[0] = 0;
  if ( !localMainTextList )
LABEL_52:
    sub_1B8880C(this, localMainTextList);
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
                                                   (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_52;
      v9 = (unsigned __int16)this;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_52;
      Chars = System_String__get_Chars((System_String_o *)this, v7, 0LL);
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v6,
                                                   (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
      if ( v9 == Chars )
      {
        v28[0] = (__int16)this;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v11 = System_Char__ToString((uint16_t)v28, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61707032(v5, v11, 0LL);
        v12 = v4->fields.mainLabel;
        if ( !v12 )
          goto LABEL_52;
        mText = v12->fields.mText;
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
          v28[0] = System_Collections_Generic_List_char___get_Item(
                     localMainTextList,
                     v6,
                     (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v21 = System_Char__ToString((uint16_t)v28, 0LL);
          v5 = System_String__Concat_61707032(v5, v21, 0LL);
          goto LABEL_36;
        }
        v12 = v4->fields.mainLabel;
        if ( !v12 )
          goto LABEL_52;
      }
      this = (WarBoardOverlayEffectComponent_o *)v12->fields.mText;
      if ( !this )
        goto LABEL_52;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v7, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v14 = v6 + 1;
        if ( v6 + 1 >= localMainTextList->fields._size )
          goto LABEL_24;
        this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                     localMainTextList,
                                                     v14,
                                                     (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
        v15 = v4->fields.mainLabel;
        if ( !v15 )
          goto LABEL_52;
        v16 = (unsigned __int16)this;
        this = (WarBoardOverlayEffectComponent_o *)v15->fields.mText;
        if ( !this )
          goto LABEL_52;
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v7 + 1, 0LL);
        if ( v16 == (unsigned __int16)this )
        {
LABEL_24:
          v17 = v4->fields.mainLabel;
          if ( !v17 )
            goto LABEL_52;
          this = (WarBoardOverlayEffectComponent_o *)v17->fields.mText;
          if ( !this )
            goto LABEL_52;
          v28[0] = System_String__get_Chars((System_String_o *)this, v7, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v18 = System_Char__ToString((uint16_t)v28, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61707032(v5, v18, 0LL);
          v19 = v4->fields.mainLabel;
          if ( !v19 )
            goto LABEL_52;
          v20 = v19->fields.mText;
          if ( !v20 )
            goto LABEL_52;
          v5 = (System_String_o *)this;
          if ( v7 < v20->fields._stringLength - 1 )
            ++v7;
        }
        else
        {
          this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                       localMainTextList,
                                                       v14,
                                                       (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( (unsigned __int16)this == 10 )
          {
            v22 = v4->fields.mainLabel;
            if ( !v22 )
              goto LABEL_52;
            this = (WarBoardOverlayEffectComponent_o *)v22->fields.mText;
            if ( !this )
              goto LABEL_52;
            v28[0] = System_String__get_Chars((System_String_o *)this, v7, 0LL);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v23 = System_Char__ToString((uint16_t)v28, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_61707032(v5, v23, 0LL);
            v24 = v4->fields.mainLabel;
            if ( !v24 )
              goto LABEL_52;
            v25 = v24->fields.mText;
            if ( !v25 )
              goto LABEL_52;
            v5 = (System_String_o *)this;
            if ( v7 < v25->fields._stringLength - 1 )
              ++v7;
          }
          else
          {
            v28[0] = System_Collections_Generic_List_char___get_Item(
                       localMainTextList,
                       v14,
                       (const MethodInfo_34B95A8 *)Method_System_Collections_Generic_List_char__get_Item__);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v26 = System_Char__ToString((uint16_t)v28, 0LL);
            v5 = System_String__Concat_61707032(v5, v26, 0LL);
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