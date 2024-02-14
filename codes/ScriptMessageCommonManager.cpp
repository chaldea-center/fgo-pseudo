void __fastcall ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Int32_array **v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_4219FC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_Stack_UISprite__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_Stack_UILabel__TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_4219FC9 = 1;
  }
  *(_QWORD *)&this->fields.talkNameBackBaseWidth = 0xDC00000050LL;
  this->fields.defaultWindowDispCenter.fields.y = -218.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_3224DA0;
  *(_OWORD *)&this->fields.defaultBetweenLineHeight = xmmword_3224DB0;
  *(_OWORD *)&this->fields.defaultWindowDispSize.fields.y = xmmword_3224DC0;
  *(_QWORD *)&this->fields.windowOpenTime = 0x3ECCCCCD3ECCCCCDLL;
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v22, v2, v3, v4, v5, v6, v7);
  v25 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                              System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                                                              v23,
                                                                                              v24);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v25,
    (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainStock,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                              System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                                                              v32,
                                                                                              v33);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v34,
    (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rubyStock,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v43 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                              System_Collections_Generic_Stack_UISprite__TypeInfo,
                                                                                              v41,
                                                                                              v42);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v43,
    (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.imageStock,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v52 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                              System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo,
                                                                                              v50,
                                                                                              v51);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v52,
    (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v52;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.labelStock,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ScriptMessageLabel__TypeInfo,
                                                                                                  v59,
                                                                                                  v60);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v61;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dispLabelList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 Label; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ScriptMessageLabel_o *v22; // x21
  BattleServantConfConponent_o *v23; // x0
  float32x2_t *p_dispPosition; // x27
  struct UnityEngine_Vector2_o dispPosition; // x28
  const MethodInfo *v26; // x5
  System_String_o *v27; // x22
  System_String_array *v28; // x24
  const MethodInfo *v29; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v34; // x7
  __int64 *p_fields; // x23
  __int64 *p_ruby; // x22
  UnityEngine_Vector2_o *v37; // x3
  System_String_o *v38; // x22
  const MethodInfo *v39; // x5
  int v40; // w8
  __int64 v41; // x23
  System_String_o *v42; // x22
  float v43; // s0
  int v44; // w8
  float v45; // s9
  int32_t v46; // w23
  int32_t horizontalAlign; // w24
  const MethodInfo *v48; // x6
  UnityEngine_Vector2_o zero; // kr00_8
  ScriptMessageLabel_o *v50; // x0
  UISprite_o **p_image; // x1
  UnityEngine_Vector2_o *v52; // x2
  int32_t v53; // w3
  float v54; // s0
  System_String_o *v55; // x4
  float x; // s1
  float y; // s2
  int32_t v58; // w5
  System_String_o *v59; // x23
  const MethodInfo *v60; // x5
  int32_t v61; // w24
  __int64 *v62; // x22
  int32_t v63; // w0
  const MethodInfo *v64; // x5
  System_String_o *v65; // x1
  System_String_o *v66; // x22
  System_String_array *v67; // x0
  System_String_array *v68; // x23
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  const MethodInfo *v71; // x5
  System_String_o *v72; // x22
  float v73; // s8
  float v74; // s10
  float v75; // s9
  System_String_o *v76; // x24
  System_String_array *v77; // x0
  System_String_array *v78; // x24
  System_String_o *v79; // x0
  float v80; // s0
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w23
  __int64 *v85; // x23
  System_String_o *rubyText; // x0
  System_String_o *v87; // x22
  const MethodInfo *v88; // x5
  __int64 v89; // x22
  System_String_o *v90; // x23
  __int64 v91; // x23
  int v92; // w24
  int32_t v93; // w0
  const MethodInfo *v94; // x6
  float v95; // s3
  unsigned __int64 v96; // d0
  UnityEngine_GameObject_o **v97; // x1
  const MethodInfo *v98; // x5
  __int64 v99; // x0
  System_String_o *rubyStr; // [xsp+0h] [xbp-90h]
  const MethodInfo *v101; // [xsp+8h] [xbp-88h]
  const MethodInfo *v102; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4219FA3 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, text);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v11);
    sub_B0D8A4(&StringLiteral_13598/*"Talk/"*/, v12);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4219FA3 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_96;
  v22 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v23 = (BattleServantConfConponent_o *)(Label + 112);
  v23->fields.tmp_pos.fields.x = tm;
  sub_B0D840(v23, (System_Int32_array **)colorTag, v16, v17, v18, v19, v20, v21);
  if ( !text )
    goto LABEL_96;
  p_dispPosition = (float32x2_t *)&this->fields.dispPosition;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_58;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v27 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_96;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v27 )
        goto LABEL_96;
      v28 = System_String__Split(v27, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v22, 1, 0, 0, v29);
      if ( !v28 )
        goto LABEL_96;
      max_length = v28->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v34 = v28->m_Items[0];
        p_fields = (__int64 *)&v22->fields;
        p_ruby = (__int64 *)&v22->fields.ruby;
        v37 = &this->fields.dispPosition;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v22,
            &v22->fields.main,
            &v22->fields.ruby,
            v37,
            fontSize,
            maxFontSize,
            verticalAlign,
            v34,
            this->fields.fontType,
            v101);
        else
          ScriptMessageLabel__UpdateRuby(
            v22,
            &v22->fields.main,
            &v22->fields.ruby,
            v37,
            fontSize,
            maxFontSize,
            verticalAlign,
            v34,
            v28->m_Items[1],
            this->fields.fontType,
            0,
            v102);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_96;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_96;
          v65 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
          UILabel__set_text((UILabel_o *)Label, v65, 0LL);
        }
LABEL_62:
        if ( !isFoward )
          goto LABEL_66;
        goto LABEL_63;
      }
    }
LABEL_97:
    v99 = sub_B0D9A8(Label);
    sub_B0D948(v99, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v38 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_96;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_97;
    *(_WORD *)(Label + 32) = 32;
    if ( !v38 )
      goto LABEL_96;
    Label = (__int64)System_String__Split(v38, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_96;
    v40 = *(_DWORD *)(Label + 24);
    v41 = Label;
    if ( v40 <= 1 )
    {
      if ( !v40 )
        goto LABEL_97;
      v87 = *(System_String_o **)(Label + 32);
      Label = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_96;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      *(_WORD *)(Label + 32) = 58;
      if ( !v87 )
        goto LABEL_96;
      Label = (__int64)System_String__Split(v87, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_96;
      v89 = Label;
      if ( *(int *)(Label + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v22, 0, 1, 0, v88);
        if ( !*(_DWORD *)(v89 + 24) )
          goto LABEL_97;
        ScriptMessageLabel__UpdateImage(
          v22,
          &v22->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          *(System_String_o **)(v89 + 32),
          this->fields.horizontalAlign,
          v94);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v22, 1, 1, 0, v88);
        if ( *(_DWORD *)(v89 + 24) < 2u )
          goto LABEL_97;
        ScriptMessageLabel__UpdateImageRuby(
          v22,
          &v22->fields.image,
          &v22->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          *(System_String_o **)(v89 + 32),
          *(System_String_o **)(v89 + 40),
          0LL,
          this->fields.horizontalAlign,
          v101);
      }
      goto LABEL_89;
    }
    ScriptMessageCommonManager__PreProcLabel(this, v22, 0, 1, 0, v39);
    if ( *(_DWORD *)(v41 + 24) < 2u )
      goto LABEL_97;
    v42 = *(System_String_o **)(v41 + 32);
    v43 = System_Single__Parse(*(System_String_o **)(v41 + 40), 0LL);
    v44 = *(_DWORD *)(v41 + 24);
    v45 = v43;
    if ( v44 == 2 )
    {
      v46 = this->fields.fontSize;
      horizontalAlign = this->fields.horizontalAlign;
      zero = UnityEngine_Vector2__get_zero(0LL);
      v50 = v22;
      p_image = &v22->fields.image;
      v52 = &this->fields.dispPosition;
      v53 = v46;
      v54 = v45;
      v55 = v42;
      y = zero.fields.y;
      x = zero.fields.x;
      v58 = horizontalAlign;
    }
    else
    {
      if ( v44 > 3 )
      {
LABEL_89:
        if ( tm < 0.0 )
          goto LABEL_62;
        Label = (__int64)v22->fields.image;
        if ( !Label )
          goto LABEL_96;
LABEL_91:
        (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Label + 440LL))(
          Label,
          *(_QWORD *)(*(_QWORD *)Label + 448LL),
          0.0);
        if ( !isFoward )
          goto LABEL_66;
        goto LABEL_63;
      }
      if ( (unsigned int)v44 <= 2 )
        goto LABEL_97;
      v90 = *(System_String_o **)(v41 + 48);
      Label = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_96;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      *(_WORD *)(Label + 32) = 44;
      if ( !v90 )
        goto LABEL_96;
      Label = (__int64)System_String__Split(v90, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_96;
      v91 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v91 + 24) <= 1u )
        goto LABEL_97;
      v92 = Label;
      v93 = System_Int32__Parse(*(System_String_o **)(v91 + 40), 0LL);
      v53 = this->fields.fontSize;
      v58 = this->fields.horizontalAlign;
      p_image = &v22->fields.image;
      v52 = &this->fields.dispPosition;
      x = (float)v92;
      y = (float)v93;
      v50 = v22;
      v54 = v45;
      v55 = v42;
    }
    ScriptMessageLabel__UpdateImage_33984460(v50, p_image, v52, v53, v54, v55, *(UnityEngine_Vector2_o *)&x, v58, v48);
    goto LABEL_89;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v59 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
    ScriptMessageCommonManager__PreProcLabel(this, v22, 0, 1, 0, v60);
    v61 = this->fields.fontSize;
    v62 = (__int64 *)&v22->fields.image;
    v63 = System_Int32__Parse(v59, 0LL);
    ScriptMessageLabel__UpdateLine(v22, &v22->fields.image, &this->fields.dispPosition, v61, v63, v64);
    if ( tm < 0.0 )
      goto LABEL_62;
    Label = *v62;
    if ( !*v62 )
      goto LABEL_96;
    goto LABEL_91;
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 42 )
  {
LABEL_58:
    ScriptMessageCommonManager__PreProcLabel(this, v22, 0, 0, 0, v26);
    v85 = (__int64 *)&v22->fields;
    ScriptMessageLabel__UpdateLabel(
      v22,
      &v22->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      (const MethodInfo *)rubyStr);
    if ( tm < 0.0 )
      goto LABEL_62;
    Label = *v85;
    if ( !*v85 )
      goto LABEL_96;
    v65 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_61;
  }
  v66 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_96;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_97;
  *(_WORD *)(Label + 32) = 32;
  if ( !v66 )
    goto LABEL_96;
  v67 = System_String__Split(v66, (System_Char_array *)Label, 0LL);
  if ( v67 )
  {
    v68 = v67;
    if ( (int)v67->max_length >= 1 )
    {
      v69 = v67->m_Items[0];
      if ( v69 )
      {
        Label = System_String__op_Equality(v69, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v68->max_length )
            goto LABEL_97;
          Label = (__int64)v68->m_Items[0];
          if ( !Label )
            goto LABEL_96;
          v70 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
          v72 = System_String__Concat_43849904((System_String_o *)StringLiteral_13598/*"Talk/"*/, v70, 0LL);
          v73 = 0.0;
          v74 = 0.0;
          v75 = 0.0;
          if ( (int)v68->max_length >= 2 )
          {
            Label = (__int64)v68->m_Items[1];
            if ( !Label )
              goto LABEL_96;
            v76 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
            Label = sub_B0D8BC(char___TypeInfo, 1LL);
            if ( !Label )
              goto LABEL_96;
            if ( !*(_DWORD *)(Label + 24) )
              goto LABEL_97;
            *(_WORD *)(Label + 32) = 44;
            if ( !v76 )
              goto LABEL_96;
            v77 = System_String__Split(v76, (System_Char_array *)Label, 0LL);
            v74 = 0.0;
            v75 = 0.0;
            if ( v77 )
            {
              v78 = v77;
              v74 = 0.0;
              v75 = 0.0;
              if ( (int)v77->max_length >= 2 )
              {
                Label = (__int64)v77->m_Items[0];
                if ( !Label )
                  goto LABEL_96;
                v79 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
                v80 = System_Single__Parse(v79, 0LL);
                if ( v78->max_length <= 1 )
                  goto LABEL_97;
                Label = (__int64)v78->m_Items[1];
                if ( !Label )
                  goto LABEL_96;
                v75 = v80;
                v81 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
                v74 = System_Single__Parse(v81, 0LL);
              }
            }
          }
          if ( (int)v68->max_length <= 2 )
            goto LABEL_93;
          Label = (__int64)v68->m_Items[2];
          if ( !Label )
            goto LABEL_96;
          v82 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
          v73 = System_Single__Parse(v82, 0LL);
          if ( (int)v68->max_length < 4 )
          {
LABEL_93:
            v84 = 0;
          }
          else
          {
            Label = (__int64)v68->m_Items[3];
            if ( !Label )
              goto LABEL_96;
            v83 = System_String__Trim_43837236((System_String_o *)Label, 0LL);
            v84 = System_Int32__Parse(v83, 0LL);
          }
          v95 = v74 + COERCE_FLOAT(HIDWORD(p_dispPosition->n64_u64[0]));
          v96 = vadd_f32((float32x2_t)p_dispPosition->n64_u64[0], (float32x2_t)1124073472LL).n64_u64[0];
          pos.fields.x = v75 + COERCE_FLOAT(p_dispPosition->n64_u64[0]);
          pos.fields.y = v95;
          p_dispPosition->n64_u64[0] = v96;
          ScriptMessageCommonManager__PreProcLabel(this, v22, 0, 0, 1, v71);
          ScriptMessageLabel__UpdateEffect(v22, v97, &pos, v72, v73, v84, v98);
          if ( !isFoward )
            goto LABEL_66;
LABEL_63:
          rubyText = v22->fields.rubyText;
          v22->fields.mainPosition.fields.x = v22->fields.mainPosition.fields.x - v22->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v22->fields.rubyPosition.fields.x = v22->fields.rubyPosition.fields.x - v22->fields.widthSize;
          p_dispPosition->n64_u64[0] = (unsigned __int64)dispPosition;
LABEL_66:
          Label = (__int64)this->fields.dispLabelList;
          if ( Label )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
            return;
          }
LABEL_96:
          sub_B0D97C(Label);
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


void __fastcall ScriptMessageCommonManager__CancelNextTouch(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  nextTouchRootObject = this->fields.nextTouchRootObject;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  if ( !nextTouchRootObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
}


void __fastcall ScriptMessageCommonManager__CancelTapSkip(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.isTapSkipRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ClearCount(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.dispCountTimer = -1.0;
}


void __fastcall ScriptMessageCommonManager__ClearLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4219F9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4219F9C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v9.fields.current, v8);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B0D97C(dispLabelList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
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
  UnityEngine_GameObject_o *talkNameRootObject; // x0
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

  if ( (byte_4219FB5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4219FB5 = 1;
  }
  talkNameRootObject = this->fields.talkNameRootObject;
  if ( !talkNameRootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(talkNameRootObject, 0, 0LL);
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.talkName, v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v11, v12, v13, v14, v15, v16, v17);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !talkNameRootObject
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)talkNameRootObject, 0LL),
        (talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameIcon) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(talkNameRootObject);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // d0
  UnityEngine_Transform_o *messageScroll; // x0
  float z; // s2
  int v6; // s1
  const MethodInfo *v7; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  System_Int32_array **v10; // x1
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

  if ( (byte_4219FB3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4219FB3 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  v3 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  *(_QWORD *)&this->fields.scrollPosition.fields.x = v3;
  messageScroll = this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_9;
  z = this->fields.scrollPosition.fields.z;
  v6 = HIDWORD(v3);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v3, 0LL);
  ScriptMessageCommonManager__SetDefaultState(this, v7);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameRootObject;
  this->fields.isBusy = 0;
  this->fields.isScroll = 0;
  this->fields.isEffectMessage = 0;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  this->fields.dispCountTimer = -1.0;
  this->fields.beforeTextOnlyLineHeight = textOnlyLineHeight + rubyLineHeight;
  this->fields.isFastMessageRequest = 0;
  if ( !messageScroll )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.talkName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v17, v18, v19, v20, v21, v22, v23);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, 0LL),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameIcon) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&messageScroll->klass[1]._1.this_arg.bits)(
          messageScroll,
          messageScroll->klass[1]._1.element_class,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(messageScroll);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  TweenPosition_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **windowDownCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4219FAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4219FAD = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B0D97C(rootObject);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v20.fields.y = this->fields.windowClosePosY;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v11 = TweenPosition__Begin(gameObject, windowCloseTime, v20, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v11 )
    {
      v11->fields.style = 0;
      windowDownCurve = (System_Int32_array **)this->fields.windowDownCurve;
      v11->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowDownCurve;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v11->fields.animationCurve,
        windowDownCurve,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      UITweener__PlayForward((UITweener_o *)v11, 0LL);
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


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__CreateLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v7; // x19
  UnityEngine_Component_o *messageScroll; // x8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0

  if ( (byte_4219FC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4219FC7 = 1;
  }
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v7 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_srcLineSprite, this->fields.messageScroll, 0LL);
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(v7, 0LL);
  messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_15;
  v9 = Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(messageScroll, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v9)
    || (UnityEngine_GameObject__set_layer(v9, (int32_t)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL),
        v14 = UnityEngine_Component__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL),
        !v14) )
  {
LABEL_15:
    sub_B0D97C(Component_srcLineSprite);
  }
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  return (UILabel_o *)v7;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4219F9B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v8);
    byte_4219F9B = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_30;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v10);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_30;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v12, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_30:
    sub_B0D97C(labelStock);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v13, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *imageStock; // x0
  UnityEngine_Component_o *v8; // x19
  struct UnityEngine_GameObject_o *imagePrefab; // x19
  UnityEngine_Component_o *messageScroll; // x8
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0

  if ( (byte_4219FA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v6);
    byte_4219FA0 = 1;
  }
  imageStock = (UnityEngine_GameObject_o *)this->fields.imageStock;
  if ( !imageStock )
    goto LABEL_20;
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
                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 imageStock,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        v8 = (UnityEngine_Component_o *)imageStock;
        imageStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)imageStock,
                                                   0LL);
        if ( imageStock )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)imageStock, this->fields.messageScroll, 0LL);
          imageStock = UnityEngine_Component__get_gameObject(v8, 0LL);
          messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
          if ( messageScroll )
          {
            v11 = imageStock;
            imageStock = UnityEngine_Component__get_gameObject(messageScroll, 0LL);
            if ( imageStock )
            {
              imageStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(imageStock, 0LL);
              if ( v11 )
              {
                UnityEngine_GameObject__set_layer(v11, (int32_t)imageStock, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_B0D97C(imageStock);
  }
  imageStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)imageStock,
                                             (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v8 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_20;
LABEL_17:
  transform = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  return (UISprite_o *)v8;
}


ScriptMessageLabel_o *__fastcall ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_4219FA1 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v5);
    byte_4219FA1 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_B0D97C(0LL);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v7 = (ScriptMessageLabel_o *)sub_B0D974(ScriptMessageLabel_TypeInfo, method, v2);
  ScriptMessageLabel___ctor(v7, v8);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchMainLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *mainStock; // x0
  UnityEngine_Component_o *v8; // x19
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  UnityEngine_Component_o *messageScroll; // x8
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0

  if ( (byte_4219F9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_4219F9E = 1;
  }
  mainStock = (UnityEngine_GameObject_o *)this->fields.mainStock;
  if ( !mainStock )
    goto LABEL_20;
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
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                mainStock,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        v8 = (UnityEngine_Component_o *)mainStock;
        mainStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mainStock,
                                                  0LL);
        if ( mainStock )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)mainStock, this->fields.messageScroll, 0LL);
          mainStock = UnityEngine_Component__get_gameObject(v8, 0LL);
          messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
          if ( messageScroll )
          {
            v11 = mainStock;
            mainStock = UnityEngine_Component__get_gameObject(messageScroll, 0LL);
            if ( mainStock )
            {
              mainStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(mainStock, 0LL);
              if ( v11 )
              {
                UnityEngine_GameObject__set_layer(v11, (int32_t)mainStock, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_B0D97C(mainStock);
  }
  mainStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)mainStock,
                                            (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_20;
  v8 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0LL);
LABEL_17:
  transform = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  return (UILabel_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchRubyLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *rubyStock; // x0
  UnityEngine_Component_o *v8; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *transform; // x21
  int v12; // s0
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0

  if ( (byte_4219F9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_4219F9F = 1;
  }
  rubyStock = (UnityEngine_GameObject_o *)this->fields.rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
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
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                rubyStock,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        v8 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)rubyStock,
                                                  0LL);
        if ( rubyStock )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)rubyStock, this->fields.messageScroll, 0LL);
          rubyStock = UnityEngine_Component__get_gameObject(v8, 0LL);
          if ( this->fields.messageScroll )
          {
            v10 = rubyStock;
            rubyStock = UnityEngine_Component__get_gameObject(
                          (UnityEngine_Component_o *)this->fields.messageScroll,
                          0LL);
            if ( rubyStock )
            {
              rubyStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(rubyStock, 0LL);
              if ( v10 )
              {
                UnityEngine_GameObject__set_layer(v10, (int32_t)rubyStock, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_B0D97C(rubyStock);
  }
  rubyStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)rubyStock,
                                            (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v8 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
LABEL_17:
  transform = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
  v15 = UnityEngine_Component__get_transform(v8, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
  if ( !v15 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  UILabel__set_fontSize((UILabel_o *)v8, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *rootObject; // x20
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  if ( (byte_4219FAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219FAB = 1;
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
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
          sub_B0D97C(v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 v6; // x22
  int32_t v7; // w20
  int size; // w8
  ScriptMessageLabel_o *v9; // x24
  UnityEngine_Object_o *effect; // x21

  v2 = this;
  if ( (byte_4219FBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4219FBB = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_18:
    sub_B0D97C(this);
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)v6 >= size )
      return v7;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v9 = dispLabelList->fields._items->m_Items[v6];
    if ( v9 )
    {
      if ( v9->fields.dispLength >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(v9->fields.mainText, 0LL) )
          v7 += v9->fields.dispLength;
        effect = (UnityEngine_Object_o *)v9->fields.effect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          v7 += v9->fields.dispLength;
      }
      dispLabelList = v2->fields.dispLabelList;
      ++v6;
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
    sub_B0D97C(0LL);
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
  return this->fields.messageWindowBack;
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
  return this->fields.talkNameBack;
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


int32_t __fastcall ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v7; // x6

  if ( (byte_4219FA6 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9083/*"MessageShake/LogMark/BackLogButton"*/, v3);
    byte_4219FA6 = 1;
  }
  this->fields.isTapSkip = 0;
  *(_WORD *)&this->fields.isMessageOut = 0;
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isForcedDisableTurnPage = 0;
  this->fields.isMessageSpeedForcedNormal = 0;
  this->fields.isEffectMessage = 0;
  if ( !rootPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          0.0),
        ScriptMessageCommonManager__ForceOpen(this, v5),
        (rootPanel = this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(rootPanel, 1, 0LL), (rootPanel = this->fields.messageBase) == 0LL) )
  {
    sub_B0D97C(rootPanel);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_9083/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
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


bool __fastcall ScriptMessageCommonManager__IsLongPress(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UITouchPress_o *touchPress; // x0

  if ( !ScriptMessageCommonManager__IsOpen(this, method) || this->fields._isFaceMessage_k__BackingField )
    return 0;
  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_B0D97C(0LL);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *rootPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219FA9 = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_15;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)rootPanel,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B0D97C(rootPanel);
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
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4219FC5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219FC5 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
    return 0;
  v5 = this->fields.rootObject;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_GameObject__get_activeSelf(v5, 0LL);
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219FAA = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_16;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B0D97C(rootObject);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectExist(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x20
  unsigned __int64 i; // x21
  ScriptMessageLabel_o *v7; // x23
  UnityEngine_Object_o *effect; // x20
  UnityEngine_Object_o *frontEffect; // x20

  v2 = this;
  if ( (byte_4219FC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4219FC4 = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( dispLabelList )
  {
    for ( i = 0LL; (__int64)i < dispLabelList->fields._size; ++i )
    {
      if ( i >= (unsigned int)dispLabelList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v7 = dispLabelList->fields._items->m_Items[i];
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
            return 1;
        }
      }
      dispLabelList = v2->fields.dispLabelList;
      if ( !dispLabelList )
        sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v9; // x22
  ScriptMessageLabel_o *v10; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v13; // x21

  v4 = this;
  if ( (byte_4219FC2 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4219FC2 = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B0D97C(this);
  v9 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v9 >= dispLabelList->fields._size )
      return 0;
    if ( v9 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = dispLabelList->fields._items->m_Items[v9];
    if ( v10 )
    {
      effect = (UnityEngine_Object_o *)v10->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v10->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = v10->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsBusy_16960896(v13, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v4->fields.dispLabelList;
    ++v9;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v9; // x22
  ScriptMessageLabel_o *v10; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v13; // x21

  v4 = this;
  if ( (byte_4219FC3 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4219FC3 = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B0D97C(this);
  v9 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v9 >= dispLabelList->fields._size )
      return 0;
    if ( v9 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = dispLabelList->fields._items->m_Items[v9];
    if ( v10 )
    {
      effect = (UnityEngine_Object_o *)v10->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v10->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = v10->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsStart_16961896(v13, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v4->fields.dispLabelList;
    ++v9;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x22
  unsigned __int64 v11; // x23
  char v12; // w24
  bool v13; // w21
  ScriptMessageLabel_o *v14; // x27
  UnityEngine_Object_o *effect; // x22
  UnityEngine_Object_o *frontEffect; // x22
  UnityEngine_GameObject_o *v17; // x22

  v6 = this;
  if ( (byte_4219FC1 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v8);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4219FC1 = 1;
  }
  dispLabelList = v6->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B0D97C(this);
  v11 = 0LL;
  v12 = 1;
  v13 = isSkip;
  while ( (__int64)v11 < dispLabelList->fields._size )
  {
    if ( v11 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v14 = dispLabelList->fields._items->m_Items[v11];
    if ( v14 )
    {
      effect = (UnityEngine_Object_o *)v14->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v14->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v17 = v14->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__Stop_16969260(v17, effectName, v13, 0, 0LL);
          v12 &= (unsigned __int8)this;
        }
      }
    }
    dispLabelList = v6->fields.dispLabelList;
    ++v11;
    if ( !dispLabelList )
      goto LABEL_22;
  }
  return v12 & 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 dispIndex; // x25
  __int64 v12; // x27
  int size; // w8
  __int64 v14; // x24
  UnityEngine_Object_o *v15; // x21
  float v16; // s0
  float dispCountTimer; // s0
  float v18; // s1
  float messageSpeed; // s2
  float v20; // s1
  float v21; // s0
  double v22; // d0
  int32_t v23; // w23
  UnityEngine_Object_o *v24; // x21
  UILabel_o *v25; // x21
  System_String_o *v26; // x1
  UILabel_o *v27; // x21
  __int64 v28; // x8
  float v29; // s0
  int v30; // w8
  UnityEngine_Object_o *v32; // x20
  const MethodInfo *v33; // x2
  UILabel_o *v34; // x20
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  System_String_o *v37; // x0
  const MethodInfo *v38; // x1
  System_String_o *v39; // x21
  UILabel_o *v40; // x20
  System_String_o *v41; // x22
  float v42; // s9
  float v43; // s8
  int32_t v44; // w23
  float v45; // s9
  double v46; // d8
  const MethodInfo *v47; // x2
  double v48; // d0
  double v49; // d0
  double v50; // d1
  double v51; // d1
  System_String_o *v52; // x0
  double iptr; // [xsp+18h] [xbp-48h] BYREF

  v4 = isMessageDelta;
  v5 = this;
  if ( (byte_4219FBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, isMessageDelta);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v9);
    byte_4219FBC = 1;
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
  v12 = 8 * dispIndex + 32;
  LODWORD(v3) = 1.0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)dispIndex >= size )
      return v5->fields.isBusy;
    if ( size <= (unsigned int)dispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v14 = *(__int64 *)((char *)&dispLabelList->fields._items->obj.klass + v12);
    if ( !v14 )
      goto LABEL_86;
    v15 = *(UnityEngine_Object_o **)(v14 + 48);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v16 = *(float *)(v14 + 172);
    if ( v16 >= 0.0 )
    {
      if ( v4 )
      {
        v16 = v16 - v5->fields.defaultStepTime;
        *(float *)(v14 + 172) = v16;
      }
      if ( v16 >= 0.0 )
      {
        v5->fields.isBusy = 1;
        return v5->fields.isBusy;
      }
      v4 = 0;
      *(_DWORD *)(v14 + 172) = 0;
    }
LABEL_48:
    dispLabelList = v5->fields.dispLabelList;
    LODWORD(dispIndex) = dispIndex + 1;
    v12 += 8LL;
    v5->fields.dispIndex = dispIndex;
    if ( !dispLabelList )
      goto LABEL_86;
  }
  if ( *(int *)(v14 + 168) < 1 )
  {
LABEL_32:
    v24 = *(UnityEngine_Object_o **)(v14 + 16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = *(UILabel_o **)(v14 + 16);
      this = (ScriptMessageCommonManager_o *)System_String__Concat_43849904(
                                               *(System_String_o **)(v14 + 112),
                                               *(System_String_o **)(v14 + 120),
                                               0LL);
      if ( !v25 )
        goto LABEL_86;
      UILabel__set_text(v25, (System_String_o *)this, 0LL);
      v26 = *(System_String_o **)(v14 + 128);
      if ( !v26 )
        goto LABEL_86;
      if ( v26->fields.m_stringLength >= 1 )
      {
        v27 = *(UILabel_o **)(v14 + 24);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_43849904(
                                                 *(System_String_o **)(v14 + 112),
                                                 v26,
                                                 0LL);
        if ( !v27 )
          goto LABEL_86;
        UILabel__set_text(v27, (System_String_o *)this, 0LL);
      }
    }
    else
    {
      v28 = *(_QWORD *)(v14 + 136);
      if ( !v28 )
        goto LABEL_86;
      if ( *(int *)(v28 + 16) >= 1 )
      {
        this = *(ScriptMessageCommonManager_o **)(v14 + 32);
        if ( !this )
          goto LABEL_86;
        this = (ScriptMessageCommonManager_o *)((__int64 (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, long double))this->klass->vtable._8_IsEnableCloseDown.method)(
                                                 this,
                                                 this->klass->vtable._9_CloseDown.methodPtr,
                                                 v3);
      }
    }
    if ( v5->fields.isFastMessageRequest || (v29 = *(float *)(v14 + 164), v29 == 0.0) )
    {
      v5->fields.dispCountTimer = -1.0;
    }
    else
    {
      v30 = *(_DWORD *)(v14 + 168);
      if ( v30 >= 1 )
        v5->fields.dispCountTimer = v5->fields.dispCountTimer - (float)(v29 * (float)v30);
    }
    goto LABEL_48;
  }
  dispCountTimer = v5->fields.dispCountTimer;
  v18 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_24;
  messageSpeed = v5->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_24;
  if ( v4 )
  {
    v4 = 0;
    v18 = dispCountTimer + (float)(messageSpeed * v5->fields.defaultStepTime);
LABEL_24:
    dispCountTimer = v18;
    v5->fields.dispCountTimer = v18;
    goto LABEL_25;
  }
  v4 = 0;
LABEL_25:
  if ( v5->fields.isFastMessageRequest )
    goto LABEL_32;
  v20 = *(float *)(v14 + 164);
  if ( v20 == 0.0 || v5->fields.messageSpeed == 0.0 )
    goto LABEL_32;
  v21 = dispCountTimer / v20;
  v22 = v21 == INFINITY ? -INFINITY : v21;
  v23 = (int)v22;
  if ( *(_DWORD *)(v14 + 168) <= (int)v22 )
    goto LABEL_32;
  v5->fields.isBusy = 1;
  v32 = *(UnityEngine_Object_o **)(v14 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    v34 = *(UILabel_o **)(v14 + 16);
    v35 = *(System_String_o **)(v14 + 112);
    v36 = *(System_String_o **)(v14 + 120);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v37 = ScriptMessageLabel__SubstrByDisp(v36, v23, v33);
    this = (ScriptMessageCommonManager_o *)System_String__Concat_43849904(v35, v37, 0LL);
    if ( v34 )
    {
      UILabel__set_text(v34, (System_String_o *)this, 0LL);
      v39 = *(System_String_o **)(v14 + 128);
      if ( v39 )
      {
        if ( v39->fields.m_stringLength < 1 )
          return v5->fields.isBusy;
        v40 = *(UILabel_o **)(v14 + 24);
        v41 = *(System_String_o **)(v14 + 112);
        v42 = (float)*(int *)(v14 + 168);
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v43 = (float)v23 / v42;
        v44 = ScriptMessageLabel__StrlenByDisp(v39, v38);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v45 = v43 * (float)v44;
        v46 = v45;
        v48 = modf(v45, &iptr);
        if ( v45 >= 0.0 )
        {
          if ( v48 == 0.5 )
          {
            v49 = iptr;
            v50 = 1.0;
            goto LABEL_77;
          }
          v49 = floor(v46 + 0.5);
        }
        else if ( v48 == -0.5 )
        {
          v49 = iptr;
          v50 = -1.0;
LABEL_77:
          v51 = v49 + v50;
          if ( ((__int64)v49 & 1) != 0 )
            v49 = v51;
        }
        else
        {
          v49 = ceil(v46 + -0.5);
        }
        if ( v49 == INFINITY )
          v49 = -v49;
        v52 = ScriptMessageLabel__SubstrByDisp(v39, (int)v49, v47);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_43849904(v41, v52, 0LL);
        if ( v40 )
        {
          UILabel__set_text(v40, (System_String_o *)this, 0LL);
          return v5->fields.isBusy;
        }
      }
    }
LABEL_86:
    sub_B0D97C(this);
  }
  return v5->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4219FB9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10008/*"OnDelayWaitNextTouch"*/, method);
    byte_4219FB9 = 1;
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
          sub_B0D97C(0LL);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10008/*"OnDelayWaitNextTouch"*/,
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  float v6; // s8
  float windowClosePosY; // s9

  if ( (byte_4219FAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219FAE = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_14;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_14;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
        v6 = *(float *)&Component_srcLineSprite[1].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v6 != windowClosePosY, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(rootObject);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4219FBA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10008/*"OnDelayWaitNextTouch"*/, method);
    byte_4219FBA = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10008/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4219FB8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10008/*"OnDelayWaitNextTouch"*/, method);
    byte_4219FB8 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10008/*"OnDelayWaitNextTouch"*/,
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
  float v6; // s0
  UnityEngine_Transform_o *v7; // x20
  int v8; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FC0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10078/*"OnShake"*/, method);
    byte_4219FC0 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v6 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( messageShake )
    {
      v11.fields.y = v6;
      v11.fields.z = 0.0;
      v11.fields.x = v4;
      UnityEngine_Transform__set_localPosition(messageShake, v11, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10078/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(v5);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10078/*"OnShake"*/,
    0LL);
  v7 = this->fields.messageShake;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v7 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__OpenUp(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  TweenPosition_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **windowUpCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4219FAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4219FAC = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_30;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_30;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      v20.fields.y = this->fields.windowNormalPosY;
      v20.fields.x = 0.0;
      v20.fields.z = 0.0;
      v11 = TweenPosition__Begin(gameObject, windowOpenTime, v20, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_30;
        v11->fields.style = 0;
        windowUpCurve = (System_Int32_array **)this->fields.windowUpCurve;
        v11->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowUpCurve;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v11->fields.animationCurve,
          windowUpCurve,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        UITweener__PlayForward((UITweener_o *)v11, 0LL);
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
      sub_B0D97C(rootObject);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4219FBD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, isFast);
    byte_4219FBD = 1;
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
  sub_B0D840(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_GameObject_o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *imagePrefab; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct UISprite_o **p_image; // x22
  UnityEngine_GameObject_o *v68; // x22
  UnityEngine_Transform_o *transform; // x22
  int v70; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *rubyPrefab; // x21
  struct UILabel_o *Component_srcLineSprite; // x0
  struct UILabel_o **p_ruby; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_GameObject_o *v82; // x21
  UnityEngine_Transform_o *v83; // x21
  int v84; // s0
  UnityEngine_Transform_o *v87; // x21
  int v88; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *mainPrefab; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  ScriptMessageCommonManager_o **p_fields; // x22
  UnityEngine_GameObject_o *v99; // x22
  UnityEngine_Transform_o *v100; // x22
  int v101; // s0
  UnityEngine_Transform_o *v104; // x22
  int v105; // s0

  v10 = this;
  if ( (byte_4219F9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, label);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v18);
    sub_B0D8A4(&StringLiteral_5826/*"Effect Parent"*/, v19);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&StringLiteral_5824/*"Effect Child"*/, v20);
    byte_4219F9D = 1;
  }
  if ( hasImage )
  {
    this = (ScriptMessageCommonManager_o *)v10->fields.imageStock;
    if ( !this )
      goto LABEL_79;
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
                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !label )
        goto LABEL_79;
      label->fields.image = (struct UISprite_o *)this;
      p_image = &label->fields.image;
      sub_B0D840(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this = (ScriptMessageCommonManager_o *)label->fields.image;
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_79;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.messageScroll, 0LL);
      this = (ScriptMessageCommonManager_o *)*p_image;
      if ( !*p_image )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v10->fields.messageScroll )
        goto LABEL_79;
      v68 = (UnityEngine_GameObject_o *)this;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v10->fields.messageScroll,
                                               0LL);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v68 )
        goto LABEL_79;
      UnityEngine_GameObject__set_layer(v68, (int32_t)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( !label )
        goto LABEL_79;
      label->fields.image = (struct UISprite_o *)this;
      sub_B0D840(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_79;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v70, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_79;
LABEL_76:
    v104 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v105 = UnityEngine_Vector3__get_one(0LL);
    if ( !v104 )
      goto LABEL_79;
    UnityEngine_Transform__set_localScale(v104, *(UnityEngine_Vector3_o *)&v105, 0LL);
    if ( !hasRuby )
      return;
    goto LABEL_20;
  }
  if ( !hasEffect )
  {
    this = (ScriptMessageCommonManager_o *)v10->fields.mainStock;
    if ( !this )
      goto LABEL_79;
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
                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_79;
      label->fields.main = (struct UILabel_o *)this;
      p_fields = (ScriptMessageCommonManager_o **)&label->fields;
      sub_B0D840(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_79;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.messageScroll, 0LL);
      this = *p_fields;
      if ( !*p_fields )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v10->fields.messageScroll )
        goto LABEL_79;
      v99 = (UnityEngine_GameObject_o *)this;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v10->fields.messageScroll,
                                               0LL);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v99 )
        goto LABEL_79;
      UnityEngine_GameObject__set_layer(v99, (int32_t)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_79;
      label->fields.main = (struct UILabel_o *)this;
      sub_B0D840(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_79;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_79;
    v100 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v101 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v100 )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(v100, *(UnityEngine_Vector3_o *)&v101, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_79;
    goto LABEL_76;
  }
  if ( !label )
    goto LABEL_79;
  p_effect = (ScriptMessageCommonManager_o **)&label->fields.effect;
  effect = (UnityEngine_Object_o *)label->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effect, 0LL, 0LL) )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v29, v30);
    UnityEngine_GameObject___ctor(v31, (System_String_o *)StringLiteral_5826/*"Effect Parent"*/, 0LL);
    *p_effect = (ScriptMessageCommonManager_o *)v31;
    sub_B0D840(
      (BattleServantConfConponent_o *)&label->fields.effect,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this = *p_effect;
    if ( !*p_effect )
      goto LABEL_79;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_79;
    UnityEngine_Transform__SetParent_35056148((UnityEngine_Transform_o *)this, v10->fields.messageScroll, 0, 0LL);
    v40 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v38, v39);
    UnityEngine_GameObject___ctor(v40, (System_String_o *)StringLiteral_5824/*"Effect Child"*/, 0LL);
    label->fields.frontEffect = v40;
    sub_B0D840(
      (BattleServantConfConponent_o *)&label->fields.frontEffect,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
    if ( !this )
      goto LABEL_79;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_79;
    UnityEngine_Transform__SetParent_35056148((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0LL);
  }
  if ( !hasRuby )
    return;
LABEL_20:
  this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
  if ( !this )
    goto LABEL_79;
  if ( SLODWORD(this->fields.rootPanel) >= 1 )
  {
    v47 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
            (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    label->fields.ruby = (struct UILabel_o *)v47;
    sub_B0D840(
      (BattleServantConfConponent_o *)&label->fields.ruby,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    goto LABEL_55;
  }
  rubyPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v10->fields.rubyPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           rubyPrefab,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_79;
  Component_srcLineSprite = (struct UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  label->fields.ruby = Component_srcLineSprite;
  p_ruby = &label->fields.ruby;
  sub_B0D840(
    (BattleServantConfConponent_o *)&label->fields.ruby,
    (System_Int32_array **)Component_srcLineSprite,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.messageScroll, 0LL),
        (this = (ScriptMessageCommonManager_o *)*p_ruby) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL),
        !v10->fields.messageScroll)
    || (v82 = (UnityEngine_GameObject_o *)this,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v10->fields.messageScroll,
                                                  0LL)) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL),
        !v82) )
  {
LABEL_79:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__set_layer(v82, (int32_t)this, 0LL);
LABEL_55:
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_79;
  v83 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v83 )
    goto LABEL_79;
  UnityEngine_Transform__set_localPosition(v83, *(UnityEngine_Vector3_o *)&v84, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_79;
  v87 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v88 = UnityEngine_Vector3__get_one(0LL);
  if ( !v87 )
    goto LABEL_79;
  UnityEngine_Transform__set_localScale(v87, *(UnityEngine_Vector3_o *)&v88, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_79;
  UILabel__set_fontSize((UILabel_o *)this, v10->fields.rubyFontSize, 0LL);
}


void __fastcall ScriptMessageCommonManager__QuitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4219FA7 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9083/*"MessageShake/LogMark/BackLogButton"*/, v3);
    byte_4219FA7 = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))rootPanel->klass[1]._1.gc_desc)(
          rootPanel,
          rootPanel->klass[1]._1.name,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v5),
        (rootPanel = this->fields.talkNameManager) == 0LL)
    || (ScriptLineMessage__DeleteLabels(rootPanel, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0LL) )
  {
    sub_B0D97C(rootPanel);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_20924548(transform, (System_String_o *)StringLiteral_9083/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
}


void __fastcall ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_4219FA2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, label);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptMessageCommonManager_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4219FA2 = 1;
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
    this = v4[58];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_fields,
      (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&label->fields, 0LL, v11, v12, v13, v14, v15, v16);
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
    this = v4[59];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_ruby,
      (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&label->fields.ruby, 0LL, v19, v20, v21, v22, v23, v24);
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
      this = v4[60];
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_image,
          (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&label->fields.image, 0LL, v28, v29, v30, v31, v32, v33);
        goto LABEL_26;
      }
    }
LABEL_28:
    sub_B0D97C(this);
  }
LABEL_26:
  ScriptMessageLabel__Release(label, v27);
  this = v4[61];
  if ( !this )
    goto LABEL_28;
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
    (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
    (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
    (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_B0D97C(0LL);
  UITouchPress__PressReset(touchPress, 0LL);
  this->fields.isFastMessageRequest = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Transform_o *messageScroll; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  float v6; // s0
  float v7; // s2
  float y; // s10
  float v9; // s8
  float v10; // s9
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219FBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219FBF = 1;
  }
  messageScroll = this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)messageScroll,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageScroll = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)messageScroll & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  messageScroll = this->fields.messageScroll;
  if ( !messageScroll
    || (messageScroll = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageScroll, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(messageScroll, 0LL),
        (messageScroll = this->fields.messageScroll) == 0LL)
    || (y = this->fields.dispSize.fields.y,
        v9 = v6,
        v10 = v7,
        (messageScroll = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageScroll, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(messageScroll);
  }
  v11.fields.y = y * 0.5;
  v11.fields.x = v9;
  v11.fields.z = v10;
  UnityEngine_Transform__set_localPosition(messageScroll, v11, 0LL);
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
        const MethodInfo *method)
{
  UnityEngine_Component_o *autoMessageButton; // x0

  autoMessageButton = (UnityEngine_Component_o *)this->fields.autoMessageButton;
  if ( !autoMessageButton
    || (autoMessageButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoMessageButton, 0LL)) == 0LL )
  {
    sub_B0D97C(autoMessageButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoMessageButton, isOn, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetActiveBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backLogButton; // x0

  backLogButton = (UnityEngine_Component_o *)this->fields.backLogButton;
  if ( !backLogButton
    || (backLogButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backLogButton, 0LL)) == 0LL )
  {
    sub_B0D97C(backLogButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backLogButton, isOn, 0LL);
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
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v7; // x8

  if ( (byte_4219FC8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17002/*"btn_auto_on"*/, isOn);
    sub_B0D8A4(&StringLiteral_17001/*"btn_auto_off"*/, v5);
    byte_4219FC8 = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_B0D97C(0LL);
  v7 = (System_String_o **)&StringLiteral_17002/*"btn_auto_on"*/;
  if ( !isOn )
    v7 = (System_String_o **)&StringLiteral_17001/*"btn_auto_off"*/;
  UISprite__set_spriteName(autoMessageSprite, *v7, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetBetweenLineHeight(
        ScriptMessageCommonManager_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_B0D97C(0LL);
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

  if ( (byte_4219FAF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4219FAF = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v12, v2, v3, v4, v5, v6, v7);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v13);
}


void __fastcall ScriptMessageCommonManager__SetDotTextDispPositionHeight(
        ScriptMessageCommonManager_o *this,
        System_String_o *fontSizeName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float y; // s0
  float v7; // s1

  if ( (byte_4219FB4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20240/*"large"*/, fontSizeName);
    sub_B0D8A4(&StringLiteral_23428/*"x-large"*/, v5);
    byte_4219FB4 = 1;
  }
  if ( UnityEngine_Mathf__Approximately(this->fields.dispPosition.fields.y, this->fields.startPosition.fields.y, 0LL) )
  {
    if ( System_String__op_Equality(fontSizeName, (System_String_o *)StringLiteral_20240/*"large"*/, 0LL) )
    {
      y = this->fields.dispPosition.fields.y;
      v7 = -4.0;
    }
    else
    {
      if ( !System_String__op_Equality(fontSizeName, (System_String_o *)StringLiteral_23428/*"x-large"*/, 0LL) )
        return;
      y = this->fields.dispPosition.fields.y;
      v7 = -9.0;
    }
    this->fields.dispPosition.fields.y = y + v7;
  }
}


void __fastcall ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4219FB2 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_4219FB2 = 1;
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
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4219FB1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, font);
    byte_4219FB1 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_B0D97C(v5);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)defaultFontType,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall ScriptMessageCommonManager__SetForcedDisableTurnPage(
        ScriptMessageCommonManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isForcedDisableTurnPage = flag;
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
    sub_B0D97C(0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetMessageWindowCollider(
        ScriptMessageCommonManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UIWidget_o *messageBackBase; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_4219FC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, isEnable);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4219FC6 = 1;
  }
  messageBackBase = this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_10;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)messageBackBase,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageBackBase = (struct UIWidget_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)messageBackBase & 1) == 0 )
  {
    if ( Component_WebViewObject )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isEnable, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(messageBackBase);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4219FA5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isActive);
    byte_4219FA5 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rootObject, 0LL, 0LL) )
  {
    v6 = this->fields.rootObject;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isActive, 0LL);
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
  int v16; // s2
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  float rubyLineHeight; // s0
  UIPanel_o *dispPanel; // x22
  ManagerConfig_c *v23; // x0
  int WIDTH; // s0
  long double v25; // q0
  const MethodInfo *v26; // x1
  float v27; // s0
  MethodInfo v30; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector4_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4219FA8 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, *(_QWORD *)&x);
    byte_4219FA8 = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    goto LABEL_26;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, bool, const MethodInfo *, float))rootPanel->klass[1]._1.castClass)(
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
      goto LABEL_26;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_26;
    v14 = (float)y;
    v15 = (float)x;
  }
  else if ( isWindowBack )
  {
    this->fields.dispSize = this->fields.defaultWindowDispSize;
    rootPanel = this->fields.messageBase;
    if ( !rootPanel )
      goto LABEL_26;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_26;
    v15 = this->fields.defaultWindowDispCenter.fields.x;
    v14 = this->fields.defaultWindowDispCenter.fields.y;
  }
  else
  {
    this->fields.dispSize = this->fields.defaultAllDispSize;
    rootPanel = this->fields.messageBase;
    if ( !rootPanel )
      goto LABEL_26;
    rootPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(rootPanel, 0LL);
    if ( !rootPanel )
      goto LABEL_26;
    v15 = this->fields.defaultAllDispCenter.fields.x;
    v14 = this->fields.defaultAllDispCenter.fields.y;
  }
  v16 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v15, 0LL);
  rubyLineHeight = this->fields.rubyLineHeight;
  this->fields.startPosition.fields.x = 0.0;
  this->fields.isWindowBack = isWindowBack;
  this->fields.startPosition.fields.y = -(float)(rubyLineHeight + 2.0);
  dispPanel = this->fields.dispPanel;
  v23 = ManagerConfig_TypeInfo;
  if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  v31.fields.w = this->fields.dispSize.fields.y;
  v31.fields.y = 0.0;
  WIDTH = v23->static_fields->WIDTH;
  v30.methodPointer = 0LL;
  v30.invoker_method = 0LL;
  v31.fields.z = (float)WIDTH;
  v31.fields.x = 0.0;
  UnityEngine_Vector4___ctor(v31, v17, v18, v19, v20, &v30);
  if ( !dispPanel
    || (*(_QWORD *)&v32.fields.x = v30.methodPointer,
        *(_QWORD *)&v32.fields.z = v30.invoker_method,
        UIPanel__set_baseClipRegion(dispPanel, v32, 0LL),
        (rootPanel = (UnityEngine_GameObject_o *)this->fields.messageWindowBack) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(rootPanel);
  }
  LODWORD(v25) = 0;
  if ( isWindowBack )
    *(float *)&v25 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.castClass)(
    rootPanel,
    rootPanel->klass[1]._1.declaringType,
    v25);
  ScriptMessageCommonManager__ClearText(this, v26);
  v27 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v27 == INFINITY )
    return (int)-v27;
  else
    return (int)v27;
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
  __int64 v11; // x1
  System_String_o *v12; // x21
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x4
  _BOOL4 isWindowBack; // w8
  UnityEngine_GameObject_o *talkNameIcon; // x0
  float v29; // s0
  int32_t talkNameBackDefaultWidth; // w8
  double v31; // d0
  long double v32; // q0
  UnityEngine_GameObject_c *klass; // x8
  float x; // s1
  float betweenLineHeight; // s3
  float y; // s2
  float v37; // w8
  float v38; // s0
  const MethodInfo *v39; // x1
  long double v40; // q0

  if ( (byte_4219FB7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_129/*" 1.5]"*/, imageName);
    sub_B0D8A4(&StringLiteral_15845/*"[image "*/, v11);
    byte_4219FB7 = 1;
  }
  v12 = System_String__Concat_43849904(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v12, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v13);
    return 1;
  }
  this->fields.talkName = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.talkName,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.talkNameOnly = charaname;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.talkNameOnly,
    (System_Int32_array **)charaname,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  isWindowBack = this->fields.isWindowBack;
  this->fields.talkNameIndex = index;
  if ( !isWindowBack )
  {
    if ( imageName )
      v12 = System_String__Concat_43853316(
              (System_String_o *)StringLiteral_15845/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_129/*" 1.5]"*/,
              v12,
              0LL);
    x = this->fields.startPosition.fields.x;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptMessageCommonManager__UpdateLabels(this, v12, 1, 0, v26);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v37 = this->fields.startPosition.fields.x;
    v38 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v38;
    this->fields.dispPosition.fields.x = v37;
    this->fields.dispPosition.fields.y = y - (float)(v38 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v39);
    talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameIcon;
    if ( talkNameIcon )
      goto LABEL_22;
LABEL_28:
    sub_B0D97C(talkNameIcon);
  }
  talkNameIcon = this->fields.talkNameRootObject;
  if ( !talkNameIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(talkNameIcon, 1, 0LL);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
  if ( !talkNameIcon )
    goto LABEL_28;
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, System_String_o *, _QWORD, _QWORD, _QWORD, __int64, Il2CppClass *))&talkNameIcon->klass[1]._1.this_arg.bits)(
    talkNameIcon,
    v12,
    0LL,
    0LL,
    0LL,
    1LL,
    talkNameIcon->klass[1]._1.element_class);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
  if ( !talkNameIcon )
    goto LABEL_28;
  v29 = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)talkNameIcon, 0LL).fields.x;
  talkNameBackDefaultWidth = this->fields.talkNameBackDefaultWidth;
  if ( v29 > (float)talkNameBackDefaultWidth )
  {
    if ( v29 == INFINITY )
      v31 = -v29;
    else
      v31 = v29;
    talkNameBackDefaultWidth = (int)v31;
  }
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameBack;
  if ( !talkNameIcon )
    goto LABEL_28;
  UIWidget__set_width(
    (UIWidget_o *)talkNameIcon,
    ((this->fields.talkNameBackBaseWidth + talkNameBackDefaultWidth) & 1)
  + this->fields.talkNameBackBaseWidth
  + talkNameBackDefaultWidth,
    0LL);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameIcon;
  if ( !talkNameIcon )
    goto LABEL_28;
  if ( !imageName )
  {
LABEL_22:
    klass = talkNameIcon->klass;
    LODWORD(v32) = 0;
    goto LABEL_23;
  }
  UISprite__set_spriteName((UISprite_o *)talkNameIcon, imageName, 0LL);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameIcon;
  if ( !talkNameIcon )
    goto LABEL_28;
  klass = talkNameIcon->klass;
  LODWORD(v32) = 1.0;
LABEL_23:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v32);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameIcon )
    goto LABEL_28;
  LODWORD(v40) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v40 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameIcon->klass[1]._1.castClass)(
    talkNameIcon,
    talkNameIcon->klass[1]._1.declaringType,
    v40);
  return 1;
}


void __fastcall ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *talkNameAtlas; // x21
  UISprite_o *IsNullOrEmpty; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *talkNameBack; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1
  UISprite_o *v24; // x21
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v26; // x8

  if ( (byte_4219FB6 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, imageName);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4219FB6 = 1;
  }
  talkNameAtlas = (UnityEngine_Object_o *)this->fields.talkNameAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    talkNameBack = this->fields.talkNameBack;
    if ( !talkNameBack )
      goto LABEL_23;
    mAtlas = talkNameBack->fields.mAtlas;
    this->fields.talkNameAtlas = mAtlas;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.talkNameAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.talkNameBack;
    if ( !v22 )
      goto LABEL_23;
    mSpriteName = v22->fields.mSpriteName;
    this->fields.talkNameSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.talkNameSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(imageName, 0LL);
  v24 = this->fields.talkNameBack;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_23;
    UISprite__set_atlas(this->fields.talkNameBack, this->fields.talkNameAtlas, 0LL);
    IsNullOrEmpty = this->fields.talkNameBack;
    if ( !IsNullOrEmpty )
      goto LABEL_23;
    UISprite__set_spriteName(IsNullOrEmpty, this->fields.talkNameSpriteName, 0LL);
  }
  else
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMark(v24, imageName, 0LL);
  }
  IsNullOrEmpty = this->fields.talkNameBack;
  if ( !IsNullOrEmpty )
    goto LABEL_23;
  AtlasSprite = UISprite__GetAtlasSprite(IsNullOrEmpty, 0LL);
  if ( AtlasSprite )
  {
    v26 = AtlasSprite;
    IsNullOrEmpty = this->fields.talkNameBack;
    if ( IsNullOrEmpty )
    {
      UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, (v26->fields.height & 1) + v26->fields.height, 0LL);
      return;
    }
LABEL_23:
    sub_B0D97C(IsNullOrEmpty);
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
  __int64 v3; // x1
  float defaultScrollTime; // w9
  float ScenarioTextSpeed; // s8
  BalanceConfig_c *v6; // x0
  float ScenarioTextSpeedDefault; // s9
  bool v8; // nf
  float v9; // s0
  float ScenarioScrollSpeed; // s0
  BalanceConfig_c *v11; // x0
  float v12; // s8
  float ScenarioScrollSpeedHigh; // s9
  float v14; // s0
  float *p_scrollSpeed; // x8
  float v16; // s0
  float fastScrollTime; // s1

  if ( (byte_4219FB0 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    byte_4219FB0 = 1;
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
    v6 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v6->static_fields->ScenarioTextSpeedDefault;
    v8 = OptionManager__GetScenarioTextSpeed(0LL) < BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh;
    v9 = 0.0;
    if ( v8 )
      v9 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v9;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
    v11 = BalanceConfig_TypeInfo;
    v12 = ScenarioScrollSpeed;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v11->static_fields->ScenarioScrollSpeedHigh;
    v14 = OptionManager__GetScenarioScrollSpeed(0LL);
    if ( v12 < ScenarioScrollSpeedHigh )
    {
      p_scrollSpeed = &this->fields.scrollSpeed;
      v16 = this->fields.defaultScrollTime
          / (float)(v14 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
      this->fields.scrollSpeed = v16;
      goto LABEL_23;
    }
    defaultScrollTime = this->fields.fastScrollTime;
  }
  p_scrollSpeed = &this->fields.scrollSpeed;
  this->fields.scrollSpeed = defaultScrollTime;
  v16 = defaultScrollTime;
LABEL_23:
  fastScrollTime = this->fields.fastScrollTime;
  if ( v16 < fastScrollTime )
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  float v8; // s8
  UnityEngine_Component_o *messageScroll; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v11; // x20
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_4219FBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, isFast);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5995/*"EndScroll"*/, v6);
    byte_4219FBE = 1;
  }
  v7 = 380LL;
  if ( isFast )
    v7 = 212LL;
  v8 = *(float *)((char *)&this->klass + v7);
  if ( v8 > 0.0 )
  {
    messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
    this->fields.isScroll = 1;
    if ( messageScroll )
    {
      gameObject = UnityEngine_Component__get_gameObject(messageScroll, 0LL);
      messageScroll = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, v8, this->fields.scrollPosition, 0LL);
      if ( messageScroll )
      {
        v11 = messageScroll;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageScroll, 1, 0LL);
        LODWORD(v11[1].klass) = 3;
        v12 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v11[3].klass = (UnityEngine_Component_c *)v12;
        sub_B0D840((BattleServantConfConponent_o *)&v11[3], v12, v13, v14, v15, v16, v17, v18);
        v19 = (System_Int32_array **)StringLiteral_5995/*"EndScroll"*/;
        v11[3].monitor = (void *)StringLiteral_5995/*"EndScroll"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v11[3].monitor, v19, v20, v21, v22, v23, v24, v25);
        return;
      }
    }
    goto LABEL_19;
  }
  messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_19;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      messageScroll,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageScroll = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)messageScroll & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
  if ( !messageScroll
    || (messageScroll = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageScroll, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B0D97C(messageScroll);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageScroll, this->fields.scrollPosition, 0LL);
  this->fields.isFastMessageRequest = 0;
  this->fields.isScroll = 0;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x22
  System_String_o *rootPanel; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  long double v38; // q0
  float stepTime; // s8
  __int64 v40; // x1
  __int64 v41; // x2
  System_Text_StringBuilder_o *v42; // x23
  System_Text_StringBuilder_o **v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **defaultColorTag; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  ScriptMessageCommonManager_ProcAddLabel_o *v59; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  int32_t v62; // w26
  int v63; // w25
  System_String_o *v64; // x0
  const MethodInfo *v65; // x2
  System_String_o *v66; // x27
  int32_t v67; // w1
  int32_t v68; // w2
  System_String_o *v69; // x26
  float betweenLineHeight; // s3
  float y; // s2
  float x; // w8
  float v73; // s0
  const MethodInfo *v74; // x1
  System_String_o *v75; // x0
  System_String_o *v76; // x1
  float v77; // s3
  float v78; // s2
  float v79; // w8
  float v80; // s0
  const MethodInfo *v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  BattleServantConfConponent_o *v89; // x0
  const MethodInfo *v90; // x2
  System_String_o *v91; // x26
  System_String_array *v92; // x26
  struct System_String_o *v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  const MethodInfo *v100; // x1
  System_String_o *v101; // x0
  const MethodInfo *v102; // x4
  bool v103; // w8
  char v104; // w3
  System_String_o *v105; // x1
  ScriptMessageCommonManager_o *v106; // x0
  const MethodInfo *v107; // x3
  _BOOL4 isEffectMessage; // w27
  const MethodInfo *v109; // x2
  const MethodInfo *v110; // x2
  int32_t v111; // w28
  System_String_o *v112; // x0
  int32_t BraceIndex; // w0
  System_String_o *v114; // x0
  const MethodInfo *v115; // x1
  int32_t v116; // w26
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  int32_t v125; // w27
  System_Text_StringBuilder_o *v126; // x28
  __int64 v127; // x1
  const MethodInfo *v128; // x3
  ScriptReplaceString_c *v129; // x0
  int32_t playerGenderIndex; // w27
  struct System_String_o *v131; // x1
  System_String_o *v132; // x26
  System_Text_StringBuilder_o *v133; // x20
  ScriptMessageCommonManager_ProcAddLabel2_o *v134; // [xsp+0h] [xbp-80h]
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-78h]
  System_String_o **colorTag; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4219FA4 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, txt);
    sub_B0D8A4(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v8);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v9);
    sub_B0D8A4(&ScriptReplaceString_TypeInfo, v10);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B0D8A4(&Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__0__, v12);
    sub_B0D8A4(&Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__1__, v13);
    sub_B0D8A4(&ScriptMessageCommonManager___c__DisplayClass119_0_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_22052/*"servantName"*/, v15);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v16);
    sub_B0D8A4(&StringLiteral_19315/*"i"*/, v17);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v18);
    sub_B0D8A4(&StringLiteral_15687/*"[*"*/, v19);
    sub_B0D8A4(&StringLiteral_15882/*"[~1]"*/, v20);
    sub_B0D8A4(&StringLiteral_15817/*"[^"*/, v21);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v22);
    sub_B0D8A4(&StringLiteral_21732/*"r"*/, v23);
    sub_B0D8A4(&StringLiteral_18337/*"effectmessage"*/, v24);
    sub_B0D8A4(&StringLiteral_20291/*"line"*/, v25);
    sub_B0D8A4(&StringLiteral_19474/*"image"*/, v26);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v27);
    sub_B0D8A4(&StringLiteral_15881/*"[~"*/, v28);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v29);
    byte_4219FA4 = 1;
  }
  text = 0LL;
  v30 = sub_B0D974(ScriptMessageCommonManager___c__DisplayClass119_0_TypeInfo, txt, isStretch);
  ScriptMessageCommonManager___c__DisplayClass119_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass119_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_113;
  *(_QWORD *)(v30 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_BYTE *)(v30 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (System_String_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_113;
  stepTime = 0.0;
  LODWORD(v38) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v38 = 0.0;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, long double))rootPanel->klass->vtable._8_System_IConvertible_ToChar.method)(
    rootPanel,
    rootPanel->klass->vtable._9_System_IConvertible_ToSByte.methodPtr,
    v38);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v30 + 32) = stepTime;
  v42 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v40, v41);
  System_Text_StringBuilder___ctor(v42, 0LL);
  v43 = (System_Text_StringBuilder_o **)(v30 + 16);
  *(_QWORD *)(v30 + 16) = v42;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)v42, v44, v45, v46, v47, v48, v49);
  defaultColorTag = (System_Int32_array **)this->fields.defaultColorTag;
  colorTag = (System_String_o **)(v30 + 40);
  *(_QWORD *)(v30 + 40) = defaultColorTag;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 40), defaultColorTag, v51, v52, v53, v54, v55, v56);
  v59 = (ScriptMessageCommonManager_ProcAddLabel_o *)sub_B0D974(
                                                       ScriptMessageCommonManager_ProcAddLabel_TypeInfo,
                                                       v57,
                                                       v58);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    v59,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__0__,
    0LL);
  v134 = (ScriptMessageCommonManager_ProcAddLabel2_o *)sub_B0D974(
                                                         ScriptMessageCommonManager_ProcAddLabel2_TypeInfo,
                                                         v60,
                                                         v61);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    v134,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_113:
    sub_B0D97C(rootPanel);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_109:
    if ( !v59 )
      goto LABEL_113;
    goto LABEL_110;
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  v62 = 0;
  v63 = 0;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v62, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      v125 = v62 + 1;
      rootPanel = (System_String_o *)ScriptMessageLabel__GetBraceIndex(txt, v62 + 1, v109);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_108;
      v111 = (int)rootPanel;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      rootPanel = ScriptMessageLabel__GetCommandName(txt, v125, v110);
      if ( !rootPanel )
        goto LABEL_113;
      rootPanel = (System_String_o *)System_String__Equals_43837244(
                                       rootPanel,
                                       (System_String_o *)StringLiteral_18337/*"effectmessage"*/,
                                       0LL);
      if ( ((unsigned __int8)rootPanel & 1) != 0 )
      {
        v112 = System_String__Substring_43913640(txt, v62 + 15, v63 + v111 - 15, 0LL);
        rootPanel = (System_String_o *)System_String__op_Equality(v112, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      goto LABEL_107;
    }
    v125 = v62 + 1;
LABEL_108:
    v63 = -v125;
    v62 = v125;
    if ( v125 >= txt->fields.m_stringLength )
      goto LABEL_109;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v126 = *v43;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v62, 0LL);
    if ( !v126 )
      goto LABEL_113;
    v125 = v62 + 1;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42158644(v126, (uint16_t)rootPanel, 0LL);
    goto LABEL_108;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v125 = v62 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v62 + 1, v109);
  if ( BraceIndex == -1 )
  {
    rootPanel = (System_String_o *)*v43;
    if ( !*v43 )
      goto LABEL_113;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     (System_String_o *)StringLiteral_15681/*"["*/,
                                     0LL);
    goto LABEL_108;
  }
  v111 = BraceIndex;
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v125, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v114 = System_String__Substring_43913640(txt, v62 + 2, v63 + v111 - 2, 0LL);
    v116 = System_Int32__Parse(v114, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    String = ScriptReplaceString__GetString(v116, v115);
    TagSplitString = System_String__Concat_43849904(String, (System_String_o *)StringLiteral_15691/*"[-]"*/, 0LL);
    goto LABEL_104;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v125, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    if ( !byte_4210BC1 )
    {
      sub_B0D8A4(&ScriptReplaceString_TypeInfo, v127);
      byte_4210BC1 = 1;
    }
    v129 = ScriptReplaceString_TypeInfo;
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v129 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v129->static_fields->playerGenderIndex;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v62 + 2, playerGenderIndex, v128);
LABEL_104:
    v131 = *(struct System_String_o **)(v30 + 40);
    v132 = TagSplitString;
    this->fields.defaultColorTag = v131;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v131,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
    v103 = isStretch;
    v104 = *(_BYTE *)(v30 + 36);
    v106 = this;
    v105 = v132;
LABEL_105:
    ScriptMessageCommonManager__UpdateLabels(v106, v105, v103, v104, v102);
    v88 = (System_Int32_array **)this->fields.defaultColorTag;
    *(_QWORD *)(v30 + 40) = v88;
    v89 = (BattleServantConfConponent_o *)(v30 + 40);
LABEL_106:
    sub_B0D840(v89, v88, v82, v83, v84, v85, v86, v87);
LABEL_107:
    v125 = v111 + 1;
    goto LABEL_108;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v125, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v64 = System_String__Substring_43913640(txt, v62, v63 + v111 + 1, 0LL);
    goto LABEL_34;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v125, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_107;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootPanel = ScriptMessageLabel__GetCommandName(txt, v125, v65);
  if ( !rootPanel )
    goto LABEL_113;
  v66 = rootPanel;
  rootPanel = (System_String_o *)System_String__Equals_43837244(rootPanel, (System_String_o *)StringLiteral_19474/*"image"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v67 = v62 + 7;
    v68 = v63 + v111 - 7;
LABEL_33:
    v75 = System_String__Substring_43913640(txt, v67, v68, 0LL);
    v64 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_15817/*"[^"*/,
            v75,
            (System_String_o *)StringLiteral_15917/*"]"*/,
            0LL);
LABEL_34:
    v76 = v64;
    rootPanel = (System_String_o *)v134;
    if ( !v134 )
      goto LABEL_113;
LABEL_35:
    ScriptMessageCommonManager_ProcAddLabel2__Invoke((ScriptMessageCommonManager_ProcAddLabel2_o *)rootPanel, v76, 0LL);
    goto LABEL_107;
  }
  if ( System_String__Equals_43837244(v66, (System_String_o *)StringLiteral_18337/*"effectmessage"*/, 0LL) )
  {
    v69 = System_String__Substring_43913640(txt, v62 + 15, v63 + v111 - 15, 0LL);
    rootPanel = (System_String_o *)System_String__op_Inequality(v69, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
    if ( ((unsigned __int8)rootPanel & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_113;
      ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
      rootPanel = System_String__Concat_43852188(
                    (System_String_o *)StringLiteral_15687/*"[*"*/,
                    v69,
                    (System_String_o *)StringLiteral_15917/*"]"*/,
                    0LL);
      if ( !v134 )
        goto LABEL_113;
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v134, rootPanel, 0LL);
      betweenLineHeight = this->fields.betweenLineHeight;
      y = this->fields.dispPosition.fields.y;
      x = this->fields.startPosition.fields.x;
      v73 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
      this->fields.beforeTextOnlyLineHeight = v73;
      this->fields.dispPosition.fields.x = x;
      this->fields.dispPosition.fields.y = y - (float)(v73 + betweenLineHeight);
      ScriptMessageCommonManager__SetDefaultState(this, v74);
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v134, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_107;
  }
  rootPanel = (System_String_o *)System_String__Equals_43837244(v66, (System_String_o *)StringLiteral_19315/*"i"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v67 = v62 + 3;
    v68 = v63 + v111 - 3;
    goto LABEL_33;
  }
  rootPanel = (System_String_o *)System_String__Equals_43837244(v66, (System_String_o *)StringLiteral_21732/*"r"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v77 = this->fields.betweenLineHeight;
    v78 = this->fields.dispPosition.fields.y;
    v79 = this->fields.startPosition.fields.x;
    v80 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v80;
    this->fields.dispPosition.fields.x = v79;
    this->fields.dispPosition.fields.y = v78 - (float)(v80 + v77);
    ScriptMessageCommonManager__SetDefaultState(this, v81);
    v88 = (System_Int32_array **)this->fields.defaultColorTag;
    v89 = (BattleServantConfConponent_o *)(v30 + 40);
    *colorTag = (System_String_o *)v88;
    goto LABEL_106;
  }
  rootPanel = (System_String_o *)System_String__Equals_43837244(v66, (System_String_o *)StringLiteral_22052/*"servantName"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    v91 = System_String__Substring_43913640(txt, v62 + 12, v63 + v111 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v92 = ScriptMessageLabel__AnalysTagParam(v91, 0, v90);
    v93 = *(struct System_String_o **)(v30 + 40);
    this->fields.defaultColorTag = v93;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    v101 = ScriptMessageLabel__GetServantChangeName(v92, v100);
    v103 = isStretch;
    v104 = *(_BYTE *)(v30 + 36);
    v105 = v101;
    v106 = this;
    goto LABEL_105;
  }
  rootPanel = (System_String_o *)System_String__StartsWith(v66, (System_String_o *)StringLiteral_20291/*"line"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
    rootPanel = System_String__Substring_43913640(txt, v62 + 5, v63 + v111 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_113;
    if ( rootPanel->fields.m_stringLength < 1 )
    {
      if ( !v134 )
        goto LABEL_113;
      v76 = (System_String_o *)StringLiteral_15882/*"[~1]"*/;
    }
    else
    {
      rootPanel = System_String__Concat_43852188(
                    (System_String_o *)StringLiteral_15881/*"[~"*/,
                    rootPanel,
                    (System_String_o *)StringLiteral_15917/*"]"*/,
                    0LL);
      if ( !v134 )
        goto LABEL_113;
      v76 = rootPanel;
    }
    rootPanel = (System_String_o *)v134;
    goto LABEL_35;
  }
  if ( v111 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_43913640(txt, v62, v63 + v111 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, v107);
    rootPanel = (System_String_o *)*v43;
    if ( !*v43 )
      goto LABEL_113;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     text,
                                     0LL);
    goto LABEL_107;
  }
  v133 = *v43;
  rootPanel = System_String__Substring(txt, v62, 0LL);
  if ( !v133 )
    goto LABEL_113;
  rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42155400(v133, rootPanel, 0LL);
  if ( !v59 )
    goto LABEL_113;
LABEL_110:
  ScriptMessageCommonManager_ProcAddLabel__Invoke(v59, 0LL);
}


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
    sub_B0D97C(touchPress);
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
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__Invoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  ScriptMessageCommonManager_ProcAddLabel_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScriptMessageCommonManager_ProcAddLabel_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ScriptMessageCommonManager_ProcAddLabel_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__Invoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptMessageCommonManager_ProcAddLabel2_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel2_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  ScriptMessageCommonManager_ProcAddLabel2_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptMessageCommonManager_ProcAddLabel2_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, txt, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = txt->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(txt, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(txt, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(txt, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(txt, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, txt, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, txt, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                txt,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, txt, v29);
    }
  }
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass119_0___ctor(
        ScriptMessageCommonManager___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass119_0___UpdateLabels_b__0(
        ScriptMessageCommonManager___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *tmpTxt; // x0
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v5; // x8
  struct ScriptMessageCommonManager_o *v6; // x8
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
    sub_B0D97C(tmpTxt);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v6->fields.defaultColorTag = tmpColorTag;
  sub_B0D840(&v6->fields.defaultColorTag, tmpColorTag);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass119_0___UpdateLabels_b__1(
        ScriptMessageCommonManager___c__DisplayClass119_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptMessageCommonManager___c__DisplayClass119_0_o *v3; // x19
  struct ScriptMessageCommonManager_o *_4__this; // x8
  struct System_String_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v3 = this;
  if ( text->fields.m_stringLength >= 1 )
  {
    this = (ScriptMessageCommonManager___c__DisplayClass119_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptMessageCommonManager__AddLabel(
      (ScriptMessageCommonManager_o *)this,
      text,
      v3->fields.stepTime,
      (System_String_o *)this[8].klass,
      v3->fields.isFoward,
      0LL);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_B0D97C(this);
  tmpColorTag = v3->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = tmpColorTag;
  sub_B0D840(&_4__this->fields.defaultColorTag, tmpColorTag);
}