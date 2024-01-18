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
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_418D329 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_Stack_UISprite__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_Stack_UILabel__TypeInfo, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_418D329 = 1;
  }
  *(_QWORD *)&this->fields.talkNameBackBaseWidth = 0xDC00000050LL;
  this->fields.defaultWindowDispCenter.fields.y = -218.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_31C3330;
  *(_OWORD *)&this->fields.defaultBetweenLineHeight = xmmword_31C3340;
  *(_OWORD *)&this->fields.defaultWindowDispSize.fields.y = xmmword_31C3350;
  *(_QWORD *)&this->fields.windowOpenTime = 0x3ECCCCCD3ECCCCCDLL;
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v22, v2, v3, v4, v5, v6, v7);
  v23 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v23,
    (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainStock,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v30,
    (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rubyStock,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v37,
    (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.imageStock,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v44,
    (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v44;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.labelStock,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v51;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispLabelList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ScriptMessageLabel_o *v23; // x21
  BattleServantConfConponent_o *v24; // x0
  float32x2_t *p_dispPosition; // x27
  struct UnityEngine_Vector2_o dispPosition; // x28
  const MethodInfo *v27; // x5
  System_String_o *v28; // x22
  System_String_array *v29; // x24
  const MethodInfo *v30; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v35; // x7
  __int64 *p_fields; // x23
  __int64 *p_ruby; // x22
  UnityEngine_Vector2_o *v38; // x3
  System_String_o *v39; // x22
  const MethodInfo *v40; // x5
  int v41; // w8
  __int64 v42; // x23
  System_String_o *v43; // x22
  float v44; // s0
  int v45; // w8
  float v46; // s9
  int32_t v47; // w23
  int32_t horizontalAlign; // w24
  const MethodInfo *v49; // x6
  UnityEngine_Vector2_o zero; // kr00_8
  ScriptMessageLabel_o *v51; // x0
  UISprite_o **p_image; // x1
  UnityEngine_Vector2_o *v53; // x2
  int32_t v54; // w3
  float v55; // s0
  System_String_o *v56; // x4
  float x; // s1
  float y; // s2
  int32_t v59; // w5
  System_String_o *v60; // x23
  const MethodInfo *v61; // x5
  int32_t v62; // w24
  __int64 *v63; // x22
  int32_t v64; // w0
  const MethodInfo *v65; // x5
  System_String_o *v66; // x1
  System_String_o *v67; // x22
  System_String_array *v68; // x0
  System_String_array *v69; // x23
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  const MethodInfo *v72; // x5
  System_String_o *v73; // x22
  float v74; // s8
  float v75; // s10
  float v76; // s9
  System_String_o *v77; // x24
  System_String_array *v78; // x0
  System_String_array *v79; // x24
  System_String_o *v80; // x0
  float v81; // s0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  int32_t v85; // w23
  __int64 *v86; // x23
  System_String_o *rubyText; // x0
  System_String_o *v88; // x22
  const MethodInfo *v89; // x5
  __int64 v90; // x22
  System_String_o *v91; // x23
  __int64 v92; // x23
  int v93; // w24
  int32_t v94; // w0
  const MethodInfo *v95; // x6
  float v96; // s3
  unsigned __int64 v97; // d0
  UnityEngine_GameObject_o **v98; // x1
  const MethodInfo *v99; // x5
  __int64 v100; // x0
  System_String_o *rubyStr; // [xsp+0h] [xbp-90h]
  const MethodInfo *v102; // [xsp+8h] [xbp-88h]
  const MethodInfo *v103; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_418D304 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, text);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v11);
    sub_B2C35C(&StringLiteral_13554/*"Talk/"*/, v12);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418D304 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_96;
  v23 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v24 = (BattleServantConfConponent_o *)(Label + 112);
  v24->fields.tmp_pos.fields.x = tm;
  sub_B2C2F8(v24, (System_Int32_array **)colorTag, v17, v18, v19, v20, v21, v22);
  if ( !text )
    goto LABEL_96;
  p_dispPosition = (float32x2_t *)&this->fields.dispPosition;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_58;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v28 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B2C374(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_96;
    v16 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v28 )
        goto LABEL_96;
      v29 = System_String__Split(v28, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v23, 1, 0, 0, v30);
      if ( !v29 )
        goto LABEL_96;
      max_length = v29->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v35 = v29->m_Items[0];
        p_fields = (__int64 *)&v23->fields;
        p_ruby = (__int64 *)&v23->fields.ruby;
        v38 = &this->fields.dispPosition;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v23,
            &v23->fields.main,
            &v23->fields.ruby,
            v38,
            fontSize,
            maxFontSize,
            verticalAlign,
            v35,
            this->fields.fontType,
            v102);
        else
          ScriptMessageLabel__UpdateRuby(
            v23,
            &v23->fields.main,
            &v23->fields.ruby,
            v38,
            fontSize,
            maxFontSize,
            verticalAlign,
            v35,
            v29->m_Items[1],
            this->fields.fontType,
            0,
            v103);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_96;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_96;
          v66 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
          UILabel__set_text((UILabel_o *)Label, v66, 0LL);
        }
LABEL_62:
        if ( !isFoward )
          goto LABEL_66;
        goto LABEL_63;
      }
    }
LABEL_97:
    v100 = sub_B2C460(Label);
    sub_B2C400(v100, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v39 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B2C374(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_96;
    v16 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_97;
    *(_WORD *)(Label + 32) = 32;
    if ( !v39 )
      goto LABEL_96;
    Label = (__int64)System_String__Split(v39, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_96;
    v41 = *(_DWORD *)(Label + 24);
    v42 = Label;
    if ( v41 <= 1 )
    {
      if ( !v41 )
        goto LABEL_97;
      v88 = *(System_String_o **)(Label + 32);
      Label = sub_B2C374(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_96;
      v16 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      *(_WORD *)(Label + 32) = 58;
      if ( !v88 )
        goto LABEL_96;
      Label = (__int64)System_String__Split(v88, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_96;
      v90 = Label;
      if ( *(int *)(Label + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v23, 0, 1, 0, v89);
        if ( !*(_DWORD *)(v90 + 24) )
          goto LABEL_97;
        ScriptMessageLabel__UpdateImage(
          v23,
          &v23->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          *(System_String_o **)(v90 + 32),
          this->fields.horizontalAlign,
          v95);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v23, 1, 1, 0, v89);
        if ( *(_DWORD *)(v90 + 24) < 2u )
          goto LABEL_97;
        ScriptMessageLabel__UpdateImageRuby(
          v23,
          &v23->fields.image,
          &v23->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          *(System_String_o **)(v90 + 32),
          *(System_String_o **)(v90 + 40),
          0LL,
          this->fields.horizontalAlign,
          v102);
      }
      goto LABEL_89;
    }
    ScriptMessageCommonManager__PreProcLabel(this, v23, 0, 1, 0, v40);
    if ( *(_DWORD *)(v42 + 24) < 2u )
      goto LABEL_97;
    v43 = *(System_String_o **)(v42 + 32);
    v44 = System_Single__Parse(*(System_String_o **)(v42 + 40), 0LL);
    v45 = *(_DWORD *)(v42 + 24);
    v46 = v44;
    if ( v45 == 2 )
    {
      v47 = this->fields.fontSize;
      horizontalAlign = this->fields.horizontalAlign;
      zero = UnityEngine_Vector2__get_zero(0LL);
      v51 = v23;
      p_image = &v23->fields.image;
      v53 = &this->fields.dispPosition;
      v54 = v47;
      v55 = v46;
      v56 = v43;
      y = zero.fields.y;
      x = zero.fields.x;
      v59 = horizontalAlign;
    }
    else
    {
      if ( v45 > 3 )
      {
LABEL_89:
        if ( tm < 0.0 )
          goto LABEL_62;
        Label = (__int64)v23->fields.image;
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
      if ( (unsigned int)v45 <= 2 )
        goto LABEL_97;
      v91 = *(System_String_o **)(v42 + 48);
      Label = sub_B2C374(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_96;
      v16 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      *(_WORD *)(Label + 32) = 44;
      if ( !v91 )
        goto LABEL_96;
      Label = (__int64)System_String__Split(v91, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_96;
      v92 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_97;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v92 + 24) <= 1u )
        goto LABEL_97;
      v93 = Label;
      v94 = System_Int32__Parse(*(System_String_o **)(v92 + 40), 0LL);
      v54 = this->fields.fontSize;
      v59 = this->fields.horizontalAlign;
      p_image = &v23->fields.image;
      v53 = &this->fields.dispPosition;
      x = (float)v93;
      y = (float)v94;
      v51 = v23;
      v55 = v46;
      v56 = v43;
    }
    ScriptMessageLabel__UpdateImage_34418280(v51, p_image, v53, v54, v55, v56, *(UnityEngine_Vector2_o *)&x, v59, v49);
    goto LABEL_89;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v60 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
    ScriptMessageCommonManager__PreProcLabel(this, v23, 0, 1, 0, v61);
    v62 = this->fields.fontSize;
    v63 = (__int64 *)&v23->fields.image;
    v64 = System_Int32__Parse(v60, 0LL);
    ScriptMessageLabel__UpdateLine(v23, &v23->fields.image, &this->fields.dispPosition, v62, v64, v65);
    if ( tm < 0.0 )
      goto LABEL_62;
    Label = *v63;
    if ( !*v63 )
      goto LABEL_96;
    goto LABEL_91;
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 42 )
  {
LABEL_58:
    ScriptMessageCommonManager__PreProcLabel(this, v23, 0, 0, 0, v27);
    v86 = (__int64 *)&v23->fields;
    ScriptMessageLabel__UpdateLabel(
      v23,
      &v23->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      (const MethodInfo *)rubyStr);
    if ( tm < 0.0 )
      goto LABEL_62;
    Label = *v86;
    if ( !*v86 )
      goto LABEL_96;
    v66 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_61;
  }
  v67 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_96;
  v16 = Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_97;
  *(_WORD *)(Label + 32) = 32;
  if ( !v67 )
    goto LABEL_96;
  v68 = System_String__Split(v67, (System_Char_array *)Label, 0LL);
  if ( v68 )
  {
    v69 = v68;
    if ( (int)v68->max_length >= 1 )
    {
      v70 = v68->m_Items[0];
      if ( v70 )
      {
        Label = System_String__op_Equality(v70, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v69->max_length )
            goto LABEL_97;
          Label = (__int64)v69->m_Items[0];
          if ( !Label )
            goto LABEL_96;
          v71 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
          v73 = System_String__Concat_44305532((System_String_o *)StringLiteral_13554/*"Talk/"*/, v71, 0LL);
          v74 = 0.0;
          v75 = 0.0;
          v76 = 0.0;
          if ( (int)v69->max_length >= 2 )
          {
            Label = (__int64)v69->m_Items[1];
            if ( !Label )
              goto LABEL_96;
            v77 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
            Label = sub_B2C374(char___TypeInfo, 1LL);
            if ( !Label )
              goto LABEL_96;
            v16 = Label;
            if ( !*(_DWORD *)(Label + 24) )
              goto LABEL_97;
            *(_WORD *)(Label + 32) = 44;
            if ( !v77 )
              goto LABEL_96;
            v78 = System_String__Split(v77, (System_Char_array *)Label, 0LL);
            v75 = 0.0;
            v76 = 0.0;
            if ( v78 )
            {
              v79 = v78;
              v75 = 0.0;
              v76 = 0.0;
              if ( (int)v78->max_length >= 2 )
              {
                Label = (__int64)v78->m_Items[0];
                if ( !Label )
                  goto LABEL_96;
                v80 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
                v81 = System_Single__Parse(v80, 0LL);
                if ( v79->max_length <= 1 )
                  goto LABEL_97;
                Label = (__int64)v79->m_Items[1];
                if ( !Label )
                  goto LABEL_96;
                v76 = v81;
                v82 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
                v75 = System_Single__Parse(v82, 0LL);
              }
            }
          }
          if ( (int)v69->max_length <= 2 )
            goto LABEL_93;
          Label = (__int64)v69->m_Items[2];
          if ( !Label )
            goto LABEL_96;
          v83 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
          v74 = System_Single__Parse(v83, 0LL);
          if ( (int)v69->max_length < 4 )
          {
LABEL_93:
            v85 = 0;
          }
          else
          {
            Label = (__int64)v69->m_Items[3];
            if ( !Label )
              goto LABEL_96;
            v84 = System_String__Trim_44292864((System_String_o *)Label, 0LL);
            v85 = System_Int32__Parse(v84, 0LL);
          }
          v96 = v75 + COERCE_FLOAT(HIDWORD(p_dispPosition->n64_u64[0]));
          v97 = vadd_f32((float32x2_t)p_dispPosition->n64_u64[0], (float32x2_t)1124073472LL).n64_u64[0];
          pos.fields.x = v76 + COERCE_FLOAT(p_dispPosition->n64_u64[0]);
          pos.fields.y = v96;
          p_dispPosition->n64_u64[0] = v97;
          ScriptMessageCommonManager__PreProcLabel(this, v23, 0, 0, 1, v72);
          ScriptMessageLabel__UpdateEffect(v23, v98, &pos, v73, v74, v85, v99);
          if ( !isFoward )
            goto LABEL_66;
LABEL_63:
          rubyText = v23->fields.rubyText;
          v23->fields.mainPosition.fields.x = v23->fields.mainPosition.fields.x - v23->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v23->fields.rubyPosition.fields.x = v23->fields.rubyPosition.fields.x - v23->fields.widthSize;
          p_dispPosition->n64_u64[0] = (unsigned __int64)dispPosition;
LABEL_66:
          Label = (__int64)this->fields.dispLabelList;
          if ( Label )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
            return;
          }
LABEL_96:
          sub_B2C434(Label, v16);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418D2FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_418D2FD = 1;
  }
  memset(&v9, 0, sizeof(v9));
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v9.fields.current, v8);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B2C434(dispLabelList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
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

  if ( (byte_418D315 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418D315 = 1;
  }
  talkNameRootObject = this->fields.talkNameRootObject;
  if ( !talkNameRootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(talkNameRootObject, 0, 0LL);
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.talkName, v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v11, v12, v13, v14, v15, v16, v17);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !talkNameRootObject
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)talkNameRootObject, 0LL),
        (talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameIcon) == 0LL) )
  {
LABEL_7:
    sub_B2C434(talkNameRootObject, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  unsigned __int64 v4; // d0
  UnityEngine_Transform_o *messageScroll; // x0
  float z; // s2
  int v7; // s1
  const MethodInfo *v8; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_418D314 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418D314 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  v4 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  *(_QWORD *)&this->fields.scrollPosition.fields.x = v4;
  messageScroll = this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_9;
  z = this->fields.scrollPosition.fields.z;
  v7 = HIDWORD(v4);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v4, 0LL);
  ScriptMessageCommonManager__SetDefaultState(this, v8);
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
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.talkName, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.talkNameOnly, v18, v19, v20, v21, v22, v23, v24);
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
    sub_B2C434(messageScroll, v3);
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

  if ( (byte_418D30E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418D30E = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B2C434(rootObject, isFast);
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
      sub_B2C2F8(
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
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Component_o *messageScroll; // x8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_418D327 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418D327 = 1;
  }
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v8 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_srcLineSprite, this->fields.messageScroll, 0LL);
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(v8, 0LL);
  messageScroll = (UnityEngine_Component_o *)this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_15;
  v10 = Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(messageScroll, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v10)
    || (UnityEngine_GameObject__set_layer(v10, (int32_t)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_15:
    sub_B2C434(Component_srcLineSprite, v7);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return (UILabel_o *)v8;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_418D2FC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v8);
    byte_418D2FC = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_30;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    if ( labelStock )
    {
      ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v9);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_30;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v12, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_30:
    sub_B2C434(labelStock, v9);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v13, 0LL);
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

  if ( (byte_418D301 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v6);
    byte_418D301 = 1;
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
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 imageStock,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_B2C434(imageStock, method);
  }
  imageStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)imageStock,
                                             (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v6; // x19
  const MethodInfo *v7; // x1

  if ( (byte_418D302 & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v4);
    byte_418D302 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_B2C434(0LL, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v6 = (ScriptMessageLabel_o *)sub_B2C42C(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v6, v7);
  return v6;
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

  if ( (byte_418D2FF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_418D2FF = 1;
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
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                mainStock,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
    sub_B2C434(mainStock, method);
  }
  mainStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)mainStock,
                                            (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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

  if ( (byte_418D300 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_418D300 = 1;
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
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                rubyStock,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
    sub_B2C434(rubyStock, method);
  }
  rubyStock = (UnityEngine_GameObject_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)rubyStock,
                                            (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0

  if ( (byte_418D30C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D30C = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
  {
    v6 = this->fields.rootObject;
    if ( !v6 )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(v6, 0LL);
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
        v6 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
        if ( !v6 )
          goto LABEL_39;
        v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
        {
          v6 = this->fields.rootObject;
          if ( v6 )
          {
            v6 = UnityEngine_GameObject__get_gameObject(v6, 0LL);
            if ( v6 )
            {
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v6,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
              if ( ((unsigned __int8)v6 & 1) != 0 )
              {
                if ( !Component_srcLineSprite )
                  goto LABEL_39;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
              }
              v6 = (UnityEngine_GameObject_o *)this->fields.rootPanel;
              if ( v6 )
              {
                v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
                if ( v6 )
                {
                  transform = UnityEngine_GameObject__get_transform(v6, 0LL);
                  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
                    v6 = this->fields.rootObject;
                    if ( v6 )
                    {
                      v6 = UnityEngine_GameObject__get_gameObject(v6, 0LL);
                      if ( v6 )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf(v6, 0LL) )
                          return;
                        v6 = this->fields.rootObject;
                        if ( v6 )
                        {
                          v6 = UnityEngine_GameObject__get_gameObject(v6, 0LL);
                          if ( v6 )
                          {
                            UnityEngine_GameObject__SetActive(v6, 1, 0LL);
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
          sub_B2C434(v6, v5);
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
  if ( (byte_418D31B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418D31B = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_18:
    sub_B2C434(this, method);
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( (int)v6 >= size )
      return v7;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418D307 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9060/*"MessageShake/LogMark/BackLogButton"*/, v3);
    byte_418D307 = 1;
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
    sub_B2C434(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_9060/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
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
  __int64 v3; // x1
  UITouchPress_o *touchPress; // x0

  if ( !ScriptMessageCommonManager__IsOpen(this, method) || this->fields._isFaceMessage_k__BackingField )
    return 0;
  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_B2C434(0LL, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *rootPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D30A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D30A = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_15;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)rootPanel,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B2C434(rootPanel, method);
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

  if ( (byte_418D325 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D325 = 1;
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
    sub_B2C434(0LL, v4);
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D30B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D30B = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_16;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B2C434(rootObject, method);
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
  if ( (byte_418D324 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418D324 = 1;
  }
  dispLabelList = v2->fields.dispLabelList;
  if ( dispLabelList )
  {
    for ( i = 0LL; (__int64)i < dispLabelList->fields._size; ++i )
    {
      if ( i >= (unsigned int)dispLabelList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        sub_B2C434(this, method);
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
  if ( (byte_418D322 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418D322 = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B2C434(this, effectName);
  v9 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v9 >= dispLabelList->fields._size )
      return 0;
    if ( v9 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsBusy_17915324(v13, effectName, 0LL);
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
  if ( (byte_418D323 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418D323 = 1;
  }
  dispLabelList = v4->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B2C434(this, effectName);
  v9 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v9 >= dispLabelList->fields._size )
      return 0;
    if ( v9 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__IsStart_17916324(v13, effectName, 0LL);
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
  if ( (byte_418D321 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v8);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418D321 = 1;
  }
  dispLabelList = v6->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_22:
    sub_B2C434(this, effectName);
  v11 = 0LL;
  v12 = 1;
  v13 = isSkip;
  while ( (__int64)v11 < dispLabelList->fields._size )
  {
    if ( v11 >= (unsigned int)dispLabelList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ScriptMessageCommonManager_o *)CommonEffectManager__Stop_17923688(v17, effectName, v13, 0, 0LL);
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
  UILabel_o *v26; // x21
  __int64 v27; // x8
  float v28; // s0
  int v29; // w8
  UnityEngine_Object_o *v31; // x20
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x21
  UILabel_o *v38; // x20
  System_String_o *v39; // x22
  float v40; // s9
  float v41; // s8
  int32_t v42; // w23
  float v43; // s9
  double v44; // d8
  const MethodInfo *v45; // x2
  double v46; // d0
  double v47; // d0
  double v48; // d1
  double v49; // d1
  System_String_o *v50; // x0
  double iptr; // [xsp+18h] [xbp-48h] BYREF

  v4 = isMessageDelta;
  v5 = this;
  if ( (byte_418D31C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, isMessageDelta);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&ScriptMessageLabel_TypeInfo, v9);
    byte_418D31C = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      this = (ScriptMessageCommonManager_o *)System_String__Concat_44305532(
                                               *(System_String_o **)(v14 + 112),
                                               *(System_String_o **)(v14 + 120),
                                               0LL);
      if ( !v25 )
        goto LABEL_86;
      UILabel__set_text(v25, (System_String_o *)this, 0LL);
      *(_QWORD *)&isMessageDelta = *(_QWORD *)(v14 + 128);
      if ( !isMessageDelta )
        goto LABEL_86;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v26 = *(UILabel_o **)(v14 + 24);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44305532(
                                                 *(System_String_o **)(v14 + 112),
                                                 (System_String_o *)isMessageDelta,
                                                 0LL);
        if ( !v26 )
          goto LABEL_86;
        UILabel__set_text(v26, (System_String_o *)this, 0LL);
      }
    }
    else
    {
      v27 = *(_QWORD *)(v14 + 136);
      if ( !v27 )
        goto LABEL_86;
      if ( *(int *)(v27 + 16) >= 1 )
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
    if ( v5->fields.isFastMessageRequest || (v28 = *(float *)(v14 + 164), v28 == 0.0) )
    {
      v5->fields.dispCountTimer = -1.0;
    }
    else
    {
      v29 = *(_DWORD *)(v14 + 168);
      if ( v29 >= 1 )
        v5->fields.dispCountTimer = v5->fields.dispCountTimer - (float)(v28 * (float)v29);
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
  v31 = *(UnityEngine_Object_o **)(v14 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    v33 = *(UILabel_o **)(v14 + 16);
    v34 = *(System_String_o **)(v14 + 112);
    v35 = *(System_String_o **)(v14 + 120);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v36 = ScriptMessageLabel__SubstrByDisp(v35, v23, v32);
    this = (ScriptMessageCommonManager_o *)System_String__Concat_44305532(v34, v36, 0LL);
    if ( v33 )
    {
      UILabel__set_text(v33, (System_String_o *)this, 0LL);
      v37 = *(System_String_o **)(v14 + 128);
      if ( v37 )
      {
        if ( v37->fields.m_stringLength < 1 )
          return v5->fields.isBusy;
        v38 = *(UILabel_o **)(v14 + 24);
        v39 = *(System_String_o **)(v14 + 112);
        v40 = (float)*(int *)(v14 + 168);
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v41 = (float)v23 / v40;
        v42 = ScriptMessageLabel__StrlenByDisp(v37, (const MethodInfo *)isMessageDelta);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v43 = v41 * (float)v42;
        v44 = v43;
        v46 = modf(v43, &iptr);
        if ( v43 >= 0.0 )
        {
          if ( v46 == 0.5 )
          {
            v47 = iptr;
            v48 = 1.0;
            goto LABEL_77;
          }
          v47 = floor(v44 + 0.5);
        }
        else if ( v46 == -0.5 )
        {
          v47 = iptr;
          v48 = -1.0;
LABEL_77:
          v49 = v47 + v48;
          if ( ((__int64)v47 & 1) != 0 )
            v47 = v49;
        }
        else
        {
          v47 = ceil(v44 + -0.5);
        }
        if ( v47 == INFINITY )
          v47 = -v47;
        v50 = ScriptMessageLabel__SubstrByDisp(v37, (int)v47, v45);
        this = (ScriptMessageCommonManager_o *)System_String__Concat_44305532(v39, v50, 0LL);
        if ( v38 )
        {
          UILabel__set_text(v38, (System_String_o *)this, 0LL);
          return v5->fields.isBusy;
        }
      }
    }
LABEL_86:
    sub_B2C434(this, isMessageDelta);
  }
  return v5->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_418D319 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9984/*"OnDelayWaitNextTouch"*/, method);
    byte_418D319 = 1;
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
          sub_B2C434(0LL, v3);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9984/*"OnDelayWaitNextTouch"*/,
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

  if ( (byte_418D30F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D30F = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_14;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_14;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              rootObject,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B2C434(rootObject, method);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_418D31A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9984/*"OnDelayWaitNextTouch"*/, method);
    byte_418D31A = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_B2C434(0LL, v3);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9984/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_418D318 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9984/*"OnDelayWaitNextTouch"*/, method);
    byte_418D318 = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_B2C434(0LL, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9984/*"OnDelayWaitNextTouch"*/,
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

  if ( (byte_418D320 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10054/*"OnShake"*/, method);
    byte_418D320 = 1;
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
        (System_String_o *)StringLiteral_10054/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B2C434(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10054/*"OnShake"*/,
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

  if ( (byte_418D30D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418D30D = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_30;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_30;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rootObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
        sub_B2C2F8(
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
      sub_B2C434(rootObject, isFast);
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

  if ( (byte_418D31D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, isFast);
    byte_418D31D = 1;
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
  sub_B2C2F8(
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
  UnityEngine_GameObject_o *v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v43; // x0
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
  UnityEngine_UI_Dropdown_DropdownItem_o *imagePrefab; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UISprite_o **p_image; // x22
  UnityEngine_GameObject_o *v64; // x22
  UnityEngine_Transform_o *transform; // x22
  int v66; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *rubyPrefab; // x21
  struct UILabel_o *Component_srcLineSprite; // x0
  struct UILabel_o **p_ruby; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_GameObject_o *v78; // x21
  UnityEngine_Transform_o *v79; // x21
  int v80; // s0
  UnityEngine_Transform_o *v83; // x21
  int v84; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *mainPrefab; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  ScriptMessageCommonManager_o **p_fields; // x22
  UnityEngine_GameObject_o *v95; // x22
  UnityEngine_Transform_o *v96; // x22
  int v97; // s0
  UnityEngine_Transform_o *v100; // x22
  int v101; // s0

  v10 = this;
  if ( (byte_418D2FE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, label);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v18);
    sub_B2C35C(&StringLiteral_5810/*"Effect Parent"*/, v19);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&StringLiteral_5808/*"Effect Child"*/, v20);
    byte_418D2FE = 1;
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
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !label )
        goto LABEL_79;
      label->fields.image = (struct UISprite_o *)this;
      p_image = &label->fields.image;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&label->fields.image,
        (System_Int32_array **)this,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
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
      v64 = (UnityEngine_GameObject_o *)this;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v10->fields.messageScroll,
                                               0LL);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v64 )
        goto LABEL_79;
      UnityEngine_GameObject__set_layer(v64, (int32_t)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( !label )
        goto LABEL_79;
      label->fields.image = (struct UISprite_o *)this;
      sub_B2C2F8(
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
    *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v66, 0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.image;
    if ( !this )
      goto LABEL_79;
LABEL_76:
    v100 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v101 = UnityEngine_Vector3__get_one(0LL);
    if ( !v100 )
      goto LABEL_79;
    UnityEngine_Transform__set_localScale(v100, *(UnityEngine_Vector3_o *)&v101, 0LL);
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
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_79;
      label->fields.main = (struct UILabel_o *)this;
      p_fields = (ScriptMessageCommonManager_o **)&label->fields;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
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
      v95 = (UnityEngine_GameObject_o *)this;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v10->fields.messageScroll,
                                               0LL);
      if ( !this )
        goto LABEL_79;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v95 )
        goto LABEL_79;
      UnityEngine_GameObject__set_layer(v95, (int32_t)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                               (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                               (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_79;
      label->fields.main = (struct UILabel_o *)this;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&label->fields,
        (System_Int32_array **)this,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_79;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( !this )
      goto LABEL_79;
    v96 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v97 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v96 )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(v96, *(UnityEngine_Vector3_o *)&v97, 0LL);
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
    v29 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v29, (System_String_o *)StringLiteral_5810/*"Effect Parent"*/, 0LL);
    *p_effect = (ScriptMessageCommonManager_o *)v29;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&label->fields.effect,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    this = *p_effect;
    if ( !*p_effect )
      goto LABEL_79;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_79;
    UnityEngine_Transform__SetParent_35435768((UnityEngine_Transform_o *)this, v10->fields.messageScroll, 0, 0LL);
    v36 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v36, (System_String_o *)StringLiteral_5808/*"Effect Child"*/, 0LL);
    label->fields.frontEffect = v36;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&label->fields.frontEffect,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
    if ( !this )
      goto LABEL_79;
    this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_79;
    UnityEngine_Transform__SetParent_35435768((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0LL);
  }
  if ( !hasRuby )
    return;
LABEL_20:
  this = (ScriptMessageCommonManager_o *)v10->fields.rubyStock;
  if ( !this )
    goto LABEL_79;
  if ( SLODWORD(this->fields.rootPanel) >= 1 )
  {
    v43 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
            (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
            (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    label->fields.ruby = (struct UILabel_o *)v43;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&label->fields.ruby,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
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
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_79;
  Component_srcLineSprite = (struct UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  label->fields.ruby = Component_srcLineSprite;
  p_ruby = &label->fields.ruby;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&label->fields.ruby,
    (System_Int32_array **)Component_srcLineSprite,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
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
    || (v78 = (UnityEngine_GameObject_o *)this,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v10->fields.messageScroll,
                                                  0LL)) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL),
        !v78) )
  {
LABEL_79:
    sub_B2C434(this, label);
  }
  UnityEngine_GameObject__set_layer(v78, (int32_t)this, 0LL);
LABEL_55:
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_79;
  v79 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v79 )
    goto LABEL_79;
  UnityEngine_Transform__set_localPosition(v79, *(UnityEngine_Vector3_o *)&v80, 0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.ruby;
  if ( !this )
    goto LABEL_79;
  v83 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Vector3__get_one(0LL);
  if ( !v83 )
    goto LABEL_79;
  UnityEngine_Transform__set_localScale(v83, *(UnityEngine_Vector3_o *)&v84, 0LL);
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

  if ( (byte_418D308 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9060/*"MessageShake/LogMark/BackLogButton"*/, v3);
    byte_418D308 = 1;
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
    sub_B2C434(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_21195816(transform, (System_String_o *)StringLiteral_9060/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_418D303 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptMessageCommonManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418D303 = 1;
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
      (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&label->fields, 0LL, v11, v12, v13, v14, v15, v16);
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
      (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&label->fields.ruby, 0LL, v19, v20, v21, v22, v23, v24);
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
          (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&label->fields.image, 0LL, v27, v28, v29, v30, v31, v32);
        goto LABEL_26;
      }
    }
LABEL_28:
    sub_B2C434(this, label);
  }
LABEL_26:
  ScriptMessageLabel__Release(label, (const MethodInfo *)label);
  this = v4[61];
  if ( !this )
    goto LABEL_28;
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
    (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
    (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
    (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418D31F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D31F = 1;
  }
  messageScroll = this->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)messageScroll,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_B2C434(messageScroll, method);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(autoMessageButton, isOn);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoMessageButton, isOn, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(backLogButton, isOn);
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

  if ( (byte_418D328 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16951/*"btn_auto_on"*/, isOn);
    sub_B2C35C(&StringLiteral_16950/*"btn_auto_off"*/, v5);
    byte_418D328 = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_B2C434(0LL, isOn);
  v7 = (System_String_o **)&StringLiteral_16951/*"btn_auto_on"*/;
  if ( !isOn )
    v7 = (System_String_o **)&StringLiteral_16950/*"btn_auto_off"*/;
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
      sub_B2C434(0LL, method);
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

  if ( (byte_418D310 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418D310 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.defaultColorTag, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(0LL, enable);
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
    sub_B2C434(0LL, enable);
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

  if ( (byte_418D313 & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_418D313 = 1;
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_418D312 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, font);
    byte_418D312 = 1;
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
      sub_B2C434(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)defaultFontType,
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
    sub_B2C434(0LL, flag);
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

  if ( (byte_418D326 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, isEnable);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418D326 = 1;
  }
  messageBackBase = this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_10;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)messageBackBase,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B2C434(messageBackBase, isEnable);
  }
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

  if ( (byte_418D306 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isActive);
    byte_418D306 = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_418D309 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, *(_QWORD *)&x);
    byte_418D309 = 1;
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
    sub_B2C434(rootPanel, *(_QWORD *)&x);
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
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  _BOOL4 isWindowBack; // w8
  UnityEngine_GameObject_o *talkNameIcon; // x0
  float v30; // s0
  int32_t talkNameBackDefaultWidth; // w8
  double v32; // d0
  long double v33; // q0
  UnityEngine_GameObject_c *klass; // x8
  float x; // s1
  float betweenLineHeight; // s3
  float y; // s2
  float v38; // w8
  float v39; // s0
  const MethodInfo *v40; // x1
  long double v41; // q0

  if ( (byte_418D317 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_129/*" 1.5]"*/, imageName);
    sub_B2C35C(&StringLiteral_15798/*"[image "*/, v11);
    byte_418D317 = 1;
  }
  v12 = System_String__Concat_44305532(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v12, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v13);
    return 1;
  }
  this->fields.talkName = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.talkName,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.talkNameOnly = charaname;
  sub_B2C2F8(
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
      v12 = System_String__Concat_44308944(
              (System_String_o *)StringLiteral_15798/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_129/*" 1.5]"*/,
              v12,
              0LL);
    x = this->fields.startPosition.fields.x;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptMessageCommonManager__UpdateLabels(this, v12, 1, 0, v27);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v38 = this->fields.startPosition.fields.x;
    v39 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v39;
    this->fields.dispPosition.fields.x = v38;
    this->fields.dispPosition.fields.y = y - (float)(v39 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v40);
    talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameIcon;
    if ( talkNameIcon )
      goto LABEL_22;
LABEL_28:
    sub_B2C434(talkNameIcon, v26);
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
  v30 = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)talkNameIcon, 0LL).fields.x;
  talkNameBackDefaultWidth = this->fields.talkNameBackDefaultWidth;
  if ( v30 > (float)talkNameBackDefaultWidth )
  {
    if ( v30 == INFINITY )
      v32 = -v30;
    else
      v32 = v30;
    talkNameBackDefaultWidth = (int)v32;
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
    LODWORD(v33) = 0;
    goto LABEL_23;
  }
  UISprite__set_spriteName((UISprite_o *)talkNameIcon, imageName, 0LL);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.talkNameIcon;
  if ( !talkNameIcon )
    goto LABEL_28;
  klass = talkNameIcon->klass;
  LODWORD(v33) = 1.0;
LABEL_23:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v33);
  talkNameIcon = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameIcon )
    goto LABEL_28;
  LODWORD(v41) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v41 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameIcon->klass[1]._1.castClass)(
    talkNameIcon,
    talkNameIcon->klass[1]._1.declaringType,
    v41);
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
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UISprite_o *talkNameBack; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UISprite_o *v23; // x8
  struct System_String_o *mSpriteName; // x1
  UISprite_o *v25; // x21
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v27; // x8

  if ( (byte_418D316 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, imageName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418D316 = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.talkNameAtlas,
      (System_Int32_array **)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v23 = this->fields.talkNameBack;
    if ( !v23 )
      goto LABEL_23;
    mSpriteName = v23->fields.mSpriteName;
    this->fields.talkNameSpriteName = mSpriteName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.talkNameSpriteName,
      (System_Int32_array **)mSpriteName,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(imageName, 0LL);
  v25 = this->fields.talkNameBack;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !v25 )
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
    AtlasManager__SetMark(v25, imageName, 0LL);
  }
  IsNullOrEmpty = this->fields.talkNameBack;
  if ( !IsNullOrEmpty )
    goto LABEL_23;
  AtlasSprite = UISprite__GetAtlasSprite(IsNullOrEmpty, 0LL);
  if ( AtlasSprite )
  {
    v27 = AtlasSprite;
    IsNullOrEmpty = this->fields.talkNameBack;
    if ( IsNullOrEmpty )
    {
      UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, (v27->fields.height & 1) + v27->fields.height, 0LL);
      return;
    }
LABEL_23:
    sub_B2C434(IsNullOrEmpty, v8);
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

  if ( (byte_418D311 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    byte_418D311 = 1;
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
    sub_B2C434(this, method);
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

  if ( (byte_418D31E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenPosition___, isFast);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5978/*"EndScroll"*/, v6);
    byte_418D31E = 1;
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
        sub_B2C2F8((BattleServantConfConponent_o *)&v11[3], v12, v13, v14, v15, v16, v17, v18);
        v19 = (System_Int32_array **)StringLiteral_5978/*"EndScroll"*/;
        v11[3].monitor = (void *)StringLiteral_5978/*"EndScroll"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v11[3].monitor, v19, v20, v21, v22, v23, v24, v25);
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
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_B2C434(messageScroll, isFast);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageScroll, this->fields.scrollPosition, 0LL);
  this->fields.isFastMessageRequest = 0;
  this->fields.isScroll = 0;
}


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
  System_String_o *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  long double v39; // q0
  float stepTime; // s8
  System_Text_StringBuilder_o *v41; // x23
  System_Text_StringBuilder_o **v42; // x24
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **defaultColorTag; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ScriptMessageCommonManager_ProcAddLabel_o *v56; // x23
  int32_t v57; // w26
  int v58; // w25
  System_String_o *v59; // x0
  const MethodInfo *v60; // x2
  System_String_o *v61; // x27
  int32_t v62; // w1
  int32_t v63; // w2
  System_String_o *v64; // x26
  float betweenLineHeight; // s3
  float y; // s2
  float x; // w8
  float v68; // s0
  const MethodInfo *v69; // x1
  System_String_o *v70; // x0
  float v71; // s3
  float v72; // s2
  float v73; // w8
  float v74; // s0
  const MethodInfo *v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  BattleServantConfConponent_o *v83; // x0
  const MethodInfo *v84; // x2
  System_String_o *v85; // x26
  System_String_array *v86; // x26
  struct System_String_o *v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  const MethodInfo *v94; // x1
  System_String_o *v95; // x0
  const MethodInfo *v96; // x4
  bool v97; // w8
  char v98; // w3
  System_String_o *v99; // x1
  ScriptMessageCommonManager_o *v100; // x0
  const MethodInfo *v101; // x3
  _BOOL4 isEffectMessage; // w27
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x2
  int32_t v105; // w28
  System_String_o *v106; // x0
  int32_t BraceIndex; // w0
  System_String_o *v108; // x0
  const MethodInfo *v109; // x1
  int32_t v110; // w26
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  int32_t v119; // w27
  System_Text_StringBuilder_o *v120; // x28
  __int64 v121; // x1
  const MethodInfo *v122; // x3
  ScriptReplaceString_c *v123; // x0
  int32_t playerGenderIndex; // w27
  struct System_String_o *v125; // x1
  System_String_o *v126; // x26
  System_Text_StringBuilder_o *v127; // x20
  ScriptMessageCommonManager_ProcAddLabel2_o *v128; // [xsp+0h] [xbp-80h]
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-78h]
  System_String_o **colorTag; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418D305 & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, txt);
    sub_B2C35C(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v8);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v9);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v10);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B2C35C(&Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__0__, v12);
    sub_B2C35C(&Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__1__, v13);
    sub_B2C35C(&ScriptMessageCommonManager___c__DisplayClass119_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_21979/*"servantName"*/, v15);
    sub_B2C35C(&StringLiteral_15644/*"[-]"*/, v16);
    sub_B2C35C(&StringLiteral_19254/*"i"*/, v17);
    sub_B2C35C(&StringLiteral_80/*" "*/, v18);
    sub_B2C35C(&StringLiteral_15640/*"[*"*/, v19);
    sub_B2C35C(&StringLiteral_15835/*"[~1]"*/, v20);
    sub_B2C35C(&StringLiteral_15770/*"[^"*/, v21);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v22);
    sub_B2C35C(&StringLiteral_21662/*"r"*/, v23);
    sub_B2C35C(&StringLiteral_18280/*"effectmessage"*/, v24);
    sub_B2C35C(&StringLiteral_20228/*"line"*/, v25);
    sub_B2C35C(&StringLiteral_19412/*"image"*/, v26);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v27);
    sub_B2C35C(&StringLiteral_15834/*"[~"*/, v28);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v29);
    byte_418D305 = 1;
  }
  text = 0LL;
  v30 = sub_B2C42C(ScriptMessageCommonManager___c__DisplayClass119_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass119_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass119_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_113;
  *(_QWORD *)(v30 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_BYTE *)(v30 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (System_String_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_113;
  stepTime = 0.0;
  LODWORD(v39) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v39 = 0.0;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, long double))rootPanel->klass->vtable._8_System_IConvertible_ToChar.method)(
    rootPanel,
    rootPanel->klass->vtable._9_System_IConvertible_ToSByte.methodPtr,
    v39);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v30 + 32) = stepTime;
  v41 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v41, 0LL);
  v42 = (System_Text_StringBuilder_o **)(v30 + 16);
  *(_QWORD *)(v30 + 16) = v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)v41, v43, v44, v45, v46, v47, v48);
  defaultColorTag = (System_Int32_array **)this->fields.defaultColorTag;
  colorTag = (System_String_o **)(v30 + 40);
  *(_QWORD *)(v30 + 40) = defaultColorTag;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 40), defaultColorTag, v50, v51, v52, v53, v54, v55);
  v56 = (ScriptMessageCommonManager_ProcAddLabel_o *)sub_B2C42C(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    v56,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__0__,
    0LL);
  v128 = (ScriptMessageCommonManager_ProcAddLabel2_o *)sub_B2C42C(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    v128,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass119_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_113:
    sub_B2C434(rootPanel, v32);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_109:
    if ( !v56 )
      goto LABEL_113;
    goto LABEL_110;
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  v57 = 0;
  v58 = 0;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v57, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      v119 = v57 + 1;
      rootPanel = (System_String_o *)ScriptMessageLabel__GetBraceIndex(txt, v57 + 1, v103);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_108;
      v105 = (int)rootPanel;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      rootPanel = ScriptMessageLabel__GetCommandName(txt, v119, v104);
      if ( !rootPanel )
        goto LABEL_113;
      rootPanel = (System_String_o *)System_String__Equals_44292872(
                                       rootPanel,
                                       (System_String_o *)StringLiteral_18280/*"effectmessage"*/,
                                       0LL);
      if ( ((unsigned __int8)rootPanel & 1) != 0 )
      {
        v106 = System_String__Substring_44369268(txt, v57 + 15, v58 + v105 - 15, 0LL);
        rootPanel = (System_String_o *)System_String__op_Equality(v106, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
        if ( ((unsigned __int8)rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      goto LABEL_107;
    }
    v119 = v57 + 1;
LABEL_108:
    v58 = -v119;
    v57 = v119;
    if ( v119 >= txt->fields.m_stringLength )
      goto LABEL_109;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v120 = *v42;
    rootPanel = (System_String_o *)System_String__get_Chars(txt, v57, 0LL);
    if ( !v120 )
      goto LABEL_113;
    v119 = v57 + 1;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42411944(v120, (uint16_t)rootPanel, 0LL);
    goto LABEL_108;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v119 = v57 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v57 + 1, v103);
  if ( BraceIndex == -1 )
  {
    rootPanel = (System_String_o *)*v42;
    if ( !*v42 )
      goto LABEL_113;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42408700(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     (System_String_o *)StringLiteral_15634/*"["*/,
                                     0LL);
    goto LABEL_108;
  }
  v105 = BraceIndex;
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v119, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v108 = System_String__Substring_44369268(txt, v57 + 2, v58 + v105 - 2, 0LL);
    v110 = System_Int32__Parse(v108, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    String = ScriptReplaceString__GetString(v110, v109);
    TagSplitString = System_String__Concat_44305532(String, (System_String_o *)StringLiteral_15644/*"[-]"*/, 0LL);
    goto LABEL_104;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v119, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    }
    if ( !byte_4183DF6 )
    {
      sub_B2C35C(&ScriptReplaceString_TypeInfo, v121);
      byte_4183DF6 = 1;
    }
    v123 = ScriptReplaceString_TypeInfo;
    if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v123 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v123->static_fields->playerGenderIndex;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v57 + 2, playerGenderIndex, v122);
LABEL_104:
    v125 = *(struct System_String_o **)(v30 + 40);
    v126 = TagSplitString;
    this->fields.defaultColorTag = v125;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v125,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    v97 = isStretch;
    v98 = *(_BYTE *)(v30 + 36);
    v100 = this;
    v99 = v126;
LABEL_105:
    ScriptMessageCommonManager__UpdateLabels(v100, v99, v97, v98, v96);
    v82 = (System_Int32_array **)this->fields.defaultColorTag;
    *(_QWORD *)(v30 + 40) = v82;
    v83 = (BattleServantConfConponent_o *)(v30 + 40);
LABEL_106:
    sub_B2C2F8(v83, v82, v76, v77, v78, v79, v80, v81);
LABEL_107:
    v119 = v105 + 1;
    goto LABEL_108;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v119, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v59 = System_String__Substring_44369268(txt, v57, v58 + v105 + 1, 0LL);
    goto LABEL_34;
  }
  rootPanel = (System_String_o *)System_String__get_Chars(txt, v119, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_107;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootPanel = ScriptMessageLabel__GetCommandName(txt, v119, v60);
  if ( !rootPanel )
    goto LABEL_113;
  v61 = rootPanel;
  rootPanel = (System_String_o *)System_String__Equals_44292872(rootPanel, (System_String_o *)StringLiteral_19412/*"image"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v62 = v57 + 7;
    v63 = v58 + v105 - 7;
LABEL_33:
    v70 = System_String__Substring_44369268(txt, v62, v63, 0LL);
    v59 = System_String__Concat_44307816(
            (System_String_o *)StringLiteral_15770/*"[^"*/,
            v70,
            (System_String_o *)StringLiteral_15870/*"]"*/,
            0LL);
LABEL_34:
    v32 = v59;
    rootPanel = (System_String_o *)v128;
    if ( !v128 )
      goto LABEL_113;
LABEL_35:
    ScriptMessageCommonManager_ProcAddLabel2__Invoke((ScriptMessageCommonManager_ProcAddLabel2_o *)rootPanel, v32, 0LL);
    goto LABEL_107;
  }
  if ( System_String__Equals_44292872(v61, (System_String_o *)StringLiteral_18280/*"effectmessage"*/, 0LL) )
  {
    v64 = System_String__Substring_44369268(txt, v57 + 15, v58 + v105 - 15, 0LL);
    rootPanel = (System_String_o *)System_String__op_Inequality(v64, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
    if ( ((unsigned __int8)rootPanel & 1) != 0 )
    {
      if ( !v56 )
        goto LABEL_113;
      ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
      rootPanel = System_String__Concat_44307816(
                    (System_String_o *)StringLiteral_15640/*"[*"*/,
                    v64,
                    (System_String_o *)StringLiteral_15870/*"]"*/,
                    0LL);
      if ( !v128 )
        goto LABEL_113;
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v128, rootPanel, 0LL);
      betweenLineHeight = this->fields.betweenLineHeight;
      y = this->fields.dispPosition.fields.y;
      x = this->fields.startPosition.fields.x;
      v68 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
      this->fields.beforeTextOnlyLineHeight = v68;
      this->fields.dispPosition.fields.x = x;
      this->fields.dispPosition.fields.y = y - (float)(v68 + betweenLineHeight);
      ScriptMessageCommonManager__SetDefaultState(this, v69);
      ScriptMessageCommonManager_ProcAddLabel2__Invoke(v128, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_107;
  }
  rootPanel = (System_String_o *)System_String__Equals_44292872(v61, (System_String_o *)StringLiteral_19254/*"i"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v62 = v57 + 3;
    v63 = v58 + v105 - 3;
    goto LABEL_33;
  }
  rootPanel = (System_String_o *)System_String__Equals_44292872(v61, (System_String_o *)StringLiteral_21662/*"r"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v71 = this->fields.betweenLineHeight;
    v72 = this->fields.dispPosition.fields.y;
    v73 = this->fields.startPosition.fields.x;
    v74 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v74;
    this->fields.dispPosition.fields.x = v73;
    this->fields.dispPosition.fields.y = v72 - (float)(v74 + v71);
    ScriptMessageCommonManager__SetDefaultState(this, v75);
    v82 = (System_Int32_array **)this->fields.defaultColorTag;
    v83 = (BattleServantConfConponent_o *)(v30 + 40);
    *colorTag = (System_String_o *)v82;
    goto LABEL_106;
  }
  rootPanel = (System_String_o *)System_String__Equals_44292872(v61, (System_String_o *)StringLiteral_21979/*"servantName"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    v85 = System_String__Substring_44369268(txt, v57 + 12, v58 + v105 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v86 = ScriptMessageLabel__AnalysTagParam(v85, 0, v84);
    v87 = *(struct System_String_o **)(v30 + 40);
    this->fields.defaultColorTag = v87;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_defaultColorTag,
      (System_Int32_array **)v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    v95 = ScriptMessageLabel__GetServantChangeName(v86, v94);
    v97 = isStretch;
    v98 = *(_BYTE *)(v30 + 36);
    v99 = v95;
    v100 = this;
    goto LABEL_105;
  }
  rootPanel = (System_String_o *)System_String__StartsWith(v61, (System_String_o *)StringLiteral_20228/*"line"*/, 0LL);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_113;
    ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
    rootPanel = System_String__Substring_44369268(txt, v57 + 5, v58 + v105 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_113;
    v32 = rootPanel;
    if ( rootPanel->fields.m_stringLength < 1 )
    {
      if ( !v128 )
        goto LABEL_113;
      v32 = (System_String_o *)StringLiteral_15835/*"[~1]"*/;
    }
    else
    {
      rootPanel = System_String__Concat_44307816(
                    (System_String_o *)StringLiteral_15834/*"[~"*/,
                    rootPanel,
                    (System_String_o *)StringLiteral_15870/*"]"*/,
                    0LL);
      if ( !v128 )
        goto LABEL_113;
      v32 = rootPanel;
    }
    rootPanel = (System_String_o *)v128;
    goto LABEL_35;
  }
  if ( v105 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44369268(txt, v57, v58 + v105 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, v101);
    rootPanel = (System_String_o *)*v42;
    if ( !*v42 )
      goto LABEL_113;
    rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42408700(
                                     (System_Text_StringBuilder_o *)rootPanel,
                                     text,
                                     0LL);
    goto LABEL_107;
  }
  v127 = *v42;
  rootPanel = System_String__Substring(txt, v57, 0LL);
  if ( !v127 )
    goto LABEL_113;
  rootPanel = (System_String_o *)System_Text_StringBuilder__Append_42408700(v127, rootPanel, 0LL);
  if ( !v56 )
    goto LABEL_113;
LABEL_110:
  ScriptMessageCommonManager_ProcAddLabel__Invoke(v56, 0LL);
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
    sub_B2C434(touchPress, isShowNextTouchObject);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScriptMessageCommonManager_ProcAddLabel_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptMessageCommonManager_ProcAddLabel2_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  ScriptMessageCommonManager_ProcAddLabel2_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, txt, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = txt->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(txt, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(txt, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(txt, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(txt, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(txt, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, txt, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, txt, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                txt,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, txt, v31);
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
    sub_B2C434(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v6->fields.defaultColorTag = tmpColorTag;
  sub_B2C2F8(&v6->fields.defaultColorTag, tmpColorTag);
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
    sub_B2C434(this, text);
  tmpColorTag = v3->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = tmpColorTag;
  sub_B2C2F8(&_4__this->fields.defaultColorTag, tmpColorTag);
}