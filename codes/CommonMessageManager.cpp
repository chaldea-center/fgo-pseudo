void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C3967B & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageManager_TypeInfo);
    byte_4C3967B = 1;
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
  int32_t stringLength; // w28
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
  Il2CppObject *v29; // x1
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int v32; // w8
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  Il2CppObject *v39; // x1
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_String_o *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  _WORD v50[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C39679 & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_1744/*"="*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_341/*"\""*/);
    this = (CommonMessageManager_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39679 = 1;
  }
  v50[0] = 0;
  if ( !data )
    goto LABEL_72;
  stringLength = data->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(data, v8, 0);
      v50[0] = Chars;
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
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_113/*" "*/, 0)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v50, 0);
          items = v5->fields._items;
          v38 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            v39 = (Il2CppObject *)this;
          else
            v39 = (Il2CppObject *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_72;
          v40 = v5->fields._size;
          if ( (unsigned int)v40 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v39,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + v40;
            v5->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v39;
            sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v39, v35, v36);
          }
          goto LABEL_63;
        }
        v17 = v5->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v18 = System_Char__ToString((uint16_t)v50, 0);
        if ( v18 )
          v19 = (Il2CppObject *)v18;
        else
          v19 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v17 - 1,
          v19,
          (const MethodInfo_3798540 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v10 = System_Char__ToString((uint16_t)v50, 0);
            v6 = System_String__Concat_63518544(v6, v10, 0);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v11 = v7 + 1;
                v50[0] = System_String__get_Chars(data, v7, 0);
                if ( v50[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v12 = System_Char__ToString((uint16_t)v50, 0);
                v6 = System_String__Concat_63518544(v6, v12, 0);
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
            v24 = System_Char__ToString((uint16_t)v50, 0);
          }
          v6 = System_String__Concat_63518544(v6, v24, 0);
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
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + v22;
            v5->fields._size = v22 + 1;
            v23[4] = (Il2CppClass *)v6;
            sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v6, v13, v14);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v50, 0);
          v27 = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_string__Add__;
          v29 = this ? (Il2CppObject *)this : (Il2CppObject *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v27 )
            goto LABEL_72;
          v30 = v5->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v29,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v27->obj.klass + v30;
            v5->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v29;
            sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v29, v25, v26);
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v32 = v5->fields._size;
        if ( v32 < 1 )
          goto LABEL_51;
        v33 = System_Collections_Generic_List_object___get_Item(
                v5,
                v32 - 1,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v33, (System_String_o *)StringLiteral_1744/*"="*/, 0) )
        {
          v34 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v34, (System_String_o *)StringLiteral_811/*","*/, 0) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v7 >= stringLength )
      {
        v42 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v42 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v42, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1C32E7C(this);
  }
  if ( !v5 )
    goto LABEL_72;
  v45 = v5->fields._items;
  v46 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v45 )
    goto LABEL_72;
  v47 = v5->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v5->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v6, v43, v44);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  System_String_array *v9; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v16; // x26
  System_String_o **m_Items; // x9
  __int64 v18; // x29
  __int64 v19; // x24
  System_String_o **v20; // x27
  System_String_o *v21; // x28
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x28
  System_String_o **v25; // x5
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _QWORD *v28; // x9
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _QWORD *v35; // x9
  Il2CppObject *v36; // x1
  struct System_Object_array *v37; // x8
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  System_String_o *v52; // x1
  Il2CppClass **v53; // x0
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  int32_t v57; // w26
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  _QWORD *v67; // x9
  Il2CppObject *v68; // x1
  struct System_Object_array *v69; // x8
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  _QWORD *v75; // x9
  Il2CppObject *v76; // x1
  struct System_Object_array *v77; // x8
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  _QWORD *v82; // x9
  Il2CppObject *v83; // x1
  struct System_Object_array *v84; // x8
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  struct System_Int32_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  struct System_Int32_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  _QWORD *v109; // x9
  Il2CppObject *v110; // x1
  struct System_Object_array *v111; // x8
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  struct System_String_array *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_String_array *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct System_Int32_array *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v127; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C39677 & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C32C20(&StringLiteral_370/*"#"*/);
    sub_1C32C20(&StringLiteral_1051/*"//"*/);
    sub_1C32C20(&StringLiteral_20088/*"i"*/);
    sub_1C32C20(&StringLiteral_21096/*"k"*/);
    sub_1C32C20(&StringLiteral_22840/*"q"*/);
    sub_1C32C20(&StringLiteral_479/*"%"*/);
    sub_1C32C20(&StringLiteral_501/*"&"*/);
    sub_1C32C20(&StringLiteral_21238/*"line"*/);
    sub_1C32C20(&StringLiteral_23984/*"talkStart"*/);
    sub_1C32C20(&StringLiteral_20282/*"image"*/);
    sub_1C32C20(&StringLiteral_15998/*"[r]"*/);
    sub_1C32C20(&StringLiteral_23980/*"talkName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39677 = 1;
  }
  v5 = (System_Array_o *)sub_1C32CC8(char___TypeInfo, 5);
  v6.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v7 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v5, v6, 0);
  if ( !scriptData )
    goto LABEL_144;
  v9 = System_String__Split_63567736(scriptData, v7, 1, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v12;
  lastMessageIndex = -1;
  if ( !v9 )
    goto LABEL_144;
  max_length = v9->max_length;
  if ( (int)max_length < 1 )
  {
    LODWORD(v16) = 0;
    goto LABEL_122;
  }
  v16 = 0;
  m_Items = v9->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v18 = 0;
    v19 = (v16 << 32) + 0x100000000LL;
    v20 = &m_Items[v16];
    while ( 1 )
    {
      if ( (int)v16 + (int)v18 >= (unsigned int)max_length )
        sub_1C32E84(v8);
      v21 = v20[v18];
      if ( !v21 )
        goto LABEL_144;
      if ( v21->fields._stringLength < 1 )
        goto LABEL_53;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      v8 = (System_String_o *)System_String__StartsWith(v20[v18], (System_String_o *)StringLiteral_1051/*"//"*/, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      v8 = (System_String_o *)System_String__StartsWith(v21, this->fields.codeCommentString, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v21, this->fields.codeTalkString, 0) )
        break;
      v8 = (System_String_o *)System_String__StartsWith(v21, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v25,
          v21,
          v16 + v18 + 1,
          v127);
LABEL_18:
        v8 = (System_String_o *)System_String__op_Inequality(v22, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v28 = Method_System_Collections_Generic_List_string__Add__;
            v29 = (Il2CppObject *)StringLiteral_23984/*"talkStart"*/;
            items = v10->fields._items;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v29,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v29;
              sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v29, v26, v27);
            }
            if ( !v11 )
              goto LABEL_144;
            v35 = Method_System_Collections_Generic_List_string__Add__;
            v36 = (Il2CppObject *)StringLiteral_1/*""*/;
            v37 = v11->fields._items;
            ++v11->fields._version;
            if ( !v37 )
              goto LABEL_144;
            v38 = v11->fields._size;
            if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v36,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &v37->obj.klass + v38;
              v11->fields._size = v38 + 1;
              v39[4] = (Il2CppClass *)v36;
              sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v36, v33, v34);
            }
            if ( !v12 )
              goto LABEL_144;
            v40 = v12->fields._items;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v40 )
              goto LABEL_144;
            v42 = v12->fields._size;
            if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v16 + v18 + 1,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v42 + 1;
              v40->m_Items[v42] = v16 + v18 + 1;
            }
          }
          else if ( !v10 )
          {
            goto LABEL_144;
          }
          v43 = v10->fields._items;
          v44 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( !v43 )
            goto LABEL_144;
          v45 = v10->fields._size;
          if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              0,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &v43->obj.klass + v45;
            v10->fields._size = v45 + 1;
            v46[4] = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v46 + 4), 0, v26, v27);
          }
          if ( !v11 )
            goto LABEL_144;
          lastMessageIndex = v11->fields._size;
          if ( !v22 )
            goto LABEL_144;
          v8 = System_String__Replace_63565092(
                 v22,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_15998/*"[r]"*/,
                 0);
          v49 = v11->fields._items;
          v50 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !v49 )
            goto LABEL_144;
          v51 = v11->fields._size;
          v52 = v8;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v8,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &v49->obj.klass + v51;
            v11->fields._size = v51 + 1;
            v53[4] = (Il2CppClass *)v52;
            sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v52, v47, v48);
          }
          if ( !v12 )
            goto LABEL_144;
          v54 = v12->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v54 )
            goto LABEL_144;
          v56 = v12->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v16 + v18 + 1,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v56 + 1;
            v54->m_Items[v56] = v16 + v18 + 1;
          }
        }
      }
LABEL_53:
      max_length = v9->max_length;
      ++v18;
      v19 += 0x100000000LL;
      if ( v16 + v18 >= (int)max_length )
      {
        LODWORD(v16) = v16 + v18;
        goto LABEL_122;
      }
    }
    v23 = v21;
    v24 = (System_String_o *)StringLiteral_23980/*"talkName"*/;
    v22 = System_String__Substring(v23, 1, 0);
    if ( !v24 )
      goto LABEL_18;
    v57 = v16 + v18 + 1;
    v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_21096/*"k"*/, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_22840/*"q"*/, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_23980/*"talkName"*/, 0) )
        {
          v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_23980/*"talkName"*/, 0);
          v66 = StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v8 & 1) != 0 )
            v66 = (__int64)v22;
          a = (System_String_o *)v66;
        }
        else if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_20088/*"i"*/, 0)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_20282/*"image"*/, 0)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_21238/*"line"*/, 0)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_479/*"%"*/, 0)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_501/*"&"*/, 0)
               || (v8 = (System_String_o *)System_String__StartsWith(v24, (System_String_o *)StringLiteral_370/*"#"*/, 0),
                   ((unsigned __int8)v8 & 1) != 0) )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v75 = Method_System_Collections_Generic_List_string__Add__;
            v76 = (Il2CppObject *)StringLiteral_23984/*"talkStart"*/;
            v77 = v10->fields._items;
            ++v10->fields._version;
            if ( !v77 )
              goto LABEL_144;
            v78 = v10->fields._size;
            if ( (unsigned int)v78 >= LODWORD(v77->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v76,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v79 = &v77->obj.klass + v78;
              v10->fields._size = v78 + 1;
              v79[4] = (Il2CppClass *)v76;
              sub_1C32BC4((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v76, v58, v59);
            }
            if ( !v11 )
              goto LABEL_144;
            v82 = Method_System_Collections_Generic_List_string__Add__;
            v83 = (Il2CppObject *)StringLiteral_1/*""*/;
            v84 = v11->fields._items;
            ++v11->fields._version;
            if ( !v84 )
              goto LABEL_144;
            v85 = v11->fields._size;
            if ( (unsigned int)v85 >= LODWORD(v84->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v83,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
            }
            else
            {
              v86 = &v84->obj.klass + v85;
              v11->fields._size = v85 + 1;
              v86[4] = (Il2CppClass *)v83;
              sub_1C32BC4((CGThumbnailListItem_o *)(v86 + 4), (int32_t)v83, v80, v81);
            }
            if ( !v12 )
              goto LABEL_144;
            v87 = v12->fields._items;
            v88 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v87 )
              goto LABEL_144;
            v89 = v12->fields._size;
            if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v57,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v89 + 1;
              v87->m_Items[v89] = v57;
            }
          }
          else if ( !v11 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v11->fields._size;
        }
LABEL_104:
        if ( v10 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( lastMessageIndex < 0 )
      goto LABEL_104;
    if ( !v10 )
      goto LABEL_144;
    v60 = v10->fields._items;
    v61 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v60 )
      goto LABEL_144;
    v62 = v10->fields._size;
    if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        0,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v60->obj.klass + v62;
      v10->fields._size = v62 + 1;
      v63[4] = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 4), 0, v58, v59);
    }
    if ( !v11 )
      goto LABEL_144;
    v67 = Method_System_Collections_Generic_List_string__Add__;
    v68 = (Il2CppObject *)StringLiteral_15998/*"[r]"*/;
    v69 = v11->fields._items;
    ++v11->fields._version;
    if ( !v69 )
      goto LABEL_144;
    v70 = v11->fields._size;
    if ( (unsigned int)v70 >= LODWORD(v69->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        v68,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &v69->obj.klass + v70;
      v11->fields._size = v70 + 1;
      v71[4] = (Il2CppClass *)v68;
      sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v68, v64, v65);
    }
    if ( !v12 )
      goto LABEL_144;
    v72 = v12->fields._items;
    v73 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v72 )
      goto LABEL_144;
    v74 = v12->fields._size;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v57,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v74 + 1;
      v72->m_Items[v74] = v57;
    }
    lastMessageIndex = -1;
LABEL_105:
    v90 = v10->fields._items;
    v91 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v90 )
      goto LABEL_144;
    v92 = v10->fields._size;
    if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v24,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &v90->obj.klass + v92;
      v10->fields._size = v92 + 1;
      v93[4] = (Il2CppClass *)v24;
      sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v24, v58, v59);
    }
    if ( !v11 )
      goto LABEL_144;
    v96 = v11->fields._items;
    v97 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v96 )
      goto LABEL_144;
    v98 = v11->fields._size;
    if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v22,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v96->obj.klass + v98;
      v11->fields._size = v98 + 1;
      v99[4] = (Il2CppClass *)v22;
      sub_1C32BC4((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v22, v94, v95);
    }
    if ( !v12 )
      goto LABEL_144;
    v100 = v12->fields._items;
    v101 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v100 )
      goto LABEL_144;
    v102 = v12->fields._size;
    if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v57,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v102 + 1;
      v100->m_Items[v102] = v57;
    }
    max_length = v9->max_length;
    m_Items = v9->m_Items;
    v16 = v19 >> 32;
  }
  while ( v19 >> 32 < (int)max_length );
LABEL_122:
  if ( lastMessageIndex < 0 )
  {
    if ( v10 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v10 )
    goto LABEL_144;
  v103 = v10->fields._items;
  v104 = Method_System_Collections_Generic_List_string__Add__;
  ++v10->fields._version;
  if ( !v103 )
    goto LABEL_144;
  v105 = v10->fields._size;
  if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      0,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v103->obj.klass + v105;
    v10->fields._size = v105 + 1;
    v106[4] = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)(v106 + 4), 0, v13, v14);
  }
  if ( !v11 )
    goto LABEL_144;
  v109 = Method_System_Collections_Generic_List_string__Add__;
  v110 = (Il2CppObject *)StringLiteral_15998/*"[r]"*/;
  v111 = v11->fields._items;
  ++v11->fields._version;
  if ( !v111 )
    goto LABEL_144;
  v112 = v11->fields._size;
  if ( (unsigned int)v112 >= LODWORD(v111->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v110,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v113 = &v111->obj.klass + v112;
    v11->fields._size = v112 + 1;
    v113[4] = (Il2CppClass *)v110;
    sub_1C32BC4((CGThumbnailListItem_o *)(v113 + 4), (int32_t)v110, v107, v108);
  }
  if ( !v12 )
    goto LABEL_144;
  v114 = v12->fields._items;
  v115 = Method_System_Collections_Generic_List_int__Add__;
  ++v12->fields._version;
  if ( !v114 )
    goto LABEL_144;
  v116 = v12->fields._size;
  if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v12,
      v16,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v116 + 1;
    v114->m_Items[v116] = v16;
  }
LABEL_140:
  v117 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v117;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executeTagList, (int32_t)v117, v118, v119);
  if ( !v11
    || (v120 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v11,
                                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v120,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executeDataList, (int32_t)v120, v121, v122),
        !v12)
    || (v123 = System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v123,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executeLineList, (int32_t)v123, v124, v125),
        (executeDataList = this->fields.executeDataList) == 0) )
  {
LABEL_144:
    sub_1C32E7C(v8);
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
  Il2CppObject *v49; // x1
  intptr_t v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  intptr_t v53; // x8
  __int64 *v54; // x8
  intptr_t v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  intptr_t v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  System_String_o *v62; // x27
  intptr_t v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  intptr_t v66; // x8
  intptr_t v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  intptr_t v70; // x8
  CGThumbnailListItem_o *v71; // x0
  Il2CppObject *v72; // x1
  __int64 v73; // x8
  __int64 *v74; // x8
  intptr_t v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  intptr_t v78; // x8
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  intptr_t v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  intptr_t v84; // x8
  System_Collections_Generic_List_string__o *v85; // x28
  struct System_String_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  intptr_t v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int32_t v93; // w8
  Il2CppObject *v94; // x1
  intptr_t v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  intptr_t v98; // x8
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  intptr_t v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  intptr_t v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  intptr_t v107; // x8
  intptr_t v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  intptr_t v111; // x8
  int32_t v112; // w8
  System_String_o *v113; // x24
  System_String_o *v114; // x1
  System_String_o *v115; // x1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  intptr_t v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  intptr_t v121; // x8
  System_Collections_Generic_List_object__o *v122; // x21
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  CommonMessageManager_o *v128; // x1
  Il2CppClass **v129; // x0
  intptr_t v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  CommonMessageManager_o *v133; // [xsp+0h] [xbp-90h]
  _WORD v138[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v133 = this;
  if ( (byte_4C39678 & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&StringLiteral_17997/*"clear"*/);
    sub_1C32C20(&StringLiteral_19537/*"font"*/);
    sub_1C32C20(&StringLiteral_19346/*"f"*/);
    sub_1C32C20(&StringLiteral_23592/*"speed"*/);
    sub_1C32C20(&StringLiteral_21096/*"k"*/);
    sub_1C32C20(&StringLiteral_22840/*"q"*/);
    sub_1C32C20(&StringLiteral_24706/*"voiceStop"*/);
    sub_1C32C20(&StringLiteral_17144/*"bgm"*/);
    sub_1C32C20(&StringLiteral_17146/*"bgmStop"*/);
    sub_1C32C20(&StringLiteral_24856/*"wt"*/);
    sub_1C32C20(&StringLiteral_23227/*"seStop"*/);
    sub_1C32C20(&StringLiteral_22610/*"page"*/);
    sub_1C32C20(&StringLiteral_24713/*"wait"*/);
    sub_1C32C20(&StringLiteral_19004/*"end"*/);
    sub_1C32C20(&StringLiteral_21080/*"jingle"*/);
    sub_1C32C20(&StringLiteral_23218/*"se"*/);
    sub_1C32C20(&StringLiteral_21154/*"l"*/);
    sub_1C32C20(&StringLiteral_24700/*"voice"*/);
    sub_1C32C20(&StringLiteral_24068/*"time "*/);
    sub_1C32C20(&StringLiteral_19542/*"fontSize"*/);
    sub_1C32C20(&StringLiteral_23225/*"seLoop"*/);
    sub_1C32C20(&StringLiteral_341/*"\""*/);
    sub_1C32C20(&StringLiteral_15998/*"[r]"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23171/*"s"*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    sub_1C32C20(&StringLiteral_17132/*"betweenHeight"*/);
    sub_1C32C20(&StringLiteral_21081/*"jingleStop"*/);
    sub_1C32C20(&StringLiteral_23566/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C39678 = 1;
  }
  v138[0] = 0;
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
        v138[0] = Chars;
        if ( Chars == 91 )
          break;
        v22 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v23 = System_Char__ToString((uint16_t)v138, 0);
        v12 = System_String__Concat_63518544(v12, v23, 0);
        if ( v22 == 34 )
        {
          if ( v13 < stringLength )
          {
            while ( 1 )
            {
              v24 = v13 + 1;
              v138[0] = System_String__get_Chars(analysData, v13, 0);
              if ( v138[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v25 = System_Char__ToString((uint16_t)v138, 0);
              v12 = System_String__Concat_63518544(v12, v25, 0);
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
          v12 = System_String__Concat_63518544(v12, (System_String_o *)StringLiteral_341/*"\""*/, 0);
        }
        if ( v13 >= stringLength )
        {
          v115 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = (CommonMessageManager_o *)*tagDataList;
        if ( !*tagDataList )
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 32), 0, v16, v17);
        }
        if ( !v12 )
          goto LABEL_234;
        v26 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_63565092(
                                           v12,
                                           v133->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_15998/*"[r]"*/,
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
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
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
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
          v138[0] = v41;
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
          v43 = System_Char__ToString((uint16_t)v138, 0);
          v37 = System_String__Concat_63518544(v37, v43, 0);
          if ( v138[0] == 34 )
          {
            if ( v13 < stringLength )
            {
              while ( 1 )
              {
                v44 = v13 + 1;
                v138[0] = System_String__get_Chars(analysData, v13, 0);
                if ( v138[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v45 = System_Char__ToString((uint16_t)v138, 0);
                v37 = System_String__Concat_63518544(v37, v45, 0);
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
            v37 = System_String__Concat_63518544(v37, (System_String_o *)StringLiteral_341/*"\""*/, 0);
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
                v74 = &StringLiteral_22840/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v74, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = (CommonMessageManager_o *)*tagDataList;
                  if ( !*tagDataList )
                    goto LABEL_234;
                  v75 = this->fields.m_CachedPtr;
                  v76 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v75 )
                    goto LABEL_234;
                  v77 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v78 = v75 + 8 * v77;
                    LODWORD(this->fields.m_CancellationTokenSource) = v77 + 1;
                    *(_QWORD *)(v78 + 32) = 0;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 32), 0, v46, v47);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  v94 = (Il2CppObject *)StringLiteral_15998/*"[r]"*/;
                  v95 = this->fields.m_CachedPtr;
                  v96 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v95 )
                    goto LABEL_234;
                  v97 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      v94,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v98 = v95 + 8 * v97;
                    LODWORD(this->fields.m_CancellationTokenSource) = v97 + 1;
                    *(_QWORD *)(v98 + 32) = v94;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v98 + 32), (int32_t)v94, v79, v80);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v101 = this->fields.m_CachedPtr;
                  v102 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v101 )
                    goto LABEL_234;
                  v103 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_377B798 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v103 + 1;
                    *(_DWORD *)(v101 + 4 * v103 + 32) = line;
                  }
                  this = (CommonMessageManager_o *)*tagDataList;
                  if ( !*tagDataList )
                    goto LABEL_234;
                  v104 = this->fields.m_CachedPtr;
                  v105 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v104 )
                    goto LABEL_234;
                  v106 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v106 >= *(_DWORD *)(v104 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v38,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v107 = v104 + 8 * v106;
                    LODWORD(this->fields.m_CancellationTokenSource) = v106 + 1;
                    *(_QWORD *)(v107 + 32) = v38;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v107 + 32), (int32_t)v38, v99, v100);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  v72 = (Il2CppObject *)StringLiteral_1/*""*/;
                  v108 = this->fields.m_CachedPtr;
                  v109 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v108 )
                    goto LABEL_234;
                  v110 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v110 < *(_DWORD *)(v108 + 24) )
                  {
                    v111 = v108 + 8 * v110;
                    LODWORD(this->fields.m_CancellationTokenSource) = v110 + 1;
                    *(_QWORD *)(v111 + 32) = v72;
                    v71 = (CGThumbnailListItem_o *)(v111 + 32);
                    goto LABEL_168;
                  }
                  v73 = v109[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v48 = &StringLiteral_23171/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v74 = &StringLiteral_21096/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v48 = &StringLiteral_21080/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v48 = &StringLiteral_24706/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v48 = &StringLiteral_19346/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v48 = &StringLiteral_21154/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v48 = &StringLiteral_24713/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v48 = &StringLiteral_17132/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v48 = &StringLiteral_19542/*"fontSize"*/;
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
              v54 = &StringLiteral_22610/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v48 = &StringLiteral_24700/*"voice"*/;
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
              v48 = &StringLiteral_19004/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v48 = &StringLiteral_23566/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v48, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_234;
                v61 = v38->fields._stringLength + 1;
                v62 = v37->fields._stringLength <= v61
                    ? (System_String_o *)StringLiteral_1/*""*/
                    : System_String__Substring(v37, v61, 0);
                this = (CommonMessageManager_o *)*tagDataList;
                if ( !*tagDataList )
                  goto LABEL_234;
                v63 = this->fields.m_CachedPtr;
                v64 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v63 )
                  goto LABEL_234;
                v65 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v66 = v63 + 8 * v65;
                  LODWORD(this->fields.m_CancellationTokenSource) = v65 + 1;
                  *(_QWORD *)(v66 + 32) = v38;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 32), (int32_t)v38, v46, v47);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v67 = this->fields.m_CachedPtr;
                v68 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v67 )
                  goto LABEL_234;
                v69 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v69 < *(_DWORD *)(v67 + 24) )
                {
                  v70 = v67 + 8 * v69;
                  LODWORD(this->fields.m_CancellationTokenSource) = v69 + 1;
                  *(_QWORD *)(v70 + 32) = v62;
                  v71 = (CGThumbnailListItem_o *)(v70 + 32);
                  LODWORD(v72) = (_DWORD)v62;
LABEL_168:
                  sub_1C32BC4(v71, (int32_t)v72, v59, v60);
                  goto LABEL_171;
                }
                v73 = v68[4];
                v72 = (Il2CppObject *)v62;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v48 = &StringLiteral_23592/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v54 = &StringLiteral_17997/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v54, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (CommonMessageManager_o *)*tagDataList;
                if ( !*tagDataList )
                  goto LABEL_234;
                v55 = this->fields.m_CachedPtr;
                v56 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v55 )
                  goto LABEL_234;
                v57 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                }
                else
                {
                  v58 = v55 + 8 * v57;
                  LODWORD(this->fields.m_CancellationTokenSource) = v57 + 1;
                  *(_QWORD *)(v58 + 32) = v38;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v38, v46, v47);
                }
                if ( !v37 )
                  goto LABEL_234;
                v93 = v38->fields._stringLength;
                v85 = *scriptDataList;
                if ( v37->fields._stringLength <= v93 + 1 )
                {
                  v72 = (Il2CppObject *)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v37, v93 + 1, 0);
                  v72 = (Il2CppObject *)this;
                }
                if ( !v85 )
                  goto LABEL_234;
                v86 = v85->fields._items;
                v87 = Method_System_Collections_Generic_List_string__Add__;
                ++v85->fields._version;
                if ( !v86 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v48 = &StringLiteral_17144/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v48 = &StringLiteral_21081/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v48 = &StringLiteral_23218/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v48 = &StringLiteral_23225/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)StringLiteral_24856/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonMessageManager_o *)*tagDataList;
              if ( !*tagDataList )
                goto LABEL_234;
              v49 = (Il2CppObject *)StringLiteral_24713/*"wait"*/;
              v50 = this->fields.m_CachedPtr;
              v51 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v50 )
                goto LABEL_234;
              v52 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  v49,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v53 = v50 + 8 * v52;
                LODWORD(this->fields.m_CancellationTokenSource) = v52 + 1;
                *(_QWORD *)(v53 + 32) = v49;
                sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 32), (int32_t)v49, v46, v47);
              }
              if ( !v37 )
                goto LABEL_234;
              v112 = v38->fields._stringLength;
              v85 = *scriptDataList;
              v113 = (System_String_o *)StringLiteral_24068/*"time "*/;
              v114 = v37->fields._stringLength <= v112 + 1
                   ? (System_String_o *)StringLiteral_1122/*"0"*/
                   : System_String__Substring(v37, v112 + 1, 0);
              this = (CommonMessageManager_o *)System_String__Concat_63518544(v113, v114, 0);
              if ( !v85 )
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
            v48 = &StringLiteral_19537/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v48 = &StringLiteral_23227/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v48 = &StringLiteral_17146/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = (CommonMessageManager_o *)*tagDataList;
      if ( !*tagDataList )
        goto LABEL_234;
      v81 = this->fields.m_CachedPtr;
      v82 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v81 )
        goto LABEL_234;
      v83 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = v81 + 8 * v83;
        LODWORD(this->fields.m_CancellationTokenSource) = v83 + 1;
        *(_QWORD *)(v84 + 32) = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)(v84 + 32), 0, v46, v47);
      }
      v85 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_63556792(
                                         (System_String_o *)StringLiteral_15802/*"["*/,
                                         v37,
                                         (System_String_o *)StringLiteral_16056/*"]"*/,
                                         0);
      if ( !v85 )
        goto LABEL_234;
LABEL_164:
      v86 = v85->fields._items;
      v87 = Method_System_Collections_Generic_List_string__Add__;
      ++v85->fields._version;
      if ( !v86 )
        goto LABEL_234;
      v72 = (Il2CppObject *)this;
LABEL_166:
      v88 = v85->fields._size;
      if ( (unsigned int)v88 < LODWORD(v86->max_length) )
      {
        v89 = &v86->obj.klass + v88;
        v85->fields._size = v88 + 1;
        v89[4] = (Il2CppClass *)v72;
        v71 = (CGThumbnailListItem_o *)(v89 + 4);
        goto LABEL_168;
      }
      v73 = v87[4];
      this = (CommonMessageManager_o *)v85;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v72,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v73 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v90 = this->fields.m_CachedPtr;
      v91 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v90 )
        goto LABEL_234;
      v92 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v92 + 1;
        *(_DWORD *)(v90 + 4 * v92 + 32) = line;
      }
LABEL_176:
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      v115 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
        goto LABEL_215;
    }
  }
  v115 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v115, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = (CommonMessageManager_o *)*tagDataList;
      if ( *tagDataList )
      {
        v118 = this->fields.m_CachedPtr;
        v119 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v118 )
        {
          v120 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
          }
          else
          {
            v121 = v118 + 8 * v120;
            LODWORD(this->fields.m_CancellationTokenSource) = v120 + 1;
            *(_QWORD *)(v121 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v121 + 32), 0, v116, v117);
          }
          if ( v12 )
          {
            v122 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_63565092(
                                               v12,
                                               v133->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_15998/*"[r]"*/,
                                               0);
            if ( v122 )
            {
              v125 = v122->fields._items;
              v126 = Method_System_Collections_Generic_List_string__Add__;
              ++v122->fields._version;
              if ( v125 )
              {
                v127 = v122->fields._size;
                v128 = this;
                if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v122,
                    (Il2CppObject *)this,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
                }
                else
                {
                  v129 = &v125->obj.klass + v127;
                  v122->fields._size = v127 + 1;
                  v129[4] = (Il2CppClass *)v128;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v128, v123, v124);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v130 = this->fields.m_CachedPtr;
                  v131 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v130 )
                  {
                    v132 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_377B798 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v132 + 1;
                      *(_DWORD *)(v130 + 4 * v132 + 32) = line;
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
    sub_1C32E7C(this);
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
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_4C39675 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11484/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1C32C20(&StringLiteral_11494/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1C32C20(&StringLiteral_11487/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1C32C20(&StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4C39675 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11484/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.codeTalkString, (int32_t)v6, v7, v8);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11494/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.codeVoiceString, (int32_t)v9, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.codeReturnString, (int32_t)v12, v13, v14);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
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
  if ( (byte_4C3967A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21550/*"messageOn"*/);
    sub_1C32C20(&StringLiteral_17997/*"clear"*/);
    sub_1C32C20(&StringLiteral_19537/*"font"*/);
    sub_1C32C20(&StringLiteral_22615/*"page3"*/);
    sub_1C32C20(&StringLiteral_21548/*"messageOff"*/);
    sub_1C32C20(&StringLiteral_22614/*"page2"*/);
    sub_1C32C20(&StringLiteral_19346/*"f"*/);
    sub_1C32C20(&StringLiteral_23592/*"speed"*/);
    sub_1C32C20(&StringLiteral_21096/*"k"*/);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_22840/*"q"*/);
    sub_1C32C20(&StringLiteral_22629/*"parameter error"*/);
    sub_1C32C20(&StringLiteral_24132/*"touch2"*/);
    sub_1C32C20(&StringLiteral_22610/*"page"*/);
    sub_1C32C20(&StringLiteral_24713/*"wait"*/);
    sub_1C32C20(&StringLiteral_22628/*"parameter be unnecessary"*/);
    sub_1C32C20(&StringLiteral_19004/*"end"*/);
    sub_1C32C20(&StringLiteral_21540/*"message2"*/);
    sub_1C32C20(&StringLiteral_21154/*"l"*/);
    sub_1C32C20(&StringLiteral_19542/*"fontSize"*/);
    sub_1C32C20(&StringLiteral_21536/*"message"*/);
    sub_1C32C20(&StringLiteral_23980/*"talkName"*/);
    sub_1C32C20(&StringLiteral_24130/*"touch"*/);
    sub_1C32C20(&StringLiteral_21541/*"message3"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23171/*"s"*/);
    sub_1C32C20(&StringLiteral_17132/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1C32C20(&StringLiteral_17999/*"clear2"*/);
    byte_4C3967A = 1;
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
        sub_1C32E7C(this);
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
                                                 (System_String_o *)StringLiteral_22840/*"q"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v29 = &StringLiteral_23171/*"s"*/;
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
                                                     (System_String_o *)StringLiteral_861/*"-"*/,
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
                  v17 = &StringLiteral_22629/*"parameter error"*/;
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
              v25 = &StringLiteral_21154/*"l"*/;
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
                                                     (System_String_o *)StringLiteral_861/*"-"*/,
                                                     0);
                  v39 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
LABEL_189:
                      sub_1C32E84(this);
                    v39 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v17 = &StringLiteral_22629/*"parameter error"*/;
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
                                                 (System_String_o *)StringLiteral_21096/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v17 = &StringLiteral_22628/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v30 = &StringLiteral_24130/*"touch"*/;
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
              v34 = &StringLiteral_19542/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v34 = &StringLiteral_19346/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24713/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v17 = &StringLiteral_22629/*"parameter error"*/;
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
            v25 = &StringLiteral_17132/*"betweenHeight"*/;
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
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22610/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22628/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v30 = &StringLiteral_22610/*"page"*/;
LABEL_150:
              v22 = (System_String_o *)*v30;
              v5->fields.waitType = (struct System_String_o *)*v30;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21548/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22629/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19004/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22628/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v29 = &StringLiteral_23592/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v34 = &StringLiteral_19537/*"font"*/;
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
              v17 = &StringLiteral_22629/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_17997/*"clear"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22628/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v30 = &StringLiteral_17997/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_23980/*"talkName"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = (CGThumbnailListItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21550/*"messageOn"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v17 = &StringLiteral_22629/*"parameter error"*/;
          if ( v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
          v5->fields.state = 4;
          v18 = StringLiteral_21536/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21536/*"message"*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.waitType, v18, v19, v20);
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
        v44 = StringLiteral_21536/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21536/*"message"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.waitType, v44, (int32_t)v3, v16);
        v5->fields.waitMessage = v13;
        v21 = (CGThumbnailListItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v22) = (_DWORD)v13;
LABEL_156:
        sub_1C32BC4(v21, (int32_t)v22, (int32_t)v3, v16);
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
          if ( v24 == 1770621400 && System_String__op_Equality(v23, (System_String_o *)StringLiteral_24130/*"touch"*/, 0) )
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
            v49 = &StringLiteral_24132/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_17997/*"clear"*/, 0) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v33 = &StringLiteral_17999/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21536/*"message"*/, 0) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v33 = &StringLiteral_21540/*"message2"*/;
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
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21541/*"message3"*/, 0) || v5->fields.isScroll )
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
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_24132/*"touch2"*/, 0)
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
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22610/*"page"*/, 0) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v33 = &StringLiteral_22614/*"page2"*/;
LABEL_120:
      v28 = *v33;
      *p_waitType = (System_String_o *)*v33;
LABEL_121:
      sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.waitType, v28, (int32_t)v26, v27);
      goto LABEL_171;
    }
    if ( v24 != -1857654992
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_17999/*"clear2"*/, 0)
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
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22615/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v24 == -16520990 )
  {
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21540/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v28) = StringLiteral_21541/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21541/*"message3"*/;
    goto LABEL_121;
  }
  if ( v24 == -353306356
    && System_String__op_Equality(v23, (System_String_o *)StringLiteral_22614/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v49 = &StringLiteral_22615/*"page3"*/;
LABEL_188:
    v50 = *v49;
    v5->fields.waitType = (struct System_String_o *)*v49;
    sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.waitType, v50, v47, v48);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void CommonMessageManager__SetLongPressCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.longPressCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.longPressCallbackFunc, (int32_t)callback, (int32_t)method, v3);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v9, v10);
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

  if ( (byte_4C39676 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    byte_4C39676 = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.touchCallbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}