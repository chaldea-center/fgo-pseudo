void __fastcall ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Int32_array **v38; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42EE427 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Stack_UISprite__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_Stack_UILabel__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42EE427 = 1;
  }
  __asm { FMOV            V1.2S, #1.0 }
  *(_QWORD *)&this->fields.messageSpeed = _D1;
  *(int32x2_t *)&this->fields.windowOpenTime = vdup_n_s32(0x3ECCCCCDu);
  this->fields.defaultAllDispCenter.fields.y = 0.0;
  this->fields.windowClosePosY = -200.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_32C4280;
  *(_OWORD *)&this->fields.defaultBetweenLineHeight = xmmword_32C4290;
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v38, v2, v3, v4, v5, v6, v7);
  v39 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v39,
    (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainStock,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v46,
    (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyStock,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v53,
    (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageStock,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v60,
    (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.labelStock,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dispLabelList,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 Label; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ScriptMessageLabel_o *v34; // x21
  BattleServantConfConponent_o *v35; // x0
  float32x2_t *p_dispPosition; // x27
  struct UnityEngine_Vector2_o dispPosition; // x28
  const MethodInfo *v38; // x5
  System_String_o *v39; // x22
  System_String_array *v40; // x24
  const MethodInfo *v41; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v46; // x7
  __int64 *p_fields; // x23
  __int64 *p_ruby; // x22
  UnityEngine_Vector2_o *v49; // x3
  System_String_o *v50; // x22
  const MethodInfo *v51; // x5
  int v52; // w8
  __int64 v53; // x23
  System_String_o *v54; // x22
  float v55; // s0
  struct ScriptMessageWindow_o *v56; // x8
  float v57; // s9
  struct ScriptMessageWindow_o *v58; // x8
  int v59; // w8
  int32_t v60; // w23
  int32_t horizontalAlign; // w24
  const MethodInfo *v62; // x6
  UnityEngine_Vector2_o zero; // kr00_8
  ScriptMessageLabel_o *v64; // x0
  UISprite_o **p_image; // x1
  UnityEngine_Vector2_o *v66; // x2
  int32_t v67; // w3
  float v68; // s0
  System_String_o *v69; // x4
  float x; // s1
  float y; // s2
  int32_t v72; // w5
  System_String_o *v73; // x22
  __int64 v74; // x23
  struct ScriptMessageWindow_o *v75; // x8
  System_String_o **v76; // x9
  int32_t v77; // w22
  System_String_o *v78; // x23
  const MethodInfo *v79; // x5
  struct ScriptMessageWindow_o *v80; // x8
  __int64 *v81; // x24
  const MethodInfo *v82; // x6
  System_String_o *v83; // x1
  System_String_o *v84; // x22
  System_String_array *v85; // x0
  System_String_array *v86; // x23
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  const MethodInfo *v89; // x5
  System_String_o *v90; // x22
  float v91; // s8
  float v92; // s10
  float v93; // s9
  System_String_o *v94; // x24
  System_String_array *v95; // x0
  System_String_array *v96; // x24
  System_String_o *v97; // x0
  float v98; // s0
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  int32_t v102; // w23
  __int64 *v103; // x23
  System_String_o *rubyText; // x0
  System_String_o *v105; // x22
  __int64 v106; // x23
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v108; // x22
  const MethodInfo *v109; // x5
  struct ScriptMessageWindow_o *v110; // x8
  System_String_o *v111; // x23
  __int64 v112; // x23
  int v113; // w24
  int32_t v114; // w0
  const MethodInfo *v115; // x6
  float v116; // s3
  unsigned __int64 v117; // d0
  UnityEngine_GameObject_o **v118; // x1
  const MethodInfo *v119; // x5
  __int64 v120; // x0
  System_String_o *rubyStr; // [xsp+0h] [xbp-90h]
  const MethodInfo *v122; // [xsp+8h] [xbp-88h]
  const MethodInfo *v123; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42EE400 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)text, (_DWORD)colorTag, isFoward);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13710/*"Talk/"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42EE400 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_116;
  v34 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v35 = (BattleServantConfConponent_o *)(Label + 112);
  v35->fields.tmp_pos.fields.x = tm;
  sub_B5D560(v35, (System_Int32_array **)colorTag, v28, v29, v30, v31, v32, v33);
  if ( !text )
    goto LABEL_116;
  p_dispPosition = (float32x2_t *)&this->fields.dispPosition;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_74;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v39 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v27 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v39 )
        goto LABEL_116;
      v40 = System_String__Split(v39, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v34, 1, 0, 0, v41);
      if ( !v40 )
        goto LABEL_116;
      max_length = v40->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v46 = v40->m_Items[0];
        p_fields = (__int64 *)&v34->fields;
        p_ruby = (__int64 *)&v34->fields.ruby;
        v49 = &this->fields.dispPosition;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v34,
            &v34->fields.main,
            &v34->fields.ruby,
            v49,
            fontSize,
            maxFontSize,
            verticalAlign,
            v46,
            this->fields.fontType,
            v122);
        else
          ScriptMessageLabel__UpdateRuby(
            v34,
            &v34->fields.main,
            &v34->fields.ruby,
            v49,
            fontSize,
            maxFontSize,
            verticalAlign,
            v46,
            v40->m_Items[1],
            this->fields.fontType,
            0,
            v123);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_116;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_116;
          v83 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_77:
          UILabel__set_text((UILabel_o *)Label, v83, 0LL);
        }
LABEL_78:
        if ( !isFoward )
          goto LABEL_82;
        goto LABEL_79;
      }
    }
LABEL_117:
    v120 = sub_B5D6C8(Label);
    sub_B5D668(v120, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v50 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v27 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    *(_WORD *)(Label + 32) = 32;
    if ( !v50 )
      goto LABEL_116;
    Label = (__int64)System_String__Split(v50, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_116;
    v52 = *(_DWORD *)(Label + 24);
    v53 = Label;
    if ( v52 <= 1 )
    {
      if ( !v52 )
        goto LABEL_117;
      v105 = *(System_String_o **)(Label + 32);
      Label = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_116;
      v27 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      *(_WORD *)(Label + 32) = 58;
      if ( !v105 )
        goto LABEL_116;
      Label = (__int64)System_String__Split(v105, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_116;
      v106 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_116;
      v108 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v110 = this->fields.currentMessageWindow;
        if ( !v110 )
          goto LABEL_116;
        v108 = System_String__Concat_44577788(v108, v110->fields.imageSuffix, 0LL);
      }
      if ( *(int *)(v106 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v34, 0, 1, 0, v109);
        ScriptMessageLabel__UpdateImage(
          v34,
          &v34->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v108,
          this->fields.horizontalAlign,
          v115);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v34, 1, 1, 0, v109);
        if ( *(_DWORD *)(v106 + 24) <= 1u )
          goto LABEL_117;
        ScriptMessageLabel__UpdateImageRuby(
          v34,
          &v34->fields.image,
          &v34->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v108,
          *(System_String_o **)(v106 + 40),
          0LL,
          this->fields.horizontalAlign,
          v122);
      }
      goto LABEL_109;
    }
    ScriptMessageCommonManager__PreProcLabel(this, v34, 0, 1, 0, v51);
    if ( *(_DWORD *)(v53 + 24) < 2u )
      goto LABEL_117;
    v54 = *(System_String_o **)(v53 + 32);
    v55 = System_Single__Parse(*(System_String_o **)(v53 + 40), 0LL);
    v56 = this->fields.currentMessageWindow;
    if ( !v56 )
      goto LABEL_116;
    v57 = v55;
    Label = System_String__IsNullOrEmpty(v56->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v58 = this->fields.currentMessageWindow;
      if ( !v58 )
        goto LABEL_116;
      Label = (__int64)System_String__Concat_44577788(v54, v58->fields.imageSuffix, 0LL);
      v54 = (System_String_o *)Label;
    }
    v59 = *(_DWORD *)(v53 + 24);
    if ( v59 == 2 )
    {
      v60 = this->fields.fontSize;
      horizontalAlign = this->fields.horizontalAlign;
      zero = UnityEngine_Vector2__get_zero(0LL);
      v64 = v34;
      p_image = &v34->fields.image;
      v66 = &this->fields.dispPosition;
      v67 = v60;
      v68 = v57;
      v69 = v54;
      y = zero.fields.y;
      x = zero.fields.x;
      v72 = horizontalAlign;
    }
    else
    {
      if ( v59 > 3 )
      {
LABEL_109:
        if ( tm < 0.0 )
          goto LABEL_78;
        Label = (__int64)v34->fields.image;
        if ( !Label )
          goto LABEL_116;
        goto LABEL_111;
      }
      if ( (unsigned int)v59 <= 2 )
        goto LABEL_117;
      v111 = *(System_String_o **)(v53 + 48);
      Label = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_116;
      v27 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      *(_WORD *)(Label + 32) = 44;
      if ( !v111 )
        goto LABEL_116;
      Label = (__int64)System_String__Split(v111, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_116;
      v112 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_117;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v112 + 24) <= 1u )
        goto LABEL_117;
      v113 = Label;
      v114 = System_Int32__Parse(*(System_String_o **)(v112 + 40), 0LL);
      v67 = this->fields.fontSize;
      v72 = this->fields.horizontalAlign;
      p_image = &v34->fields.image;
      v66 = &this->fields.dispPosition;
      x = (float)v113;
      y = (float)v114;
      v64 = v34;
      v68 = v57;
      v69 = v54;
    }
    ScriptMessageLabel__UpdateImage_34902836(v64, p_image, v66, v67, v68, v69, *(UnityEngine_Vector2_o *)&x, v72, v62);
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v73 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_116;
    v27 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    *(_WORD *)(Label + 32) = 32;
    if ( !v73 )
      goto LABEL_116;
    Label = (__int64)System_String__Split(v73, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_116;
    v74 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_117;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
    v75 = this->fields.currentMessageWindow;
    if ( *(int *)(v74 + 24) >= 2 )
      v76 = (System_String_o **)(v74 + 40);
    else
      v76 = (System_String_o **)&StringLiteral_20484/*"line"*/;
    if ( !v75 )
      goto LABEL_116;
    v77 = Label;
    v78 = *v76;
    Label = System_String__IsNullOrEmpty(v75->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v80 = this->fields.currentMessageWindow;
      if ( !v80 )
        goto LABEL_116;
      v78 = System_String__Concat_44577788(v78, v80->fields.imageSuffix, 0LL);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v34, 0, 1, 0, v79);
    v81 = (__int64 *)&v34->fields.image;
    ScriptMessageLabel__UpdateLine(
      v34,
      &v34->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v77,
      v78,
      v82);
    if ( tm < 0.0 )
      goto LABEL_78;
    Label = *v81;
    if ( !*v81 )
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
    ScriptMessageCommonManager__PreProcLabel(this, v34, 0, 0, 0, v38);
    v103 = (__int64 *)&v34->fields;
    ScriptMessageLabel__UpdateLabel(
      v34,
      &v34->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      (const MethodInfo *)rubyStr);
    if ( tm < 0.0 )
      goto LABEL_78;
    Label = *v103;
    if ( !*v103 )
      goto LABEL_116;
    v83 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_77;
  }
  v84 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_116;
  v27 = Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_117;
  *(_WORD *)(Label + 32) = 32;
  if ( !v84 )
    goto LABEL_116;
  v85 = System_String__Split(v84, (System_Char_array *)Label, 0LL);
  if ( v85 )
  {
    v86 = v85;
    if ( (int)v85->max_length >= 1 )
    {
      v87 = v85->m_Items[0];
      if ( v87 )
      {
        Label = System_String__op_Equality(v87, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v86->max_length )
            goto LABEL_117;
          Label = (__int64)v86->m_Items[0];
          if ( !Label )
            goto LABEL_116;
          v88 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
          v90 = System_String__Concat_44577788((System_String_o *)StringLiteral_13710/*"Talk/"*/, v88, 0LL);
          v91 = 0.0;
          v92 = 0.0;
          v93 = 0.0;
          if ( (int)v86->max_length >= 2 )
          {
            Label = (__int64)v86->m_Items[1];
            if ( !Label )
              goto LABEL_116;
            v94 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
            Label = sub_B5D5DC(char___TypeInfo, 1LL);
            if ( !Label )
              goto LABEL_116;
            v27 = Label;
            if ( !*(_DWORD *)(Label + 24) )
              goto LABEL_117;
            *(_WORD *)(Label + 32) = 44;
            if ( !v94 )
              goto LABEL_116;
            v95 = System_String__Split(v94, (System_Char_array *)Label, 0LL);
            v92 = 0.0;
            v93 = 0.0;
            if ( v95 )
            {
              v96 = v95;
              v92 = 0.0;
              v93 = 0.0;
              if ( (int)v95->max_length >= 2 )
              {
                Label = (__int64)v95->m_Items[0];
                if ( !Label )
                  goto LABEL_116;
                v97 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
                v98 = System_Single__Parse(v97, 0LL);
                if ( v96->max_length <= 1 )
                  goto LABEL_117;
                Label = (__int64)v96->m_Items[1];
                if ( !Label )
                  goto LABEL_116;
                v93 = v98;
                v99 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
                v92 = System_Single__Parse(v99, 0LL);
              }
            }
          }
          if ( (int)v86->max_length <= 2 )
            goto LABEL_113;
          Label = (__int64)v86->m_Items[2];
          if ( !Label )
            goto LABEL_116;
          v100 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
          v91 = System_Single__Parse(v100, 0LL);
          if ( (int)v86->max_length < 4 )
          {
LABEL_113:
            v102 = 0;
          }
          else
          {
            Label = (__int64)v86->m_Items[3];
            if ( !Label )
              goto LABEL_116;
            v101 = System_String__Trim_44565120((System_String_o *)Label, 0LL);
            v102 = System_Int32__Parse(v101, 0LL);
          }
          v116 = v92 + COERCE_FLOAT(HIDWORD(p_dispPosition->n64_u64[0]));
          v117 = vadd_f32((float32x2_t)p_dispPosition->n64_u64[0], (float32x2_t)1124073472LL).n64_u64[0];
          pos.fields.x = v93 + COERCE_FLOAT(p_dispPosition->n64_u64[0]);
          pos.fields.y = v116;
          p_dispPosition->n64_u64[0] = v117;
          ScriptMessageCommonManager__PreProcLabel(this, v34, 0, 0, 1, v89);
          ScriptMessageLabel__UpdateEffect(v34, v118, &pos, v90, v91, v102, v119);
          if ( !isFoward )
            goto LABEL_82;
LABEL_79:
          rubyText = v34->fields.rubyText;
          v34->fields.mainPosition.fields.x = v34->fields.mainPosition.fields.x - v34->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v34->fields.rubyPosition.fields.x = v34->fields.rubyPosition.fields.x - v34->fields.widthSize;
          p_dispPosition->n64_u64[0] = (unsigned __int64)dispPosition;
LABEL_82:
          Label = (__int64)this->fields.dispLabelList;
          if ( Label )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
            return;
          }
LABEL_116:
          sub_B5D69C(Label, v27);
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
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  void *talkNameManager; // x0
  UnityEngine_Object_o *currentMessageWindow; // x22
  UnityEngine_Object_o *defaultMessageWindow; // x23
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v19; // x2
  void *v20; // x21
  struct ScriptMessageWindow_o *v21; // x8
  UILabel_o *messageMainLabel; // x22
  UnityEngine_Transform_o *v23; // x23
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x22
  struct ScriptMessageWindow_o *v33; // x8
  UILabel_o *messageRubyLabel; // x22
  UnityEngine_Transform_o *v35; // x23
  const MethodInfo *v36; // x3
  struct UnityEngine_GameObject_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x22
  struct ScriptMessageWindow_o *v45; // x8
  UILabel_o *talkNameMainLabel; // x22
  UnityEngine_Transform_o *v47; // x23
  UILabel_o *v48; // x23
  const MethodInfo *v49; // x3
  struct ScriptLineMessage_o *v50; // x22
  struct ScriptMessageWindow_o *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *v58; // x22
  struct ScriptMessageWindow_o *v59; // x8
  UILabel_o *talkNameRubyLabel; // x22
  UnityEngine_Transform_o *v61; // x23
  UILabel_o *v62; // x23
  const MethodInfo *v63; // x3
  struct ScriptLineMessage_o *v64; // x22
  struct ScriptMessageWindow_o *v65; // x8
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  const MethodInfo *v85; // x6
  const MethodInfo *v86; // x1

  if ( (byte_42EE414 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___, (_DWORD)prefab, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_UILabel____68882824, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EE414 = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
                      (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_67;
  v20 = talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    v19);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)v20 + 15), 0LL, 0LL);
  v21 = this->fields.defaultMessageWindow;
  if ( !v21 )
    goto LABEL_67;
  messageMainLabel = v21->fields.messageMainLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    messageMainLabel = UnityEngine_Object__Instantiate_UILabel_(
                         messageMainLabel,
                         v23,
                         (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_UILabel____68882824);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageMainLabel,
      *((UILabel_o **)v20 + 15),
      messageMainLabel,
      v24);
  }
  if ( !messageMainLabel )
    goto LABEL_67;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
  this->fields.mainPrefab = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainPrefab,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (UnityEngine_Object_o *)*((_QWORD *)v20 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
  v33 = this->fields.defaultMessageWindow;
  if ( !v33 )
    goto LABEL_67;
  messageRubyLabel = v33->fields.messageRubyLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    messageRubyLabel = UnityEngine_Object__Instantiate_UILabel_(
                         messageRubyLabel,
                         v35,
                         (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_UILabel____68882824);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageRubyLabel,
      *((UILabel_o **)v20 + 16),
      messageRubyLabel,
      v36);
  }
  if ( !messageRubyLabel )
    goto LABEL_67;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageRubyLabel, 0LL);
  this->fields.rubyPrefab = v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (UnityEngine_Object_o *)*((_QWORD *)v20 + 17);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v45 = this->fields.defaultMessageWindow;
    if ( !v45 )
      goto LABEL_67;
    talkNameMainLabel = v45->fields.talkNameMainLabel;
    v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v48 = UnityEngine_Object__Instantiate_UILabel_(
            talkNameMainLabel,
            v47,
            (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_UILabel____68882824);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v48,
      *((UILabel_o **)v20 + 17),
      v48,
      v49);
    if ( !v48 )
      goto LABEL_67;
    v50 = this->fields.talkNameManager;
    talkNameManager = v48;
  }
  else
  {
    v51 = this->fields.defaultMessageWindow;
    if ( !v51 )
      goto LABEL_67;
    talkNameManager = v51->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_67;
    v50 = this->fields.talkNameManager;
  }
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v50 )
    goto LABEL_67;
  v50->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50->fields.mainPrefab,
    (System_Int32_array **)talkNameManager,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (UnityEngine_Object_o *)*((_QWORD *)v20 + 18);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) == 0 )
  {
    v65 = this->fields.defaultMessageWindow;
    if ( v65 )
    {
      talkNameManager = v65->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v64 = this->fields.talkNameManager;
        goto LABEL_64;
      }
    }
LABEL_67:
    sub_B5D69C(talkNameManager, v12);
  }
  v59 = this->fields.defaultMessageWindow;
  if ( !v59 )
    goto LABEL_67;
  talkNameRubyLabel = v59->fields.talkNameRubyLabel;
  v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v20, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v62 = UnityEngine_Object__Instantiate_UILabel_(
          talkNameRubyLabel,
          v61,
          (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_UILabel____68882824);
  ScriptMessageCommonManager__CopyFontEffects((ScriptMessageCommonManager_o *)v62, *((UILabel_o **)v20 + 18), v62, v63);
  if ( !v62 )
    goto LABEL_67;
  v64 = this->fields.talkNameManager;
  talkNameManager = v62;
LABEL_64:
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v64 )
    goto LABEL_67;
  v64->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v64->fields.rubyPrefab,
    (System_Int32_array **)talkNameManager,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_67;
  v78 = (System_Int32_array **)*((_QWORD *)v20 + 10);
  *((_QWORD *)talkNameManager + 6) = v78;
  sub_B5D560((BattleServantConfConponent_o *)((char *)talkNameManager + 48), v78, v72, v73, v74, v75, v76, v77);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
    (System_Int32_array **)v20,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v85);
  ScriptMessageCommonManager__ResetScroll(this, v86);
}


void __fastcall ScriptMessageCommonManager__ClearCount(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  this->fields.dispCountTimer = -1.0;
}


void __fastcall ScriptMessageCommonManager__ClearLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE3F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v14, v15, v16);
    byte_42EE3F9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v19.fields.current, v18);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B5D69C(dispLabelList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
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
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v4; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_Int32_array **v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ScriptMessageWindow_o *v20; // x8

  v4 = this;
  if ( (byte_42EE412 & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EE412 = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v6 = (System_Int32_array **)StringLiteral_1/*""*/;
  v4->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.talkName, v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  v4->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.talkNameOnly, v13, v14, v15, v16, v17, v18, v19);
  this = (ScriptMessageCommonManager_o *)v4->fields.talkNameManager;
  v4->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, 0LL), (v20 = v4->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v20->fields.talkNameIcon) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
    this,
    this->klass->vtable._9_CloseDown.methodPtr,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *messageScroll; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // d0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  float z; // s2
  int v10; // s1
  const MethodInfo *v11; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v14; // x8
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ScriptMessageWindow_o *v29; // x8

  if ( (byte_42EE410 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EE410 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  v7 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  *(_QWORD *)&this->fields.scrollPosition.fields.x = v7;
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
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.talkName, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v22, v23, v24, v25, v26, v27, v28);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, 0LL),
        (v29 = this->fields.currentMessageWindow) == 0LL)
    || (messageScroll = (UnityEngine_Transform_o *)v29->fields.talkNameIcon) == 0LL
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&messageScroll->klass[1]._1.this_arg.bits)(
          messageScroll,
          messageScroll->klass[1]._1.element_class,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(messageScroll, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__CloseDown(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  TweenPosition_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **windowDownCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EE40A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EE40A = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B5D69C(rootObject, isFast);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v25.fields.y = this->fields.windowClosePosY;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  v16 = TweenPosition__Begin(gameObject, windowCloseTime, v25, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v16 )
    {
      v16->fields.style = 0;
      windowDownCurve = (System_Int32_array **)this->fields.windowDownCurve;
      v16->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowDownCurve;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v16->fields.animationCurve,
        windowDownCurve,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      UITweener__PlayForward((UITweener_o *)v16, 0LL);
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
    sub_B5D69C(this, src);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v13; // x1
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v15; // x19
  const MethodInfo *v16; // x2
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0

  if ( (byte_42EE425 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EE425 = 1;
  }
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_12;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_srcLineSprite )
    goto LABEL_12;
  currentMessageWindow = this->fields.currentMessageWindow;
  v15 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !currentMessageWindow
    || (ScriptMessageWindow__AddChildMessageScroll(
          currentMessageWindow,
          (UnityEngine_Transform_o *)Component_srcLineSprite,
          v16),
        transform = UnityEngine_Component__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL),
        v21 = UnityEngine_Component__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL),
        !v21) )
  {
LABEL_12:
    sub_B5D69C(Component_srcLineSprite, v13);
  }
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  return (UILabel_o *)v15;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x20

  if ( (byte_42EE3F8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v20, v21, v22);
    byte_42EE3F8 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_30;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v23);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_30;
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v26, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_30:
    sub_B5D69C(labelStock, v23);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v27, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *imageStock; // x0
  UnityEngine_Component_o *v18; // x19
  struct UnityEngine_GameObject_o *imagePrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0

  if ( (byte_42EE3FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v14, v15, v16);
    byte_42EE3FD = 1;
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
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 imageStock,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v18 = (UnityEngine_Component_o *)imageStock;
        imageStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)imageStock,
                                                   0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)imageStock, v21);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B5D69C(imageStock, method);
  }
  imageStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)imageStock,
                                             (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v18 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_17;
LABEL_14:
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  return (UISprite_o *)v18;
}


ScriptMessageLabel_o *__fastcall ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v12; // x19
  const MethodInfo *v13; // x1

  if ( (byte_42EE3FE & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v8, v9, v10);
    byte_42EE3FE = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_B5D69C(0LL, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v12 = (ScriptMessageLabel_o *)sub_B5D694(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v12, v13);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchMainLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *mainStock; // x0
  UnityEngine_Component_o *v18; // x19
  struct UnityEngine_GameObject_o *mainPrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0

  if ( (byte_42EE3FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v14, v15, v16);
    byte_42EE3FB = 1;
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
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                mainStock,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v18 = (UnityEngine_Component_o *)mainStock;
        mainStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mainStock,
                                                  0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)mainStock, v21);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B5D69C(mainStock, method);
  }
  mainStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)mainStock,
                                            (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_17;
  v18 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0LL);
LABEL_14:
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  return (UILabel_o *)v18;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptMessageCommonManager__FetchRubyLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *rubyStock; // x0
  UnityEngine_Component_o *v18; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  ScriptMessageWindow_o *currentMessageWindow; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *transform; // x21
  int v23; // s0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0

  if ( (byte_42EE3FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v14, v15, v16);
    byte_42EE3FC = 1;
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
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                rubyStock,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v18 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)rubyStock,
                                                  0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)rubyStock, v21);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B5D69C(rubyStock, method);
  }
  rubyStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)rubyStock,
                                            (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v18 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_17;
LABEL_14:
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26 )
    goto LABEL_17;
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  UILabel__set_fontSize((UILabel_o *)v18, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *rootObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0

  if ( (byte_42EE408 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE408 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
  {
    v10 = this->fields.rootObject;
    if ( !v10 )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(v10, 0LL);
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
        v10 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
        if ( !v10 )
          goto LABEL_39;
        v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
        {
          v10 = this->fields.rootObject;
          if ( v10 )
          {
            v10 = UnityEngine_GameObject__get_gameObject(v10, 0LL);
            if ( v10 )
            {
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v10,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
              if ( ((unsigned __int8)v10 & 1) != 0 )
              {
                if ( !Component_srcLineSprite )
                  goto LABEL_39;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
              }
              v10 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
              if ( v10 )
              {
                v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
                if ( v10 )
                {
                  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
                  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
                    v10 = this->fields.rootObject;
                    if ( v10 )
                    {
                      v10 = UnityEngine_GameObject__get_gameObject(v10, 0LL);
                      if ( v10 )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf(v10, 0LL) )
                          return;
                        v10 = this->fields.rootObject;
                        if ( v10 )
                        {
                          v10 = UnityEngine_GameObject__get_gameObject(v10, 0LL);
                          if ( v10 )
                          {
                            UnityEngine_GameObject__SetActive(v10, 1, 0LL);
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
          sub_B5D69C(v10, v9);
        }
      }
    }
  }
}


int32_t __fastcall ScriptMessageCommonManager__GetAllDispLength(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 v12; // x22
  int32_t v13; // w20
  int size; // w8
  ScriptMessageLabel_o *v15; // x24
  UnityEngine_Object_o *effect; // x21

  v4 = this;
  if ( (byte_42EE41A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v5, v6, v7);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EE41A = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_18:
    sub_B5D69C(this, method);
  v12 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)v12 >= size )
      return v13;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = dispLabelList->fields._items->m_Items[v12];
    if ( v15 )
    {
      if ( v15->fields.dispLength >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(v15->fields.mainText, 0LL) )
          v13 += v15->fields.dispLength;
        effect = (UnityEngine_Object_o *)v15->fields.effect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          v13 += v15->fields.dispLength;
      }
      dispLabelList = v4->fields.dispLabelList;
      ++v12;
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  float defaultTextOnlyLineHeight; // s0
  double v22; // d0
  signed int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int v25; // w28
  int defaultFontSize; // w24
  il2cpp_array_size_t v27; // w27
  int32_t v28; // w23
  float v29; // s9
  int v30; // w26
  float v31; // s8
  float v32; // s0
  float v33; // s1
  double v34; // d2
  float v35; // s0
  bool v36; // zf
  double v37; // d1
  double v38; // d0
  Il2CppClass **v39; // x8
  System_String_o *v40; // x25
  const MethodInfo *v41; // x2
  System_String_o *v42; // x24
  int32_t v43; // w25
  const MethodInfo *v44; // x1
  System_String_o *v45; // x25
  int32_t VerticalAlignFromString; // w25
  int32_t v47; // w21
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w20
  float VerticalAlignOffset; // s0
  int32_t v52; // w8
  __int64 v53; // x0
  int32_t vAlign; // [xsp+4h] [xbp-7Ch]
  int32_t fontSize; // [xsp+8h] [xbp-78h]
  int v56; // [xsp+Ch] [xbp-74h]

  v5 = this;
  if ( (byte_42EE411 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)dataList, (_DWORD)method, v3);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_18878/*"f"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_24158/*"・"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21954/*"r"*/, v15, v16, v17);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&StringLiteral_20421/*"l"*/, v18, v19, v20);
    byte_42EE411 = 1;
  }
  defaultTextOnlyLineHeight = v5->fields.defaultTextOnlyLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v22 = -defaultTextOnlyLineHeight;
  else
    v22 = defaultTextOnlyLineHeight;
  if ( !dataList )
    sub_B5D69C(this, dataList);
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v5->fields.defaultBetweenLineHeight;
  v25 = (int)v22;
  fontSize = (int)v22;
  if ( max_length >= 1 )
  {
    vAlign = 0;
    v56 = 1;
    defaultFontSize = v5->fields.defaultFontSize;
    v27 = 0;
    v28 = 0;
    v29 = 0.0;
    v30 = -1;
    v31 = v5->fields.defaultBetweenLineHeight;
    while ( v27 < max_length )
    {
      v39 = &dataList->obj.klass + (int)v27;
      v40 = (System_String_o *)v39[4];
      if ( v40 )
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 (System_String_o *)v39[4],
                                                 (System_String_o *)StringLiteral_18878/*"f"*/,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v27 + 2 >= dataList->max_length )
            break;
          v42 = dataList->m_Items[v27 + 2];
          v43 = v5->fields.defaultFontSize;
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v42, v43, v41);
          v27 += 4;
          if ( v25 < (int)this )
            v25 = (int)this;
          if ( v27 >= dataList->max_length )
            break;
          defaultFontSize = (int)this;
          v45 = dataList->m_Items[v27];
          if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
          }
          VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v45, v44);
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)System_Math__Max_45149472(VerticalAlignFromString, v28, 0LL);
          v28 = (int)this;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v40,
                                                   (System_String_o *)StringLiteral_20421/*"l"*/,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v27 += 2;
            if ( v27 >= dataList->max_length )
              break;
            v32 = System_Single__Parse(dataList->m_Items[v27], 0LL);
            if ( v32 >= 0.0 )
              v31 = v32;
            else
              v31 = v5->fields.defaultBetweenLineHeight;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v40,
                                                     (System_String_o *)StringLiteral_21954/*"r"*/,
                                                     0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v33 = v5->fields.defaultTextOnlyLineHeight;
              defaultBetweenLineHeight = v31;
              v34 = v33;
              v35 = v31 + (float)(v5->fields.rubyLineHeight + (float)v25);
              v31 = v5->fields.defaultBetweenLineHeight;
              defaultFontSize = v5->fields.defaultFontSize;
              v36 = v33 == INFINITY;
              v37 = -v33;
              v29 = v29 + v35;
              if ( v36 )
                v38 = v37;
              else
                v38 = v34;
              vAlign = v28;
              fontSize = v25;
              v25 = (int)v38;
              v28 = 0;
              ++v56;
            }
            else
            {
              this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                       v40,
                                                       (System_String_o *)StringLiteral_24158/*"・"*/,
                                                       0LL);
              if ( ((v30 < defaultFontSize) & (v56 == 1) & (unsigned __int8)this) != 0 )
                v30 = defaultFontSize;
            }
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_42;
    }
    v53 = sub_B5D6C8(this);
    sub_B5D668(v53, 0LL);
  }
  vAlign = 0;
  v30 = -1;
  v29 = 0.0;
LABEL_42:
  if ( v30 < 1 )
  {
    v47 = fontSize;
  }
  else
  {
    v47 = fontSize;
    result = (float)UnityEngine_Mathf__CeilToInt((float)v30 * 0.37, 0LL) - v5->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v5->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v29 = v29 - (float)(result + result);
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
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v47, maxFontSize, v3);
  v52 = v5->fields.messageAlign;
  result = (float)(v5->fields.dispSize.fields.y - (float)((float)(v29 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v5->fields.rubyLineHeight + 4.0);
  if ( v52 == 1 )
    return result * 0.5;
  if ( v52 != 2 )
    return 0.0;
  return result;
}


int32_t __fastcall ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v11; // x6

  if ( (byte_42EE403 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9154/*"MessageShake/LogMark/BackLogButton"*/, v5, v6, v7);
    byte_42EE403 = 1;
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
        ScriptMessageCommonManager__ForceOpen(this, v9),
        (rootPanel = this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(rootPanel, 1, 0LL),
        rootPanel = this->fields.messageBase,
        this->fields.messageAlign = 0,
        !rootPanel) )
  {
    sub_B5D69C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_9154/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
  return ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v11);
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
    sub_B5D69C(0LL, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *rootPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE406 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE406 = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_15;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)rootPanel,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B5D69C(rootPanel, method);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *rootObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EE424 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE424 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
    return 0;
  v8 = this->fields.rootObject;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_GameObject__get_activeSelf(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE407 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE407 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_16;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B5D69C(rootObject, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectExist(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x20
  unsigned __int64 i; // x21
  ScriptMessageLabel_o *v13; // x23
  UnityEngine_Object_o *effect; // x20
  UnityEngine_Object_o *frontEffect; // x20

  v4 = this;
  if ( (byte_42EE423 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v5, v6, v7);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EE423 = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( dispLabelList )
  {
    for ( i = 0LL; (__int64)i < dispLabelList->fields._size; ++i )
    {
      if ( i >= (unsigned int)dispLabelList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v13 = dispLabelList->fields._items->m_Items[i];
      if ( v13 )
      {
        effect = (UnityEngine_Object_o *)v13->fields.effect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          frontEffect = (UnityEngine_Object_o *)v13->fields.frontEffect;
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
      dispLabelList = v4->fields.dispLabelList;
      if ( !dispLabelList )
        sub_B5D69C(this, method);
    }
  }
  return 0;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsBusy(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v16; // x22
  ScriptMessageLabel_o *v17; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v20; // x21

  v5 = this;
  if ( (byte_42EE421 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v9, v10, v11);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EE421 = 1;
  }
  dispLabelList = v5->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B5D69C(this, effectName);
  v16 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v16 >= dispLabelList->fields._size )
      return 0;
    if ( v16 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = dispLabelList->fields._items->m_Items[v16];
    if ( v17 )
    {
      effect = (UnityEngine_Object_o *)v17->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v17->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v17->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsBusy_18146048(v20, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v5->fields.dispLabelList;
    ++v16;
    if ( !dispLabelList )
      goto LABEL_22;
  }
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsStart(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  unsigned __int64 v16; // x22
  ScriptMessageLabel_o *v17; // x25
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *frontEffect; // x21
  UnityEngine_GameObject_o *v20; // x21

  v5 = this;
  if ( (byte_42EE422 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v9, v10, v11);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EE422 = 1;
  }
  dispLabelList = v5->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B5D69C(this, effectName);
  v16 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v16 >= dispLabelList->fields._size )
      return 0;
    if ( v16 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = dispLabelList->fields._items->m_Items[v16];
    if ( v17 )
    {
      effect = (UnityEngine_Object_o *)v17->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v17->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v17->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsStart_18147048(v20, effectName, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
    }
    dispLabelList = v5->fields.dispLabelList;
    ++v16;
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x22
  unsigned __int64 v17; // x23
  char v18; // w24
  bool v19; // w21
  ScriptMessageLabel_o *v20; // x27
  UnityEngine_Object_o *effect; // x22
  UnityEngine_Object_o *frontEffect; // x22
  UnityEngine_GameObject_o *v23; // x22

  v6 = this;
  if ( (byte_42EE420 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, isSkip, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v10, v11, v12);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EE420 = 1;
  }
  dispLabelList = v6->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B5D69C(this, effectName);
  v17 = 0LL;
  v18 = 1;
  v19 = isSkip;
  while ( (__int64)v17 < dispLabelList->fields._size )
  {
    if ( v17 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v20 = dispLabelList->fields._items->m_Items[v17];
    if ( v20 )
    {
      effect = (UnityEngine_Object_o *)v20->fields.effect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(effect, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        frontEffect = (UnityEngine_Object_o *)v20->fields.frontEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(frontEffect, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v23 = v20->fields.frontEffect;
          if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonEffectManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          }
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__Stop_18154412(v23, effectName, v19, 0, 0LL);
          v18 &= (unsigned __int8)this;
        }
      }
    }
    dispLabelList = v6->fields.dispLabelList;
    ++v17;
    if ( !dispLabelList )
      goto LABEL_22;
  }
  return v18 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  __int64 v3; // x3
  long double v4; // q8
  bool v5; // w20
  ScriptMessageCommonManager_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x21
  __int64 dispIndex; // x25
  __int64 v21; // x27
  int size; // w8
  __int64 v23; // x24
  UnityEngine_Object_o *v24; // x21
  float v25; // s0
  float dispCountTimer; // s0
  float v27; // s1
  float messageSpeed; // s2
  float v29; // s1
  float v30; // s0
  double v31; // d0
  int32_t v32; // w23
  UnityEngine_Object_o *v33; // x21
  UILabel_o *v34; // x21
  UILabel_o *v35; // x21
  __int64 v36; // x8
  float v37; // s0
  int v38; // w8
  UnityEngine_Object_o *v40; // x20
  const MethodInfo *v41; // x2
  UILabel_o *v42; // x20
  System_String_o *v43; // x21
  System_String_o *v44; // x22
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  UILabel_o *v47; // x20
  System_String_o *v48; // x22
  float v49; // s9
  float v50; // s8
  int32_t v51; // w23
  float v52; // s9
  double v53; // d8
  const MethodInfo *v54; // x2
  double v55; // d0
  double v56; // d0
  double v57; // d1
  double v58; // d1
  System_String_o *v59; // x0
  double iptr; // [xsp+18h] [xbp-48h] BYREF

  v5 = isMessageDelta;
  v6 = this;
  if ( (byte_42EE41B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__,
      isMessageDelta,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v7, v8, v9);
    sub_B5D5C4(&System_Math_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v16, v17, v18);
    byte_42EE41B = 1;
  }
  if ( !v6->fields.isBusy )
  {
    v6->fields.dispCountTimer = -1.0;
    return v6->fields.isBusy;
  }
  dispLabelList = v6->fields.dispLabelList;
  v6->fields.isBusy = 0;
  if ( !dispLabelList )
    goto LABEL_86;
  dispIndex = v6->fields.dispIndex;
  v21 = 8 * dispIndex + 32;
  LODWORD(v4) = 1.0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)dispIndex >= size )
      return v6->fields.isBusy;
    if ( size <= (unsigned int)dispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v23 = *(__int64 *)((char *)&dispLabelList->fields._items->obj.klass + v21);
    if ( !v23 )
      goto LABEL_86;
    v24 = *(UnityEngine_Object_o **)(v23 + 48);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v25 = *(float *)(v23 + 172);
    if ( v25 >= 0.0 )
    {
      if ( v5 )
      {
        v25 = v25 - v6->fields.defaultStepTime;
        *(float *)(v23 + 172) = v25;
      }
      if ( v25 >= 0.0 )
      {
        v6->fields.isBusy = 1;
        return v6->fields.isBusy;
      }
      v5 = 0;
      *(_DWORD *)(v23 + 172) = 0;
    }
LABEL_48:
    dispLabelList = v6->fields.dispLabelList;
    LODWORD(dispIndex) = dispIndex + 1;
    v21 += 8LL;
    v6->fields.dispIndex = dispIndex;
    if ( !dispLabelList )
      goto LABEL_86;
  }
  if ( *(int *)(v23 + 168) < 1 )
  {
LABEL_32:
    v33 = *(UnityEngine_Object_o **)(v23 + 16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v34 = *(UILabel_o **)(v23 + 16);
      this = (ScriptMessageCommonManager_o *)System_String__Concat_44577788(
                                               *(System_String_o **)(v23 + 112),
                                               *(System_String_o **)(v23 + 120),
                                               0LL);
      if ( !v34 )
        goto LABEL_86;
      UILabel__set_text(v34, (System_String_o *)this, 0LL);
      *(_QWORD *)&isMessageDelta = *(_QWORD *)(v23 + 128);
      if ( !isMessageDelta )
        goto LABEL_86;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v35 = *(UILabel_o **)(v23 + 24);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44577788(
                                                 *(System_String_o **)(v23 + 112),
                                                 (System_String_o *)isMessageDelta,
                                                 0LL);
        if ( !v35 )
          goto LABEL_86;
        UILabel__set_text(v35, (System_String_o *)this, 0LL);
      }
    }
    else
    {
      v36 = *(_QWORD *)(v23 + 136);
      if ( !v36 )
        goto LABEL_86;
      if ( *(int *)(v36 + 16) >= 1 )
      {
        this = *(ScriptMessageCommonManager_o **)(v23 + 32);
        if ( !this )
          goto LABEL_86;
        this = (ScriptMessageCommonManager_o *)((__int64 (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, long double))this->klass->vtable._8_IsEnableCloseDown.method)(
                                                 this,
                                                 this->klass->vtable._9_CloseDown.methodPtr,
                                                 v4);
      }
    }
    if ( v6->fields.isFastMessageRequest || (v37 = *(float *)(v23 + 164), v37 == 0.0) )
    {
      v6->fields.dispCountTimer = -1.0;
    }
    else
    {
      v38 = *(_DWORD *)(v23 + 168);
      if ( v38 >= 1 )
        v6->fields.dispCountTimer = v6->fields.dispCountTimer - (float)(v37 * (float)v38);
    }
    goto LABEL_48;
  }
  dispCountTimer = v6->fields.dispCountTimer;
  v27 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_24;
  messageSpeed = v6->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_24;
  if ( v5 )
  {
    v5 = 0;
    v27 = dispCountTimer + (float)(messageSpeed * v6->fields.defaultStepTime);
LABEL_24:
    dispCountTimer = v27;
    v6->fields.dispCountTimer = v27;
    goto LABEL_25;
  }
  v5 = 0;
LABEL_25:
  if ( v6->fields.isFastMessageRequest )
    goto LABEL_32;
  v29 = *(float *)(v23 + 164);
  if ( v29 == 0.0 || v6->fields.messageSpeed == 0.0 )
    goto LABEL_32;
  v30 = dispCountTimer / v29;
  v31 = v30 == INFINITY ? -INFINITY : v30;
  v32 = (int)v31;
  if ( *(_DWORD *)(v23 + 168) <= (int)v31 )
    goto LABEL_32;
  v6->fields.isBusy = 1;
  v40 = *(UnityEngine_Object_o **)(v23 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    v42 = *(UILabel_o **)(v23 + 16);
    v43 = *(System_String_o **)(v23 + 112);
    v44 = *(System_String_o **)(v23 + 120);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v45 = ScriptMessageLabel__SubstrByDisp(v44, v32, v41);
    this = (ScriptMessageCommonManager_o *)System_String__Concat_44577788(v43, v45, 0LL);
    if ( v42 )
    {
      UILabel__set_text(v42, (System_String_o *)this, 0LL);
      v46 = *(System_String_o **)(v23 + 128);
      if ( v46 )
      {
        if ( v46->fields.m_stringLength < 1 )
          return v6->fields.isBusy;
        v47 = *(UILabel_o **)(v23 + 24);
        v48 = *(System_String_o **)(v23 + 112);
        v49 = (float)*(int *)(v23 + 168);
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v50 = (float)v32 / v49;
        v51 = ScriptMessageLabel__StrlenByDisp(v46, (const MethodInfo *)isMessageDelta);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v52 = v50 * (float)v51;
        v53 = v52;
        v55 = modf(v52, &iptr);
        if ( v52 >= 0.0 )
        {
          if ( v55 == 0.5 )
          {
            v56 = iptr;
            v57 = 1.0;
            goto LABEL_77;
          }
          v56 = floor(v53 + 0.5);
        }
        else if ( v55 == -0.5 )
        {
          v56 = iptr;
          v57 = -1.0;
LABEL_77:
          v58 = v56 + v57;
          if ( ((__int64)v56 & 1) != 0 )
            v56 = v58;
        }
        else
        {
          v56 = ceil(v53 + -0.5);
        }
        if ( v56 == INFINITY )
          v56 = -v56;
        v59 = ScriptMessageLabel__SubstrByDisp(v46, (int)v56, v54);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44577788(v48, v59, 0LL);
        if ( v47 )
        {
          UILabel__set_text(v47, (System_String_o *)this, 0LL);
          return v6->fields.isBusy;
        }
      }
    }
LABEL_86:
    sub_B5D69C(this, isMessageDelta);
  }
  return v6->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_42EE418 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10090/*"OnDelayWaitNextTouch"*/, (_DWORD)method, v2, v3);
    byte_42EE418 = 1;
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
          sub_B5D69C(0LL, v5);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10090/*"OnDelayWaitNextTouch"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  float v10; // s8
  float windowClosePosY; // s9

  if ( (byte_42EE40B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE40B = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_14;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_14;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
        v10 = *(float *)&Component_srcLineSprite[1].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v10 != windowClosePosY, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(rootObject, method);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_42EE419 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10090/*"OnDelayWaitNextTouch"*/, (_DWORD)method, v2, v3);
    byte_42EE419 = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_B5D69C(0LL, v5);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10090/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_42EE417 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10090/*"OnDelayWaitNextTouch"*/, (_DWORD)method, v2, v3);
    byte_42EE417 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_B5D69C(0LL, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10090/*"OnDelayWaitNextTouch"*/,
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *messageShake; // x20
  float v6; // s8
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE41F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10160/*"OnShake"*/, (_DWORD)method, v2, v3);
    byte_42EE41F = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v6 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v9 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( messageShake )
    {
      v14.fields.y = v9;
      v14.fields.z = 0.0;
      v14.fields.x = v6;
      UnityEngine_Transform__set_localPosition(messageShake, v14, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10160/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(v7, v8);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10160/*"OnShake"*/,
    0LL);
  v10 = this->fields.messageShake;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v10 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__OpenUp(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  TweenPosition_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **windowUpCurve; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EE409 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EE409 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_30;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_30;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      v25.fields.y = this->fields.windowNormalPosY;
      v25.fields.x = 0.0;
      v25.fields.z = 0.0;
      v16 = TweenPosition__Begin(gameObject, windowOpenTime, v25, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_30;
        v16->fields.style = 0;
        windowUpCurve = (System_Int32_array **)this->fields.windowUpCurve;
        v16->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)windowUpCurve;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v16->fields.animationCurve,
          windowUpCurve,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        UITweener__PlayForward((UITweener_o *)v16, 0LL);
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
      sub_B5D69C(rootObject, isFast);
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

  if ( (byte_42EE41C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, isFast, (_DWORD)method, v3);
    byte_42EE41C = 1;
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
  sub_B5D560(
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  UnityEngine_GameObject_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ScriptMessageWindow_o *v56; // x22
  const MethodInfo *v57; // x2
  UnityEngine_GameObject_o *v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *imagePrefab; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  ScriptMessageWindow_o *currentMessageWindow; // x22
  const MethodInfo *v86; // x2
  UnityEngine_Transform_o *transform; // x22
  int v88; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *rubyPrefab; // x21
  struct UILabel_o *Component_srcLineSprite; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  ScriptMessageWindow_o *v99; // x21
  const MethodInfo *v100; // x2
  UnityEngine_Transform_o *v101; // x21
  int v102; // s0
  UnityEngine_Transform_o *v105; // x21
  int v106; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *mainPrefab; // x22
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  ScriptMessageWindow_o *v116; // x22
  const MethodInfo *v117; // x2
  UnityEngine_Transform_o *v118; // x22
  int v119; // s0
  UnityEngine_Transform_o *v122; // x22
  int v123; // s0

  v10 = this;
  if ( (byte_42EE3FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)label, hasRuby, hasImage);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_5888/*"Effect Parent"*/, v35, v36, v37);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&StringLiteral_5886/*"Effect Child"*/, v38, v39, v40);
    byte_42EE3FA = 1;
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
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_67;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !label )
        goto LABEL_67;
      label->fields.image = (struct UISprite_o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      this = (ScriptMessageCommonManager_o *)label->fields.image;
      if ( !this )
        goto LABEL_67;
      currentMessageWindow = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !currentMessageWindow )
        goto LABEL_67;
      ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)this, v86);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( !label )
        goto LABEL_67;
      label->fields.image = (struct UISprite_o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_67;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v88 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_67;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v88, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_67;
LABEL_64:
    v122 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v123 = UnityEngine_Vector3__get_one(0LL);
    if ( !v122 )
      goto LABEL_67;
    UnityEngine_Transform__set_localScale(v122, *(UnityEngine_Vector3_o *)&v123, 0LL);
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
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_67;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_67;
      label->fields.main = (struct UILabel_o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_67;
      v116 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v116 )
        goto LABEL_67;
      ScriptMessageWindow__AddChildMessageScroll(v116, (UnityEngine_Transform_o *)this, v117);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_67;
      label->fields.main = (struct UILabel_o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_67;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_67;
    v118 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v119 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v118 )
      goto LABEL_67;
    UnityEngine_Transform__set_localPosition(v118, *(UnityEngine_Vector3_o *)&v119, 0LL);
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
    v49 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v49, (System_String_o *)StringLiteral_5888/*"Effect Parent"*/, 0LL);
    *p_effect = (ScriptMessageCommonManager_o *)v49;
    sub_B5D560(
      (BattleServantConfConponent_o *)&label->fields.effect,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    this = *p_effect;
    if ( !*p_effect )
      goto LABEL_67;
    v56 = v10->fields.currentMessageWindow;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v56 )
      goto LABEL_67;
    ScriptMessageWindow__AddChildMessageScroll(v56, (UnityEngine_Transform_o *)this, v57);
    v58 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v58, (System_String_o *)StringLiteral_5886/*"Effect Child"*/, 0LL);
    label->fields.frontEffect = v58;
    sub_B5D560(
      (BattleServantConfConponent_o *)&label->fields.frontEffect,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
    if ( !this )
      goto LABEL_67;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    UnityEngine_Transform__SetParent_35741212((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0LL);
  }
  if ( !hasRuby )
    return;
LABEL_20:
  this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
  if ( !this )
    goto LABEL_67;
  if ( SLODWORD(this->fields.rootPanel) >= 1 )
  {
    v65 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
            (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    label->fields.ruby = (struct UILabel_o *)v65;
    sub_B5D560(
      (BattleServantConfConponent_o *)&label->fields.ruby,
      (System_Int32_array **)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
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
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (Component_srcLineSprite = (struct UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___),
        label->fields.ruby = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&label->fields.ruby,
          (System_Int32_array **)Component_srcLineSprite,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98),
        (this = (ScriptMessageCommonManager_o *)label->fields.ruby) == 0LL)
    || (v99 = v10->fields.currentMessageWindow,
        this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL),
        !v99) )
  {
LABEL_67:
    sub_B5D69C(this, label);
  }
  ScriptMessageWindow__AddChildMessageScroll(v99, (UnityEngine_Transform_o *)this, v100);
LABEL_47:
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  v101 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v102 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v101 )
    goto LABEL_67;
  UnityEngine_Transform__set_localPosition(v101, *(UnityEngine_Vector3_o *)&v102, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  v105 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v106 = UnityEngine_Vector3__get_one(0LL);
  if ( !v105 )
    goto LABEL_67;
  UnityEngine_Transform__set_localScale(v105, *(UnityEngine_Vector3_o *)&v106, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_67;
  UILabel__set_fontSize((UILabel_o *)this, v10->fields.rubyFontSize, 0LL);
}


void __fastcall ScriptMessageCommonManager__QuitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EE404 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9154/*"MessageShake/LogMark/BackLogButton"*/, v5, v6, v7);
    byte_42EE404 = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))rootPanel->klass[1]._1.gc_desc)(
          rootPanel,
          rootPanel->klass[1]._1.name,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v9),
        (rootPanel = this->fields.talkNameManager) == 0LL)
    || (ScriptLineMessage__DeleteLabels(rootPanel, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0LL) )
  {
    sub_B5D69C(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_21329016(transform, (System_String_o *)StringLiteral_9154/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
}


void __fastcall ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptMessageCommonManager_o **v5; // x20
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
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  v5 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_42EE3FF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Push__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Push__, v12, v13, v14);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EE3FF = 1;
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
    this = v5[49];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_fields,
      (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&label->fields, 0LL, v20, v21, v22, v23, v24, v25);
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
    this = v5[50];
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_ruby,
      (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&label->fields.ruby, 0LL, v28, v29, v30, v31, v32, v33);
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
      this = v5[51];
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)*p_image,
          (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&label->fields.image, 0LL, v36, v37, v38, v39, v40, v41);
        goto LABEL_26;
      }
    }
LABEL_28:
    sub_B5D69C(this, label);
  }
LABEL_26:
  ScriptMessageLabel__Release(label, (const MethodInfo *)label);
  this = v5[52];
  if ( !this )
    goto LABEL_28;
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
    (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
    (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
    (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_B5D69C(0LL, method);
  UITouchPress__PressReset(touchPress, 0LL);
  this->fields.isFastMessageRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ResetMessageWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *currentMessageWindow; // x21
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  __int64 v15; // x1
  struct ScriptMessageWindow_o *v16; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ScriptMessageWindow_o *v24; // x8
  struct UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Object_o *v33; // x22
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *v35; // x21
  struct ScriptMessageWindow_o *v36; // x8
  struct UnityEngine_GameObject_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ScriptMessageWindow_o *v44; // x8
  struct UnityEngine_GameObject_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct ScriptMessageWindow_o *v58; // x8
  System_Int32_array **talkNameMessageRoot; // x1
  struct ScriptMessageWindow_o *v60; // x8
  struct ScriptLineMessage_o *talkNameManager; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct ScriptMessageWindow_o *v68; // x8
  struct ScriptLineMessage_o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct ScriptMessageWindow_o *v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  const MethodInfo *v83; // x6
  const MethodInfo *v84; // x1

  if ( (byte_42EE415 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE415 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
      (System_Int32_array **)defaultMessageWindow,
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mainPrefab,
          (System_Int32_array **)gameObject,
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
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
              (System_Int32_array **)v25,
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
LABEL_36:
    sub_B5D69C(messageMainLabel, v15);
  }
  v32 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v33 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v32, v33, 0LL) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v34);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_36;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, 0LL);
    messageMainLabel = (char *)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_36;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)messageMainLabel,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v35, 0LL);
    v36 = this->fields.defaultMessageWindow;
    if ( !v36 )
      goto LABEL_36;
    messageMainLabel = (char *)v36->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.mainPrefab = v37;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mainPrefab,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = this->fields.defaultMessageWindow;
    if ( !v44 )
      goto LABEL_36;
    messageMainLabel = (char *)v44->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.rubyPrefab = v45;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.rubyPrefab,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v58 = this->fields.defaultMessageWindow;
    if ( !v58 )
      goto LABEL_36;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_36;
    talkNameMessageRoot = (System_Int32_array **)v58->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 6) = talkNameMessageRoot;
    sub_B5D560(
      (BattleServantConfConponent_o *)(messageMainLabel + 48),
      talkNameMessageRoot,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v60 = this->fields.defaultMessageWindow;
    if ( !v60 )
      goto LABEL_36;
    messageMainLabel = (char *)v60->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !talkNameManager )
      goto LABEL_36;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_B5D560(
      (BattleServantConfConponent_o *)&talkNameManager->fields.mainPrefab,
      (System_Int32_array **)messageMainLabel,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields.defaultMessageWindow;
    if ( !v68 )
      goto LABEL_36;
    messageMainLabel = (char *)v68->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_36;
    v69 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !v69 )
      goto LABEL_36;
    v69->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v69->fields.rubyPrefab,
      (System_Int32_array **)messageMainLabel,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_36;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !messageMainLabel )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0LL);
    v76 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v76;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.currentMessageWindow,
      (System_Int32_array **)v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v83);
    ScriptMessageCommonManager__ResetScroll(this, v84);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  struct ScriptMessageWindow_o *v10; // x8
  float v11; // s0
  float v12; // s2
  struct ScriptMessageWindow_o *v13; // x8
  float y; // s10
  float v15; // s8
  float v16; // s9
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EE41E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE41E = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_18;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
  v10 = v4->fields.currentMessageWindow;
  if ( !v10 )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)v10->fields.messageScroll;
  if ( !this )
    goto LABEL_18;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (v13 = v4->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v13->fields.messageScroll) == 0LL
    || (y = v4->fields.dispSize.fields.y,
        v15 = v11,
        v16 = v12,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(this, method);
  }
  v17.fields.y = y * 0.5;
  v17.fields.x = v15;
  v17.fields.z = v16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL);
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
    sub_B5D69C(this, button);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v10; // x8

  if ( (byte_42EE426 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17160/*"btn_auto_on"*/, isOn, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17159/*"btn_auto_off"*/, v6, v7, v8);
    byte_42EE426 = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_B5D69C(0LL, isOn);
  v10 = (System_String_o **)&StringLiteral_17160/*"btn_auto_on"*/;
  if ( !isOn )
    v10 = (System_String_o **)&StringLiteral_17159/*"btn_auto_off"*/;
  UISprite__set_spriteName(autoMessageSprite, *v10, 0LL);
}


void __fastcall ScriptMessageCommonManager__SetBetweenLineHeight(
        ScriptMessageCommonManager_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_B5D69C(0LL, method);
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

  if ( (byte_42EE40C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EE40C = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, enable);
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
    sub_B5D69C(0LL, enable);
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

  if ( (byte_42EE40F & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)sizeName, (_DWORD)verticalAlignString, method);
    byte_42EE40F = 1;
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
  __int64 v3; // x3
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_42EE40E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)font, (_DWORD)method, v3);
    byte_42EE40E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v6 )
  {
    if ( !this )
      sub_B5D69C(v6, v7);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)defaultFontType,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
    sub_B5D69C(0LL, flag);
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
    sub_B5D69C(0LL, isEnable);
  ScriptMessageWindow__SetEnabledCollider(currentMessageWindow, isEnable, method);
}


void __fastcall ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *rootObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EE402 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42EE402 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rootObject, 0LL, 0LL) )
  {
    v8 = this->fields.rootObject;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isActive, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_GameObject_o *rootPanel; // x0
  float v17; // s1
  float v18; // s0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v20; // x8
  int v21; // s2
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  struct ScriptMessageWindow_o *v26; // x8
  float v27; // s0
  UIPanel_o *dispPanel; // x22
  ManagerConfig_c *v29; // x0
  int WIDTH; // s0
  struct ScriptMessageWindow_o *v31; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  long double v33; // q0
  struct ScriptMessageWindow_o *v34; // x8
  float v35; // s0
  MethodInfo v38; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector4_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE405 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, x, y, *(_QWORD *)&w);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EE405 = 1;
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
    v17 = (float)y;
    v18 = (float)x;
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
    v20 = this->fields.currentMessageWindow;
    if ( !v20 || !rootPanel )
      goto LABEL_36;
    v18 = v20->fields.defaultWindowDispCenter.fields.x;
    v17 = v20->fields.defaultWindowDispCenter.fields.y;
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
    v18 = this->fields.defaultAllDispCenter.fields.x;
    v17 = this->fields.defaultAllDispCenter.fields.y;
  }
  v21 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v26 = this->fields.currentMessageWindow;
  v27 = -(float)(this->fields.rubyLineHeight + 2.0);
  this->fields.startPosition.fields.x = 0.0;
  this->fields.startPosition.fields.y = v27;
  this->fields.isWindowBack = isWindowBack;
  if ( !v26 )
    goto LABEL_36;
  dispPanel = v26->fields.dispPanel;
  v29 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v29 = ManagerConfig_TypeInfo;
  }
  v39.fields.w = this->fields.dispSize.fields.y;
  v39.fields.y = 0.0;
  WIDTH = v29->static_fields->WIDTH;
  v38.methodPointer = 0LL;
  v38.invoker_method = 0LL;
  v39.fields.z = (float)WIDTH;
  v39.fields.x = 0.0;
  UnityEngine_Vector4___ctor(v39, v22, v23, v24, v25, &v38);
  if ( !dispPanel
    || (*(_QWORD *)&v40.fields.x = v38.methodPointer,
        *(_QWORD *)&v40.fields.z = v38.invoker_method,
        UIPanel__set_baseClipRegion(dispPanel, v40, 0LL),
        (v31 = this->fields.currentMessageWindow) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(rootPanel, *(_QWORD *)&x);
  }
  messageWindowBack = (UnityEngine_Object_o *)v31->fields.messageWindowBack;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0LL, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    v34 = this->fields.currentMessageWindow;
    if ( v34 )
    {
      rootPanel = (UnityEngine_GameObject_o *)v34->fields.messageWindowBack;
      if ( rootPanel )
      {
        LODWORD(v33) = 0;
        if ( isWindowBack )
          *(float *)&v33 = 1.0;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          v33);
        goto LABEL_32;
      }
    }
    goto LABEL_36;
  }
LABEL_32:
  ScriptMessageCommonManager__ClearText(this, *(const MethodInfo **)&x);
  v35 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v35 == INFINITY )
    return (int)-v35;
  else
    return (int)v35;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x21
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v36; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v38; // q0
  float v39; // s0
  struct ScriptMessageWindow_o *v40; // x8
  int talkNameBackDefaultWidth; // w9
  double v42; // d0
  struct ScriptMessageWindow_o *v43; // x8
  struct ScriptMessageWindow_o *v44; // x8
  UnityEngine_GameObject_c *klass; // x8
  float x; // s1
  float betweenLineHeight; // s3
  float y; // s2
  float v49; // w8
  float v50; // s0
  const MethodInfo *v51; // x1
  struct ScriptMessageWindow_o *v52; // x8
  long double v53; // q0

  if ( (byte_42EE416 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)imageName, (_DWORD)classname, charaname);
    sub_B5D5C4(&StringLiteral_129/*" 1.5]"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15989/*"[image "*/, v14, v15, v16);
    byte_42EE416 = 1;
  }
  v17 = System_String__Concat_44577788(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v18);
    return 1;
  }
  this->fields.talkName = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.talkName,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.talkNameOnly = charaname;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.talkNameOnly,
    (System_Int32_array **)charaname,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
                                                       v17,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       1LL,
                                                       talkNameRootObject->klass[1]._1.element_class);
    v36 = this->fields.currentMessageWindow;
    if ( !v36 )
      goto LABEL_39;
    talkNameBack = (UnityEngine_Object_o *)v36->fields.talkNameBack;
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
      LODWORD(v39) = *(_QWORD *)&ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)talkNameRootObject, 0LL);
      v40 = this->fields.currentMessageWindow;
      if ( !v40 )
        goto LABEL_39;
      talkNameBackDefaultWidth = v40->fields.talkNameBackDefaultWidth;
      if ( v39 > (float)talkNameBackDefaultWidth )
      {
        if ( v39 == INFINITY )
          v42 = -v39;
        else
          v42 = v39;
        talkNameBackDefaultWidth = (int)v42;
      }
      if ( !talkNameBack )
        goto LABEL_39;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((v40->fields.talkNameBackBaseWidth + talkNameBackDefaultWidth) & 1)
      + v40->fields.talkNameBackBaseWidth
      + talkNameBackDefaultWidth,
        0LL);
    }
    v43 = this->fields.currentMessageWindow;
    if ( !v43 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v43->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
    if ( imageName )
    {
      UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0LL);
      v44 = this->fields.currentMessageWindow;
      if ( v44 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v44->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          klass = talkNameRootObject->klass;
          LODWORD(v38) = 1.0;
          goto LABEL_34;
        }
      }
LABEL_39:
      sub_B5D69C(talkNameRootObject, v32);
    }
  }
  else
  {
    if ( imageName )
      v17 = System_String__Concat_44581200(
              (System_String_o *)StringLiteral_15989/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_129/*" 1.5]"*/,
              v17,
              0LL);
    x = this->fields.startPosition.fields.x;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptMessageCommonManager__UpdateLabels(this, v17, 1, 0, v33);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v49 = this->fields.startPosition.fields.x;
    v50 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v50;
    this->fields.dispPosition.fields.x = v49;
    this->fields.dispPosition.fields.y = y - (float)(v50 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v51);
    v52 = this->fields.currentMessageWindow;
    if ( !v52 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v52->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
  }
  klass = talkNameRootObject->klass;
  LODWORD(v38) = 0;
LABEL_34:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v38);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_39;
  LODWORD(v53) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v53 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    v53);
  return 1;
}


void __fastcall ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UISprite_o *talkNameBack; // x19
  UnityEngine_Object_o *talkNameAtlas; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **mAtlas; // x1
  System_Int32_array **mSpriteName; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UISpriteData_o *AtlasSprite; // x0

  v5 = this;
  if ( (byte_42EE413 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)imageName, (_DWORD)method, v3);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EE413 = 1;
  }
  currentMessageWindow = v5->fields.currentMessageWindow;
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
    talkNameAtlas = (UnityEngine_Object_o *)v5->fields.talkNameAtlas;
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
      v5->fields.talkNameAtlas = (struct UIAtlas_o *)mAtlas;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.talkNameAtlas, mAtlas, v12, v13, v14, v15, v16, v17);
      mSpriteName = (System_Int32_array **)talkNameBack->fields.mSpriteName;
      v5->fields.talkNameSpriteName = (struct System_String_o *)mSpriteName;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v5->fields.talkNameSpriteName,
        mSpriteName,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    this = (ScriptMessageCommonManager_o *)System_String__IsNullOrEmpty(imageName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( talkNameBack )
      {
        UISprite__set_atlas(talkNameBack, v5->fields.talkNameAtlas, 0LL);
        UISprite__set_spriteName(talkNameBack, v5->fields.talkNameSpriteName, 0LL);
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
    sub_B5D69C(this, imageName);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float defaultScrollTime; // w9
  float ScenarioTextSpeed; // s8
  BalanceConfig_c *v10; // x0
  float ScenarioTextSpeedDefault; // s9
  bool v12; // nf
  float v13; // s0
  float ScenarioScrollSpeed; // s0
  BalanceConfig_c *v15; // x0
  float v16; // s8
  float ScenarioScrollSpeedHigh; // s9
  float v18; // s0
  float *p_scrollSpeed; // x8
  float v20; // s0
  float fastScrollTime; // s1

  if ( (byte_42EE40D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    byte_42EE40D = 1;
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
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v10->static_fields->ScenarioTextSpeedDefault;
    v12 = OptionManager__GetScenarioTextSpeed(0LL) < BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh;
    v13 = 0.0;
    if ( v12 )
      v13 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v13;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
    v15 = BalanceConfig_TypeInfo;
    v16 = ScenarioScrollSpeed;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v15->static_fields->ScenarioScrollSpeedHigh;
    v18 = OptionManager__GetScenarioScrollSpeed(0LL);
    if ( v16 < ScenarioScrollSpeedHigh )
    {
      p_scrollSpeed = &this->fields.scrollSpeed;
      v20 = this->fields.defaultScrollTime
          / (float)(v18 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
      this->fields.scrollSpeed = v20;
      goto LABEL_23;
    }
    defaultScrollTime = this->fields.fastScrollTime;
  }
  p_scrollSpeed = &this->fields.scrollSpeed;
  this->fields.scrollSpeed = defaultScrollTime;
  v20 = defaultScrollTime;
LABEL_23:
  fastScrollTime = this->fields.fastScrollTime;
  if ( v20 < fastScrollTime )
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  ScriptMessageCommonManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  float v13; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v16; // x20
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ScriptMessageWindow_o *v31; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  struct ScriptMessageWindow_o *v33; // x8

  v5 = this;
  if ( (byte_42EE41D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, isFast, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    this = (ScriptMessageCommonManager_o *)sub_B5D5C4(&StringLiteral_6057/*"EndScroll"*/, v9, v10, v11);
    byte_42EE41D = 1;
  }
  v12 = 308LL;
  if ( isFast )
    v12 = 164LL;
  v13 = *(float *)((char *)&v5->klass + v12);
  if ( v13 > 0.0 )
  {
    currentMessageWindow = v5->fields.currentMessageWindow;
    v5->fields.isScroll = 1;
    if ( currentMessageWindow )
    {
      this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (ScriptMessageCommonManager_o *)TweenPosition__Begin(gameObject, v13, v5->fields.scrollPosition, 0LL);
        if ( this )
        {
          v16 = this;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
          LODWORD(v16->fields.rootPanel) = 3;
          v17 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          v16->fields.messageShake = (struct UnityEngine_Transform_o *)v17;
          sub_B5D560((BattleServantConfConponent_o *)&v16->fields.messageShake, v17, v18, v19, v20, v21, v22, v23);
          v24 = (System_Int32_array **)StringLiteral_6057/*"EndScroll"*/;
          v16->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_6057/*"EndScroll"*/;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v16->fields.defaultMessageWindow,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  v31 = v5->fields.currentMessageWindow;
  if ( !v31 )
    goto LABEL_22;
  this = (ScriptMessageCommonManager_o *)v31->fields.messageScroll;
  if ( !this )
    goto LABEL_22;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
  v33 = v5->fields.currentMessageWindow;
  if ( !v33
    || (this = (ScriptMessageCommonManager_o *)v33->fields.messageScroll) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(this, isFast);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v5->fields.scrollPosition, 0LL);
  v5->fields.isFastMessageRequest = 0;
  v5->fields.isScroll = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__UpdateLabels(
        ScriptMessageCommonManager_o *this,
        System_String_o *txt,
        bool isStretch,
        bool isFoward,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  int v65; // w1
  char v66; // w2
  __int64 v67; // x3
  int v68; // w1
  char v69; // w2
  __int64 v70; // x3
  int v71; // w1
  char v72; // w2
  __int64 v73; // x3
  __int64 v74; // x22
  System_String_o *rootPanel; // x0
  System_String_o *v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  long double v83; // q0
  float stepTime; // s8
  System_Text_StringBuilder_o *v85; // x20
  System_Text_StringBuilder_o **v86; // x24
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **defaultColorTag; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  ScriptMessageCommonManager_ProcAddLabel_o *v100; // x23
  int32_t v101; // w20
  int v102; // w26
  System_String_o *v103; // x0
  const MethodInfo *v104; // x2
  System_String_o *v105; // x27
  int32_t v106; // w1
  int32_t v107; // w2
  System_String_o *v108; // x20
  System_String_o *v109; // x0
  __int64 *v110; // x8
  float v111; // s3
  float v112; // s2
  float v113; // w8
  float v114; // s0
  const MethodInfo *v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  BattleServantConfConponent_o *v123; // x0
  const MethodInfo *v124; // x2
  System_String_o *v125; // x20
  System_String_array *v126; // x20
  struct System_String_o *v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  const MethodInfo *v134; // x1
  System_String_o *v135; // x0
  const MethodInfo *v136; // x4
  bool v137; // w8
  char v138; // w3
  System_String_o *v139; // x1
  ScriptMessageCommonManager_o *v140; // x0
  const MethodInfo *v141; // x3
  _BOOL4 isEffectMessage; // w27
  const MethodInfo *v143; // x2
  const MethodInfo *v144; // x2
  int32_t v145; // w28
  System_String_o *v146; // x27
  System_String_o *v147; // x0
  int32_t BraceIndex; // w0
  System_String_o *v149; // x0
  const MethodInfo *v150; // x1
  int32_t v151; // w20
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  int32_t v160; // w27
  System_Text_StringBuilder_o *v161; // x28
  float betweenLineHeight; // s3
  float y; // s2
  float x; // w8
  float v165; // s0
  const MethodInfo *v166; // x1
  int v167; // w1
  char v168; // w2
  const MethodInfo *v169; // x3
  ScriptReplaceString_c *v170; // x0
  int32_t playerGenderIndex; // w27
  struct System_String_o *v172; // x1
  System_String_o *v173; // x20
  System_Text_StringBuilder_o *v174; // x21
  ScriptMessageCommonManager_ProcAddLabel2_o *v175; // [xsp+0h] [xbp-80h]
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-78h]
  System_String_o **colorTag; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42EE401 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, (_DWORD)txt, isStretch, isFoward);
    sub_B5D5C4(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__, v20, v21, v22);
    sub_B5D5C4(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__, v23, v24, v25);
    sub_B5D5C4(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_22278/*"servantName"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_19497/*"i"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_15830/*"[*"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_16026/*"[~1]"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_15961/*"[^"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_21954/*"r"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_18508/*"effectmessage"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_19657/*"image"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_16025/*"[~"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v71, v72, v73);
    byte_42EE401 = 1;
  }
  text = 0LL;
  v74 = sub_B5D694(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass113_0_o *)v74,
    0LL);
  if ( !v74 )
    goto LABEL_115;
  *(_QWORD *)(v74 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v74 + 24), (System_Int32_array **)this, v77, v78, v79, v80, v81, v82);
  *(_BYTE *)(v74 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (System_String_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_115;
  stepTime = 0.0;
  LODWORD(v83) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v83 = 0.0;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, long double))rootPanel->klass->vtable._8_System_IConvertible_ToChar.method)(
    rootPanel,
    rootPanel->klass->vtable._9_System_IConvertible_ToSByte.methodPtr,
    v83);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v74 + 32) = stepTime;
  v85 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v85, 0LL);
  v86 = (System_Text_StringBuilder_o **)(v74 + 16);
  *(_QWORD *)(v74 + 16) = v85;
  sub_B5D560((BattleServantConfConponent_o *)(v74 + 16), (System_Int32_array **)v85, v87, v88, v89, v90, v91, v92);
  defaultColorTag = (System_Int32_array **)this->fields.defaultColorTag;
  colorTag = (System_String_o **)(v74 + 40);
  *(_QWORD *)(v74 + 40) = defaultColorTag;
  sub_B5D560((BattleServantConfConponent_o *)(v74 + 40), defaultColorTag, v94, v95, v96, v97, v98, v99);
  v100 = (ScriptMessageCommonManager_ProcAddLabel_o *)sub_B5D694(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    v100,
    (Il2CppObject *)v74,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0LL);
  v175 = (ScriptMessageCommonManager_ProcAddLabel2_o *)sub_B5D694(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    v175,
    (Il2CppObject *)v74,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_115:
    sub_B5D69C(rootPanel, v76);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_111:
    if ( !v100 )
      goto LABEL_115;
    goto LABEL_112;
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  v101 = 0;
  v102 = 0;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v101, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      v160 = v101 + 1;
      rootPanel = (System_String_o *)ScriptMessageLabel__GetBraceIndex(txt, v101 + 1, v143);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_110;
      v145 = (int)rootPanel;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      rootPanel = ScriptMessageLabel__GetCommandName(txt, v160, v144);
      if ( !rootPanel )
        goto LABEL_115;
      v146 = rootPanel;
      if ( System_String__Equals_44565128(rootPanel, (System_String_o *)StringLiteral_18508/*"effectmessage"*/, 0LL) )
      {
        v147 = System_String__Substring_44641524(txt, v101 + 15, v102 + v145 - 15, 0LL);
        rootPanel = (System_String_o *)System_String__op_Equality(v147, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = (System_String_o *)System_String__Equals_44565128(v146, (System_String_o *)StringLiteral_21954/*"r"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
        {
          rootPanel = (System_String_o *)v175;
          if ( !v175 )
            goto LABEL_115;
          ScriptMessageCommonManager_ProcAddLabel2__Invoke(v175, (System_String_o *)StringLiteral_81/*" "*/, 0LL);
          betweenLineHeight = this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          x = this->fields.startPosition.fields.x;
          v165 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          this->fields.beforeTextOnlyLineHeight = v165;
          this->fields.dispPosition.fields.x = x;
          this->fields.dispPosition.fields.y = y - (float)(v165 + betweenLineHeight);
          ScriptMessageCommonManager__SetDefaultState(this, v166);
        }
      }
      goto LABEL_109;
    }
    v160 = v101 + 1;
LABEL_110:
    v102 = -v160;
    v101 = v160;
    if ( v160 >= txt->fields.m_stringLength )
      goto LABEL_111;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v161 = *v86;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v101, 0LL);
    if ( !v161 )
      goto LABEL_115;
    v160 = v101 + 1;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42956988(v161, (uint16_t)rootPanel, 0LL);
    goto LABEL_110;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v160 = v101 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v101 + 1, v143);
  if ( BraceIndex == -1 )
  {
    rootPanel = (System_String_o *)*v86;
    if ( !*v86 )
      goto LABEL_115;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     (System_String_o *)StringLiteral_15824/*"["*/,
                                     0LL);
    goto LABEL_110;
  }
  v145 = BraceIndex;
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v160, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v149 = System_String__Substring_44641524(txt, v101 + 2, v102 + v145 - 2, 0LL);
    v151 = System_Int32__Parse(v149, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    String = ScriptReplaceString__GetString(v151, v150);
    TagSplitString = System_String__Concat_44577788(String, (System_String_o *)StringLiteral_15834/*"[-]"*/, 0LL);
    goto LABEL_106;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v160, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    if ( !byte_42E4CBB )
    {
      sub_B5D5C4(&ScriptReplaceString_TypeInfo, v167, v168, v169);
      byte_42E4CBB = 1;
    }
    v170 = ScriptReplaceString_TypeInfo;
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v170 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v170->static_fields->playerGenderIndex;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v101 + 2, playerGenderIndex, v169);
LABEL_106:
    v172 = *(struct System_String_o **)(v74 + 40);
    v173 = TagSplitString;
    this->fields.defaultColorTag = v172;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v172,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
    v137 = isStretch;
    v138 = *(_BYTE *)(v74 + 36);
    v140 = this;
    v139 = v173;
LABEL_107:
    ScriptMessageCommonManager__UpdateLabels(v140, v139, v137, v138, v136);
    v122 = (System_Int32_array **)this->fields.defaultColorTag;
    *(_QWORD *)(v74 + 40) = v122;
    v123 = (BattleServantConfConponent_o *)(v74 + 40);
LABEL_108:
    sub_B5D560(v123, v122, v116, v117, v118, v119, v120, v121);
LABEL_109:
    v160 = v145 + 1;
    goto LABEL_110;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v160, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v103 = System_String__Substring_44641524(txt, v101, v102 + v145 + 1, 0LL);
    goto LABEL_35;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v160, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_109;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootPanel = ScriptMessageLabel__GetCommandName(txt, v160, v104);
  if ( !rootPanel )
    goto LABEL_115;
  v105 = rootPanel;
  rootPanel = (System_String_o *)System_String__Equals_44565128(rootPanel, (System_String_o *)StringLiteral_19657/*"image"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v106 = v101 + 7;
    v107 = v102 + v145 - 7;
    goto LABEL_33;
  }
  if ( System_String__Equals_44565128(v105, (System_String_o *)StringLiteral_18508/*"effectmessage"*/, 0LL) )
  {
    v108 = System_String__Substring_44641524(txt, v101 + 15, v102 + v145 - 15, 0LL);
    rootPanel = (System_String_o *)System_String__op_Inequality(v108, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
    if ( ((unsigned __int8)rootPanel & 1) != 0 )
    {
      if ( !v100 )
        goto LABEL_115;
      ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
      v76 = System_String__Concat_44580072(
              (System_String_o *)StringLiteral_15830/*"[*"*/,
              v108,
              (System_String_o *)StringLiteral_16061/*"]"*/,
              0LL);
      rootPanel = (System_String_o *)v175;
      if ( !v175 )
        goto LABEL_115;
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v175, v76, 0LL);
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_109;
  }
  rootPanel = (System_String_o *)System_String__Equals_44565128(v105, (System_String_o *)StringLiteral_19497/*"i"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v106 = v101 + 3;
    v107 = v102 + v145 - 3;
LABEL_33:
    v109 = System_String__Substring_44641524(txt, v106, v107, 0LL);
    v110 = &StringLiteral_15961/*"[^"*/;
LABEL_34:
    v103 = System_String__Concat_44580072((System_String_o *)*v110, v109, (System_String_o *)StringLiteral_16061/*"]"*/, 0LL);
LABEL_35:
    v76 = v103;
    rootPanel = (System_String_o *)v175;
    if ( !v175 )
      goto LABEL_115;
    goto LABEL_36;
  }
  rootPanel = (System_String_o *)System_String__Equals_44565128(v105, (System_String_o *)StringLiteral_21954/*"r"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v111 = this->fields.betweenLineHeight;
    v112 = this->fields.dispPosition.fields.y;
    v113 = this->fields.startPosition.fields.x;
    v114 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v114;
    this->fields.dispPosition.fields.x = v113;
    this->fields.dispPosition.fields.y = v112 - (float)(v114 + v111);
    ScriptMessageCommonManager__SetDefaultState(this, v115);
    v122 = (System_Int32_array **)this->fields.defaultColorTag;
    v123 = (BattleServantConfConponent_o *)(v74 + 40);
    *colorTag = (System_String_o *)v122;
    goto LABEL_108;
  }
  rootPanel = (System_String_o *)System_String__Equals_44565128(v105, (System_String_o *)StringLiteral_22278/*"servantName"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    v125 = System_String__Substring_44641524(txt, v101 + 12, v102 + v145 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v126 = ScriptMessageLabel__AnalysTagParam(v125, 0, v124);
    v127 = *(struct System_String_o **)(v74 + 40);
    this->fields.defaultColorTag = v127;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v127,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
    v135 = ScriptMessageLabel__GetServantChangeName(v126, v134);
    v137 = isStretch;
    v138 = *(_BYTE *)(v74 + 36);
    v139 = v135;
    v140 = this;
    goto LABEL_107;
  }
  rootPanel = (System_String_o *)System_String__StartsWith(v105, (System_String_o *)StringLiteral_20484/*"line"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v100 )
      goto LABEL_115;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
    rootPanel = System_String__Substring_44641524(txt, v101 + 5, v102 + v145 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_115;
    if ( rootPanel->fields.m_stringLength >= 1 )
    {
      v109 = System_String__Trim_44565120(rootPanel, 0LL);
      v110 = &StringLiteral_16025/*"[~"*/;
      goto LABEL_34;
    }
    rootPanel = (System_String_o *)v175;
    if ( !v175 )
      goto LABEL_115;
    v76 = (System_String_o *)StringLiteral_16026/*"[~1]"*/;
LABEL_36:
    ScriptMessageCommonManager_ProcAddLabel2__Invoke((ScriptMessageCommonManager_ProcAddLabel2_o *)rootPanel, v76, 0LL);
    goto LABEL_109;
  }
  if ( v145 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44641524(txt, v101, v102 + v145 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, v141);
    rootPanel = (System_String_o *)*v86;
    if ( !*v86 )
      goto LABEL_115;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     text,
                                     0LL);
    goto LABEL_109;
  }
  v174 = *v86;
  rootPanel = System_String__Substring(txt, v101, 0LL);
  if ( !v174 )
    goto LABEL_115;
  rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42953744(v174, rootPanel, 0LL);
  if ( !v100 )
    goto LABEL_115;
LABEL_112:
  ScriptMessageCommonManager_ProcAddLabel__Invoke(v100, 0LL);
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
    sub_B5D69C(touchPress, isShowNextTouchObject);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__Invoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  ScriptMessageCommonManager_ProcAddLabel_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ScriptMessageCommonManager_ProcAddLabel_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ScriptMessageCommonManager_ProcAddLabel_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel2_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  ScriptMessageCommonManager_ProcAddLabel2_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, txt, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = txt->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(txt, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(txt, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(txt, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(txt, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, txt, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, txt, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                txt,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, txt, v30);
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
    sub_B5D69C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_10;
  v6->fields.defaultColorTag = this->fields.tmpColorTag;
  sub_B5D560(&v6->fields.defaultColorTag);
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
    sub_B5D69C(this, text);
  _4__this->fields.defaultColorTag = v3->fields.tmpColorTag;
  sub_B5D560(&_4__this->fields.defaultColorTag);
}