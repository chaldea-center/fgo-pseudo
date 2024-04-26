void __fastcall ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v14; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_4357860 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_B70694(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_B70694(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_B70694(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_B70694(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357860 = 1;
  }
  __asm { FMOV            V1.2S, #1.0 }
  *(_QWORD *)&this->fields.messageSpeed = _D1;
  *(int32x2_t *)&this->fields.windowOpenTime = vdup_n_s32(0x3ECCCCCDu);
  this->fields.defaultAllDispCenter.fields.y = 0.0;
  this->fields.windowClosePosY = -200.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_330C190;
  *(_OWORD *)&this->fields.defaultBetweenLineHeight = xmmword_330C1A0;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v14, v2, v3, v4, v5, v6, v7);
  v15 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B70764(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v15,
    (const MethodInfo_2CFBE58 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mainStock,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B70764(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v22,
    (const MethodInfo_2CFBE58 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.rubyStock,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B70764(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v29,
    (const MethodInfo_2CFBE58 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v29;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.imageStock,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B70764(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v36,
    (const MethodInfo_2CFBE58 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v36;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.labelStock,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v43;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dispLabelList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.dispCountTimer = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__AddLabel(
        ScriptMessageCommonManager_o *this,
        System_String_o *text,
        float tm,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  __int64 Label; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ScriptMessageLabel_o *v19; // x21
  BattleServantConfConponent_o *v20; // x0
  float32x2_t *p_dispPosition; // x27
  struct UnityEngine_Vector2_o dispPosition; // x28
  const MethodInfo *v23; // x5
  System_String_o *v24; // x22
  System_String_array *v25; // x24
  const MethodInfo *v26; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v31; // x7
  __int64 *p_fields; // x23
  __int64 *p_ruby; // x22
  UnityEngine_Vector2_o *v34; // x3
  System_String_o *v35; // x22
  const MethodInfo *v36; // x5
  int v37; // w8
  __int64 v38; // x23
  System_String_o *v39; // x22
  float v40; // s0
  struct ScriptMessageWindow_o *v41; // x8
  float v42; // s9
  struct ScriptMessageWindow_o *v43; // x8
  int v44; // w8
  int32_t v45; // w23
  int32_t horizontalAlign; // w24
  const MethodInfo *v47; // x6
  UnityEngine_Vector2_o zero; // kr00_8
  ScriptMessageLabel_o *v49; // x0
  UISprite_o **p_image; // x1
  UnityEngine_Vector2_o *v51; // x2
  int32_t v52; // w3
  float v53; // s0
  System_String_o *v54; // x4
  float x; // s1
  float y; // s2
  int32_t v57; // w5
  System_String_o *v58; // x22
  __int64 v59; // x23
  struct ScriptMessageWindow_o *v60; // x8
  System_String_o **v61; // x9
  int32_t v62; // w22
  System_String_o *v63; // x23
  const MethodInfo *v64; // x5
  struct ScriptMessageWindow_o *v65; // x8
  __int64 *v66; // x24
  const MethodInfo *v67; // x6
  System_String_o *v68; // x1
  System_String_o *v69; // x22
  System_String_array *v70; // x0
  System_String_array *v71; // x23
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x5
  System_String_o *v75; // x22
  float v76; // s8
  float v77; // s10
  float v78; // s9
  System_String_o *v79; // x24
  System_String_array *v80; // x0
  System_String_array *v81; // x24
  System_String_o *v82; // x0
  float v83; // s0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  int32_t v87; // w23
  __int64 *v88; // x23
  System_String_o *rubyText; // x0
  System_String_o *v90; // x22
  __int64 v91; // x23
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v93; // x22
  const MethodInfo *v94; // x5
  struct ScriptMessageWindow_o *v95; // x8
  System_String_o *v96; // x23
  __int64 v97; // x23
  int v98; // w24
  int32_t v99; // w0
  const MethodInfo *v100; // x6
  float v101; // s3
  unsigned __int64 v102; // d0
  UnityEngine_GameObject_o **v103; // x1
  const MethodInfo *v104; // x5
  __int64 v105; // x0
  System_String_o *rubyStr; // [xsp+0h] [xbp-90h]
  const MethodInfo *v107; // [xsp+8h] [xbp-88h]
  const MethodInfo *v108; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4357839 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_B70694(&StringLiteral_13738/*"Talk/"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_20544/*"line"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357839 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_116;
  v19 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v20 = (BattleServantConfConponent_o *)(Label + 112);
  v20->fields.tmp_pos.fields.x = tm;
  sub_B70630(v20, (System_Int32_array **)colorTag, v13, v14, v15, v16, v17, v18);
  if ( !text )
    goto LABEL_116;
  p_dispPosition = (float32x2_t *)&this->fields.dispPosition;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_74;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v24 = System_String__Substring_44821904(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B706AC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v12 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v24 )
        goto LABEL_116;
      v25 = System_String__Split(v24, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v19, 1, 0, 0, v26);
      if ( !v25 )
        goto LABEL_116;
      max_length = v25->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v31 = v25->m_Items[0];
        p_fields = (__int64 *)&v19->fields;
        p_ruby = (__int64 *)&v19->fields.ruby;
        v34 = &this->fields.dispPosition;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v19,
            &v19->fields.main,
            &v19->fields.ruby,
            v34,
            fontSize,
            maxFontSize,
            verticalAlign,
            v31,
            this->fields.fontType,
            v107);
        else
          ScriptMessageLabel__UpdateRuby(
            v19,
            &v19->fields.main,
            &v19->fields.ruby,
            v34,
            fontSize,
            maxFontSize,
            verticalAlign,
            v31,
            v25->m_Items[1],
            this->fields.fontType,
            0,
            v108);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_116;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_116;
          v68 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_77:
          UILabel__set_text((UILabel_o *)Label, v68, 0LL);
        }
LABEL_78:
        if ( !isFoward )
          goto LABEL_82;
        goto LABEL_79;
      }
    }
LABEL_117:
    v105 = sub_B70798(Label);
    sub_B70738(v105, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v35 = System_String__Substring_44821904(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B706AC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v12 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    *(_WORD *)(Label + 32) = 32;
    if ( !v35 )
      goto LABEL_116;
    Label = (__int64)System_String__Split(v35, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_116;
    v37 = *(_DWORD *)(Label + 24);
    v38 = Label;
    if ( v37 <= 1 )
    {
      if ( !v37 )
        goto LABEL_117;
      v90 = *(System_String_o **)(Label + 32);
      Label = sub_B706AC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_116;
      v12 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      *(_WORD *)(Label + 32) = 58;
      if ( !v90 )
        goto LABEL_116;
      Label = (__int64)System_String__Split(v90, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_116;
      v91 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_116;
      v93 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v95 = this->fields.currentMessageWindow;
        if ( !v95 )
          goto LABEL_116;
        v93 = System_String__Concat_44758168(v93, v95->fields.imageSuffix, 0LL);
      }
      if ( *(int *)(v91 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v94);
        ScriptMessageLabel__UpdateImage(
          v19,
          &v19->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v93,
          this->fields.horizontalAlign,
          v100);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v19, 1, 1, 0, v94);
        if ( *(_DWORD *)(v91 + 24) <= 1u )
          goto LABEL_117;
        ScriptMessageLabel__UpdateImageRuby(
          v19,
          &v19->fields.image,
          &v19->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v93,
          *(System_String_o **)(v91 + 40),
          0LL,
          this->fields.horizontalAlign,
          v107);
      }
      goto LABEL_109;
    }
    ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v36);
    if ( *(_DWORD *)(v38 + 24) < 2u )
      goto LABEL_117;
    v39 = *(System_String_o **)(v38 + 32);
    v40 = System_Single__Parse(*(System_String_o **)(v38 + 40), 0LL);
    v41 = this->fields.currentMessageWindow;
    if ( !v41 )
      goto LABEL_116;
    v42 = v40;
    Label = System_String__IsNullOrEmpty(v41->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v43 = this->fields.currentMessageWindow;
      if ( !v43 )
        goto LABEL_116;
      Label = (__int64)System_String__Concat_44758168(v39, v43->fields.imageSuffix, 0LL);
      v39 = (System_String_o *)Label;
    }
    v44 = *(_DWORD *)(v38 + 24);
    if ( v44 == 2 )
    {
      v45 = this->fields.fontSize;
      horizontalAlign = this->fields.horizontalAlign;
      zero = UnityEngine_Vector2__get_zero(0LL);
      v49 = v19;
      p_image = &v19->fields.image;
      v51 = &this->fields.dispPosition;
      v52 = v45;
      v53 = v42;
      v54 = v39;
      y = zero.fields.y;
      x = zero.fields.x;
      v57 = horizontalAlign;
    }
    else
    {
      if ( v44 > 3 )
      {
LABEL_109:
        if ( tm < 0.0 )
          goto LABEL_78;
        Label = (__int64)v19->fields.image;
        if ( !Label )
          goto LABEL_116;
        goto LABEL_111;
      }
      if ( (unsigned int)v44 <= 2 )
        goto LABEL_117;
      v96 = *(System_String_o **)(v38 + 48);
      Label = sub_B706AC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_116;
      v12 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      *(_WORD *)(Label + 32) = 44;
      if ( !v96 )
        goto LABEL_116;
      Label = (__int64)System_String__Split(v96, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_116;
      v97 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v97 + 24) <= 1u )
        goto LABEL_117;
      v98 = Label;
      v99 = System_Int32__Parse(*(System_String_o **)(v97 + 40), 0LL);
      v52 = this->fields.fontSize;
      v57 = this->fields.horizontalAlign;
      p_image = &v19->fields.image;
      v51 = &this->fields.dispPosition;
      x = (float)v98;
      y = (float)v99;
      v49 = v19;
      v53 = v42;
      v54 = v39;
    }
    ScriptMessageLabel__UpdateImage_34857600(v49, p_image, v51, v52, v53, v54, *(UnityEngine_Vector2_o *)&x, v57, v47);
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v58 = System_String__Substring_44821904(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B706AC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v12 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    *(_WORD *)(Label + 32) = 32;
    if ( !v58 )
      goto LABEL_116;
    Label = (__int64)System_String__Split(v58, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_116;
    v59 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
    v60 = this->fields.currentMessageWindow;
    if ( *(int *)(v59 + 24) >= 2 )
      v61 = (System_String_o **)(v59 + 40);
    else
      v61 = (System_String_o **)&StringLiteral_20544/*"line"*/;
    if ( !v60 )
      goto LABEL_116;
    v62 = Label;
    v63 = *v61;
    Label = System_String__IsNullOrEmpty(v60->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v65 = this->fields.currentMessageWindow;
      if ( !v65 )
        goto LABEL_116;
      v63 = System_String__Concat_44758168(v63, v65->fields.imageSuffix, 0LL);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 1, 0, v64);
    v66 = (__int64 *)&v19->fields.image;
    ScriptMessageLabel__UpdateLine(
      v19,
      &v19->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v62,
      v63,
      v67);
    if ( tm < 0.0 )
      goto LABEL_78;
    Label = *v66;
    if ( !*v66 )
      goto LABEL_116;
LABEL_111:
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Label + 440LL))(
      Label,
      *(_QWORD *)(*(_QWORD *)Label + 448LL),
      0.0);
    if ( !isFoward )
      goto LABEL_82;
    goto LABEL_79;
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 42 )
  {
LABEL_74:
    ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 0, 0, v23);
    v88 = (__int64 *)&v19->fields;
    ScriptMessageLabel__UpdateLabel(
      v19,
      &v19->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      (const MethodInfo *)rubyStr);
    if ( tm < 0.0 )
      goto LABEL_78;
    Label = *v88;
    if ( !*v88 )
      goto LABEL_116;
    v68 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_77;
  }
  v69 = System_String__Substring_44821904(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B706AC(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_116;
  v12 = Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_117;
  *(_WORD *)(Label + 32) = 32;
  if ( !v69 )
    goto LABEL_116;
  v70 = System_String__Split(v69, (System_Char_array *)Label, 0LL);
  if ( v70 )
  {
    v71 = v70;
    if ( (int)v70->max_length >= 1 )
    {
      v72 = v70->m_Items[0];
      if ( v72 )
      {
        Label = System_String__op_Equality(v72, (System_String_o *)StringLiteral_890/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v71->max_length )
            goto LABEL_117;
          Label = (__int64)v71->m_Items[0];
          if ( !Label )
            goto LABEL_116;
          v73 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
          v75 = System_String__Concat_44758168((System_String_o *)StringLiteral_13738/*"Talk/"*/, v73, 0LL);
          v76 = 0.0;
          v77 = 0.0;
          v78 = 0.0;
          if ( (int)v71->max_length >= 2 )
          {
            Label = (__int64)v71->m_Items[1];
            if ( !Label )
              goto LABEL_116;
            v79 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
            Label = sub_B706AC(char___TypeInfo, 1LL);
            if ( !Label )
              goto LABEL_116;
            v12 = Label;
            if ( !*(_DWORD *)(Label + 24) )
              goto LABEL_117;
            *(_WORD *)(Label + 32) = 44;
            if ( !v79 )
              goto LABEL_116;
            v80 = System_String__Split(v79, (System_Char_array *)Label, 0LL);
            v77 = 0.0;
            v78 = 0.0;
            if ( v80 )
            {
              v81 = v80;
              v77 = 0.0;
              v78 = 0.0;
              if ( (int)v80->max_length >= 2 )
              {
                Label = (__int64)v80->m_Items[0];
                if ( !Label )
                  goto LABEL_116;
                v82 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
                v83 = System_Single__Parse(v82, 0LL);
                if ( v81->max_length <= 1 )
                  goto LABEL_117;
                Label = (__int64)v81->m_Items[1];
                if ( !Label )
                  goto LABEL_116;
                v78 = v83;
                v84 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
                v77 = System_Single__Parse(v84, 0LL);
              }
            }
          }
          if ( (int)v71->max_length <= 2 )
            goto LABEL_113;
          Label = (__int64)v71->m_Items[2];
          if ( !Label )
            goto LABEL_116;
          v85 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
          v76 = System_Single__Parse(v85, 0LL);
          if ( (int)v71->max_length < 4 )
          {
LABEL_113:
            v87 = 0;
          }
          else
          {
            Label = (__int64)v71->m_Items[3];
            if ( !Label )
              goto LABEL_116;
            v86 = System_String__Trim_44745500((System_String_o *)Label, 0LL);
            v87 = System_Int32__Parse(v86, 0LL);
          }
          v101 = v77 + COERCE_FLOAT(HIDWORD(p_dispPosition->n64_u64[0]));
          v102 = vadd_f32((float32x2_t)p_dispPosition->n64_u64[0], (float32x2_t)1124073472LL).n64_u64[0];
          pos.fields.x = v78 + COERCE_FLOAT(p_dispPosition->n64_u64[0]);
          pos.fields.y = v101;
          p_dispPosition->n64_u64[0] = v102;
          ScriptMessageCommonManager__PreProcLabel(this, v19, 0, 0, 1, v74);
          ScriptMessageLabel__UpdateEffect(v19, v103, &pos, v75, v76, v87, v104);
          if ( !isFoward )
            goto LABEL_82;
LABEL_79:
          rubyText = v19->fields.rubyText;
          v19->fields.mainPosition.fields.x = v19->fields.mainPosition.fields.x - v19->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v19->fields.rubyPosition.fields.x = v19->fields.rubyPosition.fields.x - v19->fields.widthSize;
          p_dispPosition->n64_u64[0] = (unsigned __int64)dispPosition;
LABEL_82:
          Label = (__int64)this->fields.dispLabelList;
          if ( Label )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
            return;
          }
LABEL_116:
          sub_B7076C(Label, v12);
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
  float v4; // s0

  v4 = this->fields.startPosition.fields.y
     - ScriptMessageCommonManager__GetVerticalAlignedOffset(this, dataList, method);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v4;
}


void __fastcall ScriptMessageCommonManager__CancelNextTouch(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  nextTouchRootObject = this->fields.nextTouchRootObject;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  if ( !nextTouchRootObject )
    sub_B7076C(0LL, method);
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
  void *talkNameManager; // x0
  UnityEngine_Object_o *currentMessageWindow; // x22
  UnityEngine_Object_o *defaultMessageWindow; // x23
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v12; // x2
  void *v13; // x21
  struct ScriptMessageWindow_o *v14; // x8
  UILabel_o *messageMainLabel; // x22
  UnityEngine_Transform_o *v16; // x23
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x22
  struct ScriptMessageWindow_o *v26; // x8
  UILabel_o *messageRubyLabel; // x22
  UnityEngine_Transform_o *v28; // x23
  const MethodInfo *v29; // x3
  struct UnityEngine_GameObject_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *v37; // x22
  struct ScriptMessageWindow_o *v38; // x8
  UILabel_o *talkNameMainLabel; // x22
  UnityEngine_Transform_o *v40; // x23
  UILabel_o *v41; // x23
  const MethodInfo *v42; // x3
  struct ScriptLineMessage_o *v43; // x22
  struct ScriptMessageWindow_o *v44; // x8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *v51; // x22
  struct ScriptMessageWindow_o *v52; // x8
  UILabel_o *talkNameRubyLabel; // x22
  UnityEngine_Transform_o *v54; // x23
  UILabel_o *v55; // x23
  const MethodInfo *v56; // x3
  struct ScriptLineMessage_o *v57; // x22
  struct ScriptMessageWindow_o *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x6
  const MethodInfo *v79; // x1

  if ( (byte_435784D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_UILabel____69308736);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435784D = 1;
  }
  ScriptMessageCommonManager__DeleteLabels(this, (const MethodInfo *)prefab);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_67;
  ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)talkNameManager, 0LL);
  talkNameManager = this->fields.defaultMessageWindow;
  if ( !talkNameManager )
    goto LABEL_67;
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !talkNameManager )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)talkNameManager, 0, 0LL);
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  defaultMessageWindow = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Inequality(currentMessageWindow, defaultMessageWindow, 0LL) )
  {
    talkNameManager = *p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_67;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)talkNameManager,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
  talkNameManager = this->fields.messageShake;
  if ( !talkNameManager )
    goto LABEL_67;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = UnityEngine_Object__Instantiate_UILabel_(
                      (UILabel_o *)prefab,
                      transform,
                      (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_67;
  v13 = talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    v12);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)v13 + 15), 0LL, 0LL);
  v14 = this->fields.defaultMessageWindow;
  if ( !v14 )
    goto LABEL_67;
  messageMainLabel = v14->fields.messageMainLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    messageMainLabel = UnityEngine_Object__Instantiate_UILabel_(
                         messageMainLabel,
                         v16,
                         (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_UILabel____69308736);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageMainLabel,
      *((UILabel_o **)v13 + 15),
      messageMainLabel,
      v17);
  }
  if ( !messageMainLabel )
    goto LABEL_67;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
  this->fields.mainPrefab = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mainPrefab,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (UnityEngine_Object_o *)*((_QWORD *)v13 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  v26 = this->fields.defaultMessageWindow;
  if ( !v26 )
    goto LABEL_67;
  messageRubyLabel = v26->fields.messageRubyLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    messageRubyLabel = UnityEngine_Object__Instantiate_UILabel_(
                         messageRubyLabel,
                         v28,
                         (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_UILabel____69308736);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageRubyLabel,
      *((UILabel_o **)v13 + 16),
      messageRubyLabel,
      v29);
  }
  if ( !messageRubyLabel )
    goto LABEL_67;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageRubyLabel, 0LL);
  this->fields.rubyPrefab = v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (UnityEngine_Object_o *)*((_QWORD *)v13 + 17);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v38 = this->fields.defaultMessageWindow;
    if ( !v38 )
      goto LABEL_67;
    talkNameMainLabel = v38->fields.talkNameMainLabel;
    v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v41 = UnityEngine_Object__Instantiate_UILabel_(
            talkNameMainLabel,
            v40,
            (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_UILabel____69308736);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v41,
      *((UILabel_o **)v13 + 17),
      v41,
      v42);
    if ( !v41 )
      goto LABEL_67;
    v43 = this->fields.talkNameManager;
    talkNameManager = v41;
  }
  else
  {
    v44 = this->fields.defaultMessageWindow;
    if ( !v44 )
      goto LABEL_67;
    talkNameManager = v44->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_67;
    v43 = this->fields.talkNameManager;
  }
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v43 )
    goto LABEL_67;
  v43->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_B70630(
    (BattleServantConfConponent_o *)&v43->fields.mainPrefab,
    (System_Int32_array **)talkNameManager,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (UnityEngine_Object_o *)*((_QWORD *)v13 + 18);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) == 0 )
  {
    v58 = this->fields.defaultMessageWindow;
    if ( v58 )
    {
      talkNameManager = v58->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v57 = this->fields.talkNameManager;
        goto LABEL_64;
      }
    }
LABEL_67:
    sub_B7076C(talkNameManager, v5);
  }
  v52 = this->fields.defaultMessageWindow;
  if ( !v52 )
    goto LABEL_67;
  talkNameRubyLabel = v52->fields.talkNameRubyLabel;
  v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v55 = UnityEngine_Object__Instantiate_UILabel_(
          talkNameRubyLabel,
          v54,
          (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_UILabel____69308736);
  ScriptMessageCommonManager__CopyFontEffects((ScriptMessageCommonManager_o *)v55, *((UILabel_o **)v13 + 18), v55, v56);
  if ( !v55 )
    goto LABEL_67;
  v57 = this->fields.talkNameManager;
  talkNameManager = v55;
LABEL_64:
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v57 )
    goto LABEL_67;
  v57->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_B70630(
    (BattleServantConfConponent_o *)&v57->fields.rubyPrefab,
    (System_Int32_array **)talkNameManager,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_67;
  v71 = (System_Int32_array **)*((_QWORD *)v13 + 10);
  *((_QWORD *)talkNameManager + 6) = v71;
  sub_B70630((BattleServantConfConponent_o *)((char *)talkNameManager + 48), v71, v65, v66, v67, v68, v69, v70);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
    (System_Int32_array **)v13,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v78);
  ScriptMessageCommonManager__ResetScroll(this, v79);
}


void __fastcall ScriptMessageCommonManager__ClearCount(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.dispCountTimer = -1.0;
}


void __fastcall ScriptMessageCommonManager__ClearLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357832 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4357832 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v5.fields.current, v4);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B7076C(dispLabelList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
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
  ScriptMessageCommonManager_o *v2; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_Int32_array **v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct ScriptMessageWindow_o *v18; // x8

  v2 = this;
  if ( (byte_435784B & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_435784B = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  v2->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.talkName, v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  v2->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.talkNameOnly, v11, v12, v13, v14, v15, v16, v17);
  this = (ScriptMessageCommonManager_o *)v2->fields.talkNameManager;
  v2->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, 0LL), (v18 = v2->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v18->fields.talkNameIcon) == 0LL )
  {
LABEL_9:
    sub_B7076C(this, method);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
    this,
    this->klass->vtable._9_CloseDown.methodPtr,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *messageScroll; // x0
  __int64 v4; // x1
  unsigned __int64 v5; // d0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  float z; // s2
  int v8; // s1
  const MethodInfo *v9; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v12; // x8
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ScriptMessageWindow_o *v27; // x8

  if ( (byte_4357849 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357849 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  v5 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  *(_QWORD *)&this->fields.scrollPosition.fields.x = v5;
  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_12;
  messageScroll = currentMessageWindow->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_12;
  z = this->fields.scrollPosition.fields.z;
  v8 = HIDWORD(v5);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v5, 0LL);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.talkName, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v20, v21, v22, v23, v24, v25, v26);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, 0LL),
        (v27 = this->fields.currentMessageWindow) == 0LL)
    || (messageScroll = (UnityEngine_Transform_o *)v27->fields.talkNameIcon) == 0LL
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&messageScroll->klass[1]._1.this_arg.bits)(
          messageScroll,
          messageScroll->klass[1]._1.element_class,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0LL) )
  {
LABEL_12:
    sub_B7076C(messageScroll, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__CloseDown(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  TweenPosition_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **windowDownCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4357843 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4357843 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_27;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      return;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)rootObject,
                                             0LL);
  if ( !rootObject )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  if ( localPosition.fields.y <= this->fields.windowClosePosY )
    return;
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
LABEL_27:
    sub_B7076C(rootObject, isFast);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v18.fields.y = this->fields.windowClosePosY;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  v9 = TweenPosition__Begin(gameObject, windowCloseTime, v18, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v9 )
    {
      v9->fields.style = 0;
      windowDownCurve = (System_Int32_array **)this->fields.windowDownCurve;
      v9->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowDownCurve;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->fields.animationCurve,
        windowDownCurve,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      UITweener__PlayForward((UITweener_o *)v9, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      return;
    }
    goto LABEL_27;
  }
}


void __fastcall ScriptMessageCommonManager__CopyFontEffects(
        ScriptMessageCommonManager_o *this,
        UILabel_o *src,
        UILabel_o *dst,
        const MethodInfo *method)
{
  if ( !src || !dst )
    sub_B7076C(this, src);
  UILabel__set_effectStyle(dst, src->fields.mEffectStyle, 0LL);
  UILabel__set_effectColor(dst, src->fields.mEffectColor, 0LL);
  UILabel__set_effectDistance(dst, src->fields.mEffectDistance, 0LL);
  UILabel__set_applyGradient(dst, src->fields.mApplyGradient, 0LL);
  UILabel__set_gradientTop(dst, src->fields.mGradientTop, 0LL);
  UILabel__set_gradientBottom(dst, src->fields.mGradientBottom, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__CreateLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v7; // x19
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0

  if ( (byte_435785E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435785E = 1;
  }
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_12;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_srcLineSprite )
    goto LABEL_12;
  currentMessageWindow = this->fields.currentMessageWindow;
  v7 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !currentMessageWindow
    || (ScriptMessageWindow__AddChildMessageScroll(
          currentMessageWindow,
          (UnityEngine_Transform_o *)Component_srcLineSprite,
          v8),
        transform = UnityEngine_Component__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = UnityEngine_Component__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL),
        !v13) )
  {
LABEL_12:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
  return (UILabel_o *)v7;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4357831 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4357831 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_30;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v3);
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_30;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.mainStock;
  if ( !labelStock )
    goto LABEL_30;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( labelStock )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)labelStock,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.mainStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_30;
  }
  while ( 1 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.rubyStock;
    if ( !labelStock )
      goto LABEL_30;
    if ( labelStock->fields._size <= 0 )
      break;
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_30;
    v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v6, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_30:
    sub_B7076C(labelStock, v3);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v7, 0LL);
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
      if ( labelStock )
        continue;
    }
    goto LABEL_30;
  }
}


void __fastcall ScriptMessageCommonManager__EndScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isFastMessageRequest = 0;
  this->fields.isScroll = 0;
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall ScriptMessageCommonManager__FetchImageSprite(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *imageStock; // x0
  UnityEngine_Component_o *v4; // x19
  struct UnityEngine_GameObject_o *imagePrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0

  if ( (byte_4357836 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4357836 = 1;
  }
  imageStock = (UnityEngine_GameObject_o *)this->fields.imageStock;
  if ( !imageStock )
    goto LABEL_17;
  if ( SLODWORD(imageStock[1].klass) <= 0 )
  {
    imagePrefab = this->fields.imagePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    imageStock = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)imagePrefab,
                                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 imageStock,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)imageStock;
        imageStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)imageStock,
                                                   0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)imageStock, v7);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B7076C(imageStock, method);
  }
  imageStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)imageStock,
                                             (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v4 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_17;
LABEL_14:
  transform = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
  v12 = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
  if ( !v12 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return (UISprite_o *)v4;
}


ScriptMessageLabel_o *__fastcall ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4357837 & 1) == 0 )
  {
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_4357837 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_B7076C(0LL, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v4 = (ScriptMessageLabel_o *)sub_B70764(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v4, v5);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchMainLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainStock; // x0
  UnityEngine_Component_o *v4; // x19
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0

  if ( (byte_4357834 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4357834 = 1;
  }
  mainStock = (UnityEngine_GameObject_o *)this->fields.mainStock;
  if ( !mainStock )
    goto LABEL_17;
  if ( SLODWORD(mainStock[1].klass) < 1 )
  {
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mainStock = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                mainStock,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)mainStock;
        mainStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mainStock,
                                                  0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)mainStock, v7);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B7076C(mainStock, method);
  }
  mainStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)mainStock,
                                            (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_17;
  v4 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0LL);
LABEL_14:
  transform = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
  v12 = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
  if ( !v12 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return (UILabel_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchRubyLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rubyStock; // x0
  UnityEngine_Component_o *v4; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  ScriptMessageWindow_o *currentMessageWindow; // x21
  const MethodInfo *v7; // x2
  UnityEngine_Transform_o *transform; // x21
  int v9; // s0
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0

  if ( (byte_4357835 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4357835 = 1;
  }
  rubyStock = (UnityEngine_GameObject_o *)this->fields.rubyStock;
  if ( !rubyStock )
    goto LABEL_17;
  if ( SLODWORD(rubyStock[1].klass) <= 0 )
  {
    rubyPrefab = this->fields.rubyPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    rubyStock = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)rubyPrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                rubyStock,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v4 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)rubyStock,
                                                  0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)rubyStock, v7);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B7076C(rubyStock, method);
  }
  rubyStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)rubyStock,
                                            (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v4 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_17;
LABEL_14:
  transform = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
  v12 = UnityEngine_Component__get_transform(v4, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
  if ( !v12 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UILabel__set_fontSize((UILabel_o *)v4, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  if ( (byte_4357841 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357841 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
  {
    v5 = this->fields.rootObject;
    if ( !v5 )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      rootPanel = (UnityEngine_Object_o *)this->fields.rootPanel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(rootPanel, 0LL, 0LL) )
      {
        v5 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
        if ( !v5 )
          goto LABEL_39;
        v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
        {
          v5 = this->fields.rootObject;
          if ( v5 )
          {
            v5 = UnityEngine_GameObject__get_gameObject(v5, 0LL);
            if ( v5 )
            {
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v5,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
              if ( ((unsigned __int8)v5 & 1) != 0 )
              {
                if ( !Component_srcLineSprite )
                  goto LABEL_39;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
              }
              v5 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
              if ( v5 )
              {
                v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
                if ( v5 )
                {
                  transform = UnityEngine_GameObject__get_transform(v5, 0LL);
                  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
                    v5 = this->fields.rootObject;
                    if ( v5 )
                    {
                      v5 = UnityEngine_GameObject__get_gameObject(v5, 0LL);
                      if ( v5 )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf(v5, 0LL) )
                          return;
                        v5 = this->fields.rootObject;
                        if ( v5 )
                        {
                          v5 = UnityEngine_GameObject__get_gameObject(v5, 0LL);
                          if ( v5 )
                          {
                            UnityEngine_GameObject__SetActive(v5, 1, 0LL);
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
LABEL_39:
          sub_B7076C(v5, v4);
        }
      }
    }
  }
}


int32_t __fastcall ScriptMessageCommonManager__GetAllDispLength(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 v4; // x22
  int32_t v5; // w20
  int size; // w8
  ScriptMessageLabel_o *v7; // x24
  UnityEngine_Object_o *effect; // x21

  v2 = this;
  if ( (byte_4357853 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357853 = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_18:
    sub_B7076C(this, method);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)v4 >= size )
      return v5;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v7 = dispLabelList->fields._items->m_Items[v4];
    if ( v7 )
    {
      if ( v7->fields.dispLength >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(v7->fields.mainText, 0LL) )
          v5 += v7->fields.dispLength;
        effect = (UnityEngine_Object_o *)v7->fields.effect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          v5 += v7->fields.dispLength;
      }
      dispLabelList = v2->fields.dispLabelList;
      ++v4;
      if ( dispLabelList )
        continue;
    }
    goto LABEL_18;
  }
}


UnityEngine_GameObject_o *__fastcall ScriptMessageCommonManager__GetBackLogButtonObject(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backLogButton; // x0

  backLogButton = (UnityEngine_Component_o *)this->fields.backLogButton;
  if ( !backLogButton )
    sub_B7076C(0LL, method);
  return UnityEngine_Component__get_gameObject(backLogButton, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ScriptMessageCommonManager__GetFaceIconPosition(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
  const MethodInfo *v3; // x3
  ScriptMessageCommonManager_o *v5; // x19
  float defaultTextOnlyLineHeight; // s0
  double v7; // d0
  signed int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int v10; // w28
  int defaultFontSize; // w24
  il2cpp_array_size_t v12; // w27
  int32_t v13; // w23
  float v14; // s9
  int v15; // w26
  float v16; // s8
  float v17; // s0
  float v18; // s1
  double v19; // d2
  float v20; // s0
  bool v21; // zf
  double v22; // d1
  double v23; // d0
  Il2CppClass **v24; // x8
  System_String_o *v25; // x25
  const MethodInfo *v26; // x2
  System_String_o *v27; // x24
  int32_t v28; // w25
  const MethodInfo *v29; // x1
  System_String_o *v30; // x25
  int32_t VerticalAlignFromString; // w25
  int32_t v32; // w21
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w20
  float VerticalAlignOffset; // s0
  int32_t v37; // w8
  __int64 v38; // x0
  int32_t vAlign; // [xsp+4h] [xbp-7Ch]
  int32_t fontSize; // [xsp+8h] [xbp-78h]
  int v41; // [xsp+Ch] [xbp-74h]

  v5 = this;
  if ( (byte_435784A & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&StringLiteral_18928/*"f"*/);
    sub_B70694(&StringLiteral_24233/*"・"*/);
    sub_B70694(&StringLiteral_22021/*"r"*/);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&StringLiteral_20481/*"l"*/);
    byte_435784A = 1;
  }
  defaultTextOnlyLineHeight = v5->fields.defaultTextOnlyLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v7 = -defaultTextOnlyLineHeight;
  else
    v7 = defaultTextOnlyLineHeight;
  if ( !dataList )
    sub_B7076C(this, dataList);
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v5->fields.defaultBetweenLineHeight;
  v10 = (int)v7;
  fontSize = (int)v7;
  if ( max_length >= 1 )
  {
    vAlign = 0;
    v41 = 1;
    defaultFontSize = v5->fields.defaultFontSize;
    v12 = 0;
    v13 = 0;
    v14 = 0.0;
    v15 = -1;
    v16 = v5->fields.defaultBetweenLineHeight;
    while ( v12 < max_length )
    {
      v24 = &dataList->obj.klass + (int)v12;
      v25 = (System_String_o *)v24[4];
      if ( v25 )
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 (System_String_o *)v24[4],
                                                 (System_String_o *)StringLiteral_18928/*"f"*/,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v12 + 2 >= dataList->max_length )
            break;
          v27 = dataList->m_Items[v12 + 2];
          v28 = v5->fields.defaultFontSize;
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v27, v28, v26);
          v12 += 4;
          if ( v10 < (int)this )
            v10 = (int)this;
          if ( v12 >= dataList->max_length )
            break;
          defaultFontSize = (int)this;
          v30 = dataList->m_Items[v12];
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v30, v29);
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)System_Math__Max_45601072(VerticalAlignFromString, v13, 0LL);
          v13 = (int)this;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v25,
                                                   (System_String_o *)StringLiteral_20481/*"l"*/,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 += 2;
            if ( v12 >= dataList->max_length )
              break;
            v17 = System_Single__Parse(dataList->m_Items[v12], 0LL);
            if ( v17 >= 0.0 )
              v16 = v17;
            else
              v16 = v5->fields.defaultBetweenLineHeight;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v25,
                                                     (System_String_o *)StringLiteral_22021/*"r"*/,
                                                     0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v18 = v5->fields.defaultTextOnlyLineHeight;
              defaultBetweenLineHeight = v16;
              v19 = v18;
              v20 = v16 + (float)(v5->fields.rubyLineHeight + (float)v10);
              v16 = v5->fields.defaultBetweenLineHeight;
              defaultFontSize = v5->fields.defaultFontSize;
              v21 = v18 == INFINITY;
              v22 = -v18;
              v14 = v14 + v20;
              if ( v21 )
                v23 = v22;
              else
                v23 = v19;
              vAlign = v13;
              fontSize = v10;
              v10 = (int)v23;
              v13 = 0;
              ++v41;
            }
            else
            {
              this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                       v25,
                                                       (System_String_o *)StringLiteral_24233/*"・"*/,
                                                       0LL);
              if ( ((v15 < defaultFontSize) & (v41 == 1) & (unsigned __int8)this) != 0 )
                v15 = defaultFontSize;
            }
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_42;
    }
    v38 = sub_B70798(this);
    sub_B70738(v38, 0LL);
  }
  vAlign = 0;
  v15 = -1;
  v14 = 0.0;
LABEL_42:
  if ( v15 < 1 )
  {
    v32 = fontSize;
  }
  else
  {
    v32 = fontSize;
    result = (float)UnityEngine_Mathf__CeilToInt((float)v15 * 0.37, 0LL) - v5->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v5->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v14 = v14 - (float)(result + result);
    }
  }
  if ( !v5->fields.messageAlign )
    return 0.0;
  maxFontSize = v5->fields.maxFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v32, maxFontSize, v3);
  v37 = v5->fields.messageAlign;
  result = (float)(v5->fields.dispSize.fields.y - (float)((float)(v14 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v5->fields.rubyLineHeight + 4.0);
  if ( v37 == 1 )
    return result * 0.5;
  if ( v37 != 2 )
    return 0.0;
  return result;
}


int32_t __fastcall ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v6; // x6

  if ( (byte_435783C & 1) == 0 )
  {
    sub_B70694(&AndroidBackKeyManager_TypeInfo);
    sub_B70694(&StringLiteral_9169/*"MessageShake/LogMark/BackLogButton"*/);
    byte_435783C = 1;
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
        ScriptMessageCommonManager__ForceOpen(this, v4),
        (rootPanel = this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(rootPanel, 1, 0LL),
        rootPanel = this->fields.messageBase,
        this->fields.messageAlign = 0,
        !rootPanel) )
  {
    sub_B7076C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21318328(transform, (System_String_o *)StringLiteral_9169/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
  return ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v6);
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
    sub_B7076C(0LL, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rootPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435783F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435783F = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_15;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)rootPanel,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_15;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      return 0;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(rootPanel, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(rootPanel, method);
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
  UnityEngine_Object_o *rootObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_435785D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435785D = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
    return 0;
  v6 = this->fields.rootObject;
  if ( !v6 )
    sub_B7076C(0LL, v4);
  return UnityEngine_GameObject__get_activeSelf(v6, 0LL);
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
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4357840 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357840 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_16;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_16;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      return *(float *)&Component_srcLineSprite[1].klass < 0.0;
  }
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject
    || (rootObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL)) == 0LL
    || (rootObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootObject, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B7076C(rootObject, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectExist(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x20
  unsigned __int64 i; // x21
  ScriptMessageLabel_o *v5; // x23
  UnityEngine_Object_o *effect; // x20
  UnityEngine_Object_o *frontEffect; // x20

  v2 = this;
  if ( (byte_435785C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435785C = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( dispLabelList )
  {
    for ( i = 0LL; (__int64)i < dispLabelList->fields._size; ++i )
    {
      if ( i >= (unsigned int)dispLabelList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v5 = dispLabelList->fields._items->m_Items[i];
      if ( v5 )
      {
        effect = (UnityEngine_Object_o *)v5->fields.effect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          frontEffect = (UnityEngine_Object_o *)v5->fields.frontEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
      dispLabelList = v2->fields.dispLabelList;
      if ( !dispLabelList )
        sub_B7076C(this, method);
    }
  }
  return 0;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsBusy(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x20
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v6; // x22
  ScriptMessageLabel_o *v7; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v10; // x21

  v4 = this;
  if ( (byte_435785A & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435785A = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B7076C(this, effectName);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= dispLabelList->fields._size )
      return 0;
    if ( v6 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v7 = dispLabelList->fields._items->m_Items[v6];
    if ( v7 )
    {
      effect = (UnityEngine_Object_o *)v7->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v7->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = v7->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsBusy_17848224(v10, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v4->fields.dispLabelList;
    ++v6;
    if ( !dispLabelList )
      goto LABEL_22;
  }
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsStart(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x20
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v6; // x22
  ScriptMessageLabel_o *v7; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v10; // x21

  v4 = this;
  if ( (byte_435785B & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435785B = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B7076C(this, effectName);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= dispLabelList->fields._size )
      return 0;
    if ( v6 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v7 = dispLabelList->fields._items->m_Items[v6];
    if ( v7 )
    {
      effect = (UnityEngine_Object_o *)v7->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v7->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = v7->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsStart_17849224(v10, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v4->fields.dispLabelList;
    ++v6;
    if ( !dispLabelList )
      goto LABEL_22;
  }
}


bool __fastcall ScriptMessageCommonManager__MessageEffectStop(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v6; // x20
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x22
  unsigned __int64 v8; // x23
  char v9; // w24
  bool v10; // w21
  ScriptMessageLabel_o *v11; // x27
  UnityEngine_Object_o *effect; // x22
  UnityEngine_Object_o *frontEffect; // x22
  UnityEngine_GameObject_o *v14; // x22

  v6 = this;
  if ( (byte_4357859 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357859 = 1;
  }
  dispLabelList = v6->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B7076C(this, effectName);
  v8 = 0LL;
  v9 = 1;
  v10 = isSkip;
  while ( (__int64)v8 < dispLabelList->fields._size )
  {
    if ( v8 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v11 = dispLabelList->fields._items->m_Items[v8];
    if ( v11 )
    {
      effect = (UnityEngine_Object_o *)v11->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v11->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v11->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__Stop_17856588(v14, effectName, v10, 0, 0LL);
          v9 &= (unsigned __int8)this;
        }
      }
    }
    dispLabelList = v6->fields.dispLabelList;
    ++v8;
    if ( !dispLabelList )
      goto LABEL_22;
  }
  return v9 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  long double v3; // q8
  bool v4; // w20
  ScriptMessageCommonManager_o *v5; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 dispIndex; // x25
  __int64 v8; // x27
  int size; // w8
  __int64 v10; // x24
  UnityEngine_Object_o *v11; // x21
  float v12; // s0
  float dispCountTimer; // s0
  float v14; // s1
  float messageSpeed; // s2
  float v16; // s1
  float v17; // s0
  double v18; // d0
  int32_t v19; // w23
  UnityEngine_Object_o *v20; // x21
  UILabel_o *v21; // x21
  UILabel_o *v22; // x21
  __int64 v23; // x8
  float v24; // s0
  int v25; // w8
  UnityEngine_Object_o *v27; // x20
  const MethodInfo *v28; // x2
  UILabel_o *v29; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x21
  UILabel_o *v34; // x20
  System_String_o *v35; // x22
  float v36; // s9
  float v37; // s8
  int32_t v38; // w23
  float v39; // s9
  double v40; // d8
  const MethodInfo *v41; // x2
  double v42; // d0
  double v43; // d0
  double v44; // d1
  double v45; // d1
  System_String_o *v46; // x0
  double iptr; // [xsp+18h] [xbp-48h] BYREF

  v4 = isMessageDelta;
  v5 = this;
  if ( (byte_4357854 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&ScriptMessageLabel_TypeInfo);
    byte_4357854 = 1;
  }
  if ( !v5->fields.isBusy )
  {
    v5->fields.dispCountTimer = -1.0;
    return v5->fields.isBusy;
  }
  dispLabelList = v5->fields.dispLabelList;
  v5->fields.isBusy = 0;
  if ( !dispLabelList )
    goto LABEL_86;
  dispIndex = v5->fields.dispIndex;
  v8 = 8 * dispIndex + 32;
  LODWORD(v3) = 1.0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)dispIndex >= size )
      return v5->fields.isBusy;
    if ( size <= (unsigned int)dispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = *(__int64 *)((char *)&dispLabelList->fields._items->obj.klass + v8);
    if ( !v10 )
      goto LABEL_86;
    v11 = *(UnityEngine_Object_o **)(v10 + 48);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v12 = *(float *)(v10 + 172);
    if ( v12 >= 0.0 )
    {
      if ( v4 )
      {
        v12 = v12 - v5->fields.defaultStepTime;
        *(float *)(v10 + 172) = v12;
      }
      if ( v12 >= 0.0 )
      {
        v5->fields.isBusy = 1;
        return v5->fields.isBusy;
      }
      v4 = 0;
      *(_DWORD *)(v10 + 172) = 0;
    }
LABEL_48:
    dispLabelList = v5->fields.dispLabelList;
    LODWORD(dispIndex) = dispIndex + 1;
    v8 += 8LL;
    v5->fields.dispIndex = dispIndex;
    if ( !dispLabelList )
      goto LABEL_86;
  }
  if ( *(int *)(v10 + 168) < 1 )
  {
LABEL_32:
    v20 = *(UnityEngine_Object_o **)(v10 + 16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = *(UILabel_o **)(v10 + 16);
      this = (ScriptMessageCommonManager_o *)System_String__Concat_44758168(
                                               *(System_String_o **)(v10 + 112),
                                               *(System_String_o **)(v10 + 120),
                                               0LL);
      if ( !v21 )
        goto LABEL_86;
      UILabel__set_text(v21, (System_String_o *)this, 0LL);
      *(_QWORD *)&isMessageDelta = *(_QWORD *)(v10 + 128);
      if ( !isMessageDelta )
        goto LABEL_86;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v22 = *(UILabel_o **)(v10 + 24);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44758168(
                                                 *(System_String_o **)(v10 + 112),
                                                 (System_String_o *)isMessageDelta,
                                                 0LL);
        if ( !v22 )
          goto LABEL_86;
        UILabel__set_text(v22, (System_String_o *)this, 0LL);
      }
    }
    else
    {
      v23 = *(_QWORD *)(v10 + 136);
      if ( !v23 )
        goto LABEL_86;
      if ( *(int *)(v23 + 16) >= 1 )
      {
        this = *(ScriptMessageCommonManager_o **)(v10 + 32);
        if ( !this )
          goto LABEL_86;
        this = (ScriptMessageCommonManager_o *)((__int64 (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, long double))this->klass->vtable._8_IsEnableCloseDown.method)(
                                                 this,
                                                 this->klass->vtable._9_CloseDown.methodPtr,
                                                 v3);
      }
    }
    if ( v5->fields.isFastMessageRequest || (v24 = *(float *)(v10 + 164), v24 == 0.0) )
    {
      v5->fields.dispCountTimer = -1.0;
    }
    else
    {
      v25 = *(_DWORD *)(v10 + 168);
      if ( v25 >= 1 )
        v5->fields.dispCountTimer = v5->fields.dispCountTimer - (float)(v24 * (float)v25);
    }
    goto LABEL_48;
  }
  dispCountTimer = v5->fields.dispCountTimer;
  v14 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_24;
  messageSpeed = v5->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_24;
  if ( v4 )
  {
    v4 = 0;
    v14 = dispCountTimer + (float)(messageSpeed * v5->fields.defaultStepTime);
LABEL_24:
    dispCountTimer = v14;
    v5->fields.dispCountTimer = v14;
    goto LABEL_25;
  }
  v4 = 0;
LABEL_25:
  if ( v5->fields.isFastMessageRequest )
    goto LABEL_32;
  v16 = *(float *)(v10 + 164);
  if ( v16 == 0.0 || v5->fields.messageSpeed == 0.0 )
    goto LABEL_32;
  v17 = dispCountTimer / v16;
  v18 = v17 == INFINITY ? -INFINITY : v17;
  v19 = (int)v18;
  if ( *(_DWORD *)(v10 + 168) <= (int)v18 )
    goto LABEL_32;
  v5->fields.isBusy = 1;
  v27 = *(UnityEngine_Object_o **)(v10 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    v29 = *(UILabel_o **)(v10 + 16);
    v30 = *(System_String_o **)(v10 + 112);
    v31 = *(System_String_o **)(v10 + 120);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v32 = ScriptMessageLabel__SubstrByDisp(v31, v19, v28);
    this = (ScriptMessageCommonManager_o *)System_String__Concat_44758168(v30, v32, 0LL);
    if ( v29 )
    {
      UILabel__set_text(v29, (System_String_o *)this, 0LL);
      v33 = *(System_String_o **)(v10 + 128);
      if ( v33 )
      {
        if ( v33->fields.m_stringLength < 1 )
          return v5->fields.isBusy;
        v34 = *(UILabel_o **)(v10 + 24);
        v35 = *(System_String_o **)(v10 + 112);
        v36 = (float)*(int *)(v10 + 168);
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v37 = (float)v19 / v36;
        v38 = ScriptMessageLabel__StrlenByDisp(v33, (const MethodInfo *)isMessageDelta);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v39 = v37 * (float)v38;
        v40 = v39;
        v42 = modf(v39, &iptr);
        if ( v39 >= 0.0 )
        {
          if ( v42 == 0.5 )
          {
            v43 = iptr;
            v44 = 1.0;
            goto LABEL_77;
          }
          v43 = floor(v40 + 0.5);
        }
        else if ( v42 == -0.5 )
        {
          v43 = iptr;
          v44 = -1.0;
LABEL_77:
          v45 = v43 + v44;
          if ( ((__int64)v43 & 1) != 0 )
            v43 = v45;
        }
        else
        {
          v43 = ceil(v40 + -0.5);
        }
        if ( v43 == INFINITY )
          v43 = -v43;
        v46 = ScriptMessageLabel__SubstrByDisp(v33, (int)v43, v41);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44758168(v35, v46, 0LL);
        if ( v34 )
        {
          UILabel__set_text(v34, (System_String_o *)this, 0LL);
          return v5->fields.isBusy;
        }
      }
    }
LABEL_86:
    sub_B7076C(this, isMessageDelta);
  }
  return v5->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_B7076C(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4357851 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10107/*"OnDelayWaitNextTouch"*/);
    byte_4357851 = 1;
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
          sub_B7076C(0LL, v3);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10107/*"OnDelayWaitNextTouch"*/,
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
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  float v5; // s8
  float windowClosePosY; // s9

  if ( (byte_4357844 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357844 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_14;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_14;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      rootObject = this->fields.rootObject;
      if ( rootObject )
      {
        v5 = *(float *)&Component_srcLineSprite[1].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v5 != windowClosePosY, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7076C(rootObject, method);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4357852 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10107/*"OnDelayWaitNextTouch"*/);
    byte_4357852 = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_B7076C(0LL, v3);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10107/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4357850 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10107/*"OnDelayWaitNextTouch"*/);
    byte_4357850 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_B7076C(0LL, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10107/*"OnDelayWaitNextTouch"*/,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__OnShake(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *messageShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4357858 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10177/*"OnShake"*/);
    byte_4357858 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( messageShake )
    {
      v12.fields.y = v7;
      v12.fields.z = 0.0;
      v12.fields.x = v4;
      UnityEngine_Transform__set_localPosition(messageShake, v12, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10177/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B7076C(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_36061308(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10177/*"OnShake"*/,
    0LL);
  v8 = this->fields.messageShake;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v8 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__OpenUp(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  TweenPosition_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **windowUpCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4357842 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4357842 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_30;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_30;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) == 0 )
    goto LABEL_33;
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
  {
LABEL_33:
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( !rootObject )
      goto LABEL_30;
    rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)rootObject,
                                               0LL);
    if ( !rootObject )
      goto LABEL_30;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
    if ( localPosition.fields.y < this->fields.windowNormalPosY )
    {
      rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
      if ( !rootObject )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
      windowOpenTime = 0.0;
      if ( !isFast )
        windowOpenTime = this->fields.windowOpenTime;
      v18.fields.y = this->fields.windowNormalPosY;
      v18.fields.x = 0.0;
      v18.fields.z = 0.0;
      v9 = TweenPosition__Begin(gameObject, windowOpenTime, v18, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_30;
        v9->fields.style = 0;
        windowUpCurve = (System_Int32_array **)this->fields.windowUpCurve;
        v9->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowUpCurve;
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields.animationCurve,
          windowUpCurve,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        UITweener__PlayForward((UITweener_o *)v9, 0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(7, 0LL);
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
LABEL_30:
      sub_B7076C(rootObject, isFast);
    }
  }
}


void __fastcall ScriptMessageCommonManager__PageScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  float x; // s1
  float textOnlyLineHeight; // s2
  float rubyLineHeight; // s0
  float betweenLineHeight; // s3
  float v14; // s4
  float y; // s1
  int32_t defaultFontSize; // w8
  float defaultTextOnlyLineHeight; // s2
  float v18; // s1
  System_Int32_array **v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4357855 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357855 = 1;
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
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  this->fields.scrollPosition.fields.y = v18;
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.defaultColorTag,
    v19,
    (System_String_array **)method,
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  UnityEngine_GameObject_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ScriptMessageWindow_o *v26; // x22
  const MethodInfo *v27; // x2
  UnityEngine_GameObject_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *imagePrefab; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ScriptMessageWindow_o *currentMessageWindow; // x22
  const MethodInfo *v56; // x2
  UnityEngine_Transform_o *transform; // x22
  int v58; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *rubyPrefab; // x21
  struct UILabel_o *Component_srcLineSprite; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  ScriptMessageWindow_o *v69; // x21
  const MethodInfo *v70; // x2
  UnityEngine_Transform_o *v71; // x21
  int v72; // s0
  UnityEngine_Transform_o *v75; // x21
  int v76; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *mainPrefab; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  ScriptMessageWindow_o *v86; // x22
  const MethodInfo *v87; // x2
  UnityEngine_Transform_o *v88; // x22
  int v89; // s0
  UnityEngine_Transform_o *v92; // x22
  int v93; // s0

  v10 = this;
  if ( (byte_4357833 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_B70694(&StringLiteral_5900/*"Effect Parent"*/);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&StringLiteral_5898/*"Effect Child"*/);
    byte_4357833 = 1;
  }
  if ( hasImage )
  {
    this = (ScriptMessageCommonManager_o *)v10->fields.imageStock;
    if ( !this )
      goto LABEL_67;
    if ( SLODWORD(this->fields.rootPanel) < 1 )
    {
      imagePrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v10->fields.imagePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               imagePrefab,
                                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_67;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !label )
        goto LABEL_67;
      label->fields.image = (struct UISprite_o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      this = (ScriptMessageCommonManager_o *)label->fields.image;
      if ( !this )
        goto LABEL_67;
      currentMessageWindow = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !currentMessageWindow )
        goto LABEL_67;
      ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)this, v56);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( !label )
        goto LABEL_67;
      label->fields.image = (struct UISprite_o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_67;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_67;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v58, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_67;
LABEL_64:
    v92 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Vector3__get_one(0LL);
    if ( !v92 )
      goto LABEL_67;
    UnityEngine_Transform__set_localScale(v92, *(UnityEngine_Vector3_o *)&v93, 0LL);
    if ( !hasRuby )
      return;
    goto LABEL_20;
  }
  if ( !hasEffect )
  {
    this = (ScriptMessageCommonManager_o *)v10->fields.mainStock;
    if ( !this )
      goto LABEL_67;
    if ( SLODWORD(this->fields.rootPanel) < 1 )
    {
      mainPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v10->fields.mainPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               mainPrefab,
                                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_67;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_67;
      label->fields.main = (struct UILabel_o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_67;
      v86 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v86 )
        goto LABEL_67;
      ScriptMessageWindow__AddChildMessageScroll(v86, (UnityEngine_Transform_o *)this, v87);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_67;
      label->fields.main = (struct UILabel_o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_67;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_67;
    v88 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v89 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v88 )
      goto LABEL_67;
    UnityEngine_Transform__set_localPosition(v88, *(UnityEngine_Vector3_o *)&v89, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_67;
    goto LABEL_64;
  }
  if ( !label )
    goto LABEL_67;
  p_effect = (ScriptMessageCommonManager_o **)&label->fields.effect;
  effect = (UnityEngine_Object_o *)label->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effect, 0LL, 0LL) )
  {
    v19 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v19, (System_String_o *)StringLiteral_5900/*"Effect Parent"*/, 0LL);
    *p_effect = (ScriptMessageCommonManager_o *)v19;
    sub_B70630(
      (BattleServantConfConponent_o *)&label->fields.effect,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this = *p_effect;
    if ( !*p_effect )
      goto LABEL_67;
    v26 = v10->fields.currentMessageWindow;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v26 )
      goto LABEL_67;
    ScriptMessageWindow__AddChildMessageScroll(v26, (UnityEngine_Transform_o *)this, v27);
    v28 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v28, (System_String_o *)StringLiteral_5898/*"Effect Child"*/, 0LL);
    label->fields.frontEffect = v28;
    sub_B70630(
      (BattleServantConfConponent_o *)&label->fields.frontEffect,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
    if ( !this )
      goto LABEL_67;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    UnityEngine_Transform__SetParent_36188248((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0LL);
  }
  if ( !hasRuby )
    return;
LABEL_20:
  this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
  if ( !this )
    goto LABEL_67;
  if ( SLODWORD(this->fields.rootPanel) >= 1 )
  {
    v35 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
            (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    label->fields.ruby = (struct UILabel_o *)v35;
    sub_B70630(
      (BattleServantConfConponent_o *)&label->fields.ruby,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    goto LABEL_47;
  }
  rubyPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v10->fields.rubyPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           rubyPrefab,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (Component_srcLineSprite = (struct UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___),
        label->fields.ruby = Component_srcLineSprite,
        sub_B70630(
          (BattleServantConfConponent_o *)&label->fields.ruby,
          (System_Int32_array **)Component_srcLineSprite,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68),
        (this = (ScriptMessageCommonManager_o *)label->fields.ruby) == 0LL)
    || (v69 = v10->fields.currentMessageWindow,
        this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL),
        !v69) )
  {
LABEL_67:
    sub_B7076C(this, label);
  }
  ScriptMessageWindow__AddChildMessageScroll(v69, (UnityEngine_Transform_o *)this, v70);
LABEL_47:
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  v71 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v72 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v71 )
    goto LABEL_67;
  UnityEngine_Transform__set_localPosition(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  v75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_one(0LL);
  if ( !v75 )
    goto LABEL_67;
  UnityEngine_Transform__set_localScale(v75, *(UnityEngine_Vector3_o *)&v76, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  UILabel__set_fontSize((UILabel_o *)this, v10->fields.rubyFontSize, 0LL);
}


void __fastcall ScriptMessageCommonManager__QuitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_435783D & 1) == 0 )
  {
    sub_B70694(&AndroidBackKeyManager_TypeInfo);
    sub_B70694(&StringLiteral_9169/*"MessageShake/LogMark/BackLogButton"*/);
    byte_435783D = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))rootPanel->klass[1]._1.gc_desc)(
          rootPanel,
          rootPanel->klass[1]._1.name,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v4),
        (rootPanel = this->fields.talkNameManager) == 0LL)
    || (ScriptLineMessage__DeleteLabels(rootPanel, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0LL) )
  {
    sub_B7076C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_21409788(transform, (System_String_o *)StringLiteral_9169/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
}


void __fastcall ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o **v4; // x20
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_4357838 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_B70694(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4357838 = 1;
  }
  if ( !label )
    goto LABEL_28;
  p_fields = (ScriptMessageCommonManager_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_28;
    UILabel__RemoveFromDynamicFontList((UILabel_o *)this, 0LL);
    this = v4[49];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_fields,
      (const MethodInfo_2CFC4EC *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&label->fields, 0LL, v7, v8, v9, v10, v11, v12);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = (ScriptMessageCommonManager_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[50];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_ruby,
      (const MethodInfo_2CFC4EC *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&label->fields.ruby, 0LL, v15, v16, v17, v18, v19, v20);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    this = (ScriptMessageCommonManager_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
        this,
        this->klass->vtable._9_CloseDown.methodPtr,
        0.0);
      this = v4[51];
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_image,
          (const MethodInfo_2CFC4EC *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&label->fields.image, 0LL, v23, v24, v25, v26, v27, v28);
        goto LABEL_26;
      }
    }
LABEL_28:
    sub_B7076C(this, label);
  }
LABEL_26:
  ScriptMessageLabel__Release(label, (const MethodInfo *)label);
  this = v4[52];
  if ( !this )
    goto LABEL_28;
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
    (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
    (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
    (const MethodInfo_2CFC4EC *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_B7076C(0LL, method);
  UITouchPress__PressReset(touchPress, 0LL);
  this->fields.isFastMessageRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ResetMessageWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentMessageWindow; // x21
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  __int64 v13; // x1
  struct ScriptMessageWindow_o *v14; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ScriptMessageWindow_o *v22; // x8
  struct UnityEngine_GameObject_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *v31; // x22
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *v33; // x21
  struct ScriptMessageWindow_o *v34; // x8
  struct UnityEngine_GameObject_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ScriptMessageWindow_o *v42; // x8
  struct UnityEngine_GameObject_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ScriptMessageWindow_o *v56; // x8
  System_Int32_array **talkNameMessageRoot; // x1
  struct ScriptMessageWindow_o *v58; // x8
  struct ScriptLineMessage_o *talkNameManager; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ScriptMessageWindow_o *v66; // x8
  struct ScriptLineMessage_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct ScriptMessageWindow_o *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  const MethodInfo *v81; // x6
  const MethodInfo *v82; // x1

  if ( (byte_435784E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435784E = 1;
  }
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Equality(currentMessageWindow, 0LL, 0LL) )
  {
    defaultMessageWindow = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = defaultMessageWindow;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
      (System_Int32_array **)defaultMessageWindow,
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
        this->fields.mainPrefab = gameObject;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.mainPrefab,
          (System_Int32_array **)gameObject,
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
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
            this->fields.rubyPrefab = v23;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
              (System_Int32_array **)v23,
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
LABEL_36:
    sub_B7076C(messageMainLabel, v13);
  }
  v30 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v31 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v30, v31, 0LL) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v32);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_36;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, 0LL);
    messageMainLabel = (char *)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_36;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)messageMainLabel,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v33, 0LL);
    v34 = this->fields.defaultMessageWindow;
    if ( !v34 )
      goto LABEL_36;
    messageMainLabel = (char *)v34->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.mainPrefab = v35;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mainPrefab,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = this->fields.defaultMessageWindow;
    if ( !v42 )
      goto LABEL_36;
    messageMainLabel = (char *)v42->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.rubyPrefab = v43;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v56 = this->fields.defaultMessageWindow;
    if ( !v56 )
      goto LABEL_36;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_36;
    talkNameMessageRoot = (System_Int32_array **)v56->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 6) = talkNameMessageRoot;
    sub_B70630(
      (BattleServantConfConponent_o *)(messageMainLabel + 48),
      talkNameMessageRoot,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v58 = this->fields.defaultMessageWindow;
    if ( !v58 )
      goto LABEL_36;
    messageMainLabel = (char *)v58->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !talkNameManager )
      goto LABEL_36;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_B70630(
      (BattleServantConfConponent_o *)&talkNameManager->fields.mainPrefab,
      (System_Int32_array **)messageMainLabel,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = this->fields.defaultMessageWindow;
    if ( !v66 )
      goto LABEL_36;
    messageMainLabel = (char *)v66->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v67 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !v67 )
      goto LABEL_36;
    v67->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_B70630(
      (BattleServantConfConponent_o *)&v67->fields.rubyPrefab,
      (System_Int32_array **)messageMainLabel,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_36;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !messageMainLabel )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0LL);
    v74 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v74;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
      (System_Int32_array **)v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v81);
    ScriptMessageCommonManager__ResetScroll(this, v82);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  struct ScriptMessageWindow_o *v5; // x8
  float v6; // s0
  float v7; // s2
  struct ScriptMessageWindow_o *v8; // x8
  float y; // s10
  float v10; // s8
  float v11; // s9
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4357857 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357857 = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_18;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_18;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  v5 = v2->fields.currentMessageWindow;
  if ( !v5 )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)v5->fields.messageScroll;
  if ( !this )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (v8 = v2->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v8->fields.messageScroll) == 0LL
    || (y = v2->fields.dispSize.fields.y,
        v10 = v6,
        v11 = v7,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_18:
    sub_B7076C(this, method);
  }
  v12.fields.y = y * 0.5;
  v12.fields.x = v10;
  v12.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12, 0LL);
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

  y = this->fields.dispSize.fields.y;
  v5 = this->fields.beforeTextOnlyLineHeight - this->fields.dispPosition.fields.y;
  if ( (float)(v5 - this->fields.scrollPosition.fields.y) <= (float)(y - (float)(y * 0.5)) )
    return 0;
  this->fields.scrollPosition.fields.y = (float)(v5 - y) + (float)(y * 0.5);
  if ( isScrollStop )
  {
    this->fields.isFastMessageRequest = 0;
    this->fields.isScroll = 0;
    return (unsigned __int8)&dword_0 + 1;
  }
  else
  {
    ScriptMessageCommonManager__StartScroll(this, isFast, (const MethodInfo *)isScrollStop);
    return 1;
  }
}


bool __fastcall ScriptMessageCommonManager__ReturnScroll2(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  float y; // s0
  float v4; // s2

  y = this->fields.dispSize.fields.y;
  v4 = (float)(this->fields.beforeTextOnlyLineHeight + this->fields.beforeTextOnlyLineHeight)
     - this->fields.dispPosition.fields.y;
  if ( (float)(v4 - this->fields.scrollPosition.fields.y) <= (float)(y - (float)(y * 0.5)) )
    return 0;
  this->fields.scrollPosition.fields.y = (float)(v4 - y) + (float)(y * 0.5);
  ScriptMessageCommonManager__StartScroll(this, isFast, method);
  return 1;
}


void __fastcall ScriptMessageCommonManager__ReturnText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  float betweenLineHeight; // s3
  float y; // s2
  float x; // w8
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
  float v5; // s8
  float v6; // s9
  UnityEngine_GameObject_o *gameObject; // x0

  if ( instant )
    v5 = 0.0;
  else
    v5 = 0.2;
  if ( isOn )
    v6 = 1.0;
  else
    v6 = 0.0;
  if ( !button
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)button,
                                                 0LL)) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL)) == 0LL )
  {
    sub_B7076C(this, button);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(gameObject, v5, v6, 0LL);
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
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v6; // x8

  if ( (byte_435785F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17207/*"btn_auto_on"*/);
    sub_B70694(&StringLiteral_17206/*"btn_auto_off"*/);
    byte_435785F = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_B7076C(0LL, isOn);
  v6 = (System_String_o **)&StringLiteral_17207/*"btn_auto_on"*/;
  if ( !isOn )
    v6 = (System_String_o **)&StringLiteral_17206/*"btn_auto_off"*/;
  UISprite__set_spriteName(autoMessageSprite, *v6, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetBetweenLineHeight(
        ScriptMessageCommonManager_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_B7076C(0LL, method);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t defaultFontSize; // w8
  float defaultTextOnlyLineHeight; // w9
  float defaultBetweenLineHeight; // w10
  System_Int32_array **v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4357845 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357845 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.verticalAlign = 0;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v12, v2, v3, v4, v5, v6, v7);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v13);
}


void __fastcall ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_B7076C(0LL, enable);
  UICommonButton__SetButtonEnable(autoMessageButton, enable, 1, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetEnableBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *backLogButton; // x0

  backLogButton = this->fields.backLogButton;
  if ( !backLogButton )
    sub_B7076C(0LL, enable);
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
  const MethodInfo *v8; // x1
  int32_t VerticalAlignFromString; // w0
  int32_t fontSize; // s0
  float textOnlyLineHeight; // s1
  float v12; // s0

  if ( (byte_4357848 & 1) == 0 )
  {
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    byte_4357848 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.fontSize = ScriptMessageLabel__GetFontSize(
                            sizeName,
                            defaultFontSize,
                            (const MethodInfo *)verticalAlignString);
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlignString, v8);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v12 = (float)fontSize;
  if ( textOnlyLineHeight < v12 )
    this->fields.textOnlyLineHeight = v12;
}


void __fastcall ScriptMessageCommonManager__SetFontType(
        ScriptMessageCommonManager_o *this,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4357847 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357847 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_B7076C(v5, v6);
  }
  else
  {
    font = this->fields.defaultFontType;
  }
  this->fields.fontType = font;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)font,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B7076C(0LL, flag);
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


void __fastcall ScriptMessageCommonManager__SetMessageWindowCollider(
        ScriptMessageCommonManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *currentMessageWindow; // x0

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_B7076C(0LL, isEnable);
  ScriptMessageWindow__SetEnabledCollider(currentMessageWindow, isEnable, method);
}


void __fastcall ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_435783B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435783B = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rootObject, 0LL, 0LL) )
  {
    v7 = this->fields.rootObject;
    if ( !v7 )
      sub_B7076C(0LL, v6);
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
  UnityEngine_GameObject_o *rootPanel; // x0
  float v14; // s1
  float v15; // s0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v17; // x8
  int v18; // s2
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  struct ScriptMessageWindow_o *v23; // x8
  float v24; // s0
  UIPanel_o *dispPanel; // x22
  ManagerConfig_c *v26; // x0
  int WIDTH; // s0
  struct ScriptMessageWindow_o *v28; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  long double v30; // q0
  struct ScriptMessageWindow_o *v31; // x8
  float v32; // s0
  MethodInfo v35; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435783E & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435783E = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    goto LABEL_36;
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
      goto LABEL_36;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_36;
    v14 = (float)y;
    v15 = (float)x;
  }
  else if ( isWindowBack )
  {
    currentMessageWindow = this->fields.currentMessageWindow;
    if ( !currentMessageWindow )
      goto LABEL_36;
    rootPanel = this->fields.messageBase;
    this->fields.dispSize = currentMessageWindow->fields.defaultWindowDispSize;
    if ( !rootPanel )
      goto LABEL_36;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    v17 = this->fields.currentMessageWindow;
    if ( !v17 || !rootPanel )
      goto LABEL_36;
    v15 = v17->fields.defaultWindowDispCenter.fields.x;
    v14 = v17->fields.defaultWindowDispCenter.fields.y;
  }
  else
  {
    rootPanel = this->fields.messageBase;
    this->fields.dispSize = this->fields.defaultAllDispSize;
    if ( !rootPanel )
      goto LABEL_36;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_36;
    v15 = this->fields.defaultAllDispCenter.fields.x;
    v14 = this->fields.defaultAllDispCenter.fields.y;
  }
  v18 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v15, 0LL);
  v23 = this->fields.currentMessageWindow;
  v24 = -(float)(this->fields.rubyLineHeight + 2.0);
  this->fields.startPosition.fields.x = 0.0;
  this->fields.startPosition.fields.y = v24;
  this->fields.isWindowBack = isWindowBack;
  if ( !v23 )
    goto LABEL_36;
  dispPanel = v23->fields.dispPanel;
  v26 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v26 = ManagerConfig_TypeInfo;
  }
  v36.fields.w = this->fields.dispSize.fields.y;
  v36.fields.y = 0.0;
  WIDTH = v26->static_fields->WIDTH;
  v35.methodPointer = 0LL;
  v35.invoker_method = 0LL;
  v36.fields.z = (float)WIDTH;
  v36.fields.x = 0.0;
  UnityEngine_Vector4___ctor(v36, v19, v20, v21, v22, &v35);
  if ( !dispPanel
    || (*(_QWORD *)&v37.fields.x = v35.methodPointer,
        *(_QWORD *)&v37.fields.z = v35.invoker_method,
        UIPanel__set_baseClipRegion(dispPanel, v37, 0LL),
        (v28 = this->fields.currentMessageWindow) == 0LL) )
  {
LABEL_36:
    sub_B7076C(rootPanel, *(_QWORD *)&x);
  }
  messageWindowBack = (UnityEngine_Object_o *)v28->fields.messageWindowBack;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0LL, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    v31 = this->fields.currentMessageWindow;
    if ( v31 )
    {
      rootPanel = (UnityEngine_GameObject_o *)v31->fields.messageWindowBack;
      if ( rootPanel )
      {
        LODWORD(v30) = 0;
        if ( isWindowBack )
          *(float *)&v30 = 1.0;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          v30);
        goto LABEL_32;
      }
    }
    goto LABEL_36;
  }
LABEL_32:
  ScriptMessageCommonManager__ClearText(this, *(const MethodInfo **)&x);
  v32 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v32 == INFINITY )
    return (int)-v32;
  else
    return (int)v32;
}


void __fastcall ScriptMessageCommonManager__SetSpeed(
        ScriptMessageCommonManager_o *this,
        float n,
        const MethodInfo *method)
{
  if ( n <= 0.0 )
  {
    if ( n < 0.0 )
      this->fields.stepTime = this->fields.defaultStepTime;
    else
      this->fields.stepTime = 0.0;
  }
  else
  {
    this->fields.stepTime = 1.0 / n;
  }
}


bool __fastcall ScriptMessageCommonManager__SetTalkName(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        System_String_o *classname,
        System_String_o *charaname,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v30; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v32; // q0
  float v33; // s0
  struct ScriptMessageWindow_o *v34; // x8
  int talkNameBackDefaultWidth; // w9
  double v36; // d0
  struct ScriptMessageWindow_o *v37; // x8
  struct ScriptMessageWindow_o *v38; // x8
  UnityEngine_GameObject_c *klass; // x8
  float x; // s1
  float betweenLineHeight; // s3
  float y; // s2
  float v43; // w8
  float v44; // s0
  const MethodInfo *v45; // x1
  struct ScriptMessageWindow_o *v46; // x8
  long double v47; // q0

  if ( (byte_435784F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_130/*" 1.5]"*/);
    sub_B70694(&StringLiteral_16020/*"[image "*/);
    byte_435784F = 1;
  }
  v11 = System_String__Concat_44758168(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v11, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v12);
    return 1;
  }
  this->fields.talkName = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.talkName,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.talkNameOnly = charaname;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.talkNameOnly,
    (System_Int32_array **)charaname,
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
                                                       v11,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       1LL,
                                                       talkNameRootObject->klass[1]._1.element_class);
    v30 = this->fields.currentMessageWindow;
    if ( !v30 )
      goto LABEL_39;
    talkNameBack = (UnityEngine_Object_o *)v30->fields.talkNameBack;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    talkNameRootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(talkNameBack, 0LL, 0LL);
    if ( ((unsigned __int8)talkNameRootObject & 1) != 0 )
    {
      talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
      if ( !talkNameRootObject )
        goto LABEL_39;
      LODWORD(v33) = *(_QWORD *)&ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)talkNameRootObject, 0LL);
      v34 = this->fields.currentMessageWindow;
      if ( !v34 )
        goto LABEL_39;
      talkNameBackDefaultWidth = v34->fields.talkNameBackDefaultWidth;
      if ( v33 > (float)talkNameBackDefaultWidth )
      {
        if ( v33 == INFINITY )
          v36 = -v33;
        else
          v36 = v33;
        talkNameBackDefaultWidth = (int)v36;
      }
      if ( !talkNameBack )
        goto LABEL_39;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((v34->fields.talkNameBackBaseWidth + talkNameBackDefaultWidth) & 1)
      + v34->fields.talkNameBackBaseWidth
      + talkNameBackDefaultWidth,
        0LL);
    }
    v37 = this->fields.currentMessageWindow;
    if ( !v37 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v37->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
    if ( imageName )
    {
      UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0LL);
      v38 = this->fields.currentMessageWindow;
      if ( v38 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v38->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          klass = talkNameRootObject->klass;
          LODWORD(v32) = 1.0;
          goto LABEL_34;
        }
      }
LABEL_39:
      sub_B7076C(talkNameRootObject, v26);
    }
  }
  else
  {
    if ( imageName )
      v11 = System_String__Concat_44761580(
              (System_String_o *)StringLiteral_16020/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_130/*" 1.5]"*/,
              v11,
              0LL);
    x = this->fields.startPosition.fields.x;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptMessageCommonManager__UpdateLabels(this, v11, 1, 0, v27);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v43 = this->fields.startPosition.fields.x;
    v44 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v44;
    this->fields.dispPosition.fields.x = v43;
    this->fields.dispPosition.fields.y = y - (float)(v44 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v45);
    v46 = this->fields.currentMessageWindow;
    if ( !v46 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v46->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
  }
  klass = talkNameRootObject->klass;
  LODWORD(v32) = 0;
LABEL_34:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v32);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_39;
  LODWORD(v47) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v47 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    v47);
  return 1;
}


void __fastcall ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x21
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UISprite_o *talkNameBack; // x19
  UnityEngine_Object_o *talkNameAtlas; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **mAtlas; // x1
  System_Int32_array **mSpriteName; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UISpriteData_o *AtlasSprite; // x0

  v4 = this;
  if ( (byte_435784C & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435784C = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_24;
  talkNameBack = currentMessageWindow->fields.talkNameBack;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)talkNameBack, 0LL, 0LL) )
  {
    talkNameAtlas = (UnityEngine_Object_o *)v4->fields.talkNameAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !talkNameBack )
        goto LABEL_24;
      mAtlas = (System_Int32_array **)talkNameBack->fields.mAtlas;
      v4->fields.talkNameAtlas = (struct UIAtlas_o *)mAtlas;
      sub_B70630((BattleServantConfConponent_o *)&v4->fields.talkNameAtlas, mAtlas, v8, v9, v10, v11, v12, v13);
      mSpriteName = (System_Int32_array **)talkNameBack->fields.mSpriteName;
      v4->fields.talkNameSpriteName = (struct System_String_o *)mSpriteName;
      sub_B70630(
        (BattleServantConfConponent_o *)&v4->fields.talkNameSpriteName,
        mSpriteName,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    this = (ScriptMessageCommonManager_o *)System_String__IsNullOrEmpty(imageName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( talkNameBack )
      {
        UISprite__set_atlas(talkNameBack, v4->fields.talkNameAtlas, 0LL);
        UISprite__set_spriteName(talkNameBack, v4->fields.talkNameSpriteName, 0LL);
LABEL_21:
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
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)AtlasManager__SetMark(talkNameBack, imageName, 0LL);
      if ( talkNameBack )
        goto LABEL_21;
    }
LABEL_24:
    sub_B7076C(this, imageName);
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
  float defaultScrollTime; // w9
  float ScenarioTextSpeed; // s8
  BalanceConfig_c *v5; // x0
  float ScenarioTextSpeedDefault; // s9
  bool v7; // nf
  float v8; // s0
  float ScenarioScrollSpeed; // s0
  BalanceConfig_c *v10; // x0
  float v11; // s8
  float ScenarioScrollSpeedHigh; // s9
  float v13; // s0
  float *p_scrollSpeed; // x8
  float v15; // s0
  float fastScrollTime; // s1

  if ( (byte_4357846 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_4357846 = 1;
  }
  if ( this->fields.isMessageSpeedForcedNormal )
  {
    defaultScrollTime = this->fields.defaultScrollTime;
    this->fields.messageSpeed = 1.0;
  }
  else
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0LL);
    v5 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v5->static_fields->ScenarioTextSpeedDefault;
    v7 = OptionManager__GetScenarioTextSpeed(0LL) < BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh;
    v8 = 0.0;
    if ( v7 )
      v8 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v8;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
    v10 = BalanceConfig_TypeInfo;
    v11 = ScenarioScrollSpeed;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v10->static_fields->ScenarioScrollSpeedHigh;
    v13 = OptionManager__GetScenarioScrollSpeed(0LL);
    if ( v11 < ScenarioScrollSpeedHigh )
    {
      p_scrollSpeed = &this->fields.scrollSpeed;
      v15 = this->fields.defaultScrollTime
          / (float)(v13 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
      this->fields.scrollSpeed = v15;
      goto LABEL_23;
    }
    defaultScrollTime = this->fields.fastScrollTime;
  }
  p_scrollSpeed = &this->fields.scrollSpeed;
  this->fields.scrollSpeed = defaultScrollTime;
  v15 = defaultScrollTime;
LABEL_23:
  fastScrollTime = this->fields.fastScrollTime;
  if ( v15 < fastScrollTime )
    *p_scrollSpeed = fastScrollTime;
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
    sub_B7076C(this, method);
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
  __int64 v5; // x8
  float v6; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v9; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ScriptMessageWindow_o *v24; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  struct ScriptMessageWindow_o *v26; // x8

  v4 = this;
  if ( (byte_4357856 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_B70694(&StringLiteral_6070/*"EndScroll"*/);
    byte_4357856 = 1;
  }
  v5 = 308LL;
  if ( isFast )
    v5 = 164LL;
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (ScriptMessageCommonManager_o *)TweenPosition__Begin(gameObject, v6, v4->fields.scrollPosition, 0LL);
        if ( this )
        {
          v9 = this;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
          LODWORD(v9->fields.rootPanel) = 3;
          v10 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          v9->fields.messageShake = (struct UnityEngine_Transform_o *)v10;
          sub_B70630((BattleServantConfConponent_o *)&v9->fields.messageShake, v10, v11, v12, v13, v14, v15, v16);
          v17 = (System_Int32_array **)StringLiteral_6070/*"EndScroll"*/;
          v9->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_6070/*"EndScroll"*/;
          sub_B70630(
            (BattleServantConfConponent_o *)&v9->fields.defaultMessageWindow,
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
    goto LABEL_22;
  }
  v24 = v4->fields.currentMessageWindow;
  if ( !v24 )
    goto LABEL_22;
  this = (ScriptMessageCommonManager_o *)v24->fields.messageScroll;
  if ( !this )
    goto LABEL_22;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_22;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  v26 = v4->fields.currentMessageWindow;
  if ( !v26
    || (this = (ScriptMessageCommonManager_o *)v26->fields.messageScroll) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_22:
    sub_B7076C(this, isFast);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.scrollPosition, 0LL);
  v4->fields.isFastMessageRequest = 0;
  v4->fields.isScroll = 0;
}


void __fastcall ScriptMessageCommonManager__UpdateLabels(
        ScriptMessageCommonManager_o *this,
        System_String_o *txt,
        bool isStretch,
        bool isFoward,
        const MethodInfo *method)
{
  __int64 v8; // x22
  System_String_o *rootPanel; // x0
  System_String_o *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  long double v17; // q0
  float stepTime; // s8
  System_Text_StringBuilder_o *v19; // x20
  System_Text_StringBuilder_o **v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **defaultColorTag; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ScriptMessageCommonManager_ProcAddLabel_o *v34; // x23
  int32_t v35; // w20
  int v36; // w26
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  System_String_o *v39; // x27
  int32_t v40; // w1
  int32_t v41; // w2
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  __int64 *v44; // x8
  float v45; // s3
  float v46; // s2
  float v47; // w8
  float v48; // s0
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  BattleServantConfConponent_o *v57; // x0
  const MethodInfo *v58; // x2
  System_String_o *v59; // x20
  System_String_array *v60; // x20
  struct System_String_o *v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x1
  System_String_o *v69; // x0
  const MethodInfo *v70; // x4
  bool v71; // w8
  char v72; // w3
  System_String_o *v73; // x1
  ScriptMessageCommonManager_o *v74; // x0
  const MethodInfo *v75; // x3
  _BOOL4 isEffectMessage; // w27
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  int32_t v79; // w28
  System_String_o *v80; // x27
  System_String_o *v81; // x0
  int32_t BraceIndex; // w0
  System_String_o *v83; // x0
  const MethodInfo *v84; // x1
  int32_t v85; // w20
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t v94; // w27
  System_Text_StringBuilder_o *v95; // x28
  float betweenLineHeight; // s3
  float y; // s2
  float x; // w8
  float v99; // s0
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x3
  ScriptReplaceString_c *v102; // x0
  int32_t playerGenderIndex; // w27
  struct System_String_o *v104; // x1
  System_String_o *v105; // x20
  System_Text_StringBuilder_o *v106; // x21
  ScriptMessageCommonManager_ProcAddLabel2_o *v107; // [xsp+0h] [xbp-80h]
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-78h]
  System_String_o **colorTag; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_435783A & 1) == 0 )
  {
    sub_B70694(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
    sub_B70694(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&ScriptReplaceString_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__);
    sub_B70694(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__);
    sub_B70694(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
    sub_B70694(&StringLiteral_22346/*"servantName"*/);
    sub_B70694(&StringLiteral_15865/*"[-]"*/);
    sub_B70694(&StringLiteral_19555/*"i"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_15861/*"[*"*/);
    sub_B70694(&StringLiteral_16057/*"[~1]"*/);
    sub_B70694(&StringLiteral_15992/*"[^"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_22021/*"r"*/);
    sub_B70694(&StringLiteral_18558/*"effectmessage"*/);
    sub_B70694(&StringLiteral_20544/*"line"*/);
    sub_B70694(&StringLiteral_19716/*"image"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16056/*"[~"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_435783A = 1;
  }
  text = 0LL;
  v8 = sub_B70764(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass113_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_115;
  *(_QWORD *)(v8 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v8 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (System_String_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_115;
  stepTime = 0.0;
  LODWORD(v17) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v17 = 0.0;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, long double))rootPanel->klass->vtable._8_System_IConvertible_ToChar.method)(
    rootPanel,
    rootPanel->klass->vtable._9_System_IConvertible_ToSByte.methodPtr,
    v17);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v8 + 32) = stepTime;
  v19 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  v20 = (System_Text_StringBuilder_o **)(v8 + 16);
  *(_QWORD *)(v8 + 16) = v19;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  defaultColorTag = (System_Int32_array **)this->fields.defaultColorTag;
  colorTag = (System_String_o **)(v8 + 40);
  *(_QWORD *)(v8 + 40) = defaultColorTag;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 40), defaultColorTag, v28, v29, v30, v31, v32, v33);
  v34 = (ScriptMessageCommonManager_ProcAddLabel_o *)sub_B70764(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    v34,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0LL);
  v107 = (ScriptMessageCommonManager_ProcAddLabel2_o *)sub_B70764(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    v107,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_115:
    sub_B7076C(rootPanel, v10);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_111:
    if ( !v34 )
      goto LABEL_115;
    goto LABEL_112;
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  v35 = 0;
  v36 = 0;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v35, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      v94 = v35 + 1;
      rootPanel = (System_String_o *)ScriptMessageLabel__GetBraceIndex(txt, v35 + 1, v77);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_110;
      v79 = (int)rootPanel;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      rootPanel = ScriptMessageLabel__GetCommandName(txt, v94, v78);
      if ( !rootPanel )
        goto LABEL_115;
      v80 = rootPanel;
      if ( System_String__Equals_44745508(rootPanel, (System_String_o *)StringLiteral_18558/*"effectmessage"*/, 0LL) )
      {
        v81 = System_String__Substring_44821904(txt, v35 + 15, v36 + v79 - 15, 0LL);
        rootPanel = (System_String_o *)System_String__op_Equality(v81, (System_String_o *)StringLiteral_890/*"/"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = (System_String_o *)System_String__Equals_44745508(v80, (System_String_o *)StringLiteral_22021/*"r"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
        {
          rootPanel = (System_String_o *)v107;
          if ( !v107 )
            goto LABEL_115;
          ScriptMessageCommonManager_ProcAddLabel2__Invoke(v107, (System_String_o *)StringLiteral_82/*" "*/, 0LL);
          betweenLineHeight = this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          x = this->fields.startPosition.fields.x;
          v99 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          this->fields.beforeTextOnlyLineHeight = v99;
          this->fields.dispPosition.fields.x = x;
          this->fields.dispPosition.fields.y = y - (float)(v99 + betweenLineHeight);
          ScriptMessageCommonManager__SetDefaultState(this, v100);
        }
      }
      goto LABEL_109;
    }
    v94 = v35 + 1;
LABEL_110:
    v36 = -v94;
    v35 = v94;
    if ( v94 >= txt->fields.m_stringLength )
      goto LABEL_111;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v95 = *v20;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v35, 0LL);
    if ( !v95 )
      goto LABEL_115;
    v94 = v35 + 1;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42605224(v95, (uint16_t)rootPanel, 0LL);
    goto LABEL_110;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v94 = v35 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v35 + 1, v77);
  if ( BraceIndex == -1 )
  {
    rootPanel = (System_String_o *)*v20;
    if ( !*v20 )
      goto LABEL_115;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     (System_String_o *)StringLiteral_15855/*"["*/,
                                     0LL);
    goto LABEL_110;
  }
  v79 = BraceIndex;
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v94, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v83 = System_String__Substring_44821904(txt, v35 + 2, v36 + v79 - 2, 0LL);
    v85 = System_Int32__Parse(v83, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    String = ScriptReplaceString__GetString(v85, v84);
    TagSplitString = System_String__Concat_44758168(String, (System_String_o *)StringLiteral_15865/*"[-]"*/, 0LL);
    goto LABEL_106;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v94, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    if ( !byte_434E3FF )
    {
      sub_B70694(&ScriptReplaceString_TypeInfo);
      byte_434E3FF = 1;
    }
    v102 = ScriptReplaceString_TypeInfo;
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v102 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v102->static_fields->playerGenderIndex;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v35 + 2, playerGenderIndex, v101);
LABEL_106:
    v104 = *(struct System_String_o **)(v8 + 40);
    v105 = TagSplitString;
    this->fields.defaultColorTag = v104;
    sub_B70630(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v104,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    v71 = isStretch;
    v72 = *(_BYTE *)(v8 + 36);
    v74 = this;
    v73 = v105;
LABEL_107:
    ScriptMessageCommonManager__UpdateLabels(v74, v73, v71, v72, v70);
    v56 = (System_Int32_array **)this->fields.defaultColorTag;
    *(_QWORD *)(v8 + 40) = v56;
    v57 = (BattleServantConfConponent_o *)(v8 + 40);
LABEL_108:
    sub_B70630(v57, v56, v50, v51, v52, v53, v54, v55);
LABEL_109:
    v94 = v79 + 1;
    goto LABEL_110;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v94, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v37 = System_String__Substring_44821904(txt, v35, v36 + v79 + 1, 0LL);
    goto LABEL_35;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v94, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_109;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootPanel = ScriptMessageLabel__GetCommandName(txt, v94, v38);
  if ( !rootPanel )
    goto LABEL_115;
  v39 = rootPanel;
  rootPanel = (System_String_o *)System_String__Equals_44745508(rootPanel, (System_String_o *)StringLiteral_19716/*"image"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v40 = v35 + 7;
    v41 = v36 + v79 - 7;
    goto LABEL_33;
  }
  if ( System_String__Equals_44745508(v39, (System_String_o *)StringLiteral_18558/*"effectmessage"*/, 0LL) )
  {
    v42 = System_String__Substring_44821904(txt, v35 + 15, v36 + v79 - 15, 0LL);
    rootPanel = (System_String_o *)System_String__op_Inequality(v42, (System_String_o *)StringLiteral_890/*"/"*/, 0LL);
    if ( ((unsigned __int8)rootPanel & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_115;
      ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
      v10 = System_String__Concat_44760452(
              (System_String_o *)StringLiteral_15861/*"[*"*/,
              v42,
              (System_String_o *)StringLiteral_16092/*"]"*/,
              0LL);
      rootPanel = (System_String_o *)v107;
      if ( !v107 )
        goto LABEL_115;
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v107, v10, 0LL);
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_109;
  }
  rootPanel = (System_String_o *)System_String__Equals_44745508(v39, (System_String_o *)StringLiteral_19555/*"i"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v40 = v35 + 3;
    v41 = v36 + v79 - 3;
LABEL_33:
    v43 = System_String__Substring_44821904(txt, v40, v41, 0LL);
    v44 = &StringLiteral_15992/*"[^"*/;
LABEL_34:
    v37 = System_String__Concat_44760452((System_String_o *)*v44, v43, (System_String_o *)StringLiteral_16092/*"]"*/, 0LL);
LABEL_35:
    v10 = v37;
    rootPanel = (System_String_o *)v107;
    if ( !v107 )
      goto LABEL_115;
    goto LABEL_36;
  }
  rootPanel = (System_String_o *)System_String__Equals_44745508(v39, (System_String_o *)StringLiteral_22021/*"r"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v45 = this->fields.betweenLineHeight;
    v46 = this->fields.dispPosition.fields.y;
    v47 = this->fields.startPosition.fields.x;
    v48 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v48;
    this->fields.dispPosition.fields.x = v47;
    this->fields.dispPosition.fields.y = v46 - (float)(v48 + v45);
    ScriptMessageCommonManager__SetDefaultState(this, v49);
    v56 = (System_Int32_array **)this->fields.defaultColorTag;
    v57 = (BattleServantConfConponent_o *)(v8 + 40);
    *colorTag = (System_String_o *)v56;
    goto LABEL_108;
  }
  rootPanel = (System_String_o *)System_String__Equals_44745508(v39, (System_String_o *)StringLiteral_22346/*"servantName"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    v59 = System_String__Substring_44821904(txt, v35 + 12, v36 + v79 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v60 = ScriptMessageLabel__AnalysTagParam(v59, 0, v58);
    v61 = *(struct System_String_o **)(v8 + 40);
    this->fields.defaultColorTag = v61;
    sub_B70630(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v69 = ScriptMessageLabel__GetServantChangeName(v60, v68);
    v71 = isStretch;
    v72 = *(_BYTE *)(v8 + 36);
    v73 = v69;
    v74 = this;
    goto LABEL_107;
  }
  rootPanel = (System_String_o *)System_String__StartsWith(v39, (System_String_o *)StringLiteral_20544/*"line"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
    rootPanel = System_String__Substring_44821904(txt, v35 + 5, v36 + v79 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_115;
    if ( rootPanel->fields.m_stringLength >= 1 )
    {
      v43 = System_String__Trim_44745500(rootPanel, 0LL);
      v44 = &StringLiteral_16056/*"[~"*/;
      goto LABEL_34;
    }
    rootPanel = (System_String_o *)v107;
    if ( !v107 )
      goto LABEL_115;
    v10 = (System_String_o *)StringLiteral_16057/*"[~1]"*/;
LABEL_36:
    ScriptMessageCommonManager_ProcAddLabel2__Invoke((ScriptMessageCommonManager_ProcAddLabel2_o *)rootPanel, v10, 0LL);
    goto LABEL_109;
  }
  if ( v79 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44821904(txt, v35, v36 + v79 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, v75);
    rootPanel = (System_String_o *)*v20;
    if ( !*v20 )
      goto LABEL_115;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     text,
                                     0LL);
    goto LABEL_109;
  }
  v106 = *v20;
  rootPanel = System_String__Substring(txt, v35, 0LL);
  if ( !v106 )
    goto LABEL_115;
  rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42601980(v106, rootPanel, 0LL);
  if ( !v34 )
    goto LABEL_115;
LABEL_112:
  ScriptMessageCommonManager_ProcAddLabel__Invoke(v34, 0LL);
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
    sub_B7076C(touchPress, isShowNextTouchObject);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__Invoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  ScriptMessageCommonManager_ProcAddLabel_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  ScriptMessageCommonManager_ProcAddLabel_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (ScriptMessageCommonManager_ProcAddLabel_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager_ProcAddLabel2___ctor(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel2__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)txt;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__Invoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScriptMessageCommonManager_ProcAddLabel2_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel2_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  ScriptMessageCommonManager_ProcAddLabel2_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScriptMessageCommonManager_ProcAddLabel2_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, txt);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = txt->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(txt, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(txt, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(txt, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(txt, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(txt, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, txt, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, txt, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                txt,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, txt, v28);
    }
  }
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
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v5; // x8
  struct ScriptMessageCommonManager_o *v6; // x8

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
        (v5 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptMessageCommonManager__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          this->fields.stepTime,
          v5->fields.defaultColorTag,
          this->fields.isFoward,
          0LL),
        (tmpTxt = this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_B7076C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_10;
  v6->fields.defaultColorTag = this->fields.tmpColorTag;
  sub_B70630(&v6->fields.defaultColorTag);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__1(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptMessageCommonManager___c__DisplayClass113_0_o *v3; // x19
  struct ScriptMessageCommonManager_o *_4__this; // x8

  if ( !text )
    goto LABEL_7;
  v3 = this;
  if ( text->fields.m_stringLength >= 1 )
  {
    this = (ScriptMessageCommonManager___c__DisplayClass113_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptMessageCommonManager__AddLabel(
      (ScriptMessageCommonManager_o *)this,
      text,
      v3->fields.stepTime,
      (System_String_o *)this[6].fields.__4__this,
      v3->fields.isFoward,
      0LL);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_B7076C(this, text);
  _4__this->fields.defaultColorTag = v3->fields.tmpColorTag;
  sub_B70630(&_4__this->fields.defaultColorTag);
}