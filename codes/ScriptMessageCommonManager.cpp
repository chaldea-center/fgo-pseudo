void ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v10; // w1
  System_Collections_Generic_Stack_T__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Stack_T__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Stack_T__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Stack_T__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C3999B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_1C32C20(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3999B = 1;
  }
  this->fields.defaultBetweenLineHeight = 4.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_C0C580;
  *(_OWORD *)&this->fields.defaultAllDispSize.fields.x = xmmword_C0DE40;
  *(int32x2_t *)&this->fields.windowOpenTime = vdup_n_s32(0x3ECCCCCDu);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  v10 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v10, v2, v3);
  v11 = (System_Collections_Generic_Stack_T__o *)sub_1C32E6C(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v11,
    (const MethodInfo_39F897C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainStock, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_Stack_T__o *)sub_1C32E6C(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v14,
    (const MethodInfo_39F897C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyStock, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_Stack_T__o *)sub_1C32E6C(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v17,
    (const MethodInfo_39F897C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageStock, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_Stack_T__o *)sub_1C32E6C(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v20,
    (const MethodInfo_39F897C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.labelStock, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispLabelList, (int32_t)v23, v24, v25);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptMessageLabel_o *v14; // x20
  __int64 v15; // x0
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v17; // x5
  System_String_o *v18; // x23
  System_String_array *v19; // x25
  const MethodInfo *v20; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v25; // x7
  __int64 *p_fields; // x24
  __int64 *p_ruby; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x23
  const MethodInfo *v31; // x5
  int v32; // w8
  __int64 v33; // x24
  System_String_o *v34; // x23
  float v35; // s0
  struct ScriptMessageWindow_o *v36; // x8
  float v37; // s9
  struct ScriptMessageWindow_o *v38; // x8
  int v39; // w8
  System_String_o *v40; // x23
  __int64 v41; // x24
  struct ScriptMessageWindow_o *v42; // x8
  System_String_o **v43; // x9
  int32_t v44; // w23
  System_String_o *v45; // x24
  const MethodInfo *v46; // x5
  struct ScriptMessageWindow_o *v47; // x8
  __int64 *p_image; // x25
  System_String_o *v49; // x1
  System_String_array *v50; // x0
  System_String_array *v51; // x24
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  const MethodInfo *v54; // x5
  System_String_o *v55; // x23
  float v56; // s8
  float v57; // s10
  float v58; // s9
  System_String_array *v59; // x0
  System_String_array *v60; // x25
  System_String_o *v61; // x0
  float v62; // s0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  int32_t v66; // w24
  __int64 *v67; // x24
  System_String_o *rubyText; // x0
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  System_String_o *v73; // x23
  __int64 v74; // x24
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v76; // x23
  const MethodInfo *v77; // x5
  struct ScriptMessageWindow_o *v78; // x8
  System_String_o *v79; // x24
  __int64 v80; // x24
  int v81; // w25
  int32_t v82; // w0
  struct UnityEngine_Vector2_o v83; // d0
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v85; // 0:s1.4,4:s2.4

  if ( (byte_4C39974 & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_1C32C20(&StringLiteral_13628/*"Talk/"*/);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&StringLiteral_21238/*"line"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39974 = 1;
  }
  pos = 0;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_112;
  v14 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v15 = Label + 112;
  *(float *)(v15 + 52) = tm;
  sub_1C32BC4((CGThumbnailListItem_o *)v15, (int32_t)colorTag, v12, v13);
  if ( !text )
    goto LABEL_112;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0) != 91 )
    goto LABEL_70;
  if ( System_String__get_Chars(text, 1, 0) == 35 )
  {
    v18 = System_String__Substring_63564468(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_1C32CC8(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v18 )
        goto LABEL_112;
      v19 = System_String__Split_63567620(v18, (System_Char_array *)Label, 0);
      ScriptMessageCommonManager__PreProcLabel(this, v14, 1, 0, 0, v20);
      if ( !v19 )
        goto LABEL_112;
      max_length = v19->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v25 = v19->m_Items[0];
        p_fields = (__int64 *)&v14->fields;
        p_ruby = (__int64 *)&v14->fields.ruby;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v14,
            &v14->fields.main,
            &v14->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v25,
            this->fields.fontType,
            0);
        else
          ScriptMessageLabel__UpdateRuby(
            v14,
            &v14->fields.main,
            &v14->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v25,
            v19->m_Items[1],
            this->fields.fontType,
            0,
            0);
        if ( tm >= 0.0 )
        {
          Label = *p_fields;
          if ( !*p_fields )
            goto LABEL_112;
          UILabel__set_text((UILabel_o *)Label, (System_String_o *)StringLiteral_1/*""*/, 0);
          Label = *p_ruby;
          if ( !*p_ruby )
            goto LABEL_112;
          v49 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
          UILabel__set_text((UILabel_o *)Label, v49, 0);
        }
LABEL_74:
        if ( isFoward )
        {
          rubyText = v14->fields.rubyText;
          v14->fields.mainPosition.fields.x = v14->fields.mainPosition.fields.x - v14->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0) )
            v14->fields.rubyPosition.fields.x = v14->fields.rubyPosition.fields.x - v14->fields.widthSize;
          this->fields.dispPosition = dispPosition;
        }
        Label = (__int64)this->fields.dispLabelList;
        if ( Label )
        {
          v69 = *(_QWORD *)(Label + 16);
          v70 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
          ++*(_DWORD *)(Label + 28);
          if ( v69 )
          {
            v71 = *(int *)(Label + 24);
            if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Label,
                (Il2CppObject *)v14,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = v69 + 8 * v71;
              *(_DWORD *)(Label + 24) = v71 + 1;
              *(_QWORD *)(v72 + 32) = v14;
              sub_1C32BC4((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v14, v28, v29);
            }
            return;
          }
        }
LABEL_112:
        sub_1C32E7C(Label);
      }
    }
LABEL_113:
    sub_1C32E84(Label);
  }
  if ( System_String__get_Chars(text, 1, 0) == 94 )
  {
    v30 = System_String__Substring_63564468(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_1C32CC8(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v30 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_63567620(v30, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_112;
    v32 = *(_DWORD *)(Label + 24);
    v33 = Label;
    if ( v32 <= 1 )
    {
      if ( !v32 )
        goto LABEL_113;
      v73 = *(System_String_o **)(Label + 32);
      Label = sub_1C32CC8(char___TypeInfo, 1);
      if ( !Label )
        goto LABEL_112;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      *(_WORD *)(Label + 32) = 58;
      if ( !v73 )
        goto LABEL_112;
      Label = (__int64)System_String__Split_63567620(v73, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_112;
      v74 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_112;
      v76 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0);
      if ( (Label & 1) == 0 )
      {
        v78 = this->fields.currentMessageWindow;
        if ( !v78 )
          goto LABEL_112;
        v76 = System_String__Concat_63518544(v76, v78->fields.imageSuffix, 0);
      }
      if ( *(int *)(v74 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v14, 0, 1, 0, v77);
        ScriptMessageLabel__UpdateImage(
          v14,
          &v14->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v76,
          this->fields.horizontalAlign,
          0);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v14, 1, 1, 0, v77);
        if ( *(_DWORD *)(v74 + 24) <= 1u )
          goto LABEL_113;
        ScriptMessageLabel__UpdateImageRuby(
          v14,
          &v14->fields.image,
          &v14->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v76,
          *(System_String_o **)(v74 + 40),
          0,
          this->fields.horizontalAlign,
          0);
      }
    }
    else
    {
      ScriptMessageCommonManager__PreProcLabel(this, v14, 0, 1, 0, v31);
      if ( *(_DWORD *)(v33 + 24) < 2u )
        goto LABEL_113;
      v34 = *(System_String_o **)(v33 + 32);
      v35 = System_Single__Parse(*(System_String_o **)(v33 + 40), 0);
      v36 = this->fields.currentMessageWindow;
      if ( !v36 )
        goto LABEL_112;
      v37 = v35;
      Label = System_String__IsNullOrEmpty(v36->fields.imageSuffix, 0);
      if ( (Label & 1) == 0 )
      {
        v38 = this->fields.currentMessageWindow;
        if ( !v38 )
          goto LABEL_112;
        Label = (__int64)System_String__Concat_63518544(v34, v38->fields.imageSuffix, 0);
        v34 = (System_String_o *)Label;
      }
      v39 = *(_DWORD *)(v33 + 24);
      if ( v39 == 2 )
      {
        ScriptMessageLabel__UpdateImage_44765884(
          v14,
          &v14->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v37,
          v34,
          this->fields.horizontalAlign,
          0);
      }
      else if ( v39 <= 3 )
      {
        if ( (unsigned int)v39 <= 2 )
          goto LABEL_113;
        v79 = *(System_String_o **)(v33 + 48);
        Label = sub_1C32CC8(char___TypeInfo, 1);
        if ( !Label )
          goto LABEL_112;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        *(_WORD *)(Label + 32) = 44;
        if ( !v79 )
          goto LABEL_112;
        Label = (__int64)System_String__Split_63567620(v79, (System_Char_array *)Label, 0);
        if ( !Label )
          goto LABEL_112;
        v80 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
        if ( *(_DWORD *)(v80 + 24) <= 1u )
          goto LABEL_113;
        v81 = Label;
        v82 = System_Int32__Parse(*(System_String_o **)(v80 + 40), 0);
        v85.fields.x = (float)v81;
        v85.fields.y = (float)v82;
        ScriptMessageLabel__UpdateImage_44766036(
          v14,
          &v14->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v37,
          v34,
          v85,
          this->fields.horizontalAlign,
          0);
      }
    }
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = (__int64)v14->fields.image;
    if ( !Label )
      goto LABEL_112;
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0) == 126 )
  {
    v40 = System_String__Substring_63564468(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_1C32CC8(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_112;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v40 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_63567620(v40, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_112;
    v41 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
    v42 = this->fields.currentMessageWindow;
    if ( *(int *)(v41 + 24) >= 2 )
      v43 = (System_String_o **)(v41 + 40);
    else
      v43 = (System_String_o **)&StringLiteral_21238/*"line"*/;
    if ( !v42 )
      goto LABEL_112;
    v44 = Label;
    v45 = *v43;
    Label = System_String__IsNullOrEmpty(v42->fields.imageSuffix, 0);
    if ( (Label & 1) == 0 )
    {
      v47 = this->fields.currentMessageWindow;
      if ( !v47 )
        goto LABEL_112;
      v45 = System_String__Concat_63518544(v45, v47->fields.imageSuffix, 0);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v14, 0, 1, 0, v46);
    p_image = (__int64 *)&v14->fields.image;
    ScriptMessageLabel__UpdateLine(
      v14,
      &v14->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v44,
      v45,
      0);
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
  if ( System_String__get_Chars(text, 1, 0) != 42 )
  {
LABEL_70:
    ScriptMessageCommonManager__PreProcLabel(this, v14, 0, 0, 0, v17);
    v67 = (__int64 *)&v14->fields;
    ScriptMessageLabel__UpdateLabel(
      v14,
      &v14->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      0);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = *v67;
    if ( !*v67 )
      goto LABEL_112;
    v49 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_73;
  }
  Label = (__int64)System_String__Substring_63564468(text, 2, text->fields._stringLength - 3, 0);
  if ( !Label )
    goto LABEL_112;
  v50 = System_String__Split((System_String_o *)Label, 0x20u, 0, 0);
  if ( v50 )
  {
    v51 = v50;
    if ( SLODWORD(v50->max_length) >= 1 )
    {
      v52 = v50->m_Items[0];
      if ( v52 )
      {
        Label = System_String__op_Equality(v52, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
        if ( (Label & 1) == 0 )
        {
          if ( !LODWORD(v51->max_length) )
            goto LABEL_113;
          Label = (__int64)v51->m_Items[0];
          if ( !Label )
            goto LABEL_112;
          v53 = System_String__Trim((System_String_o *)Label, 0);
          v55 = System_String__Concat_63518544((System_String_o *)StringLiteral_13628/*"Talk/"*/, v53, 0);
          v56 = 0.0;
          v57 = 0.0;
          v58 = 0.0;
          if ( SLODWORD(v51->max_length) >= 2 )
          {
            Label = (__int64)v51->m_Items[1];
            if ( !Label )
              goto LABEL_112;
            Label = (__int64)System_String__Trim((System_String_o *)Label, 0);
            if ( !Label )
              goto LABEL_112;
            v59 = System_String__Split((System_String_o *)Label, 0x2Cu, 0, 0);
            v57 = 0.0;
            v58 = 0.0;
            if ( v59 )
            {
              v60 = v59;
              v57 = 0.0;
              v58 = 0.0;
              if ( SLODWORD(v59->max_length) >= 2 )
              {
                Label = (__int64)v59->m_Items[0];
                if ( !Label )
                  goto LABEL_112;
                v61 = System_String__Trim((System_String_o *)Label, 0);
                v62 = System_Single__Parse(v61, 0);
                if ( LODWORD(v60->max_length) <= 1 )
                  goto LABEL_113;
                Label = (__int64)v60->m_Items[1];
                if ( !Label )
                  goto LABEL_112;
                v58 = v62;
                v63 = System_String__Trim((System_String_o *)Label, 0);
                v57 = System_Single__Parse(v63, 0);
              }
            }
          }
          if ( SLODWORD(v51->max_length) <= 2 )
            goto LABEL_110;
          Label = (__int64)v51->m_Items[2];
          if ( !Label )
            goto LABEL_112;
          v64 = System_String__Trim((System_String_o *)Label, 0);
          v56 = System_Single__Parse(v64, 0);
          if ( SLODWORD(v51->max_length) < 4 )
          {
LABEL_110:
            v66 = 0;
          }
          else
          {
            Label = (__int64)v51->m_Items[3];
            if ( !Label )
              goto LABEL_112;
            v65 = System_String__Trim((System_String_o *)Label, 0);
            v66 = System_Int32__Parse(v65, 0);
          }
          v83 = this->fields.dispPosition;
          pos.fields.x = v58 + v83.fields.x;
          pos.fields.y = v57 + v83.fields.y;
          this->fields.dispPosition = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                      (float32x2_t)v83,
                                                                      (float32x2_t)1124073472LL).n64_u64[0];
          ScriptMessageCommonManager__PreProcLabel(this, v14, 0, 0, 1, v54);
          ScriptMessageLabel__UpdateEffect(v14, &v14->fields.effect, &pos, v55, v56, v66, 0);
          goto LABEL_74;
        }
      }
    }
  }
}


void ScriptMessageCommonManager__AddText(
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
  float v5; // s0

  p_startPosition = &this->fields.startPosition;
  v5 = COERCE_FLOAT(HIDWORD(*(_QWORD *)&this->fields.startPosition))
     - ScriptMessageCommonManager__GetVerticalAlignedOffset(this, dataList, method);
  p_startPosition[1] = *p_startPosition;
  this->fields.dispPosition.fields.y = v5;
}


void ScriptMessageCommonManager__CancelNextTouch(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  nextTouchRootObject = this->fields.nextTouchRootObject;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  if ( !nextTouchRootObject )
    sub_1C32E7C(0);
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
  UnityEngine_Object_o *currentMessageWindow; // x22
  UnityEngine_Object_o *defaultMessageWindow; // x23
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Object_o **v12; // x21
  struct ScriptMessageWindow_o *v13; // x8
  Il2CppObject *messageMainLabel; // x22
  UnityEngine_Transform_o *v15; // x23
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x22
  struct ScriptMessageWindow_o *v21; // x8
  Il2CppObject *messageRubyLabel; // x22
  UnityEngine_Transform_o *v23; // x23
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *v28; // x22
  struct ScriptMessageWindow_o *v29; // x8
  Il2CppObject *talkNameMainLabel; // x22
  UnityEngine_Transform_o *v31; // x23
  Il2CppObject *v32; // x23
  const MethodInfo *v33; // x3
  struct ScriptLineMessage_o *v34; // x22
  struct ScriptMessageWindow_o *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x22
  struct ScriptMessageWindow_o *v39; // x8
  Il2CppObject *talkNameRubyLabel; // x22
  UnityEngine_Transform_o *v41; // x23
  Il2CppObject *v42; // x23
  const MethodInfo *v43; // x3
  struct ScriptLineMessage_o *v44; // x22
  struct ScriptMessageWindow_o *v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x6
  const MethodInfo *v54; // x1

  if ( (byte_4C39988 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UILabel____78147200);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39988 = 1;
  }
  ScriptMessageCommonManager__DeleteLabels(this, (const MethodInfo *)prefab);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)talkNameManager, v5);
  talkNameManager = this->fields.defaultMessageWindow;
  if ( !talkNameManager )
    goto LABEL_57;
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !talkNameManager )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)talkNameManager, 0, 0);
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  defaultMessageWindow = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Inequality(currentMessageWindow, defaultMessageWindow, 0) )
  {
    talkNameManager = *p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_57;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)talkNameManager,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
  talkNameManager = this->fields.messageShake;
  if ( !talkNameManager )
    goto LABEL_57;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = UnityEngine_Object__Instantiate_object__51812484(
                      (Il2CppObject *)prefab,
                      transform,
                      (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_57;
  v12 = (UnityEngine_Object_o **)talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    0);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v12[16], 0, 0);
  v13 = this->fields.defaultMessageWindow;
  if ( !v13 )
    goto LABEL_57;
  messageMainLabel = (Il2CppObject *)v13->fields.messageMainLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    messageMainLabel = UnityEngine_Object__Instantiate_object__51812484(
                         messageMainLabel,
                         v15,
                         (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_UILabel____78147200);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageMainLabel,
      (UILabel_o *)v12[16],
      (UILabel_o *)messageMainLabel,
      v16);
  }
  if ( !messageMainLabel )
    goto LABEL_57;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
  this->fields.mainPrefab = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)v17, v18, v19);
  v20 = v12[17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v20, 0, 0);
  v21 = this->fields.defaultMessageWindow;
  if ( !v21 )
    goto LABEL_57;
  messageRubyLabel = (Il2CppObject *)v21->fields.messageRubyLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    messageRubyLabel = UnityEngine_Object__Instantiate_object__51812484(
                         messageRubyLabel,
                         v23,
                         (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_UILabel____78147200);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageRubyLabel,
      (UILabel_o *)v12[17],
      (UILabel_o *)messageRubyLabel,
      v24);
  }
  if ( !messageRubyLabel )
    goto LABEL_57;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageRubyLabel, 0);
  this->fields.rubyPrefab = v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v25, v26, v27);
  v28 = v12[18];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v28, 0, 0);
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v29 = this->fields.defaultMessageWindow;
    if ( !v29 )
      goto LABEL_57;
    talkNameMainLabel = (Il2CppObject *)v29->fields.talkNameMainLabel;
    v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v32 = UnityEngine_Object__Instantiate_object__51812484(
            talkNameMainLabel,
            v31,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_UILabel____78147200);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v32,
      (UILabel_o *)v12[18],
      (UILabel_o *)v32,
      v33);
    if ( !v32 )
      goto LABEL_57;
    v34 = this->fields.talkNameManager;
    talkNameManager = v32;
  }
  else
  {
    v35 = this->fields.defaultMessageWindow;
    if ( !v35 )
      goto LABEL_57;
    talkNameManager = v35->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_57;
    v34 = this->fields.talkNameManager;
  }
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !v34 )
    goto LABEL_57;
  v34->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1C32BC4((CGThumbnailListItem_o *)&v34->fields.mainPrefab, (int32_t)talkNameManager, v36, v37);
  v38 = v12[19];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v38, 0, 0);
  if ( ((unsigned __int8)talkNameManager & 1) == 0 )
  {
    v45 = this->fields.defaultMessageWindow;
    if ( v45 )
    {
      talkNameManager = v45->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v44 = this->fields.talkNameManager;
        goto LABEL_54;
      }
    }
LABEL_57:
    sub_1C32E7C(talkNameManager);
  }
  v39 = this->fields.defaultMessageWindow;
  if ( !v39 )
    goto LABEL_57;
  talkNameRubyLabel = (Il2CppObject *)v39->fields.talkNameRubyLabel;
  v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v42 = UnityEngine_Object__Instantiate_object__51812484(
          talkNameRubyLabel,
          v41,
          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_UILabel____78147200);
  ScriptMessageCommonManager__CopyFontEffects(
    (ScriptMessageCommonManager_o *)v42,
    (UILabel_o *)v12[19],
    (UILabel_o *)v42,
    v43);
  if ( !v42 )
    goto LABEL_57;
  v44 = this->fields.talkNameManager;
  talkNameManager = v42;
LABEL_54:
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0);
  if ( !v44 )
    goto LABEL_57;
  v44->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1C32BC4((CGThumbnailListItem_o *)&v44->fields.rubyPrefab, (int32_t)talkNameManager, v46, v47);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  v50 = v12[11];
  *((_QWORD *)talkNameManager + 7) = v50;
  sub_1C32BC4((CGThumbnailListItem_o *)((char *)talkNameManager + 56), (int32_t)v50, v48, v49);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)v12, v51, v52);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v53);
  ScriptMessageCommonManager__ResetScroll(this, v54);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3996D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4C3996D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    dispLabelList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v8.fields._current, v4);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v5 = this->fields.dispLabelList;
  if ( !v5 )
LABEL_11:
    sub_1C32E7C(dispLabelList);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  this->fields.isBusy = 0;
  *(_QWORD *)&this->fields.dispCountTimer = 3212836864LL;
  this->fields.isEffectMessage = 0;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  struct ScriptMessageWindow_o *v11; // x8

  v2 = this;
  if ( (byte_4C39986 & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39986 = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v4 = StringLiteral_1/*""*/;
  v2->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.talkName, v4, v5, v6);
  v7 = StringLiteral_1/*""*/;
  v2->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.talkNameOnly, v7, v8, v9);
  this = (ScriptMessageCommonManager_o *)v2->fields.talkNameManager;
  v2->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, v10), (v11 = v2->fields.currentMessageWindow) == 0)
    || (this = (ScriptMessageCommonManager_o *)v11->fields.talkNameIcon) == 0 )
  {
LABEL_9:
    sub_1C32E7C(this);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, const MethodInfo *, float))this->klass->vtable._8_IsEnableCloseDown.methodPtr)(
    this,
    this->klass->vtable._8_IsEnableCloseDown.method,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  UnityEngine_Transform_o *messageScroll; // x0
  unsigned __int64 v5; // d0 OVERLAPPED
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  float z; // s2
  int v8; // s1
  const MethodInfo *v9; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v12; // x8
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  struct ScriptMessageWindow_o *v20; // x8

  p_startPosition = &this->fields.startPosition;
  if ( (byte_4C39984 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39984 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  p_startPosition[1] = *p_startPosition;
  v5 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  p_startPosition[2] = (struct UnityEngine_Vector2_o)v5;
  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_12;
  messageScroll = currentMessageWindow->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_12;
  z = this->fields.scrollPosition.fields.z;
  v8 = HIDWORD(v5);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v5, 0);
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
  v13 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.talkName, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.talkNameOnly, v16, v17, v18);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, v19),
        (v20 = this->fields.currentMessageWindow) == 0)
    || (messageScroll = (UnityEngine_Transform_o *)v20->fields.talkNameIcon) == 0
    || (((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))messageScroll->klass[1]._1.this_arg.data)(
          messageScroll,
          *(_QWORD *)&messageScroll->klass[1]._1.this_arg.bits,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0) )
  {
LABEL_12:
    sub_1C32E7C(messageScroll);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0);
}


void ScriptMessageCommonManager__CloseDown(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  TweenPosition_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_AnimationCurve_o *windowDownCurve; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3997E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageCommonManager_CloseDown__);
    byte_4C3997E = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0);
  if ( localPosition.fields.y <= this->fields.windowClosePosY )
    return;
  rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootObject )
LABEL_24:
    sub_1C32E7C(rootObject);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v16.fields.y = this->fields.windowClosePosY;
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v9 = TweenPosition__Begin(gameObject, windowCloseTime, v16, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v9 )
    {
      v9->fields.method = 0;
      windowDownCurve = this->fields.windowDownCurve;
      v9->fields.animationCurve = windowDownCurve;
      sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.animationCurve, (int32_t)windowDownCurve, v10, v11);
      UITweener__PlayForward((UITweener_o *)v9, 0);
      v13 = Method_ScriptMessageCommonManager_CloseDown__;
      if ( (*((_BYTE *)Method_ScriptMessageCommonManager_CloseDown__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C32C38(Method_ScriptMessageCommonManager_CloseDown__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 7, 0, 0);
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
    sub_1C32E7C(this);
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
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v6; // x19
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4C39999 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39999 = 1;
  }
  mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   mainPrefab,
                                                   (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_15;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_object )
    goto LABEL_15;
  currentMessageWindow = this->fields.currentMessageWindow;
  v6 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  if ( !currentMessageWindow )
    goto LABEL_15;
  ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v7 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C313D1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v7 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v8 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C313D6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v8 )
LABEL_15:
    sub_1C32E7C(Component_object);
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UILabel_o *)v6;
}


void ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C3996C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4C3996C = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_27;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
                                                            (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( labelStock )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)labelStock,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
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
                                                            (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_27;
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v5, 0);
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_27:
    sub_1C32E7C(labelStock);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v6, 0);
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

  if ( (byte_4C39971 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4C39971 = 1;
  }
  imageStock = (__int64)this->fields.imageStock;
  if ( !imageStock )
    goto LABEL_20;
  if ( *(int *)(imageStock + 24) <= 0 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    imageStock = (__int64)UnityEngine_Object__Instantiate_object_(
                            imagePrefab,
                            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)imageStock,
                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C32E7C(imageStock);
  }
  imageStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                          (System_Collections_Generic_Stack_T__o *)imageStock,
                          (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v4 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_20;
LABEL_13:
  imageStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4C313D1 )
  {
    imageStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  imageStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4C313D6 )
  {
    imageStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
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

  if ( (byte_4C39972 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_4C39972 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_1C32E7C(0);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v5 = (ScriptMessageLabel_o *)sub_1C32E6C(ScriptMessageLabel_TypeInfo);
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

  if ( (byte_4C3996F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4C3996F = 1;
  }
  mainStock = (__int64)this->fields.mainStock;
  if ( !mainStock )
    goto LABEL_20;
  if ( *(int *)(mainStock + 24) < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mainStock,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
    sub_1C32E7C(mainStock);
  }
  mainStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)mainStock,
                         (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_20;
  v4 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0);
LABEL_13:
  mainStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4C313D1 )
  {
    mainStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mainStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4C313D6 )
  {
    mainStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
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

  if ( (byte_4C39970 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4C39970 = 1;
  }
  rubyStock = (__int64)this->fields.rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
  if ( *(int *)(rubyStock + 24) <= 0 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    rubyStock = (__int64)UnityEngine_Object__Instantiate_object_(
                           rubyPrefab,
                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rubyStock,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
    sub_1C32E7C(rubyStock);
  }
  rubyStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)rubyStock,
                         (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v4 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
LABEL_13:
  rubyStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v7 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4C313D1 )
  {
    rubyStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v7 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  rubyStock = (__int64)UnityEngine_Component__get_transform(v4, 0);
  v8 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4C313D6 )
  {
    rubyStock = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
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
  __int64 transform; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v7; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C3997C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3997C = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rootObject, 0, 0) )
  {
    transform = (__int64)this->fields.rootObject;
    if ( !transform )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(
                                           (UnityEngine_GameObject_o *)transform,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    {
      rootPanel = (UnityEngine_Object_o *)this->fields.rootPanel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(rootPanel, 0, 0) )
      {
        transform = (__int64)this->fields.rootPanel;
        if ( !transform )
          goto LABEL_36;
        v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
        {
          transform = (__int64)this->fields.rootObject;
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
            if ( transform )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)transform,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  v9 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4C313D1 )
                  {
                    transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                    byte_4C313D1 = 1;
                  }
                  if ( v9 )
                  {
                    UnityEngine_Transform__set_localPosition(
                      v9,
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
          sub_1C32E7C(transform);
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
  UnityEngine_Object_o *v7; // x23

  if ( (byte_4C3998E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3998E = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_15:
    sub_1C32E7C(dispLabelList);
  v4 = 0;
  v5 = 0;
  while ( v5 < *((_DWORD *)dispLabelList + 6) )
  {
    dispLabelList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)dispLabelList,
                      v5,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( dispLabelList )
    {
      v6 = dispLabelList;
      if ( *((int *)dispLabelList + 42) >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(*((System_String_o **)dispLabelList + 15), 0) )
          v4 += *((_DWORD *)v6 + 42);
        v7 = (UnityEngine_Object_o *)*((_QWORD *)v6 + 6);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
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
    sub_1C32E7C(0);
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
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  int v6; // w20
  int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int32_t defaultFontSize; // w24
  unsigned int v10; // w29
  int32_t v11; // w23
  int v12; // w27
  float v13; // s9
  int v14; // w28
  float v15; // s8
  System_String_o *v16; // x25
  System_String_o *v17; // x24
  int32_t v18; // w25
  System_String_o *v19; // x25
  int32_t VerticalAlignFromString; // w25
  float v21; // s0
  float v22; // s1
  float v23; // s0
  float v24; // s8
  float v25; // s2
  float v26; // s0
  int32_t v27; // w20
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w22
  float VerticalAlignOffset; // s0
  int32_t v32; // w8
  int32_t vAlign; // [xsp+8h] [xbp-88h]
  int32_t fontSize; // [xsp+Ch] [xbp-84h]

  v4 = this;
  if ( (byte_4C39985 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_19346/*"f"*/);
    sub_1C32C20(&StringLiteral_25435/*"・"*/);
    sub_1C32C20(&StringLiteral_22915/*"r"*/);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&StringLiteral_21154/*"l"*/);
    byte_4C39985 = 1;
  }
  defaultTextOnlyLineHeight = v4->fields.defaultTextOnlyLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v6 = 0x80000000;
  else
    v6 = (int)defaultTextOnlyLineHeight;
  if ( !dataList )
    sub_1C32E7C(this);
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v4->fields.defaultBetweenLineHeight;
  fontSize = v6;
  if ( max_length >= 1 )
  {
    vAlign = 0;
    defaultFontSize = v4->fields.defaultFontSize;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = 0.0;
    v14 = -1;
    v15 = v4->fields.defaultBetweenLineHeight;
    while ( v10 < max_length )
    {
      v16 = dataList->m_Items[v10];
      this = (ScriptMessageCommonManager_o *)System_String__op_Equality(v16, (System_String_o *)StringLiteral_19346/*"f"*/, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v10 + 2 >= LODWORD(dataList->max_length) )
          break;
        v17 = dataList->m_Items[v10 + 2];
        v18 = v4->fields.defaultFontSize;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v17, v18, 0);
        v10 += 4;
        if ( v6 < (int)this )
          v6 = (int)this;
        if ( v10 >= LODWORD(dataList->max_length) )
          break;
        defaultFontSize = (int)this;
        v19 = dataList->m_Items[v10];
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v19, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        this = (ScriptMessageCommonManager_o *)System_Math__Max_65041976(VerticalAlignFromString, v11, 0);
        v11 = (int)this;
      }
      else
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 v16,
                                                 (System_String_o *)StringLiteral_21154/*"l"*/,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 += 2;
          if ( v10 >= LODWORD(dataList->max_length) )
            break;
          v21 = System_Single__Parse(dataList->m_Items[v10], 0);
          if ( v21 >= 0.0 )
            v15 = v21;
          else
            v15 = v4->fields.defaultBetweenLineHeight;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v16,
                                                   (System_String_o *)StringLiteral_22915/*"r"*/,
                                                   0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v22 = v4->fields.defaultTextOnlyLineHeight;
            defaultBetweenLineHeight = v15;
            v23 = v15 + (float)(v4->fields.rubyLineHeight + (float)v6);
            v15 = v4->fields.defaultBetweenLineHeight;
            defaultFontSize = v4->fields.defaultFontSize;
            v13 = v13 + v23;
            vAlign = v11;
            fontSize = v6;
            if ( v22 == INFINITY )
              v6 = 0x80000000;
            else
              v6 = (int)v22;
            ++v12;
            v11 = 0;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v16,
                                                     (System_String_o *)StringLiteral_25435/*"・"*/,
                                                     0);
            if ( ((v14 < defaultFontSize) & (v12 == 1) & (unsigned __int8)this) != 0 )
              v14 = defaultFontSize;
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_38;
    }
    sub_1C32E84(this);
  }
  vAlign = 0;
  v14 = -1;
  v13 = 0.0;
LABEL_38:
  if ( v14 < 1 )
  {
    v27 = fontSize;
  }
  else
  {
    if ( !byte_4C31A98 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C31A98 = 1;
    }
    v24 = (float)v14 * 0.37;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = (float)(int)vcvtps_s32_f32(v24);
    v26 = -2147500000.0;
    v27 = fontSize;
    if ( ceilf(v24) != INFINITY )
      v26 = v25;
    result = v26 - v4->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v4->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v13 = v13 - (float)(result + result);
    }
  }
  if ( !v4->fields.messageAlign )
    return 0.0;
  maxFontSize = v4->fields.maxFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v27, maxFontSize, 0);
  v32 = v4->fields.messageAlign;
  result = (float)(v4->fields.dispSize.fields.y - (float)((float)(v13 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v4->fields.rubyLineHeight + 4.0);
  if ( v32 == 1 )
    return result * 0.5;
  if ( v32 != 2 )
    return 0.0;
  return result;
}


int32_t ScriptMessageCommonManager__InitScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x6

  if ( (byte_4C39977 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9036/*"MessageShake/LogMark/BackLogButton"*/);
    byte_4C39977 = 1;
  }
  this->fields.isTapSkip = 0;
  this->fields.isMessageSpeedForcedNormal = 0;
  this->fields.isEffectMessage = 0;
  *(_DWORD *)&this->fields.isMessageOut = 0;
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootPanel->klass[1]._1.element_class)(
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
    sub_1C32E7C(rootPanel);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_9036/*"MessageShake/LogMark/BackLogButton"*/, 0);
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
    sub_1C32E7C(rootObject);
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
  UITouchPress_o *touchPress; // x0

  if ( !ScriptMessageCommonManager__IsOpen(this, method) || this->fields._isFaceMessage_k__BackingField )
    return 0;
  touchPress = this->fields.touchPress;
  if ( !touchPress )
    sub_1C32E7C(0);
  return UITouchPress__get_IsLongPress(touchPress, 0);
}


bool ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rootPanel; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3997A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3997A = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_14;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0);
  if ( !rootPanel )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootPanel,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(rootPanel);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootPanel, 0);
  return localPosition.fields.y >= this->fields.windowNormalPosY;
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
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C39998 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39998 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootObject, 0, 0) )
    return 0;
  v5 = this->fields.rootObject;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_GameObject__get_activeSelf(v5, 0);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3997B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3997B = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(rootObject);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool ScriptMessageCommonManager__MessageEffectExist(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v6; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4C39997 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39997 = 1;
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
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v8 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v8[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
          break;
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    if ( !dispLabelList )
      sub_1C32E7C(0);
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

  if ( (byte_4C39995 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39995 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1C32E7C(dispLabelList);
  v6 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v6,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v9 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v9[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v12 = (UnityEngine_GameObject_o *)v9[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          if ( CommonEffectManager__IsBusy_43646224(v12, effectName, 0) )
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

  if ( (byte_4C39996 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39996 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1C32E7C(dispLabelList);
  v6 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v6,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v9 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v9[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v12 = (UnityEngine_GameObject_o *)v9[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          if ( CommonEffectManager__IsStart_43647140(v12, effectName, 0) )
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
  int32_t v8; // w21
  int v9; // w28
  bool v10; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x23
  UnityEngine_Object_o *klass; // x24
  UnityEngine_Object_o *monitor; // x24
  UnityEngine_GameObject_o *v15; // x23

  if ( (byte_4C39994 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39994 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1C32E7C(dispLabelList);
  v8 = 0;
  v9 = 1;
  v10 = isSkip;
  while ( v8 < dispLabelList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v8,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v12 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)v12[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v15 = (UnityEngine_GameObject_o *)v12[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          v9 &= CommonEffectManager__Stop_43654588(v15, effectName, v10, 0, 0, 0);
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


bool ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t dispIndex; // w22
  System_Collections_Generic_List_object__o *v7; // x21
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
  System_String_o *v19; // x1
  UILabel_o *v20; // x23
  struct System_Object_array *v21; // x8
  float v22; // s0
  int v23; // w8
  UnityEngine_Object_o *v25; // x20
  UILabel_o *v26; // x20
  System_String_o *syncRoot; // x22
  System_String_o *klass; // x24
  System_String_o *v29; // x0
  System_String_o *v30; // x22
  int v31; // s0
  UILabel_o *v32; // x20
  System_String_o *v33; // x21
  float v34; // s9
  float v35; // s8
  int32_t v36; // w23
  float v37; // s9
  double v38; // d8
  double v39; // d0
  double v40; // d0
  double v41; // d1
  double v42; // d1
  int32_t v43; // w1
  System_String_o *v44; // x0
  double iptr; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C3998F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C3998F = 1;
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
                                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( !dispLabelList )
      goto LABEL_79;
    v7 = dispLabelList;
    monitor = (UnityEngine_Object_o *)dispLabelList[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0) )
      break;
    v9 = *((float *)&v7[4].monitor + 1);
    if ( v9 >= 0.0 )
    {
      if ( isMessageDelta )
      {
        v9 = v9 - this->fields.defaultStepTime;
        *((float *)&v7[4].monitor + 1) = v9;
      }
      if ( v9 >= 0.0 )
      {
        this->fields.isBusy = 1;
        return this->fields.isBusy;
      }
      isMessageDelta = 0;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    dispLabelList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0, 0);
    if ( ((unsigned __int8)dispLabelList & 1) != 0 )
    {
      v18 = (UILabel_o *)v7->fields._items;
      dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_63518544(
                                                                     (System_String_o *)v7[2].fields._syncRoot,
                                                                     (System_String_o *)v7[3].klass,
                                                                     0);
      if ( !v18 )
        goto LABEL_79;
      UILabel__set_text(v18, (System_String_o *)dispLabelList, 0);
      v19 = (System_String_o *)v7[3].monitor;
      if ( !v19 )
        goto LABEL_79;
      if ( v19->fields._stringLength >= 1 )
      {
        v20 = *(UILabel_o **)&v7->fields._size;
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_63518544(
                                                                       (System_String_o *)v7[2].fields._syncRoot,
                                                                       v19,
                                                                       0);
        if ( !v20 )
          goto LABEL_79;
        UILabel__set_text(v20, (System_String_o *)dispLabelList, 0);
      }
    }
    else
    {
      v21 = v7[3].fields._items;
      if ( !v21 )
        goto LABEL_79;
      if ( SLODWORD(v21->bounds) >= 1 )
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
    if ( this->fields.isFastMessageRequest || (v22 = *((float *)&v7[4].klass + 1), v22 == 0.0) )
    {
      this->fields.dispCountTimer = -1.0;
    }
    else
    {
      v23 = (int)v7[4].monitor;
      if ( v23 >= 1 )
        this->fields.dispCountTimer = this->fields.dispCountTimer - (float)(v22 * (float)v23);
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
  if ( isMessageDelta )
  {
    isMessageDelta = 0;
    v12 = dispCountTimer + (float)(messageSpeed * this->fields.defaultStepTime);
LABEL_21:
    dispCountTimer = v12;
    this->fields.dispCountTimer = v12;
    goto LABEL_22;
  }
  isMessageDelta = 0;
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
  this->fields.isBusy = 1;
  v25 = (UnityEngine_Object_o *)v7->fields._items;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    v26 = (UILabel_o *)v7->fields._items;
    syncRoot = (System_String_o *)v7[2].fields._syncRoot;
    klass = (System_String_o *)v7[3].klass;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v29 = ScriptMessageLabel__SubstrByDisp(klass, v16, 0);
    dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_63518544(syncRoot, v29, 0);
    if ( v26 )
    {
      UILabel__set_text(v26, (System_String_o *)dispLabelList, 0);
      v30 = (System_String_o *)v7[3].monitor;
      if ( v30 )
      {
        if ( v30->fields._stringLength < 1 )
          return this->fields.isBusy;
        v31 = (int)v7[4].monitor;
        v32 = *(UILabel_o **)&v7->fields._size;
        v33 = (System_String_o *)v7[2].fields._syncRoot;
        v34 = (float)v31;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v35 = (float)v16 / v34;
        v36 = ScriptMessageLabel__StrlenByDisp(v30, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v37 = v35 * (float)v36;
        v38 = v37;
        v39 = modf(v37, &iptr);
        if ( v37 >= 0.0 )
        {
          if ( v39 == 0.5 )
          {
            v40 = iptr;
            v41 = 1.0;
            goto LABEL_69;
          }
          v40 = floor(v38 + 0.5);
        }
        else if ( v39 == -0.5 )
        {
          v40 = iptr;
          v41 = -1.0;
LABEL_69:
          v42 = v40 + v41;
          if ( ((__int64)v40 & 1) != 0 )
            v40 = v42;
        }
        else
        {
          v40 = ceil(v38 + -0.5);
        }
        if ( v40 == INFINITY )
          v43 = 0x80000000;
        else
          v43 = (int)v40;
        v44 = ScriptMessageLabel__SubstrByDisp(v30, v43, 0);
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_63518544(v33, v44, 0);
        if ( v32 )
        {
          UILabel__set_text(v32, (System_String_o *)dispLabelList, 0);
          return this->fields.isBusy;
        }
      }
    }
LABEL_79:
    sub_1C32E7C(dispLabelList);
  }
  return this->fields.isBusy;
}


void ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))rootPanel->klass->vtable._8_set_alpha.methodPtr)(
    rootPanel,
    rootPanel->klass->vtable._8_set_alpha.method,
    0.0);
}


void ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4C3998C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9885/*"OnDelayWaitNextTouch"*/);
    byte_4C3998C = 1;
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
          sub_1C32E7C(0);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9885/*"OnDelayWaitNextTouch"*/,
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
  Il2CppObject *Component_object; // x20
  float v5; // s8
  float windowClosePosY; // s9

  if ( (byte_4C3997F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3997F = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_13;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( Component_object )
    {
      rootObject = this->fields.rootObject;
      if ( rootObject )
      {
        v5 = *(float *)&Component_object[9].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v5 != windowClosePosY, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C32E7C(rootObject);
  }
}


void ScriptMessageCommonManager__OnLongPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4C3998D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9885/*"OnDelayWaitNextTouch"*/);
    byte_4C3998D = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9885/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0);
  }
}


void ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4C3998B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9885/*"OnDelayWaitNextTouch"*/);
    byte_4C3998B = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_1C32E7C(0);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9885/*"OnDelayWaitNextTouch"*/,
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
  float v6; // s0
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C39993 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9960/*"OnShake"*/);
    byte_4C39993 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0);
    v6 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0);
    if ( messageShake )
    {
      v8.fields.y = v6;
      v8.fields.z = 0.0;
      v8.fields.x = v4;
      UnityEngine_Transform__set_localPosition(messageShake, v8, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9960/*"OnShake"*/,
        this->fields.shakeCycle,
        0);
      return;
    }
LABEL_12:
    sub_1C32E7C(v5);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71208520(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9960/*"OnShake"*/,
    0);
  v7 = this->fields.messageShake;
  if ( !byte_4C313D1 )
  {
    v5 = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v7 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this->fields.shakeCycle = 0.0;
}


void ScriptMessageCommonManager__OpenUp(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  TweenPosition_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_AnimationCurve_o *windowUpCurve; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3997D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageCommonManager_OpenUp__);
    byte_4C3997D = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0);
  if ( !rootObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)rootObject & 1) == 0 )
    goto LABEL_30;
  if ( !Component_object )
    goto LABEL_27;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
  {
LABEL_30:
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( !rootObject )
      goto LABEL_27;
    rootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)rootObject,
                                               0);
    if ( !rootObject )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0);
    if ( localPosition.fields.y < this->fields.windowNormalPosY )
    {
      rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
      if ( !rootObject )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0);
      windowOpenTime = 0.0;
      if ( !isFast )
        windowOpenTime = this->fields.windowOpenTime;
      v16.fields.y = this->fields.windowNormalPosY;
      v16.fields.x = 0.0;
      v16.fields.z = 0.0;
      v9 = TweenPosition__Begin(gameObject, windowOpenTime, v16, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_27;
        v9->fields.method = 0;
        windowUpCurve = this->fields.windowUpCurve;
        v9->fields.animationCurve = windowUpCurve;
        sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.animationCurve, (int32_t)windowUpCurve, v10, v11);
        UITweener__PlayForward((UITweener_o *)v9, 0);
        v13 = Method_ScriptMessageCommonManager_OpenUp__;
        if ( (*((_BYTE *)Method_ScriptMessageCommonManager_OpenUp__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C32C38(Method_ScriptMessageCommonManager_OpenUp__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 7, 0, 0);
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
      sub_1C32E7C(rootObject);
    }
  }
}


void ScriptMessageCommonManager__PageScroll(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float x; // s1
  float textOnlyLineHeight; // s2
  float rubyLineHeight; // s0
  float betweenLineHeight; // s3
  float v10; // s4
  float y; // s1
  int32_t defaultFontSize; // w9
  float defaultTextOnlyLineHeight; // s2
  float v14; // s1
  int32_t v15; // w1
  const MethodInfo *v16; // x2

  if ( (byte_4C39990 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39990 = 1;
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
    v10 = this->fields.dispPosition.fields.y;
    this->fields.dispPosition.fields.x = x;
    y = v10 - (float)((float)(textOnlyLineHeight + rubyLineHeight) + betweenLineHeight);
    this->fields.dispPosition.fields.y = y;
  }
  defaultFontSize = this->fields.defaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v14 = (float)(this->fields.startPosition.fields.y - y) + (float)(this->fields.dispSize.fields.y * 0.5);
  this->fields.verticalAlign = 0;
  this->fields.fontSize = defaultFontSize;
  this->fields.scrollPosition.fields.y = v14;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v15 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v15, (int32_t)method, v3);
  ScriptMessageCommonManager__StartScroll(this, isFast, v16);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  UnityEngine_GameObject_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ScriptMessageWindow_o *currentMessageWindow; // x22
  UnityEngine_GameObject_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *imagePrefab; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ScriptMessageWindow_o *v30; // x22
  ScriptMessageCommonManager_o *v31; // x22
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ScriptMessageWindow_o *v36; // x21
  ScriptMessageCommonManager_o *v37; // x21
  ScriptMessageCommonManager_o *v38; // x21
  Il2CppObject *mainPrefab; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ScriptMessageWindow_o *v42; // x22
  ScriptMessageCommonManager_o *v43; // x22
  ScriptMessageCommonManager_o *v44; // x22

  v10 = this;
  if ( (byte_4C3996E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    sub_1C32C20(&StringLiteral_5847/*"Effect Parent"*/);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&StringLiteral_5845/*"Effect Child"*/);
    byte_4C3996E = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(effect, 0, 0) )
      {
        v15 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v15, (System_String_o *)StringLiteral_5847/*"Effect Parent"*/, 0);
        *p_effect = (ScriptMessageCommonManager_o *)v15;
        sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.effect, (int32_t)v15, v16, v17);
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
        v19 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v19, (System_String_o *)StringLiteral_5845/*"Effect Child"*/, 0);
        label->fields.frontEffect = v19;
        sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.frontEffect, (int32_t)v19, v20, v21);
        this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
        if ( !this )
          goto LABEL_73;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_Transform__SetParent_71246900((UnityEngine_Transform_o *)this, v10->fields.frontCommonUIPanel, 0, 0);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               mainPrefab,
                                               (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1C32BC4((CGThumbnailListItem_o *)&label->fields, (int32_t)this, v40, v41);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      v42 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v42 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v42, (UnityEngine_Transform_o *)this, 0);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                               (System_Collections_Generic_Stack_T__o *)this,
                                               (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1C32BC4((CGThumbnailListItem_o *)&label->fields, (int32_t)this, v25, v26);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v43 = this;
      if ( !byte_4C313D1 )
      {
        this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      if ( v43 )
      {
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v43,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (ScriptMessageCommonManager_o *)label->fields.main;
        if ( this )
          goto LABEL_68;
      }
    }
LABEL_73:
    sub_1C32E7C(this);
  }
  this = (ScriptMessageCommonManager_o *)v10->fields.imageStock;
  if ( !this )
    goto LABEL_73;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 1 )
  {
    imagePrefab = (Il2CppObject *)v10->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                             imagePrefab,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( label )
      {
        label->fields.image = (struct UISprite_o *)this;
        sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.image, (int32_t)this, v28, v29);
        this = (ScriptMessageCommonManager_o *)label->fields.image;
        if ( this )
        {
          v30 = v10->fields.currentMessageWindow;
          this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( v30 )
          {
            ScriptMessageWindow__AddChildMessageScroll(v30, (UnityEngine_Transform_o *)this, 0);
            goto LABEL_34;
          }
        }
      }
    }
    goto LABEL_73;
  }
  this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                           (System_Collections_Generic_Stack_T__o *)this,
                                           (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  if ( !label )
    goto LABEL_73;
  label->fields.image = (struct UISprite_o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.image, (int32_t)this, v11, v12);
LABEL_34:
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v31 = this;
  if ( !byte_4C313D1 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v31 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v31,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
LABEL_68:
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v44 = this;
  if ( !byte_4C313D6 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v44 )
    goto LABEL_73;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v44,
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               rubyPrefab,
                                               (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      label->fields.ruby = (struct UILabel_o *)Component_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.ruby, (int32_t)Component_object, v34, v35);
      this = (ScriptMessageCommonManager_o *)label->fields.ruby;
      if ( !this )
        goto LABEL_73;
      v36 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v36 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v36, (UnityEngine_Transform_o *)this, 0);
    }
    else
    {
      v22 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_39F8F44 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      label->fields.ruby = (struct UILabel_o *)v22;
      sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.ruby, (int32_t)v22, v23, v24);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v37 = this;
    if ( !byte_4C313D1 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v37 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v37,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v38 = this;
    if ( !byte_4C313D6 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v38 )
      goto LABEL_73;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v38,
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
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C39978 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9036/*"MessageShake/LogMark/BackLogButton"*/);
    byte_4C39978 = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, void *, float))rootPanel->klass[1]._1.image)(
          rootPanel,
          rootPanel->klass[1]._1.gc_desc,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v4),
        (rootPanel = this->fields.talkNameManager) == 0)
    || (ScriptLineMessage__DeleteLabels(rootPanel, v5), (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0) )
  {
    sub_1C32E7C(rootPanel);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0);
  AndroidBackKeyManager__RemoveBackBtn_44858496(transform, (System_String_o *)StringLiteral_9036/*"MessageShake/LogMark/BackLogButton"*/, 0);
}


void ScriptMessageCommonManager__ReleaseLabel(
        ScriptMessageCommonManager_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o **v4; // x20
  ScriptMessageCommonManager_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_4C39973 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_1C32C20(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39973 = 1;
  }
  if ( !label )
    goto LABEL_25;
  p_fields = (ScriptMessageCommonManager_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (const MethodInfo_39F8FA4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&label->fields, 0, v7, v8);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (const MethodInfo_39F8FA4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.ruby, 0, v11, v12);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    this = (ScriptMessageCommonManager_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptMessageCommonManager_o *, const MethodInfo *, float))this->klass->vtable._8_IsEnableCloseDown.methodPtr)(
        this,
        this->klass->vtable._8_IsEnableCloseDown.method,
        0.0);
      this = v4[52];
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)*p_image,
          (const MethodInfo_39F8FA4 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&label->fields.image, 0, v15, v16);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_1C32E7C(this);
  }
LABEL_23:
  ScriptMessageLabel__Release(label, 0);
  this = v4[53];
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_Stack_object___Push(
    (System_Collections_Generic_Stack_T__o *)this,
    (Il2CppObject *)label,
    (const MethodInfo_39F8FA4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_1C32E7C(0);
  UITouchPress__PressReset(touchPress, 0);
  this->fields.isFastMessageRequest = 0;
}


void ScriptMessageCommonManager__ResetMessageWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currentMessageWindow; // x21
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  struct ScriptMessageWindow_o *v9; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct ScriptMessageWindow_o *v13; // x8
  struct UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UnityEngine_Object_o *v21; // x21
  struct ScriptMessageWindow_o *v22; // x8
  struct UnityEngine_GameObject_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ScriptMessageWindow_o *v26; // x8
  struct UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct ScriptMessageWindow_o *v32; // x8
  struct UnityEngine_Transform_o *talkNameMessageRoot; // x1
  struct ScriptMessageWindow_o *v34; // x8
  struct ScriptLineMessage_o *talkNameManager; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct ScriptMessageWindow_o *v38; // x8
  struct ScriptLineMessage_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ScriptMessageWindow_o *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x6
  const MethodInfo *v46; // x1

  if ( (byte_4C39989 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39989 = 1;
  }
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Equality(currentMessageWindow, 0, 0) )
  {
    defaultMessageWindow = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = defaultMessageWindow;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)defaultMessageWindow, v5, v6);
    v9 = this->fields.defaultMessageWindow;
    if ( v9 )
    {
      messageMainLabel = (char *)v9->fields.messageMainLabel;
      if ( messageMainLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
        this->fields.mainPrefab = gameObject;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)gameObject, v11, v12);
        v13 = this->fields.defaultMessageWindow;
        if ( v13 )
        {
          messageMainLabel = (char *)v13->fields.messageRubyLabel;
          if ( messageMainLabel )
          {
            v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
            this->fields.rubyPrefab = v14;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v14, v15, v16);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1C32E7C(messageMainLabel);
  }
  v17 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v18 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v17, v18, 0) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v19);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, v20);
    messageMainLabel = (char *)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_33;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v21, 0);
    v22 = this->fields.defaultMessageWindow;
    if ( !v22 )
      goto LABEL_33;
    messageMainLabel = (char *)v22->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    this->fields.mainPrefab = v23;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)v23, v24, v25);
    v26 = this->fields.defaultMessageWindow;
    if ( !v26 )
      goto LABEL_33;
    messageMainLabel = (char *)v26->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    this->fields.rubyPrefab = v27;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v27, v28, v29);
    v32 = this->fields.defaultMessageWindow;
    if ( !v32 )
      goto LABEL_33;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameMessageRoot = v32->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 7) = talkNameMessageRoot;
    sub_1C32BC4((CGThumbnailListItem_o *)(messageMainLabel + 56), (int32_t)talkNameMessageRoot, v30, v31);
    v34 = this->fields.defaultMessageWindow;
    if ( !v34 )
      goto LABEL_33;
    messageMainLabel = (char *)v34->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !talkNameManager )
      goto LABEL_33;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1C32BC4((CGThumbnailListItem_o *)&talkNameManager->fields.mainPrefab, (int32_t)messageMainLabel, v36, v37);
    v38 = this->fields.defaultMessageWindow;
    if ( !v38 )
      goto LABEL_33;
    messageMainLabel = (char *)v38->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v39 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !v39 )
      goto LABEL_33;
    v39->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.rubyPrefab, (int32_t)messageMainLabel, v40, v41);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_33;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0);
    if ( !messageMainLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0);
    v42 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v42;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)v42, v43, v44);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v45);
    ScriptMessageCommonManager__ResetScroll(this, v46);
  }
}


void ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v5; // x8
  struct ScriptMessageWindow_o *v6; // x8
  float y; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C39992 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39992 = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v5 = v2->fields.currentMessageWindow;
  if ( !v5 )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)v5->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (v6 = v2->fields.currentMessageWindow) == 0)
    || (this = (ScriptMessageCommonManager_o *)v6->fields.messageScroll) == 0
    || (y = v2->fields.dispSize.fields.y,
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_17:
    sub_1C32E7C(this);
  }
  v11.fields.y = y * 0.5;
  v11.fields.x = x;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ScriptMessageCommonManager__ReturnScroll(
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


bool ScriptMessageCommonManager__ReturnScroll2(
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


void ScriptMessageCommonManager__ReturnText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
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
    sub_1C32E7C(this);
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


void ScriptMessageCommonManager__SetAutoMessageSprite(
        ScriptMessageCommonManager_o *this,
        bool isOn,
        const MethodInfo *method)
{
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v6; // x8

  if ( (byte_4C3999A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17431/*"btn_auto_on"*/);
    sub_1C32C20(&StringLiteral_17430/*"btn_auto_off"*/);
    byte_4C3999A = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_1C32E7C(0);
  v6 = (System_String_o **)&StringLiteral_17431/*"btn_auto_on"*/;
  if ( !isOn )
    v6 = (System_String_o **)&StringLiteral_17430/*"btn_auto_off"*/;
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
      sub_1C32E7C(0);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void ScriptMessageCommonManager__SetDefaultState(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  float defaultTextOnlyLineHeight; // s0
  float defaultBetweenLineHeight; // s1
  int32_t v7; // w1
  const MethodInfo *v8; // x1

  if ( (byte_4C39980 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39980 = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  *(_QWORD *)&this->fields.fontSize = (unsigned int)this->fields.defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  v7 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v7, v2, v3);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v8);
}


void ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_1C32E7C(0);
  UICommonButton__SetButtonEnable(autoMessageButton, enable, 1, 0);
}


void ScriptMessageCommonManager__SetEnableBackLogButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *backLogButton; // x0

  backLogButton = this->fields.backLogButton;
  if ( !backLogButton )
    sub_1C32E7C(0);
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

  if ( (byte_4C39983 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C39983 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  _BOOL8 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C39982 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39982 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0);
  if ( v5 )
  {
    if ( !this )
      sub_1C32E7C(v5);
  }
  else
  {
    font = this->fields.defaultFontType;
  }
  this->fields.fontType = font;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v6, v7);
}


void ScriptMessageCommonManager__SetForcedDisableTurnPage(
        ScriptMessageCommonManager_o *this,
        bool flag,
        bool force,
        const MethodInfo *method)
{
  this->fields.isForcedDisableTurnPage = flag;
  this->fields.isForcedEnableTurnPage = force & ~flag & 1;
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
    sub_1C32E7C(0);
  LODWORD(v3) = 1.0;
  LODWORD(v4) = 0;
  if ( !this->fields.isMessageOut || flag )
    *(float *)&v3 = 0.0;
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, long double, long double))rootPanel->klass->vtable._8_set_alpha.methodPtr)(
    rootPanel,
    rootPanel->klass->vtable._8_set_alpha.method,
    v3,
    v4);
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


void ScriptMessageCommonManager__SetMessageWindowCollider(
        ScriptMessageCommonManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *currentMessageWindow; // x0

  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    sub_1C32E7C(0);
  ScriptMessageWindow__SetEnabledCollider(currentMessageWindow, isEnable, 0);
}


void ScriptMessageCommonManager__SetRootActive(
        ScriptMessageCommonManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C39976 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39976 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootObject, 0, 0) )
  {
    v6 = this->fields.rootObject;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v6, isActive, 0);
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
  float v14; // s0 OVERLAPPED
  float v15; // s1
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v17; // x8
  int v18; // s2
  float rubyLineHeight; // s0
  struct ScriptMessageWindow_o *v20; // x8
  UIPanel_o *dispPanel; // x22
  struct ScriptMessageWindow_o *v22; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  const MethodInfo *v24; // x1
  long double v25; // q0
  struct ScriptMessageWindow_o *v26; // x8
  float v27; // s0
  UnityEngine_Vector4_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39979 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39979 = 1;
  }
  rootPanel = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    goto LABEL_33;
  rootPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, bool, const MethodInfo *, float))rootPanel->klass[1]._1.element_class)(
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
    v14 = (float)x;
    v15 = (float)y;
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
    v17 = this->fields.currentMessageWindow;
    if ( !v17 || !rootPanel )
      goto LABEL_33;
    v14 = v17->fields.defaultWindowDispCenter.fields.x;
    v15 = v17->fields.defaultWindowDispCenter.fields.y;
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
    v14 = this->fields.defaultAllDispCenter.fields.x;
    v15 = this->fields.defaultAllDispCenter.fields.y;
  }
  v18 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v14, 0);
  rubyLineHeight = this->fields.rubyLineHeight;
  v20 = this->fields.currentMessageWindow;
  this->fields.startPosition.fields.x = 0.0;
  this->fields.startPosition.fields.y = -(float)(rubyLineHeight + 2.0);
  this->fields.isWindowBack = isWindowBack;
  if ( !v20 )
    goto LABEL_33;
  dispPanel = v20->fields.dispPanel;
  rootPanel = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !dispPanel
    || (v29.fields.w = this->fields.dispSize.fields.y,
        v29.fields.y = 0.0,
        v29.fields.z = (float)ManagerConfig_TypeInfo->static_fields->WIDTH,
        v29.fields.x = 0.0,
        UIPanel__set_baseClipRegion(dispPanel, v29, 0),
        (v22 = this->fields.currentMessageWindow) == 0) )
  {
LABEL_33:
    sub_1C32E7C(rootPanel);
  }
  messageWindowBack = (UnityEngine_Object_o *)v22->fields.messageWindowBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0, 0);
  if ( ((unsigned __int8)rootPanel & 1) != 0 )
  {
    v26 = this->fields.currentMessageWindow;
    if ( v26 )
    {
      rootPanel = (UnityEngine_GameObject_o *)v26->fields.messageWindowBack;
      if ( rootPanel )
      {
        LODWORD(v25) = 0;
        if ( isWindowBack )
          *(float *)&v25 = 1.0;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.element_class)(
          rootPanel,
          rootPanel->klass[1]._1.castClass,
          v25);
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  ScriptMessageCommonManager__ClearText(this, v24);
  v27 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v27 == INFINITY )
    return 0x80000000;
  else
    return (int)v27;
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  const MethodInfo *v18; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v21; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v23; // q0
  struct ScriptLineMessage_o *talkNameManager; // x9
  float x; // s0
  struct ScriptMessageWindow_o *v26; // x8
  float v27; // s1
  int talkNameBackDefaultWidth; // w9
  float v29; // s0
  int v30; // w10
  struct ScriptMessageWindow_o *v31; // x8
  struct ScriptMessageWindow_o *v32; // x8
  UnityEngine_GameObject_c *klass; // x8
  float v34; // s1
  float betweenLineHeight; // s4
  float y; // s3
  float v37; // s2
  float v38; // s0
  const MethodInfo *v39; // x1
  struct ScriptMessageWindow_o *v40; // x8
  long double v41; // q0

  if ( (byte_4C3998A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_163/*" 1.5]"*/);
    sub_1C32C20(&StringLiteral_15985/*"[image "*/);
    byte_4C3998A = 1;
  }
  v11 = System_String__Concat_63518544(classname, charaname, 0);
  if ( System_String__IsNullOrEmpty(v11, 0) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v12);
    return 1;
  }
  this->fields.talkName = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.talkName, (int32_t)v11, v13, v14);
  this->fields.talkNameOnly = charaname;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.talkNameOnly, (int32_t)charaname, v15, v16);
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
    UnityEngine_GameObject__SetActive(talkNameRootObject, 1, 0);
    talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.talkNameManager;
    if ( !talkNameRootObject )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, System_String_o *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))talkNameRootObject->klass[1]._1.this_arg.data)(
                                                       talkNameRootObject,
                                                       v11,
                                                       0,
                                                       0,
                                                       0,
                                                       1,
                                                       *(_QWORD *)&talkNameRootObject->klass[1]._1.this_arg.bits);
    v21 = this->fields.currentMessageWindow;
    if ( !v21 )
      goto LABEL_39;
    talkNameBack = (UnityEngine_Object_o *)v21->fields.talkNameBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    talkNameRootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(talkNameBack, 0, 0);
    if ( ((unsigned __int8)talkNameRootObject & 1) != 0 )
    {
      talkNameManager = this->fields.talkNameManager;
      if ( !talkNameManager )
        goto LABEL_39;
      x = talkNameManager->fields.maxDispPosition.fields.x;
      v26 = this->fields.currentMessageWindow;
      if ( x < talkNameManager->fields.dispPosition.fields.x )
        x = talkNameManager->fields.dispPosition.fields.x;
      if ( !v26 )
        goto LABEL_39;
      v27 = talkNameManager->fields.startPosition.fields.x;
      talkNameBackDefaultWidth = v26->fields.talkNameBackDefaultWidth;
      v29 = x - v27;
      v30 = (int)v29;
      if ( v29 == INFINITY )
        v30 = 0x80000000;
      if ( v29 > (float)talkNameBackDefaultWidth )
        talkNameBackDefaultWidth = v30;
      if ( !talkNameBack )
        goto LABEL_39;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((talkNameBackDefaultWidth + v26->fields.talkNameBackBaseWidth) & 1)
      + talkNameBackDefaultWidth
      + v26->fields.talkNameBackBaseWidth,
        0);
    }
    v31 = this->fields.currentMessageWindow;
    if ( !v31 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v31->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
    if ( imageName )
    {
      UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0);
      v32 = this->fields.currentMessageWindow;
      if ( v32 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v32->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          klass = talkNameRootObject->klass;
          LODWORD(v23) = 1.0;
          goto LABEL_34;
        }
      }
LABEL_39:
      sub_1C32E7C(talkNameRootObject);
    }
  }
  else
  {
    if ( imageName )
      v11 = System_String__Concat_63558796(
              (System_String_o *)StringLiteral_15985/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_163/*" 1.5]"*/,
              v11,
              0);
    v34 = this->fields.startPosition.fields.x + -50.0;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = v34;
    ScriptMessageCommonManager__UpdateLabels(this, v11, 1, 0, v18);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v37 = this->fields.startPosition.fields.x;
    v38 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v38;
    this->fields.dispPosition.fields.x = v37;
    this->fields.dispPosition.fields.y = y - (float)(v38 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v39);
    v40 = this->fields.currentMessageWindow;
    if ( !v40 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v40->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
  }
  klass = talkNameRootObject->klass;
  LODWORD(v23) = 0;
LABEL_34:
  ((void (__fastcall *)(long double))klass[1]._1.element_class)(v23);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_39;
  LODWORD(v41) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v41 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameRootObject->klass[1]._1.element_class)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.castClass,
    v41);
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
  UnityEngine_Object_o *talkNameAtlas; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIAtlas_o *mAtlas; // x1
  struct System_String_o *mSpriteName; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UISpriteData_o *AtlasSprite; // x0

  v4 = this;
  if ( (byte_4C39987 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39987 = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_21;
  talkNameBack = currentMessageWindow->fields.talkNameBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)talkNameBack, 0, 0) )
  {
    talkNameAtlas = (UnityEngine_Object_o *)v4->fields.talkNameAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !talkNameBack )
        goto LABEL_21;
      mAtlas = talkNameBack->fields.mAtlas;
      v4->fields.talkNameAtlas = mAtlas;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.talkNameAtlas, (int32_t)mAtlas, v8, v9);
      mSpriteName = talkNameBack->fields.mSpriteName;
      v4->fields.talkNameSpriteName = mSpriteName;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.talkNameSpriteName, (int32_t)mSpriteName, v12, v13);
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
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ScriptMessageCommonManager_o *)AtlasManager__SetMark(talkNameBack, imageName, 0);
      if ( talkNameBack )
        goto LABEL_18;
    }
LABEL_21:
    sub_1C32E7C(this);
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
  float fastScrollTime; // s1

  if ( (byte_4C39981 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C39981 = 1;
  }
  if ( this->fields.isMessageSpeedForcedNormal )
  {
    defaultScrollTime = this->fields.defaultScrollTime;
    this->fields.messageSpeed = 1.0;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0);
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    ScenarioTextSpeedDefault = v5->static_fields->ScenarioTextSpeedDefault;
    v7 = OptionManager__GetScenarioTextSpeed(0) < BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh;
    v8 = 0.0;
    if ( v7 )
      v8 = ScenarioTextSpeed / ScenarioTextSpeedDefault;
    this->fields.messageSpeed = v8;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0);
    v10 = BalanceConfig_TypeInfo;
    v11 = ScenarioScrollSpeed;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v10->static_fields->ScenarioScrollSpeedHigh;
    v13 = OptionManager__GetScenarioScrollSpeed(0);
    if ( v11 >= ScenarioScrollSpeedHigh )
      defaultScrollTime = this->fields.fastScrollTime;
    else
      defaultScrollTime = this->fields.defaultScrollTime
                        / (float)(v13 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
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
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0) + duration;
  if ( !this )
    sub_1C32E7C(this);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  ScriptMessageCommonManager__OnShake(this, method);
}


void ScriptMessageCommonManager__StartScroll(ScriptMessageCommonManager_o *this, bool isFast, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x19
  __int64 v5; // x8
  float v6; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ScriptMessageWindow_o *v16; // x8
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v18; // x8

  v4 = this;
  if ( (byte_4C39991 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)sub_1C32C20(&StringLiteral_6025/*"EndScroll"*/);
    byte_4C39991 = 1;
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
          sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.messageShake, (int32_t)v10, v11, v12);
          v13 = StringLiteral_6025/*"EndScroll"*/;
          v9->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_6025/*"EndScroll"*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.defaultMessageWindow, v13, v14, v15);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  v16 = v4->fields.currentMessageWindow;
  if ( !v16 )
    goto LABEL_21;
  this = (ScriptMessageCommonManager_o *)v16->fields.messageScroll;
  if ( !this )
    goto LABEL_21;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v18 = v4->fields.currentMessageWindow;
  if ( !v18
    || (this = (ScriptMessageCommonManager_o *)v18->fields.messageScroll) == 0
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_21:
    sub_1C32E7C(this);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  long double v12; // q0
  float stepTime; // s8
  System_Text_StringBuilder_o *v14; // x23
  System_Text_StringBuilder_o **v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *defaultColorTag; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x23
  __int64 v22; // x26
  int32_t v23; // w28
  int v24; // w25
  _BOOL4 isEffectMessage; // w27
  int32_t v26; // w29
  System_String_o *v27; // x27
  System_String_o *v28; // x0
  int32_t BraceIndex; // w0
  System_String_o *v30; // x0
  int32_t v31; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w27
  System_Text_StringBuilder_o *v37; // x29
  float betweenLineHeight; // s4
  float y; // s3
  float x; // s2
  float v41; // s0
  const MethodInfo *v42; // x1
  ScriptReplaceString_c *v43; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *v45; // x27
  struct System_String_o *v46; // x1
  const MethodInfo *v47; // x4
  bool v48; // w8
  char v49; // w3
  ScriptMessageCommonManager_o *v50; // x0
  System_String_o *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_String_o *v54; // x1
  CGThumbnailListItem_o *v55; // x0
  System_String_o *v56; // x27
  int32_t v57; // w1
  int32_t v58; // w2
  System_String_o *v59; // x27
  System_String_o *v60; // x0
  __int64 *v61; // x8
  __int64 v62; // x1
  float v63; // s4
  float v64; // s3
  float v65; // s2
  float v66; // s0
  const MethodInfo *v67; // x1
  System_String_o *v68; // x27
  System_String_array *v69; // x27
  struct System_String_o *v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_String_o *v73; // x0
  System_Text_StringBuilder_o *v74; // x20
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-88h]
  System_String_o **colorTag; // [xsp+10h] [xbp-80h]
  System_String_o *text; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C39975 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
    sub_1C32C20(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&ScriptReplaceString_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__);
    sub_1C32C20(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__);
    sub_1C32C20(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
    sub_1C32C20(&StringLiteral_23280/*"servantName"*/);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_20088/*"i"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_15817/*"[*"*/);
    sub_1C32C20(&StringLiteral_16021/*"[~1]"*/);
    sub_1C32C20(&StringLiteral_15956/*"[^"*/);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&StringLiteral_22915/*"r"*/);
    sub_1C32C20(&StringLiteral_18933/*"effectmessage"*/);
    sub_1C32C20(&StringLiteral_21238/*"line"*/);
    sub_1C32C20(&StringLiteral_20282/*"image"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_16020/*"[~"*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C39975 = 1;
  }
  text = 0;
  v8 = sub_1C32E6C(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor((ScriptMessageCommonManager___c__DisplayClass113_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_107;
  *(_QWORD *)(v8 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v10, v11);
  *(_BYTE *)(v8 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (__int64)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_107;
  stepTime = 0.0;
  LODWORD(v12) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v12 = 0.0;
  (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)rootPanel + 440LL))(
    rootPanel,
    *(_QWORD *)(*(_QWORD *)rootPanel + 448LL),
    v12);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v8 + 32) = stepTime;
  v14 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v14, 0);
  *(_QWORD *)(v8 + 16) = v14;
  v15 = (System_Text_StringBuilder_o **)(v8 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)v14, v16, v17);
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v8 + 40) = defaultColorTag;
  colorTag = (System_String_o **)(v8 + 40);
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 40), (int32_t)defaultColorTag, v19, v20);
  v21 = sub_1C32E6C(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    (ScriptMessageCommonManager_ProcAddLabel_o *)v21,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0);
  v22 = sub_1C32E6C(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    (ScriptMessageCommonManager_ProcAddLabel2_o *)v22,
    (Il2CppObject *)v8,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0);
  if ( !txt )
    goto LABEL_107;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_105;
  v23 = 0;
  v24 = 0;
  p_defaultColorTag = &this->fields.defaultColorTag;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = System_String__get_Chars(txt, v23, 0);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v36 = v23 + 1;
      rootPanel = ScriptMessageLabel__GetBraceIndex(txt, v23 + 1, 0);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_58;
      v26 = rootPanel;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v36, 0);
      if ( !rootPanel )
        goto LABEL_107;
      v27 = (System_String_o *)rootPanel;
      if ( System_String__Equals_63553848((System_String_o *)rootPanel, (System_String_o *)StringLiteral_18933/*"effectmessage"*/, 0) )
      {
        v28 = System_String__Substring_63564468(txt, v23 + 15, v24 + v26 - 15, 0);
        rootPanel = System_String__op_Equality(v28, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
        if ( (rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = System_String__Equals_63553848(v27, (System_String_o *)StringLiteral_22915/*"r"*/, 0);
        if ( (rootPanel & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_107;
          (*(void (__fastcall **)(_QWORD, void *, _QWORD))(v22 + 24))(
            *(_QWORD *)(v22 + 64),
            StringLiteral_113/*" "*/,
            *(_QWORD *)(v22 + 40));
          betweenLineHeight = this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          x = this->fields.startPosition.fields.x;
          v41 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          this->fields.beforeTextOnlyLineHeight = v41;
          this->fields.dispPosition.fields.x = x;
          this->fields.dispPosition.fields.y = y - (float)(v41 + betweenLineHeight);
          ScriptMessageCommonManager__SetDefaultState(this, v42);
        }
      }
      goto LABEL_57;
    }
    v36 = v23 + 1;
LABEL_58:
    v24 = -v36;
    v23 = v36;
    if ( v36 >= txt->fields._stringLength )
      goto LABEL_105;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v37 = *v15;
    rootPanel = System_String__get_Chars(txt, v23, 0);
    if ( !v37 )
      goto LABEL_107;
    v36 = v23 + 1;
    rootPanel = (__int64)System_Text_StringBuilder__Append_63605936(v37, rootPanel, 0);
    goto LABEL_58;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v36 = v23 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v23 + 1, 0);
  if ( BraceIndex == -1 )
  {
    rootPanel = (__int64)*v15;
    if ( !*v15 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_63603608(
                           (System_Text_StringBuilder_o *)rootPanel,
                           (System_String_o *)StringLiteral_15802/*"["*/,
                           0);
    goto LABEL_58;
  }
  v26 = BraceIndex;
  rootPanel = System_String__get_Chars(txt, v36, 0);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v30 = System_String__Substring_63564468(txt, v23 + 2, v24 + v26 - 2, 0);
    v31 = System_Int32__Parse(v30, 0);
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    String = ScriptReplaceString__GetString(v31, 0);
    TagSplitString = System_String__Concat_63518544(String, (System_String_o *)StringLiteral_15821/*"[-]"*/, 0);
    goto LABEL_54;
  }
  rootPanel = System_String__get_Chars(txt, v36, 0);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    if ( !byte_4C39699 )
    {
      sub_1C32C20(&ScriptReplaceString_TypeInfo);
      byte_4C39699 = 1;
    }
    v43 = ScriptReplaceString_TypeInfo;
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v43 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v43->static_fields->playerGenderIndex;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v23 + 2, playerGenderIndex, 0);
LABEL_54:
    v45 = TagSplitString;
    v46 = *(struct System_String_o **)(v8 + 40);
    this->fields.defaultColorTag = v46;
    sub_1C32BC4((CGThumbnailListItem_o *)p_defaultColorTag, (int32_t)v46, v34, v35);
    v48 = isStretch;
    v49 = *(_BYTE *)(v8 + 36);
    v50 = this;
    v51 = v45;
LABEL_55:
    ScriptMessageCommonManager__UpdateLabels(v50, v51, v48, v49, v47);
    v54 = this->fields.defaultColorTag;
    v55 = (CGThumbnailListItem_o *)(v8 + 40);
    *(_QWORD *)(v8 + 40) = v54;
LABEL_56:
    sub_1C32BC4(v55, (int32_t)v54, v52, v53);
LABEL_57:
    v36 = v26 + 1;
    goto LABEL_58;
  }
  rootPanel = System_String__get_Chars(txt, v36, 0);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    rootPanel = (__int64)System_String__Substring_63564468(txt, v23, v24 + v26 + 1, 0);
    if ( !v22 )
      goto LABEL_107;
LABEL_81:
    v62 = rootPanel;
LABEL_82:
    rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v22 + 24))(
                  *(_QWORD *)(v22 + 64),
                  v62,
                  *(_QWORD *)(v22 + 40));
    goto LABEL_57;
  }
  rootPanel = System_String__get_Chars(txt, v36, 0);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_57;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v36, 0);
  if ( !rootPanel )
    goto LABEL_107;
  v56 = (System_String_o *)rootPanel;
  rootPanel = System_String__Equals_63553848((System_String_o *)rootPanel, (System_String_o *)StringLiteral_20282/*"image"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v57 = v23 + 7;
    v58 = v24 + v26 - 7;
    goto LABEL_79;
  }
  if ( System_String__Equals_63553848(v56, (System_String_o *)StringLiteral_18933/*"effectmessage"*/, 0) )
  {
    v59 = System_String__Substring_63564468(txt, v23 + 15, v24 + v26 - 15, 0);
    rootPanel = System_String__op_Inequality(v59, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
    if ( (rootPanel & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_107;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
      rootPanel = (__int64)System_String__Concat_63556792(
                             (System_String_o *)StringLiteral_15817/*"[*"*/,
                             v59,
                             (System_String_o *)StringLiteral_16056/*"]"*/,
                             0);
      if ( !v22 )
        goto LABEL_107;
      rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v22 + 24))(
                    *(_QWORD *)(v22 + 64),
                    rootPanel,
                    *(_QWORD *)(v22 + 40));
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_57;
  }
  rootPanel = System_String__Equals_63553848(v56, (System_String_o *)StringLiteral_20088/*"i"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v57 = v23 + 3;
    v58 = v24 + v26 - 3;
LABEL_79:
    v60 = System_String__Substring_63564468(txt, v57, v58, 0);
    v61 = &StringLiteral_15956/*"[^"*/;
LABEL_80:
    rootPanel = (__int64)System_String__Concat_63556792(
                           (System_String_o *)*v61,
                           v60,
                           (System_String_o *)StringLiteral_16056/*"]"*/,
                           0);
    if ( !v22 )
      goto LABEL_107;
    goto LABEL_81;
  }
  rootPanel = System_String__Equals_63553848(v56, (System_String_o *)StringLiteral_22915/*"r"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v63 = this->fields.betweenLineHeight;
    v64 = this->fields.dispPosition.fields.y;
    v65 = this->fields.startPosition.fields.x;
    v66 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v66;
    this->fields.dispPosition.fields.x = v65;
    this->fields.dispPosition.fields.y = v64 - (float)(v66 + v63);
    ScriptMessageCommonManager__SetDefaultState(this, v67);
    v54 = this->fields.defaultColorTag;
    v55 = (CGThumbnailListItem_o *)(v8 + 40);
    *colorTag = v54;
    goto LABEL_56;
  }
  rootPanel = System_String__Equals_63553848(v56, (System_String_o *)StringLiteral_23280/*"servantName"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v68 = System_String__Substring_63564468(txt, v23 + 12, v24 + v26 - 12, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v69 = ScriptMessageLabel__AnalysTagParam(v68, 0, 0);
    v70 = *(struct System_String_o **)(v8 + 40);
    this->fields.defaultColorTag = v70;
    sub_1C32BC4((CGThumbnailListItem_o *)p_defaultColorTag, (int32_t)v70, v71, v72);
    v73 = ScriptMessageLabel__GetServantChangeName(v69, 0);
    v48 = isStretch;
    v49 = *(_BYTE *)(v8 + 36);
    v51 = v73;
    v50 = this;
    goto LABEL_55;
  }
  rootPanel = System_String__StartsWith(v56, (System_String_o *)StringLiteral_21238/*"line"*/, 0);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    rootPanel = (__int64)System_String__Substring_63564468(txt, v23 + 5, v24 + v26 - 5, 0);
    if ( !rootPanel )
      goto LABEL_107;
    if ( *(int *)(rootPanel + 16) < 1 )
    {
      if ( !v22 )
        goto LABEL_107;
      v62 = StringLiteral_16021/*"[~1]"*/;
      goto LABEL_82;
    }
    v60 = System_String__Trim((System_String_o *)rootPanel, 0);
    v61 = &StringLiteral_16020/*"[~"*/;
    goto LABEL_80;
  }
  if ( v26 < txt->fields._stringLength )
  {
    text = System_String__Substring_63564468(txt, v23, v24 + v26 + 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0, 0);
    rootPanel = (__int64)*v15;
    if ( !*v15 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_63603608((System_Text_StringBuilder_o *)rootPanel, text, 0);
    goto LABEL_57;
  }
  v74 = *v15;
  rootPanel = (__int64)System_String__Substring(txt, v23, 0);
  if ( !v74 )
    goto LABEL_107;
  rootPanel = (__int64)System_Text_StringBuilder__Append_63603608(v74, (System_String_o *)rootPanel, 0);
LABEL_105:
  if ( !v21 )
LABEL_107:
    sub_1C32E7C(rootPanel);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
}


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
    sub_1C32E7C(touchPress);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A79260;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A79220;
}


System_IAsyncResult_o *ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A792DC;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A792BC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A79274;
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
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v7; // x8
  struct ScriptMessageCommonManager_o *v8; // x8
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
        (v7 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptMessageCommonManager__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          this->fields.stepTime,
          v7->fields.defaultColorTag,
          this->fields.isFoward,
          0),
        (tmpTxt = this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_1C32E7C(tmpTxt);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0);
LABEL_8:
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v8->fields.defaultColorTag = tmpColorTag;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.defaultColorTag, (int32_t)tmpColorTag, v4, v5);
}


void ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__1(
        ScriptMessageCommonManager___c__DisplayClass113_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScriptMessageCommonManager___c__DisplayClass113_0_o *v4; // x19
  struct ScriptMessageCommonManager_o *_4__this; // x8
  struct System_String_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v4 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptMessageCommonManager___c__DisplayClass113_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptMessageCommonManager__AddLabel(
      (ScriptMessageCommonManager_o *)this,
      text,
      v4->fields.stepTime,
      *(System_String_o **)&this[6].fields.stepTime,
      v4->fields.isFoward,
      0);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_1C32E7C(this);
  tmpColorTag = v4->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = tmpColorTag;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.defaultColorTag, (int32_t)tmpColorTag, (int32_t)method, v3);
}