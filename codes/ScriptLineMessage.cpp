void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A71A3D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v5);
    sub_1B90010(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v6);
    sub_1B90010(&StringLiteral_919/*"-"*/, v7);
    sub_1B90010(&StringLiteral_21401/*"medium"*/, v8);
    sub_1B90010(&StringLiteral_23413/*"small"*/, v9);
    sub_1B90010(&StringLiteral_1/*""*/, v10);
    sub_1B90010(&StringLiteral_21068/*"large"*/, v11);
    sub_1B90010(&StringLiteral_24819/*"x-large"*/, v12);
    byte_4A71A3D = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_31CF518 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v13 )
    sub_1B9026C(v14, v15);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_919/*"-"*/,
    30,
    (const MethodInfo_31CFECC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_23413/*"small"*/,
    24,
    (const MethodInfo_31CFECC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_21401/*"medium"*/,
    30,
    (const MethodInfo_31CFECC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_21068/*"large"*/,
    48,
    (const MethodInfo_31CFECC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_24819/*"x-large"*/,
    64,
    (const MethodInfo_31CFECC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v13;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontSizes, (int32_t)v13, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispLabelList, (int32_t)v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptLineMessage__AddLabel(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Label; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x19
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UILabel_o *MainLabel; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  UILabel_o *RubyLabel; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x23
  __int64 v29; // x23
  int v30; // w8
  int32_t fontSize; // w4
  System_String_o *v32; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v34; // x1
  UISprite_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x23
  int v39; // w8
  __int64 v40; // x24
  System_String_o *v41; // x23
  const MethodInfo *v42; // x6
  float v43; // s0
  int v44; // w8
  float v45; // s8
  UISprite_o *ImageSprite; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x0
  int32_t v50; // w22
  int32_t v51; // w0
  const MethodInfo *v52; // x6
  UILabel_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_Object_o *messageOffset; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  UnityEngine_Transform_o *v59; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v61; // x21
  float v62; // s0
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  const MethodInfo *v67; // x6
  int v68; // w8
  __int64 v69; // x23
  UILabel_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x21
  __int64 v74; // x21
  int v75; // w24
  int32_t v76; // w0
  const MethodInfo *v77; // x6
  System_String_o *rubyStr; // [xsp+0h] [xbp-70h]
  const MethodInfo *v79; // [xsp+8h] [xbp-68h]
  const MethodInfo *v80; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector2_o v81; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A71A36 & 1) == 0 )
  {
    sub_1B90010(&char___TypeInfo, text);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    sub_1B90010(&StringLiteral_21138/*"line"*/, v12);
    byte_4A71A36 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v17 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v18 = Label + 112;
  *(_DWORD *)(v18 + 52) = 0;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v18, (int32_t)colorTag, v15, v16);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v20);
    *(_QWORD *)(v17 + 16) = MainLabel;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)MainLabel, v22, v23);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v24);
    *(_QWORD *)(v17 + 24) = RubyLabel;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)RubyLabel, v26, v27);
    v28 = System_String__Substring_61806096(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1B900B8(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v14 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v28 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61809248(v28, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v29 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v30 = *(_DWORD *)(v29 + 24);
        if ( v30 )
        {
          fontSize = this->fields.fontSize;
          v32 = *(System_String_o **)(v29 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v30 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v17,
              (UILabel_o **)(v17 + 16),
              (UILabel_o **)(v17 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v32,
              font,
              v79);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v17,
              (UILabel_o **)(v17 + 16),
              (UILabel_o **)(v17 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v32,
              *(System_String_o **)(v29 + 40),
              font,
              this->fields.isTalkName,
              v80);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1B90274(Label, v14);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v19);
      *(_QWORD *)(v17 + 32) = ImageSprite;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)ImageSprite, v47, v48);
      v49 = System_String__Substring_61806096(text, 2, text->fields._stringLength - 3, 0LL);
      v50 = this->fields.fontSize;
      v51 = System_Int32__Parse(v49, 0LL);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v17,
        (UISprite_o **)(v17 + 32),
        &this->fields.dispPosition,
        v50,
        v51,
        (System_String_o *)StringLiteral_21138/*"line"*/,
        v52);
      goto LABEL_27;
    }
LABEL_26:
    v53 = ScriptLineMessage__FetchMainLabel(this, v19);
    *(_QWORD *)(v17 + 16) = v53;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v53, v54, v55);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v17,
      (UILabel_o **)(v17 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      (const MethodInfo *)rubyStr);
    goto LABEL_27;
  }
  v35 = ScriptLineMessage__FetchImageSprite(this, v34);
  *(_QWORD *)(v17 + 32) = v35;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v35, v36, v37);
  v38 = System_String__Substring_61806096(text, 2, text->fields._stringLength - 3, 0LL);
  Label = sub_1B900B8(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_64;
  v14 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v38 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_61809248(v38, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_64;
  v39 = *(_DWORD *)(Label + 24);
  v40 = Label;
  if ( !v39 )
    goto LABEL_65;
  v41 = *(System_String_o **)(Label + 32);
  if ( v39 <= 1 )
  {
    Label = sub_1B900B8(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v14 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v41 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_61809248(v41, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_64;
    v68 = *(_DWORD *)(Label + 24);
    v69 = Label;
    if ( v68 <= 1 )
    {
      if ( !v68 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v17,
        (UISprite_o **)(v17 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        v67);
    }
    else
    {
      v70 = ScriptLineMessage__FetchRubyLabel(this, v14);
      *(_QWORD *)(v17 + 24) = v70;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v70, v71, v72);
      if ( *(_DWORD *)(v69 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v17,
        (UISprite_o **)(v17 + 32),
        (UILabel_o **)(v17 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v69 + 32),
        *(System_String_o **)(v69 + 40),
        font,
        0,
        v79);
    }
  }
  else
  {
    v43 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v44 = *(_DWORD *)(v40 + 24);
    v45 = v43;
    if ( v44 == 2 )
    {
      ScriptMessageLabel__UpdateImage_41696144(
        (ScriptMessageLabel_o *)v17,
        (UISprite_o **)(v17 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v43,
        v41,
        0,
        v42);
    }
    else if ( v44 <= 3 )
    {
      if ( (unsigned int)v44 <= 2 )
        goto LABEL_65;
      v73 = *(System_String_o **)(v40 + 48);
      Label = sub_1B900B8(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_64;
      v14 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v73 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61809248(v73, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v74 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v74 + 24) <= 1u )
        goto LABEL_65;
      v75 = Label;
      v76 = System_Int32__Parse(*(System_String_o **)(v74 + 40), 0LL);
      v81.fields.x = (float)v75;
      v81.fields.y = (float)v76;
      ScriptMessageLabel__UpdateImage_41696296(
        (ScriptMessageLabel_o *)v17,
        (UISprite_o **)(v17 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v45,
        v41,
        v81,
        0,
        v77);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_64;
    v82.fields.z = 0.0;
    v82.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v82.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v82, 0LL);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v59 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4A6A9C6 )
    {
      Label = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v14);
      byte_4A6A9C6 = 1;
    }
    if ( !v59 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    if ( this->fields.isCondensedScale )
    {
      Label = (__int64)this->fields.messageOffset;
      if ( !Label )
        goto LABEL_64;
      if ( fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Label, 0LL))) >= (float)this->fields.condensedSize )
      {
        Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( this->fields.messageOffset )
        {
          condensedSize = this->fields.condensedSize;
          v61 = (UnityEngine_Transform_o *)Label;
          LODWORD(v62) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v61 )
          {
            v83.fields.x = (float)condensedSize / fabsf(v62);
            v83.fields.y = 1.0;
            v83.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v61, v83, 0LL);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1B9026C(Label, v14);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v63 = *(_QWORD *)(Label + 16);
  v64 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v63 )
    goto LABEL_64;
  v65 = *(int *)(Label + 24);
  if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v17,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = v63 + 8 * v65;
    *(_DWORD *)(Label + 24) = v65 + 1;
    *(_QWORD *)(v66 + 32) = v17;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v66 + 32), v17, v57, v58);
  }
}


void __fastcall ScriptLineMessage__AfterParseEachChar(
        ScriptLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScriptLineMessage__ChangeMainPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mainPrefab = prefab;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.mainPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.messageRoot = root;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.messageRoot, (int32_t)root, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.rubyPrefab = prefab;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.rubyPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A71A30 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4A71A30 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    dispLabelList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v13.fields._current, v9);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v10 = this->fields.dispLabelList;
  if ( !v10 )
LABEL_11:
    sub_1B9026C(dispLabelList, v7);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4A71A3B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A71A3B = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  startPosition = this->fields.startPosition;
  v4 = startPosition.fields.y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition = startPosition;
  this->fields.maxDispPosition.fields.x = startPosition.fields.x;
  this->fields.maxDispPosition.fields.y = v4;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.messageOffset;
    if ( !byte_4A6A9C1 )
    {
      v6 = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4A6A9C1 = 1;
    }
    if ( !v8 )
      sub_1B9026C(v6, v7);
    UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  ScriptLineMessage__SetDefaultState(this, v7);
}


void __fastcall ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4A71A2E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v4);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v8);
    byte_4A71A2E = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v9);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v10);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
      if ( !labelStock )
        goto LABEL_28;
      if ( labelStock->fields._size <= 0 )
        break;
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(v13, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1B9026C(labelStock, v10);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69539440(v14, 0LL);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
  }
}


void __fastcall ScriptLineMessage__EffectScale(ScriptLineMessage_o *this, float s, float d, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // 0:s1.4,4:s2.4,8:s3.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7.fields.z = 1.0;
  v7.fields.x = s;
  v7.fields.y = s;
  TweenScale__Begin(gameObject, d, v7, 0LL);
}


void __fastcall ScriptLineMessage__Fadeout(ScriptLineMessage_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Component_o *messageRoot; // x0
  UnityEngine_Transform_o *v5; // x19
  int32_t childCount; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  UnityEngine_GameObject_o *gameObject; // x0

  messageRoot = (UnityEngine_Component_o *)this->fields.messageRoot;
  if ( !messageRoot )
    goto LABEL_8;
  messageRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageRoot, 0LL);
  if ( !messageRoot )
    goto LABEL_8;
  v5 = (UnityEngine_Transform_o *)messageRoot;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)messageRoot, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    v8 = 0;
    while ( 1 )
    {
      messageRoot = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v8, 0LL);
      if ( !messageRoot )
        break;
      gameObject = UnityEngine_Component__get_gameObject(messageRoot, 0LL);
      TweenAlpha__Begin(gameObject, d, 0.0, 0LL);
      if ( v7 == ++v8 )
        return;
    }
LABEL_8:
    sub_1B9026C(messageRoot, method);
  }
}


UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *imageStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4A71A33 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    byte_4A71A33 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                              v13,
                                              (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1B90274(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B9026C(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C1 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C1 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C6 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C6 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v11;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_4A71A34 & 1) == 0 )
  {
    sub_1B90010(&ScriptMessageLabel_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v4);
    byte_4A71A34 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v7 = (ScriptMessageLabel_o *)sub_1B9025C(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v7, v8);
  return v7;
}


UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *mainStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4A71A31 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4A71A31 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                              v13,
                                              (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1B90274(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B9026C(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C1 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C1 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C6 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C6 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v11;
}


UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *rubyStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_4A71A32 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4A71A32 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                              v13,
                                              (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1B90274(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B9026C(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_3766200 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C1 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C1 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A6A9C6 )
  {
    Component_object = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4A6A9C6 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UILabel__set_fontSize((UILabel_o *)v11, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v11;
}


void __fastcall ScriptLineMessage__FowardText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  ScriptLineMessage__UpdateLabels(this, text, 1, color, font, 0, v5);
}


ScriptMessageLabel_array *__fastcall ScriptLineMessage__GetDispLabelArray(
        ScriptLineMessage_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_4A71A2F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method);
    byte_4A71A2F = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1B9026C(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__GetPrintedSize(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.maxDispPosition.fields.x;
  if ( x < this->fields.dispPosition.fields.x )
    x = this->fields.dispPosition.fields.x;
  v3 = x - this->fields.startPosition.fields.x;
  v4 = -(float)(this->fields.maxDispPosition.fields.y - this->fields.startPosition.fields.y);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool __fastcall ScriptLineMessage__HasRubyFormat(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4A71A3C & 1) == 0 )
  {
    sub_1B90010(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1B90010(&StringLiteral_16069/*"\\[#[^:]+:[^:]+\\]"*/, v3);
    byte_4A71A3C = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16069/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_T__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Stack_T__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_Stack_T__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_Stack_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  __int64 v30; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v32; // x0
  int defaultFontSize; // w2
  UILabel_o *v34; // x20
  float v35; // s0
  int32_t rubyFontSize; // w8
  float v37; // s1
  float v38; // s0
  float v39; // s0
  float v40; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v42; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v44; // s0
  UnityEngine_Transform_o *v45; // x20

  if ( (byte_4A71A2D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v7);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_Stack_UILabel__TypeInfo, v10);
    sub_1B90010(&System_Collections_Generic_Stack_UISprite__TypeInfo, v11);
    sub_1B90010(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v12);
    sub_1B90010(&StringLiteral_919/*"-"*/, v13);
    sub_1B90010(&StringLiteral_25292/*"■"*/, v14);
    byte_4A71A2D = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v16 = (System_Collections_Generic_Stack_T__o *)sub_1B9025C(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v16,
        (const MethodInfo_3765C38 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v16;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.mainStock, (int32_t)v16, v17, v18);
      v19 = (System_Collections_Generic_Stack_T__o *)sub_1B9025C(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v19,
        (const MethodInfo_3765C38 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v19;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.rubyStock, (int32_t)v19, v20, v21);
      v22 = (System_Collections_Generic_Stack_T__o *)sub_1B9025C(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v22,
        (const MethodInfo_3765C38 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v22;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.imageStock, (int32_t)v22, v23, v24);
      v25 = (System_Collections_Generic_Stack_T__o *)sub_1B9025C(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v25,
        (const MethodInfo_3765C38 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v25;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.labelStock, (int32_t)v25, v26, v27);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v34 = (UILabel_o *)v32;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_919/*"-"*/,
        defaultFontSize,
        (const MethodInfo_31CFEB8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_919/*"-"*/,
                         (const MethodInfo_31CFE4C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v35 = this->fields.fontScale * (float)(int)fontSizes,
           v35 != INFINITY)
        ? (v30 = (unsigned int)(int)v35)
        : (v30 = 0x80000000LL),
          this->fields.defaultFontSize = v30,
          !Component_object) )
    {
LABEL_37:
      sub_1B9026C(fontSizes, v30);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v30, 0LL);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25292/*"■"*/, 0LL);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[22].method)(
                  Component_object,
                  Component_object->klass->vtable[23].methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v37;
    if ( rubyFontSize <= 0 )
    {
      if ( !v34 )
        goto LABEL_37;
      v39 = this->fields.fontScale * (float)v34->fields.mFontSize;
      if ( v39 == INFINITY )
        LODWORD(v30) = 0x80000000;
      else
        LODWORD(v30) = (int)v39;
      this->fields.rubyFontSize = v30;
    }
    else
    {
      v38 = this->fields.fontScale * (float)rubyFontSize;
      if ( v38 == INFINITY )
        v30 = 0x80000000LL;
      else
        v30 = (unsigned int)(int)v38;
      this->fields.rubyFontSize = v30;
      if ( !v34 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v34, v30, 0LL);
    UILabel__set_text(v34, (System_String_o *)StringLiteral_25292/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v34->klass->vtable._22_get_localSize.method)(
      v34,
      v34->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v40;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
    UnityEngine_Object__Destroy_69539440(v42, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v44 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v44;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
    if ( (fontSizes & 1) != 0 )
    {
      v45 = this->fields.messageOffset;
      if ( !byte_4A6A9C1 )
      {
        fontSizes = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v30);
        byte_4A6A9C1 = 1;
      }
      if ( !v45 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v45, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, (const MethodInfo *)v30);
  }
}


void __fastcall ScriptLineMessage__PreProcSetRubyLabel(
        ScriptLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall ScriptLineMessage__Quit(ScriptLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage__DeleteLabels(this, method);
}


void __fastcall ScriptLineMessage__ReleaseLabel(
        ScriptLineMessage_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  ScriptMessageLabel_o *v3; // x19
  ScriptLineMessage_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *v18; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *v23; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4A71A35 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, label);
    sub_1B90010(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptLineMessage_o *)sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A71A35 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&v3->fields;
  main = (UnityEngine_Object_o *)v3->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    label = (ScriptMessageLabel_o *)*p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_3766260 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields, 0, v11, v12);
  }
  p_ruby = (ScriptLineMessage_o **)&v3->fields.ruby;
  ruby = (UnityEngine_Object_o *)v3->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = *p_ruby;
    if ( !*p_ruby )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    label = (ScriptMessageLabel_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_3766260 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(v18, 0LL);
    }
    *p_ruby = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.ruby, 0, v16, v17);
  }
  p_image = (ScriptLineMessage_o **)&v3->fields.image;
  image = (UnityEngine_Object_o *)v3->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    this = *p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))this->klass[1]._1.gc_desc)(
        this,
        this->klass[1]._1.name,
        0.0);
      this = (ScriptLineMessage_o *)v4->fields.imageStock;
      label = (ScriptMessageLabel_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)label,
          (const MethodInfo_3766260 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0LL;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.image, 0, v21, v22);
        goto LABEL_37;
      }
      if ( label )
      {
        v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69539440(v23, 0LL);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1B9026C(this, label);
  }
LABEL_37:
  ScriptMessageLabel__Release(v3, (const MethodInfo *)label);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)v3,
      (const MethodInfo_3766260 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  float x; // s0
  float defaultTextOnlyLineHeight; // s4
  float v7; // s1
  float v8; // s2
  float v9; // s0
  int32_t v10; // w1

  if ( (byte_4A71A39 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A39 = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v7 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v8 = this->fields.startPosition.fields.x;
  v9 = this->fields.dispPosition.fields.y - (float)(v7 + this->fields.betweenLineHeight);
  this->fields.fontSize = this->fields.defaultFontSize;
  this->fields.dispPosition.fields.x = v8;
  this->fields.dispPosition.fields.y = v9;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v7;
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v10, v2, v3);
  this->fields.maxDispPosition.fields.y = this->fields.dispPosition.fields.y - this->fields.textOnlyLineHeight;
}


void __fastcall ScriptLineMessage__SetBetweenLineHeight(
        ScriptLineMessage_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1B9026C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  float rubyLineHeight; // s2
  float defaultTextOnlyLineHeight; // s1
  int32_t defaultFontSize; // w8
  int32_t v8; // w1

  if ( (byte_4A71A38 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A38 = 1;
  }
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v8, v2, v3);
}


void __fastcall ScriptLineMessage__SetFontSize(
        ScriptLineMessage_o *this,
        System_String_o *sizeName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  int32_t Item; // w0
  float textOnlyLineHeight; // s2
  float v8; // s0
  int32_t v9; // w8
  float v10; // s0
  float y; // s1

  if ( (byte_4A71A3A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName);
    byte_4A71A3A = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1B9026C(0LL, sizeName);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_31CFE4C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  v8 = this->fields.fontScale * (float)Item;
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  v10 = (float)v9;
  this->fields.fontSize = v9;
  if ( textOnlyLineHeight < (float)v9 )
  {
    y = this->fields.dispPosition.fields.y;
    this->fields.textOnlyLineHeight = v10;
    this->fields.maxDispPosition.fields.y = y - v10;
  }
}


void __fastcall ScriptLineMessage__SetText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        bool isTalkName,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x6

  this->fields.isTalkName = isTalkName;
  ScriptLineMessage__ClearText(this, (const MethodInfo *)text);
  ScriptLineMessage__UpdateLabels(this, text, 0, color, font, removeUserNameColorCode, v12);
}


void __fastcall ScriptLineMessage__UpdateLabels(
        ScriptLineMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        const MethodInfo *method)
{
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
  __int64 v30; // x23
  __int64 Chars; // x0
  System_String_o *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  System_Text_StringBuilder_o *v37; // x20
  System_Text_StringBuilder_o **v38; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v45; // x25
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  int32_t v48; // w29
  int v49; // w21
  const MethodInfo *v50; // x2
  int32_t v51; // w20
  int32_t BraceIndex; // w0
  int32_t v53; // w28
  System_String_o *v54; // x0
  int32_t v55; // w20
  System_String_o *String; // x0
  const MethodInfo *v57; // x1
  bool v58; // zf
  System_String_o *v59; // x20
  System_String_o *TagSplitString; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_Text_StringBuilder_o *v63; // x20
  __int64 v64; // x1
  const MethodInfo *v65; // x3
  ScriptReplaceString_c *v66; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v68; // x1
  System_String_o *v69; // x20
  const MethodInfo *v70; // x6
  char v71; // w2
  UnityEngine_Font_o *v72; // x4
  ScriptLineMessage_o *v73; // x0
  System_String_o *v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_String_o *v77; // x1
  const MethodInfo *v78; // x2
  System_String_o *v79; // x20
  int32_t v80; // w1
  int32_t v81; // w2
  System_String_o *v82; // x0
  System_String_o *v83; // x2
  ScriptLineMessage_ProcAddLabel2_o *v84; // x9
  __int64 v85; // x1
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x2
  System_String_o *v88; // x20
  System_String_array *v89; // x0
  struct System_String_o *v90; // x1
  System_String_array *v91; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  const MethodInfo *v94; // x1
  System_String_o *v95; // x0
  const MethodInfo *v96; // x3
  System_Text_StringBuilder_o *v97; // x20
  ScriptLineMessage_ProcAddLabel2_o *v98; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A71A37 & 1) == 0 )
  {
    sub_1B90010(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt);
    sub_1B90010(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12);
    sub_1B90010(&ScriptMessageLabel_TypeInfo, v13);
    sub_1B90010(&ScriptReplaceString_TypeInfo, v14);
    sub_1B90010(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B90010(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__, v16);
    sub_1B90010(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__, v17);
    sub_1B90010(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo, v18);
    sub_1B90010(&StringLiteral_23149/*"servantName"*/, v19);
    sub_1B90010(&StringLiteral_15856/*"[-]"*/, v20);
    sub_1B90010(&StringLiteral_20075/*"i"*/, v21);
    sub_1B90010(&StringLiteral_16057/*"[~1]"*/, v22);
    sub_1B90010(&StringLiteral_15992/*"[^"*/, v23);
    sub_1B90010(&StringLiteral_22775/*"r"*/, v24);
    sub_1B90010(&StringLiteral_21138/*"line"*/, v25);
    sub_1B90010(&StringLiteral_20260/*"image"*/, v26);
    sub_1B90010(&StringLiteral_15837/*"["*/, v27);
    sub_1B90010(&StringLiteral_16056/*"[~"*/, v28);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v29);
    byte_4A71A37 = 1;
  }
  text = 0LL;
  v30 = sub_1B9025C(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_89;
  *(_QWORD *)(v30 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)this, v33, v34);
  *(_BYTE *)(v30 + 32) = isFoward;
  *(_QWORD *)(v30 + 40) = font;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 40), (int32_t)font, v35, v36);
  v37 = (System_Text_StringBuilder_o *)sub_1B9025C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  *(_QWORD *)(v30 + 16) = v37;
  v38 = (System_Text_StringBuilder_o **)(v30 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)v37, v39, v40);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v41, v42);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v30 + 48) = defaultColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 48), (int32_t)defaultColorTag, v41, v42);
  v45 = sub_1B9025C(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v45,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v46);
  v98 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1B9025C(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v98,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v47);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v48 = 0;
  v49 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v48, 0LL) != 91 )
    {
      v63 = *v38;
      Chars = System_String__get_Chars(txt, v48, 0LL);
      if ( !v63 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_60951316(v63, Chars, 0LL);
      v53 = v48;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v51 = v48 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v48 + 1, v50);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v38;
      if ( !*v38 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_60948988(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15837/*"["*/,
                         0LL);
      goto LABEL_43;
    }
    v53 = BraceIndex;
    Chars = System_String__get_Chars(txt, v51, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v45 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
      v54 = System_String__Substring_61806096(txt, v48 + 2, v49 + v53 - 2, 0LL);
      v55 = System_Int32__Parse(v54, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v55, 0LL);
      v58 = v55 == 1;
      v59 = String;
      if ( v58 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v59, v57);
      }
      else
      {
        TagSplitString = System_String__Concat_61787092(String, (System_String_o *)StringLiteral_15856/*"[-]"*/, 0LL);
      }
LABEL_39:
      v68 = *(struct System_String_o **)(v30 + 48);
      v69 = TagSplitString;
      this->fields.defaultColorTag = v68;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v68, v61, v62);
      v71 = *(_BYTE *)(v30 + 32);
      v72 = *(UnityEngine_Font_o **)(v30 + 40);
      v73 = this;
      v74 = v69;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v73, v74, v71, enforceColor, v72, 0, v70);
      v77 = this->fields.defaultColorTag;
      *(_QWORD *)(v30 + 48) = v77;
LABEL_41:
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 48), (int32_t)v77, v75, v76);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v51, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v45 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4A71901 )
      {
        sub_1B90010(&ScriptReplaceString_TypeInfo, v64);
        byte_4A71901 = 1;
      }
      v66 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v66 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v66->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v48 + 2, playerGenderIndex, v65);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v51, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v45 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
      Chars = (__int64)System_String__Substring_61806096(txt, v48, v49 + v53 + 1, 0LL);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v51, 0LL) != 61 )
      break;
LABEL_42:
    v51 = v53 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              *v38,
              v45,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_43:
    v49 = -v51;
    v48 = v51;
    if ( v51 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v51, v78);
  if ( !Chars )
    goto LABEL_89;
  v79 = (System_String_o *)Chars;
  Chars = System_String__Equals_61795408((System_String_o *)Chars, (System_String_o *)StringLiteral_20260/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
    v80 = v48 + 7;
    v81 = v49 + v53 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_61795408(v79, (System_String_o *)StringLiteral_20075/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
    v80 = v48 + 3;
    v81 = v49 + v53 - 3;
LABEL_58:
    v32 = System_String__Substring_61806096(txt, v80, v81, 0LL);
    v82 = (System_String_o *)StringLiteral_15992/*"[^"*/;
    v83 = (System_String_o *)StringLiteral_16094/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_61798352(v82, v32, v83, 0LL);
LABEL_60:
    v84 = v98;
    if ( !v98 )
      goto LABEL_89;
    v85 = Chars;
LABEL_62:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v84->fields.m_target)(
      v84->fields.original_method_info,
      v85,
      *(_QWORD *)&v84->fields.extra_arg);
    goto LABEL_42;
  }
  Chars = System_String__Equals_61795408(v79, (System_String_o *)StringLiteral_22775/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
    ScriptLineMessage__ReturnText(this, v86);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v75, v76);
    }
    v77 = *p_defaultColorTag;
    *(_QWORD *)(v30 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_61795408(v79, (System_String_o *)StringLiteral_23149/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
    v88 = System_String__Substring_61806096(txt, v48 + 12, v49 + v53 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v89 = ScriptMessageLabel__AnalysTagParam(v88, 0, v87);
    v90 = *(struct System_String_o **)(v30 + 48);
    v91 = v89;
    this->fields.defaultColorTag = v90;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v90, v92, v93);
    v95 = ScriptMessageLabel__GetServantChangeName(v91, v94);
    v71 = *(_BYTE *)(v30 + 32);
    v72 = *(UnityEngine_Font_o **)(v30 + 40);
    v74 = v95;
    v73 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v79, (System_String_o *)StringLiteral_21138/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
    Chars = (__int64)System_String__Substring_61806096(txt, v48 + 5, v49 + v53 - 5, 0LL);
    if ( !Chars )
      goto LABEL_89;
    v32 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v82 = (System_String_o *)StringLiteral_16056/*"[~"*/;
      v83 = (System_String_o *)StringLiteral_16094/*"]"*/;
      goto LABEL_59;
    }
    v84 = v98;
    if ( !v98 )
      goto LABEL_89;
    v85 = StringLiteral_16057/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v53 < txt->fields._stringLength )
  {
    text = System_String__Substring_61806096(txt, v48, v49 + v53 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v30 + 48), &text, enforceColor, v96);
    Chars = (__int64)*v38;
    if ( !*v38 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_60948988((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_42;
  }
  v97 = *v38;
  Chars = (__int64)System_String__Substring(txt, v48, 0LL);
  if ( !v97 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_60948988(v97, (System_String_o *)Chars, 0LL);
LABEL_87:
  if ( !v45 )
LABEL_89:
    sub_1B9026C(Chars, v32);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__get_DispPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.dispPosition.fields.x;
  y = this->fields.dispPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall ScriptLineMessage__get_RubyLineHegight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.rubyLineHeight;
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__get_StartPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall ScriptLineMessage__get_textLineHeight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage_ProcAddLabel___ctor(
        ScriptLineMessage_ProcAddLabel_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D700C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D6FCC;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel__Invoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage_ProcAddLabel2___ctor(
        ScriptLineMessage_ProcAddLabel2_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D7088;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D7068;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D7020;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel2__BeginInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    txt,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___ctor(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__0(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  char *tmpTxt; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ScriptLineMessage_o *_4__this; // x20
  const MethodInfo *v7; // x5
  struct ScriptLineMessage_o *v8; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0LL) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v8 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v8->fields.defaultColorTag,
          0,
          this->fields.font,
          v7),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1B9026C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(tmpTxt + 136), (int32_t)tmpColorTag, v4, v5);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v4; // x5
  ScriptLineMessage___c__DisplayClass55_0_o *v5; // x19
  struct ScriptLineMessage_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v5 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLineMessage___c__DisplayClass55_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLineMessage__AddLabel(
      (ScriptLineMessage_o *)this,
      text,
      (System_String_o *)this[2].fields.__4__this,
      0,
      v5->fields.font,
      v4);
  }
  this = (ScriptLineMessage___c__DisplayClass55_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1B9026C(this, text);
  tmpColorTag = (struct ScriptLineMessage_o *)v5->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this[2].fields.__4__this, (int32_t)tmpColorTag, (int32_t)method, v3);
}