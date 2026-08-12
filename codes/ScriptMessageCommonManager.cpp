void ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  System_Collections_Generic_Stack_T__o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_Stack_T__o *v22; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_Stack_T__o *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_Stack_T__o *v36; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_object__o *v43; // x20
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_59728B5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_2213A60(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728B5 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.defaultBetweenLineHeight = 4.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_E9D940;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.defaultAllDispSize.fields.x = xmmword_E9CB10;
  this->fields.defaultColorTag = v9;
  *(_QWORD *)&this->fields.windowOpenTime = 0x3ECCCCCD3ECCCCCDLL;
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v15 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v15,
    (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainStock, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v22,
    (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyStock, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v29,
    (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageStock, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v36,
    (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.labelStock, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dispLabelList,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.dispCountTimer = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptMessageCommonManager__AddLabel(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        float tm,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  __int64 Label; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ScriptMessageLabel_o *v19; // x20
  __int64 v20; // x0
  struct UnityEngine_Vector2_o *p_dispPosition; // x22
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v23; // x5
  System_String_o *v24; // x23
  System_String_array *v25; // x23
  const MethodInfo *v26; // x5
  int max_length; // w8
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x23
  const MethodInfo *v35; // x5
  int v36; // w8
  __int64 v37; // x24
  System_String_o *v38; // x23
  float v39; // s0
  struct ScriptMessageWindow_o *v40; // x8
  float v41; // s9
  struct ScriptMessageWindow_o *v42; // x8
  __int64 v43; // x8
  System_String_o *v44; // x23
  __int64 v45; // x24
  struct ScriptMessageWindow_o *v46; // x8
  System_String_o **v47; // x9
  int32_t v48; // w23
  System_String_o *v49; // x24
  const MethodInfo *v50; // x5
  struct ScriptMessageWindow_o *v51; // x8
  System_String_o *v52; // x1
  System_String_array *v53; // x0
  System_String_array *v54; // x24
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  float v57; // s8
  float v58; // s10
  float v59; // s9
  const MethodInfo *v60; // x5
  System_String_o *v61; // x23
  System_String_array *v62; // x0
  System_String_array *v63; // x25
  System_String_o *v64; // x0
  float v65; // s0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  int32_t v69; // w24
  System_String_o *rubyText; // x0
  System_String_o *v71; // x1
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  System_String_o *v76; // x23
  __int64 v77; // x24
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v79; // x23
  const MethodInfo *v80; // x5
  struct ScriptMessageWindow_o *v81; // x8
  System_String_o *v82; // x24
  __int64 v83; // x24
  int v84; // w25
  int32_t v85; // w0
  float v86; // s3
  float v87; // s1
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v89; // 0:s1.4,4:s2.4

  if ( (byte_597288E & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_2213A60(&StringLiteral_14192/*"Talk/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_22314/*"line"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597288E = 1;
  }
  pos = 0;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_112;
  v19 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v20 = Label + 112;
  *(float *)(v20 + 52) = tm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v20, (int32_t)colorTag, v13, v14, v15, v16, v17, v18);
  if ( !text )
    goto LABEL_112;
  p_dispPosition = &this->fields.dispPosition;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0) != 91 )
    goto LABEL_70;
  if ( System_String__get_Chars(text, 1, 0) == 35 )
  {
    v24 = System_String__Substring_75702848(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_2213B20(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    v12 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v24 )
        goto LABEL_112;
      v25 = System_String__Split_75705984(v24, (System_Char_array *)Label, 0);
      ScriptMessageCommonManager__PreProcLabel(this, v19, 1, 0, 0, v26);
      if ( !v25 )
        goto LABEL_112;
      max_length = v25->max_length;
      if ( max_length > 1 )
      {
        ScriptMessageLabel__UpdateRuby(
          v19,
          &v19->fields.main,
          &v19->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          this->fields.maxFontSize,
          this->fields.verticalAlign,
          v25->m_Items[0],
          v25->m_Items[1],
          this->fields.fontType,
          0,
          0);
LABEL_44:
        if ( tm < 0.0 )
          goto LABEL_74;
        Label = (__int64)v19->fields.main;
        if ( !Label )
          goto LABEL_112;
        UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0);
        Label = (__int64)v19->fields.ruby;
        if ( !Label )
          goto LABEL_112;
        v52 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
        UILabel__set_text((UILabel_o *)Label, v52, 0);
        goto LABEL_74;
      }
      if ( max_length )
      {
        ScriptMessageLabel__UpdateBouten(
          v19,
          &v19->fields.main,
          &v19->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          this->fields.maxFontSize,
          this->fields.verticalAlign,
          v25->m_Items[0],
          this->fields.fontType,
          0);
        goto LABEL_44;
      }
    }
LABEL_113:
    sub_2213CE4(Label);
  }
  if ( System_String__get_Chars(text, 1, 0) == 94 )
  {
    v34 = System_String__Substring_75702848(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_2213B20(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    v12 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v34 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_75705984(v34, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_112;
    v36 = *(_DWORD *)(Label + 24);
    v37 = Label;
    if ( v36 <= 1 )
    {
      if ( !v36 )
        goto LABEL_113;
      v76 = *(System_String_o **)(Label + 32);
      Label = sub_2213B20(char___TypeInfo, 1);
      if ( !Label )
        goto LABEL_112;
      v12 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      *(_WORD *)(Label + 32) = 58;
      if ( !v76 )
        goto LABEL_112;
      Label = (__int64)System_String__Split_75705984(v76, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_112;
      v77 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_112;
      v79 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0);
      if ( (Label & 1) == 0 )
      {
        v81 = this->fields.currentMessageWindow;
        if ( !v81 )
          goto LABEL_112;
        v79 = System_String__Concat_75651716(v79, v81->fields.imageSuffix, 0);
      }
      if ( *(int *)(v77 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v80);
        ScriptMessageLabel__UpdateImage(
          v19,
          &v19->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v79,
          this->fields.horizontalAlign,
          0);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v19, 1, 1, 0, v80);
        if ( (*(_DWORD *)(v77 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_113;
        ScriptMessageLabel__UpdateImageRuby(
          v19,
          &v19->fields.image,
          &v19->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v79,
          *(System_String_o **)(v77 + 40),
          0,
          this->fields.horizontalAlign,
          0);
      }
    }
    else
    {
      ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v35);
      if ( *(_DWORD *)(v37 + 24) < 2u )
        goto LABEL_113;
      v38 = *(System_String_o **)(v37 + 32);
      v39 = System_Single__Parse(*(System_String_o **)(v37 + 40), 0);
      v40 = this->fields.currentMessageWindow;
      if ( !v40 )
        goto LABEL_112;
      v41 = v39;
      Label = System_String__IsNullOrEmpty(v40->fields.imageSuffix, 0);
      if ( (Label & 1) == 0 )
      {
        v42 = this->fields.currentMessageWindow;
        if ( !v42 )
          goto LABEL_112;
        Label = (__int64)System_String__Concat_75651716(v38, v42->fields.imageSuffix, 0);
        v38 = (System_String_o *)Label;
      }
      v43 = *(unsigned int *)(v37 + 24);
      if ( v43 == 2 )
      {
        ScriptMessageLabel__UpdateImage_51891848(
          v19,
          &v19->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v41,
          v38,
          this->fields.horizontalAlign,
          0);
      }
      else if ( (int)v43 <= 3 )
      {
        if ( (unsigned int)v43 <= 2 )
          goto LABEL_113;
        v82 = *(System_String_o **)(v37 + 48);
        Label = sub_2213B20(char___TypeInfo, 1);
        if ( !Label )
          goto LABEL_112;
        v12 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        *(_WORD *)(Label + 32) = 44;
        if ( !v82 )
          goto LABEL_112;
        Label = (__int64)System_String__Split_75705984(v82, (System_Char_array *)Label, 0);
        if ( !Label )
          goto LABEL_112;
        v83 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
        if ( (*(_DWORD *)(v83 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_113;
        v84 = Label;
        v85 = System_Int32__Parse(*(System_String_o **)(v83 + 40), 0);
        v89.fields.x = (float)v84;
        v89.fields.y = (float)v85;
        ScriptMessageLabel__UpdateImage_51892000(
          v19,
          &v19->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v41,
          v38,
          v89,
          this->fields.horizontalAlign,
          0);
      }
    }
    if ( tm < 0.0 )
    {
LABEL_74:
      if ( isFoward )
      {
        rubyText = v19->fields.rubyText;
        v71 = (System_String_o *)StringLiteral_1/*""*/;
        v19->fields.mainPosition.fields.x = v19->fields.mainPosition.fields.x - v19->fields.widthSize;
        if ( System_String__op_Inequality(rubyText, v71, 0) )
          v19->fields.rubyPosition.fields.x = v19->fields.rubyPosition.fields.x - v19->fields.widthSize;
        *p_dispPosition = dispPosition;
      }
      Label = (__int64)this->fields.dispLabelList;
      if ( Label )
      {
        v72 = *(_QWORD *)(Label + 16);
        v73 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
        ++*(_DWORD *)(Label + 28);
        if ( v72 )
        {
          v74 = *(int *)(Label + 24);
          if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Label,
              (Il2CppObject *)v19,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = v72 + 8 * v74;
            *(_DWORD *)(Label + 24) = v74 + 1;
            *(_QWORD *)(v75 + 32) = v19;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)v19, v28, v29, v30, v31, v32, v33);
          }
          return;
        }
      }
LABEL_112:
      sub_2213CDC(Label, v12);
    }
    Label = (__int64)v19->fields.image;
    if ( !Label )
      goto LABEL_112;
LABEL_109:
    (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)Label + 440LL))(
      Label,
      *(_QWORD *)(*(_QWORD *)Label + 448LL),
      0.0);
    goto LABEL_74;
  }
  if ( System_String__get_Chars(text, 1, 0) == 126 )
  {
    v44 = System_String__Substring_75702848(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_2213B20(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    v12 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v44 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_75705984(v44, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_112;
    v45 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
    v46 = this->fields.currentMessageWindow;
    if ( *(int *)(v45 + 24) >= 2 )
      v47 = (System_String_o **)(v45 + 40);
    else
      v47 = (System_String_o **)&StringLiteral_22314/*"line"*/;
    if ( !v46 )
      goto LABEL_112;
    v48 = Label;
    v49 = *v47;
    Label = System_String__IsNullOrEmpty(v46->fields.imageSuffix, 0);
    if ( (Label & 1) == 0 )
    {
      v51 = this->fields.currentMessageWindow;
      if ( !v51 )
        goto LABEL_112;
      v49 = System_String__Concat_75651716(v49, v51->fields.imageSuffix, 0);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v50);
    ScriptMessageLabel__UpdateLine(
      v19,
      &v19->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v48,
      v49,
      0);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = (__int64)v19->fields.image;
    if ( !Label )
      goto LABEL_112;
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0) != 42 )
  {
LABEL_70:
    ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 0, 0, v23);
    ScriptMessageLabel__UpdateLabel(
      v19,
      &v19->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      0);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = (__int64)v19->fields.main;
    if ( !Label )
      goto LABEL_112;
    v52 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_73;
  }
  Label = (__int64)System_String__Substring_75702848(text, 2, text->fields._stringLength - 3, 0);
  if ( !Label )
    goto LABEL_112;
  v53 = System_String__Split((System_String_o *)Label, 0x20u, 0, 0);
  if ( v53 )
  {
    v54 = v53;
    if ( SLODWORD(v53->max_length) >= 1 )
    {
      v55 = v53->m_Items[0];
      if ( v55 )
      {
        Label = System_String__op_Equality(v55, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
        if ( (Label & 1) == 0 )
        {
          if ( !LODWORD(v54->max_length) )
            goto LABEL_113;
          Label = (__int64)v54->m_Items[0];
          if ( !Label )
            goto LABEL_112;
          v56 = System_String__Trim((System_String_o *)Label, 0);
          v57 = 0.0;
          v58 = 0.0;
          v59 = 0.0;
          v61 = System_String__Concat_75651716((System_String_o *)StringLiteral_14192/*"Talk/"*/, v56, 0);
          if ( SLODWORD(v54->max_length) >= 2 )
          {
            Label = (__int64)v54->m_Items[1];
            if ( !Label )
              goto LABEL_112;
            Label = (__int64)System_String__Trim((System_String_o *)Label, 0);
            if ( !Label )
              goto LABEL_112;
            v62 = System_String__Split((System_String_o *)Label, 0x2Cu, 0, 0);
            v58 = 0.0;
            v59 = 0.0;
            if ( v62 )
            {
              v63 = v62;
              if ( SLODWORD(v62->max_length) >= 2 )
              {
                Label = (__int64)v62->m_Items[0];
                if ( !Label )
                  goto LABEL_112;
                v64 = System_String__Trim((System_String_o *)Label, 0);
                v65 = System_Single__Parse(v64, 0);
                if ( (v63->max_length & 0xFFFFFFFE) == 0 )
                  goto LABEL_113;
                Label = (__int64)v63->m_Items[1];
                if ( !Label )
                  goto LABEL_112;
                v59 = v65;
                v66 = System_String__Trim((System_String_o *)Label, 0);
                v58 = System_Single__Parse(v66, 0);
              }
            }
          }
          if ( SLODWORD(v54->max_length) <= 2 )
            goto LABEL_110;
          Label = (__int64)v54->m_Items[2];
          if ( !Label )
            goto LABEL_112;
          v67 = System_String__Trim((System_String_o *)Label, 0);
          v57 = System_Single__Parse(v67, 0);
          if ( SLODWORD(v54->max_length) < 4 )
          {
LABEL_110:
            v69 = 0;
          }
          else
          {
            Label = (__int64)v54->m_Items[3];
            if ( !Label )
              goto LABEL_112;
            v68 = System_String__Trim((System_String_o *)Label, 0);
            v69 = System_Int32__Parse(v68, 0);
          }
          v86 = v59 + COERCE_FLOAT(*p_dispPosition);
          v87 = v58 + COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)p_dispPosition));
          *p_dispPosition = (struct UnityEngine_Vector2_o)vadd_f32(
                                                            (float32x2_t)*p_dispPosition,
                                                            (float32x2_t)1124073472LL).n64_u64[0];
          pos.fields.x = v86;
          pos.fields.y = v87;
          ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 0, 1, v60);
          ScriptMessageLabel__UpdateEffect(v19, &v19->fields.effect, &pos, v61, v57, v69, 0);
          goto LABEL_74;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__AddText(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  ScriptMessageCommonManager__SetAlignedDispPosition(this, isLineHead, lineLength, *(const MethodInfo **)&lineLength);
  ScriptMessageCommonManager__UpdateLabels(this, text, 0, 0, v7);
}


void ScriptMessageCommonManager__AddTextStretch(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ScriptMessageCommonManager__UpdateLabels(this, text, 1, 0, v3);
}


void ScriptMessageCommonManager__CalcMessageVerticalAlign(
        ScriptMessageCommonManager_o *this,
        System_String_array *dataList,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  float VerticalAlignedOffset; // s0
  unsigned __int64 v6; // x9

  p_startPosition = &this->fields.startPosition;
  VerticalAlignedOffset = ScriptMessageCommonManager__GetVerticalAlignedOffset(this, dataList, method);
  v6 = HIDWORD(*(unsigned __int64 *)p_startPosition);
  p_startPosition[1] = *p_startPosition;
  this->fields.dispPosition.fields.y = *(float *)&v6 - VerticalAlignedOffset;
}


void ScriptMessageCommonManager__CancelNextTouch(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  nextTouchRootObject = this->fields.nextTouchRootObject;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  if ( !nextTouchRootObject )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
}


void ScriptMessageCommonManager__CancelTapSkip(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isTapSkipRequest = 0;
}


void ScriptMessageCommonManager__ChangeMessageWindow(
        ScriptMessageCommonManager_o *this,
        ScriptMessageWindow_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  void *talkNameManager; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *currentMessageWindow; // x21
  UnityEngine_Object_o *defaultMessageWindow; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o **v14; // x20
  struct ScriptMessageWindow_o *v15; // x8
  Il2CppObject *messageMainLabel; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x22
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x3
  struct UnityEngine_GameObject_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  struct ScriptMessageWindow_o *v30; // x8
  Il2CppObject *messageRubyLabel; // x21
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x22
  Il2CppObject *v34; // x21
  const MethodInfo *v35; // x3
  struct UnityEngine_GameObject_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x21
  struct ScriptMessageWindow_o *v45; // x8
  Il2CppObject *talkNameMainLabel; // x21
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x22
  Il2CppObject *v49; // x22
  const MethodInfo *v50; // x3
  struct ScriptLineMessage_o *v51; // x21
  struct ScriptMessageWindow_o *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x21
  struct ScriptMessageWindow_o *v61; // x8
  Il2CppObject *talkNameRubyLabel; // x21
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x22
  Il2CppObject *v65; // x22
  const MethodInfo *v66; // x3
  struct ScriptLineMessage_o *v67; // x21
  struct ScriptMessageWindow_o *v68; // x8
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  UnityEngine_Object_o *v81; // x1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  const MethodInfo *v88; // x6
  const MethodInfo *v89; // x1

  if ( (byte_59728A2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UILabel____91801560);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728A2 = 1;
  }
  ScriptMessageCommonManager__DeleteLabels(this, (const MethodInfo *)prefab);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_61;
  ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)talkNameManager, v5);
  talkNameManager = this->fields.defaultMessageWindow;
  if ( !talkNameManager )
    goto LABEL_61;
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !talkNameManager )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)talkNameManager, 0, 0);
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  defaultMessageWindow = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(currentMessageWindow, defaultMessageWindow, 0) )
  {
    talkNameManager = this->fields.currentMessageWindow;
    if ( !talkNameManager )
      goto LABEL_61;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)talkNameManager,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  talkNameManager = this->fields.messageShake;
  if ( !talkNameManager )
    goto LABEL_61;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  talkNameManager = UnityEngine_Object__Instantiate_object__59717116(
                      (Il2CppObject *)prefab,
                      transform,
                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_61;
  v14 = (UnityEngine_Object_o **)talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    0);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v14[16], 0, 0);
  v15 = this->fields.defaultMessageWindow;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_61;
    messageMainLabel = (Il2CppObject *)v15->fields.messageMainLabel;
    v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v19 = UnityEngine_Object__Instantiate_object__59717116(
            messageMainLabel,
            v18,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UILabel____91801560);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v19,
      (UILabel_o *)v14[16],
      (UILabel_o *)v19,
      v20);
    if ( !v19 )
      goto LABEL_61;
    talkNameManager = v19;
  }
  else
  {
    if ( !v15 )
      goto LABEL_61;
    talkNameManager = v15->fields.messageMainLabel;
    if ( !talkNameManager )
      goto LABEL_61;
  }
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  this->fields.mainPrefab = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainPrefab, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v29 = v14[17];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v29, 0, 0);
  v30 = this->fields.defaultMessageWindow;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_61;
    messageRubyLabel = (Il2CppObject *)v30->fields.messageRubyLabel;
    v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v34 = UnityEngine_Object__Instantiate_object__59717116(
            messageRubyLabel,
            v33,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UILabel____91801560);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v34,
      (UILabel_o *)v14[17],
      (UILabel_o *)v34,
      v35);
    if ( !v34 )
      goto LABEL_61;
    talkNameManager = v34;
  }
  else
  {
    if ( !v30 )
      goto LABEL_61;
    talkNameManager = v30->fields.messageRubyLabel;
    if ( !talkNameManager )
      goto LABEL_61;
  }
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  this->fields.rubyPrefab = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyPrefab, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v44 = v14[18];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v44, 0, 0);
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v45 = this->fields.defaultMessageWindow;
    if ( !v45 )
      goto LABEL_61;
    talkNameMainLabel = (Il2CppObject *)v45->fields.talkNameMainLabel;
    v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    v49 = UnityEngine_Object__Instantiate_object__59717116(
            talkNameMainLabel,
            v48,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UILabel____91801560);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v49,
      (UILabel_o *)v14[18],
      (UILabel_o *)v49,
      v50);
    if ( !v49 )
      goto LABEL_61;
    v51 = this->fields.talkNameManager;
    talkNameManager = v49;
  }
  else
  {
    v52 = this->fields.defaultMessageWindow;
    if ( !v52 )
      goto LABEL_61;
    talkNameManager = v52->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_61;
    v51 = this->fields.talkNameManager;
  }
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !v51 )
    goto LABEL_61;
  v51->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v51->fields.mainPrefab,
    (int32_t)talkNameManager,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v60 = v14[19];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v60, 0, 0);
  if ( ((unsigned __int8)talkNameManager & 1) == 0 )
  {
    v68 = this->fields.defaultMessageWindow;
    if ( v68 )
    {
      talkNameManager = v68->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v67 = this->fields.talkNameManager;
        goto LABEL_58;
      }
    }
LABEL_61:
    sub_2213CDC(talkNameManager, v5);
  }
  v61 = this->fields.defaultMessageWindow;
  if ( !v61 )
    goto LABEL_61;
  talkNameRubyLabel = (Il2CppObject *)v61->fields.talkNameRubyLabel;
  v64 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  v65 = UnityEngine_Object__Instantiate_object__59717116(
          talkNameRubyLabel,
          v64,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UILabel____91801560);
  ScriptMessageCommonManager__CopyFontEffects(
    (ScriptMessageCommonManager_o *)v65,
    (UILabel_o *)v14[19],
    (UILabel_o *)v65,
    v66);
  if ( !v65 )
    goto LABEL_61;
  v67 = this->fields.talkNameManager;
  talkNameManager = v65;
LABEL_58:
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !v67 )
    goto LABEL_61;
  v67->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v67->fields.rubyPrefab,
    (int32_t)talkNameManager,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_61;
  v81 = v14[11];
  *((_QWORD *)talkNameManager + 7) = v81;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)((char *)talkNameManager + 56),
    (int32_t)v81,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentMessageWindow,
    (int32_t)v14,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v88);
  ScriptMessageCommonManager__ResetScroll(this, v89);
}


void ScriptMessageCommonManager__ClearCount(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.dispCountTimer = -1.0;
}


void ScriptMessageCommonManager__ClearLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v4; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972887 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_5972887 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  memset(&v10, 0, sizeof(v10));
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    dispLabelList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v10.fields._current, v4);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v5 = this->fields.dispLabelList;
  if ( !v5 )
LABEL_11:
    sub_2213CDC(dispLabelList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  this->fields.isBusy = 0;
  this->fields.isEffectMessage = 0;
  *(_QWORD *)&this->fields.dispCountTimer = 3212836864LL;
}


void ScriptMessageCommonManager__ClearRequestFastMessage(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 0;
}


void ScriptMessageCommonManager__ClearTalkName(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  int32_t v4; // w1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ScriptMessageWindow_o *v18; // x8

  v2 = this;
  if ( (byte_59728A0 & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728A0 = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v4 = (int)StringLiteral_1/*""*/;
  v2->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.talkName, v4, v5, v6, v7, v8, v9, v10);
  v11 = (int)StringLiteral_1/*""*/;
  v2->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.talkNameOnly, v11, v12, v13, v14, v15, v16, v17);
  this = (ScriptMessageCommonManager_o *)v2->fields.talkNameManager;
  v2->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, method), (v18 = v2->fields.currentMessageWindow) == 0)
    || (this = (ScriptMessageCommonManager_o *)v18->fields.talkNameIcon) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, const MethodInfo *, double))this->klass->vtable._8_IsEnableCloseDown.methodPtr)(
    this,
    this->klass->vtable._8_IsEnableCloseDown.method,
    0.0);
}


void ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  UnityEngine_Transform_o *messageScroll; // x0
  const MethodInfo *v5; // x1
  struct UnityEngine_Vector2_o dispSize; // d0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  unsigned __int64 v8; // d0
  const MethodInfo *v9; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v12; // x8
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct ScriptMessageWindow_o *v27; // x8
  UnityEngine_Vector3_o v28; // 0:kr00_12.12

  p_startPosition = &this->fields.startPosition;
  if ( (byte_597289E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597289E = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  dispSize = this->fields.dispSize;
  currentMessageWindow = this->fields.currentMessageWindow;
  p_startPosition[1] = *p_startPosition;
  v8 = vmul_f32((float32x2_t)dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  p_startPosition[2] = (struct UnityEngine_Vector2_o)v8;
  if ( !currentMessageWindow )
    goto LABEL_12;
  messageScroll = currentMessageWindow->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_12;
  *(_QWORD *)&v28.fields.x = v8;
  v28.fields.z = this->fields.scrollPosition.fields.z;
  UnityEngine_Transform__set_localPosition(messageScroll, v28, 0);
  ScriptMessageCommonManager__SetDefaultState(this, v9);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  v12 = this->fields.currentMessageWindow;
  this->fields.isBusy = 0;
  this->fields.isScroll = 0;
  this->fields.isEffectMessage = 0;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  this->fields.dispCountTimer = -1.0;
  this->fields.beforeTextOnlyLineHeight = textOnlyLineHeight + rubyLineHeight;
  this->fields.isFastMessageRequest = 0;
  if ( !v12 )
    goto LABEL_12;
  messageScroll = (UnityEngine_Transform_o *)v12->fields.talkNameRootObject;
  if ( !messageScroll )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.talkName, v13, v14, v15, v16, v17, v18, v19);
  v20 = (int)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.talkNameOnly, v20, v21, v22, v23, v24, v25, v26);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, v5),
        (v27 = this->fields.currentMessageWindow) == 0)
    || (messageScroll = (UnityEngine_Transform_o *)v27->fields.talkNameIcon) == 0
    || (((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, double))messageScroll->klass[1]._1.this_arg.data)(
          messageScroll,
          *(_QWORD *)&messageScroll->klass[1]._1.this_arg.bits,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0) )
  {
LABEL_12:
    sub_2213CDC(messageScroll, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__CloseDown(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UnityEngine_AnimationCurve_o *windowDownCurve; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972898 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScriptMessageCommonManager_CloseDown__);
    byte_5972898 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)rootObject,
                                             0);
  if ( !rootObject )
    goto LABEL_24;
  if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0).fields.y)) <= this->fields.windowClosePosY )
    return;
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
LABEL_24:
    sub_2213CDC(rootObject, isFast);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  v21.fields.y = this->fields.windowClosePosY;
  v11 = TweenPosition__Begin(gameObject, windowCloseTime, v21, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v11 )
    {
      windowDownCurve = this->fields.windowDownCurve;
      v11->fields.method = 0;
      v11->fields.animationCurve = windowDownCurve;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->fields.animationCurve,
        (int32_t)windowDownCurve,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      UITweener__PlayForward((UITweener_o *)v11, 0);
      v19 = Method_ScriptMessageCommonManager_CloseDown__;
      if ( (*((_BYTE *)Method_ScriptMessageCommonManager_CloseDown__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_2213A78(Method_ScriptMessageCommonManager_CloseDown__);
      v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 7, 0, 0);
      return;
    }
    goto LABEL_24;
  }
}


void ScriptMessageCommonManager__CopyFontEffects(
        ScriptMessageCommonManager_o *this,
        UILabel_o *src,
        UILabel_o *dst,
        const MethodInfo *method)
{
  if ( !src || !dst )
    sub_2213CDC(this, src);
  UILabel__set_effectStyle(dst, src->fields.mEffectStyle, 0);
  UILabel__set_effectColor(dst, src->fields.mEffectColor, 0);
  UILabel__set_effectDistance(dst, src->fields.mEffectDistance, 0);
  UILabel__set_applyGradient(dst, src->fields.mApplyGradient, 0);
  UILabel__set_gradientTop(dst, src->fields.mGradientTop, 0);
  UILabel__set_gradientBottom(dst, src->fields.mGradientBottom, 0);
}


UILabel_o *ScriptMessageCommonManager__CreateLabel(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v5; // x1
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_59728B3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728B3 = 1;
  }
  mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   mainPrefab,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_15;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_object )
    goto LABEL_15;
  currentMessageWindow = this->fields.currentMessageWindow;
  v7 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  if ( !currentMessageWindow )
    goto LABEL_15;
  ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_2213CDC(Component_object, v5);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UILabel_o *)v7;
}


void ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_5972886 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_5972886 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_27;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0);
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
                                                            (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( labelStock )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)labelStock,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
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
                                                            (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_27;
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83459800(v8, 0);
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_27:
    sub_2213CDC(labelStock, v3);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_83459800(v10, 0);
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_27;
  }
}


void ScriptMessageCommonManager__EndScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 0;
  this->fields.isScroll = 0;
}


UISprite_o *ScriptMessageCommonManager__FetchImageSprite(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 imageStock; // x0
  UnityEngine_Component_o *v4; // x19
  Il2CppObject *imagePrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_597288B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_597288B = 1;
  }
  imageStock = (__int64)this->fields.imageStock;
  if ( !imageStock )
    goto LABEL_20;
  if ( *(int *)(imageStock + 24) <= 0 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    imageStock = (__int64)UnityEngine_Object__Instantiate_object_(
                            imagePrefab,
                            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)imageStock,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)imageStock;
        imageStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)imageStock, 0);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)imageStock, 0);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_2213CDC(imageStock, method);
  }
  imageStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                          (System_Collections_Generic_Stack_T__o *)imageStock,
                          (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v4 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_20;
LABEL_13:
  imageStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_5969AE0 )
  {
    imageStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  imageStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_5969AE5 )
  {
    imageStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UISprite_o *)v4;
}


ScriptMessageLabel_o *ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v5; // x19

  if ( (byte_597288C & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_597288C = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_2213CDC(0, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v5 = (ScriptMessageLabel_o *)sub_2213CCC(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v5, 0);
  return v5;
}


UILabel_o *ScriptMessageCommonManager__FetchMainLabel(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 mainStock; // x0
  UnityEngine_Component_o *v4; // x19
  Il2CppObject *mainPrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_5972889 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_5972889 = 1;
  }
  mainStock = (__int64)this->fields.mainStock;
  if ( !mainStock )
    goto LABEL_20;
  if ( *(int *)(mainStock + 24) < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    mainStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mainStock,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)mainStock;
        mainStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainStock, 0);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)mainStock, 0);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_2213CDC(mainStock, method);
  }
  mainStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)mainStock,
                         (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_20;
  v4 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0);
LABEL_13:
  mainStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_5969AE0 )
  {
    mainStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mainStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_5969AE5 )
  {
    mainStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UILabel_o *)v4;
}


UILabel_o *ScriptMessageCommonManager__FetchRubyLabel(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 rubyStock; // x0
  UnityEngine_Component_o *v4; // x20
  Il2CppObject *rubyPrefab; // x20
  ScriptMessageWindow_o *currentMessageWindow; // x21
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x21

  if ( (byte_597288A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_597288A = 1;
  }
  rubyStock = (__int64)this->fields.rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
  if ( *(int *)(rubyStock + 24) <= 0 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    rubyStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           rubyPrefab,
                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rubyStock,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rubyStock, 0);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)rubyStock, 0);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_2213CDC(rubyStock, method);
  }
  rubyStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)rubyStock,
                         (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v4 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
LABEL_13:
  rubyStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_5969AE0 )
  {
    rubyStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  rubyStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_5969AE5 )
  {
    rubyStock = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UILabel__set_fontSize((UILabel_o *)v4, this->fields.rubyFontSize, 0);
  return (UILabel_o *)v4;
}


void ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x20
  __int64 v4; // x1
  __int64 transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *rootPanel; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_5972896 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972896 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(rootObject, 0, 0) )
  {
    transform = (__int64)this->fields.rootObject;
    if ( !transform )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(
                                           (UnityEngine_GameObject_o *)transform,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    {
      rootPanel = (UnityEngine_Object_o *)this->fields.rootPanel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Equality(rootPanel, 0, 0) )
      {
        transform = (__int64)this->fields.rootPanel;
        if ( !transform )
          goto LABEL_36;
        v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( !UnityEngine_Object__op_Equality(v11, 0, 0) )
        {
          transform = (__int64)this->fields.rootObject;
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
            if ( transform )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)transform,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) != 0 )
              {
                if ( !Component_object )
                  goto LABEL_36;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
              }
              transform = (__int64)this->fields.rootPanel;
              if ( transform )
              {
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
                if ( transform )
                {
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                  v14 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_5969AE0 )
                  {
                    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                    byte_5969AE0 = 1;
                  }
                  if ( v14 )
                  {
                    UnityEngine_Transform__set_localPosition(
                      v14,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0);
                    transform = (__int64)this->fields.rootObject;
                    if ( transform )
                    {
                      transform = (__int64)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)transform,
                                             0);
                      if ( transform )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
                          return;
                        transform = (__int64)this->fields.rootObject;
                        if ( transform )
                        {
                          transform = (__int64)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)transform,
                                                 0);
                          if ( transform )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
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
          sub_2213CDC(transform, v4);
        }
      }
    }
  }
}


int32_t ScriptMessageCommonManager__GetAllDispLength(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  void *dispLabelList; // x0
  int32_t v4; // w20
  int32_t v5; // w21
  void *v6; // x22
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x23

  if ( (byte_59728A8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728A8 = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_15:
    sub_2213CDC(dispLabelList, method);
  v4 = 0;
  v5 = 0;
  while ( v5 < *((_DWORD *)dispLabelList + 6) )
  {
    dispLabelList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)dispLabelList,
                      v5,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( dispLabelList )
    {
      v6 = dispLabelList;
      if ( *((int *)dispLabelList + 42) >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(*((System_String_o **)dispLabelList + 15), 0) )
          v4 += *((_DWORD *)v6 + 42);
        v8 = (UnityEngine_Object_o *)*((_QWORD *)v6 + 6);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
          v4 += *((_DWORD *)v6 + 42);
      }
      dispLabelList = this->fields.dispLabelList;
      ++v5;
      if ( dispLabelList )
        continue;
    }
    goto LABEL_15;
  }
  return v4;
}


UnityEngine_GameObject_o *ScriptMessageCommonManager__GetBackLogButtonObject(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backLogButton; // x0

  backLogButton = (UnityEngine_Component_o *)this->fields.backLogButton;
  if ( !backLogButton )
    sub_2213CDC(0, method);
  return UnityEngine_Component__get_gameObject(backLogButton, 0);
}


float ScriptMessageCommonManager__GetDefaultStepTime(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.defaultStepTime;
}


UnityEngine_Vector3_o ScriptMessageCommonManager__GetFaceIconPosition(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


UnityEngine_Font_o *ScriptMessageCommonManager__GetFontType(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.fontType;
}


UISprite_o *ScriptMessageCommonManager__GetMessageBackSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct ScriptMessageWindow_o *currentMessageWindow; // x8

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_2213CDC(this, method);
  return currentMessageWindow->fields.messageWindowBack;
}


UISprite_o *ScriptMessageCommonManager__GetNextMarkSprite(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.nextMarkSprite;
}


System_String_o *ScriptMessageCommonManager__GetTalkName(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.talkName;
}


UISprite_o *ScriptMessageCommonManager__GetTalkNameBackSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct ScriptMessageWindow_o *currentMessageWindow; // x8

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_2213CDC(this, method);
  return currentMessageWindow->fields.talkNameBack;
}


int32_t ScriptMessageCommonManager__GetTalkNameIndex(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.talkNameIndex;
}


System_String_o *ScriptMessageCommonManager__GetTalkNameOnly(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameOnly;
}


float ScriptMessageCommonManager__GetVerticalAlignedOffset(
        ScriptMessageCommonManager_o *this,
        System_String_array *dataList,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x19
  float defaultTextOnlyLineHeight; // s0
  int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int v8; // w20
  float v9; // s9
  float v10; // s8
  unsigned int v11; // w28
  int32_t v12; // w23
  int32_t defaultFontSize; // w24
  int v14; // w27
  int v15; // w29
  System_String_o *v16; // x25
  __int64 v17; // x1
  int32_t v18; // w25
  System_String_o *v19; // x24
  __int64 v20; // x1
  System_String_o *v21; // x25
  __int64 v22; // x1
  int32_t VerticalAlignFromString; // w25
  float v24; // s0
  float v25; // s2
  float v26; // s0
  float v27; // s0
  int32_t v28; // w20
  float v29; // s0
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w22
  float VerticalAlignOffset; // s0
  int32_t v34; // w8
  int32_t vAlign; // [xsp+8h] [xbp-88h]
  int32_t fontSize; // [xsp+Ch] [xbp-84h]

  v4 = this;
  if ( (byte_597289F & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_20246/*"f"*/);
    sub_2213A60(&StringLiteral_26840/*"・"*/);
    sub_2213A60(&StringLiteral_24111/*"r"*/);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&StringLiteral_22219/*"l"*/);
    byte_597289F = 1;
  }
  if ( !dataList )
    sub_2213CDC(this, dataList);
  defaultTextOnlyLineHeight = v4->fields.defaultTextOnlyLineHeight;
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v4->fields.defaultBetweenLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v8 = 0x80000000;
  else
    v8 = (int)defaultTextOnlyLineHeight;
  fontSize = v8;
  if ( max_length >= 1 )
  {
    v9 = 0.0;
    v10 = v4->fields.defaultBetweenLineHeight;
    vAlign = 0;
    v11 = 0;
    v12 = 0;
    defaultFontSize = v4->fields.defaultFontSize;
    v14 = 1;
    v15 = -1;
    while ( v11 < max_length )
    {
      v16 = dataList->m_Items[v11];
      this = (ScriptMessageCommonManager_o *)System_String__op_Equality(v16, (System_String_o *)StringLiteral_20246/*"f"*/, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v11 + 2 >= LODWORD(dataList->max_length) )
          break;
        v18 = v4->fields.defaultFontSize;
        v19 = dataList->m_Items[v11 + 2];
        if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v17);
        this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v19, v18, 0);
        v11 += 4;
        if ( v8 <= (int)this )
          v8 = (int)this;
        if ( v11 >= LODWORD(dataList->max_length) )
          break;
        defaultFontSize = (int)this;
        v21 = dataList->m_Items[v11];
        if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v20);
        VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v21, 0);
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        this = (ScriptMessageCommonManager_o *)System_Math__Max_77153260(VerticalAlignFromString, v12, 0);
        v12 = (int)this;
      }
      else
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 v16,
                                                 (System_String_o *)StringLiteral_22219/*"l"*/,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v11 += 2;
          if ( v11 >= LODWORD(dataList->max_length) )
            break;
          v24 = System_Single__Parse(dataList->m_Items[v11], 0);
          if ( v24 >= 0.0 )
            v10 = v24;
          else
            v10 = v4->fields.defaultBetweenLineHeight;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v16,
                                                   (System_String_o *)StringLiteral_24111/*"r"*/,
                                                   0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v25 = v4->fields.defaultTextOnlyLineHeight;
            defaultBetweenLineHeight = v10;
            defaultFontSize = v4->fields.defaultFontSize;
            vAlign = v12;
            fontSize = v8;
            ++v14;
            v12 = 0;
            v26 = v10 + (float)(v4->fields.rubyLineHeight + (float)v8);
            v10 = v4->fields.defaultBetweenLineHeight;
            if ( v25 == INFINITY )
              v8 = 0x80000000;
            else
              v8 = (int)v25;
            v9 = v9 + v26;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v16,
                                                     (System_String_o *)StringLiteral_26840/*"・"*/,
                                                     0);
            if ( ((unsigned __int8)this & (v14 == 1) & (v15 < defaultFontSize)) != 0 )
              v15 = defaultFontSize;
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_38;
    }
    sub_2213CE4(this);
  }
  vAlign = 0;
  v9 = 0.0;
  v15 = -1;
LABEL_38:
  if ( v15 < 1 )
  {
    v28 = fontSize;
  }
  else
  {
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, dataList);
    v27 = ceilf((float)v15 * 0.37);
    v28 = fontSize;
    if ( v27 == INFINITY )
      v29 = -2147500000.0;
    else
      v29 = (float)(int)v27;
    result = v29 - v4->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v4->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v9 = v9 - (float)(result + result);
    }
  }
  if ( !v4->fields.messageAlign )
    return 0.0;
  maxFontSize = v4->fields.maxFontSize;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, dataList);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v28, maxFontSize, 0);
  v34 = v4->fields.messageAlign;
  result = (float)(v4->fields.dispSize.fields.y - (float)((float)(v9 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v4->fields.rubyLineHeight + 4.0);
  if ( v34 == 1 )
    return result * 0.5;
  if ( v34 != 2 )
    return 0.0;
  return result;
}


int32_t ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x6

  if ( (byte_5972891 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9410/*"MessageShake/LogMark/BackLogButton"*/);
    byte_5972891 = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isTapSkip = 0;
  this->fields.isMessageSpeedForcedNormal = 0;
  this->fields.isEffectMessage = 0;
  *(_DWORD *)&this->fields.isMessageOut = 0;
  if ( !rootPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))rootPanel->klass[1]._1.element_class)(
          rootPanel,
          rootPanel->klass[1]._1.castClass,
          0.0),
        ScriptMessageCommonManager__ForceOpen(this, v4),
        (rootPanel = this->fields.rootObject) == 0)
    || (UnityEngine_GameObject__SetActive(rootPanel, 1, 0),
        rootPanel = this->fields.messageBase,
        this->fields.messageAlign = 0,
        !rootPanel) )
  {
    sub_2213CDC(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_9410/*"MessageShake/LogMark/BackLogButton"*/, 0);
  return ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v6);
}


bool ScriptMessageCommonManager__IsActiveMessageWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(rootObject, 0) )
  {
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( rootObject )
      return ((float (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))rootObject->klass[1]._1.this_arg.data)(
               rootObject,
               *(_QWORD *)&rootObject->klass[1]._1.this_arg.bits) > 0.0;
LABEL_6:
    sub_2213CDC(rootObject, method);
  }
  return 0;
}


bool ScriptMessageCommonManager__IsEnableCloseDown(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return 1;
}


bool ScriptMessageCommonManager__IsEnableOpenUp(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return 1;
}


bool ScriptMessageCommonManager__IsFastMessageRequest(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isFastMessageRequest;
}


bool ScriptMessageCommonManager__IsForcedDisableTurnPage(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isForcedDisableTurnPage;
}


bool ScriptMessageCommonManager__IsForcedEnableTurnPage(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isForcedEnableTurnPage;
}


bool ScriptMessageCommonManager__IsLongPress(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *touchPress; // x0

  if ( !ScriptMessageCommonManager__IsOpen(this, method) || this->fields._isFaceMessage_k__BackingField )
    return 0;
  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_2213CDC(0, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0);
}


bool ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rootPanel; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5972894 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972894 = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_14;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0);
  if ( !rootPanel )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootPanel,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return 0;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel || (rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(rootPanel, 0)) == 0 )
LABEL_14:
    sub_2213CDC(rootPanel, method);
  return COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootPanel, 0).fields.y)) >= this->fields.windowNormalPosY;
}


bool ScriptMessageCommonManager__IsPageScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.dispPosition.fields.x > this->fields.startPosition.fields.x
      || this->fields.scrollPosition.fields.y < (float)((float)(this->fields.startPosition.fields.y
                                                              - this->fields.dispPosition.fields.y)
                                                      + (float)(this->fields.dispSize.fields.y * 0.5));
}


bool ScriptMessageCommonManager__IsReturnScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return (float)((float)(this->fields.beforeTextOnlyLineHeight - this->fields.dispPosition.fields.y)
               - this->fields.scrollPosition.fields.y) > (float)(this->fields.dispSize.fields.y
                                                               + (float)(this->fields.dispSize.fields.y * -0.5));
}


bool ScriptMessageCommonManager__IsReturnScroll2(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return (float)((float)((float)(this->fields.beforeTextOnlyLineHeight + this->fields.beforeTextOnlyLineHeight)
                       - this->fields.dispPosition.fields.y)
               - this->fields.scrollPosition.fields.y) > (float)(this->fields.dispSize.fields.y
                                                               + (float)(this->fields.dispSize.fields.y * -0.5));
}


bool ScriptMessageCommonManager__IsRootActive(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_59728B2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728B2 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(rootObject, 0, 0) )
    return 0;
  v6 = this->fields.rootObject;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_GameObject__get_activeSelf(v6, 0);
}


bool ScriptMessageCommonManager__IsScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isScroll;
}


bool ScriptMessageCommonManager__IsShake(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.shakeCycle > 0.0;
}


bool ScriptMessageCommonManager__IsTapSkip(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isTapSkipRequest;
}


bool ScriptMessageCommonManager__IsWaitNextTouchDelay(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isWaitNextTouchDelay;
}


bool ScriptMessageCommonManager__IsWaitTouch(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isWaitNextTouchRequest;
}


bool ScriptMessageCommonManager__IsWindowCloseDown(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5972895 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972895 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_15;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return *(float *)&Component_object[9].klass < 0.0;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject
    || (rootObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0)) == 0
    || (rootObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootObject, 0)) == 0 )
  {
LABEL_15:
    sub_2213CDC(rootObject, method);
  }
  return COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0).fields.y)) <= this->fields.windowClosePosY;
}


bool ScriptMessageCommonManager__MessageEffectExist(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v6; // w21
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_59728B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728B1 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = dispLabelList->fields._size;
    v6 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             i,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v9 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v9[3].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
          break;
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    if ( !dispLabelList )
      sub_2213CDC(0, v8);
  }
  return v6;
}


bool ScriptMessageCommonManager__MessageEffectIsBusy(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v6; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v12; // x22

  if ( (byte_59728AF & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728AF = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_2213CDC(dispLabelList, effectName);
  v6 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v9 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v9[3].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v12 = (UnityEngine_GameObject_o *)v9[3].monitor;
          if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          if ( CommonEffectManager__IsBusy_50756088(v12, effectName, 0) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v6;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v6 < size;
}


bool ScriptMessageCommonManager__MessageEffectIsStart(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v6; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v12; // x22

  if ( (byte_59728B0 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728B0 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_2213CDC(dispLabelList, effectName);
  v6 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v9 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v9[3].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v12 = (UnityEngine_GameObject_o *)v9[3].monitor;
          if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          if ( CommonEffectManager__IsStart_50757016(v12, effectName, 0) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v6;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v6 < size;
}


bool ScriptMessageCommonManager__MessageEffectStop(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v8; // w22
  int v9; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23
  UnityEngine_Object_o *klass; // x24
  UnityEngine_Object_o *monitor; // x24
  UnityEngine_GameObject_o *v14; // x23

  if ( (byte_59728AE & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728AE = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_2213CDC(dispLabelList, effectName);
  v8 = 0;
  v9 = 1;
  while ( v8 < dispLabelList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v8,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v11[3].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v14 = (UnityEngine_GameObject_o *)v11[3].monitor;
          if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
          v9 &= CommonEffectManager__Stop_50764116(v14, effectName, isSkip, 0, 0, 0);
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v8;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v9 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  bool v3; // w21
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t dispIndex; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  UnityEngine_Object_o *monitor; // x23
  float v9; // s0
  int v10; // w8
  float dispCountTimer; // s0
  float v12; // s1
  float messageSpeed; // s2
  float v14; // s1
  float v15; // s0
  int32_t v16; // w23
  UnityEngine_Object_o *items; // x23
  UILabel_o *v18; // x23
  UILabel_o *v19; // x23
  struct System_Object_array *v20; // x8
  float v21; // s0
  int v22; // w8
  UnityEngine_Object_c *v24; // x0
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x1
  System_String_o *syncRoot; // x22
  System_String_o *klass; // x24
  UILabel_o *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  int v32; // s0
  UILabel_o *v33; // x22
  System_String_o *v34; // x20
  float v35; // s9
  float v36; // s8
  __int64 v37; // x1
  int32_t v38; // w23
  float v39; // s9
  double v40; // d8
  double v41; // d0
  double v42; // d0
  double v43; // d1
  double v44; // d1
  int32_t v45; // w1
  System_String_o *v46; // x0
  double iptr; // [xsp+18h] [xbp-58h] BYREF

  v3 = isMessageDelta;
  if ( (byte_59728A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59728A9 = 1;
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
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( !dispLabelList )
      goto LABEL_79;
    v7 = dispLabelList;
    monitor = (UnityEngine_Object_o *)dispLabelList[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMessageDelta);
    if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0) )
      break;
    v9 = *((float *)&v7[4].monitor + 1);
    if ( v9 >= 0.0 )
    {
      if ( v3 )
      {
        v9 = v9 - this->fields.defaultStepTime;
        *((float *)&v7[4].monitor + 1) = v9;
      }
      if ( v9 >= 0.0 )
      {
        this->fields.isBusy = 1;
        return this->fields.isBusy;
      }
      v3 = 0;
      HIDWORD(v7[4].monitor) = 0;
    }
LABEL_44:
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    this->fields.dispIndex = ++dispIndex;
    if ( !dispLabelList )
      goto LABEL_79;
  }
  v10 = (int)v7[4].monitor;
  if ( v10 < 1 )
  {
LABEL_29:
    items = (UnityEngine_Object_o *)v7->fields._items;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMessageDelta);
    dispLabelList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0, 0);
    if ( ((unsigned __int8)dispLabelList & 1) != 0 )
    {
      v18 = (UILabel_o *)v7->fields._items;
      dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_75651716(
                                                                     (System_String_o *)v7[2].fields._syncRoot,
                                                                     (System_String_o *)v7[3].klass,
                                                                     0);
      if ( !v18 )
        goto LABEL_79;
      UILabel__set_text(v18, (System_String_o *)dispLabelList, 0);
      *(_QWORD *)&isMessageDelta = v7[3].monitor;
      if ( !isMessageDelta )
        goto LABEL_79;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v19 = *(UILabel_o **)&v7->fields._size;
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_75651716(
                                                                       (System_String_o *)v7[2].fields._syncRoot,
                                                                       (System_String_o *)isMessageDelta,
                                                                       0);
        if ( !v19 )
          goto LABEL_79;
        UILabel__set_text(v19, (System_String_o *)dispLabelList, 0);
      }
    }
    else
    {
      v20 = v7[3].fields._items;
      if ( !v20 )
        goto LABEL_79;
      if ( SLODWORD(v20->bounds) >= 1 )
      {
        dispLabelList = (System_Collections_Generic_List_object__o *)v7->fields._syncRoot;
        if ( !dispLabelList )
          goto LABEL_79;
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))dispLabelList->klass->vtable._8_unknown.methodPtr)(
          dispLabelList,
          dispLabelList->klass->vtable._8_unknown.method,
          1.0);
      }
    }
    if ( this->fields.isFastMessageRequest || (v21 = *((float *)&v7[4].klass + 1), v21 == 0.0) )
    {
      this->fields.dispCountTimer = -1.0;
    }
    else
    {
      v22 = (int)v7[4].monitor;
      if ( v22 >= 1 )
        this->fields.dispCountTimer = this->fields.dispCountTimer - (float)(v21 * (float)v22);
    }
    goto LABEL_44;
  }
  dispCountTimer = this->fields.dispCountTimer;
  v12 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_21;
  messageSpeed = this->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_21;
  if ( v3 )
  {
    v3 = 0;
    v12 = dispCountTimer + (float)(messageSpeed * this->fields.defaultStepTime);
LABEL_21:
    dispCountTimer = v12;
    this->fields.dispCountTimer = v12;
    goto LABEL_22;
  }
  v3 = 0;
LABEL_22:
  if ( this->fields.isFastMessageRequest )
    goto LABEL_29;
  v14 = *((float *)&v7[4].klass + 1);
  if ( v14 == 0.0 || this->fields.messageSpeed == 0.0 )
    goto LABEL_29;
  v15 = dispCountTimer / v14;
  v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
  if ( v16 >= v10 )
    goto LABEL_29;
  v24 = UnityEngine_Object_TypeInfo;
  v25 = (UnityEngine_Object_o *)v7->fields._items;
  this->fields.isBusy = 1;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, isMessageDelta);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    syncRoot = (System_String_o *)v7[2].fields._syncRoot;
    klass = (System_String_o *)v7[3].klass;
    v29 = (UILabel_o *)v7->fields._items;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v26);
    v30 = ScriptMessageLabel__SubstrByDisp(klass, v16, 0);
    dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_75651716(syncRoot, v30, 0);
    if ( v29 )
    {
      UILabel__set_text(v29, (System_String_o *)dispLabelList, 0);
      v31 = (System_String_o *)v7[3].monitor;
      if ( v31 )
      {
        if ( v31->fields._stringLength < 1 )
          return this->fields.isBusy;
        v32 = (int)v7[4].monitor;
        v33 = *(UILabel_o **)&v7->fields._size;
        v34 = (System_String_o *)v7[2].fields._syncRoot;
        v35 = (float)v32;
        if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, isMessageDelta);
        v36 = (float)v16 / v35;
        v38 = ScriptMessageLabel__StrlenByDisp(v31, 0);
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v37);
        v39 = v36 * (float)v38;
        v40 = v39;
        v41 = modf(v39, &iptr);
        if ( v39 >= 0.0 )
        {
          if ( v41 == 0.5 )
          {
            v43 = 1.0;
            v42 = iptr;
            goto LABEL_69;
          }
          v42 = floor(v40 + 0.5);
        }
        else if ( v41 == -0.5 )
        {
          v42 = iptr;
          v43 = -1.0;
LABEL_69:
          v44 = v42 + v43;
          if ( ((__int64)v42 & 1) != 0 )
            v42 = v44;
        }
        else
        {
          v42 = ceil(v40 + -0.5);
        }
        if ( v42 == INFINITY )
          v45 = 0x80000000;
        else
          v45 = (int)v42;
        v46 = ScriptMessageLabel__SubstrByDisp(v31, v45, 0);
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_75651716(v34, v46, 0);
        if ( v33 )
        {
          UILabel__set_text(v33, (System_String_o *)dispLabelList, 0);
          return this->fields.isBusy;
        }
      }
    }
LABEL_79:
    sub_2213CDC(dispLabelList, isMessageDelta);
  }
  return this->fields.isBusy;
}


void ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double))rootPanel->klass->vtable._8_set_alpha.methodPtr)(
    rootPanel,
    rootPanel->klass->vtable._8_set_alpha.method,
    0.0);
}


void ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_59728A6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10287/*"OnDelayWaitNextTouch"*/);
    byte_59728A6 = 1;
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
          sub_2213CDC(0, v3);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10287/*"OnDelayWaitNextTouch"*/,
          this->fields.defaultKeyDelayTime,
          0);
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
    ((void (__fastcall *)(ScriptMessageCommonManager_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_OpenUp.methodPtr)(
      this,
      0,
      this->klass->vtable._7_OpenUp.method);
  }
}


void ScriptMessageCommonManager__OnDelayWaitNextTouch(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isWaitNextTouchRequest = 0;
}


void ScriptMessageCommonManager__OnEndUpDownAnime(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  bool v6; // w1

  if ( (byte_5972899 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972899 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_18;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( Component_object )
    {
      rootObject = this->fields.rootObject;
      if ( *(float *)&Component_object[9].klass == this->fields.windowClosePosY )
      {
        if ( rootObject )
        {
          rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
          if ( rootObject )
          {
            v6 = 0;
LABEL_17:
            UnityEngine_GameObject__SetActive(rootObject, v6, 0);
            return;
          }
        }
      }
      else if ( rootObject )
      {
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
        if ( rootObject )
        {
          v6 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_18:
    sub_2213CDC(rootObject, method);
  }
}


void ScriptMessageCommonManager__OnLongPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_59728A7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10287/*"OnDelayWaitNextTouch"*/);
    byte_59728A7 = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_2213CDC(0, v3);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10287/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0);
  }
}


void ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_59728A5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10287/*"OnDelayWaitNextTouch"*/);
    byte_59728A5 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_2213CDC(0, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10287/*"OnDelayWaitNextTouch"*/,
        this->fields.defaultKeyDelayTime,
        0);
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


void ScriptMessageCommonManager__OnShake(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *messageShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728AD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10364/*"OnShake"*/);
    byte_59728AD = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0);
    if ( messageShake )
    {
      v9.fields.y = v7;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(messageShake, v9, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10364/*"OnShake"*/,
        this->fields.shakeCycle,
        0);
      return;
    }
LABEL_12:
    sub_2213CDC(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83442996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10364/*"OnShake"*/,
    0);
  v8 = this->fields.messageShake;
  if ( !byte_5969AE0 )
  {
    v5 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__OpenUp(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UnityEngine_AnimationCurve_o *windowUpCurve; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972897 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScriptMessageCommonManager_OpenUp__);
    byte_5972897 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) == 0 )
    goto LABEL_12;
  if ( !Component_object )
    goto LABEL_27;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
  {
LABEL_12:
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( !rootObject )
      goto LABEL_27;
    rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)rootObject,
                                               0);
    if ( !rootObject )
      goto LABEL_27;
    if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0).fields.y)) < this->fields.windowNormalPosY )
    {
      rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
      if ( !rootObject )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0);
      windowOpenTime = 0.0;
      if ( !isFast )
        windowOpenTime = this->fields.windowOpenTime;
      v21.fields.x = 0.0;
      v21.fields.z = 0.0;
      v21.fields.y = this->fields.windowNormalPosY;
      v11 = TweenPosition__Begin(gameObject, windowOpenTime, v21, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_27;
        windowUpCurve = this->fields.windowUpCurve;
        v11->fields.method = 0;
        v11->fields.animationCurve = windowUpCurve;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.animationCurve,
          (int32_t)windowUpCurve,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        UITweener__PlayForward((UITweener_o *)v11, 0);
        v19 = Method_ScriptMessageCommonManager_OpenUp__;
        if ( (*((_BYTE *)Method_ScriptMessageCommonManager_OpenUp__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_2213A78(Method_ScriptMessageCommonManager_OpenUp__);
        v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 7, 0, 0);
      }
      rootObject = this->fields.rootObject;
      if ( rootObject )
      {
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, 1, 0);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(rootObject, isFast);
    }
  }
}


void ScriptMessageCommonManager__PageScroll(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  float x; // s2
  float rubyLineHeight; // s0
  float betweenLineHeight; // s3
  float textOnlyLineHeight; // s1
  float y; // s1
  float v15; // s4
  int32_t defaultFontSize; // w9
  struct System_String_o *v17; // x1
  float v18; // s1
  float defaultTextOnlyLineHeight; // s3
  const MethodInfo *v20; // x2

  if ( (byte_59728AA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728AA = 1;
  }
  x = this->fields.startPosition.fields.x;
  if ( this->fields.dispPosition.fields.x <= x )
  {
    y = this->fields.dispPosition.fields.y;
    rubyLineHeight = this->fields.rubyLineHeight;
  }
  else
  {
    rubyLineHeight = this->fields.rubyLineHeight;
    betweenLineHeight = this->fields.betweenLineHeight;
    textOnlyLineHeight = this->fields.textOnlyLineHeight;
    this->fields.dispPosition.fields.x = x;
    y = this->fields.dispPosition.fields.y - (float)((float)(textOnlyLineHeight + rubyLineHeight) + betweenLineHeight);
    this->fields.dispPosition.fields.y = y;
  }
  v15 = this->fields.dispSize.fields.y;
  defaultFontSize = this->fields.defaultFontSize;
  v17 = (struct System_String_o *)StringLiteral_1/*""*/;
  v18 = this->fields.startPosition.fields.y - y;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.verticalAlign = 0;
  this->fields.fontSize = defaultFontSize;
  this->fields.defaultColorTag = v17;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  this->fields.scrollPosition.fields.y = v18 + (float)(v15 * 0.5);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
    (int32_t)v17,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScriptMessageCommonManager__StartScroll(this, isFast, v20);
}


void ScriptMessageCommonManager__PreProcLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        bool hasRuby,
        bool hasImage,
        bool hasEffect,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v10; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  UnityEngine_GameObject_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  ScriptMessageWindow_o *currentMessageWindow; // x22
  UnityEngine_GameObject_o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
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
  Il2CppObject *imagePrefab; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  ScriptMessageWindow_o *v54; // x22
  ScriptMessageCommonManager_o *v55; // x22
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  ScriptMessageWindow_o *v64; // x21
  ScriptMessageCommonManager_o *v65; // x21
  ScriptMessageCommonManager_o *v66; // x21
  Il2CppObject *mainPrefab; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  ScriptMessageWindow_o *v74; // x22
  ScriptMessageCommonManager_o *v75; // x22
  ScriptMessageCommonManager_o *v76; // x22

  v10 = this;
  if ( (byte_5972888 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    sub_2213A60(&StringLiteral_6098/*"Effect Parent"*/);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&StringLiteral_6096/*"Effect Child"*/);
    byte_5972888 = 1;
  }
  if ( !hasImage )
  {
    if ( hasEffect )
    {
      if ( !label )
        goto LABEL_73;
      p_effect = (ScriptMessageCommonManager_o **)&label->fields.effect;
      effect = (UnityEngine_Object_o *)label->fields.effect;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      if ( UnityEngine_Object__op_Equality(effect, 0, 0) )
      {
        v19 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v19, (System_String_o *)StringLiteral_6098/*"Effect Parent"*/, 0);
        *p_effect = (ScriptMessageCommonManager_o *)v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&label->fields.effect,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        this = *p_effect;
        if ( !*p_effect )
          goto LABEL_73;
        currentMessageWindow = v10->fields.currentMessageWindow;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
        if ( !currentMessageWindow )
          goto LABEL_73;
        ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)this, 0);
        v27 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v27, (System_String_o *)StringLiteral_6096/*"Effect Child"*/, 0);
        label->fields.frontEffect = v27;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&label->fields.frontEffect,
          (int32_t)v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
        if ( !this )
          goto LABEL_73;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_Transform__SetParent_83492444((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               mainPrefab,
                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields, (int32_t)this, v68, v69, v70, v71, v72, v73);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      v74 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v74 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v74, (UnityEngine_Transform_o *)this, 0);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                               (System_Collections_Generic_Stack_T__o *)this,
                                               (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields, (int32_t)this, v41, v42, v43, v44, v45, v46);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v75 = this;
      if ( !byte_5969AE0 )
      {
        this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( v75 )
      {
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v75,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (ScriptMessageCommonManager_o *)label->fields.main;
        if ( this )
          goto LABEL_68;
      }
    }
LABEL_73:
    sub_2213CDC(this, label);
  }
  this = (ScriptMessageCommonManager_o *)v10->fields.imageStock;
  if ( !this )
    goto LABEL_73;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
  {
    imagePrefab = (Il2CppObject *)v10->fields.imagePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                             imagePrefab,
                                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( label )
      {
        label->fields.image = (struct UISprite_o *)this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&label->fields.image,
          (int32_t)this,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        this = (ScriptMessageCommonManager_o *)label->fields.image;
        if ( this )
        {
          v54 = v10->fields.currentMessageWindow;
          this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( v54 )
          {
            ScriptMessageWindow__AddChildMessageScroll(v54, (UnityEngine_Transform_o *)this, 0);
            goto LABEL_34;
          }
        }
      }
    }
    goto LABEL_73;
  }
  this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                           (System_Collections_Generic_Stack_T__o *)this,
                                           (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  if ( !label )
    goto LABEL_73;
  label->fields.image = (struct UISprite_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields.image, (int32_t)this, v11, v12, v13, v14, v15, v16);
LABEL_34:
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v55 = this;
  if ( !byte_5969AE0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v55 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v55,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
LABEL_68:
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v76 = this;
  if ( !byte_5969AE5 )
  {
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v76 )
    goto LABEL_73;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v76,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  if ( hasRuby )
  {
LABEL_19:
    this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
    if ( !this )
      goto LABEL_73;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
    {
      rubyPrefab = (Il2CppObject *)v10->fields.rubyPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               rubyPrefab,
                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      label->fields.ruby = (struct UILabel_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&label->fields.ruby,
        (int32_t)Component_object,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      this = (ScriptMessageCommonManager_o *)label->fields.ruby;
      if ( !this )
        goto LABEL_73;
      v64 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v64 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v64, (UnityEngine_Transform_o *)this, 0);
    }
    else
    {
      v34 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      label->fields.ruby = (struct UILabel_o *)v34;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields.ruby, (int32_t)v34, v35, v36, v37, v38, v39, v40);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v65 = this;
    if ( !byte_5969AE0 )
    {
      this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v65 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v65,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v66 = this;
    if ( !byte_5969AE5 )
    {
      this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v66 )
      goto LABEL_73;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v66,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    UILabel__set_fontSize((UILabel_o *)this, v10->fields.rubyFontSize, 0);
  }
}


void ScriptMessageCommonManager__QuitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5972892 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9410/*"MessageShake/LogMark/BackLogButton"*/);
    byte_5972892 = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, void *, double))rootPanel->klass[1]._1.image)(
          rootPanel,
          rootPanel->klass[1]._1.gc_desc,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v4),
        (rootPanel = this->fields.talkNameManager) == 0)
    || (ScriptLineMessage__DeleteLabels(rootPanel, method),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0) )
  {
    sub_2213CDC(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0);
  AndroidBackKeyManager__RemoveBackBtn_51985588(transform, (System_String_o *)StringLiteral_9410/*"MessageShake/LogMark/BackLogButton"*/, 0);
}


void ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o **v4; // x20
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_597288D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_597288D = 1;
  }
  if ( !label )
    goto LABEL_25;
  p_fields = (ScriptMessageCommonManager_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_25;
    UILabel__RemoveFromDynamicFontList((UILabel_o *)this, 0);
    this = v4[50];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_Stack_object___Push(
      (System_Collections_Generic_Stack_T__o *)this,
      (Il2CppObject *)*p_fields,
      (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields, 0, v7, v8, v9, v10, v11, v12);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    this = (ScriptMessageCommonManager_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = v4[51];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_Stack_object___Push(
      (System_Collections_Generic_Stack_T__o *)this,
      (Il2CppObject *)*p_ruby,
      (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields.ruby, 0, v15, v16, v17, v18, v19, v20);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    this = (ScriptMessageCommonManager_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptMessageCommonManager_o *, const MethodInfo *, double))this->klass->vtable._8_IsEnableCloseDown.methodPtr)(
        this,
        this->klass->vtable._8_IsEnableCloseDown.method,
        0.0);
      this = v4[52];
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)*p_image,
          (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&label->fields.image, 0, v23, v24, v25, v26, v27, v28);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_2213CDC(this, label);
  }
LABEL_23:
  ScriptMessageLabel__Release(label, 0);
  this = v4[53];
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_Stack_object___Push(
    (System_Collections_Generic_Stack_T__o *)this,
    (Il2CppObject *)label,
    (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void ScriptMessageCommonManager__RequestFastMessage(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 1;
}


void ScriptMessageCommonManager__ResetLongPress(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UITouchPress_o *touchPress; // x0

  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_2213CDC(0, method);
  UITouchPress__PressReset(touchPress, 0);
  this->fields.isFastMessageRequest = 0;
}


void ScriptMessageCommonManager__ResetMessageWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currentMessageWindow; // x20
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  const MethodInfo *v13; // x1
  struct ScriptMessageWindow_o *v14; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct ScriptMessageWindow_o *v22; // x8
  struct UnityEngine_GameObject_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *v31; // x21
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20
  struct ScriptMessageWindow_o *v35; // x8
  struct UnityEngine_GameObject_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct ScriptMessageWindow_o *v43; // x8
  struct UnityEngine_GameObject_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct ScriptMessageWindow_o *v57; // x8
  struct UnityEngine_Transform_o *talkNameMessageRoot; // x1
  struct ScriptMessageWindow_o *v59; // x8
  struct ScriptLineMessage_o *talkNameManager; // x20
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct ScriptMessageWindow_o *v67; // x8
  struct ScriptLineMessage_o *v68; // x20
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct ScriptMessageWindow_o *v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo *v82; // x6
  const MethodInfo *v83; // x1

  if ( (byte_59728A3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728A3 = 1;
  }
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(currentMessageWindow, 0, 0) )
  {
    defaultMessageWindow = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = defaultMessageWindow;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMessageWindow,
      (int32_t)defaultMessageWindow,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v14 = this->fields.defaultMessageWindow;
    if ( v14 )
    {
      messageMainLabel = (char *)v14->fields.messageMainLabel;
      if ( messageMainLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
        this->fields.mainPrefab = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mainPrefab,
          (int32_t)gameObject,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        v22 = this->fields.defaultMessageWindow;
        if ( v22 )
        {
          messageMainLabel = (char *)v22->fields.messageRubyLabel;
          if ( messageMainLabel )
          {
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
            this->fields.rubyPrefab = v23;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.rubyPrefab,
              (int32_t)v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_2213CDC(messageMainLabel, v13);
  }
  v30 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v31 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Equality(v30, v31, 0) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v32);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, v13);
    messageMainLabel = (char *)this->fields.currentMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_33;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    UnityEngine_Object__Destroy_83459800(v34, 0);
    v35 = this->fields.defaultMessageWindow;
    if ( !v35 )
      goto LABEL_33;
    messageMainLabel = (char *)v35->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    this->fields.mainPrefab = v36;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mainPrefab,
      (int32_t)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v43 = this->fields.defaultMessageWindow;
    if ( !v43 )
      goto LABEL_33;
    messageMainLabel = (char *)v43->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    this->fields.rubyPrefab = v44;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rubyPrefab,
      (int32_t)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v57 = this->fields.defaultMessageWindow;
    if ( !v57 )
      goto LABEL_33;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameMessageRoot = v57->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 7) = talkNameMessageRoot;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(messageMainLabel + 56),
      (int32_t)talkNameMessageRoot,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v59 = this->fields.defaultMessageWindow;
    if ( !v59 )
      goto LABEL_33;
    messageMainLabel = (char *)v59->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !talkNameManager )
      goto LABEL_33;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&talkNameManager->fields.mainPrefab,
      (int32_t)messageMainLabel,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v67 = this->fields.defaultMessageWindow;
    if ( !v67 )
      goto LABEL_33;
    messageMainLabel = (char *)v67->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v68 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !v68 )
      goto LABEL_33;
    v68->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v68->fields.rubyPrefab,
      (int32_t)messageMainLabel,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_33;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !messageMainLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0);
    v75 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v75;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMessageWindow,
      (int32_t)v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v82);
    ScriptMessageCommonManager__ResetScroll(this, v83);
  }
}


void ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v6; // x8
  struct ScriptMessageWindow_o *v7; // x8
  float y; // s10
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59728AC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728AC = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v6 = v2->fields.currentMessageWindow;
  if ( !v6
    || (this = (ScriptMessageCommonManager_o *)v6->fields.messageScroll) == 0
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (v7 = v2->fields.currentMessageWindow) == 0)
    || (this = (ScriptMessageCommonManager_o *)v7->fields.messageScroll) == 0
    || (y = v2->fields.dispSize.fields.y,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_17:
    sub_2213CDC(this, method);
  }
  v10.fields.z = localPosition.fields.z;
  v10.fields.y = y * 0.5;
  v10.fields.x = localPosition.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ScriptMessageCommonManager__ReturnScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        bool isScrollStop,
        const MethodInfo *method)
{
  float y; // s0
  float v5; // s1
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


bool ScriptMessageCommonManager__ReturnScroll2(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  float y; // s0
  float v4; // s1
  float v5; // s9
  float v6; // s8

  y = this->fields.dispSize.fields.y;
  v4 = (float)(this->fields.beforeTextOnlyLineHeight + this->fields.beforeTextOnlyLineHeight)
     - this->fields.dispPosition.fields.y;
  v5 = y - (float)(y * 0.5);
  v6 = v4 - this->fields.scrollPosition.fields.y;
  if ( v6 > v5 )
  {
    this->fields.scrollPosition.fields.y = (float)(v4 - y) + (float)(y * 0.5);
    ScriptMessageCommonManager__StartScroll(this, isFast, method);
  }
  return v6 > v5;
}


void ScriptMessageCommonManager__ReturnText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float y; // s2

  v2 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v3 = v2 + this->fields.betweenLineHeight;
  y = this->fields.dispPosition.fields.y;
  this->fields.beforeTextOnlyLineHeight = v2;
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = y - v3;
  ScriptMessageCommonManager__SetDefaultState(this, method);
}


void ScriptMessageCommonManager__SetActiveAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        bool instant,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptMessageCommonManager__SetActiveButton(this, this->fields.autoMessageButton, isOn, instant, v4);
}


void ScriptMessageCommonManager__SetActiveBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        bool instant,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptMessageCommonManager__SetActiveButton(this, this->fields.backLogButton, isOn, instant, v4);
}


void ScriptMessageCommonManager__SetActiveButton(
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
                                                 0)) == 0
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0)) == 0 )
  {
    sub_2213CDC(this, button);
  }
  if ( isOn )
    v7 = 1.0;
  else
    v7 = 0.0;
  if ( instant )
    v8 = 0.0;
  else
    v8 = 0.2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(gameObject, v8, v7, 0);
}


void ScriptMessageCommonManager__SetAlignedDispPosition(
        ScriptMessageCommonManager_o *this,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  int32_t horizontalAlign; // w8
  float v5; // s0
  float alignRightBase; // s1
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
void ScriptMessageCommonManager__SetAutoMessageSprite(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        const MethodInfo *method)
{
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v6; // x8

  if ( (byte_59728B4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18195/*"btn_auto_on"*/);
    sub_2213A60(&StringLiteral_18194/*"btn_auto_off"*/);
    byte_59728B4 = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_2213CDC(0, isOn);
  v6 = (System_String_o **)&StringLiteral_18195/*"btn_auto_on"*/;
  if ( !isOn )
    v6 = (System_String_o **)&StringLiteral_18194/*"btn_auto_off"*/;
  UISprite__set_spriteName(autoMessageSprite, *v6, 0);
}


void ScriptMessageCommonManager__SetBetweenLineHeight(
        ScriptMessageCommonManager_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_2213CDC(0, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void ScriptMessageCommonManager__SetDefaultState(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  float defaultTextOnlyLineHeight; // s0
  float defaultBetweenLineHeight; // s1
  struct System_String_o *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_597289A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597289A = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.fontSize = (unsigned int)this->fields.defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  this->fields.defaultColorTag = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_2213CDC(0, enable);
  UICommonButton__SetButtonEnable(autoMessageButton, enable, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetEnableBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *backLogButton; // x0

  backLogButton = this->fields.backLogButton;
  if ( !backLogButton )
    sub_2213CDC(0, enable);
  UICommonButton__SetButtonEnable(backLogButton, enable, 1, 0);
}


void ScriptMessageCommonManager__SetFaceIconContentSize(
        ScriptMessageCommonManager_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  ;
}


void ScriptMessageCommonManager__SetFontSize(
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

  if ( (byte_597289D & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_597289D = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, sizeName);
  this->fields.fontSize = ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0);
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlignString, 0);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v11 = (float)fontSize;
  if ( textOnlyLineHeight < v11 )
    this->fields.textOnlyLineHeight = v11;
}


void ScriptMessageCommonManager__SetFontType(
        ScriptMessageCommonManager_o *this,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_597289C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597289C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, font);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0, 0);
  if ( v5 )
  {
    if ( !this )
      sub_2213CDC(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
    (int32_t)defaultFontType,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void ScriptMessageCommonManager__SetForcedDisableTurnPage(
        ScriptMessageCommonManager_o *this,
        bool flag,
        bool force,
        const MethodInfo *method)
{
  this->fields.isForcedDisableTurnPage = flag;
  this->fields.isForcedEnableTurnPage = force & ~flag;
}


void ScriptMessageCommonManager__SetHorizontalAlign(
        ScriptMessageCommonManager_o *this,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  this->fields.horizontalAlign = horizontalAlign;
}


void ScriptMessageCommonManager__SetMaxFontSize(
        ScriptMessageCommonManager_o *this,
        int32_t fontSize,
        const MethodInfo *method)
{
  this->fields.maxFontSize = fontSize;
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetMessageOffMode(
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
    sub_2213CDC(0, flag);
  *(_QWORD *)&v3 = 0;
  LODWORD(v4) = 1.0;
  if ( this->fields.isMessageOut && !flag )
    *(float *)&v3 = 1.0;
  ((void (__fastcall *)(long double, long double))rootPanel->klass->vtable._8_set_alpha.methodPtr)(v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetMessageSpeedForcedNormal(
        ScriptMessageCommonManager_o *this,
        bool isForced,
        const MethodInfo *method)
{
  this->fields.isMessageSpeedForcedNormal = isForced;
  ScriptMessageCommonManager__SetTextScrollSpeed(this, (const MethodInfo *)isForced);
}


void ScriptMessageCommonManager__SetMessageVerticalAlign(
        ScriptMessageCommonManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.messageAlign = value;
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetMessageWindowCollider(
        ScriptMessageCommonManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *currentMessageWindow; // x0

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_2213CDC(0, isEnable);
  ScriptMessageWindow__SetEnabledCollider(currentMessageWindow, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5972890 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972890 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(rootObject, 0, 0) )
  {
    v7 = this->fields.rootObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ScriptMessageCommonManager__SetScreen(
        ScriptMessageCommonManager_o *this,
        int32_t x,
        int32_t y,
        int32_t w,
        int32_t h,
        bool isWindowBack,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootPanel; // x0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v16; // x8
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v18; // x8
  UIPanel_o *dispPanel; // x22
  struct ScriptMessageWindow_o *v20; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  long double v22; // q0
  struct ScriptMessageWindow_o *v23; // x8
  float v24; // s0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972893 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972893 = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    goto LABEL_33;
  rootPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, bool, const MethodInfo *, double))rootPanel->klass[1]._1.element_class)(
                                            rootPanel,
                                            rootPanel->klass[1]._1.castClass,
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
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0);
    if ( !rootPanel )
      goto LABEL_33;
    v26.fields.y = (float)y;
    v26.fields.x = (float)x;
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
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0);
    v16 = this->fields.currentMessageWindow;
    if ( !v16 || !rootPanel )
      goto LABEL_33;
    v26.fields.x = v16->fields.defaultWindowDispCenter.fields.x;
    v26.fields.y = v16->fields.defaultWindowDispCenter.fields.y;
  }
  else
  {
    rootPanel = this->fields.messageBase;
    this->fields.dispSize = this->fields.defaultAllDispSize;
    if ( !rootPanel )
      goto LABEL_33;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0);
    if ( !rootPanel )
      goto LABEL_33;
    v26.fields.x = this->fields.defaultAllDispCenter.fields.x;
    v26.fields.y = this->fields.defaultAllDispCenter.fields.y;
  }
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, v26, 0);
  rubyLineHeight = this->fields.rubyLineHeight;
  v18 = this->fields.currentMessageWindow;
  this->fields.startPosition.fields.x = 0.0;
  this->fields.isWindowBack = isWindowBack;
  this->fields.startPosition.fields.y = -(float)(rubyLineHeight + 2.0);
  if ( !v18 )
    goto LABEL_33;
  dispPanel = v18->fields.dispPanel;
  rootPanel = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&x);
  if ( !dispPanel
    || (v27.fields.y = 0.0,
        v27.fields.w = this->fields.dispSize.fields.y,
        v27.fields.z = (float)ManagerConfig_TypeInfo->static_fields->WIDTH,
        v27.fields.x = 0.0,
        UIPanel__set_baseClipRegion(dispPanel, v27, 0),
        (v20 = this->fields.currentMessageWindow) == 0) )
  {
LABEL_33:
    sub_2213CDC(rootPanel, *(_QWORD *)&x);
  }
  messageWindowBack = (UnityEngine_Object_o *)v20->fields.messageWindowBack;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&x);
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0, 0);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    v23 = this->fields.currentMessageWindow;
    if ( v23 )
    {
      rootPanel = (UnityEngine_GameObject_o *)v23->fields.messageWindowBack;
      if ( rootPanel )
      {
        *(_QWORD *)&v22 = 0;
        if ( isWindowBack )
          *(float *)&v22 = 1.0;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.element_class)(
          rootPanel,
          rootPanel->klass[1]._1.castClass,
          v22);
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  ScriptMessageCommonManager__ClearText(this, *(const MethodInfo **)&x);
  v24 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v24 == INFINITY )
    return 0x80000000;
  else
    return (int)v24;
}


void ScriptMessageCommonManager__SetSpeed(ScriptMessageCommonManager_o *this, float n, const MethodInfo *method)
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


bool ScriptMessageCommonManager__SetTalkName(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        System_String_o *classname,
        System_String_o *charaname,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v30; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v32; // q0
  struct ScriptLineMessage_o *talkNameManager; // x9
  struct ScriptMessageWindow_o *v34; // x8
  float x; // s0
  float v36; // s1
  int32_t talkNameBackBaseWidth; // w8
  int v38; // w9
  int32_t *p_talkNameBackBaseWidth; // t2
  float v40; // s0
  int v41; // w10
  struct ScriptMessageWindow_o *v42; // x8
  struct ScriptMessageWindow_o *v43; // x8
  UnityEngine_GameObject_c *klass; // x8
  float v45; // s1
  float defaultFontSize; // s0
  float v47; // s0
  float v48; // s1
  float y; // s2
  const MethodInfo *v50; // x1
  long double v51; // q0

  if ( (byte_59728A4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_162/*" 1.5]"*/);
    sub_2213A60(&StringLiteral_16619/*"[image "*/);
    byte_59728A4 = 1;
  }
  v11 = System_String__Concat_75651716(classname, charaname, 0);
  if ( System_String__IsNullOrEmpty(v11, 0) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v12);
    return 1;
  }
  this->fields.talkName = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.talkName, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  this->fields.talkNameOnly = charaname;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.talkNameOnly,
    (int32_t)charaname,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  isWindowBack = this->fields.isWindowBack;
  this->fields.talkNameIndex = index;
  if ( isWindowBack )
  {
    currentMessageWindow = this->fields.currentMessageWindow;
    if ( !currentMessageWindow )
      goto LABEL_41;
    talkNameRootObject = currentMessageWindow->fields.talkNameRootObject;
    if ( !talkNameRootObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(talkNameRootObject, 1, 0);
    talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
    if ( !talkNameRootObject )
      goto LABEL_41;
    talkNameRootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, System_String_o *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))talkNameRootObject->klass[1]._1.this_arg.data)(
                                                       talkNameRootObject,
                                                       v11,
                                                       0,
                                                       0,
                                                       0,
                                                       1,
                                                       *(_QWORD *)&talkNameRootObject->klass[1]._1.this_arg.bits);
    v30 = this->fields.currentMessageWindow;
    if ( !v30 )
      goto LABEL_41;
    talkNameBack = (UnityEngine_Object_o *)v30->fields.talkNameBack;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    talkNameRootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(talkNameBack, 0, 0);
    if ( ((unsigned __int8)talkNameRootObject & 1) != 0 )
    {
      talkNameManager = this->fields.talkNameManager;
      if ( !talkNameManager )
        goto LABEL_41;
      v34 = this->fields.currentMessageWindow;
      if ( !v34 || !talkNameBack )
        goto LABEL_41;
      x = talkNameManager->fields.maxDispPosition.fields.x;
      if ( x < talkNameManager->fields.dispPosition.fields.x )
        x = talkNameManager->fields.dispPosition.fields.x;
      v36 = talkNameManager->fields.startPosition.fields.x;
      p_talkNameBackBaseWidth = &v34->fields.talkNameBackBaseWidth;
      talkNameBackBaseWidth = v34->fields.talkNameBackBaseWidth;
      v38 = p_talkNameBackBaseWidth[1];
      v40 = x - v36;
      if ( v40 == INFINITY )
        v41 = 0x80000000;
      else
        v41 = (int)v40;
      if ( v40 > (float)v38 )
        v38 = v41;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((v38 + talkNameBackBaseWidth) & 1) + v38 + talkNameBackBaseWidth,
        0);
    }
    v42 = this->fields.currentMessageWindow;
    if ( imageName )
    {
      if ( v42 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v42->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0);
          v43 = this->fields.currentMessageWindow;
          if ( v43 )
          {
            talkNameRootObject = (UnityEngine_GameObject_o *)v43->fields.talkNameIcon;
            if ( talkNameRootObject )
            {
              klass = talkNameRootObject->klass;
              LODWORD(v32) = 1.0;
              goto LABEL_36;
            }
          }
        }
      }
LABEL_41:
      sub_2213CDC(talkNameRootObject, v26);
    }
  }
  else
  {
    if ( imageName )
      v11 = System_String__Concat_75696856(
              (System_String_o *)StringLiteral_16619/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_162/*" 1.5]"*/,
              v11,
              0);
    v45 = this->fields.startPosition.fields.x;
    defaultFontSize = (float)this->fields.defaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.fontSize = (int)defaultFontSize;
    this->fields.dispPosition.fields.x = v45 + -50.0;
    ScriptMessageCommonManager__UpdateLabels(this, v11, 1, 0, v27);
    v47 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    v48 = v47 + this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    this->fields.beforeTextOnlyLineHeight = v47;
    this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
    this->fields.dispPosition.fields.y = y - v48;
    ScriptMessageCommonManager__SetDefaultState(this, v50);
    v42 = this->fields.currentMessageWindow;
  }
  if ( !v42 )
    goto LABEL_41;
  talkNameRootObject = (UnityEngine_GameObject_o *)v42->fields.talkNameIcon;
  if ( !talkNameRootObject )
    goto LABEL_41;
  klass = talkNameRootObject->klass;
  *(_QWORD *)&v32 = 0;
LABEL_36:
  ((void (__fastcall *)(long double))klass[1]._1.element_class)(v32);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_41;
  *(_QWORD *)&v51 = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v51 = 1.0;
  ((void (__fastcall *)(long double))talkNameRootObject->klass[1]._1.element_class)(v51);
  return 1;
}


void ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x21
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UISprite_o *talkNameBack; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *talkNameAtlas; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIAtlas_o *mAtlas; // x1
  struct System_String_o *mSpriteName; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UISpriteData_o *AtlasSprite; // x0

  v4 = this;
  if ( (byte_59728A1 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59728A1 = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_21;
  talkNameBack = currentMessageWindow->fields.talkNameBack;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, imageName);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)talkNameBack, 0, 0) )
  {
    talkNameAtlas = (UnityEngine_Object_o *)v4->fields.talkNameAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !talkNameBack )
        goto LABEL_21;
      mAtlas = talkNameBack->fields.mAtlas;
      v4->fields.talkNameAtlas = mAtlas;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.talkNameAtlas,
        (int32_t)mAtlas,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      mSpriteName = talkNameBack->fields.mSpriteName;
      v4->fields.talkNameSpriteName = mSpriteName;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.talkNameSpriteName,
        (int32_t)mSpriteName,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    this = (ScriptMessageCommonManager_o *)System_String__IsNullOrEmpty(imageName, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( talkNameBack )
      {
        UISprite__set_atlas(talkNameBack, v4->fields.talkNameAtlas, 0);
        UISprite__set_spriteName(talkNameBack, v4->fields.talkNameSpriteName, 0);
LABEL_18:
        AtlasSprite = UISprite__GetAtlasSprite(talkNameBack, 0);
        if ( AtlasSprite )
          UIWidget__set_height(
            (UIWidget_o *)talkNameBack,
            (AtlasSprite->fields.height & 1) + AtlasSprite->fields.height,
            0);
        return;
      }
    }
    else
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, imageName);
      this = (ScriptMessageCommonManager_o *)AtlasManager__SetMark(talkNameBack, imageName, 0);
      if ( talkNameBack )
        goto LABEL_18;
    }
LABEL_21:
    sub_2213CDC(this, imageName);
  }
}


void ScriptMessageCommonManager__SetTapSkip(ScriptMessageCommonManager_o *this, bool flag, const MethodInfo *method)
{
  this->fields.isTapSkip = flag;
  this->fields.isTapSkipRequest = 0;
}


void ScriptMessageCommonManager__SetText(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  ScriptMessageCommonManager__ClearText(this, (const MethodInfo *)text);
  ScriptMessageCommonManager__UpdateLabels(this, text, 1, 0, v5);
}


void ScriptMessageCommonManager__SetTextScrollSpeed(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  float defaultScrollTime; // s0
  __int64 v4; // x1
  float ScenarioTextSpeed; // s8
  BalanceConfig_c *v6; // x0
  float ScenarioTextSpeedDefault; // s9
  __int64 v8; // x1
  float v9; // s0
  OptionManager_c *v10; // x0
  float v11; // s0
  __int64 v12; // x1
  float ScenarioScrollSpeed; // s0
  BalanceConfig_c *v14; // x0
  float v15; // s8
  float ScenarioScrollSpeedHigh; // s9
  float v17; // s0
  float fastScrollTime; // s1

  if ( (byte_597289B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    byte_597289B = 1;
  }
  if ( this->fields.isMessageSpeedForcedNormal )
  {
    defaultScrollTime = this->fields.defaultScrollTime;
    this->fields.messageSpeed = 1.0;
  }
  else
  {
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0);
    v6 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
      v6 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v6->static_fields->ScenarioTextSpeedDefault;
    v9 = OptionManager__GetScenarioTextSpeed(0);
    v10 = OptionManager_TypeInfo;
    if ( v9 >= BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh )
      v11 = 0.0;
    else
      v11 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v11;
    if ( !*(&v10->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v10, v8);
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0);
    v14 = BalanceConfig_TypeInfo;
    v15 = ScenarioScrollSpeed;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
      v14 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v14->static_fields->ScenarioScrollSpeedHigh;
    v17 = OptionManager__GetScenarioScrollSpeed(0);
    if ( v15 >= ScenarioScrollSpeedHigh )
      defaultScrollTime = this->fields.fastScrollTime;
    else
      defaultScrollTime = this->fields.defaultScrollTime
                        / (float)(v17 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
  }
  fastScrollTime = this->fields.fastScrollTime;
  this->fields.scrollSpeed = defaultScrollTime;
  if ( defaultScrollTime < fastScrollTime )
    this->fields.scrollSpeed = fastScrollTime;
  this->fields.stepTime = this->fields.defaultStepTime;
}


void ScriptMessageCommonManager__Shake(
        ScriptMessageCommonManager_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  float v11; // s0

  v11 = 0.0;
  if ( duration > 0.0 )
    v11 = UnityEngine_Time__get_time(0) + duration;
  if ( !this )
    sub_2213CDC(this, method);
  this->fields.shakeTime = v11;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  ScriptMessageCommonManager__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__StartScroll(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x19
  __int64 v5; // x8
  float v6; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
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
  struct ScriptMessageWindow_o *v24; // x8
  __int64 v25; // x1
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v27; // x8

  v4 = this;
  if ( (byte_59728AB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_2213A60(&StringLiteral_6283/*"EndScroll"*/);
    byte_59728AB = 1;
  }
  v5 = 316;
  if ( isFast )
    v5 = 172;
  v6 = *(float *)((char *)&v4->klass + v5);
  if ( v6 > 0.0 )
  {
    currentMessageWindow = v4->fields.currentMessageWindow;
    v4->fields.isScroll = 1;
    if ( currentMessageWindow )
    {
      this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (ScriptMessageCommonManager_o *)TweenPosition__Begin(gameObject, v6, v4->fields.scrollPosition, 0);
        if ( this )
        {
          v9 = this;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
          LODWORD(v9->fields.rootPanel) = 3;
          v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
          v9->fields.messageShake = (struct UnityEngine_Transform_o *)v10;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v9->fields.messageShake,
            (int32_t)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          v17 = StringLiteral_6283/*"EndScroll"*/;
          v9->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_6283/*"EndScroll"*/;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v9->fields.defaultMessageWindow,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  v24 = v4->fields.currentMessageWindow;
  if ( !v24 )
    goto LABEL_21;
  this = (ScriptMessageCommonManager_o *)v24->fields.messageScroll;
  if ( !this )
    goto LABEL_21;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v27 = v4->fields.currentMessageWindow;
  if ( !v27
    || (this = (ScriptMessageCommonManager_o *)v27->fields.messageScroll) == 0
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_21:
    sub_2213CDC(this, isFast);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.scrollPosition, 0);
  v4->fields.isFastMessageRequest = 0;
  v4->fields.isScroll = 0;
}


void ScriptMessageCommonManager__UpdateLabels(
        ScriptMessageCommonManager_o *this,
        System_String_o *txt,
        bool isStretch,
        bool isFoward,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 rootPanel; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  long double v17; // q0
  _BOOL4 isBusy; // w8
  float stepTime; // s8
  System_Text_StringBuilder_c *v20; // x0
  System_Text_StringBuilder_o *v21; // x23
  System_Text_StringBuilder_o **v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_o *defaultColorTag; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x23
  __int64 v37; // x26
  int32_t v38; // w27
  int v39; // w25
  _BOOL4 isEffectMessage; // w28
  int32_t v41; // w28
  System_String_o *v42; // x29
  System_String_o *v43; // x0
  int32_t BraceIndex; // w0
  System_String_o *v45; // x0
  __int64 v46; // x1
  int32_t v47; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w29
  System_Text_StringBuilder_o *v57; // x28
  float v58; // s0
  float v59; // s1
  float y; // s2
  const MethodInfo *v61; // x1
  __int64 v62; // x1
  ScriptReplaceString_c *v63; // x0
  int32_t playerGenderIndex; // w29
  struct System_String_o *v65; // x1
  System_String_o *v66; // x27
  const MethodInfo *v67; // x4
  bool v68; // w8
  char v69; // w3
  ScriptMessageCommonManager_o *v70; // x0
  System_String_o *v71; // x1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_String_o *v78; // x1
  MissionNaviTransitionBoardItem_o *v79; // x0
  System_String_o *v80; // x29
  int32_t v81; // w1
  int32_t v82; // w2
  System_String_o *v83; // x0
  __int64 *v84; // x8
  __int64 v85; // x1
  System_String_o *v86; // x27
  const MethodInfo *v87; // x1
  __int64 v88; // x1
  System_String_o *v89; // x27
  System_String_array *v90; // x0
  struct System_String_o *v91; // x1
  System_String_array *v92; // x27
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_String_o *v99; // x0
  __int64 v100; // x1
  System_Text_StringBuilder_o *v101; // x20
  System_String_o **colorTag; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597288F & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
    sub_2213A60(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__);
    sub_2213A60(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__);
    sub_2213A60(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
    sub_2213A60(&StringLiteral_24522/*"servantName"*/);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_21053/*"i"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_16443/*"[*"*/);
    sub_2213A60(&StringLiteral_16655/*"[~1]"*/);
    sub_2213A60(&StringLiteral_16589/*"[^"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_24111/*"r"*/);
    sub_2213A60(&StringLiteral_19805/*"effectmessage"*/);
    sub_2213A60(&StringLiteral_22314/*"line"*/);
    sub_2213A60(&StringLiteral_21266/*"image"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_16654/*"[~"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_597288F = 1;
  }
  text = 0;
  v8 = sub_2213CCC(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor((ScriptMessageCommonManager___c__DisplayClass113_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_107;
  *(_QWORD *)(v8 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16);
  isBusy = this->fields.isBusy;
  *(_BYTE *)(v8 + 36) = isFoward;
  if ( !isBusy )
    this->fields.isBusy = 1;
  rootPanel = (__int64)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_107;
  stepTime = 0.0;
  LODWORD(v17) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v17 = 0.0;
  (*(void (__fastcall **)(long double))(*(_QWORD *)rootPanel + 440LL))(v17);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  v20 = System_Text_StringBuilder_TypeInfo;
  *(float *)(v8 + 32) = stepTime;
  v21 = (System_Text_StringBuilder_o *)sub_2213CCC(v20);
  System_Text_StringBuilder___ctor(v21, 0);
  *(_QWORD *)(v8 + 16) = v21;
  v22 = (System_Text_StringBuilder_o **)(v8 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v8 + 40) = defaultColorTag;
  colorTag = (System_String_o **)(v8 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)defaultColorTag, v30, v31, v32, v33, v34, v35);
  v36 = sub_2213CCC(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    (ScriptMessageCommonManager_ProcAddLabel_o *)v36,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0);
  v37 = sub_2213CCC(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    (ScriptMessageCommonManager_ProcAddLabel2_o *)v37,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0);
  if ( !txt )
    goto LABEL_107;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_105;
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = System_String__get_Chars(txt, v38, 0);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v10);
      v56 = v38 + 1;
      rootPanel = ScriptMessageLabel__GetBraceIndex(txt, v38 + 1, 0);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_58;
      v41 = rootPanel;
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v10);
      rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v56, 0);
      if ( !rootPanel )
        goto LABEL_107;
      v42 = (System_String_o *)rootPanel;
      if ( System_String__Equals_75686512((System_String_o *)rootPanel, (System_String_o *)StringLiteral_19805/*"effectmessage"*/, 0) )
      {
        v43 = System_String__Substring_75702848(txt, v38 + 15, v39 + v41 - 15, 0);
        rootPanel = System_String__op_Equality(v43, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
        if ( (rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = System_String__Equals_75686512(v42, (System_String_o *)StringLiteral_24111/*"r"*/, 0);
        if ( (rootPanel & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_107;
          (*(void (__fastcall **)(_QWORD, void *, _QWORD))(v37 + 24))(
            *(_QWORD *)(v37 + 64),
            StringLiteral_113/*" "*/,
            *(_QWORD *)(v37 + 40));
          v58 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          v59 = v58 + this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          this->fields.beforeTextOnlyLineHeight = v58;
          this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
          this->fields.dispPosition.fields.y = y - v59;
          ScriptMessageCommonManager__SetDefaultState(this, v61);
        }
      }
      goto LABEL_57;
    }
    v56 = v38 + 1;
LABEL_58:
    v39 = -v56;
    v38 = v56;
    if ( v56 >= txt->fields._stringLength )
      goto LABEL_105;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v57 = *v22;
    rootPanel = System_String__get_Chars(txt, v38, 0);
    if ( !v57 )
      goto LABEL_107;
    v56 = v38 + 1;
    rootPanel = (__int64)System_Text_StringBuilder__Append_75737396(v57, rootPanel, 0);
    goto LABEL_58;
  }
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v10);
  v56 = v38 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v38 + 1, 0);
  if ( BraceIndex == -1 )
  {
    rootPanel = (__int64)*v22;
    if ( !*v22 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_75735064(
                           (System_Text_StringBuilder_o *)rootPanel,
                           (System_String_o *)StringLiteral_16427/*"["*/,
                           0);
    goto LABEL_58;
  }
  v41 = BraceIndex;
  rootPanel = System_String__get_Chars(txt, v56, 0);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    v45 = System_String__Substring_75702848(txt, v38 + 2, v39 + v41 - 2, 0);
    v47 = System_Int32__Parse(v45, 0);
    if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v46);
    String = ScriptReplaceString__GetString(v47, 0);
    TagSplitString = System_String__Concat_75651716(String, (System_String_o *)StringLiteral_16447/*"[-]"*/, 0);
    goto LABEL_54;
  }
  rootPanel = System_String__get_Chars(txt, v56, 0);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v62);
    if ( !byte_59725AE )
    {
      sub_2213A60(&ScriptReplaceString_TypeInfo);
      byte_59725AE = 1;
    }
    v63 = ScriptReplaceString_TypeInfo;
    if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v62);
      v63 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v63->static_fields->playerGenderIndex;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v62);
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v38 + 2, playerGenderIndex, 0);
LABEL_54:
    v65 = *(struct System_String_o **)(v8 + 40);
    v66 = TagSplitString;
    this->fields.defaultColorTag = v65;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)v65,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v68 = isStretch;
    v69 = *(_BYTE *)(v8 + 36);
    v70 = this;
    v71 = v66;
LABEL_55:
    ScriptMessageCommonManager__UpdateLabels(v70, v71, v68, v69, v67);
    v78 = this->fields.defaultColorTag;
    v79 = (MissionNaviTransitionBoardItem_o *)(v8 + 40);
    *(_QWORD *)(v8 + 40) = v78;
LABEL_56:
    sub_2213A04(v79, (int32_t)v78, v72, v73, v74, v75, v76, v77);
LABEL_57:
    v56 = v41 + 1;
    goto LABEL_58;
  }
  rootPanel = System_String__get_Chars(txt, v56, 0);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    rootPanel = (__int64)System_String__Substring_75702848(txt, v38, v39 + v41 + 1, 0);
    if ( !v37 )
      goto LABEL_107;
LABEL_73:
    v85 = rootPanel;
LABEL_74:
    rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v37 + 24))(
                  *(_QWORD *)(v37 + 64),
                  v85,
                  *(_QWORD *)(v37 + 40));
    goto LABEL_57;
  }
  rootPanel = System_String__get_Chars(txt, v56, 0);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_57;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v10);
  rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v56, 0);
  if ( !rootPanel )
    goto LABEL_107;
  v80 = (System_String_o *)rootPanel;
  rootPanel = System_String__Equals_75686512((System_String_o *)rootPanel, (System_String_o *)StringLiteral_21266/*"image"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    v81 = v38 + 7;
    v82 = v39 + v41 - 7;
    goto LABEL_71;
  }
  if ( System_String__Equals_75686512(v80, (System_String_o *)StringLiteral_19805/*"effectmessage"*/, 0) )
  {
    v86 = System_String__Substring_75702848(txt, v38 + 15, v39 + v41 - 15, 0);
    rootPanel = System_String__op_Inequality(v86, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
    if ( (rootPanel & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_107;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
      rootPanel = (__int64)System_String__Concat_75694928(
                             (System_String_o *)StringLiteral_16443/*"[*"*/,
                             v86,
                             (System_String_o *)StringLiteral_16691/*"]"*/,
                             0);
      if ( !v37 )
        goto LABEL_107;
      rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v37 + 24))(
                    *(_QWORD *)(v37 + 64),
                    rootPanel,
                    *(_QWORD *)(v37 + 40));
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_57;
  }
  rootPanel = System_String__Equals_75686512(v80, (System_String_o *)StringLiteral_21053/*"i"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    v81 = v38 + 3;
    v82 = v39 + v41 - 3;
LABEL_71:
    v83 = System_String__Substring_75702848(txt, v81, v82, 0);
    v84 = &StringLiteral_16589/*"[^"*/;
LABEL_72:
    rootPanel = (__int64)System_String__Concat_75694928(
                           (System_String_o *)*v84,
                           v83,
                           (System_String_o *)StringLiteral_16691/*"]"*/,
                           0);
    if ( !v37 )
      goto LABEL_107;
    goto LABEL_73;
  }
  rootPanel = System_String__Equals_75686512(v80, (System_String_o *)StringLiteral_24111/*"r"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    ScriptMessageCommonManager__ReturnText(this, v87);
    v78 = this->fields.defaultColorTag;
    v79 = (MissionNaviTransitionBoardItem_o *)(v8 + 40);
    *colorTag = v78;
    goto LABEL_56;
  }
  rootPanel = System_String__Equals_75686512(v80, (System_String_o *)StringLiteral_24522/*"servantName"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    v89 = System_String__Substring_75702848(txt, v38 + 12, v39 + v41 - 12, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v88);
    v90 = ScriptMessageLabel__AnalysTagParam(v89, 0, 0);
    v91 = *(struct System_String_o **)(v8 + 40);
    v92 = v90;
    this->fields.defaultColorTag = v91;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)v91,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    v99 = ScriptMessageLabel__GetServantChangeName(v92, 0);
    v68 = isStretch;
    v69 = *(_BYTE *)(v8 + 36);
    v71 = v99;
    v70 = this;
    goto LABEL_55;
  }
  rootPanel = System_String__StartsWith(v80, (System_String_o *)StringLiteral_22314/*"line"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
    rootPanel = (__int64)System_String__Substring_75702848(txt, v38 + 5, v39 + v41 - 5, 0);
    if ( !rootPanel )
      goto LABEL_107;
    if ( *(int *)(rootPanel + 16) < 1 )
    {
      if ( !v37 )
        goto LABEL_107;
      v85 = StringLiteral_16655/*"[~1]"*/;
      goto LABEL_74;
    }
    v83 = System_String__Trim((System_String_o *)rootPanel, 0);
    v84 = &StringLiteral_16654/*"[~"*/;
    goto LABEL_72;
  }
  if ( v41 < txt->fields._stringLength )
  {
    text = System_String__Substring_75702848(txt, v38, v39 + v41 + 1, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v100);
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0, 0);
    rootPanel = (__int64)*v22;
    if ( !*v22 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_75735064((System_Text_StringBuilder_o *)rootPanel, text, 0);
    goto LABEL_57;
  }
  v101 = *v22;
  rootPanel = (__int64)System_String__Substring(txt, v38, 0);
  if ( !v101 )
    goto LABEL_107;
  rootPanel = (__int64)System_Text_StringBuilder__Append_75735064(v101, (System_String_o *)rootPanel, 0);
LABEL_105:
  if ( !v36 )
LABEL_107:
    sub_2213CDC(rootPanel, v10);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__WaitNextTouch(
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
      if ( UITouchPress__get_IsLongPress(touchPress, 0) )
        return;
      touchPress = (UITouchPress_o *)this->fields.nextTouchRootObject;
      *(_WORD *)&this->fields.isWaitNextTouchRequest = 1;
      if ( touchPress )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPress, isShowNextTouchObject, 0);
        return;
      }
    }
    sub_2213CDC(touchPress, isShowNextTouchObject);
  }
}


bool ScriptMessageCommonManager__get_IsBusy(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool ScriptMessageCommonManager__get_IsWindowMode(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.isWindowBack;
}


bool ScriptMessageCommonManager__get_isFaceMessage(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields._isFaceMessage_k__BackingField;
}


float ScriptMessageCommonManager__get_textLineHeight(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


void ScriptMessageCommonManager__set_isFaceMessage(
        ScriptMessageCommonManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isFaceMessage_k__BackingField = value;
}


void ScriptMessageCommonManager_ProcAddLabel___ctor(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200FF24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200FEE4;
}


System_IAsyncResult_o *ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptMessageCommonManager_ProcAddLabel__Invoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void ScriptMessageCommonManager_ProcAddLabel2___ctor(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200FF9C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_200FF80;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_200FF38;
}


System_IAsyncResult_o *ScriptMessageCommonManager_ProcAddLabel2__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return sub_2213A14(this, &v6, callback, object);
}


void ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptMessageCommonManager_ProcAddLabel2__Invoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    txt,
    this->fields.method);
}


void ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__0(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *tmpTxt; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v11; // x8
  struct ScriptMessageCommonManager_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpTxt = (System_Text_StringBuilder_o *)System_Text_StringBuilder__get_Length(tmpTxt, 0);
  if ( (int)tmpTxt < 1 )
    goto LABEL_8;
  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))tmpTxt->klass->vtable._3_ToString.methodPtr)(
                                                  tmpTxt,
                                                  tmpTxt->klass->vtable._3_ToString.method),
        (v11 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptMessageCommonManager__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          this->fields.stepTime,
          v11->fields.defaultColorTag,
          this->fields.isFoward,
          0),
        (tmpTxt = this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_2213CDC(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0);
LABEL_8:
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v12->fields.defaultColorTag = tmpColorTag;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.defaultColorTag,
    (int32_t)tmpColorTag,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__1(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScriptMessageCommonManager___c__DisplayClass113_0_o *v8; // x19
  struct ScriptMessageCommonManager_o *_4__this; // x8
  struct System_String_o *tmpColorTag; // x1

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
      *((System_String_o **)this + 40),
      v8->fields.isFoward,
      0);
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_2213CDC(this, text);
  tmpColorTag = v8->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = tmpColorTag;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.defaultColorTag,
    (int32_t)tmpColorTag,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}