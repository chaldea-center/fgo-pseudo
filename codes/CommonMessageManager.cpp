void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7FC2 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptMessageManager_TypeInfo);
    byte_4CB7FC2 = 1;
  }
  this->fields.playSpeed = 2;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
  ScriptMessageManager___ctor((ScriptMessageManager_o *)this, 0);
}


System_String_array *CommonMessageManager__AnalysParam(
        CommonMessageManager_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  int stringLength; // w28
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x22
  int32_t v7; // w24
  int32_t v8; // w1
  uint16_t Chars; // w0
  System_String_o *v10; // x0
  int v11; // w21
  System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int size; // w8
  Il2CppObject *Item; // x0
  int32_t v17; // w21
  System_String_o *v18; // x0
  Il2CppObject *v19; // x2
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  int v31; // w8
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_String_o *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  _WORD v48[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_4CB7FC0 & 1) == 0 )
  {
    sub_1C6BA08(&char_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_1736/*"="*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_341/*"\""*/);
    this = (CommonMessageManager_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7FC0 = 1;
  }
  v48[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(v3, v8, 0);
      v48[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_34;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_31;
        size = v5->fields._size;
        if ( size < 1
          || (Item = System_Collections_Generic_List_object___get_Item(
                       v5,
                       size - 1,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_113/*" "*/, 0)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v48, 0);
          items = v5->fields._items;
          v37 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_72;
          v38 = v5->fields._size;
          if ( (unsigned int)v38 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + v38;
            v5->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)data;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)data, v34, v35);
          }
          goto LABEL_63;
        }
        v17 = v5->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v18 = System_Char__ToString((uint16_t)v48, 0);
        if ( v18 )
          v19 = (Il2CppObject *)v18;
        else
          v19 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v17 - 1,
          v19,
          (const MethodInfo_38006F8 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v10 = System_Char__ToString((uint16_t)v48, 0);
            v6 = System_String__Concat_63966792(v6, v10, 0);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v11 = v7 + 1;
                v48[0] = System_String__get_Chars(v3, v7, 0);
                if ( v48[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v12 = System_Char__ToString((uint16_t)v48, 0);
                v6 = System_String__Concat_63966792(v6, v12, 0);
                ++v7;
                if ( stringLength == v11 )
                {
                  v7 = stringLength;
                  goto LABEL_61;
                }
              }
              ++v7;
            }
LABEL_61:
            v24 = (System_String_o *)StringLiteral_341/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v24 = System_Char__ToString((uint16_t)v48, 0);
          }
          v6 = System_String__Concat_63966792(v6, v24, 0);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v20 = v5->fields._items;
          v21 = Method_System_Collections_Generic_List_string__Add__;
          ++v5->fields._version;
          if ( !v20 )
            goto LABEL_72;
          v22 = v5->fields._size;
          if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v6,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + v22;
            v5->fields._size = v22 + 1;
            v23[4] = (Il2CppClass *)v6;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v6, v13, v14);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v48, 0);
          v27 = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v27 )
            goto LABEL_72;
          v29 = v5->fields._size;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v5->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)data;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)data, v25, v26);
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v31 = v5->fields._size;
        if ( v31 < 1 )
          goto LABEL_51;
        v32 = System_Collections_Generic_List_object___get_Item(
                v5,
                v31 - 1,
                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v32, (System_String_o *)StringLiteral_1736/*"="*/, 0) )
        {
          v33 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v33, (System_String_o *)StringLiteral_808/*","*/, 0) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v7 >= stringLength )
      {
        v40 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v40 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v40, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1C6BC60(this, data);
  }
  if ( !v5 )
    goto LABEL_72;
  v43 = v5->fields._items;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v43 )
    goto LABEL_72;
  v45 = v5->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v5->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v6, v41, v42);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


void CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v6; // x1
  System_Char_array *v7; // x21
  System_String_o *v8; // x0
  Il2CppObject *v9; // x1
  System_String_array *v10; // x23
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v17; // x26
  System_String_o **m_Items; // x9
  __int64 v19; // x29
  __int64 v20; // x24
  System_String_o **v21; // x27
  System_String_o *v22; // x28
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x28
  System_String_o **v26; // x5
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _QWORD *v29; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _QWORD *v35; // x9
  struct System_Object_array *v36; // x8
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  System_String_o *v51; // x1
  Il2CppClass **v52; // x0
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  int32_t v56; // w26
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  struct System_Object_array *v67; // x8
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  _QWORD *v73; // x9
  struct System_Object_array *v74; // x8
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  _QWORD *v79; // x9
  struct System_Object_array *v80; // x8
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  struct System_Int32_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  struct System_Int32_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  _QWORD *v105; // x9
  struct System_Object_array *v106; // x8
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  struct System_Int32_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  struct System_String_array *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct System_String_array *v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Int32_array *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v122; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB7FBE & 1) == 0 )
  {
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C6BA08(&StringLiteral_369/*"#"*/);
    sub_1C6BA08(&StringLiteral_1044/*"//"*/);
    sub_1C6BA08(&StringLiteral_20155/*"i"*/);
    sub_1C6BA08(&StringLiteral_21177/*"k"*/);
    sub_1C6BA08(&StringLiteral_22937/*"q"*/);
    sub_1C6BA08(&StringLiteral_478/*"%"*/);
    sub_1C6BA08(&StringLiteral_500/*"&"*/);
    sub_1C6BA08(&StringLiteral_21323/*"line"*/);
    sub_1C6BA08(&StringLiteral_24084/*"talkStart"*/);
    sub_1C6BA08(&StringLiteral_20350/*"image"*/);
    sub_1C6BA08(&StringLiteral_15993/*"[r]"*/);
    sub_1C6BA08(&StringLiteral_24080/*"talkName"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7FBE = 1;
  }
  v5 = (System_Array_o *)sub_1C6BAB0(char___TypeInfo, 5);
  v6.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v7 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v5, v6, 0);
  if ( !scriptData )
    goto LABEL_144;
  v10 = System_String__Split_64016000(scriptData, v7, 1, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v12;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v13;
  lastMessageIndex = -1;
  if ( !v10 )
    goto LABEL_144;
  max_length = v10->max_length;
  if ( (int)max_length < 1 )
  {
    LODWORD(v17) = 0;
    goto LABEL_122;
  }
  v17 = 0;
  m_Items = v10->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v19 = 0;
    v20 = (v17 << 32) + 0x100000000LL;
    v21 = &m_Items[v17];
    while ( 1 )
    {
      if ( (int)v17 + (int)v19 >= (unsigned int)max_length )
        sub_1C6BC68(v8);
      v22 = v21[v19];
      if ( !v22 )
        goto LABEL_144;
      if ( v22->fields._stringLength < 1 )
        goto LABEL_53;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      v8 = (System_String_o *)System_String__StartsWith(v21[v19], (System_String_o *)StringLiteral_1044/*"//"*/, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      v8 = (System_String_o *)System_String__StartsWith(v22, this->fields.codeCommentString, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v22, this->fields.codeTalkString, 0) )
        break;
      v8 = (System_String_o *)System_String__StartsWith(v22, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v26,
          v22,
          v17 + v19 + 1,
          v122);
LABEL_18:
        v8 = (System_String_o *)System_String__op_Inequality(v23, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_144;
            v29 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_24084/*"talkStart"*/;
            items = v11->fields._items;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v9,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v9;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v9, v27, v28);
            }
            if ( !v12 )
              goto LABEL_144;
            v35 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_1/*""*/;
            v36 = v12->fields._items;
            ++v12->fields._version;
            if ( !v36 )
              goto LABEL_144;
            v37 = v12->fields._size;
            if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &v36->obj.klass + v37;
              v12->fields._size = v37 + 1;
              v38[4] = (Il2CppClass *)v9;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v9, v33, v34);
            }
            if ( !v13 )
              goto LABEL_144;
            v39 = v13->fields._items;
            v40 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v39 )
              goto LABEL_144;
            v41 = v13->fields._size;
            if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v17 + v19 + 1,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v41 + 1;
              v39->m_Items[v41] = v17 + v19 + 1;
            }
          }
          else if ( !v11 )
          {
            goto LABEL_144;
          }
          v42 = v11->fields._items;
          v43 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !v42 )
            goto LABEL_144;
          v44 = v11->fields._size;
          if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              0,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v42->obj.klass + v44;
            v11->fields._size = v44 + 1;
            v45[4] = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), 0, v27, v28);
          }
          if ( !v12 )
            goto LABEL_144;
          lastMessageIndex = v12->fields._size;
          if ( !v23 )
            goto LABEL_144;
          v8 = System_String__Replace_64013356(
                 v23,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_15993/*"[r]"*/,
                 0);
          v48 = v12->fields._items;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          ++v12->fields._version;
          if ( !v48 )
            goto LABEL_144;
          v50 = v12->fields._size;
          v51 = v8;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v8,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v48->obj.klass + v50;
            v12->fields._size = v50 + 1;
            v52[4] = (Il2CppClass *)v51;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
          }
          if ( !v13 )
            goto LABEL_144;
          v53 = v13->fields._items;
          v54 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !v53 )
            goto LABEL_144;
          v55 = v13->fields._size;
          if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v17 + v19 + 1,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = v55 + 1;
            v53->m_Items[v55] = v17 + v19 + 1;
          }
        }
      }
LABEL_53:
      max_length = v10->max_length;
      ++v19;
      v20 += 0x100000000LL;
      if ( v17 + v19 >= (int)max_length )
      {
        LODWORD(v17) = v17 + v19;
        goto LABEL_122;
      }
    }
    v24 = v22;
    v25 = (System_String_o *)StringLiteral_24080/*"talkName"*/;
    v23 = System_String__Substring(v24, 1, 0);
    if ( !v25 )
      goto LABEL_18;
    v56 = v17 + v19 + 1;
    v8 = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_21177/*"k"*/, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_22937/*"q"*/, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_24080/*"talkName"*/, 0) )
        {
          v8 = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_24080/*"talkName"*/, 0);
          v65 = StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v8 & 1) != 0 )
            v65 = (__int64)v23;
          a = (System_String_o *)v65;
        }
        else if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_20155/*"i"*/, 0)
               || System_String__op_Equality(v25, (System_String_o *)StringLiteral_20350/*"image"*/, 0)
               || System_String__op_Equality(v25, (System_String_o *)StringLiteral_21323/*"line"*/, 0)
               || System_String__StartsWith(v25, (System_String_o *)StringLiteral_478/*"%"*/, 0)
               || System_String__StartsWith(v25, (System_String_o *)StringLiteral_500/*"&"*/, 0)
               || (v8 = (System_String_o *)System_String__StartsWith(v25, (System_String_o *)StringLiteral_369/*"#"*/, 0),
                   ((unsigned __int8)v8 & 1) != 0) )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_144;
            v73 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_24084/*"talkStart"*/;
            v74 = v11->fields._items;
            ++v11->fields._version;
            if ( !v74 )
              goto LABEL_144;
            v75 = v11->fields._size;
            if ( (unsigned int)v75 >= LODWORD(v74->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v9,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = &v74->obj.klass + v75;
              v11->fields._size = v75 + 1;
              v76[4] = (Il2CppClass *)v9;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v9, v57, v58);
            }
            if ( !v12 )
              goto LABEL_144;
            v79 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_1/*""*/;
            v80 = v12->fields._items;
            ++v12->fields._version;
            if ( !v80 )
              goto LABEL_144;
            v81 = v12->fields._size;
            if ( (unsigned int)v81 >= LODWORD(v80->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v82 = &v80->obj.klass + v81;
              v12->fields._size = v81 + 1;
              v82[4] = (Il2CppClass *)v9;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v9, v77, v78);
            }
            if ( !v13 )
              goto LABEL_144;
            v83 = v13->fields._items;
            v84 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v83 )
              goto LABEL_144;
            v85 = v13->fields._size;
            if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v56,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v85 + 1;
              v83->m_Items[v85] = v56;
            }
          }
          else if ( !v12 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v12->fields._size;
        }
LABEL_104:
        if ( v11 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( lastMessageIndex < 0 )
      goto LABEL_104;
    if ( !v11 )
      goto LABEL_144;
    v59 = v11->fields._items;
    v60 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v59 )
      goto LABEL_144;
    v61 = v11->fields._size;
    if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        0,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &v59->obj.klass + v61;
      v11->fields._size = v61 + 1;
      v62[4] = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v62 + 4), 0, v57, v58);
    }
    if ( !v12 )
      goto LABEL_144;
    v66 = Method_System_Collections_Generic_List_string__Add__;
    v9 = (Il2CppObject *)StringLiteral_15993/*"[r]"*/;
    v67 = v12->fields._items;
    ++v12->fields._version;
    if ( !v67 )
      goto LABEL_144;
    v68 = v12->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v67->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        v9,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v67->obj.klass + v68;
      v12->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v9, v63, v64);
    }
    if ( !v13 )
      goto LABEL_144;
    v70 = v13->fields._items;
    v71 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v70 )
      goto LABEL_144;
    v72 = v13->fields._size;
    if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v56,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v72 + 1;
      v70->m_Items[v72] = v56;
    }
    lastMessageIndex = -1;
LABEL_105:
    v86 = v11->fields._items;
    v87 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v86 )
      goto LABEL_144;
    v88 = v11->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v25,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v11->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v25;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v25, v57, v58);
    }
    if ( !v12 )
      goto LABEL_144;
    v92 = v12->fields._items;
    v93 = Method_System_Collections_Generic_List_string__Add__;
    ++v12->fields._version;
    if ( !v92 )
      goto LABEL_144;
    v94 = v12->fields._size;
    if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v23,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = &v92->obj.klass + v94;
      v12->fields._size = v94 + 1;
      v95[4] = (Il2CppClass *)v23;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v23, v90, v91);
    }
    if ( !v13 )
      goto LABEL_144;
    v96 = v13->fields._items;
    v97 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v96 )
      goto LABEL_144;
    v98 = v13->fields._size;
    if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v56,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v98 + 1;
      v96->m_Items[v98] = v56;
    }
    max_length = v10->max_length;
    m_Items = v10->m_Items;
    v17 = v20 >> 32;
  }
  while ( v20 >> 32 < (int)max_length );
LABEL_122:
  if ( lastMessageIndex < 0 )
  {
    if ( v11 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v11 )
    goto LABEL_144;
  v99 = v11->fields._items;
  v100 = Method_System_Collections_Generic_List_string__Add__;
  ++v11->fields._version;
  if ( !v99 )
    goto LABEL_144;
  v101 = v11->fields._size;
  if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      0,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = &v99->obj.klass + v101;
    v11->fields._size = v101 + 1;
    v102[4] = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v102 + 4), 0, v14, v15);
  }
  if ( !v12 )
    goto LABEL_144;
  v105 = Method_System_Collections_Generic_List_string__Add__;
  v9 = (Il2CppObject *)StringLiteral_15993/*"[r]"*/;
  v106 = v12->fields._items;
  ++v12->fields._version;
  if ( !v106 )
    goto LABEL_144;
  v107 = v12->fields._size;
  if ( (unsigned int)v107 >= LODWORD(v106->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v106->obj.klass + v107;
    v12->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v9, v103, v104);
  }
  if ( !v13 )
    goto LABEL_144;
  v109 = v13->fields._items;
  v110 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !v109 )
    goto LABEL_144;
  v111 = v13->fields._size;
  if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      v17,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v111 + 1;
    v109->m_Items[v111] = v17;
  }
LABEL_140:
  v112 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v112;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.executeTagList, (int32_t)v112, v113, v114);
  if ( !v12
    || (v115 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v12,
                                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v115,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.executeDataList, (int32_t)v115, v116, v117),
        !v13)
    || (v118 = System_Collections_Generic_List_int___ToArray(
                 v13,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v118,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.executeLineList, (int32_t)v118, v119, v120),
        (executeDataList = this->fields.executeDataList) == 0) )
  {
LABEL_144:
    sub_1C6BC60(v8, v9);
  }
  this->fields.executeIndexMax = executeDataList->max_length;
}


void CommonMessageManager__AnalysText(
        CommonMessageManager_o *this,
        System_Collections_Generic_List_string__o **tagDataList,
        System_Collections_Generic_List_string__o **scriptDataList,
        System_Collections_Generic_List_int__o **lineDataList,
        int32_t *lastMessageIndex,
        System_String_o **talkName,
        System_String_o *analysData,
        int32_t line,
        const MethodInfo *method)
{
  int32_t stringLength; // w22
  System_String_o *v12; // x27
  int32_t v13; // w29
  int32_t v14; // w1
  uint16_t Chars; // w0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  uint16_t v22; // w28
  System_String_o *v23; // x0
  int v24; // w24
  System_String_o *v25; // x0
  System_Collections_Generic_List_object__o *v26; // x28
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  CommonMessageManager_o *v32; // x1
  Il2CppClass **v33; // x0
  intptr_t v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_String_o *v37; // x27
  System_String_o *v38; // x28
  int v39; // w24
  int32_t v40; // w1
  uint16_t v41; // w0
  System_String_o *v43; // x0
  int v44; // w26
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 *v48; // x8
  intptr_t v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  intptr_t v52; // x8
  __int64 *v53; // x8
  intptr_t v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  intptr_t v57; // x8
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_List_string__o **v60; // x27
  intptr_t v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  intptr_t v64; // x8
  intptr_t v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  intptr_t v68; // x8
  CGThumbnailListItem_o *v69; // x0
  __int64 v70; // x8
  __int64 *v71; // x8
  intptr_t v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  intptr_t v75; // x8
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  intptr_t v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  intptr_t v81; // x8
  System_Collections_Generic_List_string__o *v82; // x28
  struct System_String_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  intptr_t v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int32_t v90; // w8
  intptr_t v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  intptr_t v94; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  intptr_t v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  intptr_t v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  intptr_t v103; // x8
  intptr_t v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  intptr_t v107; // x8
  int32_t v108; // w8
  System_String_o *v109; // x24
  System_String_o *v110; // x1
  System_String_o *v111; // x1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  intptr_t v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  intptr_t v117; // x8
  System_Collections_Generic_List_object__o *v118; // x21
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  CommonMessageManager_o *v124; // x1
  Il2CppClass **v125; // x0
  intptr_t v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  CommonMessageManager_o *v129; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v133; // [xsp+20h] [xbp-70h]
  _WORD v134[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v129 = this;
  v133 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4CB7FBF & 1) == 0 )
  {
    sub_1C6BA08(&char_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&StringLiteral_18016/*"clear"*/);
    sub_1C6BA08(&StringLiteral_19603/*"font"*/);
    sub_1C6BA08(&StringLiteral_19401/*"f"*/);
    sub_1C6BA08(&StringLiteral_23689/*"speed"*/);
    sub_1C6BA08(&StringLiteral_21177/*"k"*/);
    sub_1C6BA08(&StringLiteral_22937/*"q"*/);
    sub_1C6BA08(&StringLiteral_24821/*"voiceStop"*/);
    sub_1C6BA08(&StringLiteral_17160/*"bgm"*/);
    sub_1C6BA08(&StringLiteral_17162/*"bgmStop"*/);
    sub_1C6BA08(&StringLiteral_24971/*"wt"*/);
    sub_1C6BA08(&StringLiteral_23330/*"seStop"*/);
    sub_1C6BA08(&StringLiteral_22701/*"page"*/);
    sub_1C6BA08(&StringLiteral_24828/*"wait"*/);
    sub_1C6BA08(&StringLiteral_19054/*"end"*/);
    sub_1C6BA08(&StringLiteral_21160/*"jingle"*/);
    sub_1C6BA08(&StringLiteral_23321/*"se"*/);
    sub_1C6BA08(&StringLiteral_21235/*"l"*/);
    sub_1C6BA08(&StringLiteral_24815/*"voice"*/);
    sub_1C6BA08(&StringLiteral_24170/*"time "*/);
    sub_1C6BA08(&StringLiteral_19608/*"fontSize"*/);
    sub_1C6BA08(&StringLiteral_23328/*"seLoop"*/);
    sub_1C6BA08(&StringLiteral_341/*"\""*/);
    sub_1C6BA08(&StringLiteral_15993/*"[r]"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_23270/*"s"*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    sub_1C6BA08(&StringLiteral_17148/*"betweenHeight"*/);
    sub_1C6BA08(&StringLiteral_21161/*"jingleStop"*/);
    sub_1C6BA08(&StringLiteral_23662/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB7FBF = 1;
  }
  v134[0] = 0;
  if ( !analysData )
    goto LABEL_234;
  stringLength = analysData->fields._stringLength;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v13++;
        Chars = System_String__get_Chars(analysData, v14, 0);
        v134[0] = Chars;
        if ( Chars == 91 )
          break;
        v22 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v23 = System_Char__ToString((uint16_t)v134, 0);
        v12 = System_String__Concat_63966792(v12, v23, 0);
        if ( v22 == 34 )
        {
          if ( v13 < stringLength )
          {
            while ( 1 )
            {
              v24 = v13 + 1;
              v134[0] = System_String__get_Chars(analysData, v13, 0);
              if ( v134[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v25 = System_Char__ToString((uint16_t)v134, 0);
              v12 = System_String__Concat_63966792(v12, v25, 0);
              ++v13;
              if ( stringLength == v24 )
              {
                v13 = stringLength;
                goto LABEL_86;
              }
            }
            ++v13;
          }
LABEL_86:
          v12 = System_String__Concat_63966792(v12, (System_String_o *)StringLiteral_341/*"\""*/, 0);
        }
        if ( v13 >= stringLength )
        {
          v111 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v133;
        if ( !*v133 )
          goto LABEL_234;
        m_CachedPtr = this->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 32), 0, v16, v17);
        }
        if ( !v12 )
          goto LABEL_234;
        v26 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_64013356(
                                           v12,
                                           v129->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_15993/*"[r]"*/,
                                           0);
        if ( !v26 )
          goto LABEL_234;
        items = v26->fields._items;
        v30 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v26->fields._size;
        v32 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)this,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v34 = this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_234;
        v36 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v36 + 1;
          *(_DWORD *)(v34 + 4 * v36 + 32) = line;
        }
      }
      v37 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
      {
        v38 = 0;
      }
      else
      {
        v38 = 0;
        v39 = 0;
        v40 = v13;
        do
        {
          v13 = v40 + 1;
          v41 = System_String__get_Chars(analysData, v40, 0);
          v134[0] = v41;
          if ( v41 == 91 )
          {
            ++v39;
          }
          else if ( v41 == 93 )
          {
            if ( --v39 < 0 )
              break;
          }
          else if ( v41 == 32 && v38 == 0 )
          {
            v38 = v37;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v43 = System_Char__ToString((uint16_t)v134, 0);
          v37 = System_String__Concat_63966792(v37, v43, 0);
          if ( v134[0] == 34 )
          {
            if ( v13 < stringLength )
            {
              while ( 1 )
              {
                v44 = v13 + 1;
                v134[0] = System_String__get_Chars(analysData, v13, 0);
                if ( v134[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v45 = System_Char__ToString((uint16_t)v134, 0);
                v37 = System_String__Concat_63966792(v37, v45, 0);
                ++v13;
                if ( stringLength == v44 )
                {
                  v13 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v13;
            }
LABEL_56:
            v37 = System_String__Concat_63966792(v37, (System_String_o *)StringLiteral_341/*"\""*/, 0);
          }
          v40 = v13;
        }
        while ( v13 < stringLength );
      }
      if ( !v38 )
        v38 = v37;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v38, 0);
      if ( (unsigned int)this > 0x7B80C780 )
      {
        if ( (unsigned int)this > 0xA8F18501 )
        {
          if ( (unsigned int)this > 0xE90C310B )
          {
            if ( (unsigned int)this > 0xEF3A9228 )
            {
              if ( (_DWORD)this == -200523172 )
              {
                v71 = &StringLiteral_22937/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v71, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v133;
                  if ( !*v133 )
                    goto LABEL_234;
                  v72 = this->fields.m_CachedPtr;
                  v73 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v72 )
                    goto LABEL_234;
                  v74 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v75 = v72 + 8 * v74;
                    LODWORD(this->fields.m_CancellationTokenSource) = v74 + 1;
                    *(_QWORD *)(v75 + 32) = 0;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 32), 0, v46, v47);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_15993/*"[r]"*/;
                  v91 = this->fields.m_CachedPtr;
                  v92 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v91 )
                    goto LABEL_234;
                  v93 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v94 = v91 + 8 * v93;
                    LODWORD(this->fields.m_CancellationTokenSource) = v93 + 1;
                    *(_QWORD *)(v94 + 32) = tagDataList;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v94 + 32), (int32_t)tagDataList, v76, v77);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v97 = this->fields.m_CachedPtr;
                  v98 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v97 )
                    goto LABEL_234;
                  v99 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v99 + 1;
                    *(_DWORD *)(v97 + 4 * v99 + 32) = line;
                  }
                  this = *v133;
                  if ( !*v133 )
                    goto LABEL_234;
                  v100 = this->fields.m_CachedPtr;
                  v101 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v100 )
                    goto LABEL_234;
                  v102 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v38,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v103 = v100 + 8 * v102;
                    LODWORD(this->fields.m_CancellationTokenSource) = v102 + 1;
                    *(_QWORD *)(v103 + 32) = v38;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v103 + 32), (int32_t)v38, v95, v96);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v104 = this->fields.m_CachedPtr;
                  v105 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v104 )
                    goto LABEL_234;
                  v106 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v106 < *(_DWORD *)(v104 + 24) )
                  {
                    v107 = v104 + 8 * v106;
                    LODWORD(this->fields.m_CancellationTokenSource) = v106 + 1;
                    *(_QWORD *)(v107 + 32) = tagDataList;
                    v69 = (CGThumbnailListItem_o *)(v107 + 32);
                    goto LABEL_168;
                  }
                  v70 = v105[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v48 = &StringLiteral_23270/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v71 = &StringLiteral_21177/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v48 = &StringLiteral_21160/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v48 = &StringLiteral_24821/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v48 = &StringLiteral_19401/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v48 = &StringLiteral_21235/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v48 = &StringLiteral_24828/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v48 = &StringLiteral_17148/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v48 = &StringLiteral_19608/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v38 && !v38->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v53 = &StringLiteral_22701/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v48 = &StringLiteral_24815/*"voice"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x4B4794E6 )
      {
        if ( (unsigned int)this > 0x667B7330 )
        {
          switch ( (_DWORD)this )
          {
            case 0x6A8E75AA:
              v48 = &StringLiteral_19054/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v48 = &StringLiteral_23662/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v48, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v38->fields._stringLength + 1);
                v60 = v37->fields._stringLength <= (int)tagDataList
                    ? (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/
                    : (System_Collections_Generic_List_string__o **)System_String__Substring(
                                                                      v37,
                                                                      (int32_t)tagDataList,
                                                                      0);
                this = *v133;
                if ( !*v133 )
                  goto LABEL_234;
                v61 = this->fields.m_CachedPtr;
                v62 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v61 )
                  goto LABEL_234;
                v63 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                }
                else
                {
                  v64 = v61 + 8 * v63;
                  LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
                  *(_QWORD *)(v64 + 32) = v38;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 32), (int32_t)v38, v46, v47);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v65 = this->fields.m_CachedPtr;
                v66 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v65 )
                  goto LABEL_234;
                v67 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v67 < *(_DWORD *)(v65 + 24) )
                {
                  v68 = v65 + 8 * v67;
                  LODWORD(this->fields.m_CancellationTokenSource) = v67 + 1;
                  *(_QWORD *)(v68 + 32) = v60;
                  v69 = (CGThumbnailListItem_o *)(v68 + 32);
                  LODWORD(tagDataList) = (_DWORD)v60;
LABEL_168:
                  sub_1C6B9AC(v69, (int32_t)tagDataList, v58, v59);
                  goto LABEL_171;
                }
                v70 = v66[4];
                tagDataList = v60;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v48 = &StringLiteral_23689/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v53 = &StringLiteral_18016/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v53, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v133;
                if ( !*v133 )
                  goto LABEL_234;
                v54 = this->fields.m_CachedPtr;
                v55 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v54 )
                  goto LABEL_234;
                v56 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
                }
                else
                {
                  v57 = v54 + 8 * v56;
                  LODWORD(this->fields.m_CancellationTokenSource) = v56 + 1;
                  *(_QWORD *)(v57 + 32) = v38;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 32), (int32_t)v38, v46, v47);
                }
                if ( !v37 )
                  goto LABEL_234;
                v90 = v38->fields._stringLength;
                v82 = *scriptDataList;
                if ( v37->fields._stringLength <= v90 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v37, v90 + 1, 0);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v82 )
                  goto LABEL_234;
                v83 = v82->fields._items;
                v84 = Method_System_Collections_Generic_List_string__Add__;
                ++v82->fields._version;
                if ( !v83 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v48 = &StringLiteral_17160/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v48 = &StringLiteral_21161/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v48 = &StringLiteral_23321/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v48 = &StringLiteral_23328/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)StringLiteral_24971/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v133;
              if ( !*v133 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24828/*"wait"*/;
              v49 = this->fields.m_CachedPtr;
              v50 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v49 )
                goto LABEL_234;
              v51 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = v49 + 8 * v51;
                LODWORD(this->fields.m_CancellationTokenSource) = v51 + 1;
                *(_QWORD *)(v52 + 32) = tagDataList;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)tagDataList, v46, v47);
              }
              if ( !v37 )
                goto LABEL_234;
              v108 = v38->fields._stringLength;
              v82 = *scriptDataList;
              v109 = (System_String_o *)StringLiteral_24170/*"time "*/;
              v110 = v37->fields._stringLength <= v108 + 1
                   ? (System_String_o *)StringLiteral_1115/*"0"*/
                   : System_String__Substring(v37, v108 + 1, 0);
              this = (CommonMessageManager_o *)System_String__Concat_63966792(v109, v110, 0);
              if ( !v82 )
                goto LABEL_234;
              goto LABEL_164;
            }
            break;
        }
      }
      else
      {
        switch ( (_DWORD)this )
        {
          case 0x274E1290:
            v48 = &StringLiteral_19603/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v48 = &StringLiteral_23330/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v48 = &StringLiteral_17162/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v133;
      if ( !*v133 )
        goto LABEL_234;
      v78 = this->fields.m_CachedPtr;
      v79 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v78 )
        goto LABEL_234;
      v80 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = v78 + 8 * v80;
        LODWORD(this->fields.m_CancellationTokenSource) = v80 + 1;
        *(_QWORD *)(v81 + 32) = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v81 + 32), 0, v46, v47);
      }
      v82 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_64005056(
                                         (System_String_o *)StringLiteral_15801/*"["*/,
                                         v37,
                                         (System_String_o *)StringLiteral_16051/*"]"*/,
                                         0);
      if ( !v82 )
        goto LABEL_234;
LABEL_164:
      v83 = v82->fields._items;
      v84 = Method_System_Collections_Generic_List_string__Add__;
      ++v82->fields._version;
      if ( !v83 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v85 = v82->fields._size;
      if ( (unsigned int)v85 < LODWORD(v83->max_length) )
      {
        v86 = &v83->obj.klass + v85;
        v82->fields._size = v85 + 1;
        v86[4] = (Il2CppClass *)tagDataList;
        v69 = (CGThumbnailListItem_o *)(v86 + 4);
        goto LABEL_168;
      }
      v70 = v84[4];
      this = (CommonMessageManager_o *)v82;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v70 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v87 = this->fields.m_CachedPtr;
      v88 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v87 )
        goto LABEL_234;
      v89 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
        *(_DWORD *)(v87 + 4 * v89 + 32) = line;
      }
LABEL_176:
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      v111 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
        goto LABEL_215;
    }
  }
  v111 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v111, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v133;
      if ( *v133 )
      {
        v114 = this->fields.m_CachedPtr;
        v115 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v114 )
        {
          v116 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = v114 + 8 * v116;
            LODWORD(this->fields.m_CancellationTokenSource) = v116 + 1;
            *(_QWORD *)(v117 + 32) = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v117 + 32), 0, v112, v113);
          }
          if ( v12 )
          {
            v118 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_64013356(
                                               v12,
                                               v129->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_15993/*"[r]"*/,
                                               0);
            if ( v118 )
            {
              v121 = v118->fields._items;
              v122 = Method_System_Collections_Generic_List_string__Add__;
              ++v118->fields._version;
              if ( v121 )
              {
                v123 = v118->fields._size;
                v124 = this;
                if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v118,
                    (Il2CppObject *)this,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
                }
                else
                {
                  v125 = &v121->obj.klass + v123;
                  v118->fields._size = v123 + 1;
                  v125[4] = (Il2CppClass *)v124;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v124, v119, v120);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v126 = this->fields.m_CachedPtr;
                  v127 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v126 )
                  {
                    v128 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v128 + 1;
                      *(_DWORD *)(v126 + 4 * v128 + 32) = line;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_234:
    sub_1C6BC60(this, tagDataList);
  }
}


void CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *callbackFunc; // x19
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB7FBC & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11484/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1C6BA08(&StringLiteral_11494/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1C6BA08(&StringLiteral_11487/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1C6BA08(&StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4CB7FBC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11484/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.codeTalkString, (int32_t)v6, v7, v8);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11494/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.codeVoiceString, (int32_t)v9, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.codeReturnString, (int32_t)v12, v13, v14);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__SetTalkNameBack((ScriptMessageCommonManager_o *)this, 0, 0);
  ScriptMessageCommonManager__InitScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)this, 1, 0);
  this->fields.isDispLastTouchMark = 1;
}


void CommonMessageManager__OnClickWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))touchCallbackFunc->fields.invoke_impl)(
      touchCallbackFunc->fields.method_code,
      touchCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnLongPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *longPressCallbackFunc; // x20

  ScriptMessageCommonManager__OnLongPressWindow((ScriptMessageCommonManager_o *)this, 0);
  longPressCallbackFunc = this->fields.longPressCallbackFunc;
  if ( longPressCallbackFunc )
  {
    this->fields.longPressCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))longPressCallbackFunc->fields.invoke_impl)(
      longPressCallbackFunc->fields.method_code,
      longPressCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))touchCallbackFunc->fields.invoke_impl)(
      touchCallbackFunc->fields.method_code,
      touchCallbackFunc->fields.method);
  }
}


bool CommonMessageManager__ProcessScript(CommonMessageManager_o *this, float delta, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CommonMessageManager_o *v5; // x19
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x22
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v13; // x24
  System_String_o *v14; // x25
  System_String_array *v15; // x23
  const MethodInfo *v16; // x3
  __int64 *v17; // x8
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CGThumbnailListItem_o *v21; // x0
  System_String_o *v22; // x1
  System_String_o *v23; // x23
  uint32_t v24; // w0
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  __int64 *v29; // x8
  __int64 *v30; // x8
  System_String_o *v31; // x1
  int32_t playSpeed; // w8
  __int64 *v33; // x8
  __int64 *v34; // x8
  il2cpp_array_size_t max_length; // x9
  float v36; // s0
  System_String_o *v37; // x1
  il2cpp_array_size_t v38; // x9
  float v39; // s0
  il2cpp_array_size_t v40; // x9
  System_String_o *v41; // x1
  ScriptMessageCommonManager_o *v42; // x0
  System_String_o *v43; // x2
  int32_t v44; // w1
  _BOOL4 isBusy; // w20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 *v49; // x8
  __int64 v50; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4CB7FC1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21639/*"messageOn"*/);
    sub_1C6BA08(&StringLiteral_18016/*"clear"*/);
    sub_1C6BA08(&StringLiteral_19603/*"font"*/);
    sub_1C6BA08(&StringLiteral_22706/*"page3"*/);
    sub_1C6BA08(&StringLiteral_21637/*"messageOff"*/);
    sub_1C6BA08(&StringLiteral_22705/*"page2"*/);
    sub_1C6BA08(&StringLiteral_19401/*"f"*/);
    sub_1C6BA08(&StringLiteral_23689/*"speed"*/);
    sub_1C6BA08(&StringLiteral_21177/*"k"*/);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    sub_1C6BA08(&StringLiteral_22937/*"q"*/);
    sub_1C6BA08(&StringLiteral_22720/*"parameter error"*/);
    sub_1C6BA08(&StringLiteral_24234/*"touch2"*/);
    sub_1C6BA08(&StringLiteral_22701/*"page"*/);
    sub_1C6BA08(&StringLiteral_24828/*"wait"*/);
    sub_1C6BA08(&StringLiteral_22719/*"parameter be unnecessary"*/);
    sub_1C6BA08(&StringLiteral_19054/*"end"*/);
    sub_1C6BA08(&StringLiteral_21629/*"message2"*/);
    sub_1C6BA08(&StringLiteral_21235/*"l"*/);
    sub_1C6BA08(&StringLiteral_19608/*"fontSize"*/);
    sub_1C6BA08(&StringLiteral_21625/*"message"*/);
    sub_1C6BA08(&StringLiteral_24080/*"talkName"*/);
    sub_1C6BA08(&StringLiteral_24232/*"touch"*/);
    sub_1C6BA08(&StringLiteral_21630/*"message3"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_23270/*"s"*/);
    sub_1C6BA08(&StringLiteral_17148/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1C6BA08(&StringLiteral_18018/*"clear2"*/);
    byte_4CB7FC1 = 1;
  }
  state = v5->fields.state;
  if ( !state )
    return 0;
  p_waitType = &v5->fields.waitType;
  p_waitMessage = &v5->fields.waitMessage;
  p_waitTalkName = &v5->fields.waitTalkName;
  while ( 1 )
  {
    while ( state != 4 )
    {
      if ( state != 3 )
        goto LABEL_173;
      executeIndex = v5->fields.executeIndex;
      if ( (int)executeIndex >= v5->fields.executeIndexMax )
      {
        CommonMessageManager__EndExecuteScript(v5, method);
        goto LABEL_173;
      }
      if ( v5->fields.playSpeed == 1 )
        goto LABEL_173;
      executeTagList = v5->fields.executeTagList;
      if ( !executeTagList )
        goto LABEL_190;
      if ( (unsigned int)executeIndex >= LODWORD(executeTagList->max_length) )
        goto LABEL_189;
      executeDataList = v5->fields.executeDataList;
      if ( !executeDataList )
        goto LABEL_190;
      if ( (unsigned int)executeIndex >= LODWORD(executeDataList->max_length) )
        goto LABEL_189;
      executeLineList = v5->fields.executeLineList;
      if ( !executeLineList )
LABEL_190:
        sub_1C6BC60(this, method);
      if ( (unsigned int)executeIndex >= LODWORD(executeLineList->max_length) )
        goto LABEL_189;
      v13 = executeDataList->m_Items[executeIndex];
      v14 = executeTagList->m_Items[executeIndex];
      v15 = CommonMessageManager__AnalysParam(this, v13, v3);
      if ( !v14 && v5->fields.isBusy )
        goto LABEL_181;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v14, 0);
      if ( (unsigned int)this > 0x84F7AC69 )
      {
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_22937/*"q"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v29 = &StringLiteral_23270/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v29, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                max_length = v15->max_length;
                if ( (_DWORD)max_length == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_858/*"-"*/,
                                                     0);
                  v36 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
                      goto LABEL_189;
                    v36 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v17 = &StringLiteral_22720/*"parameter error"*/;
                  if ( max_length )
                    goto LABEL_169;
                  v36 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v36, 0);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v25 = &StringLiteral_21235/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v25, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v38 = v15->max_length;
                if ( (_DWORD)v38 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_858/*"-"*/,
                                                     0);
                  v39 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
LABEL_189:
                      sub_1C6BC68(this);
                    v39 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v17 = &StringLiteral_22720/*"parameter error"*/;
                  if ( v38 )
                    goto LABEL_169;
                  v39 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v39, 0);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_21177/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v17 = &StringLiteral_22719/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v30 = &StringLiteral_24232/*"touch"*/;
                goto LABEL_150;
              }
            }
          }
        }
        else
        {
          if ( (unsigned int)this > 0x9859D490 )
          {
            if ( (_DWORD)this == -1460566783 )
            {
              v34 = &StringLiteral_19608/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v34 = &StringLiteral_19401/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24828/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v17 = &StringLiteral_22720/*"parameter error"*/;
LABEL_169:
                if ( *v17 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v22 = v15->m_Items[0];
              *p_waitType = v22;
LABEL_151:
              v21 = (CGThumbnailListItem_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v25 = &StringLiteral_17148/*"betweenHeight"*/;
            goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x5C6E1222 )
      {
        if ( (unsigned int)this > 0x7B80C780 )
        {
          if ( (_DWORD)this == -2124547466 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22701/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22719/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v30 = &StringLiteral_22701/*"page"*/;
LABEL_150:
              v22 = (System_String_o *)*v30;
              v5->fields.waitType = (struct System_String_o *)*v30;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21637/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22720/*"parameter error"*/;
              if ( v15->max_length )
                goto LABEL_169;
              ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
              ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
              goto LABEL_170;
            }
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1787721130 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19054/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22719/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v29 = &StringLiteral_23689/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v34 = &StringLiteral_19603/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v34, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v40 = v15->max_length;
            if ( (_DWORD)v40 == 1 )
            {
              v41 = v15->m_Items[0];
              v42 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v40 >= 3 )
            {
              v41 = v15->m_Items[0];
              v43 = v15->m_Items[2];
              v42 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v17 = &StringLiteral_22720/*"parameter error"*/;
              if ( v40 )
                goto LABEL_169;
              v42 = (ScriptMessageCommonManager_o *)v5;
              v41 = 0;
LABEL_145:
              v43 = 0;
            }
            ScriptMessageCommonManager__SetFontSize(v42, v41, v43, 0);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18016/*"clear"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22719/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v30 = &StringLiteral_18016/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24080/*"talkName"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = (CGThumbnailListItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21639/*"messageOn"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v17 = &StringLiteral_22720/*"parameter error"*/;
          if ( v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
          v5->fields.state = 4;
          v18 = StringLiteral_21625/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21625/*"message"*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.waitType, v18, v19, v20);
          v21 = (CGThumbnailListItem_o *)&v5->fields.waitMessage;
          LODWORD(v22) = 0;
          v5->fields.waitMessage = 0;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v14 )
      {
        v5->fields.state = 4;
        v44 = StringLiteral_21625/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21625/*"message"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.waitType, v44, (int32_t)v3, v16);
        v5->fields.waitMessage = v13;
        v21 = (CGThumbnailListItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v22) = (_DWORD)v13;
LABEL_156:
        sub_1C6B9AC(v21, (int32_t)v22, (int32_t)v3, v16);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v23 = *p_waitType;
    v24 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0);
    if ( v24 > 0x698989D8 )
      break;
    if ( v24 > 0xD841B5E )
    {
      if ( v24 != 619841764 )
      {
        if ( v24 != 1550717474 )
        {
          if ( v24 == 1770621400 && System_String__op_Equality(v23, (System_String_o *)StringLiteral_24232/*"touch"*/, 0) )
          {
            if ( v5->fields.isBusy )
            {
LABEL_181:
              ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0);
              return !v5->fields.isBusy && v5->fields.state == 3;
            }
            ScriptMessageCommonManager__WaitNextTouch(
              (ScriptMessageCommonManager_o *)v5,
              v5->fields.isDispLastTouchMark,
              0);
            v49 = &StringLiteral_24234/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_18016/*"clear"*/, 0) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v33 = &StringLiteral_18018/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21625/*"message"*/, 0) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v33 = &StringLiteral_21629/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v26);
      v37 = *p_waitMessage;
      if ( !*p_waitMessage )
        v37 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v37, 0, 0, 0);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v24 == 256629 )
    {
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21630/*"message3"*/, 0) || v5->fields.isScroll )
        goto LABEL_173;
      v31 = *p_waitMessage;
      if ( !*p_waitMessage )
        v31 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v31, 0, 0, 0);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0);
      goto LABEL_115;
    }
    if ( v24 != 226761566
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_24234/*"touch2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0);
    v5->fields.isCancelInput = 1;
LABEL_115:
    state = 3;
    v5->fields.state = 3;
  }
  if ( v24 <= 0x91466F30 )
  {
    if ( v24 == -2124547466 )
    {
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22701/*"page"*/, 0) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v33 = &StringLiteral_22705/*"page2"*/;
LABEL_120:
      v28 = *v33;
      *p_waitType = (System_String_o *)*v33;
LABEL_121:
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.waitType, v28, (int32_t)v26, v27);
      goto LABEL_171;
    }
    if ( v24 != -1857654992
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_18018/*"clear2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
    goto LABEL_115;
  }
  if ( v24 == -336528737 )
  {
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22706/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v24 == -16520990 )
  {
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21629/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v28) = StringLiteral_21630/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21630/*"message3"*/;
    goto LABEL_121;
  }
  if ( v24 == -353306356
    && System_String__op_Equality(v23, (System_String_o *)StringLiteral_22705/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v49 = &StringLiteral_22706/*"page3"*/;
LABEL_188:
    v50 = *v49;
    v5->fields.waitType = (struct System_String_o *)*v49;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.waitType, v50, v47, v48);
  }
LABEL_173:
  isBusy = v5->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0);
  if ( !isBusy )
    return 0;
  return !v5->fields.isBusy && v5->fields.state == 3;
}


void CommonMessageManager__Quit(CommonMessageManager_o *this, const MethodInfo *method)
{
  CommonMessageManager__EndExecuteScript(this, method);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0);
}


void CommonMessageManager__SetCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void CommonMessageManager__SetLongPressCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.longPressCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.longPressCallbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  bool v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v8 = isDispLastTouchMark;
  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v9, v10);
  CommonMessageManager__AnalysScript(this, messageBlock, v11);
  this->fields.executeIndex = 0;
  this->fields.isCancelInput = 0;
  this->fields.state = 3;
  this->fields.isDispLastTouchMark = v8;
}


void CommonMessageManager__SetMessageSpeed(CommonMessageManager_o *this, int32_t playSpeed, const MethodInfo *method)
{
  this->fields.playSpeed = playSpeed;
}


void CommonMessageManager__SetTalkName(CommonMessageManager_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t charaIndex; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-38h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CB7FBD & 1) == 0 )
  {
    sub_1C6BA08(&ScriptMessageLabel_TypeInfo);
    byte_4CB7FBD = 1;
  }
  imageName = 0;
  charaName = 0;
  className = 0;
  charaIndex = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTalkName(&imageName, &className, &charaName, &charaIndex, name, 0);
  ScriptMessageCommonManager__SetTalkName((ScriptMessageCommonManager_o *)this, 0, className, charaName, charaIndex, 0);
}


void CommonMessageManager__SetTouchCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.touchCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}