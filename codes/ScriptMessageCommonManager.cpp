void __fastcall ScriptMessageCommonManager___ctor(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v18; // w1
  System_Collections_Generic_Stack_T__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Stack_T__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Stack_T__o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Stack_T__o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B03E5F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_Stack_UILabel__TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_Stack_UISprite__TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4B03E5F = 1;
  }
  this->fields.defaultBetweenLineHeight = 4.0;
  *(_OWORD *)&this->fields.defaultScrollTime = xmmword_BDE0A0;
  *(_OWORD *)&this->fields.defaultAllDispSize.fields.x = xmmword_BDF860;
  *(int32x2_t *)&this->fields.windowOpenTime = vdup_n_s32(0x3ECCCCCDu);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.windowClosePosY = -200.0;
  *(_QWORD *)&this->fields.messageSpeed = _D0;
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v18, v2, v3);
  v19 = (System_Collections_Generic_Stack_T__o *)sub_1BC3254(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v19,
    (const MethodInfo_38F5E90 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mainStock, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Stack_T__o *)sub_1BC3254(System_Collections_Generic_Stack_UILabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v22,
    (const MethodInfo_38F5E90 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
  this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rubyStock, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Stack_T__o *)sub_1BC3254(System_Collections_Generic_Stack_UISprite__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v25,
    (const MethodInfo_38F5E90 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
  this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.imageStock, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_Stack_T__o *)sub_1BC3254(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v28,
    (const MethodInfo_38F5E90 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
  this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.labelStock, (int32_t)v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v31;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dispLabelList, (int32_t)v31, v32, v33);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 Label; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ScriptMessageLabel_o *v20; // x20
  __int64 v21; // x0
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v23; // x5
  System_String_o *v24; // x23
  __int64 v25; // x2
  System_String_array *v26; // x25
  const MethodInfo *v27; // x5
  int max_length; // w8
  int32_t fontSize; // w4
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  System_String_o *v32; // x7
  __int64 *p_fields; // x24
  __int64 *p_ruby; // x23
  const MethodInfo *v35; // x3
  System_String_o *v36; // x23
  const MethodInfo *v37; // x5
  int v38; // w8
  __int64 v39; // x24
  System_String_o *v40; // x23
  float v41; // s0
  struct ScriptMessageWindow_o *v42; // x8
  float v43; // s9
  struct ScriptMessageWindow_o *v44; // x8
  int v45; // w8
  System_String_o *v46; // x23
  __int64 v47; // x24
  struct ScriptMessageWindow_o *v48; // x8
  System_String_o **v49; // x9
  int32_t v50; // w23
  System_String_o *v51; // x24
  const MethodInfo *v52; // x5
  struct ScriptMessageWindow_o *v53; // x8
  __int64 *p_image; // x25
  System_String_o *v55; // x1
  System_String_array *v56; // x0
  System_String_array *v57; // x24
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  const MethodInfo *v60; // x5
  System_String_o *v61; // x23
  float v62; // s8
  float v63; // s10
  float v64; // s9
  System_String_array *v65; // x0
  System_String_array *v66; // x25
  System_String_o *v67; // x0
  float v68; // s0
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w24
  __int64 *v73; // x24
  System_String_o *rubyText; // x0
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  System_String_o *v79; // x23
  __int64 v80; // x24
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  System_String_o *v82; // x23
  const MethodInfo *v83; // x5
  struct ScriptMessageWindow_o *v84; // x8
  System_String_o *v85; // x24
  __int64 v86; // x24
  int v87; // w25
  int32_t v88; // w0
  struct UnityEngine_Vector2_o v89; // d0
  UnityEngine_Vector2_o pos; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v91; // 0:s1.4,4:s2.4

  if ( (byte_4B03E38 & 1) == 0 )
  {
    sub_1BC3008(&char___TypeInfo, text);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v11);
    sub_1BC3008(&StringLiteral_13502/*"Talk/"*/, v12);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v13);
    sub_1BC3008(&StringLiteral_21031/*"line"*/, v14);
    sub_1BC3008(&StringLiteral_1/*""*/, v15);
    byte_4B03E38 = 1;
  }
  pos = 0LL;
  Label = (__int64)ScriptMessageCommonManager__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_112;
  v20 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v21 = Label + 112;
  *(float *)(v21 + 52) = tm;
  sub_1BC2FAC((CGThumbnailListItem_o *)v21, (int32_t)colorTag, v18, v19);
  if ( !text )
    goto LABEL_112;
  dispPosition = this->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_70;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v24 = System_String__Substring_62394572(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BC30B0(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v17 = Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v24 )
        goto LABEL_112;
      v26 = System_String__Split_62397724(v24, (System_Char_array *)Label, 0LL);
      ScriptMessageCommonManager__PreProcLabel(this, v20, 1, 0, 0, v27);
      if ( !v26 )
        goto LABEL_112;
      max_length = v26->max_length;
      if ( max_length )
      {
        fontSize = this->fields.fontSize;
        maxFontSize = this->fields.maxFontSize;
        verticalAlign = this->fields.verticalAlign;
        v32 = v26->m_Items[0];
        p_fields = (__int64 *)&v20->fields;
        p_ruby = (__int64 *)&v20->fields.ruby;
        if ( max_length <= 1 )
          ScriptMessageLabel__UpdateBouten(
            v20,
            &v20->fields.main,
            &v20->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v32,
            this->fields.fontType,
            0LL);
        else
          ScriptMessageLabel__UpdateRuby(
            v20,
            &v20->fields.main,
            &v20->fields.ruby,
            &this->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            v32,
            v26->m_Items[1],
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
          v55 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
          UILabel__set_text((UILabel_o *)Label, v55, 0LL);
        }
LABEL_74:
        if ( isFoward )
        {
          rubyText = v20->fields.rubyText;
          v20->fields.mainPosition.fields.x = v20->fields.mainPosition.fields.x - v20->fields.widthSize;
          if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            v20->fields.rubyPosition.fields.x = v20->fields.rubyPosition.fields.x - v20->fields.widthSize;
          this->fields.dispPosition = dispPosition;
        }
        Label = (__int64)this->fields.dispLabelList;
        if ( Label )
        {
          v75 = *(_QWORD *)(Label + 16);
          v76 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
          ++*(_DWORD *)(Label + 28);
          if ( v75 )
          {
            v77 = *(int *)(Label + 24);
            if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Label,
                (Il2CppObject *)v20,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = v75 + 8 * v77;
              *(_DWORD *)(Label + 24) = v77 + 1;
              *(_QWORD *)(v78 + 32) = v20;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 32), (int32_t)v20, v25, v35);
            }
            return;
          }
        }
LABEL_112:
        sub_1BC3264(Label, v17);
      }
    }
LABEL_113:
    sub_1BC326C(Label, v17, v25);
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 94 )
  {
    v36 = System_String__Substring_62394572(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BC30B0(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v17 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v36 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_62397724(v36, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_112;
    v38 = *(_DWORD *)(Label + 24);
    v39 = Label;
    if ( v38 <= 1 )
    {
      if ( !v38 )
        goto LABEL_113;
      v79 = *(System_String_o **)(Label + 32);
      Label = sub_1BC30B0(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_112;
      v17 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      *(_WORD *)(Label + 32) = 58;
      if ( !v79 )
        goto LABEL_112;
      Label = (__int64)System_String__Split_62397724(v79, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_112;
      v80 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_113;
      currentMessageWindow = this->fields.currentMessageWindow;
      if ( !currentMessageWindow )
        goto LABEL_112;
      v82 = *(System_String_o **)(Label + 32);
      Label = System_String__IsNullOrEmpty(currentMessageWindow->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v84 = this->fields.currentMessageWindow;
        if ( !v84 )
          goto LABEL_112;
        v82 = System_String__Concat_62348648(v82, v84->fields.imageSuffix, 0LL);
      }
      if ( *(int *)(v80 + 24) <= 1 )
      {
        ScriptMessageCommonManager__PreProcLabel(this, v20, 0, 1, 0, v83);
        ScriptMessageLabel__UpdateImage(
          v20,
          &v20->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v82,
          this->fields.horizontalAlign,
          0LL);
      }
      else
      {
        ScriptMessageCommonManager__PreProcLabel(this, v20, 1, 1, 0, v83);
        if ( *(_DWORD *)(v80 + 24) <= 1u )
          goto LABEL_113;
        ScriptMessageLabel__UpdateImageRuby(
          v20,
          &v20->fields.image,
          &v20->fields.ruby,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v82,
          *(System_String_o **)(v80 + 40),
          0LL,
          this->fields.horizontalAlign,
          0LL);
      }
    }
    else
    {
      ScriptMessageCommonManager__PreProcLabel(this, v20, 0, 1, 0, v37);
      if ( *(_DWORD *)(v39 + 24) < 2u )
        goto LABEL_113;
      v40 = *(System_String_o **)(v39 + 32);
      v41 = System_Single__Parse(*(System_String_o **)(v39 + 40), 0LL);
      v42 = this->fields.currentMessageWindow;
      if ( !v42 )
        goto LABEL_112;
      v43 = v41;
      Label = System_String__IsNullOrEmpty(v42->fields.imageSuffix, 0LL);
      if ( (Label & 1) == 0 )
      {
        v44 = this->fields.currentMessageWindow;
        if ( !v44 )
          goto LABEL_112;
        Label = (__int64)System_String__Concat_62348648(v40, v44->fields.imageSuffix, 0LL);
        v40 = (System_String_o *)Label;
      }
      v45 = *(_DWORD *)(v39 + 24);
      if ( v45 == 2 )
      {
        ScriptMessageLabel__UpdateImage_43728340(
          v20,
          &v20->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v43,
          v40,
          this->fields.horizontalAlign,
          0LL);
      }
      else if ( v45 <= 3 )
      {
        if ( (unsigned int)v45 <= 2 )
          goto LABEL_113;
        v85 = *(System_String_o **)(v39 + 48);
        Label = sub_1BC30B0(char___TypeInfo, 1LL);
        if ( !Label )
          goto LABEL_112;
        v17 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        *(_WORD *)(Label + 32) = 44;
        if ( !v85 )
          goto LABEL_112;
        Label = (__int64)System_String__Split_62397724(v85, (System_Char_array *)Label, 0LL);
        if ( !Label )
          goto LABEL_112;
        v86 = Label;
        if ( !*(_DWORD *)(Label + 24) )
          goto LABEL_113;
        Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
        if ( *(_DWORD *)(v86 + 24) <= 1u )
          goto LABEL_113;
        v87 = Label;
        v88 = System_Int32__Parse(*(System_String_o **)(v86 + 40), 0LL);
        v91.fields.x = (float)v87;
        v91.fields.y = (float)v88;
        ScriptMessageLabel__UpdateImage_43728492(
          v20,
          &v20->fields.image,
          &this->fields.dispPosition,
          this->fields.fontSize,
          v43,
          v40,
          v91,
          this->fields.horizontalAlign,
          0LL);
      }
    }
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = (__int64)v20->fields.image;
    if ( !Label )
      goto LABEL_112;
    goto LABEL_109;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 126 )
  {
    v46 = System_String__Substring_62394572(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BC30B0(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_112;
    v17 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    *(_WORD *)(Label + 32) = 32;
    if ( !v46 )
      goto LABEL_112;
    Label = (__int64)System_String__Split_62397724(v46, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_112;
    v47 = Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_113;
    Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
    v48 = this->fields.currentMessageWindow;
    if ( *(int *)(v47 + 24) >= 2 )
      v49 = (System_String_o **)(v47 + 40);
    else
      v49 = (System_String_o **)&StringLiteral_21031/*"line"*/;
    if ( !v48 )
      goto LABEL_112;
    v50 = Label;
    v51 = *v49;
    Label = System_String__IsNullOrEmpty(v48->fields.imageSuffix, 0LL);
    if ( (Label & 1) == 0 )
    {
      v53 = this->fields.currentMessageWindow;
      if ( !v53 )
        goto LABEL_112;
      v51 = System_String__Concat_62348648(v51, v53->fields.imageSuffix, 0LL);
    }
    ScriptMessageCommonManager__PreProcLabel(this, v20, 0, 1, 0, v52);
    p_image = (__int64 *)&v20->fields.image;
    ScriptMessageLabel__UpdateLine(
      v20,
      &v20->fields.image,
      &this->fields.dispPosition,
      this->fields.fontSize,
      v50,
      v51,
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
    ScriptMessageCommonManager__PreProcLabel(this, v20, 0, 0, 0, v23);
    v73 = (__int64 *)&v20->fields;
    ScriptMessageLabel__UpdateLabel(
      v20,
      &v20->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.maxFontSize,
      this->fields.verticalAlign,
      text,
      this->fields.fontType,
      0LL);
    if ( tm < 0.0 )
      goto LABEL_74;
    Label = *v73;
    if ( !*v73 )
      goto LABEL_112;
    v55 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_73;
  }
  Label = (__int64)System_String__Substring_62394572(text, 2, text->fields._stringLength - 3, 0LL);
  if ( !Label )
    goto LABEL_112;
  v56 = System_String__Split((System_String_o *)Label, 0x20u, 0, 0LL);
  if ( v56 )
  {
    v57 = v56;
    if ( (int)v56->max_length >= 1 )
    {
      v58 = v56->m_Items[0];
      if ( v58 )
      {
        Label = System_String__op_Equality(v58, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
        if ( (Label & 1) == 0 )
        {
          if ( !v57->max_length )
            goto LABEL_113;
          Label = (__int64)v57->m_Items[0];
          if ( !Label )
            goto LABEL_112;
          v59 = System_String__Trim((System_String_o *)Label, 0LL);
          v61 = System_String__Concat_62348648((System_String_o *)StringLiteral_13502/*"Talk/"*/, v59, 0LL);
          v62 = 0.0;
          v63 = 0.0;
          v64 = 0.0;
          if ( (int)v57->max_length >= 2 )
          {
            Label = (__int64)v57->m_Items[1];
            if ( !Label )
              goto LABEL_112;
            Label = (__int64)System_String__Trim((System_String_o *)Label, 0LL);
            if ( !Label )
              goto LABEL_112;
            v65 = System_String__Split((System_String_o *)Label, 0x2Cu, 0, 0LL);
            v63 = 0.0;
            v64 = 0.0;
            if ( v65 )
            {
              v66 = v65;
              v63 = 0.0;
              v64 = 0.0;
              if ( (int)v65->max_length >= 2 )
              {
                Label = (__int64)v65->m_Items[0];
                if ( !Label )
                  goto LABEL_112;
                v67 = System_String__Trim((System_String_o *)Label, 0LL);
                v68 = System_Single__Parse(v67, 0LL);
                if ( v66->max_length <= 1 )
                  goto LABEL_113;
                Label = (__int64)v66->m_Items[1];
                if ( !Label )
                  goto LABEL_112;
                v64 = v68;
                v69 = System_String__Trim((System_String_o *)Label, 0LL);
                v63 = System_Single__Parse(v69, 0LL);
              }
            }
          }
          if ( (int)v57->max_length <= 2 )
            goto LABEL_110;
          Label = (__int64)v57->m_Items[2];
          if ( !Label )
            goto LABEL_112;
          v70 = System_String__Trim((System_String_o *)Label, 0LL);
          v62 = System_Single__Parse(v70, 0LL);
          if ( (int)v57->max_length < 4 )
          {
LABEL_110:
            v72 = 0;
          }
          else
          {
            Label = (__int64)v57->m_Items[3];
            if ( !Label )
              goto LABEL_112;
            v71 = System_String__Trim((System_String_o *)Label, 0LL);
            v72 = System_Int32__Parse(v71, 0LL);
          }
          v89 = this->fields.dispPosition;
          pos.fields.x = v64 + v89.fields.x;
          pos.fields.y = v63 + v89.fields.y;
          this->fields.dispPosition = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                      (float32x2_t)v89,
                                                                      (float32x2_t)1124073472LL).n64_u64[0];
          ScriptMessageCommonManager__PreProcLabel(this, v20, 0, 0, 1, v60);
          ScriptMessageLabel__UpdateEffect(v20, &v20->fields.effect, &pos, v61, v62, v72, 0LL);
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
    sub_1BC3264(0LL, method);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  void *talkNameManager; // x0
  UnityEngine_Object_o *currentMessageWindow; // x22
  UnityEngine_Object_o *defaultMessageWindow; // x23
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Object_o **v14; // x21
  struct ScriptMessageWindow_o *v15; // x8
  Il2CppObject *messageMainLabel; // x22
  UnityEngine_Transform_o *v17; // x23
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x22
  struct ScriptMessageWindow_o *v23; // x8
  Il2CppObject *messageRubyLabel; // x22
  UnityEngine_Transform_o *v25; // x23
  const MethodInfo *v26; // x3
  struct UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x22
  struct ScriptMessageWindow_o *v31; // x8
  Il2CppObject *talkNameMainLabel; // x22
  UnityEngine_Transform_o *v33; // x23
  Il2CppObject *v34; // x23
  const MethodInfo *v35; // x3
  struct ScriptLineMessage_o *v36; // x22
  struct ScriptMessageWindow_o *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_Object_o *v40; // x22
  struct ScriptMessageWindow_o *v41; // x8
  Il2CppObject *talkNameRubyLabel; // x22
  UnityEngine_Transform_o *v43; // x23
  Il2CppObject *v44; // x23
  const MethodInfo *v45; // x3
  struct ScriptLineMessage_o *v46; // x22
  struct ScriptMessageWindow_o *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x6
  const MethodInfo *v56; // x1

  if ( (byte_4B03E4C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___, prefab);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_UILabel____76895776, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B03E4C = 1;
  }
  ScriptMessageCommonManager__DeleteLabels(this, (const MethodInfo *)prefab);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)talkNameManager, v7);
  talkNameManager = this->fields.defaultMessageWindow;
  if ( !talkNameManager )
    goto LABEL_57;
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !talkNameManager )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)talkNameManager, 0, 0LL);
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  defaultMessageWindow = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Inequality(currentMessageWindow, defaultMessageWindow, 0LL) )
  {
    talkNameManager = *p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_57;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)talkNameManager,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  }
  talkNameManager = this->fields.messageShake;
  if ( !talkNameManager )
    goto LABEL_57;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = UnityEngine_Object__Instantiate_object__50900816(
                      (Il2CppObject *)prefab,
                      transform,
                      (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_ScriptMessageWindow___);
  if ( !talkNameManager )
    goto LABEL_57;
  v14 = (UnityEngine_Object_o **)talkNameManager;
  ScriptMessageWindow__CopyTouchComponents(
    (ScriptMessageWindow_o *)talkNameManager,
    this->fields.defaultMessageWindow,
    0LL);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v14[16], 0LL, 0LL);
  v15 = this->fields.defaultMessageWindow;
  if ( !v15 )
    goto LABEL_57;
  messageMainLabel = (Il2CppObject *)v15->fields.messageMainLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    messageMainLabel = UnityEngine_Object__Instantiate_object__50900816(
                         messageMainLabel,
                         v17,
                         (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_UILabel____76895776);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageMainLabel,
      (UILabel_o *)v14[16],
      (UILabel_o *)messageMainLabel,
      v18);
  }
  if ( !messageMainLabel )
    goto LABEL_57;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
  this->fields.mainPrefab = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)v19, v20, v21);
  v22 = v14[17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
  v23 = this->fields.defaultMessageWindow;
  if ( !v23 )
    goto LABEL_57;
  messageRubyLabel = (Il2CppObject *)v23->fields.messageRubyLabel;
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    messageRubyLabel = UnityEngine_Object__Instantiate_object__50900816(
                         messageRubyLabel,
                         v25,
                         (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_UILabel____76895776);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)messageRubyLabel,
      (UILabel_o *)v14[17],
      (UILabel_o *)messageRubyLabel,
      v26);
  }
  if ( !messageRubyLabel )
    goto LABEL_57;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageRubyLabel, 0LL);
  this->fields.rubyPrefab = v27;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v27, v28, v29);
  v30 = v14[18];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) != 0 )
  {
    v31 = this->fields.defaultMessageWindow;
    if ( !v31 )
      goto LABEL_57;
    talkNameMainLabel = (Il2CppObject *)v31->fields.talkNameMainLabel;
    v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = UnityEngine_Object__Instantiate_object__50900816(
            talkNameMainLabel,
            v33,
            (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_UILabel____76895776);
    ScriptMessageCommonManager__CopyFontEffects(
      (ScriptMessageCommonManager_o *)v34,
      (UILabel_o *)v14[18],
      (UILabel_o *)v34,
      v35);
    if ( !v34 )
      goto LABEL_57;
    v36 = this->fields.talkNameManager;
    talkNameManager = v34;
  }
  else
  {
    v37 = this->fields.defaultMessageWindow;
    if ( !v37 )
      goto LABEL_57;
    talkNameManager = v37->fields.talkNameMainLabel;
    if ( !talkNameManager )
      goto LABEL_57;
    v36 = this->fields.talkNameManager;
  }
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v36 )
    goto LABEL_57;
  v36->fields.mainPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v36->fields.mainPrefab, (int32_t)talkNameManager, v38, v39);
  v40 = v14[19];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  talkNameManager = (void *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)talkNameManager & 1) == 0 )
  {
    v47 = this->fields.defaultMessageWindow;
    if ( v47 )
    {
      talkNameManager = v47->fields.talkNameRubyLabel;
      if ( talkNameManager )
      {
        v46 = this->fields.talkNameManager;
        goto LABEL_54;
      }
    }
LABEL_57:
    sub_1BC3264(talkNameManager, v7);
  }
  v41 = this->fields.defaultMessageWindow;
  if ( !v41 )
    goto LABEL_57;
  talkNameRubyLabel = (Il2CppObject *)v41->fields.talkNameRubyLabel;
  v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v44 = UnityEngine_Object__Instantiate_object__50900816(
          talkNameRubyLabel,
          v43,
          (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_UILabel____76895776);
  ScriptMessageCommonManager__CopyFontEffects(
    (ScriptMessageCommonManager_o *)v44,
    (UILabel_o *)v14[19],
    (UILabel_o *)v44,
    v45);
  if ( !v44 )
    goto LABEL_57;
  v46 = this->fields.talkNameManager;
  talkNameManager = v44;
LABEL_54:
  talkNameManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)talkNameManager, 0LL);
  if ( !v46 )
    goto LABEL_57;
  v46->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)talkNameManager;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v46->fields.rubyPrefab, (int32_t)talkNameManager, v48, v49);
  talkNameManager = this->fields.talkNameManager;
  if ( !talkNameManager )
    goto LABEL_57;
  v52 = v14[11];
  *((_QWORD *)talkNameManager + 7) = v52;
  sub_1BC2FAC((CGThumbnailListItem_o *)((char *)talkNameManager + 56), (int32_t)v52, v50, v51);
  this->fields.currentMessageWindow = (struct ScriptMessageWindow_o *)v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)v14, v53, v54);
  ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v55);
  ScriptMessageCommonManager__ResetScroll(this, v56);
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
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B03E31 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4B03E31 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    dispLabelList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptMessageCommonManager__ReleaseLabel(this, (ScriptMessageLabel_o *)v12.fields._current, v8);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v9 = this->fields.dispLabelList;
  if ( !v9 )
LABEL_11:
    sub_1BC3264(dispLabelList, method);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
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
  int32_t v4; // w1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ScriptMessageWindow_o *v10; // x8

  v2 = this;
  if ( (byte_4B03E4A & 1) == 0 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03E4A = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_9;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.talkNameRootObject;
  if ( !this )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v4 = (int)StringLiteral_1/*""*/;
  v2->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.talkName, v4, v5, v6);
  v7 = (int)StringLiteral_1/*""*/;
  v2->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.talkNameOnly, v7, v8, v9);
  this = (ScriptMessageCommonManager_o *)v2->fields.talkNameManager;
  v2->fields.talkNameIndex = -1;
  if ( !this
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)this, method), (v10 = v2->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v10->fields.talkNameIcon) == 0LL )
  {
LABEL_9:
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(ScriptMessageCommonManager_o *, Il2CppMethodPointer, float))this->klass->vtable._8_IsEnableCloseDown.method)(
    this,
    this->klass->vtable._9_CloseDown.methodPtr,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ClearText(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o *p_startPosition; // x20
  UnityEngine_Transform_o *messageScroll; // x0
  const MethodInfo *v5; // x1
  unsigned __int64 v6; // d0
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  float z; // s2
  int v9; // s1
  const MethodInfo *v10; // x1
  float textOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  struct ScriptMessageWindow_o *v13; // x8
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ScriptMessageWindow_o *v20; // x8

  p_startPosition = &this->fields.startPosition;
  if ( (byte_4B03E48 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03E48 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  p_startPosition[1] = *p_startPosition;
  v6 = vmul_f32((float32x2_t)this->fields.dispSize, (float32x2_t)0x3F000000BF000000LL).n64_u64[0];
  p_startPosition[2] = (struct UnityEngine_Vector2_o)v6;
  currentMessageWindow = this->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_12;
  messageScroll = currentMessageWindow->fields.messageScroll;
  if ( !messageScroll )
    goto LABEL_12;
  z = this->fields.scrollPosition.fields.z;
  v9 = HIDWORD(v6);
  UnityEngine_Transform__set_localPosition(messageScroll, *(UnityEngine_Vector3_o *)&v6, 0LL);
  ScriptMessageCommonManager__SetDefaultState(this, v10);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  v13 = this->fields.currentMessageWindow;
  this->fields.isBusy = 0;
  this->fields.isScroll = 0;
  this->fields.isEffectMessage = 0;
  *(_WORD *)&this->fields.isWaitNextTouchRequest = 0;
  this->fields.dispCountTimer = -1.0;
  this->fields.beforeTextOnlyLineHeight = textOnlyLineHeight + rubyLineHeight;
  this->fields.isFastMessageRequest = 0;
  if ( !v13 )
    goto LABEL_12;
  messageScroll = (UnityEngine_Transform_o *)v13->fields.talkNameRootObject;
  if ( !messageScroll )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageScroll, 0, 0LL);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.talkName, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.talkNameOnly = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.talkNameOnly, v17, v18, v19);
  messageScroll = (UnityEngine_Transform_o *)this->fields.talkNameManager;
  this->fields.talkNameIndex = -1;
  if ( !messageScroll
    || (ScriptLineMessage__ClearText((ScriptLineMessage_o *)messageScroll, v5),
        (v20 = this->fields.currentMessageWindow) == 0LL)
    || (messageScroll = (UnityEngine_Transform_o *)v20->fields.talkNameIcon) == 0LL
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&messageScroll->klass[1]._1.this_arg.bits)(
          messageScroll,
          messageScroll->klass[1]._1.element_class,
          0.0),
        (messageScroll = (UnityEngine_Transform_o *)this->fields.nextTouchRootObject) == 0LL) )
  {
LABEL_12:
    sub_1BC3264(messageScroll, v5);
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
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowCloseTime; // s0
  TweenPosition_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_AnimationCurve_o *windowDownCurve; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B03E42 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_ScriptMessageCommonManager_CloseDown__, v6);
    byte_4B03E42 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_24;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(rootObject, isFast);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rootObject, 0LL);
  windowCloseTime = 0.0;
  if ( !isFast )
    windowCloseTime = this->fields.windowCloseTime;
  v18.fields.y = this->fields.windowClosePosY;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  v11 = TweenPosition__Begin(gameObject, windowCloseTime, v18, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)rootObject & 1) != 0 )
  {
    if ( v11 )
    {
      v11->fields.method = 0;
      windowDownCurve = this->fields.windowDownCurve;
      v11->fields.animationCurve = windowDownCurve;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v11->fields.animationCurve, (int32_t)windowDownCurve, v12, v13);
      UITweener__PlayForward((UITweener_o *)v11, 0LL);
      v15 = Method_ScriptMessageCommonManager_CloseDown__;
      if ( (*((_BYTE *)Method_ScriptMessageCommonManager_CloseDown__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BC3020(Method_ScriptMessageCommonManager_CloseDown__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0, 0LL);
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
    sub_1BC3264(this, src);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v7; // x1
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Component_o *v9; // x19
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_4B03E5D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B03E5D = 1;
  }
  mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   mainPrefab,
                                                   (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_15;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !Component_object )
    goto LABEL_15;
  currentMessageWindow = this->fields.currentMessageWindow;
  v9 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !currentMessageWindow )
    goto LABEL_15;
  ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v9, 0LL);
  v10 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4AFBDB1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4AFBDB1 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v9, 0LL);
  v11 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4AFBDB6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4AFBDB6 = 1;
  }
  if ( !v11 )
LABEL_15:
    sub_1BC3264(Component_object, v7);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v9;
}


void __fastcall ScriptMessageCommonManager__DeleteLabels(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4B03E30 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v8);
    byte_4B03E30 = 1;
  }
  ScriptMessageCommonManager__ClearLabels(this, method);
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    goto LABEL_27;
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
                                                            (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( labelStock )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)labelStock,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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
                                                            (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
    if ( !labelStock )
      goto LABEL_27;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v12, 0LL);
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !labelStock )
LABEL_27:
    sub_1BC3264(labelStock, v9);
  while ( labelStock->fields._size > 0 )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                            labelStock,
                                                            (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
    if ( labelStock )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(v13, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 imageStock; // x0
  UnityEngine_Component_o *v8; // x19
  Il2CppObject *imagePrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B03E35 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v6);
    byte_4B03E35 = 1;
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
                            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( imageStock )
    {
      imageStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)imageStock,
                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( imageStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v8 = (UnityEngine_Component_o *)imageStock;
        imageStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)imageStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)imageStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BC3264(imageStock, method);
  }
  imageStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                          (System_Collections_Generic_Stack_T__o *)imageStock,
                          (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v8 = (UnityEngine_Component_o *)imageStock;
  if ( !imageStock )
    goto LABEL_20;
LABEL_13:
  imageStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v11 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4AFBDB1 )
  {
    imageStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
  }
  if ( !v11 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  imageStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)imageStock;
  if ( !byte_4AFBDB6 )
  {
    imageStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB6 = 1;
  }
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v8;
}


ScriptMessageLabel_o *__fastcall ScriptMessageCommonManager__FetchLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v7; // x19

  if ( (byte_4B03E36 & 1) == 0 )
  {
    sub_1BC3008(&ScriptMessageLabel_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v4);
    byte_4B03E36 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( !labelStock )
    sub_1BC3264(0LL, method);
  if ( labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v7 = (ScriptMessageLabel_o *)sub_1BC3254(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v7, 0LL);
  return v7;
}


UILabel_o *__fastcall ScriptMessageCommonManager__FetchMainLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 mainStock; // x0
  UnityEngine_Component_o *v8; // x19
  Il2CppObject *mainPrefab; // x19
  ScriptMessageWindow_o *currentMessageWindow; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B03E33 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_4B03E33 = 1;
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
                           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( mainStock )
    {
      mainStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mainStock,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( mainStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v8 = (UnityEngine_Component_o *)mainStock;
        mainStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)mainStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BC3264(mainStock, method);
  }
  mainStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)mainStock,
                         (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  if ( !mainStock )
    goto LABEL_20;
  v8 = (UnityEngine_Component_o *)mainStock;
  UILabel__AddToDynamicFontList((UILabel_o *)mainStock, 0LL);
LABEL_13:
  mainStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v11 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4AFBDB1 )
  {
    mainStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
  }
  if ( !v11 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mainStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)mainStock;
  if ( !byte_4AFBDB6 )
  {
    mainStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB6 = 1;
  }
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v8;
}


UILabel_o *__fastcall ScriptMessageCommonManager__FetchRubyLabel(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 rubyStock; // x0
  UnityEngine_Component_o *v8; // x20
  Il2CppObject *rubyPrefab; // x20
  ScriptMessageWindow_o *currentMessageWindow; // x21
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21

  if ( (byte_4B03E34 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    byte_4B03E34 = 1;
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
                           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( rubyStock )
    {
      rubyStock = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rubyStock,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( rubyStock )
      {
        currentMessageWindow = this->fields.currentMessageWindow;
        v8 = (UnityEngine_Component_o *)rubyStock;
        rubyStock = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rubyStock, 0LL);
        if ( currentMessageWindow )
        {
          ScriptMessageWindow__AddChildMessageScroll(currentMessageWindow, (UnityEngine_Transform_o *)rubyStock, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    sub_1BC3264(rubyStock, method);
  }
  rubyStock = (__int64)System_Collections_Generic_Stack_object___Pop(
                         (System_Collections_Generic_Stack_T__o *)rubyStock,
                         (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v8 = (UnityEngine_Component_o *)rubyStock;
  if ( !rubyStock )
    goto LABEL_20;
LABEL_13:
  rubyStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v11 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4AFBDB1 )
  {
    rubyStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
  }
  if ( !v11 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  rubyStock = (__int64)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)rubyStock;
  if ( !byte_4AFBDB6 )
  {
    rubyStock = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB6 = 1;
  }
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UILabel__set_fontSize((UILabel_o *)v8, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v8;
}


void __fastcall ScriptMessageCommonManager__ForceOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *rootObject; // x20
  __int64 v5; // x1
  __int64 transform; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *rootPanel; // x20
  UnityEngine_Object_o *v9; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_4B03E40 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03E40 = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.rootObject;
    if ( !transform )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      rootPanel = (UnityEngine_Object_o *)this->fields.rootPanel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(rootPanel, 0LL, 0LL) )
      {
        transform = (__int64)this->fields.rootPanel;
        if ( !transform )
          goto LABEL_36;
        v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
        {
          transform = (__int64)this->fields.rootObject;
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
            if ( transform )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)transform,
                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  v11 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4AFBDB1 )
                  {
                    transform = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v5);
                    byte_4AFBDB1 = 1;
                  }
                  if ( v11 )
                  {
                    UnityEngine_Transform__set_localPosition(
                      v11,
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
          sub_1BC3264(transform, v5);
        }
      }
    }
  }
}


int32_t __fastcall ScriptMessageCommonManager__GetAllDispLength(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *dispLabelList; // x0
  int32_t v6; // w20
  int32_t v7; // w21
  void *v8; // x22
  UnityEngine_Object_o *v9; // x23

  if ( (byte_4B03E52 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B03E52 = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_15:
    sub_1BC3264(dispLabelList, method);
  v6 = 0;
  v7 = 0;
  while ( v7 < *((_DWORD *)dispLabelList + 6) )
  {
    dispLabelList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)dispLabelList,
                      v7,
                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( dispLabelList )
    {
      v8 = dispLabelList;
      if ( *((int *)dispLabelList + 42) >= 1 )
      {
        if ( !System_String__IsNullOrEmpty(*((System_String_o **)dispLabelList + 15), 0LL) )
          v6 += *((_DWORD *)v8 + 42);
        v9 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 6);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
          v6 += *((_DWORD *)v8 + 42);
      }
      dispLabelList = this->fields.dispLabelList;
      ++v7;
      if ( dispLabelList )
        continue;
    }
    goto LABEL_15;
  }
  return v6;
}


UnityEngine_GameObject_o *__fastcall ScriptMessageCommonManager__GetBackLogButtonObject(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backLogButton; // x0

  backLogButton = (UnityEngine_Component_o *)this->fields.backLogButton;
  if ( !backLogButton )
    sub_1BC3264(0LL, method);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
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
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  float defaultTextOnlyLineHeight; // s0
  int v11; // w20
  signed int max_length; // w8
  float defaultBetweenLineHeight; // s10
  int defaultFontSize; // w24
  il2cpp_array_size_t v15; // w29
  int32_t v16; // w23
  int v17; // w27
  float v18; // s9
  int v19; // w28
  float v20; // s8
  System_String_o *v21; // x25
  System_String_o *v22; // x24
  int32_t v23; // w25
  System_String_o *v24; // x25
  int32_t VerticalAlignFromString; // w25
  float v26; // s0
  float v27; // s1
  float v28; // s0
  float v29; // s8
  float v30; // s2
  float v31; // s0
  int32_t v32; // w20
  float result; // s0
  int32_t messageAlign; // w8
  int32_t maxFontSize; // w22
  float VerticalAlignOffset; // s0
  int32_t v37; // w8
  int32_t vAlign; // [xsp+8h] [xbp-88h]
  int32_t fontSize; // [xsp+Ch] [xbp-84h]

  v4 = this;
  if ( (byte_4B03E49 & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, dataList);
    sub_1BC3008(&ScriptMessageLabel_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_19163/*"f"*/, v6);
    sub_1BC3008(&StringLiteral_25195/*"・"*/, v7);
    sub_1BC3008(&StringLiteral_22693/*"r"*/, v8);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&StringLiteral_20949/*"l"*/, v9);
    byte_4B03E49 = 1;
  }
  defaultTextOnlyLineHeight = v4->fields.defaultTextOnlyLineHeight;
  if ( defaultTextOnlyLineHeight == INFINITY )
    v11 = 0x80000000;
  else
    v11 = (int)defaultTextOnlyLineHeight;
  if ( !dataList )
    sub_1BC3264(this, dataList);
  max_length = dataList->max_length;
  defaultBetweenLineHeight = v4->fields.defaultBetweenLineHeight;
  fontSize = v11;
  if ( max_length >= 1 )
  {
    vAlign = 0;
    defaultFontSize = v4->fields.defaultFontSize;
    v15 = 0;
    v16 = 0;
    v17 = 1;
    v18 = 0.0;
    v19 = -1;
    v20 = v4->fields.defaultBetweenLineHeight;
    while ( v15 < max_length )
    {
      v21 = dataList->m_Items[v15];
      this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                               v21,
                                               (System_String_o *)StringLiteral_19163/*"f"*/,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v15 + 2 >= dataList->max_length )
          break;
        v22 = dataList->m_Items[v15 + 2];
        v23 = v4->fields.defaultFontSize;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        this = (ScriptMessageCommonManager_o *)ScriptMessageLabel__GetFontSize(v22, v23, 0LL);
        v15 += 4;
        if ( v11 < (int)this )
          v11 = (int)this;
        if ( v15 >= dataList->max_length )
          break;
        defaultFontSize = (int)this;
        v24 = dataList->m_Items[v15];
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(v24, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        this = (ScriptMessageCommonManager_o *)System_Math__Max_63870684(VerticalAlignFromString, v16, 0LL);
        v16 = (int)this;
      }
      else
      {
        this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                 v21,
                                                 (System_String_o *)StringLiteral_20949/*"l"*/,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 += 2;
          if ( v15 >= dataList->max_length )
            break;
          v26 = System_Single__Parse(dataList->m_Items[v15], 0LL);
          if ( v26 >= 0.0 )
            v20 = v26;
          else
            v20 = v4->fields.defaultBetweenLineHeight;
        }
        else
        {
          this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                   v21,
                                                   (System_String_o *)StringLiteral_22693/*"r"*/,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v27 = v4->fields.defaultTextOnlyLineHeight;
            defaultBetweenLineHeight = v20;
            v28 = v20 + (float)(v4->fields.rubyLineHeight + (float)v11);
            v20 = v4->fields.defaultBetweenLineHeight;
            defaultFontSize = v4->fields.defaultFontSize;
            v18 = v18 + v28;
            vAlign = v16;
            fontSize = v11;
            if ( v27 == INFINITY )
              v11 = 0x80000000;
            else
              v11 = (int)v27;
            ++v17;
            v16 = 0;
          }
          else
          {
            this = (ScriptMessageCommonManager_o *)System_String__op_Equality(
                                                     v21,
                                                     (System_String_o *)StringLiteral_25195/*"・"*/,
                                                     0LL);
            if ( ((v19 < defaultFontSize) & (v17 == 1) & (unsigned __int8)this) != 0 )
              v19 = defaultFontSize;
          }
        }
      }
      max_length = dataList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_38;
    }
    sub_1BC326C(this, dataList, method);
  }
  vAlign = 0;
  v19 = -1;
  v18 = 0.0;
LABEL_38:
  if ( v19 < 1 )
  {
    v32 = fontSize;
  }
  else
  {
    if ( !byte_4AFC46F )
    {
      sub_1BC3008(&System_Math_TypeInfo, dataList);
      byte_4AFC46F = 1;
    }
    v29 = (float)v19 * 0.37;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = (float)(int)vcvtps_s32_f32(v29);
    v31 = -2147500000.0;
    v32 = fontSize;
    if ( ceilf(v29) != INFINITY )
      v31 = v30;
    result = v31 - v4->fields.rubyLineHeight;
    if ( result > 0.0 )
    {
      messageAlign = v4->fields.messageAlign;
      if ( !messageAlign )
        return result;
      if ( messageAlign == 1 )
        v18 = v18 - (float)(result + result);
    }
  }
  if ( !v4->fields.messageAlign )
    return 0.0;
  maxFontSize = v4->fields.maxFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  VerticalAlignOffset = ScriptMessageLabel__getVerticalAlignOffset(vAlign, v32, maxFontSize, 0LL);
  v37 = v4->fields.messageAlign;
  result = (float)(v4->fields.dispSize.fields.y - (float)((float)(v18 - defaultBetweenLineHeight) + VerticalAlignOffset))
         - (float)(v4->fields.rubyLineHeight + 4.0);
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
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x6

  if ( (byte_4B03E3B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8955/*"MessageShake/LogMark/BackLogButton"*/, method);
    byte_4B03E3B = 1;
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
    sub_1BC3264(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform(rootPanel, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_8955/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
  return ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v6);
}


bool __fastcall ScriptMessageCommonManager__IsActiveMessageWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(rootObject, 0LL) )
  {
    rootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
    if ( rootObject )
      return (*(float (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&rootObject->klass[1]._1.this_arg.bits)(
               rootObject,
               rootObject->klass[1]._1.element_class) > 0.0;
LABEL_6:
    sub_1BC3264(rootObject, method);
  }
  return 0;
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
    sub_1BC3264(0LL, v3);
  return UITouchPress__get_IsLongPress(touchPress, 0LL);
}


bool __fastcall ScriptMessageCommonManager__IsOpen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *rootPanel; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B03E3E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03E3E = 1;
  }
  rootPanel = (UnityEngine_Component_o *)this->fields.rootPanel;
  if ( !rootPanel )
    goto LABEL_14;
  rootPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootPanel, 0LL);
  if ( !rootPanel )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootPanel,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(rootPanel, method);
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

  if ( (byte_4B03E5C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03E5C = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootObject, 0LL, 0LL) )
    return 0;
  v6 = this->fields.rootObject;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B03E3F & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03E3F = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(rootObject, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)rootObject, 0LL);
  return localPosition.fields.y <= this->fields.windowClosePosY;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectExist(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v8; // w21
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B03E5B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B03E5B = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = dispLabelList->fields._size;
    v8 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             i,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v11[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
          break;
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    if ( !dispLabelList )
      sub_1BC3264(0LL, v10);
  }
  return v8;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsBusy(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v9; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v15; // x22

  if ( (byte_4B03E59 & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectManager_TypeInfo, effectName);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B03E59 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BC3264(dispLabelList, effectName);
  v9 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v9 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v9,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v12 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v12[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v15 = (UnityEngine_GameObject_o *)v12[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          if ( CommonEffectManager__IsBusy_42631056(v15, effectName, 0LL) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v9;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v9 < size;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectIsStart(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v9; // w21
  int32_t size; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x22
  UnityEngine_Object_o *klass; // x23
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v15; // x22

  if ( (byte_4B03E5A & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectManager_TypeInfo, effectName);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B03E5A = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BC3264(dispLabelList, effectName);
  v9 = 0;
  while ( 1 )
  {
    size = dispLabelList->fields._size;
    if ( v9 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v9,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v12 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v12[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v15 = (UnityEngine_GameObject_o *)v12[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          if ( CommonEffectManager__IsStart_42631972(v15, effectName, 0LL) )
            break;
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v9;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v9 < size;
}


bool __fastcall ScriptMessageCommonManager__MessageEffectStop(
        ScriptMessageCommonManager_o *this,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t v11; // w21
  int v12; // w28
  bool v13; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x23
  UnityEngine_Object_o *klass; // x24
  UnityEngine_Object_o *monitor; // x24
  UnityEngine_GameObject_o *v18; // x23

  if ( (byte_4B03E58 & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectManager_TypeInfo, effectName);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B03E58 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_17:
    sub_1BC3264(dispLabelList, effectName);
  v11 = 0;
  v12 = 1;
  v13 = isSkip;
  while ( v11 < dispLabelList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dispLabelList,
             v11,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( Item )
    {
      v15 = Item;
      klass = (UnityEngine_Object_o *)Item[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)v15[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)v15[3].monitor;
          if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
          v12 &= CommonEffectManager__Stop_42639048(v18, effectName, v13, 0, 0LL, 0LL);
        }
      }
    }
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    ++v11;
    if ( !dispLabelList )
      goto LABEL_17;
  }
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ScriptMessageCommonManager__MessageUpdate(
        ScriptMessageCommonManager_o *this,
        bool isMessageDelta,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  int32_t dispIndex; // w22
  System_Collections_Generic_List_object__o *v11; // x21
  UnityEngine_Object_o *monitor; // x23
  float v13; // s0
  int v14; // w8
  float dispCountTimer; // s0
  float v16; // s1
  float messageSpeed; // s2
  float v18; // s1
  float v19; // s0
  int32_t v20; // w23
  UnityEngine_Object_o *items; // x23
  UILabel_o *v22; // x23
  UILabel_o *v23; // x23
  struct System_Object_array *v24; // x8
  float v25; // s0
  int v26; // w8
  UnityEngine_Object_o *v28; // x20
  UILabel_o *v29; // x20
  System_String_o *syncRoot; // x22
  System_String_o *klass; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  int v34; // s0
  UILabel_o *v35; // x20
  System_String_o *v36; // x21
  float v37; // s9
  float v38; // s8
  int32_t v39; // w23
  float v40; // s9
  double v41; // d8
  double v42; // d0
  double v43; // d0
  double v44; // d1
  double v45; // d1
  int32_t v46; // w1
  System_String_o *v47; // x0
  double iptr; // [xsp+18h] [xbp-58h] BYREF

  v3 = isMessageDelta;
  if ( (byte_4B03E53 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__, isMessageDelta);
    sub_1BC3008(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__, v5);
    sub_1BC3008(&System_Math_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&ScriptMessageLabel_TypeInfo, v8);
    byte_4B03E53 = 1;
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
                                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    if ( !dispLabelList )
      goto LABEL_79;
    v11 = dispLabelList;
    monitor = (UnityEngine_Object_o *)dispLabelList[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      break;
    v13 = *((float *)&v11[4].monitor + 1);
    if ( v13 >= 0.0 )
    {
      if ( v3 )
      {
        v13 = v13 - this->fields.defaultStepTime;
        *((float *)&v11[4].monitor + 1) = v13;
      }
      if ( v13 >= 0.0 )
      {
        this->fields.isBusy = 1;
        return this->fields.isBusy;
      }
      v3 = 0;
      HIDWORD(v11[4].monitor) = 0;
    }
LABEL_44:
    dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
    this->fields.dispIndex = ++dispIndex;
    if ( !dispLabelList )
      goto LABEL_79;
  }
  v14 = (int)v11[4].monitor;
  if ( v14 < 1 )
  {
LABEL_29:
    items = (UnityEngine_Object_o *)v11->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    dispLabelList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0LL, 0LL);
    if ( ((unsigned __int8)dispLabelList & 1) != 0 )
    {
      v22 = (UILabel_o *)v11->fields._items;
      dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62348648(
                                                                     (System_String_o *)v11[2].fields._syncRoot,
                                                                     (System_String_o *)v11[3].klass,
                                                                     0LL);
      if ( !v22 )
        goto LABEL_79;
      UILabel__set_text(v22, (System_String_o *)dispLabelList, 0LL);
      *(_QWORD *)&isMessageDelta = v11[3].monitor;
      if ( !isMessageDelta )
        goto LABEL_79;
      if ( *(int *)(isMessageDelta + 16LL) >= 1 )
      {
        v23 = *(UILabel_o **)&v11->fields._size;
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62348648(
                                                                       (System_String_o *)v11[2].fields._syncRoot,
                                                                       (System_String_o *)isMessageDelta,
                                                                       0LL);
        if ( !v23 )
          goto LABEL_79;
        UILabel__set_text(v23, (System_String_o *)dispLabelList, 0LL);
      }
    }
    else
    {
      v24 = v11[3].fields._items;
      if ( !v24 )
        goto LABEL_79;
      if ( SLODWORD(v24->bounds) >= 1 )
      {
        dispLabelList = (System_Collections_Generic_List_object__o *)v11->fields._syncRoot;
        if ( !dispLabelList )
          goto LABEL_79;
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float))dispLabelList->klass->vtable._8_unknown.method)(
          dispLabelList,
          dispLabelList->klass->vtable._9_unknown.methodPtr,
          1.0);
      }
    }
    if ( this->fields.isFastMessageRequest || (v25 = *((float *)&v11[4].klass + 1), v25 == 0.0) )
    {
      this->fields.dispCountTimer = -1.0;
    }
    else
    {
      v26 = (int)v11[4].monitor;
      if ( v26 >= 1 )
        this->fields.dispCountTimer = this->fields.dispCountTimer - (float)(v25 * (float)v26);
    }
    goto LABEL_44;
  }
  dispCountTimer = this->fields.dispCountTimer;
  v16 = 0.0;
  if ( dispCountTimer < 0.0 )
    goto LABEL_21;
  messageSpeed = this->fields.messageSpeed;
  if ( messageSpeed <= 0.0 )
    goto LABEL_21;
  if ( v3 )
  {
    v3 = 0;
    v16 = dispCountTimer + (float)(messageSpeed * this->fields.defaultStepTime);
LABEL_21:
    dispCountTimer = v16;
    this->fields.dispCountTimer = v16;
    goto LABEL_22;
  }
  v3 = 0;
LABEL_22:
  if ( this->fields.isFastMessageRequest )
    goto LABEL_29;
  v18 = *((float *)&v11[4].klass + 1);
  if ( v18 == 0.0 || this->fields.messageSpeed == 0.0 )
    goto LABEL_29;
  v19 = dispCountTimer / v18;
  v20 = v19 == INFINITY ? 0x80000000 : (int)v19;
  if ( v20 >= v14 )
    goto LABEL_29;
  this->fields.isBusy = 1;
  v28 = (UnityEngine_Object_o *)v11->fields._items;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    v29 = (UILabel_o *)v11->fields._items;
    syncRoot = (System_String_o *)v11[2].fields._syncRoot;
    klass = (System_String_o *)v11[3].klass;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v32 = ScriptMessageLabel__SubstrByDisp(klass, v20, 0LL);
    dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62348648(syncRoot, v32, 0LL);
    if ( v29 )
    {
      UILabel__set_text(v29, (System_String_o *)dispLabelList, 0LL);
      v33 = (System_String_o *)v11[3].monitor;
      if ( v33 )
      {
        if ( v33->fields._stringLength < 1 )
          return this->fields.isBusy;
        v34 = (int)v11[4].monitor;
        v35 = *(UILabel_o **)&v11->fields._size;
        v36 = (System_String_o *)v11[2].fields._syncRoot;
        v37 = (float)v34;
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        v38 = (float)v20 / v37;
        v39 = ScriptMessageLabel__StrlenByDisp(v33, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v40 = v38 * (float)v39;
        v41 = v40;
        v42 = modf(v40, &iptr);
        if ( v40 >= 0.0 )
        {
          if ( v42 == 0.5 )
          {
            v43 = iptr;
            v44 = 1.0;
            goto LABEL_69;
          }
          v43 = floor(v41 + 0.5);
        }
        else if ( v42 == -0.5 )
        {
          v43 = iptr;
          v44 = -1.0;
LABEL_69:
          v45 = v43 + v44;
          if ( ((__int64)v43 & 1) != 0 )
            v43 = v45;
        }
        else
        {
          v43 = ceil(v41 + -0.5);
        }
        if ( v43 == INFINITY )
          v46 = 0x80000000;
        else
          v46 = (int)v43;
        v47 = ScriptMessageLabel__SubstrByDisp(v33, v46, 0LL);
        dispLabelList = (System_Collections_Generic_List_object__o *)System_String__Concat_62348648(v36, v47, 0LL);
        if ( v35 )
        {
          UILabel__set_text(v35, (System_String_o *)dispLabelList, 0LL);
          return this->fields.isBusy;
        }
      }
    }
LABEL_79:
    sub_1BC3264(dispLabelList, isMessageDelta);
  }
  return this->fields.isBusy;
}


void __fastcall ScriptMessageCommonManager__OffScreen(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  struct UIPanel_o *rootPanel; // x0

  rootPanel = this->fields.rootPanel;
  this->fields.isMessageOut = 0;
  if ( !rootPanel )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))rootPanel->klass->vtable._8_set_alpha.method)(
    rootPanel,
    rootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall ScriptMessageCommonManager__OnClickWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B03E50 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9798/*"OnDelayWaitNextTouch"*/, method);
    byte_4B03E50 = 1;
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
          sub_1BC3264(0LL, v3);
        UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9798/*"OnDelayWaitNextTouch"*/,
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
  Il2CppObject *Component_object; // x20
  float v6; // s8
  float windowClosePosY; // s9

  if ( (byte_4B03E43 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03E43 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_13;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v6 = *(float *)&Component_object[9].klass;
        windowClosePosY = this->fields.windowClosePosY;
        rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
        if ( rootObject )
        {
          UnityEngine_GameObject__SetActive(rootObject, v6 != windowClosePosY, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BC3264(rootObject, method);
  }
}


void __fastcall ScriptMessageCommonManager__OnLongPressWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B03E51 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9798/*"OnDelayWaitNextTouch"*/, method);
    byte_4B03E51 = 1;
  }
  if ( !this->fields.isTapSkip
    && ScriptMessageCommonManager__IsOpen(this, method)
    && this->fields.isWaitNextTouchRequest
    && !this->fields.isWaitNextTouchDelay )
  {
    nextTouchRootObject = this->fields.nextTouchRootObject;
    this->fields.isWaitNextTouchDelay = 1;
    if ( !nextTouchRootObject )
      sub_1BC3264(0LL, v3);
    UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9798/*"OnDelayWaitNextTouch"*/,
      this->fields.defaultKeyDelayTime,
      0LL);
  }
}


void __fastcall ScriptMessageCommonManager__OnPressWindow(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextTouchRootObject; // x0

  if ( (byte_4B03E4F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9798/*"OnDelayWaitNextTouch"*/, method);
    byte_4B03E4F = 1;
  }
  if ( this->fields.isWaitNextTouchRequest )
  {
    if ( !this->fields.isWaitNextTouchDelay )
    {
      nextTouchRootObject = this->fields.nextTouchRootObject;
      this->fields.isWaitNextTouchDelay = 1;
      if ( !nextTouchRootObject )
        sub_1BC3264(0LL, method);
      UnityEngine_GameObject__SetActive(nextTouchRootObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9798/*"OnDelayWaitNextTouch"*/,
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
  UnityEngine_Transform_o *messageShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B03E57 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9873/*"OnShake"*/, method);
    byte_4B03E57 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    messageShake = this->fields.messageShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( messageShake )
    {
      v9.fields.y = v7;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(messageShake, v9, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9873/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70019180(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9873/*"OnShake"*/,
    0LL);
  v8 = this->fields.messageShake;
  if ( !byte_4AFBDB1 )
  {
    v5 = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4AFBDB1 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float windowOpenTime; // s0
  TweenPosition_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_AnimationCurve_o *windowUpCurve; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B03E41 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, isFast);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_ScriptMessageCommonManager_OpenUp__, v6);
    byte_4B03E41 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_27;
  rootObject = UnityEngine_GameObject__get_gameObject(rootObject, 0LL);
  if ( !rootObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v18.fields.y = this->fields.windowNormalPosY;
      v18.fields.x = 0.0;
      v18.fields.z = 0.0;
      v11 = TweenPosition__Begin(gameObject, windowOpenTime, v18, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)rootObject & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_27;
        v11->fields.method = 0;
        windowUpCurve = this->fields.windowUpCurve;
        v11->fields.animationCurve = windowUpCurve;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v11->fields.animationCurve, (int32_t)windowUpCurve, v12, v13);
        UITweener__PlayForward((UITweener_o *)v11, 0LL);
        v15 = Method_ScriptMessageCommonManager_OpenUp__;
        if ( (*((_BYTE *)Method_ScriptMessageCommonManager_OpenUp__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1BC3020(Method_ScriptMessageCommonManager_OpenUp__);
        v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0, 0LL);
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
      sub_1BC3264(rootObject, isFast);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__PageScroll(
        ScriptMessageCommonManager_o *this,
        bool isFast,
        const MethodInfo *method)
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

  if ( (byte_4B03E54 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, isFast);
    byte_4B03E54 = 1;
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
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v15, (int32_t)method, v3);
  ScriptMessageCommonManager__StartScroll(this, isFast, v16);
}


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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ScriptMessageCommonManager_o **p_effect; // x22
  UnityEngine_Object_o *effect; // x23
  UnityEngine_GameObject_o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  ScriptMessageWindow_o *currentMessageWindow; // x22
  UnityEngine_GameObject_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *imagePrefab; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  ScriptMessageWindow_o *v40; // x22
  ScriptMessageCommonManager_o *v41; // x22
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ScriptMessageWindow_o *v46; // x21
  ScriptMessageCommonManager_o *v47; // x21
  ScriptMessageCommonManager_o *v48; // x21
  Il2CppObject *mainPrefab; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ScriptMessageWindow_o *v52; // x22
  ScriptMessageCommonManager_o *v53; // x22
  ScriptMessageCommonManager_o *v54; // x22

  v10 = this;
  if ( (byte_4B03E32 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UILabel___, label);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v18);
    sub_1BC3008(&StringLiteral_5794/*"Effect Parent"*/, v19);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&StringLiteral_5792/*"Effect Child"*/, v20);
    byte_4B03E32 = 1;
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
      if ( UnityEngine_Object__op_Equality(effect, 0LL, 0LL) )
      {
        v25 = (UnityEngine_GameObject_o *)sub_1BC3254(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v25, (System_String_o *)StringLiteral_5794/*"Effect Parent"*/, 0LL);
        *p_effect = (ScriptMessageCommonManager_o *)v25;
        sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.effect, (int32_t)v25, v26, v27);
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
        v29 = (UnityEngine_GameObject_o *)sub_1BC3254(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(v29, (System_String_o *)StringLiteral_5792/*"Effect Child"*/, 0LL);
        label->fields.frontEffect = v29;
        sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.frontEffect, (int32_t)v29, v30, v31);
        this = (ScriptMessageCommonManager_o *)label->fields.frontEffect;
        if ( !this )
          goto LABEL_73;
        this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_Transform__SetParent_70057560(
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               mainPrefab,
                                               (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields, (int32_t)this, v50, v51);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      v52 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v52 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v52, (UnityEngine_Transform_o *)this, 0LL);
    }
    else
    {
      this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                               (System_Collections_Generic_Stack_T__o *)this,
                                               (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !label )
        goto LABEL_73;
      label->fields.main = (struct UILabel_o *)this;
      sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields, (int32_t)this, v35, v36);
      this = (ScriptMessageCommonManager_o *)label->fields.main;
      if ( !this )
        goto LABEL_73;
      UILabel__AddToDynamicFontList((UILabel_o *)this, 0LL);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.main;
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      v53 = this;
      if ( !byte_4AFBDB1 )
      {
        this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, label);
        byte_4AFBDB1 = 1;
      }
      if ( v53 )
      {
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v53,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ScriptMessageCommonManager_o *)label->fields.main;
        if ( this )
          goto LABEL_68;
      }
    }
LABEL_73:
    sub_1BC3264(this, label);
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
                                             (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (ScriptMessageCommonManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( label )
      {
        label->fields.image = (struct UISprite_o *)this;
        sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.image, (int32_t)this, v38, v39);
        this = (ScriptMessageCommonManager_o *)label->fields.image;
        if ( this )
        {
          v40 = v10->fields.currentMessageWindow;
          this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( v40 )
          {
            ScriptMessageWindow__AddChildMessageScroll(v40, (UnityEngine_Transform_o *)this, 0LL);
            goto LABEL_34;
          }
        }
      }
    }
    goto LABEL_73;
  }
  this = (ScriptMessageCommonManager_o *)System_Collections_Generic_Stack_object___Pop(
                                           (System_Collections_Generic_Stack_T__o *)this,
                                           (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  if ( !label )
    goto LABEL_73;
  label->fields.image = (struct UISprite_o *)this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.image, (int32_t)this, v21, v22);
LABEL_34:
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v41 = this;
  if ( !byte_4AFBDB1 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, label);
    byte_4AFBDB1 = 1;
  }
  if ( !v41 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v41,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptMessageCommonManager_o *)label->fields.image;
  if ( !this )
    goto LABEL_73;
LABEL_68:
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v54 = this;
  if ( !byte_4AFBDB6 )
  {
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, label);
    byte_4AFBDB6 = 1;
  }
  if ( !v54 )
    goto LABEL_73;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v54,
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ScriptMessageCommonManager_o *)UnityEngine_Object__Instantiate_object_(
                                               rubyPrefab,
                                               (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_73;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      label->fields.ruby = (struct UILabel_o *)Component_object;
      sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.ruby, (int32_t)Component_object, v44, v45);
      this = (ScriptMessageCommonManager_o *)label->fields.ruby;
      if ( !this )
        goto LABEL_73;
      v46 = v10->fields.currentMessageWindow;
      this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v46 )
        goto LABEL_73;
      ScriptMessageWindow__AddChildMessageScroll(v46, (UnityEngine_Transform_o *)this, 0LL);
    }
    else
    {
      v32 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_38F6458 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      label->fields.ruby = (struct UILabel_o *)v32;
      sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.ruby, (int32_t)v32, v33, v34);
    }
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v47 = this;
    if ( !byte_4AFBDB1 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, label);
      byte_4AFBDB1 = 1;
    }
    if ( !v47 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v47,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (ScriptMessageCommonManager_o *)label->fields.ruby;
    if ( !this )
      goto LABEL_73;
    this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v48 = this;
    if ( !byte_4AFBDB6 )
    {
      this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, label);
      byte_4AFBDB6 = 1;
    }
    if ( !v48 )
      goto LABEL_73;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v48,
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
  ScriptLineMessage_o *rootPanel; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B03E3C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8955/*"MessageShake/LogMark/BackLogButton"*/, method);
    byte_4B03E3C = 1;
  }
  rootPanel = (ScriptLineMessage_o *)this->fields.rootPanel;
  if ( !rootPanel
    || (((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))rootPanel->klass[1]._1.gc_desc)(
          rootPanel,
          rootPanel->klass[1]._1.name,
          0.0),
        ScriptMessageCommonManager__DeleteLabels(this, v4),
        (rootPanel = this->fields.talkNameManager) == 0LL)
    || (ScriptLineMessage__DeleteLabels(rootPanel, method),
        (rootPanel = (ScriptLineMessage_o *)this->fields.rootObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootPanel, 0, 0LL),
        (rootPanel = (ScriptLineMessage_o *)this->fields.messageBase) == 0LL) )
  {
    sub_1BC3264(rootPanel, method);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)rootPanel, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_43914284(transform, (System_String_o *)StringLiteral_8955/*"MessageShake/LogMark/BackLogButton"*/, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v4 = (ScriptMessageCommonManager_o **)this;
  if ( (byte_4B03E37 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, label);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B03E37 = 1;
  }
  if ( !label )
    goto LABEL_25;
  p_fields = (ScriptMessageCommonManager_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (const MethodInfo_38F64B8 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_fields = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields, 0, v11, v12);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (const MethodInfo_38F64B8 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    *p_ruby = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.ruby, 0, v15, v16);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          (const MethodInfo_38F64B8 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
        *p_image = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&label->fields.image, 0, v19, v20);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_1BC3264(this, label);
  }
LABEL_23:
  ScriptMessageLabel__Release(label, 0LL);
  this = v4[53];
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_Stack_object___Push(
    (System_Collections_Generic_Stack_T__o *)this,
    (Il2CppObject *)label,
    (const MethodInfo_38F64B8 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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
    sub_1BC3264(0LL, method);
  UITouchPress__PressReset(touchPress, 0LL);
  this->fields.isFastMessageRequest = 0;
}


void __fastcall ScriptMessageCommonManager__ResetMessageWindow(
        ScriptMessageCommonManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentMessageWindow; // x21
  struct ScriptMessageWindow_o **p_currentMessageWindow; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct ScriptMessageWindow_o *defaultMessageWindow; // x1
  char *messageMainLabel; // x0
  const MethodInfo *v9; // x1
  struct ScriptMessageWindow_o *v10; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ScriptMessageWindow_o *v14; // x8
  struct UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Object_o *v19; // x22
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

  if ( (byte_4B03E4D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03E4D = 1;
  }
  currentMessageWindow = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_currentMessageWindow = &this->fields.currentMessageWindow;
  if ( UnityEngine_Object__op_Equality(currentMessageWindow, 0LL, 0LL) )
  {
    defaultMessageWindow = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = defaultMessageWindow;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)defaultMessageWindow, v5, v6);
    v10 = this->fields.defaultMessageWindow;
    if ( v10 )
    {
      messageMainLabel = (char *)v10->fields.messageMainLabel;
      if ( messageMainLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
        this->fields.mainPrefab = gameObject;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)gameObject, v12, v13);
        v14 = this->fields.defaultMessageWindow;
        if ( v14 )
        {
          messageMainLabel = (char *)v14->fields.messageRubyLabel;
          if ( messageMainLabel )
          {
            v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
            this->fields.rubyPrefab = v15;
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v15, v16, v17);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1BC3264(messageMainLabel, v9);
  }
  v18 = (UnityEngine_Object_o *)this->fields.currentMessageWindow;
  v19 = (UnityEngine_Object_o *)this->fields.defaultMessageWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v18, v19, 0LL) )
  {
    ScriptMessageCommonManager__DeleteLabels(this, v20);
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)messageMainLabel, v9);
    messageMainLabel = (char *)*p_currentMessageWindow;
    if ( !*p_currentMessageWindow )
      goto LABEL_33;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)messageMainLabel,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v21, 0LL);
    v22 = this->fields.defaultMessageWindow;
    if ( !v22 )
      goto LABEL_33;
    messageMainLabel = (char *)v22->fields.messageMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.mainPrefab = v23;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)v23, v24, v25);
    v26 = this->fields.defaultMessageWindow;
    if ( !v26 )
      goto LABEL_33;
    messageMainLabel = (char *)v26->fields.messageRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    this->fields.rubyPrefab = v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)v27, v28, v29);
    v32 = this->fields.defaultMessageWindow;
    if ( !v32 )
      goto LABEL_33;
    messageMainLabel = (char *)this->fields.talkNameManager;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameMessageRoot = v32->fields.talkNameMessageRoot;
    *((_QWORD *)messageMainLabel + 7) = talkNameMessageRoot;
    sub_1BC2FAC((CGThumbnailListItem_o *)(messageMainLabel + 56), (int32_t)talkNameMessageRoot, v30, v31);
    v34 = this->fields.defaultMessageWindow;
    if ( !v34 )
      goto LABEL_33;
    messageMainLabel = (char *)v34->fields.talkNameMainLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    talkNameManager = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !talkNameManager )
      goto LABEL_33;
    talkNameManager->fields.mainPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1BC2FAC((CGThumbnailListItem_o *)&talkNameManager->fields.mainPrefab, (int32_t)messageMainLabel, v36, v37);
    v38 = this->fields.defaultMessageWindow;
    if ( !v38 )
      goto LABEL_33;
    messageMainLabel = (char *)v38->fields.talkNameRubyLabel;
    if ( !messageMainLabel )
      goto LABEL_33;
    v39 = this->fields.talkNameManager;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !v39 )
      goto LABEL_33;
    v39->fields.rubyPrefab = (struct UnityEngine_GameObject_o *)messageMainLabel;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v39->fields.rubyPrefab, (int32_t)messageMainLabel, v40, v41);
    messageMainLabel = (char *)this->fields.defaultMessageWindow;
    if ( !messageMainLabel )
      goto LABEL_33;
    messageMainLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageMainLabel, 0LL);
    if ( !messageMainLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageMainLabel, 1, 0LL);
    v42 = this->fields.defaultMessageWindow;
    this->fields.currentMessageWindow = v42;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentMessageWindow, (int32_t)v42, v43, v44);
    ScriptMessageCommonManager__SetScreen(this, 0, 0, 0, 0, 1, v45);
    ScriptMessageCommonManager__ResetScroll(this, v46);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageCommonManager__ResetScroll(ScriptMessageCommonManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v2; // x19
  __int64 v3; // x1
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v6; // x8
  float v7; // s0
  float v8; // s2
  struct ScriptMessageWindow_o *v9; // x8
  float y; // s10
  float v11; // s8
  float v12; // s9
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B03E56 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03E56 = 1;
  }
  currentMessageWindow = v2->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v6 = v2->fields.currentMessageWindow;
  if ( !v6 )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)v6->fields.messageScroll;
  if ( !this )
    goto LABEL_17;
  this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (v9 = v2->fields.currentMessageWindow) == 0LL)
    || (this = (ScriptMessageCommonManager_o *)v9->fields.messageScroll) == 0LL
    || (y = v2->fields.dispSize.fields.y,
        v11 = v7,
        v12 = v8,
        (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_17:
    sub_1BC3264(this, method);
  }
  v13.fields.y = y * 0.5;
  v13.fields.x = v11;
  v13.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v13, 0LL);
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
    sub_1BC3264(this, button);
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
  UISprite_o *autoMessageSprite; // x0
  System_String_o **v7; // x8

  if ( (byte_4B03E5E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17282/*"btn_auto_on"*/, isOn);
    sub_1BC3008(&StringLiteral_17281/*"btn_auto_off"*/, v5);
    byte_4B03E5E = 1;
  }
  autoMessageSprite = this->fields.autoMessageSprite;
  if ( !autoMessageSprite )
    sub_1BC3264(0LL, isOn);
  v7 = (System_String_o **)&StringLiteral_17282/*"btn_auto_on"*/;
  if ( !isOn )
    v7 = (System_String_o **)&StringLiteral_17281/*"btn_auto_off"*/;
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
      sub_1BC3264(0LL, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  float defaultTextOnlyLineHeight; // s0
  float defaultBetweenLineHeight; // s1
  int32_t v7; // w1
  const MethodInfo *v8; // x1

  if ( (byte_4B03E44 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03E44 = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  *(_QWORD *)&this->fields.fontSize = (unsigned int)this->fields.defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v7, v2, v3);
  ScriptMessageCommonManager__SetTextScrollSpeed(this, v8);
}


void __fastcall ScriptMessageCommonManager__SetEnableAutoMessageButton(
        ScriptMessageCommonManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UICommonButton_o *autoMessageButton; // x0

  autoMessageButton = this->fields.autoMessageButton;
  if ( !autoMessageButton )
    sub_1BC3264(0LL, enable);
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
    sub_1BC3264(0LL, enable);
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

  if ( (byte_4B03E47 & 1) == 0 )
  {
    sub_1BC3008(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_4B03E47 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4B03E46 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, font);
    byte_4B03E46 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_1BC3264(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)defaultFontType, v7, v8);
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
    sub_1BC3264(0LL, flag);
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
    sub_1BC3264(0LL, isEnable);
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

  if ( (byte_4B03E3A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isActive);
    byte_4B03E3A = 1;
  }
  rootObject = (UnityEngine_Object_o *)this->fields.rootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootObject, 0LL, 0LL) )
  {
    v7 = this->fields.rootObject;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
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
  UnityEngine_GameObject_o *rootPanel; // x0
  float v15; // s0
  float v16; // s1
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v18; // x8
  int v19; // s2
  float rubyLineHeight; // s0
  struct ScriptMessageWindow_o *v21; // x8
  UIPanel_o *dispPanel; // x22
  struct ScriptMessageWindow_o *v23; // x8
  UnityEngine_Object_o *messageWindowBack; // x22
  long double v25; // q0
  struct ScriptMessageWindow_o *v26; // x8
  float v27; // s0
  UnityEngine_Vector4_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B03E3D & 1) == 0 )
  {
    sub_1BC3008(&ManagerConfig_TypeInfo, *(_QWORD *)&x);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    byte_4B03E3D = 1;
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
    v15 = (float)x;
    v16 = (float)y;
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
    v18 = this->fields.currentMessageWindow;
    if ( !v18 || !rootPanel )
      goto LABEL_33;
    v15 = v18->fields.defaultWindowDispCenter.fields.x;
    v16 = v18->fields.defaultWindowDispCenter.fields.y;
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
    v15 = this->fields.defaultAllDispCenter.fields.x;
    v16 = this->fields.defaultAllDispCenter.fields.y;
  }
  v19 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)rootPanel, *(UnityEngine_Vector3_o *)&v15, 0LL);
  rubyLineHeight = this->fields.rubyLineHeight;
  v21 = this->fields.currentMessageWindow;
  this->fields.startPosition.fields.x = 0.0;
  this->fields.startPosition.fields.y = -(float)(rubyLineHeight + 2.0);
  this->fields.isWindowBack = isWindowBack;
  if ( !v21 )
    goto LABEL_33;
  dispPanel = v21->fields.dispPanel;
  rootPanel = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !dispPanel
    || (v29.fields.w = this->fields.dispSize.fields.y,
        v29.fields.y = 0.0,
        v29.fields.z = (float)ManagerConfig_TypeInfo->static_fields->WIDTH,
        v29.fields.x = 0.0,
        UIPanel__set_baseClipRegion(dispPanel, v29, 0LL),
        (v23 = this->fields.currentMessageWindow) == 0LL) )
  {
LABEL_33:
    sub_1BC3264(rootPanel, *(_QWORD *)&x);
  }
  messageWindowBack = (UnityEngine_Object_o *)v23->fields.messageWindowBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(messageWindowBack, 0LL, 0LL);
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
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootPanel->klass[1]._1.castClass)(
          rootPanel,
          rootPanel->klass[1]._1.declaringType,
          v25);
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  ScriptMessageCommonManager__ClearText(this, *(const MethodInfo **)&x);
  v27 = (float)x + (float)(this->fields.dispSize.fields.x * -0.5);
  if ( v27 == INFINITY )
    return 0x80000000;
  else
    return (int)v27;
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
  __int64 v12; // x1
  System_String_o *v13; // x21
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *talkNameRootObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  _BOOL4 isWindowBack; // w8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  struct ScriptMessageWindow_o *v24; // x8
  UnityEngine_Object_o *talkNameBack; // x21
  long double v26; // q0
  struct ScriptLineMessage_o *talkNameManager; // x9
  float x; // s0
  struct ScriptMessageWindow_o *v29; // x8
  float v30; // s1
  int talkNameBackDefaultWidth; // w9
  float v32; // s0
  int v33; // w10
  struct ScriptMessageWindow_o *v34; // x8
  struct ScriptMessageWindow_o *v35; // x8
  UnityEngine_GameObject_c *klass; // x8
  float v37; // s1
  float betweenLineHeight; // s4
  float y; // s3
  float v40; // s2
  float v41; // s0
  const MethodInfo *v42; // x1
  struct ScriptMessageWindow_o *v43; // x8
  long double v44; // q0

  if ( (byte_4B03E4E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, imageName);
    sub_1BC3008(&StringLiteral_162/*" 1.5]"*/, v11);
    sub_1BC3008(&StringLiteral_15840/*"[image "*/, v12);
    byte_4B03E4E = 1;
  }
  v13 = System_String__Concat_62348648(classname, charaname, 0LL);
  if ( System_String__IsNullOrEmpty(v13, 0LL) )
  {
    ScriptMessageCommonManager__ClearTalkName(this, v14);
    return 1;
  }
  this->fields.talkName = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.talkName, (int32_t)v13, v15, v16);
  this->fields.talkNameOnly = charaname;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.talkNameOnly, (int32_t)charaname, v17, v18);
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
                                                       v13,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       1LL,
                                                       talkNameRootObject->klass[1]._1.element_class);
    v24 = this->fields.currentMessageWindow;
    if ( !v24 )
      goto LABEL_39;
    talkNameBack = (UnityEngine_Object_o *)v24->fields.talkNameBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    talkNameRootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(talkNameBack, 0LL, 0LL);
    if ( ((unsigned __int8)talkNameRootObject & 1) != 0 )
    {
      talkNameManager = this->fields.talkNameManager;
      if ( !talkNameManager )
        goto LABEL_39;
      x = talkNameManager->fields.maxDispPosition.fields.x;
      v29 = this->fields.currentMessageWindow;
      if ( x < talkNameManager->fields.dispPosition.fields.x )
        x = talkNameManager->fields.dispPosition.fields.x;
      if ( !v29 )
        goto LABEL_39;
      v30 = talkNameManager->fields.startPosition.fields.x;
      talkNameBackDefaultWidth = v29->fields.talkNameBackDefaultWidth;
      v32 = x - v30;
      v33 = (int)v32;
      if ( v32 == INFINITY )
        v33 = 0x80000000;
      if ( v32 > (float)talkNameBackDefaultWidth )
        talkNameBackDefaultWidth = v33;
      if ( !talkNameBack )
        goto LABEL_39;
      UIWidget__set_width(
        (UIWidget_o *)talkNameBack,
        ((talkNameBackDefaultWidth + v29->fields.talkNameBackBaseWidth) & 1)
      + talkNameBackDefaultWidth
      + v29->fields.talkNameBackBaseWidth,
        0LL);
    }
    v34 = this->fields.currentMessageWindow;
    if ( !v34 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v34->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
    if ( imageName )
    {
      UISprite__set_spriteName((UISprite_o *)talkNameRootObject, imageName, 0LL);
      v35 = this->fields.currentMessageWindow;
      if ( v35 )
      {
        talkNameRootObject = (UnityEngine_GameObject_o *)v35->fields.talkNameIcon;
        if ( talkNameRootObject )
        {
          klass = talkNameRootObject->klass;
          LODWORD(v26) = 1.0;
          goto LABEL_34;
        }
      }
LABEL_39:
      sub_1BC3264(talkNameRootObject, v20);
    }
  }
  else
  {
    if ( imageName )
      v13 = System_String__Concat_62388900(
              (System_String_o *)StringLiteral_15840/*"[image "*/,
              imageName,
              (System_String_o *)StringLiteral_162/*" 1.5]"*/,
              v13,
              0LL);
    v37 = this->fields.startPosition.fields.x + -50.0;
    *(_QWORD *)&this->fields.fontSize = (unsigned int)(int)(float)this->fields.defaultFontSize;
    this->fields.dispPosition.fields.x = v37;
    ScriptMessageCommonManager__UpdateLabels(this, v13, 1, 0, v21);
    betweenLineHeight = this->fields.betweenLineHeight;
    y = this->fields.dispPosition.fields.y;
    v40 = this->fields.startPosition.fields.x;
    v41 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v41;
    this->fields.dispPosition.fields.x = v40;
    this->fields.dispPosition.fields.y = y - (float)(v41 + betweenLineHeight);
    ScriptMessageCommonManager__SetDefaultState(this, v42);
    v43 = this->fields.currentMessageWindow;
    if ( !v43 )
      goto LABEL_39;
    talkNameRootObject = (UnityEngine_GameObject_o *)v43->fields.talkNameIcon;
    if ( !talkNameRootObject )
      goto LABEL_39;
  }
  klass = talkNameRootObject->klass;
  LODWORD(v26) = 0;
LABEL_34:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v26);
  talkNameRootObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !talkNameRootObject )
    goto LABEL_39;
  LODWORD(v44) = 0;
  if ( !this->fields.isMessageOff )
    *(float *)&v44 = 1.0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))talkNameRootObject->klass[1]._1.castClass)(
    talkNameRootObject,
    talkNameRootObject->klass[1]._1.declaringType,
    v44);
  return 1;
}


void __fastcall ScriptMessageCommonManager__SetTalkNameBack(
        ScriptMessageCommonManager_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *v4; // x21
  __int64 v5; // x1
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UISprite_o *talkNameBack; // x19
  UnityEngine_Object_o *talkNameAtlas; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UIAtlas_o *mAtlas; // x1
  struct System_String_o *mSpriteName; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UISpriteData_o *AtlasSprite; // x0

  v4 = this;
  if ( (byte_4B03E4B & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, imageName);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B03E4B = 1;
  }
  currentMessageWindow = v4->fields.currentMessageWindow;
  if ( !currentMessageWindow )
    goto LABEL_21;
  talkNameBack = currentMessageWindow->fields.talkNameBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)talkNameBack, 0LL, 0LL) )
  {
    talkNameAtlas = (UnityEngine_Object_o *)v4->fields.talkNameAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScriptMessageCommonManager_o *)UnityEngine_Object__op_Equality(talkNameAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !talkNameBack )
        goto LABEL_21;
      mAtlas = talkNameBack->fields.mAtlas;
      v4->fields.talkNameAtlas = mAtlas;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.talkNameAtlas, (int32_t)mAtlas, v9, v10);
      mSpriteName = talkNameBack->fields.mSpriteName;
      v4->fields.talkNameSpriteName = mSpriteName;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.talkNameSpriteName, (int32_t)mSpriteName, v13, v14);
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
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ScriptMessageCommonManager_o *)AtlasManager__SetMark(talkNameBack, imageName, 0LL);
      if ( talkNameBack )
        goto LABEL_18;
    }
LABEL_21:
    sub_1BC3264(this, imageName);
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
  float defaultScrollTime; // s0
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
  float fastScrollTime; // s1

  if ( (byte_4B03E45 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&OptionManager_TypeInfo, v3);
    byte_4B03E45 = 1;
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
    ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0LL);
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
    v11 = BalanceConfig_TypeInfo;
    v12 = ScenarioScrollSpeed;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    ScenarioScrollSpeedHigh = v11->static_fields->ScenarioScrollSpeedHigh;
    v14 = OptionManager__GetScenarioScrollSpeed(0LL);
    if ( v12 >= ScenarioScrollSpeedHigh )
      defaultScrollTime = this->fields.fastScrollTime;
    else
      defaultScrollTime = this->fields.defaultScrollTime
                        / (float)(v14 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedDefault);
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
    sub_1BC3264(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x8
  float v8; // s8
  struct ScriptMessageWindow_o *currentMessageWindow; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ScriptMessageWindow_o *v18; // x8
  Il2CppObject *Component_object; // x20
  struct ScriptMessageWindow_o *v20; // x8

  v4 = this;
  if ( (byte_4B03E55 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenPosition___, isFast);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    this = (ScriptMessageCommonManager_o *)sub_1BC3008(&StringLiteral_5972/*"EndScroll"*/, v6);
    byte_4B03E55 = 1;
  }
  v7 = 316LL;
  if ( isFast )
    v7 = 172LL;
  v8 = *(float *)((char *)&v4->klass + v7);
  if ( v8 > 0.0 )
  {
    currentMessageWindow = v4->fields.currentMessageWindow;
    v4->fields.isScroll = 1;
    if ( currentMessageWindow )
    {
      this = (ScriptMessageCommonManager_o *)currentMessageWindow->fields.messageScroll;
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (ScriptMessageCommonManager_o *)TweenPosition__Begin(gameObject, v8, v4->fields.scrollPosition, 0LL);
        if ( this )
        {
          v11 = this;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
          LODWORD(v11->fields.rootPanel) = 3;
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          v11->fields.messageShake = (struct UnityEngine_Transform_o *)v12;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v11->fields.messageShake, (int32_t)v12, v13, v14);
          v15 = StringLiteral_5972/*"EndScroll"*/;
          v11->fields.defaultMessageWindow = (struct ScriptMessageWindow_o *)StringLiteral_5972/*"EndScroll"*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v11->fields.defaultMessageWindow, v15, v16, v17);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  v18 = v4->fields.currentMessageWindow;
  if ( !v18 )
    goto LABEL_21;
  this = (ScriptMessageCommonManager_o *)v18->fields.messageScroll;
  if ( !this )
    goto LABEL_21;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v20 = v4->fields.currentMessageWindow;
  if ( !v20
    || (this = (ScriptMessageCommonManager_o *)v20->fields.messageScroll) == 0LL
    || (this = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_21:
    sub_1BC3264(this, isFast);
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
  __int64 rootPanel; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  long double v35; // q0
  float stepTime; // s8
  System_Text_StringBuilder_o *v37; // x23
  System_Text_StringBuilder_o **v38; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_String_o *defaultColorTag; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x23
  __int64 v45; // x26
  int32_t v46; // w28
  int v47; // w25
  _BOOL4 isEffectMessage; // w27
  int32_t v49; // w29
  System_String_o *v50; // x27
  System_String_o *v51; // x0
  int32_t BraceIndex; // w0
  System_String_o *v53; // x0
  int32_t v54; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w27
  System_Text_StringBuilder_o *v60; // x29
  float betweenLineHeight; // s4
  float y; // s3
  float x; // s2
  float v64; // s0
  const MethodInfo *v65; // x1
  __int64 v66; // x1
  ScriptReplaceString_c *v67; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *v69; // x27
  struct System_String_o *v70; // x1
  const MethodInfo *v71; // x4
  bool v72; // w8
  char v73; // w3
  ScriptMessageCommonManager_o *v74; // x0
  System_String_o *v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_String_o *v78; // x1
  CGThumbnailListItem_o *v79; // x0
  System_String_o *v80; // x27
  int32_t v81; // w1
  int32_t v82; // w2
  System_String_o *v83; // x27
  System_String_o *v84; // x0
  __int64 *v85; // x8
  __int64 v86; // x1
  float v87; // s4
  float v88; // s3
  float v89; // s2
  float v90; // s0
  const MethodInfo *v91; // x1
  System_String_o *v92; // x27
  System_String_array *v93; // x27
  struct System_String_o *v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_String_o *v97; // x0
  System_Text_StringBuilder_o *v98; // x20
  struct System_String_o **p_defaultColorTag; // [xsp+8h] [xbp-88h]
  System_String_o **colorTag; // [xsp+10h] [xbp-80h]
  System_String_o *text; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B03E39 & 1) == 0 )
  {
    sub_1BC3008(&ScriptMessageCommonManager_ProcAddLabel2_TypeInfo, txt);
    sub_1BC3008(&ScriptMessageCommonManager_ProcAddLabel_TypeInfo, v8);
    sub_1BC3008(&ScriptMessageLabel_TypeInfo, v9);
    sub_1BC3008(&ScriptReplaceString_TypeInfo, v10);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v11);
    sub_1BC3008(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__, v12);
    sub_1BC3008(&Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__, v13);
    sub_1BC3008(&ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_23052/*"servantName"*/, v15);
    sub_1BC3008(&StringLiteral_15677/*"[-]"*/, v16);
    sub_1BC3008(&StringLiteral_19897/*"i"*/, v17);
    sub_1BC3008(&StringLiteral_113/*" "*/, v18);
    sub_1BC3008(&StringLiteral_15673/*"[*"*/, v19);
    sub_1BC3008(&StringLiteral_15876/*"[~1]"*/, v20);
    sub_1BC3008(&StringLiteral_15812/*"[^"*/, v21);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v22);
    sub_1BC3008(&StringLiteral_22693/*"r"*/, v23);
    sub_1BC3008(&StringLiteral_18757/*"effectmessage"*/, v24);
    sub_1BC3008(&StringLiteral_21031/*"line"*/, v25);
    sub_1BC3008(&StringLiteral_20089/*"image"*/, v26);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v27);
    sub_1BC3008(&StringLiteral_15875/*"[~"*/, v28);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v29);
    byte_4B03E39 = 1;
  }
  text = 0LL;
  v30 = sub_1BC3254(ScriptMessageCommonManager___c__DisplayClass113_0_TypeInfo);
  ScriptMessageCommonManager___c__DisplayClass113_0___ctor(
    (ScriptMessageCommonManager___c__DisplayClass113_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_107;
  *(_QWORD *)(v30 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 24), (int32_t)this, v33, v34);
  *(_BYTE *)(v30 + 36) = isFoward;
  if ( !this->fields.isBusy )
    this->fields.isBusy = 1;
  rootPanel = (__int64)this->fields.rootPanel;
  this->fields.isMessageOut = 1;
  if ( !rootPanel )
    goto LABEL_107;
  stepTime = 0.0;
  LODWORD(v35) = 1.0;
  if ( this->fields.isMessageOff )
    *(float *)&v35 = 0.0;
  (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)rootPanel + 440LL))(
    rootPanel,
    *(_QWORD *)(*(_QWORD *)rootPanel + 448LL),
    v35);
  if ( !isStretch )
    stepTime = this->fields.stepTime;
  *(float *)(v30 + 32) = stepTime;
  v37 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  *(_QWORD *)(v30 + 16) = v37;
  v38 = (System_Text_StringBuilder_o **)(v30 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 16), (int32_t)v37, v39, v40);
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v30 + 40) = defaultColorTag;
  colorTag = (System_String_o **)(v30 + 40);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 40), (int32_t)defaultColorTag, v42, v43);
  v44 = sub_1BC3254(ScriptMessageCommonManager_ProcAddLabel_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel___ctor(
    (ScriptMessageCommonManager_ProcAddLabel_o *)v44,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__0__,
    0LL);
  v45 = sub_1BC3254(ScriptMessageCommonManager_ProcAddLabel2_TypeInfo);
  ScriptMessageCommonManager_ProcAddLabel2___ctor(
    (ScriptMessageCommonManager_ProcAddLabel2_o *)v45,
    (Il2CppObject *)v30,
    Method_ScriptMessageCommonManager___c__DisplayClass113_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
    goto LABEL_107;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_105;
  v46 = 0;
  v47 = 0;
  p_defaultColorTag = &this->fields.defaultColorTag;
  while ( 1 )
  {
    isEffectMessage = this->fields.isEffectMessage;
    rootPanel = System_String__get_Chars(txt, v46, 0LL);
    if ( !isEffectMessage )
      break;
    if ( (unsigned __int16)rootPanel == 91 )
    {
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      v59 = v46 + 1;
      rootPanel = ScriptMessageLabel__GetBraceIndex(txt, v46 + 1, 0LL);
      if ( (_DWORD)rootPanel == -1 )
        goto LABEL_58;
      v49 = rootPanel;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v59, 0LL);
      if ( !rootPanel )
        goto LABEL_107;
      v50 = (System_String_o *)rootPanel;
      if ( System_String__Equals_62383952((System_String_o *)rootPanel, (System_String_o *)StringLiteral_18757/*"effectmessage"*/, 0LL) )
      {
        v51 = System_String__Substring_62394572(txt, v46 + 15, v47 + v49 - 15, 0LL);
        rootPanel = System_String__op_Equality(v51, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
        if ( (rootPanel & 1) != 0 )
          this->fields.isEffectMessage = 0;
      }
      else
      {
        rootPanel = System_String__Equals_62383952(v50, (System_String_o *)StringLiteral_22693/*"r"*/, 0LL);
        if ( (rootPanel & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_107;
          (*(void (__fastcall **)(_QWORD, void *, _QWORD))(v45 + 24))(
            *(_QWORD *)(v45 + 64),
            StringLiteral_113/*" "*/,
            *(_QWORD *)(v45 + 40));
          betweenLineHeight = this->fields.betweenLineHeight;
          y = this->fields.dispPosition.fields.y;
          x = this->fields.startPosition.fields.x;
          v64 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
          this->fields.beforeTextOnlyLineHeight = v64;
          this->fields.dispPosition.fields.x = x;
          this->fields.dispPosition.fields.y = y - (float)(v64 + betweenLineHeight);
          ScriptMessageCommonManager__SetDefaultState(this, v65);
        }
      }
      goto LABEL_57;
    }
    v59 = v46 + 1;
LABEL_58:
    v47 = -v59;
    v46 = v59;
    if ( v59 >= txt->fields._stringLength )
      goto LABEL_105;
  }
  if ( (unsigned __int16)rootPanel != 91 )
  {
    v60 = *v38;
    rootPanel = System_String__get_Chars(txt, v46, 0LL);
    if ( !v60 )
      goto LABEL_107;
    v59 = v46 + 1;
    rootPanel = (__int64)System_Text_StringBuilder__Append_62434920(v60, rootPanel, 0LL);
    goto LABEL_58;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v59 = v46 + 1;
  BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v46 + 1, 0LL);
  if ( BraceIndex == -1 )
  {
    rootPanel = (__int64)*v38;
    if ( !*v38 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_62432592(
                           (System_Text_StringBuilder_o *)rootPanel,
                           (System_String_o *)StringLiteral_15658/*"["*/,
                           0LL);
    goto LABEL_58;
  }
  v49 = BraceIndex;
  rootPanel = System_String__get_Chars(txt, v59, 0LL);
  if ( (unsigned __int16)rootPanel == 37 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    v53 = System_String__Substring_62394572(txt, v46 + 2, v47 + v49 - 2, 0LL);
    v54 = System_Int32__Parse(v53, 0LL);
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    String = ScriptReplaceString__GetString(v54, 0LL);
    TagSplitString = System_String__Concat_62348648(String, (System_String_o *)StringLiteral_15677/*"[-]"*/, 0LL);
    goto LABEL_54;
  }
  rootPanel = System_String__get_Chars(txt, v59, 0LL);
  if ( (unsigned __int16)rootPanel == 38 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    if ( !byte_4B03C57 )
    {
      sub_1BC3008(&ScriptReplaceString_TypeInfo, v66);
      byte_4B03C57 = 1;
    }
    v67 = ScriptReplaceString_TypeInfo;
    if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      v67 = ScriptReplaceString_TypeInfo;
    }
    playerGenderIndex = v67->static_fields->playerGenderIndex;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v46 + 2, playerGenderIndex, 0LL);
LABEL_54:
    v69 = TagSplitString;
    v70 = *(struct System_String_o **)(v30 + 40);
    this->fields.defaultColorTag = v70;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_defaultColorTag, (int32_t)v70, v57, v58);
    v72 = isStretch;
    v73 = *(_BYTE *)(v30 + 36);
    v74 = this;
    v75 = v69;
LABEL_55:
    ScriptMessageCommonManager__UpdateLabels(v74, v75, v72, v73, v71);
    v78 = this->fields.defaultColorTag;
    v79 = (CGThumbnailListItem_o *)(v30 + 40);
    *(_QWORD *)(v30 + 40) = v78;
LABEL_56:
    sub_1BC2FAC(v79, (int32_t)v78, v76, v77);
LABEL_57:
    v59 = v49 + 1;
    goto LABEL_58;
  }
  rootPanel = System_String__get_Chars(txt, v59, 0LL);
  if ( (unsigned __int16)rootPanel == 35 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    rootPanel = (__int64)System_String__Substring_62394572(txt, v46, v47 + v49 + 1, 0LL);
    if ( !v45 )
      goto LABEL_107;
LABEL_81:
    v86 = rootPanel;
LABEL_82:
    rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v45 + 24))(
                  *(_QWORD *)(v45 + 64),
                  v86,
                  *(_QWORD *)(v45 + 40));
    goto LABEL_57;
  }
  rootPanel = System_String__get_Chars(txt, v59, 0LL);
  if ( (unsigned __int16)rootPanel == 61 )
    goto LABEL_57;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootPanel = (__int64)ScriptMessageLabel__GetCommandName(txt, v59, 0LL);
  if ( !rootPanel )
    goto LABEL_107;
  v80 = (System_String_o *)rootPanel;
  rootPanel = System_String__Equals_62383952((System_String_o *)rootPanel, (System_String_o *)StringLiteral_20089/*"image"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    v81 = v46 + 7;
    v82 = v47 + v49 - 7;
    goto LABEL_79;
  }
  if ( System_String__Equals_62383952(v80, (System_String_o *)StringLiteral_18757/*"effectmessage"*/, 0LL) )
  {
    v83 = System_String__Substring_62394572(txt, v46 + 15, v47 + v49 - 15, 0LL);
    rootPanel = System_String__op_Inequality(v83, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
    if ( (rootPanel & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_107;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
      rootPanel = (__int64)System_String__Concat_62386896(
                             (System_String_o *)StringLiteral_15673/*"[*"*/,
                             v83,
                             (System_String_o *)StringLiteral_15911/*"]"*/,
                             0LL);
      if ( !v45 )
        goto LABEL_107;
      rootPanel = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v45 + 24))(
                    *(_QWORD *)(v45 + 64),
                    rootPanel,
                    *(_QWORD *)(v45 + 40));
      this->fields.isEffectMessage = 1;
    }
    goto LABEL_57;
  }
  rootPanel = System_String__Equals_62383952(v80, (System_String_o *)StringLiteral_19897/*"i"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    v81 = v46 + 3;
    v82 = v47 + v49 - 3;
LABEL_79:
    v84 = System_String__Substring_62394572(txt, v81, v82, 0LL);
    v85 = &StringLiteral_15812/*"[^"*/;
LABEL_80:
    rootPanel = (__int64)System_String__Concat_62386896(
                           (System_String_o *)*v85,
                           v84,
                           (System_String_o *)StringLiteral_15911/*"]"*/,
                           0LL);
    if ( !v45 )
      goto LABEL_107;
    goto LABEL_81;
  }
  rootPanel = System_String__Equals_62383952(v80, (System_String_o *)StringLiteral_22693/*"r"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    v87 = this->fields.betweenLineHeight;
    v88 = this->fields.dispPosition.fields.y;
    v89 = this->fields.startPosition.fields.x;
    v90 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
    this->fields.beforeTextOnlyLineHeight = v90;
    this->fields.dispPosition.fields.x = v89;
    this->fields.dispPosition.fields.y = v88 - (float)(v90 + v87);
    ScriptMessageCommonManager__SetDefaultState(this, v91);
    v78 = this->fields.defaultColorTag;
    v79 = (CGThumbnailListItem_o *)(v30 + 40);
    *colorTag = v78;
    goto LABEL_56;
  }
  rootPanel = System_String__Equals_62383952(v80, (System_String_o *)StringLiteral_23052/*"servantName"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    v92 = System_String__Substring_62394572(txt, v46 + 12, v47 + v49 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v93 = ScriptMessageLabel__AnalysTagParam(v92, 0, 0LL);
    v94 = *(struct System_String_o **)(v30 + 40);
    this->fields.defaultColorTag = v94;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_defaultColorTag, (int32_t)v94, v95, v96);
    v97 = ScriptMessageLabel__GetServantChangeName(v93, 0LL);
    v72 = isStretch;
    v73 = *(_BYTE *)(v30 + 36);
    v75 = v97;
    v74 = this;
    goto LABEL_55;
  }
  rootPanel = System_String__StartsWith(v80, (System_String_o *)StringLiteral_21031/*"line"*/, 0LL);
  if ( (rootPanel & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_107;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
    rootPanel = (__int64)System_String__Substring_62394572(txt, v46 + 5, v47 + v49 - 5, 0LL);
    if ( !rootPanel )
      goto LABEL_107;
    if ( *(int *)(rootPanel + 16) < 1 )
    {
      if ( !v45 )
        goto LABEL_107;
      v86 = StringLiteral_15876/*"[~1]"*/;
      goto LABEL_82;
    }
    v84 = System_String__Trim((System_String_o *)rootPanel, 0LL);
    v85 = &StringLiteral_15875/*"[~"*/;
    goto LABEL_80;
  }
  if ( v49 < txt->fields._stringLength )
  {
    text = System_String__Substring_62394572(txt, v46, v47 + v49 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag(colorTag, &text, 0LL, 0LL);
    rootPanel = (__int64)*v38;
    if ( !*v38 )
      goto LABEL_107;
    rootPanel = (__int64)System_Text_StringBuilder__Append_62432592((System_Text_StringBuilder_o *)rootPanel, text, 0LL);
    goto LABEL_57;
  }
  v98 = *v38;
  rootPanel = (__int64)System_String__Substring(txt, v46, 0LL);
  if ( !v98 )
    goto LABEL_107;
  rootPanel = (__int64)System_Text_StringBuilder__Append_62432592(v98, (System_String_o *)rootPanel, 0LL);
LABEL_105:
  if ( !v44 )
LABEL_107:
    sub_1BC3264(rootPanel, v32);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
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
    sub_1BC3264(touchPress, isShowNextTouchObject);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0EEA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EE60;
}


System_IAsyncResult_o *__fastcall ScriptMessageCommonManager_ProcAddLabel__BeginInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v5, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0EF1C;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A0EEFC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EEB4;
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
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall ScriptMessageCommonManager_ProcAddLabel2__EndInvoke(
        ScriptMessageCommonManager_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ScriptMessageCommonManager_o *_4__this; // x20
  struct ScriptMessageCommonManager_o *v7; // x8
  struct ScriptMessageCommonManager_o *v8; // x8
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
        (v7 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptMessageCommonManager__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          this->fields.stepTime,
          v7->fields.defaultColorTag,
          this->fields.isFoward,
          0LL),
        (tmpTxt = this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  v8->fields.defaultColorTag = tmpColorTag;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v8->fields.defaultColorTag, (int32_t)tmpColorTag, v4, v5);
}


void __fastcall ScriptMessageCommonManager___c__DisplayClass113_0___UpdateLabels_b__1(
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
      0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_1BC3264(this, text);
  tmpColorTag = v4->fields.tmpColorTag;
  _4__this->fields.defaultColorTag = tmpColorTag;
  sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.defaultColorTag, (int32_t)tmpColorTag, (int32_t)method, v3);
}