void __fastcall ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_Stack_T__o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_Stack_T__o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_Stack_T__o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_Stack_T__o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B17E48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Stack_UILabel__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Stack_UISprite__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B17E48 = 1;
  }
  this->fields.defaultBetweenLineHeight = 4.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_BD23B0;
  *(_OWORD *)&this->fields.defaultAllDispSize.fields.x = xmmword_BD3B00;
  *(int32x2_t *)&this->fields.windowOpenTime = vdup_n_s32(0x3ECCCCCDu);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  v30 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v30, v2, v3, v4, v5, v6, v7);
  v34 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                   v31,
                                                   v32,
                                                   v33);
  System_Collections_Generic_Stack_object____ctor(
    v34,
    (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainStock, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v44 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                   v41,
                                                   v42,
                                                   v43);
  System_Collections_Generic_Stack_object____ctor(
    v44,
    (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyStock, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v54 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Stack_UISprite__TypeInfo,
                                                   v51,
                                                   v52,
                                                   v53);
  System_Collections_Generic_Stack_object____ctor(
    v54,
    (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageStock, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v64 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo,
                                                   v61,
                                                   v62,
                                                   v63);
  System_Collections_Generic_Stack_object____ctor(
    v64,
    (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.labelStock, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptMessageLabel__TypeInfo,
                                                       v71,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispLabelList, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  this->fields.dispCountTimer = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageCommonManager__AddLabel(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        float tm,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 Label; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  ScriptMessageLabel_o *v29; // x20
  __int64 v30; // x0
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v32; // x5
  System_String_o *v33; // x23
  System_String_array *v34; // x25
  const MethodInfo *v35; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v40; // x7
  __int64 *p_fields; // x24
  __int64 *p_ruby; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x23
  const MethodInfo *v50; // x5
  int v51; // w8
  __int64 v52; // x24
  System_String_o *v53; // x23
  float v54; // s0
  struct ScriptMessageWindow_o *v55; // x8
  float v56; // s9
  struct ScriptMessageWindow_o *v57; // x8
  int v58; // w8
  System_String_o *v59; // x23
  __int64 v60; // x24
  struct ScriptMessageWindow_o *v61; // x8
  System_String_o **v62; // x9
  int32_t v63; // w23
  System_String_o *v64; // x24
  const MethodInfo *v65; // x5
  struct ScriptMessageWindow_o *v66; // x8
  __int64 *p_image; // x25
  System_String_o *v68; // x1
  System_String_array *v69; // x0
  System_String_array *v70; // x24
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  const MethodInfo *v73; // x5
  System_String_o *v74; // x23
  float v75; // s8
  float v76; // s10
  float v77; // s9
  System_String_array *v78; // x0
  System_String_array *v79; // x25
  System_String_o *v80; // x0
  float v81; // s0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  int32_t v85; // w24
  __int64 *v86; // x24
  System_String_o *rubyText; // x0
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  System_String_o *v92; // x23
  __int64 v93; // x24
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v95; // x23
  const MethodInfo *v96; // x5
  struct ScriptMessageWindow_o *v97; // x8
  System_String_o *v98; // x24
  __int64 v99; // x24
  int v100; // w25
  int32_t v101; // w0
  struct UnityEngine_Vector2_o v102; // d0
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v104; // 0:s1.4,4:s2.4

  if ( (byte_4B17E21 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, text, colorTag);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v11, v12);
    sub_1BCA7E0(&StringLiteral_13699/*"Talk/"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B17E21 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_112;
  v29 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v30 = Label + 112;
  *(float *)(v30 + 52) = tm;
  sub_1BCA784((PartyOrganizationUtility_o *)v30, (int64_t)colorTag, v23, v24, v25, v26, v27, v28);
  if ( !text )
    goto LABEL_112;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_70;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v33 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BCA888(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v22 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v33 )
        goto LABEL_112;
      v34 = System_String__Split_62423376(v33, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v29, 1, 0, 0, v35);
      if ( !v34 )
        goto LABEL_112;
      max_length = v34->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v40 = v34->m_Items[0];
        p_fields = (__int64 *)&v29->fields;
        p_ruby = (__int64 *)&v29->fields.ruby;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v29,
            &v29->fields.main,
            &v29->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v40,
            this->fields.fontType,
            0LL);
        else
          ScriptMessageLabel__UpdateRuby(
            v29,
            &v29->fields.main,
            &v29->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v40,
            v34->m_Items[1],
            this->fields.fontType,
            0,
            0LL);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_112;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_112;
          v68 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
          UILabel__set_text((UILabel_o *)Label, v68, 0LL);
        }
LABEL_74:
        if ( isFoward )
        {
          rubyText = v29->fields.rubyText;
          v29->fields.mainPosition.fields.x = v29->fields.mainPosition.fields.x - v29->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v29->fields.rubyPosition.fields.x = v29->fields.rubyPosition.fields.x - v29->fields.widthSize;
          this->fields.dispPosition = dispPosition;
        }
        Label = (__int64)this->fields.dispLabelList;
        if ( Label )
        {
          v88 = *(_QWORD *)(Label + 16);
          v89 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
          ++*(_DWORD *)(Label + 28);
          if ( v88 )
          {
            v90 = *(int *)(Label + 24);
            if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Label,
                (Il2CppObject *)v29,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
            }
            else
            {
              v91 = v88 + 8 * v90;
              *(_DWORD *)(Label + 24) = v90 + 1;
              *(_QWORD *)(v91 + 32) = v29;
              sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 32), (int64_t)v29, v43, v44, v45, v46, v47, v48);
            }
            return;
          }
        }
LABEL_112:
        sub_1BCAA3C(Label, v22);
      }
    }
LABEL_113:
    sub_1BCAA44(Label, v22);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v49 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BCA888(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v22 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v49 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_62423376(v49, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_112;
    v51 = *(_DWORD *)(Label + 24);
    v52 = Label;
    if ( v51 <= 1 )
    {
      if ( !v51 )
        goto LABEL_113;
      v92 = *(System_String_o **)(Label + 32);
      Label = sub_1BCA888(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_112;
      v22 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      *(_WORD *)(Label + 32) = 58;
      if ( !v92 )
        goto LABEL_112;
      Label = (__int64)System_String__Split_62423376(v92, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_112;
      v93 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_112;
      v95 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v97 = this->fields.currentMessageWindow;
        if ( !v97 )
          goto LABEL_112;
        v95 = System_String__Concat_62401220(v95, v97->fields.imageSuffix, 0LL);
      }
      if ( *(int *)(v93 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v29, 0, 1, 0, v96);
        ScriptMessageLabel__UpdateImage(
          v29,
          &v29->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v95,
          this->fields.horizontalAlign,
          0LL);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v29, 1, 1, 0, v96);
        if ( *(_DWORD *)(v93 + 24) <= 1u )
          goto LABEL_113;
        ScriptMessageLabel__UpdateImageRuby(
          v29,
          &v29->fields.image,
          &v29->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v95,
          *(System_String_o **)(v93 + 40),
          0LL,
          this->fields.horizontalAlign,
          0LL);
      }
    }
    else
    {
      ScriptMessageCommonManager__PreProcLabel(this, v29, 0, 1, 0, v50);
      if ( *(_DWORD *)(v52 + 24) < 2u )
        goto LABEL_113;
      v53 = *(System_String_o **)(v52 + 32);
      v54 = System_Single__Parse(*(System_String_o **)(v52 + 40), 0LL);
      v55 = this->fields.currentMessageWindow;
      if ( !v55 )
        goto LABEL_112;
      v56 = v54;
      Label = System_String__IsNullOrEmpty(v55->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v57 = this->fields.currentMessageWindow;
        if ( !v57 )
          goto LABEL_112;
        Label = (__int64)System_String__Concat_62401220(v53, v57->fields.imageSuffix, 0LL);
        v53 = (System_String_o *)Label;
      }
      v58 = *(_DWORD *)(v52 + 24);
      if ( v58 == 2 )
      {
        ScriptMessageLabel__UpdateImage_42446300(
          v29,
          &v29->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v56,
          v53,
          this->fields.horizontalAlign,
          0LL);
      }
      else if ( v58 <= 3 )
      {
        if ( (unsigned int)v58 <= 2 )
          goto LABEL_113;
        v98 = *(System_String_o **)(v52 + 48);
        Label = sub_1BCA888(char___TypeInfo, 1LL);
        if ( !Label )
          goto LABEL_112;
        v22 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        *(_WORD *)(Label + 32) = 44;
        if ( !v98 )
          goto LABEL_112;
        Label = (__int64)System_String__Split_62423376(v98, (System_Char_array *)Label, 0LL);
        if ( !Label )
          goto LABEL_112;
        v99 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
        if ( *(_DWORD *)(v99 + 24) <= 1u )
          goto LABEL_113;
        v100 = Label;
        v101 = System_Int32__Parse(*(System_String_o **)(v99 + 40), 0LL);
        v104.fields.x = (float)v100;
        v104.fields.y = (float)v101;
        ScriptMessageLabel__UpdateImage_42446452(
          v29,
          &v29->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v56,
          v53,
          v104,
          this->fields.horizontalAlign,
          0LL);
      }
    }
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = (__int64)v29->fields.image;
    if ( !Label )
      goto LABEL_112;
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v59 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BCA888(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v22 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v59 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_62423376(v59, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_112;
    v60 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
    v61 = this->fields.currentMessageWindow;
    if ( *(int *)(v60 + 24) >= 2 )
      v62 = (System_String_o **)(v60 + 40);
    else
      v62 = (System_String_o **)&StringLiteral_21335/*"line"*/;
    if ( !v61 )
      goto LABEL_112;
    v63 = Label;
    v64 = *v62;
    Label = System_String__IsNullOrEmpty(v61->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v66 = this->fields.currentMessageWindow;
      if ( !v66 )
        goto LABEL_112;
      v64 = System_String__Concat_62401220(v64, v66->fields.imageSuffix, 0LL);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v29, 0, 1, 0, v65);
    p_image = (__int64 *)&v29->fields.image;
    ScriptMessageLabel__UpdateLine(
      v29,
      &v29->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v63,
      v64,
      0LL);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = *p_image;
    if ( !*p_image )
      goto LABEL_112;
LABEL_109:
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Label + 440LL))(
      Label,
      *(_QWORD *)(*(_QWORD *)Label + 448LL),
      0.0);
    goto LABEL_74;
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 42 )
  {
LABEL_70:
    ScriptMessageCommonManager__PreProcLabel(this, v29, 0, 0, 0, v32);
    v86 = (__int64 *)&v29->fields;
    ScriptMessageLabel__UpdateLabel(
      v29,
      &v29->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      0LL);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = *v86;
    if ( !*v86 )
      goto LABEL_112;
    v68 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_73;
  }
  Label = (__int64)System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
  if ( !Label )
    goto LABEL_112;
  v69 = System_String__Split((System_String_o *)Label, 0x20u, 0, 0LL);
  if ( v69 )
  {
    v70 = v69;
    if ( (int)v69->max_length >= 1 )
    {
      v71 = v69->m_Items[0];
      if ( v71 )
      {
        Label = System_String__op_Equality(v71, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v70->max_length )
            goto LABEL_113;
          Label = (__int64)v70->m_Items[0];
          if ( !Label )
            goto LABEL_112;
          v72 = System_String__Trim((System_String_o *)Label, 0LL);
          v74 = System_String__Concat_62401220((System_String_o *)StringLiteral_13699/*"Talk/"*/, v72, 0LL);
          v75 = 0.0;
          v76 = 0.0;
          v77 = 0.0;
          if ( (int)v70->max_length >= 2 )
          {
            Label = (__int64)v70->m_Items[1];
            if ( !Label )
              goto LABEL_112;
            Label = (__int64)System_String__Trim((System_String_o *)Label, 0LL);
            if ( !Label )
              goto LABEL_112;
            v78 = System_String__Split((System_String_o *)Label, 0x2Cu, 0, 0LL);
            v76 = 0.0;
            v77 = 0.0;
            if ( v78 )
            {
              v79 = v78;
              v76 = 0.0;
              v77 = 0.0;
              if ( (int)v78->max_length >= 2 )
              {
                Label = (__int64)v78->m_Items[0];
                if ( !Label )
                  goto LABEL_112;
                v80 = System_String__Trim((System_String_o *)Label, 0LL);
                v81 = System_Single__Parse(v80, 0LL);
                if ( v79->max_length <= 1 )
                  goto LABEL_113;
                Label = (__int64)v79->m_Items[1];
                if ( !Label )
                  goto LABEL_112;
                v77 = v81;
                v82 = System_String__Trim((System_String_o *)Label, 0LL);
                v76 = System_Single__Parse(v82, 0LL);
              }
            }
          }
          if ( (int)v70->max_length <= 2 )
            goto LABEL_110;
          Label = (__int64)v70->m_Items[2];
          if ( !Label )
            goto LABEL_112;
          v83 = System_String__Trim((System_String_o *)Label, 0LL);
          v75 = System_Single__Parse(v83, 0LL);
          if ( (int)v70->max_length < 4 )
          {
LABEL_110:
            v85 = 0;
          }
          else
          {
            Label = (__int64)v70->m_Items[3];
            if ( !Label )
              goto LABEL_112;
            v84 = System_String__Trim((System_String_o *)Label, 0LL);
            v85 = System_Int32__Parse(v84, 0LL);
          }
          v102 = this->fields.dispPosition;
          pos.fields.x = v77 + v102.fields.x;
          pos.fields.y = v76 + v102.fields.y;
          this->fields.dispPosition = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                      (float32x2_t)v102,
                                                                      (float32x2_t)1124073472LL).n64_u64[0];
          ScriptMessageCommonManager__PreProcLabel(this, v29, 0, 0, 1, v73);
          ScriptMessageLabel__UpdateEffect(v29, &v29->fields.effect, &pos, v74, v75, v85, 0LL);
          goto LABEL_74;
        }
      }
    }
  }
}


void __fastcall ScriptMessageCommonManager__AddText(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  int32_t horizontalAlign; // w8
  float v6; // s0
  float alignRightBase; // s0
  int v8; // w8

  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      alignRightBase = this->fields.alignRightBase;
      v8 = this->fields.fontSize * lineLength;
    }
    else
    {
      v6 = 0.0;
      if ( horizontalAlign != 1 )
      {
LABEL_7:
        this->fields.dispPosition.fields.x = v6;
        goto LABEL_8;
      }
      alignRightBase = this->fields.alignCenterBase;
      v8 = this->fields.fontSize * lineLength / 2;
    }
    v6 = alignRightBase - (float)v8;
    goto LABEL_7;
  }
LABEL_8:
  ScriptMessageCommonManager__UpdateLabels(this, text, 0, 0, method);
}


void __fastcall ScriptMessageCommonManager__AddTextStretch(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ScriptMessageCommonManager__UpdateLabels(this, text, 1, 0, v3);
}


void __fastcall ScriptMessageCommonManager__CalcMessageVerticalAlign(
        ScriptMessageCommonManager_o *this,
        System_String_array *dataList,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  float v5; // s0

  p_startPosition = &this->fields.startPosition;
  v5 = COERCE_FLOAT(HIDWORD(*(_QWORD *)&this->fields.startPosition))
     - ScriptMessageCommonManager__GetVerticalAlignedOffset(this, dataList, method);
  p_startPosition[1] = *p_startPosition;
  this->fields.dispPosition.fields.y = v5;
}


void __fastcall ScriptMessageCommonManager__CancelNextTouch(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  nextTouchRootObject = this->fields.nextTouchRootObject;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  if ( !nextTouchRootObject )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
}


void __fastcall ScriptMessageCommonManager__CancelTapSkip(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isTapSkipRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ChangeMessageWindow(
        ScriptMessageCommonManager_o *this,
        ScriptMessageWindow_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  int64_t talkNameManager; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *currentMessageWindow; // x22
  UnityEngine_Object_o *defaultMessageWindow; // x23
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x22
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x22
  int64_t v19; // x21
  struct ScriptMessageWindow_o *v20; // x8
  Il2CppObject *messageMainLabel; // x22
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x23
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x22
  struct ScriptMessageWindow_o *v34; // x8
  Il2CppObject *messageRubyLabel; // x22
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x23
  const MethodInfo *v38; // x3
  struct UnityEngine_GameObject_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UnityEngine_Object_o *v47; // x22
  struct ScriptMessageWindow_o *v48; // x8
  Il2CppObject *talkNameMainLabel; // x22
  __int64 v50; // x1
  UnityEngine_Transform_o *v51; // x23
  Il2CppObject *v52; // x23
  const MethodInfo *v53; // x3
  struct ScriptLineMessage_o *v54; // x22
  struct ScriptMessageWindow_o *v55; // x8
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  UnityEngine_Object_o *v63; // x22
  struct ScriptMessageWindow_o *v64; // x8
  Il2CppObject *talkNameRubyLabel; // x22
  __int64 v66; // x1
  UnityEngine_Transform_o *v67; // x23
  Il2CppObject *v68; // x23
  const MethodInfo *v69; // x3
  struct ScriptLineMessage_o *v70; // x22
  struct ScriptMessageWindow_o *v71; // x8
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  const MethodInfo *v91; // x6
  const MethodInfo *v92; // x1

  if ( (byte_4B17E35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___, prefab, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_UILabel____76924640, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B17E35 = 1;
  }
  ScriptMessageCommonManager__DeleteLabels(this, (const MethodInfo *)prefab);
  talkNameManager = (int64_t)this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)talkNameManager, v9);
  talkNameManager = (int64_t)this->fields.defaultMessageWindow;
  if ( !talkNameManager )
    goto LABEL_57;
  talkNameManager = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !talkNameManager )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)talkNameManager, 0, 0LL);
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  defaultMessageWindow = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Inequality(currentMessageWindow, defaultMessageWindow, 0LL) )
  {
    talkNameManager = (int64_t)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_57;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)talkNameManager,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  talkNameManager = (int64_t)this->fields.messageShake;
  if ( !talkNameManager )
    goto LABEL_57;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  talkNameManager = (int64_t)UnityEngine_Object__Instantiate_object__49903816(
                               (Il2CppObject *)prefab,
                               transform,
                               (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_57;
  v19 = talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    0LL);
  talkNameManager = UnityEngine_Object__op_Inequality(*(UnityEngine_Object_o **)(v19 + 128), 0LL, 0LL);
  v20 = this->fields.defaultMessageWindow;
  if ( !v20 )
    goto LABEL_57;
  messageMainLabel = (Il2CppObject *)v20->fields.messageMainLabel;
  if ( (talkNameManager & 1) != 0 )
  {
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    messageMainLabel = UnityEngine_Object__Instantiate_object__49903816(
                         messageMainLabel,
                         v23,
                         (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UILabel____76924640);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageMainLabel,
      *(UILabel_o **)(v19 + 128),
      (UILabel_o *)messageMainLabel,
      v24);
  }
  if ( !messageMainLabel )
    goto LABEL_57;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
  this->fields.mainPrefab = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainPrefab, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v33 = *(UnityEngine_Object_o **)(v19 + 136);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  talkNameManager = UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  v34 = this->fields.defaultMessageWindow;
  if ( !v34 )
    goto LABEL_57;
  messageRubyLabel = (Il2CppObject *)v34->fields.messageRubyLabel;
  if ( (talkNameManager & 1) != 0 )
  {
    v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    messageRubyLabel = UnityEngine_Object__Instantiate_object__49903816(
                         messageRubyLabel,
                         v37,
                         (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UILabel____76924640);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageRubyLabel,
      *(UILabel_o **)(v19 + 136),
      (UILabel_o *)messageRubyLabel,
      v38);
  }
  if ( !messageRubyLabel )
    goto LABEL_57;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageRubyLabel, 0LL);
  this->fields.rubyPrefab = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyPrefab, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v47 = *(UnityEngine_Object_o **)(v19 + 144);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  talkNameManager = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
  if ( (talkNameManager & 1) != 0 )
  {
    v48 = this->fields.defaultMessageWindow;
    if ( !v48 )
      goto LABEL_57;
    talkNameMainLabel = (Il2CppObject *)v48->fields.talkNameMainLabel;
    v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    v52 = UnityEngine_Object__Instantiate_object__49903816(
            talkNameMainLabel,
            v51,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UILabel____76924640);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v52,
      *(UILabel_o **)(v19 + 144),
      (UILabel_o *)v52,
      v53);
    if ( !v52 )
      goto LABEL_57;
    v54 = this->fields.talkNameManager;
    talkNameManager = (int64_t)v52;
  }
  else
  {
    v55 = this->fields.defaultMessageWindow;
    if ( !v55 )
      goto LABEL_57;
    talkNameManager = (int64_t)v55->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_57;
    v54 = this->fields.talkNameManager;
  }
  talkNameManager = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v54 )
    goto LABEL_57;
  v54->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.mainPrefab, talkNameManager, v56, v57, v58, v59, v60, v61);
  v63 = *(UnityEngine_Object_o **)(v19 + 152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  talkNameManager = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
  if ( (talkNameManager & 1) == 0 )
  {
    v71 = this->fields.defaultMessageWindow;
    if ( v71 )
    {
      talkNameManager = (int64_t)v71->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v70 = this->fields.talkNameManager;
        goto LABEL_54;
      }
    }
LABEL_57:
    sub_1BCAA3C(talkNameManager, v9);
  }
  v64 = this->fields.defaultMessageWindow;
  if ( !v64 )
    goto LABEL_57;
  talkNameRubyLabel = (Il2CppObject *)v64->fields.talkNameRubyLabel;
  v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  v68 = UnityEngine_Object__Instantiate_object__49903816(
          talkNameRubyLabel,
          v67,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UILabel____76924640);
  ScriptMessageCommonManager__CopyFontEffects(
    (ScriptMessageCommonManager_o *)v68,
    *(UILabel_o **)(v19 + 152),
    (UILabel_o *)v68,
    v69);
  if ( !v68 )
    goto LABEL_57;
  v70 = this->fields.talkNameManager;
  talkNameManager = (int64_t)v68;
LABEL_54:
  talkNameManager = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v70 )
    goto LABEL_57;
  v70->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1BCA784((PartyOrganizationUtility_o *)&v70->fields.rubyPrefab, talkNameManager, v72, v73, v74, v75, v76, v77);
  talkNameManager = (int64_t)this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  v84 = *(_QWORD *)(v19 + 88);
  *(_QWORD *)(talkNameManager + 56) = v84;
  sub_1BCA784((PartyOrganizationUtility_o *)(talkNameManager + 56), v84, v78, v79, v80, v81, v82, v83);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentMessageWindow, v19, v85, v86, v87, v88, v89, v90);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v91);
  ScriptMessageCommonManager__ResetScroll(this, v92);
}


void __fastcall ScriptMessageCommonManager__ClearCount(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.dispCountTimer = -1.0;
}


void __fastcall ScriptMessageCommonManager__ClearLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17E1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v10, v11);
    byte_4B17E1A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    dispLabelList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v17.fields._current, v13);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v14 = this->fields.dispLabelList;
  if ( !v14 )
LABEL_11:
    sub_1BCAA3C(dispLabelList, method);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
  this->fields.isBusy = 0;
  *(_QWORD *)&this->fields.dispCountTimer = 3212836864LL;
  this->fields.isEffectMessage = 0;
}


void __fastcall ScriptMessageCommonManager__ClearRequestFastMessage(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ClearTalkName(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptMessageCommonManager_o *v3; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  void *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ScriptMessageWindow_o *v19; // x8

  v3 = this;
  if ( (byte_4B17E33 & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17E33 = 1;
  }
  currentMessageWindow = v3->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v5 = StringLiteral_1/*""*/;
  v3->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.talkName, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  v3->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.talkNameOnly, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  this = (ScriptMessageCommonManager_o *)v3->fields.talkNameManager;
  v3->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, method), (v19 = v3->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v19->fields.talkNameIcon) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
    this,
    this->klass->vtable._9_CloseDown.methodPtr,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  UnityEngine_Transform_o *messageScroll; // x0
  const MethodInfo *v6; // x1
  unsigned __int64 v7; // d0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  float z; // s2
  int v10; // s1
  const MethodInfo *v11; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v14; // x8
  void *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  void *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ScriptMessageWindow_o *v29; // x8

  p_startPosition = &this->fields.startPosition;
  if ( (byte_4B17E31 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17E31 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  p_startPosition[1] = *p_startPosition;
  v7 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  p_startPosition[2] = (struct UnityEngine_Vector2_o)v7;
  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_12;
  messageScroll = currentMessageWindow->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_12;
  z = this->fields.scrollPosition.fields.z;
  v10 = HIDWORD(v7);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v7, 0LL);
  ScriptMessageCommonManager__SetDefaultState(this, v11);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  v14 = this->fields.currentMessageWindow;
  this->fields.isBusy = 0;
  this->fields.isScroll = 0;
  this->fields.isEffectMessage = 0;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  this->fields.dispCountTimer = -1.0;
  this->fields.beforeTextOnlyLineHeight = textOnlyLineHeight + rubyLineHeight;
  this->fields.isFastMessageRequest = 0;
  if ( !v14 )
    goto LABEL_12;
  messageScroll = (UnityEngine_Transform_o *)v14->fields.talkNameRootObject;
  if ( !messageScroll )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
  v15 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.talkNameOnly, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, v6),
        (v29 = this->fields.currentMessageWindow) == 0LL)
    || (messageScroll = (UnityEngine_Transform_o *)v29->fields.talkNameIcon) == 0LL
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&messageScroll->klass[1]._1.this_arg.bits)(
          messageScroll,
          messageScroll->klass[1]._1.element_class,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(messageScroll, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__CloseDown(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  __int64 v14; // x1
  TweenPosition_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UnityEngine_AnimationCurve_o *windowDownCurve; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B17E2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScriptMessageCommonManager_CloseDown__, v7, v8);
    byte_4B17E2B = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
      return;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)rootObject,
                                             0LL);
  if ( !rootObject )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  if ( localPosition.fields.y <= this->fields.windowClosePosY )
    return;
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
LABEL_24:
    sub_1BCAA3C(rootObject, isFast);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v26.fields.y = this->fields.windowClosePosY;
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  v15 = TweenPosition__Begin(gameObject, windowCloseTime, v26, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v15 )
    {
      v15->fields.method = 0;
      windowDownCurve = this->fields.windowDownCurve;
      v15->fields.animationCurve = windowDownCurve;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v15->fields.animationCurve,
        (int64_t)windowDownCurve,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      UITweener__PlayForward((UITweener_o *)v15, 0LL);
      v23 = Method_ScriptMessageCommonManager_CloseDown__;
      if ( (*((_BYTE *)Method_ScriptMessageCommonManager_CloseDown__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1BCA7F8(Method_ScriptMessageCommonManager_CloseDown__);
      v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 7, 0LL);
      return;
    }
    goto LABEL_24;
  }
}


void __fastcall ScriptMessageCommonManager__CopyFontEffects(
        ScriptMessageCommonManager_o *this,
        UILabel_o *src,
        UILabel_o *dst,
        const MethodInfo *method)
{
  if ( !src || !dst )
    sub_1BCAA3C(this, src);
  UILabel__set_effectStyle(dst, src->fields.mEffectStyle, 0LL);
  UILabel__set_effectColor(dst, src->fields.mEffectColor, 0LL);
  UILabel__set_effectDistance(dst, src->fields.mEffectDistance, 0LL);
  UILabel__set_applyGradient(dst, src->fields.mApplyGradient, 0LL);
  UILabel__set_gradientTop(dst, src->fields.mGradientTop, 0LL);
  UILabel__set_gradientBottom(dst, src->fields.mGradientBottom, 0LL);
}


UILabel_o *__fastcall ScriptMessageCommonManager__CreateLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v10; // x1
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v12; // x19
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_4B17E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B17E46 = 1;
  }
  mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   mainPrefab,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_15;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_object )
    goto LABEL_15;
  currentMessageWindow = this->fields.currentMessageWindow;
  v12 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !currentMessageWindow )
    goto LABEL_15;
  ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v13);
    byte_4B109C1 = 1;
  }
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v15);
    byte_4B109C6 = 1;
  }
  if ( !v16 )
LABEL_15:
    sub_1BCAA3C(Component_object, v10);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v12;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x20

  if ( (byte_4B17E19 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v14, v15);
    byte_4B17E19 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_27;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0LL);
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_27;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !labelStock )
    goto LABEL_27;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( labelStock )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)labelStock,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
    if ( !labelStock )
      goto LABEL_27;
    if ( labelStock->fields._size <= 0 )
      break;
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_27;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    UnityEngine_Object__Destroy_70154244(v21, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_27:
    sub_1BCAA3C(labelStock, v16);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__Destroy_70154244(v23, 0LL);
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_27;
  }
}


void __fastcall ScriptMessageCommonManager__EndScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 0;
  this->fields.isScroll = 0;
}


UISprite_o *__fastcall ScriptMessageCommonManager__FetchImageSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 imageStock; // x0
  UnityEngine_Component_o *v13; // x19
  Il2CppObject *imagePrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x20
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4B17E1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v10, v11);
    byte_4B17E1E = 1;
  }
  imageStock = (__int64)this->fields.imageStock;
  if ( !imageStock )
    goto LABEL_20;
  if ( *(int *)(imageStock + 24) <= 0 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    imageStock = (__int64)UnityEngine_Object__Instantiate_object_(
                            imagePrefab,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)imageStock,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v13 = (UnityEngine_Component_o *)imageStock;
        imageStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)imageStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)imageStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(imageStock, method);
  }
  imageStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                          (System_Collections_Generic_Stack_T__o *)imageStock,
                          (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v13 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_20;
LABEL_13:
  imageStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v17 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4B109C1 )
  {
    imageStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v16);
    byte_4B109C1 = 1;
  }
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  imageStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v19 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4B109C6 )
  {
    imageStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v18);
    byte_4B109C6 = 1;
  }
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v13;
}


ScriptMessageLabel_o *__fastcall ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v11; // x19

  if ( (byte_4B17E1F & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7, v8);
    byte_4B17E1F = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_1BCAA3C(0LL, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v11 = (ScriptMessageLabel_o *)sub_1BCAA2C(ScriptMessageLabel_TypeInfo, method, v2, v3);
  ScriptMessageLabel___ctor(v11, 0LL);
  return v11;
}


UILabel_o *__fastcall ScriptMessageCommonManager__FetchMainLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 mainStock; // x0
  UnityEngine_Component_o *v13; // x19
  Il2CppObject *mainPrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x20
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4B17E1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v10, v11);
    byte_4B17E1C = 1;
  }
  mainStock = (__int64)this->fields.mainStock;
  if ( !mainStock )
    goto LABEL_20;
  if ( *(int *)(mainStock + 24) < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    mainStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mainStock,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v13 = (UnityEngine_Component_o *)mainStock;
        mainStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)mainStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(mainStock, method);
  }
  mainStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)mainStock,
                         (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_20;
  v13 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0LL);
LABEL_13:
  mainStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v17 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4B109C1 )
  {
    mainStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v16);
    byte_4B109C1 = 1;
  }
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mainStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v19 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4B109C6 )
  {
    mainStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v18);
    byte_4B109C6 = 1;
  }
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v13;
}


UILabel_o *__fastcall ScriptMessageCommonManager__FetchRubyLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 rubyStock; // x0
  UnityEngine_Component_o *v13; // x20
  Il2CppObject *rubyPrefab; // x20
  ScriptMessageWindow_o *currentMessageWindow; // x21
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_4B17E1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v10, v11);
    byte_4B17E1D = 1;
  }
  rubyStock = (__int64)this->fields.rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
  if ( *(int *)(rubyStock + 24) <= 0 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    rubyStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           rubyPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rubyStock,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v13 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rubyStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)rubyStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(rubyStock, method);
  }
  rubyStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)rubyStock,
                         (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v13 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
LABEL_13:
  rubyStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v17 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4B109C1 )
  {
    rubyStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v16);
    byte_4B109C1 = 1;
  }
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  rubyStock = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v19 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4B109C6 )
  {
    rubyStock = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v18);
    byte_4B109C6 = 1;
  }
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UILabel__set_fontSize((UILabel_o *)v13, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v13;
}


void __fastcall ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *rootObject; // x20
  __int64 v7; // x1
  __int64 transform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *rootPanel; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B17E29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17E29 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.rootObject;
    if ( !transform )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      rootPanel = (UnityEngine_Object_o *)this->fields.rootPanel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality(rootPanel, 0LL, 0LL) )
      {
        transform = (__int64)this->fields.rootPanel;
        if ( !transform )
          goto LABEL_36;
        v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
        {
          transform = (__int64)this->fields.rootObject;
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
            if ( transform )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)transform,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) != 0 )
              {
                if ( !Component_object )
                  goto LABEL_36;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
              }
              transform = (__int64)this->fields.rootPanel;
              if ( transform )
              {
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( transform )
                {
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                  v18 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4B109C1 )
                  {
                    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v17);
                    byte_4B109C1 = 1;
                  }
                  if ( v18 )
                  {
                    UnityEngine_Transform__set_localPosition(
                      v18,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    transform = (__int64)this->fields.rootObject;
                    if ( transform )
                    {
                      transform = (__int64)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)transform,
                                             0LL);
                      if ( transform )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
                          return;
                        transform = (__int64)this->fields.rootObject;
                        if ( transform )
                        {
                          transform = (__int64)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)transform,
                                                 0LL);
                          if ( transform )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_36:
          sub_1BCAA3C(transform, v7);
        }
      }
    }
  }
}


int32_t __fastcall ScriptMessageCommonManager__GetAllDispLength(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *dispLabelList; // x0
  int32_t v9; // w20
  int32_t v10; // w21
  void *v11; // x22
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x23

  if ( (byte_4B17E3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B17E3B = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_15:
    sub_1BCAA3C(dispLabelList, method);
  v9 = 0;
  v10 = 0;
  while ( v10 < *((_DWORD *)dispLabelList + 6) )
  {
    dispLabelList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)dispLabelList,
                      v10,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( dispLabelList )
    {
      v11 = dispLabelList;
      if ( *((int *)dispLabelList + 42) >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(*((System_String_o **)dispLabelList + 15), 0LL) )
          v9 += *((_DWORD *)v11 + 42);
        v13 = (UnityEngine_Object_o *)*((_QWORD *)v11 + 6);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
          v9 += *((_DWORD *)v11 + 42);
      }
      dispLabelList = this->fields.dispLabelList;
      ++v10;
      if ( dispLabelList )
        continue;
    }
    goto LABEL_15;
  }
  return v9;
}


UnityEngine_GameObject_o *__fastcall ScriptMessageCommonManager__GetBackLogButtonObject(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backLogButton; // x0

  backLogButton = (UnityEngine_Component_o *)this->fields.backLogButton;
  if ( !backLogButton )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Component__get_gameObject(backLogButton, 0LL);
}


float __fastcall ScriptMessageCommonManager__GetDefaultStepTime(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.defaultStepTime;
}


UnityEngine_Vector3_o __fastcall ScriptMessageCommonManager__GetFaceIconPosition(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Font_o *__fastcall ScriptMessageCommonManager__GetFontType(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.fontType;
}


UISprite_o *__fastcall ScriptMessageCommonManager__GetMessageBackSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct ScriptMessageWindow_o *currentMessageWindow; // x8

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_1BCAA3C(this, method);
  return currentMessageWindow->fields.messageWindowBack;
}


UISprite_o *__fastcall ScriptMessageCommonManager__GetNextMarkSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.nextMarkSprite;
}


System_String_o *__fastcall ScriptMessageCommonManager__GetTalkName(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.talkName;
}


UISprite_o *__fastcall ScriptMessageCommonManager__GetTalkNameBackSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct ScriptMessageWindow_o *currentMessageWindow; // x8

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_1BCAA3C(this, method);
  return currentMessageWindow->fields.talkNameBack;
}


int32_t __fastcall ScriptMessageCommonManager__GetTalkNameIndex(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameIndex;
}


System_String_o *__fastcall ScriptMessageCommonManager__GetTalkNameOnly(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameOnly;
}


float __fastcall ScriptMessageCommonManager__GetVerticalAlignedOffset(
        ScriptMessageCommonManager_o *this,
        System_String_array *dataList,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  float defaultTextOnlyLineHeight; // s0
  int v16; // w20
  signed int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int defaultFontSize; // w24
  il2cpp_array_size_t v20; // w29
  int32_t v21; // w23
  int v22; // w27
  float v23; // s9
  int v24; // w28
  float v25; // s8
  System_String_o *v26; // x25
  System_String_o *v27; // x24
  int32_t v28; // w25
  System_String_o *v29; // x25
  __int64 v30; // x1
  int32_t VerticalAlignFromString; // w25
  float v32; // s0
  float v33; // s1
  float v34; // s0
  float v35; // s8
  float v36; // s2
  float v37; // s0
  int32_t v38; // w20
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w22
  float VerticalAlignOffset; // s0
  int32_t v43; // w8
  int32_t vAlign; // [xsp+8h] [xbp-88h]
  int32_t fontSize; // [xsp+Ch] [xbp-84h]

  v4 = this;
  if ( (byte_4B17E32 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, dataList, method);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_19531/*"f"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_25580/*"・"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22986/*"r"*/, v11, v12);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&StringLiteral_21252/*"l"*/, v13, v14);
    byte_4B17E32 = 1;
  }
  defaultTextOnlyLineHeight = v4->fields.defaultTextOnlyLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v16 = 0x80000000;
  else
    v16 = (int)defaultTextOnlyLineHeight;
  if ( !dataList )
    sub_1BCAA3C(this, dataList);
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v4->fields.defaultBetweenLineHeight;
  fontSize = v16;
  if ( max_length >= 1 )
  {
    vAlign = 0;
    defaultFontSize = v4->fields.defaultFontSize;
    v20 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0.0;
    v24 = -1;
    v25 = v4->fields.defaultBetweenLineHeight;
    while ( v20 < max_length )
    {
      v26 = dataList->m_Items[v20];
      this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                               v26,
                                               (System_String_o *)StringLiteral_19531/*"f"*/,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v20 + 2 >= dataList->max_length )
          break;
        v27 = dataList->m_Items[v20 + 2];
        v28 = v4->fields.defaultFontSize;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, dataList);
        this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v27, v28, 0LL);
        v20 += 4;
        if ( v16 < (int)this )
          v16 = (int)this;
        if ( v20 >= dataList->max_length )
          break;
        defaultFontSize = (int)this;
        v29 = dataList->m_Items[v20];
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, dataList);
        VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v29, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30);
        this = (ScriptMessageCommonManager_o *)System_Math__Max_63220196(VerticalAlignFromString, v21, 0LL);
        v21 = (int)this;
      }
      else
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 v26,
                                                 (System_String_o *)StringLiteral_21252/*"l"*/,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 += 2;
          if ( v20 >= dataList->max_length )
            break;
          v32 = System_Single__Parse(dataList->m_Items[v20], 0LL);
          if ( v32 >= 0.0 )
            v25 = v32;
          else
            v25 = v4->fields.defaultBetweenLineHeight;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v26,
                                                   (System_String_o *)StringLiteral_22986/*"r"*/,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v33 = v4->fields.defaultTextOnlyLineHeight;
            defaultBetweenLineHeight = v25;
            v34 = v25 + (float)(v4->fields.rubyLineHeight + (float)v16);
            v25 = v4->fields.defaultBetweenLineHeight;
            defaultFontSize = v4->fields.defaultFontSize;
            v23 = v23 + v34;
            vAlign = v21;
            fontSize = v16;
            if ( v33 == INFINITY )
              v16 = 0x80000000;
            else
              v16 = (int)v33;
            ++v22;
            v21 = 0;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v26,
                                                     (System_String_o *)StringLiteral_25580/*"・"*/,
                                                     0LL);
            if ( ((v24 < defaultFontSize) & (v22 == 1) & (unsigned __int8)this) != 0 )
              v24 = defaultFontSize;
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_38;
    }
    sub_1BCAA44(this, dataList);
  }
  vAlign = 0;
  v24 = -1;
  v23 = 0.0;
LABEL_38:
  if ( v24 < 1 )
  {
    v38 = fontSize;
  }
  else
  {
    if ( !byte_4B1103A )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, dataList, method);
      byte_4B1103A = 1;
    }
    v35 = (float)v24 * 0.37;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, dataList);
    v36 = (float)(int)vcvtps_s32_f32(v35);
    v37 = -2147500000.0;
    v38 = fontSize;
    if ( ceilf(v35) != INFINITY )
      v37 = v36;
    result = v37 - v4->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v4->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v23 = v23 - (float)(result + result);
    }
  }
  if ( !v4->fields.messageAlign )
    return 0.0;
  maxFontSize = v4->fields.maxFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, dataList);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v38, maxFontSize, 0LL);
  v43 = v4->fields.messageAlign;
  result = (float)(v4->fields.dispSize.fields.y - (float)((float)(v23 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v4->fields.rubyLineHeight + 4.0);
  if ( v43 == 1 )
    return result * 0.5;
  if ( v43 != 2 )
    return 0.0;
  return result;
}


int32_t __fastcall ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x6

  if ( (byte_4B17E24 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9130/*"MessageShake/LogMark/BackLogButton"*/, method, v2);
    byte_4B17E24 = 1;
  }
  this->fields.isTapSkip = 0;
  this->fields.isMessageSpeedForcedNormal = 0;
  this->fields.isEffectMessage = 0;
  *(_DWORD *)&this->fields.isMessageOut = 0;
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          0.0),
        ScriptMessageCommonManager__ForceOpen(this, v5),
        (rootPanel = this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(rootPanel, 1, 0LL),
        rootPanel = this->fields.messageBase,
        this->fields.messageAlign = 0,
        !rootPanel) )
  {
    sub_1BCAA3C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_9130/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
  return ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v7);
}


bool __fastcall ScriptMessageCommonManager__IsEnableCloseDown(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ScriptMessageCommonManager__IsEnableOpenUp(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ScriptMessageCommonManager__IsFastMessageRequest(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isFastMessageRequest;
}


bool __fastcall ScriptMessageCommonManager__IsForcedDisableTurnPage(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isForcedDisableTurnPage;
}


bool __fastcall ScriptMessageCommonManager__IsForcedEnableTurnPage(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isForcedEnableTurnPage;
}


bool __fastcall ScriptMessageCommonManager__IsLongPress(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *touchPress; // x0

  if ( !ScriptMessageCommonManager__IsOpen(this, method) || this->fields._isFaceMessage_k__BackingField )
    return 0;
  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_1BCAA3C(0LL, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *rootPanel; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17E27 = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_14;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootPanel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
      return 0;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(rootPanel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(rootPanel, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootPanel, 0LL);
  return localPosition.fields.y >= this->fields.windowNormalPosY;
}


bool __fastcall ScriptMessageCommonManager__IsPageScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.dispPosition.fields.x > this->fields.startPosition.fields.x
      || this->fields.scrollPosition.fields.y < (float)((float)(this->fields.startPosition.fields.y
                                                              - this->fields.dispPosition.fields.y)
                                                      + (float)(this->fields.dispSize.fields.y * 0.5));
}


bool __fastcall ScriptMessageCommonManager__IsReturnScroll(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return (float)((float)(this->fields.beforeTextOnlyLineHeight - this->fields.dispPosition.fields.y)
               - this->fields.scrollPosition.fields.y) > (float)(this->fields.dispSize.fields.y
                                                               + (float)(this->fields.dispSize.fields.y * -0.5));
}


bool __fastcall ScriptMessageCommonManager__IsReturnScroll2(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return (float)((float)((float)(this->fields.beforeTextOnlyLineHeight + this->fields.beforeTextOnlyLineHeight)
                       - this->fields.dispPosition.fields.y)
               - this->fields.scrollPosition.fields.y) > (float)(this->fields.dispSize.fields.y
                                                               + (float)(this->fields.dispSize.fields.y * -0.5));
}


bool __fastcall ScriptMessageCommonManager__IsRootActive(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *rootObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B17E45 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E45 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
    return 0;
  v7 = this->fields.rootObject;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_GameObject__get_activeSelf(v7, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isScroll;
}


bool __fastcall ScriptMessageCommonManager__IsShake(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.shakeCycle > 0.0;
}


bool __fastcall ScriptMessageCommonManager__IsTapSkip(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isTapSkipRequest;
}


bool __fastcall ScriptMessageCommonManager__IsWaitNextTouchDelay(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isWaitNextTouchDelay;
}


bool __fastcall ScriptMessageCommonManager__IsWaitTouch(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isWaitNextTouchRequest;
}


bool __fastcall ScriptMessageCommonManager__IsWindowCloseDown(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17E28 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_15;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
      return *(float *)&Component_object[9].klass < 0.0;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject
    || (rootObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL)) == 0LL
    || (rootObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootObject, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(rootObject, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectExist(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v11; // w21
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B17E44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B17E44 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = dispLabelList->fields._size;
    v11 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             i,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v14 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v14[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
          break;
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    if ( !dispLabelList )
      sub_1BCAA3C(0LL, v13);
  }
  return v11;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsBusy(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v12; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v18; // x22

  if ( (byte_4B17E42 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B17E42 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BCAA3C(dispLabelList, effectName);
  v12 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v12 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v12,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v15 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v15[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)v15[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          if ( CommonEffectManager__IsBusy_41396704(v18, effectName, 0LL) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v12;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v12 < size;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsStart(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v12; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v18; // x22

  if ( (byte_4B17E43 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B17E43 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BCAA3C(dispLabelList, effectName);
  v12 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v12 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v12,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v15 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v15[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)v15[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          if ( CommonEffectManager__IsStart_41397620(v18, effectName, 0LL) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v12;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v12 < size;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__MessageEffectStop(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v14; // w21
  int v15; // w28
  bool v16; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x23
  UnityEngine_Object_o *klass; // x24
  UnityEngine_Object_o *monitor; // x24
  UnityEngine_GameObject_o *v21; // x23

  if ( (byte_4B17E41 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, isSkip);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B17E41 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BCAA3C(dispLabelList, effectName);
  v14 = 0;
  v15 = 1;
  v16 = isSkip;
  while ( v14 < dispLabelList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v14,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v18 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v18[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v21 = (UnityEngine_GameObject_o *)v18[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          v15 &= CommonEffectManager__Stop_41404624(v21, effectName, v16, 0, 0LL);
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v14;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v15 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t dispIndex; // w22
  System_Collections_Generic_List_object__o *v15; // x21
  UnityEngine_Object_o *monitor; // x23
  float v17; // s0
  int v18; // w8
  float dispCountTimer; // s0
  float v20; // s1
  float messageSpeed; // s2
  float v22; // s1
  float v23; // s0
  int32_t v24; // w23
  UnityEngine_Object_o *items; // x23
  UILabel_o *v26; // x23
  UILabel_o *v27; // x23
  struct System_Object_array *v28; // x8
  float v29; // s0
  int v30; // w8
  UnityEngine_Object_o *v32; // x20
  __int64 v33; // x1
  UILabel_o *v34; // x20
  System_String_o *syncRoot; // x22
  System_String_o *klass; // x24
  System_String_o *v37; // x0
  System_String_o *v38; // x22
  int v39; // s0
  UILabel_o *v40; // x20
  System_String_o *v41; // x21
  float v42; // s9
  float v43; // s8
  __int64 v44; // x1
  int32_t v45; // w23
  float v46; // s9
  double v47; // d8
  double v48; // d0
  double v49; // d0
  double v50; // d1
  double v51; // d1
  int32_t v52; // w1
  System_String_o *v53; // x0
  double iptr; // [xsp+18h] [xbp-58h] BYREF

  v3 = isMessageDelta;
  if ( (byte_4B17E3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, isMessageDelta, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v11, v12);
    byte_4B17E3C = 1;
  }
  if ( !this->fields.isBusy )
  {
    this->fields.dispCountTimer = -1.0;
    return this->fields.isBusy;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  this->fields.isBusy = 0;
  if ( !dispLabelList )
    goto LABEL_79;
  dispIndex = this->fields.dispIndex;
  while ( 1 )
  {
    if ( dispIndex >= dispLabelList->fields._size )
      return this->fields.isBusy;
    dispLabelList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   dispLabelList,
                                                                   dispIndex,
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( !dispLabelList )
      goto LABEL_79;
    v15 = dispLabelList;
    monitor = (UnityEngine_Object_o *)dispLabelList[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMessageDelta);
    if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      break;
    v17 = *((float *)&v15[4].monitor + 1);
    if ( v17 >= 0.0 )
    {
      if ( v3 )
      {
        v17 = v17 - this->fields.defaultStepTime;
        *((float *)&v15[4].monitor + 1) = v17;
      }
      if ( v17 >= 0.0 )
      {
        this->fields.isBusy = 1;
        return this->fields.isBusy;
      }
      v3 = 0;
      HIDWORD(v15[4].monitor) = 0;
    }
LABEL_44:
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    this->fields.dispIndex = ++dispIndex;
    if ( !dispLabelList )
      goto LABEL_79;
  }
  v18 = (int)v15[4].monitor;
  if ( v18 < 1 )
  {
LABEL_29:
    items = (UnityEngine_Object_o *)v15->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMessageDelta);
    dispLabelList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0LL, 0LL);
    if ( ((unsigned __int8)dispLabelList & 1) != 0 )
    {
      v26 = (UILabel_o *)v15->fields._items;
      dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62401220(
                                                                     (System_String_o *)v15[2].fields._syncRoot,
                                                                     (System_String_o *)v15[3].klass,
                                                                     0LL);
      if ( !v26 )
        goto LABEL_79;
      UILabel__set_text(v26, (System_String_o *)dispLabelList, 0LL);
      *(_QWORD *)&isMessageDelta = v15[3].monitor;
      if ( !isMessageDelta )
        goto LABEL_79;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v27 = *(UILabel_o **)&v15->fields._size;
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62401220(
                                                                       (System_String_o *)v15[2].fields._syncRoot,
                                                                       (System_String_o *)isMessageDelta,
                                                                       0LL);
        if ( !v27 )
          goto LABEL_79;
        UILabel__set_text(v27, (System_String_o *)dispLabelList, 0LL);
      }
    }
    else
    {
      v28 = v15[3].fields._items;
      if ( !v28 )
        goto LABEL_79;
      if ( SLODWORD(v28->bounds) >= 1 )
      {
        dispLabelList = (System_Collections_Generic_List_object__o *)v15->fields._syncRoot;
        if ( !dispLabelList )
          goto LABEL_79;
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float))dispLabelList->klass->vtable._8_unknown.method)(
          dispLabelList,
          dispLabelList->klass->vtable._9_unknown.methodPtr,
          1.0);
      }
    }
    if ( this->fields.isFastMessageRequest || (v29 = *((float *)&v15[4].klass + 1), v29 == 0.0) )
    {
      this->fields.dispCountTimer = -1.0;
    }
    else
    {
      v30 = (int)v15[4].monitor;
      if ( v30 >= 1 )
        this->fields.dispCountTimer = this->fields.dispCountTimer - (float)(v29 * (float)v30);
    }
    goto LABEL_44;
  }
  dispCountTimer = this->fields.dispCountTimer;
  v20 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_21;
  messageSpeed = this->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_21;
  if ( v3 )
  {
    v3 = 0;
    v20 = dispCountTimer + (float)(messageSpeed * this->fields.defaultStepTime);
LABEL_21:
    dispCountTimer = v20;
    this->fields.dispCountTimer = v20;
    goto LABEL_22;
  }
  v3 = 0;
LABEL_22:
  if ( this->fields.isFastMessageRequest )
    goto LABEL_29;
  v22 = *((float *)&v15[4].klass + 1);
  if ( v22 == 0.0 || this->fields.messageSpeed == 0.0 )
    goto LABEL_29;
  v23 = dispCountTimer / v22;
  v24 = v23 == INFINITY ? 0x80000000 : (int)v23;
  if ( v24 >= v18 )
    goto LABEL_29;
  this->fields.isBusy = 1;
  v32 = (UnityEngine_Object_o *)v15->fields._items;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMessageDelta);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    v34 = (UILabel_o *)v15->fields._items;
    syncRoot = (System_String_o *)v15[2].fields._syncRoot;
    klass = (System_String_o *)v15[3].klass;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v33);
    v37 = ScriptMessageLabel__SubstrByDisp(klass, v24, 0LL);
    dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62401220(syncRoot, v37, 0LL);
    if ( v34 )
    {
      UILabel__set_text(v34, (System_String_o *)dispLabelList, 0LL);
      v38 = (System_String_o *)v15[3].monitor;
      if ( v38 )
      {
        if ( v38->fields._stringLength < 1 )
          return this->fields.isBusy;
        v39 = (int)v15[4].monitor;
        v40 = *(UILabel_o **)&v15->fields._size;
        v41 = (System_String_o *)v15[2].fields._syncRoot;
        v42 = (float)v39;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, isMessageDelta);
        v43 = (float)v24 / v42;
        v45 = ScriptMessageLabel__StrlenByDisp(v38, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v44);
        v46 = v43 * (float)v45;
        v47 = v46;
        v48 = modf(v46, &iptr);
        if ( v46 >= 0.0 )
        {
          if ( v48 == 0.5 )
          {
            v49 = iptr;
            v50 = 1.0;
            goto LABEL_69;
          }
          v49 = floor(v47 + 0.5);
        }
        else if ( v48 == -0.5 )
        {
          v49 = iptr;
          v50 = -1.0;
LABEL_69:
          v51 = v49 + v50;
          if ( ((__int64)v49 & 1) != 0 )
            v49 = v51;
        }
        else
        {
          v49 = ceil(v47 + -0.5);
        }
        if ( v49 == INFINITY )
          v52 = 0x80000000;
        else
          v52 = (int)v49;
        v53 = ScriptMessageLabel__SubstrByDisp(v38, v52, 0LL);
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62401220(v41, v53, 0LL);
        if ( v40 )
        {
          UILabel__set_text(v40, (System_String_o *)dispLabelList, 0LL);
          return this->fields.isBusy;
        }
      }
    }
LABEL_79:
    sub_1BCAA3C(dispLabelList, isMessageDelta);
  }
  return this->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B17E39 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10013/*"OnDelayWaitNextTouch"*/, method, v2);
    byte_4B17E39 = 1;
  }
  if ( ScriptMessageCommonManager__IsOpen(this, method) )
  {
    if ( this->fields.isWaitNextTouchRequest )
    {
      if ( !this->fields.isWaitNextTouchDelay )
      {
        nextTouchRootObject = this->fields.nextTouchRootObject;
        this->fields.isWaitNextTouchDelay = 1;
        if ( !nextTouchRootObject )
          sub_1BCAA3C(0LL, v4);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10013/*"OnDelayWaitNextTouch"*/,
          this->fields.defaultKeyDelayTime,
          0LL);
      }
    }
    else if ( this->fields.isTapSkip )
    {
      if ( !this->fields.isTapSkipRequest )
        this->fields.isTapSkipRequest = 1;
    }
    else if ( !this->fields.isFastMessageRequest )
    {
      this->fields.isFastMessageRequest = 1;
    }
  }
  else
  {
    ((void (__fastcall *)(ScriptMessageCommonManager_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_OpenUp.method)(
      this,
      0LL,
      this->klass->vtable._8_IsEnableCloseDown.methodPtr);
  }
}


void __fastcall ScriptMessageCommonManager__OnDelayWaitNextTouch(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitNextTouchRequest = 0;
}


void __fastcall ScriptMessageCommonManager__OnEndUpDownAnime(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  float v9; // s8
  float windowClosePosY; // s9

  if ( (byte_4B17E2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17E2C = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_13;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( Component_object )
    {
      rootObject = this->fields.rootObject;
      if ( rootObject )
      {
        v9 = *(float *)&Component_object[9].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v9 != windowClosePosY, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(rootObject, method);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B17E3A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10013/*"OnDelayWaitNextTouch"*/, method, v2);
    byte_4B17E3A = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_1BCAA3C(0LL, v4);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10013/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B17E38 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10013/*"OnDelayWaitNextTouch"*/, method, v2);
    byte_4B17E38 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_1BCAA3C(0LL, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10013/*"OnDelayWaitNextTouch"*/,
        this->fields.defaultKeyDelayTime,
        0LL);
    }
  }
  else if ( this->fields.isTapSkip )
  {
    if ( !this->fields.isTapSkipRequest )
      this->fields.isTapSkipRequest = 1;
  }
  else if ( !this->fields.isFastMessageRequest )
  {
    this->fields.isFastMessageRequest = 1;
  }
}


void __fastcall ScriptMessageCommonManager__OnShake(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *messageShake; // x20
  float v5; // s8
  __int64 v6; // x0
  __int64 v7; // x1
  float v8; // s0
  __int64 v9; // x2
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E40 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10087/*"OnShake"*/, method, v2);
    byte_4B17E40 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v5 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v8 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( messageShake )
    {
      v11.fields.y = v8;
      v11.fields.z = 0.0;
      v11.fields.x = v5;
      UnityEngine_Transform__set_localPosition(messageShake, v11, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10087/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(v6, v7);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10087/*"OnShake"*/,
    0LL);
  v10 = this->fields.messageShake;
  if ( !byte_4B109C1 )
  {
    v6 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v9);
    byte_4B109C1 = 1;
  }
  if ( !v10 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__OpenUp(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  __int64 v14; // x1
  TweenPosition_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UnityEngine_AnimationCurve_o *windowUpCurve; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B17E2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScriptMessageCommonManager_OpenUp__, v7, v8);
    byte_4B17E2A = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) == 0 )
    goto LABEL_30;
  if ( !Component_object )
    goto LABEL_27;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
  {
LABEL_30:
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( !rootObject )
      goto LABEL_27;
    rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)rootObject,
                                               0LL);
    if ( !rootObject )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
    if ( localPosition.fields.y < this->fields.windowNormalPosY )
    {
      rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
      if ( !rootObject )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
      windowOpenTime = 0.0;
      if ( !isFast )
        windowOpenTime = this->fields.windowOpenTime;
      v26.fields.y = this->fields.windowNormalPosY;
      v26.fields.x = 0.0;
      v26.fields.z = 0.0;
      v15 = TweenPosition__Begin(gameObject, windowOpenTime, v26, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_27;
        v15->fields.method = 0;
        windowUpCurve = this->fields.windowUpCurve;
        v15->fields.animationCurve = windowUpCurve;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v15->fields.animationCurve,
          (int64_t)windowUpCurve,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        UITweener__PlayForward((UITweener_o *)v15, 0LL);
        v23 = Method_ScriptMessageCommonManager_OpenUp__;
        if ( (*((_BYTE *)Method_ScriptMessageCommonManager_OpenUp__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1BCA7F8(Method_ScriptMessageCommonManager_OpenUp__);
        v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 7, 0LL);
      }
      rootObject = this->fields.rootObject;
      if ( rootObject )
      {
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BCAA3C(rootObject, isFast);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__PageScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  float x; // s1
  float textOnlyLineHeight; // s2
  float rubyLineHeight; // s0
  float betweenLineHeight; // s3
  float v14; // s4
  float y; // s1
  int32_t defaultFontSize; // w9
  float defaultTextOnlyLineHeight; // s2
  float v18; // s1
  void *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4B17E3D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, isFast, method);
    byte_4B17E3D = 1;
  }
  x = this->fields.startPosition.fields.x;
  if ( this->fields.dispPosition.fields.x <= x )
  {
    y = this->fields.dispPosition.fields.y;
    rubyLineHeight = this->fields.rubyLineHeight;
  }
  else
  {
    textOnlyLineHeight = this->fields.textOnlyLineHeight;
    rubyLineHeight = this->fields.rubyLineHeight;
    betweenLineHeight = this->fields.betweenLineHeight;
    v14 = this->fields.dispPosition.fields.y;
    this->fields.dispPosition.fields.x = x;
    y = v14 - (float)((float)(textOnlyLineHeight + rubyLineHeight) + betweenLineHeight);
    this->fields.dispPosition.fields.y = y;
  }
  defaultFontSize = this->fields.defaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v18 = (float)(this->fields.startPosition.fields.y - y) + (float)(this->fields.dispSize.fields.y * 0.5);
  this->fields.verticalAlign = 0;
  this->fields.fontSize = defaultFontSize;
  this->fields.scrollPosition.fields.y = v18;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v19 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
    (int64_t)v19,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScriptMessageCommonManager__StartScroll(this, isFast, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__PreProcLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        bool hasRuby,
        bool hasImage,
        bool hasEffect,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  UnityEngine_GameObject_o *v41; // x23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ScriptMessageWindow_o *currentMessageWindow; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  UnityEngine_GameObject_o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *imagePrefab; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  ScriptMessageWindow_o *v79; // x22
  __int64 v80; // x2
  ScriptMessageCommonManager_o *v81; // x22
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  ScriptMessageWindow_o *v90; // x21
  __int64 v91; // x2
  ScriptMessageCommonManager_o *v92; // x21
  __int64 v93; // x2
  ScriptMessageCommonManager_o *v94; // x21
  Il2CppObject *mainPrefab; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  ScriptMessageWindow_o *v102; // x22
  __int64 v103; // x2
  ScriptMessageCommonManager_o *v104; // x22
  __int64 v105; // x2
  ScriptMessageCommonManager_o *v106; // x22

  v10 = this;
  if ( (byte_4B17E1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, label, hasRuby);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11, v12);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v25, v26);
    sub_1BCA7E0(&StringLiteral_5922/*"Effect Parent"*/, v27, v28);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&StringLiteral_5920/*"Effect Child"*/, v29, v30);
    byte_4B17E1B = 1;
  }
  if ( !hasImage )
  {
    if ( hasEffect )
    {
      if ( !label )
        goto LABEL_73;
      p_effect = (ScriptMessageCommonManager_o **)&label->fields.effect;
      effect = (UnityEngine_Object_o *)label->fields.effect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      if ( UnityEngine_Object__op_Equality(effect, 0LL, 0LL) )
      {
        v41 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, label, v39, v40);
        UnityEngine_GameObject___ctor(v41, (System_String_o *)StringLiteral_5922/*"Effect Parent"*/, 0LL);
        *p_effect = (ScriptMessageCommonManager_o *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.effect, (int64_t)v41, v42, v43, v44, v45, v46, v47);
        this = *p_effect;
        if ( !*p_effect )
          goto LABEL_73;
        currentMessageWindow = v10->fields.currentMessageWindow;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        if ( !currentMessageWindow )
          goto LABEL_73;
        ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)this, 0LL);
        v52 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v49, v50, v51);
        UnityEngine_GameObject___ctor(v52, (System_String_o *)StringLiteral_5920/*"Effect Child"*/, 0LL);
        label->fields.frontEffect = v52;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&label->fields.frontEffect,
          (int64_t)v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
        if ( !this )
          goto LABEL_73;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_Transform__SetParent_70175492(
          (UnityEngine_Transform_o *)this,
          v10->fields.frontCommonUIPanel,
          0,
          0LL);
      }
      if ( !hasRuby )
        return;
      goto LABEL_19;
    }
    this = (ScriptMessageCommonManager_o *)v10->fields.mainStock;
    if ( !this )
      goto LABEL_73;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
    {
      mainPrefab = (Il2CppObject *)v10->fields.mainPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               mainPrefab,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1BCA784((PartyOrganizationUtility_o *)&label->fields, (int64_t)this, v96, v97, v98, v99, v100, v101);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      v102 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v102 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v102, (UnityEngine_Transform_o *)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                               (System_Collections_Generic_Stack_T__o *)this,
                                               (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1BCA784((PartyOrganizationUtility_o *)&label->fields, (int64_t)this, v66, v67, v68, v69, v70, v71);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      v104 = this;
      if ( !byte_4B109C1 )
      {
        this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, label, v103);
        byte_4B109C1 = 1;
      }
      if ( v104 )
      {
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v104,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ScriptMessageCommonManager_o *)label->fields.main;
        if ( this )
          goto LABEL_68;
      }
    }
LABEL_73:
    sub_1BCAA3C(this, label);
  }
  this = (ScriptMessageCommonManager_o *)v10->fields.imageStock;
  if ( !this )
    goto LABEL_73;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
  {
    imagePrefab = (Il2CppObject *)v10->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                             imagePrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( label )
      {
        label->fields.image = (struct UISprite_o *)this;
        sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.image, (int64_t)this, v73, v74, v75, v76, v77, v78);
        this = (ScriptMessageCommonManager_o *)label->fields.image;
        if ( this )
        {
          v79 = v10->fields.currentMessageWindow;
          this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( v79 )
          {
            ScriptMessageWindow__AddChildMessageScroll(v79, (UnityEngine_Transform_o *)this, 0LL);
            goto LABEL_34;
          }
        }
      }
    }
    goto LABEL_73;
  }
  this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                           (System_Collections_Generic_Stack_T__o *)this,
                                           (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  if ( !label )
    goto LABEL_73;
  label->fields.image = (struct UISprite_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.image, (int64_t)this, v31, v32, v33, v34, v35, v36);
LABEL_34:
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v81 = this;
  if ( !byte_4B109C1 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, label, v80);
    byte_4B109C1 = 1;
  }
  if ( !v81 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v81,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
LABEL_68:
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v106 = this;
  if ( !byte_4B109C6 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, label, v105);
    byte_4B109C6 = 1;
  }
  if ( !v106 )
    goto LABEL_73;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v106,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  if ( hasRuby )
  {
LABEL_19:
    this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
    if ( !this )
      goto LABEL_73;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
    {
      rubyPrefab = (Il2CppObject *)v10->fields.rubyPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               rubyPrefab,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      label->fields.ruby = (struct UILabel_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&label->fields.ruby,
        (int64_t)Component_object,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
      this = (ScriptMessageCommonManager_o *)label->fields.ruby;
      if ( !this )
        goto LABEL_73;
      v90 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v90 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v90, (UnityEngine_Transform_o *)this, 0LL);
    }
    else
    {
      v59 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      label->fields.ruby = (struct UILabel_o *)v59;
      sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.ruby, (int64_t)v59, v60, v61, v62, v63, v64, v65);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v92 = this;
    if ( !byte_4B109C1 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, label, v91);
      byte_4B109C1 = 1;
    }
    if ( !v92 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v92,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v94 = this;
    if ( !byte_4B109C6 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, label, v93);
      byte_4B109C6 = 1;
    }
    if ( !v94 )
      goto LABEL_73;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v94,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    UILabel__set_fontSize((UILabel_o *)this, v10->fields.rubyFontSize, 0LL);
  }
}


void __fastcall ScriptMessageCommonManager__QuitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B17E25 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9130/*"MessageShake/LogMark/BackLogButton"*/, method, v2);
    byte_4B17E25 = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))rootPanel->klass[1]._1.gc_desc)(
          rootPanel,
          rootPanel->klass[1]._1.name,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v5),
        (rootPanel = this->fields.talkNameManager) == 0LL)
    || (ScriptLineMessage__DeleteLabels(rootPanel, method),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0LL) )
  {
    sub_1BCAA3C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_42532652(transform, (System_String_o *)StringLiteral_9130/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
}


void __fastcall ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_4B17E20 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Push__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Push__, v9, v10);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B17E20 = 1;
  }
  if ( !label )
    goto LABEL_25;
  p_fields = (ScriptMessageCommonManager_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_25;
    UILabel__RemoveFromDynamicFontList((UILabel_o *)this, 0LL);
    this = v4[50];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_Stack_object___Push(
      (System_Collections_Generic_Stack_T__o *)this,
      (Il2CppObject *)*p_fields,
      (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&label->fields, 0LL, v15, v16, v17, v18, v19, v20);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = (ScriptMessageCommonManager_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[51];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_Stack_object___Push(
      (System_Collections_Generic_Stack_T__o *)this,
      (Il2CppObject *)*p_ruby,
      (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.ruby, 0LL, v23, v24, v25, v26, v27, v28);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    this = (ScriptMessageCommonManager_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
        this,
        this->klass->vtable._9_CloseDown.methodPtr,
        0.0);
      this = v4[52];
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)*p_image,
          (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&label->fields.image, 0LL, v31, v32, v33, v34, v35, v36);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_1BCAA3C(this, label);
  }
LABEL_23:
  ScriptMessageLabel__Release(label, 0LL);
  this = v4[53];
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_Stack_object___Push(
    (System_Collections_Generic_Stack_T__o *)this,
    (Il2CppObject *)label,
    (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptMessageCommonManager__RequestFastMessage(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 1;
}


void __fastcall ScriptMessageCommonManager__ResetLongPress(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *touchPress; // x0

  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_1BCAA3C(0LL, method);
  UITouchPress__PressReset(touchPress, 0LL);
  this->fields.isFastMessageRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ResetMessageWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentMessageWindow; // x21
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  const MethodInfo *v15; // x1
  struct ScriptMessageWindow_o *v16; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ScriptMessageWindow_o *v24; // x8
  struct UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Object_o *v33; // x22
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *v36; // x21
  struct ScriptMessageWindow_o *v37; // x8
  struct UnityEngine_GameObject_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct ScriptMessageWindow_o *v45; // x8
  struct UnityEngine_GameObject_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct ScriptMessageWindow_o *v59; // x8
  int64_t talkNameMessageRoot; // x1
  struct ScriptMessageWindow_o *v61; // x8
  struct ScriptLineMessage_o *talkNameManager; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct ScriptMessageWindow_o *v69; // x8
  struct ScriptLineMessage_o *v70; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct ScriptMessageWindow_o *v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // x6
  const MethodInfo *v85; // x1

  if ( (byte_4B17E36 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17E36 = 1;
  }
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Equality(currentMessageWindow, 0LL, 0LL) )
  {
    defaultMessageWindow = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = defaultMessageWindow;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentMessageWindow,
      (int64_t)defaultMessageWindow,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v16 = this->fields.defaultMessageWindow;
    if ( v16 )
    {
      messageMainLabel = (char *)v16->fields.messageMainLabel;
      if ( messageMainLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
        this->fields.mainPrefab = gameObject;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mainPrefab,
          (int64_t)gameObject,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        v24 = this->fields.defaultMessageWindow;
        if ( v24 )
        {
          messageMainLabel = (char *)v24->fields.messageRubyLabel;
          if ( messageMainLabel )
          {
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
            this->fields.rubyPrefab = v25;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.rubyPrefab,
              (int64_t)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1BCAA3C(messageMainLabel, v15);
  }
  v32 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v33 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Equality(v32, v33, 0LL) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v34);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, v15);
    messageMainLabel = (char *)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_33;
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)messageMainLabel,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    UnityEngine_Object__Destroy_70154244(v36, 0LL);
    v37 = this->fields.defaultMessageWindow;
    if ( !v37 )
      goto LABEL_33;
    messageMainLabel = (char *)v37->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.mainPrefab = v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainPrefab, (int64_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = this->fields.defaultMessageWindow;
    if ( !v45 )
      goto LABEL_33;
    messageMainLabel = (char *)v45->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.rubyPrefab = v46;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyPrefab, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    v59 = this->fields.defaultMessageWindow;
    if ( !v59 )
      goto LABEL_33;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameMessageRoot = (int64_t)v59->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 7) = talkNameMessageRoot;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(messageMainLabel + 56),
      talkNameMessageRoot,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v61 = this->fields.defaultMessageWindow;
    if ( !v61 )
      goto LABEL_33;
    messageMainLabel = (char *)v61->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !talkNameManager )
      goto LABEL_33;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&talkNameManager->fields.mainPrefab,
      (int64_t)messageMainLabel,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v69 = this->fields.defaultMessageWindow;
    if ( !v69 )
      goto LABEL_33;
    messageMainLabel = (char *)v69->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v70 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !v70 )
      goto LABEL_33;
    v70->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v70->fields.rubyPrefab,
      (int64_t)messageMainLabel,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_33;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !messageMainLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0LL);
    v77 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v77;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentMessageWindow,
      (int64_t)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v84);
    ScriptMessageCommonManager__ResetScroll(this, v85);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptMessageCommonManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v9; // x8
  float v10; // s0
  float v11; // s2
  struct ScriptMessageWindow_o *v12; // x8
  float y; // s10
  float v14; // s8
  float v15; // s9
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B17E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method, v2);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17E3F = 1;
  }
  currentMessageWindow = v3->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  v9 = v3->fields.currentMessageWindow;
  if ( !v9 )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)v9->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (v12 = v3->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v12->fields.messageScroll) == 0LL
    || (y = v3->fields.dispSize.fields.y,
        v14 = v10,
        v15 = v11,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  v16.fields.y = y * 0.5;
  v16.fields.x = v14;
  v16.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__ReturnScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        bool isScrollStop,
        const MethodInfo *method)
{
  float y; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s9

  y = this->fields.dispSize.fields.y;
  v5 = this->fields.beforeTextOnlyLineHeight - this->fields.dispPosition.fields.y;
  v6 = v5 - this->fields.scrollPosition.fields.y;
  v7 = y - (float)(y * 0.5);
  if ( v6 > v7 )
  {
    this->fields.scrollPosition.fields.y = (float)(v5 - y) + (float)(y * 0.5);
    if ( isScrollStop )
    {
      this->fields.isFastMessageRequest = 0;
      this->fields.isScroll = 0;
    }
    else
    {
      ScriptMessageCommonManager__StartScroll(this, isFast, (const MethodInfo *)isScrollStop);
    }
  }
  return v6 > v7;
}


bool __fastcall ScriptMessageCommonManager__ReturnScroll2(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  float y; // s0
  float v4; // s2
  float v5; // s8
  float v6; // s9

  y = this->fields.dispSize.fields.y;
  v4 = (float)(this->fields.beforeTextOnlyLineHeight + this->fields.beforeTextOnlyLineHeight)
     - this->fields.dispPosition.fields.y;
  v5 = v4 - this->fields.scrollPosition.fields.y;
  v6 = y - (float)(y * 0.5);
  if ( v5 > v6 )
  {
    this->fields.scrollPosition.fields.y = (float)(v4 - y) + (float)(y * 0.5);
    ScriptMessageCommonManager__StartScroll(this, isFast, method);
  }
  return v5 > v6;
}


void __fastcall ScriptMessageCommonManager__ReturnText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  float betweenLineHeight; // s4
  float y; // s3
  float x; // s2
  float v5; // s0

  betweenLineHeight = this->fields.betweenLineHeight;
  y = this->fields.dispPosition.fields.y;
  x = this->fields.startPosition.fields.x;
  v5 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v5;
  this->fields.dispPosition.fields.x = x;
  this->fields.dispPosition.fields.y = y - (float)(v5 + betweenLineHeight);
  ScriptMessageCommonManager__SetDefaultState(this, method);
}


void __fastcall ScriptMessageCommonManager__SetActiveAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        bool instant,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptMessageCommonManager__SetActiveButton(this, this->fields.autoMessageButton, isOn, instant, v4);
}


void __fastcall ScriptMessageCommonManager__SetActiveBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        bool instant,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptMessageCommonManager__SetActiveButton(this, this->fields.backLogButton, isOn, instant, v4);
}


void __fastcall ScriptMessageCommonManager__SetActiveButton(
        ScriptMessageCommonManager_o *this,
        UICommonButton_o *button,
        bool isOn,
        bool instant,
        const MethodInfo *method)
{
  float v7; // s8
  float v8; // s9
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !button
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)button,
                                                 0LL)) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, button);
  }
  if ( isOn )
    v7 = 1.0;
  else
    v7 = 0.0;
  if ( instant )
    v8 = 0.0;
  else
    v8 = 0.2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(gameObject, v8, v7, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetAlignedDispPosition(
        ScriptMessageCommonManager_o *this,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  int32_t horizontalAlign; // w8
  float v5; // s0
  float alignRightBase; // s0
  int v7; // w8

  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      alignRightBase = this->fields.alignRightBase;
      v7 = this->fields.fontSize * lineLength;
    }
    else
    {
      v5 = 0.0;
      if ( horizontalAlign != 1 )
      {
LABEL_7:
        this->fields.dispPosition.fields.x = v5;
        return;
      }
      alignRightBase = this->fields.alignCenterBase;
      v7 = this->fields.fontSize * lineLength / 2;
    }
    v5 = alignRightBase - (float)v7;
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetAutoMessageSprite(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v8; // x8

  if ( (byte_4B17E47 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17638/*"btn_auto_on"*/, isOn, method);
    sub_1BCA7E0(&StringLiteral_17637/*"btn_auto_off"*/, v5, v6);
    byte_4B17E47 = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_1BCAA3C(0LL, isOn);
  v8 = (System_String_o **)&StringLiteral_17638/*"btn_auto_on"*/;
  if ( !isOn )
    v8 = (System_String_o **)&StringLiteral_17637/*"btn_auto_off"*/;
  UISprite__set_spriteName(autoMessageSprite, *v8, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetBetweenLineHeight(
        ScriptMessageCommonManager_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1BCAA3C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptMessageCommonManager__SetDefaultState(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  float defaultTextOnlyLineHeight; // s0
  float defaultBetweenLineHeight; // s1
  void *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4B17E2D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17E2D = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  *(_QWORD *)&this->fields.fontSize = (unsigned int)this->fields.defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  v11 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_1BCAA3C(0LL, enable);
  UICommonButton__SetButtonEnable(autoMessageButton, enable, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetEnableBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *backLogButton; // x0

  backLogButton = this->fields.backLogButton;
  if ( !backLogButton )
    sub_1BCAA3C(0LL, enable);
  UICommonButton__SetButtonEnable(backLogButton, enable, 1, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetFaceIconContentSize(
        ScriptMessageCommonManager_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScriptMessageCommonManager__SetFontSize(
        ScriptMessageCommonManager_o *this,
        System_String_o *sizeName,
        System_String_o *verticalAlignString,
        const MethodInfo *method)
{
  int32_t defaultFontSize; // w22
  int32_t VerticalAlignFromString; // w0
  int32_t fontSize; // s0
  float textOnlyLineHeight; // s1
  float v11; // s0

  if ( (byte_4B17E30 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, sizeName, verticalAlignString);
    byte_4B17E30 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, sizeName);
  this->fields.fontSize = ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0LL);
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlignString, 0LL);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v11 = (float)fontSize;
  if ( textOnlyLineHeight < v11 )
    this->fields.textOnlyLineHeight = v11;
}


void __fastcall ScriptMessageCommonManager__SetFontType(
        ScriptMessageCommonManager_o *this,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4B17E2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, font, method);
    byte_4B17E2F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, font);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_1BCAA3C(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)defaultFontType, v7, v8, v9, v10, v11, v12);
}


void __fastcall ScriptMessageCommonManager__SetForcedDisableTurnPage(
        ScriptMessageCommonManager_o *this,
        bool flag,
        bool force,
        const MethodInfo *method)
{
  this->fields.isForcedDisableTurnPage = flag;
  this->fields.isForcedEnableTurnPage = force & ~flag & 1;
}


void __fastcall ScriptMessageCommonManager__SetHorizontalAlign(
        ScriptMessageCommonManager_o *this,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  this->fields.horizontalAlign = horizontalAlign;
}


void __fastcall ScriptMessageCommonManager__SetMaxFontSize(
        ScriptMessageCommonManager_o *this,
        int32_t fontSize,
        const MethodInfo *method)
{
  this->fields.maxFontSize = fontSize;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetMessageOffMode(
        ScriptMessageCommonManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q1
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOff = flag;
  if ( !rootPanel )
    sub_1BCAA3C(0LL, flag);
  LODWORD(v3) = 1.0;
  LODWORD(v4) = 0;
  if ( !this->fields.isMessageOut || flag )
    *(float *)&v3 = 0.0;
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, long double, long double))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v3,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetMessageSpeedForcedNormal(
        ScriptMessageCommonManager_o *this,
        bool isForced,
        const MethodInfo *method)
{
  this->fields.isMessageSpeedForcedNormal = isForced;
  ScriptMessageCommonManager__SetTextScrollSpeed(this, (const MethodInfo *)isForced);
}


void __fastcall ScriptMessageCommonManager__SetMessageVerticalAlign(
        ScriptMessageCommonManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.messageAlign = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetMessageWindowCollider(
        ScriptMessageCommonManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *currentMessageWindow; // x0

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_1BCAA3C(0LL, isEnable);
  ScriptMessageWindow__SetEnabledCollider(currentMessageWindow, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B17E23 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    byte_4B17E23 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(rootObject, 0LL, 0LL) )
  {
    v7 = this->fields.rootObject;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScriptMessageCommonManager__SetScreen(
        ScriptMessageCommonManager_o *this,
        int32_t x,
        int32_t y,
        int32_t w,
        int32_t h,
        bool isWindowBack,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *rootPanel; // x0
  float v16; // s0
  float v17; // s1
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v19; // x8
  int v20; // s2
  float rubyLineHeight; // s0
  struct ScriptMessageWindow_o *v22; // x8
  UIPanel_o *dispPanel; // x22
  struct ScriptMessageWindow_o *v24; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  long double v26; // q0
  struct ScriptMessageWindow_o *v27; // x8
  float v28; // s0
  UnityEngine_Vector4_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17E26 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, *(_QWORD *)&x, *(_QWORD *)&y);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B17E26 = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    goto LABEL_33;
  rootPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, bool, const MethodInfo *, float))rootPanel->klass[1]._1.castClass)(
                                            rootPanel,
                                            rootPanel->klass[1]._1.declaringType,
                                            *(_QWORD *)&y,
                                            *(_QWORD *)&w,
                                            *(_QWORD *)&h,
                                            isWindowBack,
                                            method,
                                            0.0);
  if ( w )
  {
    rootPanel = this->fields.messageBase;
    this->fields.dispSize.fields.x = (float)w;
    this->fields.dispSize.fields.y = (float)h;
    if ( !rootPanel )
      goto LABEL_33;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_33;
    v16 = (float)x;
    v17 = (float)y;
  }
  else if ( isWindowBack )
  {
    currentMessageWindow = this->fields.currentMessageWindow;
    if ( !currentMessageWindow )
      goto LABEL_33;
    rootPanel = this->fields.messageBase;
    this->fields.dispSize = currentMessageWindow->fields.defaultWindowDispSize;
    if ( !rootPanel )
      goto LABEL_33;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    v19 = this->fields.currentMessageWindow;
    if ( !v19 || !rootPanel )
      goto LABEL_33;
    v16 = v19->fields.defaultWindowDispCenter.fields.x;
    v17 = v19->fields.defaultWindowDispCenter.fields.y;
  }
  else
  {
    rootPanel = this->fields.messageBase;
    this->fields.dispSize = this->fields.defaultAllDispSize;
    if ( !rootPanel )
      goto LABEL_33;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_33;
    v16 = this->fields.defaultAllDispCenter.fields.x;
    v17 = this->fields.defaultAllDispCenter.fields.y;
  }
  v20 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v16, 0LL);
  rubyLineHeight = this->fields.rubyLineHeight;
  v22 = this->fields.currentMessageWindow;
  this->fields.startPosition.fields.x = 0.0;
  this->fields.startPosition.fields.y = -(float)(rubyLineHeight + 2.0);
  this->fields.isWindowBack = isWindowBack;
  if ( !v22 )
    goto LABEL_33;
  dispPanel = v22->fields.dispPanel;
  rootPanel = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&x);
  if ( !dispPanel
    || (v30.fields.w = this->fields.dispSize.fields.y,
        v30.fields.y = 0.0,
        v30.fields.z = (float)ManagerConfig_TypeInfo->static_fields->WIDTH,
        v30.fields.x = 0.0,
        UIPanel__set_baseClipRegion(dispPanel, v30, 0LL),
        (v24 = this->fields.currentMessageWindow) == 0LL) )
  {
LABEL_33:
    sub_1BCAA3C(rootPanel, *(_QWORD *)&x);
  }
  messageWindowBack = (UnityEngine_Object_o *)v24->fields.messageWindowBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&x);
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0LL, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    v27 = this->fields.currentMessageWindow;
    if ( v27 )
    {
      rootPanel = (UnityEngine_GameObject_o *)v27->fields.messageWindowBack;
      if ( rootPanel )
      {
        LODWORD(v26) = 0;
        if ( isWindowBack )
          *(float *)&v26 = 1.0;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          v26);
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  ScriptMessageCommonManager__ClearText(this, *(const MethodInfo **)&x);
  v28 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v28 == INFINITY )
    return 0x80000000;
  else
    return (int)v28;
}


void __fastcall ScriptMessageCommonManager__SetSpeed(
        ScriptMessageCommonManager_o *this,
        float n,
        const MethodInfo *method)
{
  bool v3; // nf
  float defaultStepTime; // s0

  v3 = n < 0.0;
  if ( n <= 0.0 )
  {
    defaultStepTime = 0.0;
    if ( v3 )
      defaultStepTime = this->fields.defaultStepTime;
  }
  else
  {
    defaultStepTime = 1.0 / n;
  }
  this->fields.stepTime = defaultStepTime;
}


bool __fastcall ScriptMessageCommonManager__SetTalkName(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        System_String_o *classname,
        System_String_o *charaname,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x21
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v34; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v36; // q0
  struct ScriptLineMessage_o *talkNameManager; // x9
  float x; // s0
  struct ScriptMessageWindow_o *v39; // x8
  float v40; // s1
  int talkNameBackDefaultWidth; // w9
  float v42; // s0
  int v43; // w10
  struct ScriptMessageWindow_o *v44; // x8
  struct ScriptMessageWindow_o *v45; // x8
  UnityEngine_GameObject_c *klass; // x8
  float v47; // s1
  float betweenLineHeight; // s4
  float y; // s3
  float v50; // s2
  float v51; // s0
  const MethodInfo *v52; // x1
  struct ScriptMessageWindow_o *v53; // x8
  long double v54; // q0

  if ( (byte_4B17E37 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, imageName, classname);
    sub_1BCA7E0(&StringLiteral_171/*" 1.5]"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16162/*"[image "*/, v13, v14);
    byte_4B17E37 = 1;
  }
  v15 = System_String__Concat_62401220(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v15, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v16);
    return 1;
  }
  this->fields.talkName = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  this->fields.talkNameOnly = charaname;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.talkNameOnly,
    (int64_t)charaname,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  isWindowBack = this->fields.isWindowBack;
  this->fields.talkNameIndex = index;
  if ( isWindowBack )
  {
    currentMessageWindow = this->fields.currentMessageWindow;
    if ( !currentMessageWindow )
      goto LABEL_39;
    talkNameRootObject = currentMessageWindow->fields.talkNameRootObject;
    if ( !talkNameRootObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(talkNameRootObject, 1, 0LL);
    talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
    if ( !talkNameRootObject )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, System_String_o *, _QWORD, _QWORD, _QWORD, __int64, Il2CppClass *))&talkNameRootObject->klass[1]._1.this_arg.bits)(
                                                       talkNameRootObject,
                                                       v15,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       1LL,
                                                       talkNameRootObject->klass[1]._1.element_class);
    v34 = this->fields.currentMessageWindow;
    if ( !v34 )
      goto LABEL_39;
    talkNameBack = (UnityEngine_Object_o *)v34->fields.talkNameBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    talkNameRootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(talkNameBack, 0LL, 0LL);
    if ( ((unsigned __int8)talkNameRootObject & 1) != 0 )
    {
      talkNameManager = this->fields.talkNameManager;
      if ( !talkNameManager )
        goto LABEL_39;
      x = talkNameManager->fields.maxDispPosition.fields.x;
      v39 = this->fields.currentMessageWindow;
      if ( x < talkNameManager->fields.dispPosition.fields.x )
        x = talkNameManager->fields.dispPosition.fields.x;
      if ( !v39 )
        goto LABEL_39;
      v40 = talkNameManager->fields.startPosition.fields.x;
      talkNameBackDefaultWidth = v39->fields.talkNameBackDefaultWidth;
      v42 = x - v40;
      v43 = (int)v42;
      if ( v42 == INFINITY )
        v43 = 0x80000000;
      if ( v42 > (float)talkNameBackDefaultWidth )
        talkNameBackDefaultWidth = v43;
      if ( !talkNameBack )
        goto LABEL_39;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((talkNameBackDefaultWidth + v39->fields.talkNameBackBaseWidth) & 1)
      + talkNameBackDefaultWidth
      + v39->fields.talkNameBackBaseWidth,
        0LL);
    }
    v44 = this->fields.currentMessageWindow;
    if ( !v44 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v44->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
    if ( imageName )
    {
      UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0LL);
      v45 = this->fields.currentMessageWindow;
      if ( v45 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v45->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          klass = talkNameRootObject->klass;
          LODWORD(v36) = 1.0;
          goto LABEL_34;
        }
      }
LABEL_39:
      sub_1BCAA3C(talkNameRootObject, v30);
    }
  }
  else
  {
    if ( imageName )
      v15 = System_String__Concat_62414484(
              (System_String_o *)StringLiteral_16162/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_171/*" 1.5]"*/,
              v15,
              0LL);
    v47 = this->fields.startPosition.fields.x + -50.0;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = v47;
    ScriptMessageCommonManager__UpdateLabels(this, v15, 1, 0, v31);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v50 = this->fields.startPosition.fields.x;
    v51 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v51;
    this->fields.dispPosition.fields.x = v50;
    this->fields.dispPosition.fields.y = y - (float)(v51 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v52);
    v53 = this->fields.currentMessageWindow;
    if ( !v53 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v53->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
  }
  klass = talkNameRootObject->klass;
  LODWORD(v36) = 0;
LABEL_34:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v36);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_39;
  LODWORD(v54) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v54 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    v54);
  return 1;
}


void __fastcall ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UISprite_o *talkNameBack; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *talkNameAtlas; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t mAtlas; // x1
  int64_t mSpriteName; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UISpriteData_o *AtlasSprite; // x0

  v4 = this;
  if ( (byte_4B17E34 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, imageName, method);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B17E34 = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_21;
  talkNameBack = currentMessageWindow->fields.talkNameBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, imageName);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)talkNameBack, 0LL, 0LL) )
  {
    talkNameAtlas = (UnityEngine_Object_o *)v4->fields.talkNameAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !talkNameBack )
        goto LABEL_21;
      mAtlas = (int64_t)talkNameBack->fields.mAtlas;
      v4->fields.talkNameAtlas = (struct UIAtlas_o *)mAtlas;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.talkNameAtlas, mAtlas, v11, v12, v13, v14, v15, v16);
      mSpriteName = (int64_t)talkNameBack->fields.mSpriteName;
      v4->fields.talkNameSpriteName = (struct System_String_o *)mSpriteName;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields.talkNameSpriteName,
        mSpriteName,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    this = (ScriptMessageCommonManager_o *)System_String__IsNullOrEmpty(imageName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( talkNameBack )
      {
        UISprite__set_atlas(talkNameBack, v4->fields.talkNameAtlas, 0LL);
        UISprite__set_spriteName(talkNameBack, v4->fields.talkNameSpriteName, 0LL);
LABEL_18:
        AtlasSprite = UISprite__GetAtlasSprite(talkNameBack, 0LL);
        if ( AtlasSprite )
          UIWidget__set_height(
            (UIWidget_o *)talkNameBack,
            (AtlasSprite->fields.height & 1) + AtlasSprite->fields.height,
            0LL);
        return;
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, imageName);
      this = (ScriptMessageCommonManager_o *)AtlasManager__SetMark(talkNameBack, imageName, 0LL);
      if ( talkNameBack )
        goto LABEL_18;
    }
LABEL_21:
    sub_1BCAA3C(this, imageName);
  }
}


void __fastcall ScriptMessageCommonManager__SetTapSkip(
        ScriptMessageCommonManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isTapSkip = flag;
}


void __fastcall ScriptMessageCommonManager__SetText(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  ScriptMessageCommonManager__ClearText(this, (const MethodInfo *)text);
  ScriptMessageCommonManager__UpdateLabels(this, text, 1, 0, v5);
}


void __fastcall ScriptMessageCommonManager__SetTextScrollSpeed(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float defaultScrollTime; // s0
  __int64 v7; // x1
  float ScenarioTextSpeed; // s8
  BalanceConfig_c *v9; // x0
  float ScenarioTextSpeedDefault; // s9
  bool v11; // nf
  __int64 v12; // x1
  float v13; // s0
  __int64 v14; // x1
  float ScenarioScrollSpeed; // s0
  BalanceConfig_c *v16; // x0
  float v17; // s8
  float ScenarioScrollSpeedHigh; // s9
  float v19; // s0
  float fastScrollTime; // s1

  if ( (byte_4B17E2E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    byte_4B17E2E = 1;
  }
  if ( this->fields.isMessageSpeedForcedNormal )
  {
    defaultScrollTime = this->fields.defaultScrollTime;
    this->fields.messageSpeed = 1.0;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0LL);
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      v9 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v9->static_fields->ScenarioTextSpeedDefault;
    v11 = OptionManager__GetScenarioTextSpeed(0LL) < BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh;
    v13 = 0.0;
    if ( v11 )
      v13 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v13;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v12);
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
    v16 = BalanceConfig_TypeInfo;
    v17 = ScenarioScrollSpeed;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
      v16 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v16->static_fields->ScenarioScrollSpeedHigh;
    v19 = OptionManager__GetScenarioScrollSpeed(0LL);
    if ( v17 >= ScenarioScrollSpeedHigh )
      defaultScrollTime = this->fields.fastScrollTime;
    else
      defaultScrollTime = this->fields.defaultScrollTime
                        / (float)(v19 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
  }
  fastScrollTime = this->fields.fastScrollTime;
  this->fields.scrollSpeed = defaultScrollTime;
  if ( defaultScrollTime < fastScrollTime )
    this->fields.scrollSpeed = fastScrollTime;
  this->fields.stepTime = this->fields.defaultStepTime;
}


void __fastcall ScriptMessageCommonManager__Shake(
        ScriptMessageCommonManager_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0LL) + duration;
  if ( !this )
    sub_1BCAA3C(this, method);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  ScriptMessageCommonManager__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__StartScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  float v10; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ScriptMessageWindow_o *v28; // x8
  __int64 v29; // x1
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v31; // x8

  v4 = this;
  if ( (byte_4B17E3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenPosition___, isFast, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    this = (ScriptMessageCommonManager_o *)sub_1BCA7E0(&StringLiteral_6105/*"EndScroll"*/, v7, v8);
    byte_4B17E3E = 1;
  }
  v9 = 316LL;
  if ( isFast )
    v9 = 172LL;
  v10 = *(float *)((char *)&v4->klass + v9);
  if ( v10 > 0.0 )
  {
    currentMessageWindow = v4->fields.currentMessageWindow;
    v4->fields.isScroll = 1;
    if ( currentMessageWindow )
    {
      this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (ScriptMessageCommonManager_o *)TweenPosition__Begin(gameObject, v10, v4->fields.scrollPosition, 0LL);
        if ( this )
        {
          v13 = this;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
          LODWORD(v13->fields.rootPanel) = 3;
          v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          v13->fields.messageShake = (struct UnityEngine_Transform_o *)v14;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v13->fields.messageShake,
            (int64_t)v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          v21 = StringLiteral_6105/*"EndScroll"*/;
          v13->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_6105/*"EndScroll"*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v13->fields.defaultMessageWindow,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  v28 = v4->fields.currentMessageWindow;
  if ( !v28 )
    goto LABEL_21;
  this = (ScriptMessageCommonManager_o *)v28->fields.messageScroll;
  if ( !this )
    goto LABEL_21;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  v31 = v4->fields.currentMessageWindow;
  if ( !v31
    || (this = (ScriptMessageCommonManager_o *)v31->fields.messageScroll) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(this, isFast);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.scrollPosition, 0LL);
  v4->fields.isFastMessageRequest = 0;
  v4->fields.isScroll = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__UpdateLabels(
        ScriptMessageCommonManager_o *this,
        System_String_o *txt,
        bool isStretch,
        bool isFoward,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x22
  __int64 rootPanel; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  long double v61; // q0
  float stepTime; // s8
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Text_StringBuilder_o *v66; // x23
  System_Text_StringBuilder_o **v67; // x24
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_String_o *defaultColorTag; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x26
  int32_t v89; // w28
  int v90; // w25
  _BOOL4 isEffectMessage; // w27
  int32_t v92; // w29
  System_String_o *v93; // x27
  System_String_o *v94; // x0
  int32_t BraceIndex; // w0
  System_String_o *v96; // x0
  __int64 v97; // x1
  int32_t v98; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int32_t v107; // w27
  System_Text_StringBuilder_o *v108; // x29
  float betweenLineHeight; // s4
  float y; // s3
  float x; // s2
  float v112; // s0
  const MethodInfo *v113; // x1
  __int64 v114; // x1
  __int64 v115; // x2
  ScriptReplaceString_c *v116; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *v118; // x27
  struct System_String_o *v119; // x1
  const MethodInfo *v120; // x4
  bool v121; // w8
  char v122; // w3
  ScriptMessageCommonManager_o *v123; // x0
  System_String_o *v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_String_o *v131; // x1
  PartyOrganizationUtility_o *v132; // x0
  System_String_o *v133; // x27
  int32_t v134; // w1
  int32_t v135; // w2
  System_String_o *v136; // x27
  System_String_o *v137; // x0
  __int64 *v138; // x8
  __int64 v139; // x1
  float v140; // s4
  float v141; // s3
  float v142; // s2
  float v143; // s0
  const MethodInfo *v144; // x1
  __int64 v145; // x1
  System_String_o *v146; // x27
  System_String_array *v147; // x27
  struct System_String_o *v148; // x1
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  System_String_o *v155; // x0
  __int64 v156; // x1
  System_Text_StringBuilder_o *v157; // x20
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-88h]
  System_String_o **colorTag; // [xsp+10h] [xbp-80h]
  System_String_o *text; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B17E22 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, txt, isStretch);
    sub_1BCA7E0(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v8, v9);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v10, v11);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__, v16, v17);
    sub_1BCA7E0(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__, v18, v19);
    sub_1BCA7E0(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_23358/*"servantName"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_20256/*"i"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15993/*"[*"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_16199/*"[~1]"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16134/*"[^"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_22986/*"r"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_19122/*"effectmessage"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_20447/*"image"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_16198/*"[~"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v50, v51);
    byte_4B17E22 = 1;
  }
  text = 0LL;
  v52 = sub_1BCAA2C(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo, txt, isStretch, isFoward);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass113_0_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_107;
  *(_QWORD *)(v52 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 24), (int64_t)this, v55, v56, v57, v58, v59, v60);
  *(_BYTE *)(v52 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (__int64)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_107;
  stepTime = 0.0;
  LODWORD(v61) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v61 = 0.0;
  (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)rootPanel + 440LL))(
    rootPanel,
    *(_QWORD *)(*(_QWORD *)rootPanel + 448LL),
    v61);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v52 + 32) = stepTime;
  v66 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v63, v64, v65);
  System_Text_StringBuilder___ctor(v66, 0LL);
  *(_QWORD *)(v52 + 16) = v66;
  v67 = (System_Text_StringBuilder_o **)(v52 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 16), (int64_t)v66, v68, v69, v70, v71, v72, v73);
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v52 + 40) = defaultColorTag;
  colorTag = (System_String_o **)(v52 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 40), (int64_t)defaultColorTag, v75, v76, v77, v78, v79, v80);
  v84 = sub_1BCAA2C(ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v81, v82, v83);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    (ScriptMessageCommonManager_ProcAddLabel_o *)v84,
    (Il2CppObject *)v52,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0LL);
  v88 = sub_1BCAA2C(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, v85, v86, v87);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    (ScriptMessageCommonManager_ProcAddLabel2_o *)v88,
    (Il2CppObject *)v52,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
    goto LABEL_107;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_105;
  v89 = 0;
  v90 = 0;
  p_defaultColorTag = &this->fields.defaultColorTag;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = System_String__get_Chars(txt, v89, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v54);
      v107 = v89 + 1;
      rootPanel = ScriptMessageLabel__GetBraceIndex(txt, v89 + 1, 0LL);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_58;
      v92 = rootPanel;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v54);
      rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v107, 0LL);
      if ( !rootPanel )
        goto LABEL_107;
      v93 = (System_String_o *)rootPanel;
      if ( System_String__Equals_62409536((System_String_o *)rootPanel, (System_String_o *)StringLiteral_19122/*"effectmessage"*/, 0LL) )
      {
        v94 = System_String__Substring_62420224(txt, v89 + 15, v90 + v92 - 15, 0LL);
        rootPanel = System_String__op_Equality(v94, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
        if ( (rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = System_String__Equals_62409536(v93, (System_String_o *)StringLiteral_22986/*"r"*/, 0LL);
        if ( (rootPanel & 1) != 0 )
        {
          if ( !v88 )
            goto LABEL_107;
          (*(void (__fastcall **)(_QWORD, void *, _QWORD))(v88 + 24))(
            *(_QWORD *)(v88 + 64),
            StringLiteral_116/*" "*/,
            *(_QWORD *)(v88 + 40));
          betweenLineHeight = this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          x = this->fields.startPosition.fields.x;
          v112 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          this->fields.beforeTextOnlyLineHeight = v112;
          this->fields.dispPosition.fields.x = x;
          this->fields.dispPosition.fields.y = y - (float)(v112 + betweenLineHeight);
          ScriptMessageCommonManager__SetDefaultState(this, v113);
        }
      }
      goto LABEL_57;
    }
    v107 = v89 + 1;
LABEL_58:
    v90 = -v107;
    v89 = v107;
    if ( v107 >= txt->fields._stringLength )
      goto LABEL_105;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v108 = *v67;
    rootPanel = System_String__get_Chars(txt, v89, 0LL);
    if ( !v108 )
      goto LABEL_107;
    v107 = v89 + 1;
    rootPanel = (__int64)System_Text_StringBuilder__Append_61565444(v108, rootPanel, 0LL);
    goto LABEL_58;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v54);
  v107 = v89 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v89 + 1, 0LL);
  if ( BraceIndex == -1 )
  {
    rootPanel = (__int64)*v67;
    if ( !*v67 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_61563116(
                           (System_Text_StringBuilder_o *)rootPanel,
                           (System_String_o *)StringLiteral_15978/*"["*/,
                           0LL);
    goto LABEL_58;
  }
  v92 = BraceIndex;
  rootPanel = System_String__get_Chars(txt, v107, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    v96 = System_String__Substring_62420224(txt, v89 + 2, v90 + v92 - 2, 0LL);
    v98 = System_Int32__Parse(v96, 0LL);
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v97);
    String = ScriptReplaceString__GetString(v98, 0LL);
    TagSplitString = System_String__Concat_62401220(String, (System_String_o *)StringLiteral_15997/*"[-]"*/, 0LL);
    goto LABEL_54;
  }
  rootPanel = System_String__get_Chars(txt, v107, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v114);
    if ( !byte_4B17C7E )
    {
      sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v114, v115);
      byte_4B17C7E = 1;
    }
    v116 = ScriptReplaceString_TypeInfo;
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v114);
      v116 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v116->static_fields->playerGenderIndex;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v114);
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v89 + 2, playerGenderIndex, 0LL);
LABEL_54:
    v118 = TagSplitString;
    v119 = *(struct System_String_o **)(v52 + 40);
    this->fields.defaultColorTag = v119;
    sub_1BCA784((PartyOrganizationUtility_o *)p_defaultColorTag, (int64_t)v119, v101, v102, v103, v104, v105, v106);
    v121 = isStretch;
    v122 = *(_BYTE *)(v52 + 36);
    v123 = this;
    v124 = v118;
LABEL_55:
    ScriptMessageCommonManager__UpdateLabels(v123, v124, v121, v122, v120);
    v131 = this->fields.defaultColorTag;
    v132 = (PartyOrganizationUtility_o *)(v52 + 40);
    *(_QWORD *)(v52 + 40) = v131;
LABEL_56:
    sub_1BCA784(v132, (int64_t)v131, v125, v126, v127, v128, v129, v130);
LABEL_57:
    v107 = v92 + 1;
    goto LABEL_58;
  }
  rootPanel = System_String__get_Chars(txt, v107, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    rootPanel = (__int64)System_String__Substring_62420224(txt, v89, v90 + v92 + 1, 0LL);
    if ( !v88 )
      goto LABEL_107;
LABEL_81:
    v139 = rootPanel;
LABEL_82:
    rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v88 + 24))(
                  *(_QWORD *)(v88 + 64),
                  v139,
                  *(_QWORD *)(v88 + 40));
    goto LABEL_57;
  }
  rootPanel = System_String__get_Chars(txt, v107, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_57;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v54);
  rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v107, 0LL);
  if ( !rootPanel )
    goto LABEL_107;
  v133 = (System_String_o *)rootPanel;
  rootPanel = System_String__Equals_62409536((System_String_o *)rootPanel, (System_String_o *)StringLiteral_20447/*"image"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    v134 = v89 + 7;
    v135 = v90 + v92 - 7;
    goto LABEL_79;
  }
  if ( System_String__Equals_62409536(v133, (System_String_o *)StringLiteral_19122/*"effectmessage"*/, 0LL) )
  {
    v136 = System_String__Substring_62420224(txt, v89 + 15, v90 + v92 - 15, 0LL);
    rootPanel = System_String__op_Inequality(v136, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
    if ( (rootPanel & 1) != 0 )
    {
      if ( !v84 )
        goto LABEL_107;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
      rootPanel = (__int64)System_String__Concat_62412480(
                             (System_String_o *)StringLiteral_15993/*"[*"*/,
                             v136,
                             (System_String_o *)StringLiteral_16236/*"]"*/,
                             0LL);
      if ( !v88 )
        goto LABEL_107;
      rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v88 + 24))(
                    *(_QWORD *)(v88 + 64),
                    rootPanel,
                    *(_QWORD *)(v88 + 40));
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_57;
  }
  rootPanel = System_String__Equals_62409536(v133, (System_String_o *)StringLiteral_20256/*"i"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    v134 = v89 + 3;
    v135 = v90 + v92 - 3;
LABEL_79:
    v137 = System_String__Substring_62420224(txt, v134, v135, 0LL);
    v138 = &StringLiteral_16134/*"[^"*/;
LABEL_80:
    rootPanel = (__int64)System_String__Concat_62412480(
                           (System_String_o *)*v138,
                           v137,
                           (System_String_o *)StringLiteral_16236/*"]"*/,
                           0LL);
    if ( !v88 )
      goto LABEL_107;
    goto LABEL_81;
  }
  rootPanel = System_String__Equals_62409536(v133, (System_String_o *)StringLiteral_22986/*"r"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    v140 = this->fields.betweenLineHeight;
    v141 = this->fields.dispPosition.fields.y;
    v142 = this->fields.startPosition.fields.x;
    v143 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v143;
    this->fields.dispPosition.fields.x = v142;
    this->fields.dispPosition.fields.y = v141 - (float)(v143 + v140);
    ScriptMessageCommonManager__SetDefaultState(this, v144);
    v131 = this->fields.defaultColorTag;
    v132 = (PartyOrganizationUtility_o *)(v52 + 40);
    *colorTag = v131;
    goto LABEL_56;
  }
  rootPanel = System_String__Equals_62409536(v133, (System_String_o *)StringLiteral_23358/*"servantName"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    v146 = System_String__Substring_62420224(txt, v89 + 12, v90 + v92 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v145);
    v147 = ScriptMessageLabel__AnalysTagParam(v146, 0, 0LL);
    v148 = *(struct System_String_o **)(v52 + 40);
    this->fields.defaultColorTag = v148;
    sub_1BCA784((PartyOrganizationUtility_o *)p_defaultColorTag, (int64_t)v148, v149, v150, v151, v152, v153, v154);
    v155 = ScriptMessageLabel__GetServantChangeName(v147, 0LL);
    v121 = isStretch;
    v122 = *(_BYTE *)(v52 + 36);
    v124 = v155;
    v123 = this;
    goto LABEL_55;
  }
  rootPanel = System_String__StartsWith(v133, (System_String_o *)StringLiteral_21335/*"line"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
    rootPanel = (__int64)System_String__Substring_62420224(txt, v89 + 5, v90 + v92 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_107;
    if ( *(int *)(rootPanel + 16) < 1 )
    {
      if ( !v88 )
        goto LABEL_107;
      v139 = StringLiteral_16199/*"[~1]"*/;
      goto LABEL_82;
    }
    v137 = System_String__Trim((System_String_o *)rootPanel, 0LL);
    v138 = &StringLiteral_16198/*"[~"*/;
    goto LABEL_80;
  }
  if ( v92 < txt->fields._stringLength )
  {
    text = System_String__Substring_62420224(txt, v89, v90 + v92 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v156);
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, 0LL);
    rootPanel = (__int64)*v67;
    if ( !*v67 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_61563116((System_Text_StringBuilder_o *)rootPanel, text, 0LL);
    goto LABEL_57;
  }
  v157 = *v67;
  rootPanel = (__int64)System_String__Substring(txt, v89, 0LL);
  if ( !v157 )
    goto LABEL_107;
  rootPanel = (__int64)System_Text_StringBuilder__Append_61563116(v157, (System_String_o *)rootPanel, 0LL);
LABEL_105:
  if ( !v84 )
LABEL_107:
    sub_1BCAA3C(rootPanel, v54);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v84 + 24))(*(_QWORD *)(v84 + 64), *(_QWORD *)(v84 + 40));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__WaitNextTouch(
        ScriptMessageCommonManager_o *this,
        bool isShowNextTouchObject,
        const MethodInfo *method)
{
  UITouchPress_o *touchPress; // x0

  if ( !this->fields.isWaitNextTouchRequest )
  {
    touchPress = this->fields.touchPress;
    if ( touchPress )
    {
      if ( UITouchPress__get_IsLongPress(touchPress, 0LL) )
        return;
      touchPress = (UITouchPress_o *)this->fields.nextTouchRootObject;
      *(_WORD *)&this->fields.isWaitNextTouchRequest = 1;
      if ( touchPress )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPress, isShowNextTouchObject, 0LL);
        return;
      }
    }
    sub_1BCAA3C(touchPress, isShowNextTouchObject);
  }
}


bool __fastcall ScriptMessageCommonManager__get_IsBusy(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool __fastcall ScriptMessageCommonManager__get_IsWindowMode(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isWindowBack;
}


bool __fastcall ScriptMessageCommonManager__get_isFaceMessage(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isFaceMessage_k__BackingField;
}


float __fastcall ScriptMessageCommonManager__get_textLineHeight(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


void __fastcall ScriptMessageCommonManager__set_isFaceMessage(
        ScriptMessageCommonManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isFaceMessage_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager_ProcAddLabel___ctor(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0E600;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E5C0;
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__Invoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager_ProcAddLabel2___ctor(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0E67C;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0E65C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E614;
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel2__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__Invoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    txt,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__0(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *tmpTxt; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v11; // x8
  struct ScriptMessageCommonManager_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpTxt = (System_Text_StringBuilder_o *)System_Text_StringBuilder__get_Length(tmpTxt, 0LL);
  if ( (int)tmpTxt < 1 )
    goto LABEL_8;
  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))tmpTxt->klass->vtable._3_ToString.method)(
                                                  tmpTxt,
                                                  tmpTxt->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr),
        (v11 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptMessageCommonManager__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          this->fields.stepTime,
          v11->fields.defaultColorTag,
          this->fields.isFoward,
          0LL),
        (tmpTxt = this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v12->fields.defaultColorTag = tmpColorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.defaultColorTag, (int64_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__1(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScriptMessageCommonManager___c__DisplayClass113_0_o *v8; // x19
  struct ScriptMessageCommonManager_o *_4__this; // x8
  int64_t tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v8 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptMessageCommonManager___c__DisplayClass113_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptMessageCommonManager__AddLabel(
      (ScriptMessageCommonManager_o *)this,
      text,
      v8->fields.stepTime,
      *(System_String_o **)&this[6].fields.stepTime,
      v8->fields.isFoward,
      0LL);
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_1BCAA3C(this, text);
  tmpColorTag = (int64_t)v8->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = (struct System_String_o *)tmpColorTag;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.defaultColorTag,
    tmpColorTag,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}