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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardOverlayEffectComponent_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t stringLength; // w24
  void *v13; // x1
  PartyOrganizationUtility_o *p_mainText; // x21
  void *v15; // x1
  PartyOrganizationUtility_o *p_rubyText; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool v23; // w25
  char v24; // w28
  char v25; // w27
  int32_t v26; // w22
  uint16_t Chars; // w0
  __int64 v28; // x1
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x23
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  System_String_o *v48; // x23
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o *klass; // x23
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int16 v67[2]; // [xsp+Ch] [xbp-54h] BYREF

  v9 = this;
  if ( (byte_4B13BCA & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, message, method);
    this = (WarBoardOverlayEffectComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B13BCA = 1;
  }
  v67[0] = 0;
  if ( !message )
    sub_1BCAA3C(this, message);
  stringLength = message->fields._stringLength;
  v13 = StringLiteral_1/*""*/;
  v9->fields.mainText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_mainText = (PartyOrganizationUtility_o *)&v9->fields.mainText;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.mainText, (int64_t)v13, (int64_t)method, v3, v4, v5, v6, v7);
  v15 = StringLiteral_1/*""*/;
  v9->fields.rubyText = (struct System_String_o *)StringLiteral_1/*""*/;
  p_rubyText = (PartyOrganizationUtility_o *)&v9->fields.rubyText;
  sub_1BCA784(p_rubyText, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  if ( stringLength >= 1 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(message, v26, 0LL);
      v67[0] = Chars;
      if ( Chars > 0x5Au )
        break;
      if ( Chars == 35 )
      {
        if ( (v24 & 1) == 0 )
          goto LABEL_21;
      }
      else
      {
        if ( Chars != 58 )
          goto LABEL_15;
        if ( (v24 & 1) == 0 )
          goto LABEL_21;
        v25 = 1;
      }
      v24 = 1;
LABEL_33:
      if ( stringLength == ++v26 )
        return v23;
    }
    if ( Chars == 91 )
    {
      if ( System_String__get_Chars(message, v26 + 1, 0LL) == 35 )
      {
        v24 = 1;
        v23 = 1;
      }
      else
      {
        klass = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v47);
        v58 = System_Char__ToString((uint16_t)v67, 0LL);
        v59 = System_String__Concat_62401220(klass, v58, 0LL);
        p_mainText->klass = (PartyOrganizationUtility_c *)v59;
        sub_1BCA784(p_mainText, (int64_t)v59, v60, v61, v62, v63, v64, v65);
      }
      goto LABEL_33;
    }
    if ( Chars != 93 )
    {
LABEL_15:
      if ( (v25 & 1) != 0 )
      {
        v29 = (System_String_o *)p_rubyText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v28);
        v30 = System_Char__ToString((uint16_t)v67, 0LL);
        v31 = System_String__Concat_62401220(v29, v30, 0LL);
        p_rubyText->klass = (PartyOrganizationUtility_c *)v31;
        sub_1BCA784(p_rubyText, (int64_t)v31, v32, v33, v34, v35, v36, v37);
        v25 = 1;
      }
      else
      {
        v48 = (System_String_o *)p_mainText->klass;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v28);
        v49 = System_Char__ToString((uint16_t)v67, 0LL);
        v50 = System_String__Concat_62401220(v48, v49, 0LL);
        p_mainText->klass = (PartyOrganizationUtility_c *)v50;
        sub_1BCA784(p_mainText, (int64_t)v50, v51, v52, v53, v54, v55, v56);
        v25 = 0;
      }
      goto LABEL_33;
    }
    if ( (v24 & 1) != 0 )
    {
      v25 = 0;
    }
    else
    {
LABEL_21:
      v38 = (System_String_o *)p_mainText->klass;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, v28);
      v39 = System_Char__ToString((uint16_t)v67, 0LL);
      v40 = System_String__Concat_62401220(v38, v39, 0LL);
      p_mainText->klass = (PartyOrganizationUtility_c *)v40;
      sub_1BCA784(p_mainText, (int64_t)v40, v41, v42, v43, v44, v45, v46);
    }
    v24 = 0;
    goto LABEL_33;
  }
  return 0;
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__GetFormalText(
        WarBoardOverlayEffectComponent_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x22
  System_Collections_Generic_List_char__o *v21; // x21
  System_String_o *Chars; // x0
  __int64 v23; // x1
  int32_t v24; // w23
  char v25; // w29
  char v26; // w19
  char v27; // w26
  System_String_o *v28; // x24
  __int64 v29; // x1
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x0
  struct System_Char_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_String_o *v36; // x1
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  struct UILabel_o *mainLabel; // x8
  WarBoardOverlayEffectComponent_o *v41; // [xsp+0h] [xbp-70h]
  __int16 v42[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B13BCB & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, labelText, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_char__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15990/*"[#"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v18, v19);
    byte_4B13BCB = 1;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v42[0] = 0;
  v21 = (System_Collections_Generic_List_char__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_char__TypeInfo,
                                                     labelText,
                                                     method,
                                                     v3);
  System_Collections_Generic_List_char____ctor(
    v21,
    (const MethodInfo_355D46C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_42;
  v41 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 1;
    v28 = v20;
    while ( 1 )
    {
      v42[0] = System_String__get_Chars(labelText, v24, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, v29);
      v30 = System_Char__ToString((uint16_t)v42, 0LL);
      v20 = System_String__Concat_62401220(v20, v30, 0LL);
      if ( (v26 & 1) != 0 )
      {
        v42[0] = System_String__get_Chars(labelText, v24, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v31);
        v32 = System_Char__ToString((uint16_t)v42, 0LL);
        v28 = System_String__Concat_62401220(v28, v32, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v24, 0LL);
      if ( !v21 )
        goto LABEL_42;
      items = v21->fields._items;
      v34 = Method_System_Collections_Generic_List_char__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_42;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v21,
          (uint16_t)Chars,
          *(const MethodInfo_355DCC0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 2] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v24, 0LL) == 91
        && System_String__get_Chars(labelText, v24 + 1, 0LL) == 35 )
      {
        v27 = 0;
      }
      else
      {
        Chars = (System_String_o *)System_String__get_Chars(labelText, v24, 0LL);
        if ( (unsigned __int16)Chars != 35 || (v25 & 1) == 0 )
        {
          if ( ((unsigned __int8)v25 & (System_String__get_Chars(labelText, v24, 0LL) == 58)) != 0 )
          {
            v25 = 1;
            v26 = 1;
          }
          else
          {
            Chars = (System_String_o *)System_String__get_Chars(labelText, v24, 0LL);
            if ( (unsigned __int16)Chars == 93 && (v25 & 1) != 0 )
            {
              if ( (v26 & 1) != 0 )
              {
                Chars = System_String__Concat_62401220((System_String_o *)StringLiteral_1541/*":"*/, v28, 0LL);
                if ( !v20 )
                  goto LABEL_42;
                v36 = Chars;
              }
              else
              {
                if ( !v20 )
                  goto LABEL_42;
                v36 = (System_String_o *)StringLiteral_16236/*"]"*/;
              }
              v37 = System_String__Replace_62420848(v20, v36, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v28 = (System_String_o *)StringLiteral_1/*""*/;
              v20 = v37;
              v25 = 0;
              v26 = 0;
            }
          }
          goto LABEL_33;
        }
        if ( !v20 )
          goto LABEL_42;
        v20 = System_String__Replace_62420848(
                v20,
                (System_String_o *)StringLiteral_15990/*"[#"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
      }
      v25 = 1;
LABEL_33:
      if ( ++v24 >= labelText->fields._stringLength )
        goto LABEL_36;
    }
  }
  v27 = 1;
LABEL_36:
  Chars = (System_String_o *)v41->fields.mainLabel;
  if ( !Chars )
    goto LABEL_42;
  Chars = (System_String_o *)WrapControlText__textAdjust(
                               (UILabel_o *)Chars,
                               v20,
                               Chars[17].fields._stringLength,
                               0,
                               0,
                               0LL);
  if ( (v27 & 1) != 0 )
  {
    mainLabel = v41->fields.mainLabel;
    if ( mainLabel )
      return mainLabel->fields.mText;
LABEL_42:
    sub_1BCAA3C(Chars, v23);
  }
  return WarBoardOverlayEffectComponent__TextFormalAdjust(v41, v21, v38);
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
  __int64 v7; // x1
  UnityEngine_Object_o *rubyLabel; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v12; // x2
  struct UILabel_o *v13; // x0

  if ( (byte_4B13BC9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, text, method);
    byte_4B13BC9 = 1;
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
  v6 = UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( text && v6 )
  {
    rubyLabel = (UnityEngine_Object_o *)this->fields.rubyLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
        sub_1BCAA3C(0LL, v9);
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
      UILabel__SetCondensedScale_47600808(mainLabel, v6, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(mainLabel, method);
  }
}


System_String_o *__fastcall WarBoardOverlayEffectComponent__TextFormalAdjust(
        WarBoardOverlayEffectComponent_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  WarBoardOverlayEffectComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w21
  struct UILabel_o *mainLabel; // x8
  unsigned __int16 v15; // w24
  uint16_t Chars; // w25
  System_String_o *v17; // x0
  struct UILabel_o *v18; // x8
  struct System_String_o *mText; // x9
  int32_t v20; // w24
  struct UILabel_o *v21; // x8
  unsigned __int16 v22; // w26
  struct UILabel_o *v23; // x8
  __int64 v24; // x1
  System_String_o *v25; // x0
  struct UILabel_o *v26; // x8
  struct System_String_o *v27; // x8
  __int64 v28; // x1
  System_String_o *v29; // x0
  struct UILabel_o *v30; // x8
  __int64 v31; // x1
  System_String_o *v32; // x0
  struct UILabel_o *v33; // x8
  struct System_String_o *v34; // x8
  __int64 v35; // x1
  System_String_o *v36; // x0
  __int16 v38[2]; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B13BCC & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, localMainTextList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char__get_Item__, v7, v8);
    this = (WarBoardOverlayEffectComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B13BCC = 1;
  }
  v38[0] = 0;
  if ( !localMainTextList )
LABEL_52:
    sub_1BCAA3C(this, localMainTextList);
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( localMainTextList->fields._size >= 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v12,
                                                   (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
      mainLabel = v4->fields.mainLabel;
      if ( !mainLabel )
        goto LABEL_52;
      v15 = (unsigned __int16)this;
      this = (WarBoardOverlayEffectComponent_o *)mainLabel->fields.mText;
      if ( !this )
        goto LABEL_52;
      Chars = System_String__get_Chars((System_String_o *)this, v13, 0LL);
      this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                   localMainTextList,
                                                   v12,
                                                   (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
      if ( v15 == Chars )
      {
        v38[0] = (__int16)this;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, localMainTextList);
        v17 = System_Char__ToString((uint16_t)v38, 0LL);
        this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_62401220(v11, v17, 0LL);
        v18 = v4->fields.mainLabel;
        if ( !v18 )
          goto LABEL_52;
        mText = v18->fields.mText;
        if ( !mText )
          goto LABEL_52;
        v11 = (System_String_o *)this;
        if ( v13 < mText->fields._stringLength - 1 )
          ++v13;
      }
      else
      {
        if ( (unsigned __int16)this != 10 )
        {
          v38[0] = System_Collections_Generic_List_char___get_Item(
                     localMainTextList,
                     v12,
                     (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v28);
          v29 = System_Char__ToString((uint16_t)v38, 0LL);
          v11 = System_String__Concat_62401220(v11, v29, 0LL);
          goto LABEL_36;
        }
        v18 = v4->fields.mainLabel;
        if ( !v18 )
          goto LABEL_52;
      }
      this = (WarBoardOverlayEffectComponent_o *)v18->fields.mText;
      if ( !this )
        goto LABEL_52;
      this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v13, 0LL);
      if ( (unsigned __int16)this == 10 )
      {
        v20 = v12 + 1;
        if ( v12 + 1 >= localMainTextList->fields._size )
          goto LABEL_24;
        this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                     localMainTextList,
                                                     v20,
                                                     (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
        v21 = v4->fields.mainLabel;
        if ( !v21 )
          goto LABEL_52;
        v22 = (unsigned __int16)this;
        this = (WarBoardOverlayEffectComponent_o *)v21->fields.mText;
        if ( !this )
          goto LABEL_52;
        this = (WarBoardOverlayEffectComponent_o *)System_String__get_Chars((System_String_o *)this, v13 + 1, 0LL);
        if ( v22 == (unsigned __int16)this )
        {
LABEL_24:
          v23 = v4->fields.mainLabel;
          if ( !v23 )
            goto LABEL_52;
          this = (WarBoardOverlayEffectComponent_o *)v23->fields.mText;
          if ( !this )
            goto LABEL_52;
          v38[0] = System_String__get_Chars((System_String_o *)this, v13, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v24);
          v25 = System_Char__ToString((uint16_t)v38, 0LL);
          this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_62401220(v11, v25, 0LL);
          v26 = v4->fields.mainLabel;
          if ( !v26 )
            goto LABEL_52;
          v27 = v26->fields.mText;
          if ( !v27 )
            goto LABEL_52;
          v11 = (System_String_o *)this;
          if ( v13 < v27->fields._stringLength - 1 )
            ++v13;
        }
        else
        {
          this = (WarBoardOverlayEffectComponent_o *)System_Collections_Generic_List_char___get_Item(
                                                       localMainTextList,
                                                       v20,
                                                       (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
          if ( (unsigned __int16)this == 10 )
          {
            v30 = v4->fields.mainLabel;
            if ( !v30 )
              goto LABEL_52;
            this = (WarBoardOverlayEffectComponent_o *)v30->fields.mText;
            if ( !this )
              goto LABEL_52;
            v38[0] = System_String__get_Chars((System_String_o *)this, v13, 0LL);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo, v31);
            v32 = System_Char__ToString((uint16_t)v38, 0LL);
            this = (WarBoardOverlayEffectComponent_o *)System_String__Concat_62401220(v11, v32, 0LL);
            v33 = v4->fields.mainLabel;
            if ( !v33 )
              goto LABEL_52;
            v34 = v33->fields.mText;
            if ( !v34 )
              goto LABEL_52;
            v11 = (System_String_o *)this;
            if ( v13 < v34->fields._stringLength - 1 )
              ++v13;
          }
          else
          {
            v38[0] = System_Collections_Generic_List_char___get_Item(
                       localMainTextList,
                       v20,
                       (const MethodInfo_355D9D0 *)Method_System_Collections_Generic_List_char__get_Item__);
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo, v35);
            v36 = System_Char__ToString((uint16_t)v38, 0LL);
            v11 = System_String__Concat_62401220(v11, v36, 0LL);
            ++v12;
          }
        }
      }
LABEL_36:
      ++v12;
    }
    while ( v12 < localMainTextList->fields._size );
  }
  return v11;
}