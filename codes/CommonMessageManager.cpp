void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageManager_c *v3; // x0

  if ( (byte_593A3CF & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageManager_TypeInfo);
    byte_593A3CF = 1;
  }
  v3 = ScriptMessageManager_TypeInfo;
  this->fields.playSpeed = 2;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
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
  int32_t v7; // w25
  int32_t v8; // w1
  uint16_t Chars; // w0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int v12; // w21
  __int64 v13; // x1
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int size; // w8
  __int64 v22; // x1
  Il2CppObject *Item; // x0
  int32_t v24; // w21
  System_String_o *v25; // x0
  Il2CppObject *v26; // x2
  System_String_o *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int v43; // w8
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_String_o *v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  _WORD v68[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_593A3CD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_1824/*"="*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    this = (CommonMessageManager_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A3CD = 1;
  }
  v68[0] = 0;
  if ( !v3 )
    goto LABEL_73;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(v3, v8, 0);
      v68[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_29;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_33;
        if ( !v5 )
          goto LABEL_73;
        size = v5->fields._size;
        v22 = (unsigned int)(size - 1);
        if ( size < 1 )
          goto LABEL_52;
        Item = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v22,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_113/*" "*/, 0) )
          goto LABEL_52;
        v24 = v5->fields._size;
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v22);
        v25 = System_Char__ToString((uint16_t)v68, 0);
        if ( v25 )
          v26 = (Il2CppObject *)v25;
        else
          v26 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v24 - 1,
          v26,
          (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v10);
            v11 = System_Char__ToString((uint16_t)v68, 0);
            v6 = System_String__Concat_75438412(v6, v11, 0);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v12 = v7 + 1;
                v68[0] = System_String__get_Chars(v3, v7, 0);
                if ( v68[0] == 34 )
                  break;
                if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                  j_il2cpp_runtime_class_init_0(qword_594C0B0, v13);
                v14 = System_Char__ToString((uint16_t)v68, 0);
                v6 = System_String__Concat_75438412(v6, v14, 0);
                ++v7;
                if ( stringLength == v12 )
                {
                  v7 = stringLength;
                  goto LABEL_62;
                }
              }
              ++v7;
            }
LABEL_62:
            v27 = (System_String_o *)StringLiteral_366/*"\""*/;
          }
          else
          {
LABEL_29:
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v10);
            v27 = System_Char__ToString((uint16_t)v68, 0);
          }
          v6 = System_String__Concat_75438412(v6, v27, 0);
          goto LABEL_64;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_33:
          if ( !v5 )
            goto LABEL_73;
          items = v5->fields._items;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_73;
          v30 = v5->fields._size;
          if ( (unsigned int)v30 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v6,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + v30;
            v5->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v6, v15, v16, v17, v18, v19, v20);
          }
          if ( !*(_DWORD *)(qword_594C0B0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_594C0B0, v32);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v68, 0);
          v39 = v5->fields._items;
          v40 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v39 )
            goto LABEL_73;
          v41 = v5->fields._size;
          if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &v39->obj.klass + v41;
            v5->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)data;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)data, v33, v34, v35, v36, v37, v38);
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
        if ( !v5 )
          goto LABEL_73;
        v43 = v5->fields._size;
        v22 = (unsigned int)(v43 - 1);
        if ( v43 < 1
          || (v44 = System_Collections_Generic_List_object___get_Item(
                      v5,
                      v22,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)v44, (System_String_o *)StringLiteral_1824/*"="*/, 0))
          && (v45 = System_Collections_Generic_List_object___get_Item(
                      v5,
                      v5->fields._size - 1,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)v45, (System_String_o *)StringLiteral_869/*","*/, 0)) )
        {
LABEL_52:
          if ( !*(_DWORD *)(qword_594C0B0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_594C0B0, v22);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v68, 0);
          v52 = v5->fields._items;
          v53 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v52 )
            goto LABEL_73;
          v54 = v5->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v5->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)data;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)data, v46, v47, v48, v49, v50, v51);
          }
        }
      }
LABEL_64:
      if ( v7 >= stringLength )
      {
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_67;
      }
    }
  }
  v56 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_67:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v56, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_73:
    sub_21FFECC(this, data);
  }
  if ( !v5 )
    goto LABEL_73;
  v63 = v5->fields._items;
  v64 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v63 )
    goto LABEL_73;
  v65 = v5->fields._size;
  if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v5->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 4), (int32_t)v6, v57, v58, v59, v60, v61, v62);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  System_String_array *v10; // x24
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  System_String_o **v17; // x5
  bool v18; // w6
  bool v19; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v21; // x23
  System_String_o *v22; // x28
  System_String_o *v23; // x26
  System_String_o *v24; // x27
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
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
  struct System_Object_array *v47; // x8
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x8
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppObject *v84; // x1
  Il2CppClass **v85; // x0
  MissionNaviTransitionBoardItem_o *v86; // x0
  __int64 v87; // x8
  System_Collections_Generic_List_object__o *v88; // x0
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  struct System_Int32_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  _QWORD *v110; // x9
  struct System_Object_array *v111; // x8
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  struct System_Int32_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  struct System_String_array *v134; // x0
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  struct System_String_array *v141; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct System_Int32_array *v148; // x0
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v156; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+10h] [xbp-90h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_593A3CB & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_21FFC50(&StringLiteral_395/*"#"*/);
    sub_21FFC50(&StringLiteral_1126/*"//"*/);
    sub_21FFC50(&StringLiteral_21012/*"i"*/);
    sub_21FFC50(&StringLiteral_22117/*"k"*/);
    sub_21FFC50(&StringLiteral_23987/*"q"*/);
    sub_21FFC50(&StringLiteral_506/*"%"*/);
    sub_21FFC50(&StringLiteral_528/*"&"*/);
    sub_21FFC50(&StringLiteral_22271/*"line"*/);
    sub_21FFC50(&StringLiteral_25216/*"talkStart"*/);
    sub_21FFC50(&StringLiteral_21225/*"image"*/);
    sub_21FFC50(&StringLiteral_16600/*"[r]"*/);
    sub_21FFC50(&StringLiteral_25212/*"talkName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A3CB = 1;
  }
  scriptDataList = 0;
  tagDataList = 0;
  lineDataList = 0;
  lastMessageIndex = 0;
  v5 = (System_Array_o *)sub_21FFD10(char___TypeInfo, 5);
  v6.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v7 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v5, v6, 0);
  if ( !scriptData )
    goto LABEL_137;
  v10 = System_String__Split_75492796(scriptData, v7, 1, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v12;
  v13 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v13;
  lastMessageIndex = -1;
  if ( !v10 )
    goto LABEL_137;
  max_length = v10->max_length;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    a = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_21FFED4(v8);
      v22 = v10->m_Items[v21];
      if ( !v22 )
        goto LABEL_137;
      if ( v22->fields._stringLength >= 1 )
      {
        v23 = (System_String_o *)StringLiteral_1/*""*/;
        v8 = (System_String_o *)System_String__StartsWith(v10->m_Items[v21], (System_String_o *)StringLiteral_1126/*"//"*/, 0);
        if ( ((unsigned __int8)v8 & 1) == 0 )
        {
          v8 = (System_String_o *)System_String__StartsWith(v22, this->fields.codeCommentString, 0);
          if ( ((unsigned __int8)v8 & 1) == 0 )
            break;
        }
      }
LABEL_112:
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v21 >= (int)max_length )
        goto LABEL_115;
    }
    if ( System_String__StartsWith(v22, this->fields.codeTalkString, 0) )
    {
      v24 = (System_String_o *)StringLiteral_25212/*"talkName"*/;
      v23 = System_String__Substring(v22, 1, 0);
      if ( v24 )
      {
        v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_22117/*"k"*/, 0);
        if ( ((unsigned __int8)v8 & 1) != 0
          || (v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_23987/*"q"*/, 0),
              ((unsigned __int8)v8 & 1) != 0) )
        {
          if ( (lastMessageIndex & 0x80000000) == 0 )
          {
            if ( !v11 )
              goto LABEL_137;
            items = v11->fields._items;
            v32 = Method_System_Collections_Generic_List_string__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_137;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                0,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v34[4] = 0;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), 0, v25, v26, v27, v28, v29, v30);
            }
            if ( !v12 )
              goto LABEL_137;
            v57 = v12->fields._items;
            v9 = (Il2CppObject *)StringLiteral_16600/*"[r]"*/;
            v58 = Method_System_Collections_Generic_List_string__Add__;
            ++v12->fields._version;
            if ( !v57 )
              goto LABEL_137;
            v59 = v12->fields._size;
            if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &v57->obj.klass + v59;
              v12->fields._size = v59 + 1;
              v60[4] = (Il2CppClass *)v9;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v9, v35, v36, v37, v38, v39, v40);
            }
            if ( !v13 )
              goto LABEL_137;
            v61 = v13->fields._items;
            v62 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v61 )
              goto LABEL_137;
            v63 = v13->fields._size;
            if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v21 + 1,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v63 + 1;
              v61->m_Items[v63] = v21 + 1;
            }
            lastMessageIndex = -1;
            goto LABEL_96;
          }
        }
        else if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_25212/*"talkName"*/, 0) )
        {
          v8 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_25212/*"talkName"*/, 0);
          v56 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v8 & 1) != 0 )
            v56 = v23;
          a = v56;
        }
        else if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_21012/*"i"*/, 0)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_21225/*"image"*/, 0)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_22271/*"line"*/, 0)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_506/*"%"*/, 0)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_528/*"&"*/, 0)
               || (v8 = (System_String_o *)System_String__StartsWith(v24, (System_String_o *)StringLiteral_395/*"#"*/, 0),
                   ((unsigned __int8)v8 & 1) != 0) )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( ((unsigned __int8)v8 & 1) != 0 && lastMessageIndex < 0 )
          {
            if ( !v11 )
              goto LABEL_137;
            v89 = v11->fields._items;
            v9 = (Il2CppObject *)StringLiteral_25216/*"talkStart"*/;
            v90 = Method_System_Collections_Generic_List_string__Add__;
            ++v11->fields._version;
            if ( !v89 )
              goto LABEL_137;
            v91 = v11->fields._size;
            if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v92 = &v89->obj.klass + v91;
              v11->fields._size = v91 + 1;
              v92[4] = (Il2CppClass *)v9;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v92 + 4), (int32_t)v9, v25, v26, v27, v28, v29, v30);
            }
            if ( !v12 )
              goto LABEL_137;
            v99 = v12->fields._items;
            v9 = (Il2CppObject *)StringLiteral_1/*""*/;
            v100 = Method_System_Collections_Generic_List_string__Add__;
            ++v12->fields._version;
            if ( !v99 )
              goto LABEL_137;
            v101 = v12->fields._size;
            if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
            }
            else
            {
              v102 = &v99->obj.klass + v101;
              v12->fields._size = v101 + 1;
              v102[4] = (Il2CppClass *)v9;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v102 + 4), (int32_t)v9, v93, v94, v95, v96, v97, v98);
            }
            if ( !v13 )
              goto LABEL_137;
            v103 = v13->fields._items;
            v104 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v103 )
              goto LABEL_137;
            v105 = v13->fields._size;
            if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v21 + 1,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v105 + 1;
              v103->m_Items[v105] = v21 + 1;
            }
          }
          else if ( !v12 )
          {
            goto LABEL_137;
          }
          lastMessageIndex = v12->fields._size;
        }
        if ( !v11 )
          goto LABEL_137;
LABEL_96:
        v106 = v11->fields._items;
        v107 = Method_System_Collections_Generic_List_string__Add__;
        ++v11->fields._version;
        if ( !v106 )
          goto LABEL_137;
        v108 = v11->fields._size;
        if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v24,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = &v106->obj.klass + v108;
          v11->fields._size = v108 + 1;
          v109[4] = (Il2CppClass *)v24;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v109 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
        }
        if ( !v12 )
          goto LABEL_137;
        v110 = Method_System_Collections_Generic_List_string__Add__;
        v111 = v12->fields._items;
        ++v12->fields._version;
        if ( !v111 )
          goto LABEL_137;
        v112 = v12->fields._size;
        if ( (unsigned int)v112 < LODWORD(v111->max_length) )
        {
          v113 = &v111->obj.klass + v112;
          LODWORD(v84) = (_DWORD)v23;
          v12->fields._size = v112 + 1;
          v113[4] = (Il2CppClass *)v23;
          v86 = (MissionNaviTransitionBoardItem_o *)(v113 + 4);
          goto LABEL_104;
        }
        v87 = v110[4];
        v88 = v12;
        v84 = (Il2CppObject *)v23;
        goto LABEL_106;
      }
    }
    else
    {
      v8 = (System_String_o *)System_String__StartsWith(v22, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_112;
      CommonMessageManager__AnalysText(
        this,
        &tagDataList,
        &scriptDataList,
        &lineDataList,
        &lastMessageIndex,
        v17,
        v22,
        v21 + 1,
        v156);
    }
    v8 = (System_String_o *)System_String__op_Inequality(v23, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
      goto LABEL_112;
    v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 && lastMessageIndex < 0 )
    {
      if ( !v11 )
        goto LABEL_137;
      v47 = v11->fields._items;
      v9 = (Il2CppObject *)StringLiteral_25216/*"talkStart"*/;
      ++v11->fields._version;
      if ( !v47 )
        goto LABEL_137;
      v48 = v11->fields._size;
      if ( (unsigned int)v48 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v9,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_string__Add__ + 4)
                                                   + 192LL)
                                       + 112LL));
      }
      else
      {
        v49 = &v47->obj.klass + v48;
        v11->fields._size = v48 + 1;
        v49[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v9, v41, v42, v43, v44, v45, v46);
      }
      if ( !v12 )
        goto LABEL_137;
      v64 = v12->fields._items;
      v9 = (Il2CppObject *)StringLiteral_1/*""*/;
      v65 = Method_System_Collections_Generic_List_string__Add__;
      ++v12->fields._version;
      if ( !v64 )
        goto LABEL_137;
      v66 = v12->fields._size;
      if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v9,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        v12->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v9, v50, v51, v52, v53, v54, v55);
      }
      if ( !v13 )
        goto LABEL_137;
      v68 = v13->fields._items;
      v69 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !v68 )
        goto LABEL_137;
      v70 = v13->fields._size;
      if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          v21 + 1,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = v70 + 1;
        v68->m_Items[v70] = v21 + 1;
      }
    }
    else if ( !v11 )
    {
      goto LABEL_137;
    }
    v71 = v11->fields._items;
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v71 )
      goto LABEL_137;
    v73 = v11->fields._size;
    if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        0,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v71->obj.klass + v73;
      v11->fields._size = v73 + 1;
      v74[4] = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), 0, v41, v42, v43, v44, v45, v46);
    }
    if ( !v12 )
      goto LABEL_137;
    lastMessageIndex = v12->fields._size;
    if ( !v23 )
      goto LABEL_137;
    v8 = System_String__Replace_75490096(v23, this->fields.codeReturnString, (System_String_o *)StringLiteral_16600/*"[r]"*/, 0);
    v81 = v12->fields._items;
    v82 = Method_System_Collections_Generic_List_string__Add__;
    ++v12->fields._version;
    if ( !v81 )
      goto LABEL_137;
    v83 = v12->fields._size;
    v84 = (Il2CppObject *)v8;
    if ( (unsigned int)v83 < LODWORD(v81->max_length) )
    {
      v85 = &v81->obj.klass + v83;
      v12->fields._size = v83 + 1;
      v85[4] = (Il2CppClass *)v84;
      v86 = (MissionNaviTransitionBoardItem_o *)(v85 + 4);
LABEL_104:
      sub_21FFBF4(v86, (int32_t)v84, v75, v76, v77, v78, v79, v80);
      goto LABEL_107;
    }
    v87 = v82[4];
    v88 = v12;
LABEL_106:
    System_Collections_Generic_List_object___AddWithResize(
      v88,
      v84,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87 + 192) + 112LL));
LABEL_107:
    if ( !v13 )
      goto LABEL_137;
    v114 = v13->fields._items;
    v115 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v114 )
      goto LABEL_137;
    v116 = v13->fields._size;
    if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v21 + 1,
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v116 + 1;
      v114->m_Items[v116] = v21 + 1;
    }
    goto LABEL_112;
  }
  LODWORD(v21) = 0;
LABEL_115:
  if ( (lastMessageIndex & 0x80000000) == 0 )
  {
    if ( v11 )
    {
      v117 = v11->fields._items;
      v118 = Method_System_Collections_Generic_List_string__Add__;
      ++v11->fields._version;
      if ( v117 )
      {
        v119 = v11->fields._size;
        if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
        }
        else
        {
          v120 = &v117->obj.klass + v119;
          v11->fields._size = v119 + 1;
          v120[4] = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v120 + 4), 0, v14, v15, v16, (int32_t)v17, v18, v19);
        }
        if ( v12 )
        {
          v127 = v12->fields._items;
          v9 = (Il2CppObject *)StringLiteral_16600/*"[r]"*/;
          v128 = Method_System_Collections_Generic_List_string__Add__;
          ++v12->fields._version;
          if ( v127 )
          {
            v129 = v12->fields._size;
            if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
            }
            else
            {
              v130 = &v127->obj.klass + v129;
              v12->fields._size = v129 + 1;
              v130[4] = (Il2CppClass *)v9;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v130 + 4),
                (int32_t)v9,
                v121,
                v122,
                v123,
                v124,
                v125,
                v126);
            }
            if ( v13 )
            {
              v131 = v13->fields._items;
              v132 = Method_System_Collections_Generic_List_int__Add__;
              ++v13->fields._version;
              if ( v131 )
              {
                v133 = v13->fields._size;
                if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v13,
                    v21,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                }
                else
                {
                  v13->fields._size = v133 + 1;
                  v131->m_Items[v133] = v21;
                }
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
LABEL_137:
    sub_21FFECC(v8, v9);
  }
  if ( !v11 )
    goto LABEL_137;
LABEL_133:
  v134 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v134;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeTagList,
    (int32_t)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  if ( !v12 )
    goto LABEL_137;
  v141 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v12,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeDataList = v141;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeDataList,
    (int32_t)v141,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  if ( !v13 )
    goto LABEL_137;
  v148 = System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.executeLineList = v148;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeLineList,
    (int32_t)v148,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  executeDataList = this->fields.executeDataList;
  if ( !executeDataList )
    goto LABEL_137;
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
  int32_t stringLength; // w24
  System_String_o *v12; // x27
  int32_t v13; // w29
  int32_t v14; // w1
  uint16_t Chars; // w0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  System_String_o *v27; // x0
  int v28; // w22
  __int64 v29; // x1
  System_String_o *v30; // x0
  System_String_o *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x28
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  CommonMessageManager_o *v42; // x1
  Il2CppClass **v43; // x0
  intptr_t v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  System_String_o *v47; // x27
  System_String_o *v48; // x28
  int v49; // w22
  int32_t v50; // w1
  uint16_t v51; // w0
  __int64 v52; // x1
  System_String_o *v54; // x0
  int v55; // w26
  __int64 v56; // x1
  System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 *v64; // x8
  intptr_t v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  intptr_t v68; // x8
  __int64 *v69; // x8
  intptr_t v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  intptr_t v73; // x8
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_string__o **v80; // x27
  intptr_t v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  intptr_t v84; // x8
  intptr_t v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  intptr_t v88; // x8
  MissionNaviTransitionBoardItem_o *v89; // x8
  MissionNaviTransitionBoardItem_o *v90; // x0
  __int64 v91; // x8
  __int64 *v92; // x8
  intptr_t v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  intptr_t v96; // x8
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  intptr_t v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  intptr_t v106; // x8
  System_Collections_Generic_List_string__o *v107; // x28
  struct System_String_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  intptr_t v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  int32_t v115; // w8
  intptr_t v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  intptr_t v119; // x8
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  intptr_t v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  intptr_t v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  intptr_t v132; // x8
  intptr_t v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  intptr_t v136; // x8
  int32_t v137; // w8
  System_String_o *v138; // x26
  System_String_o *v139; // x1
  System_String_o *v140; // x1
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  intptr_t v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  intptr_t v150; // x8
  System_Collections_Generic_List_object__o *v151; // x21
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  CommonMessageManager_o *v161; // x1
  Il2CppClass **v162; // x0
  intptr_t v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  CommonMessageManager_o *v166; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v170; // [xsp+20h] [xbp-70h]
  _WORD v171[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v166 = this;
  v170 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_593A3CC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&StringLiteral_18754/*"clear"*/);
    sub_21FFC50(&StringLiteral_20428/*"font"*/);
    sub_21FFC50(&StringLiteral_20204/*"f"*/);
    sub_21FFC50(&StringLiteral_24802/*"speed"*/);
    sub_21FFC50(&StringLiteral_22117/*"k"*/);
    sub_21FFC50(&StringLiteral_23987/*"q"*/);
    sub_21FFC50(&StringLiteral_26033/*"voiceStop"*/);
    sub_21FFC50(&StringLiteral_17844/*"bgm"*/);
    sub_21FFC50(&StringLiteral_17846/*"bgmStop"*/);
    sub_21FFC50(&StringLiteral_26188/*"wt"*/);
    sub_21FFC50(&StringLiteral_24403/*"seStop"*/);
    sub_21FFC50(&StringLiteral_23724/*"page"*/);
    sub_21FFC50(&StringLiteral_26040/*"wait"*/);
    sub_21FFC50(&StringLiteral_19851/*"end"*/);
    sub_21FFC50(&StringLiteral_22088/*"jingle"*/);
    sub_21FFC50(&StringLiteral_24394/*"se"*/);
    sub_21FFC50(&StringLiteral_22176/*"l"*/);
    sub_21FFC50(&StringLiteral_26027/*"voice"*/);
    sub_21FFC50(&StringLiteral_25319/*"time "*/);
    sub_21FFC50(&StringLiteral_20432/*"fontSize"*/);
    sub_21FFC50(&StringLiteral_24401/*"seLoop"*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    sub_21FFC50(&StringLiteral_16600/*"[r]"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_24335/*"s"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    sub_21FFC50(&StringLiteral_17831/*"betweenHeight"*/);
    sub_21FFC50(&StringLiteral_22089/*"jingleStop"*/);
    sub_21FFC50(&StringLiteral_24773/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_593A3CC = 1;
  }
  v171[0] = 0;
  if ( !analysData )
    goto LABEL_238;
  stringLength = analysData->fields._stringLength;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = v13++;
      Chars = System_String__get_Chars(analysData, v14, 0);
      v171[0] = Chars;
      if ( Chars == 34 )
        break;
      if ( Chars == 91 )
      {
        this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*scriptDataList )
            goto LABEL_238;
          this = *v170;
          *lastMessageIndex = (*scriptDataList)->fields._size;
          if ( !this )
            goto LABEL_238;
          m_CachedPtr = this->fields.m_CachedPtr;
          v24 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_238;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v26 + 32) = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), 0, v17, v18, v19, v20, v21, v22);
          }
          if ( !v12 )
            goto LABEL_238;
          v32 = (System_Collections_Generic_List_object__o *)*scriptDataList;
          this = (CommonMessageManager_o *)System_String__Replace_75490096(
                                             v12,
                                             v166->fields.codeReturnString,
                                             (System_String_o *)StringLiteral_16600/*"[r]"*/,
                                             0);
          if ( !v32 )
            goto LABEL_238;
          items = v32->fields._items;
          v40 = Method_System_Collections_Generic_List_string__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_238;
          size = v32->fields._size;
          v42 = this;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)this,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v42;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v42, v33, v34, v35, v36, v37, v38);
          }
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_238;
          v44 = this->fields.m_CachedPtr;
          v45 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v44 )
            goto LABEL_238;
          v46 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              line,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v46 + 1;
            *(_DWORD *)(v44 + 4 * v46 + 32) = line;
          }
        }
        v47 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v13 >= stringLength )
        {
          v48 = 0;
        }
        else
        {
          v48 = 0;
          v49 = 0;
          v50 = v13;
          do
          {
            v13 = v50 + 1;
            v51 = System_String__get_Chars(analysData, v50, 0);
            v171[0] = v51;
            if ( v51 == 91 )
            {
              ++v49;
            }
            else if ( v51 == 93 )
            {
              if ( --v49 < 0 )
                break;
            }
            else if ( v51 == 32 && v48 == 0 )
            {
              v48 = v47;
            }
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v52);
            v54 = System_Char__ToString((uint16_t)v171, 0);
            v47 = System_String__Concat_75438412(v47, v54, 0);
            if ( v171[0] == 34 )
            {
              if ( v13 < stringLength )
              {
                while ( 1 )
                {
                  v55 = v13 + 1;
                  v171[0] = System_String__get_Chars(analysData, v13, 0);
                  if ( v171[0] == 34 )
                    break;
                  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_594C0B0, v56);
                  v57 = System_Char__ToString((uint16_t)v171, 0);
                  v47 = System_String__Concat_75438412(v47, v57, 0);
                  ++v13;
                  if ( stringLength == v55 )
                  {
                    v13 = stringLength;
                    goto LABEL_63;
                  }
                }
                ++v13;
              }
LABEL_63:
              v47 = System_String__Concat_75438412(v47, (System_String_o *)StringLiteral_366/*"\""*/, 0);
            }
            v50 = v13;
          }
          while ( v13 < stringLength );
        }
        if ( !v48 )
          v48 = v47;
        this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v48, 0);
        if ( (unsigned int)this <= 0x7B80C780 )
        {
          if ( (unsigned int)this <= 0x4B4794E6 )
          {
            if ( (unsigned int)this <= 0x3B958991 )
            {
              switch ( (_DWORD)this )
              {
                case 0x274E1290:
                  v64 = &StringLiteral_20428/*"font"*/;
                  goto LABEL_136;
                case 0x34A684A5:
                  v64 = &StringLiteral_24403/*"seStop"*/;
                  goto LABEL_136;
                case 0x3B958991:
                  v64 = &StringLiteral_17846/*"bgmStop"*/;
LABEL_136:
                  this = (CommonMessageManager_o *)System_String__op_Equality(v48, (System_String_o *)*v64, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( !v47 )
                      goto LABEL_238;
                    tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v48->fields._stringLength
                                                                                             + 1);
                    v80 = (System_Collections_Generic_List_string__o **)(v47->fields._stringLength <= (int)tagDataList
                                                                       ? StringLiteral_1/*""*/
                                                                       : System_String__Substring(
                                                                           v47,
                                                                           (int32_t)tagDataList,
                                                                           0));
                    this = *v170;
                    if ( !*v170 )
                      goto LABEL_238;
                    v81 = this->fields.m_CachedPtr;
                    v82 = Method_System_Collections_Generic_List_string__Add__;
                    ++HIDWORD(this->fields.m_CancellationTokenSource);
                    if ( !v81 )
                      goto LABEL_238;
                    v83 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v48,
                        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v84 = v81 + 8 * v83;
                      LODWORD(this->fields.m_CancellationTokenSource) = v83 + 1;
                      *(_QWORD *)(v84 + 32) = v48;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v84 + 32),
                        (int32_t)v48,
                        v58,
                        v59,
                        v60,
                        v61,
                        v62,
                        v63);
                    }
                    this = (CommonMessageManager_o *)*scriptDataList;
                    if ( !*scriptDataList )
                      goto LABEL_238;
                    v85 = this->fields.m_CachedPtr;
                    v86 = Method_System_Collections_Generic_List_string__Add__;
                    ++HIDWORD(this->fields.m_CancellationTokenSource);
                    if ( !v85 )
                      goto LABEL_238;
                    v87 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v87 < *(_DWORD *)(v85 + 24) )
                    {
                      v88 = v85 + 8 * v87;
                      LODWORD(tagDataList) = (_DWORD)v80;
                      LODWORD(this->fields.m_CancellationTokenSource) = v87 + 1;
                      *(_QWORD *)(v88 + 32) = v80;
                      v89 = (MissionNaviTransitionBoardItem_o *)(v88 + 32);
                      goto LABEL_150;
                    }
                    v91 = v86[4];
                    tagDataList = v80;
                    goto LABEL_174;
                  }
                  break;
              }
              goto LABEL_161;
            }
            if ( (_DWORD)this == 1012009637 )
            {
              v64 = &StringLiteral_24394/*"se"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this == 1195446059 )
            {
              v64 = &StringLiteral_24401/*"seLoop"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this != 1262982374 )
              goto LABEL_161;
            this = (CommonMessageManager_o *)System_String__op_Equality(v48, (System_String_o *)StringLiteral_26188/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_161;
            this = *v170;
            if ( !*v170 )
              goto LABEL_238;
            v65 = this->fields.m_CachedPtr;
            tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_26040/*"wait"*/;
            v66 = Method_System_Collections_Generic_List_string__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v65 )
              goto LABEL_238;
            v67 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)tagDataList,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = v65 + 8 * v67;
              LODWORD(this->fields.m_CancellationTokenSource) = v67 + 1;
              *(_QWORD *)(v68 + 32) = tagDataList;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v68 + 32),
                (int32_t)tagDataList,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63);
            }
            if ( !v47 )
              goto LABEL_238;
            v137 = v48->fields._stringLength;
            v107 = *scriptDataList;
            v138 = (System_String_o *)StringLiteral_25319/*"time "*/;
            v139 = v47->fields._stringLength <= v137 + 1
                 ? (System_String_o *)StringLiteral_1198/*"0"*/
                 : System_String__Substring(v47, v137 + 1, 0);
            this = (CommonMessageManager_o *)System_String__Concat_75438412(v138, v139, 0);
            if ( !v107 )
              goto LABEL_238;
LABEL_168:
            v108 = v107->fields._items;
            v109 = Method_System_Collections_Generic_List_string__Add__;
            ++v107->fields._version;
            if ( !v108 )
              goto LABEL_238;
            tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_170:
            v110 = v107->fields._size;
            if ( (unsigned int)v110 < LODWORD(v108->max_length) )
            {
              v111 = &v108->obj.klass + v110;
              v107->fields._size = v110 + 1;
              v111[4] = (Il2CppClass *)tagDataList;
              v90 = (MissionNaviTransitionBoardItem_o *)(v111 + 4);
              goto LABEL_172;
            }
            v91 = v109[4];
            this = (CommonMessageManager_o *)v107;
            goto LABEL_174;
          }
          if ( (unsigned int)this > 0x667B7330 )
          {
            switch ( (_DWORD)this )
            {
              case 0x6A8E75AA:
                v64 = &StringLiteral_19851/*"end"*/;
                goto LABEL_136;
              case 0x6EE5B7E7:
                v64 = &StringLiteral_24773/*"soundStopAll"*/;
                goto LABEL_136;
              case 0x7B80C780:
                v64 = &StringLiteral_24802/*"speed"*/;
                goto LABEL_136;
            }
            goto LABEL_161;
          }
          if ( (_DWORD)this != 1550717474 )
          {
            if ( (_DWORD)this == 1572001937 )
            {
              v64 = &StringLiteral_17844/*"bgm"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this == 1719366448 )
            {
              v64 = &StringLiteral_22089/*"jingleStop"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v69 = &StringLiteral_18754/*"clear"*/;
LABEL_127:
          this = (CommonMessageManager_o *)System_String__op_Equality(v48, (System_String_o *)*v69, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_161;
          this = *v170;
          if ( !*v170 )
            goto LABEL_238;
          v70 = this->fields.m_CachedPtr;
          v71 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v70 )
            goto LABEL_238;
          v72 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v48,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = v70 + 8 * v72;
            LODWORD(this->fields.m_CancellationTokenSource) = v72 + 1;
            *(_QWORD *)(v73 + 32) = v48;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v73 + 32), (int32_t)v48, v58, v59, v60, v61, v62, v63);
          }
          if ( !v47 )
            goto LABEL_238;
          v115 = v48->fields._stringLength;
          v107 = *scriptDataList;
          if ( v47->fields._stringLength <= v115 + 1 )
          {
            tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          }
          else
          {
            this = (CommonMessageManager_o *)System_String__Substring(v47, v115 + 1, 0);
            tagDataList = (System_Collections_Generic_List_string__o **)this;
          }
          if ( !v107 )
            goto LABEL_238;
          v108 = v107->fields._items;
          v109 = Method_System_Collections_Generic_List_string__Add__;
          ++v107->fields._version;
          if ( !v108 )
            goto LABEL_238;
          goto LABEL_170;
        }
        if ( (unsigned int)this <= 0xA8F18501 )
        {
          if ( (unsigned int)this > 0x815DFA76 )
          {
            switch ( (_DWORD)this )
            {
              case 0x892E4CA0:
                v64 = &StringLiteral_26040/*"wait"*/;
                goto LABEL_136;
              case 0x9859D490:
                v64 = &StringLiteral_17831/*"betweenHeight"*/;
                goto LABEL_136;
              case 0xA8F18501:
                v64 = &StringLiteral_20432/*"fontSize"*/;
                goto LABEL_136;
            }
            goto LABEL_161;
          }
          if ( (_DWORD)this == -2128831035 )
          {
            if ( v48 && !v48->fields._stringLength )
              goto LABEL_180;
            goto LABEL_161;
          }
          if ( (_DWORD)this != -2124547466 )
          {
            if ( (_DWORD)this == 2140916217 )
            {
              v64 = &StringLiteral_26027/*"voice"*/;
              goto LABEL_136;
            }
LABEL_161:
            if ( !*scriptDataList )
              goto LABEL_238;
            this = *v170;
            *lastMessageIndex = (*scriptDataList)->fields._size;
            if ( !this )
              goto LABEL_238;
            v103 = this->fields.m_CachedPtr;
            v104 = Method_System_Collections_Generic_List_string__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v103 )
              goto LABEL_238;
            v105 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v105 >= *(_DWORD *)(v103 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                0,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v106 = v103 + 8 * v105;
              LODWORD(this->fields.m_CancellationTokenSource) = v105 + 1;
              *(_QWORD *)(v106 + 32) = 0;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v106 + 32), 0, v58, v59, v60, v61, v62, v63);
            }
            v107 = *scriptDataList;
            this = (CommonMessageManager_o *)System_String__Concat_75481624(
                                               (System_String_o *)StringLiteral_16395/*"["*/,
                                               v47,
                                               (System_String_o *)StringLiteral_16659/*"]"*/,
                                               0);
            if ( !v107 )
              goto LABEL_238;
            goto LABEL_168;
          }
          v69 = &StringLiteral_23724/*"page"*/;
          goto LABEL_127;
        }
        if ( (unsigned int)this <= 0xE90C310B )
        {
          switch ( (_DWORD)this )
          {
            case 0xC73F3BA9:
              v64 = &StringLiteral_26033/*"voiceStop"*/;
              goto LABEL_136;
            case 0xE30C2799:
              v64 = &StringLiteral_20204/*"f"*/;
              goto LABEL_136;
            case 0xE90C310B:
              v64 = &StringLiteral_22176/*"l"*/;
              goto LABEL_136;
          }
          goto LABEL_161;
        }
        if ( (unsigned int)this > 0xEF3A9228 )
        {
          if ( (_DWORD)this != -200523172 )
          {
            if ( (_DWORD)this == -166967934 )
            {
              v64 = &StringLiteral_24335/*"s"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v92 = &StringLiteral_23987/*"q"*/;
        }
        else
        {
          if ( (_DWORD)this != -301188886 )
          {
            if ( (_DWORD)this == -281374168 )
            {
              v64 = &StringLiteral_22088/*"jingle"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v92 = &StringLiteral_22117/*"k"*/;
        }
        this = (CommonMessageManager_o *)System_String__op_Equality(v48, (System_String_o *)*v92, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_161;
        if ( (*lastMessageIndex & 0x80000000) == 0 )
          *lastMessageIndex = -1;
        this = *v170;
        if ( !*v170 )
          goto LABEL_238;
        v93 = this->fields.m_CachedPtr;
        v94 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v93 )
          goto LABEL_238;
        v95 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = v93 + 8 * v95;
          LODWORD(this->fields.m_CancellationTokenSource) = v95 + 1;
          *(_QWORD *)(v96 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 32), 0, v58, v59, v60, v61, v62, v63);
        }
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_238;
        v116 = this->fields.m_CachedPtr;
        tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16600/*"[r]"*/;
        v117 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v116 )
          goto LABEL_238;
        v118 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tagDataList,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
        }
        else
        {
          v119 = v116 + 8 * v118;
          LODWORD(this->fields.m_CancellationTokenSource) = v118 + 1;
          *(_QWORD *)(v119 + 32) = tagDataList;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v119 + 32),
            (int32_t)tagDataList,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_238;
        v126 = this->fields.m_CachedPtr;
        v127 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v126 )
          goto LABEL_238;
        v128 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v128 + 1;
          *(_DWORD *)(v126 + 4 * v128 + 32) = line;
        }
        this = *v170;
        if ( !*v170 )
          goto LABEL_238;
        v129 = this->fields.m_CachedPtr;
        v130 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v129 )
          goto LABEL_238;
        v131 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v48,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = v129 + 8 * v131;
          LODWORD(this->fields.m_CancellationTokenSource) = v131 + 1;
          *(_QWORD *)(v132 + 32) = v48;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v132 + 32), (int32_t)v48, v120, v121, v122, v123, v124, v125);
        }
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_238;
        v133 = this->fields.m_CachedPtr;
        tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
        v134 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v133 )
          goto LABEL_238;
        v135 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v135 < *(_DWORD *)(v133 + 24) )
        {
          v136 = v133 + 8 * v135;
          LODWORD(this->fields.m_CancellationTokenSource) = v135 + 1;
          *(_QWORD *)(v136 + 32) = tagDataList;
          v89 = (MissionNaviTransitionBoardItem_o *)(v136 + 32);
LABEL_150:
          v90 = v89;
LABEL_172:
          sub_21FFBF4(v90, (int32_t)tagDataList, v74, v75, v76, v77, v78, v79);
          goto LABEL_175;
        }
        v91 = v134[4];
LABEL_174:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)tagDataList,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v91 + 192) + 112LL));
LABEL_175:
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_238;
        v112 = this->fields.m_CachedPtr;
        v113 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v112 )
          goto LABEL_238;
        v114 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v114 >= *(_DWORD *)(v112 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v114 + 1;
          *(_DWORD *)(v112 + 4 * v114 + 32) = line;
        }
LABEL_180:
        v12 = (System_String_o *)StringLiteral_1/*""*/;
        v140 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v13 >= stringLength )
          goto LABEL_219;
      }
      else
      {
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v16);
        v31 = System_Char__ToString((uint16_t)v171, 0);
LABEL_27:
        v12 = System_String__Concat_75438412(v12, v31, 0);
        if ( v13 >= stringLength )
        {
          v140 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_219;
        }
      }
    }
    if ( !*(_DWORD *)(qword_594C0B0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0B0, v16);
    v27 = System_Char__ToString((uint16_t)v171, 0);
    v12 = System_String__Concat_75438412(v12, v27, 0);
    if ( v13 < stringLength )
    {
      while ( 1 )
      {
        v28 = v13 + 1;
        v171[0] = System_String__get_Chars(analysData, v13, 0);
        if ( v171[0] == 34 )
          break;
        if ( !*(_DWORD *)(qword_594C0B0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0B0, v29);
        v30 = System_Char__ToString((uint16_t)v171, 0);
        v12 = System_String__Concat_75438412(v12, v30, 0);
        ++v13;
        if ( stringLength == v28 )
        {
          v13 = stringLength;
          goto LABEL_26;
        }
      }
      ++v13;
    }
LABEL_26:
    v31 = (System_String_o *)StringLiteral_366/*"\""*/;
    goto LABEL_27;
  }
  v140 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_219:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v140, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      this = *v170;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      if ( this )
      {
        v147 = this->fields.m_CachedPtr;
        v148 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v147 )
        {
          v149 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v149 >= *(_DWORD *)(v147 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = v147 + 8 * v149;
            LODWORD(this->fields.m_CancellationTokenSource) = v149 + 1;
            *(_QWORD *)(v150 + 32) = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v150 + 32), 0, v141, v142, v143, v144, v145, v146);
          }
          if ( v12 )
          {
            v151 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_75490096(
                                               v12,
                                               v166->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16600/*"[r]"*/,
                                               0);
            if ( v151 )
            {
              v158 = v151->fields._items;
              v159 = Method_System_Collections_Generic_List_string__Add__;
              ++v151->fields._version;
              if ( v158 )
              {
                v160 = v151->fields._size;
                v161 = this;
                if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v151,
                    (Il2CppObject *)this,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
                }
                else
                {
                  v162 = &v158->obj.klass + v160;
                  v151->fields._size = v160 + 1;
                  v162[4] = (Il2CppClass *)v161;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v162 + 4),
                    (int32_t)v161,
                    v152,
                    v153,
                    v154,
                    v155,
                    v156,
                    v157);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v163 = this->fields.m_CachedPtr;
                  v164 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v163 )
                  {
                    v165 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v165 >= *(_DWORD *)(v163 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_4433138 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v165 + 1;
                      *(_DWORD *)(v163 + 4 * v165 + 32) = line;
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
LABEL_238:
    sub_21FFECC(this, tagDataList);
  }
}


void CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *callbackFunc; // x19
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593A3C9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11970/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_21FFC50(&StringLiteral_11980/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_21FFC50(&StringLiteral_11973/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_21FFC50(&StringLiteral_11979/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_593A3C9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11970/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.codeTalkString,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.codeVoiceString,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11973/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.codeReturnString,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))touchCallbackFunc->fields.invoke_impl)(
      touchCallbackFunc->fields.method_code,
      touchCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnLongPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *longPressCallbackFunc; // x20

  ScriptMessageCommonManager__OnLongPressWindow((ScriptMessageCommonManager_o *)this, 0);
  longPressCallbackFunc = this->fields.longPressCallbackFunc;
  if ( longPressCallbackFunc )
  {
    this->fields.longPressCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))longPressCallbackFunc->fields.invoke_impl)(
      longPressCallbackFunc->fields.method_code,
      longPressCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))touchCallbackFunc->fields.invoke_impl)(
      touchCallbackFunc->fields.method_code,
      touchCallbackFunc->fields.method);
  }
}


bool CommonMessageManager__ProcessScript(CommonMessageManager_o *this, float delta, const MethodInfo *method)
{
  MethodInfo *v3; // x2
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
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 *v21; // x8
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  MissionNaviTransitionBoardItem_o *v29; // x0
  System_String_o *v30; // x1
  System_String_o *v31; // x23
  uint32_t v32; // w0
  __int64 *v33; // x8
  MethodInfo *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 *v41; // x8
  __int64 *v42; // x8
  System_String_o *v43; // x1
  int32_t playSpeed; // w8
  __int64 *v45; // x8
  __int64 *v46; // x8
  il2cpp_array_size_t max_length; // x9
  float v48; // s0
  System_String_o *v49; // x1
  il2cpp_array_size_t v50; // x9
  float v51; // s0
  il2cpp_array_size_t v52; // x9
  System_String_o *v53; // x1
  ScriptMessageCommonManager_o *v54; // x0
  System_String_o *v55; // x2
  __int64 v56; // x1
  _BOOL4 isBusy; // w20
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 *v65; // x8
  __int64 v66; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_593A3CE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22606/*"messageOn"*/);
    sub_21FFC50(&StringLiteral_18754/*"clear"*/);
    sub_21FFC50(&StringLiteral_20428/*"font"*/);
    sub_21FFC50(&StringLiteral_23729/*"page3"*/);
    sub_21FFC50(&StringLiteral_22604/*"messageOff"*/);
    sub_21FFC50(&StringLiteral_23728/*"page2"*/);
    sub_21FFC50(&StringLiteral_20204/*"f"*/);
    sub_21FFC50(&StringLiteral_24802/*"speed"*/);
    sub_21FFC50(&StringLiteral_22117/*"k"*/);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_23987/*"q"*/);
    sub_21FFC50(&StringLiteral_23744/*"parameter error"*/);
    sub_21FFC50(&StringLiteral_25385/*"touch2"*/);
    sub_21FFC50(&StringLiteral_23724/*"page"*/);
    sub_21FFC50(&StringLiteral_26040/*"wait"*/);
    sub_21FFC50(&StringLiteral_23743/*"parameter be unnecessary"*/);
    sub_21FFC50(&StringLiteral_19851/*"end"*/);
    sub_21FFC50(&StringLiteral_22596/*"message2"*/);
    sub_21FFC50(&StringLiteral_22176/*"l"*/);
    sub_21FFC50(&StringLiteral_20432/*"fontSize"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_25212/*"talkName"*/);
    sub_21FFC50(&StringLiteral_25383/*"touch"*/);
    sub_21FFC50(&StringLiteral_22597/*"message3"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_24335/*"s"*/);
    sub_21FFC50(&StringLiteral_17831/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_21FFC50(&StringLiteral_18756/*"clear2"*/);
    byte_593A3CE = 1;
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
        goto LABEL_175;
      executeIndex = v5->fields.executeIndex;
      if ( (int)executeIndex >= v5->fields.executeIndexMax )
      {
        CommonMessageManager__EndExecuteScript(v5, method);
        goto LABEL_175;
      }
      if ( v5->fields.playSpeed == 1 )
        goto LABEL_175;
      executeTagList = v5->fields.executeTagList;
      if ( !executeTagList )
        goto LABEL_191;
      if ( (unsigned int)executeIndex >= LODWORD(executeTagList->max_length) )
        goto LABEL_192;
      executeDataList = v5->fields.executeDataList;
      if ( !executeDataList )
        goto LABEL_191;
      if ( (unsigned int)executeIndex >= LODWORD(executeDataList->max_length) )
        goto LABEL_192;
      executeLineList = v5->fields.executeLineList;
      if ( !executeLineList )
LABEL_191:
        sub_21FFECC(this, method);
      if ( (unsigned int)executeIndex >= LODWORD(executeLineList->max_length) )
        goto LABEL_192;
      v13 = executeDataList->m_Items[executeIndex];
      v14 = executeTagList->m_Items[executeIndex];
      v15 = CommonMessageManager__AnalysParam(this, v13, v3);
      if ( !v14 && v5->fields.isBusy )
        goto LABEL_187;
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
                                                 (System_String_o *)StringLiteral_23987/*"q"*/,
                                                 0);
              if ( v14 || ((unsigned __int8)this & 1) != 0 )
                goto LABEL_172;
LABEL_153:
              v56 = StringLiteral_22593/*"message"*/;
              v5->fields.state = 4;
              v5->fields.waitType = (struct System_String_o *)v56;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v5->fields.waitType,
                v56,
                (System_String_o *)v3,
                v16,
                v17,
                v18,
                v19,
                v20);
              v5->fields.waitMessage = v13;
              v29 = (MissionNaviTransitionBoardItem_o *)&v5->fields.waitMessage;
              goto LABEL_154;
            }
            if ( (_DWORD)this == -166967934 )
            {
              v41 = &StringLiteral_24335/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v41, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                max_length = v15->max_length;
                if ( (_DWORD)max_length == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_923/*"-"*/,
                                                     0);
                  v48 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
                      goto LABEL_192;
                    v48 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_23744/*"parameter error"*/;
                  if ( max_length )
                    goto LABEL_171;
                  v48 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v48, 0);
                goto LABEL_172;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v33 = &StringLiteral_22176/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v33, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v50 = v15->max_length;
                if ( (_DWORD)v50 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_923/*"-"*/,
                                                     0);
                  v51 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
LABEL_192:
                      sub_21FFED4(this);
                    v51 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_23744/*"parameter error"*/;
                  if ( v50 )
                    goto LABEL_171;
                  v51 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v51, 0);
                goto LABEL_172;
              }
              goto LABEL_152;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_22117/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23743/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                v42 = &StringLiteral_25383/*"touch"*/;
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
              v46 = &StringLiteral_20432/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_152;
              v46 = &StringLiteral_20204/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_26040/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_191;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v21 = &StringLiteral_23744/*"parameter error"*/;
LABEL_171:
                if ( *v21 )
                {
                  v5->fields.state = 11;
                  goto LABEL_175;
                }
                goto LABEL_172;
              }
              v30 = v15->m_Items[0];
              *p_waitType = v30;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v33 = &StringLiteral_17831/*"betweenHeight"*/;
            goto LABEL_133;
          }
        }
      }
      else
      {
        if ( (unsigned int)this <= 0x5C6E1222 )
        {
          if ( (unsigned int)this <= 0x20BD548D )
          {
            if ( (_DWORD)this == 452920428 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_25212/*"talkName"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v29 = (MissionNaviTransitionBoardItem_o *)&v5->fields.waitTalkName;
                *p_waitTalkName = v13;
LABEL_154:
                LODWORD(v30) = (_DWORD)v13;
                goto LABEL_155;
              }
            }
            else if ( (_DWORD)this == 549278861 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_22606/*"messageOn"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23744/*"parameter error"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
                v22 = StringLiteral_22593/*"message"*/;
                v5->fields.state = 4;
                v5->fields.waitType = (struct System_String_o *)v22;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.waitType, v22, v23, v24, v25, v26, v27, v28);
                v5->fields.waitMessage = 0;
                v29 = (MissionNaviTransitionBoardItem_o *)&v5->fields.waitMessage;
                LODWORD(v30) = 0;
                goto LABEL_155;
              }
            }
            goto LABEL_152;
          }
          if ( (_DWORD)this != 659427984 )
          {
            if ( (_DWORD)this == 1550717474 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_18754/*"clear"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23743/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                v42 = &StringLiteral_18754/*"clear"*/;
                goto LABEL_150;
              }
            }
            goto LABEL_152;
          }
          v46 = &StringLiteral_20428/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v46, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_191;
            v52 = v15->max_length;
            if ( (_DWORD)v52 == 1 )
            {
              v53 = v15->m_Items[0];
              v54 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v52 >= 3 )
            {
              v53 = v15->m_Items[0];
              v55 = v15->m_Items[2];
              v54 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v21 = &StringLiteral_23744/*"parameter error"*/;
              if ( v52 )
                goto LABEL_171;
              v54 = (ScriptMessageCommonManager_o *)v5;
              v53 = 0;
LABEL_145:
              v55 = 0;
            }
            ScriptMessageCommonManager__SetFontSize(v54, v53, v55, 0);
            goto LABEL_172;
          }
          goto LABEL_152;
        }
        if ( (unsigned int)this > 0x7B80C780 )
        {
          if ( (_DWORD)this == -2124547466 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_23724/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_191;
              v21 = &StringLiteral_23743/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_171;
              v42 = &StringLiteral_23724/*"page"*/;
LABEL_150:
              v30 = (System_String_o *)*v42;
              v5->fields.state = 4;
              v5->fields.waitType = v30;
LABEL_151:
              v29 = (MissionNaviTransitionBoardItem_o *)&v5->fields.waitType;
LABEL_155:
              sub_21FFBF4(v29, (int32_t)v30, (System_String_o *)v3, v16, v17, v18, v19, v20);
              goto LABEL_172;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22604/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_191;
              v21 = &StringLiteral_23744/*"parameter error"*/;
              if ( v15->max_length )
                goto LABEL_171;
              ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
              ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
              goto LABEL_172;
            }
          }
          goto LABEL_152;
        }
        if ( (_DWORD)this == 1787721130 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19851/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_191;
            v21 = &StringLiteral_23743/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_171;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_172;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v41 = &StringLiteral_24802/*"speed"*/;
          goto LABEL_102;
        }
      }
LABEL_152:
      if ( !v14 )
        goto LABEL_153;
LABEL_172:
      ++v5->fields.executeIndex;
LABEL_173:
      state = v5->fields.state;
    }
    v31 = *p_waitType;
    v32 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0);
    if ( v32 > 0x698989D8 )
      break;
    if ( v32 > 0xD841B5E )
    {
      if ( v32 != 619841764 )
      {
        if ( v32 != 1550717474 )
        {
          if ( v32 == 1770621400 && System_String__op_Equality(v31, (System_String_o *)StringLiteral_25383/*"touch"*/, 0) )
          {
            if ( v5->fields.isBusy )
            {
LABEL_187:
              ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0);
              return !v5->fields.isBusy && v5->fields.state == 3;
            }
            ScriptMessageCommonManager__WaitNextTouch(
              (ScriptMessageCommonManager_o *)v5,
              v5->fields.isDispLastTouchMark,
              0);
            v65 = &StringLiteral_25385/*"touch2"*/;
            goto LABEL_190;
          }
          goto LABEL_175;
        }
        if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18754/*"clear"*/, 0) )
          goto LABEL_175;
        if ( v5->fields.isBusy )
          goto LABEL_187;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v45 = &StringLiteral_18756/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22593/*"message"*/, 0) )
        goto LABEL_175;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_187;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v45 = &StringLiteral_22596/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v34);
      v49 = *p_waitMessage;
      if ( !*p_waitMessage )
        v49 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v49, 0, 0, 0);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v32 == 256629 )
    {
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22597/*"message3"*/, 0) || v5->fields.isScroll )
        goto LABEL_175;
      v43 = *p_waitMessage;
      if ( !*p_waitMessage )
        v43 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v43, 0, 0, 0);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0);
      goto LABEL_115;
    }
    if ( v32 != 226761566
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_25385/*"touch2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
    ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0);
    v5->fields.isCancelInput = 1;
LABEL_115:
    state = 3;
    v5->fields.state = 3;
  }
  if ( v32 <= 0x91466F30 )
  {
    if ( v32 == -2124547466 )
    {
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_23724/*"page"*/, 0) )
        goto LABEL_175;
      if ( v5->fields.isBusy )
        goto LABEL_187;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v45 = &StringLiteral_23728/*"page2"*/;
LABEL_120:
      v40 = *v45;
      *p_waitType = (System_String_o *)*v45;
LABEL_121:
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v5->fields.waitType,
        v40,
        (System_String_o *)v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      goto LABEL_173;
    }
    if ( v32 != -1857654992
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18756/*"clear2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
    goto LABEL_115;
  }
  if ( v32 == -336528737 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_23729/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_175;
    goto LABEL_83;
  }
  if ( v32 == -16520990 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22596/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v40) = StringLiteral_22597/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_22597/*"message3"*/;
    goto LABEL_121;
  }
  if ( v32 == -353306356
    && System_String__op_Equality(v31, (System_String_o *)StringLiteral_23728/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v65 = &StringLiteral_23729/*"page3"*/;
LABEL_190:
    v66 = *v65;
    v5->fields.waitType = (struct System_String_o *)*v65;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.waitType, v66, v59, v60, v61, v62, v63, v64);
  }
LABEL_175:
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonMessageManager__SetLongPressCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.longPressCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.longPressCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CommonMessageManager__AnalysScript(this, messageBlock, v15);
  this->fields.executeIndex = 0;
  this->fields.state = 3;
  this->fields.isCancelInput = 0;
  this->fields.isDispLastTouchMark = isDispLastTouchMark;
}


void CommonMessageManager__SetMessageSpeed(CommonMessageManager_o *this, int32_t playSpeed, const MethodInfo *method)
{
  this->fields.playSpeed = playSpeed;
}


void CommonMessageManager__SetTalkName(CommonMessageManager_o *this, System_String_o *name, const MethodInfo *method)
{
  int v5; // w8
  int32_t charaIndex; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-38h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_593A3CA & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    byte_593A3CA = 1;
  }
  imageName = 0;
  charaName = 0;
  className = 0;
  v5 = *(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1);
  charaIndex = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, name);
  ScriptMessageLabel__GetTalkName(&imageName, &className, &charaName, &charaIndex, name, 0);
  ScriptMessageCommonManager__SetTalkName((ScriptMessageCommonManager_o *)this, 0, className, charaName, charaIndex, 0);
}


void CommonMessageManager__SetTouchCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.touchCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.touchCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}