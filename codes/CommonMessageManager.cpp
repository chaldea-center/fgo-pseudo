void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageManager_c *v3; // x0

  if ( (byte_59725AC & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageManager_TypeInfo);
    byte_59725AC = 1;
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
  if ( (byte_59725AA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_1825/*"="*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_366/*"\""*/);
    this = (CommonMessageManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59725AA = 1;
  }
  v68[0] = 0;
  if ( !v3 )
    goto LABEL_73;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_113/*" "*/, 0) )
          goto LABEL_52;
        v24 = v5->fields._size;
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v22);
        v25 = System_Char__ToString((uint16_t)v68, 0);
        if ( v25 )
          v26 = (Il2CppObject *)v25;
        else
          v26 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v24 - 1,
          v26,
          (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !*(_DWORD *)(qword_5984388 + 228) )
              j_il2cpp_runtime_class_init_0(qword_5984388, v10);
            v11 = System_Char__ToString((uint16_t)v68, 0);
            v6 = System_String__Concat_75651716(v6, v11, 0);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v12 = v7 + 1;
                v68[0] = System_String__get_Chars(v3, v7, 0);
                if ( v68[0] == 34 )
                  break;
                if ( !*(_DWORD *)(qword_5984388 + 228) )
                  j_il2cpp_runtime_class_init_0(qword_5984388, v13);
                v14 = System_Char__ToString((uint16_t)v68, 0);
                v6 = System_String__Concat_75651716(v6, v14, 0);
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
            if ( !*(_DWORD *)(qword_5984388 + 228) )
              j_il2cpp_runtime_class_init_0(qword_5984388, v10);
            v27 = System_Char__ToString((uint16_t)v68, 0);
          }
          v6 = System_String__Concat_75651716(v6, v27, 0);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + v30;
            v5->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v6, v15, v16, v17, v18, v19, v20);
          }
          if ( !*(_DWORD *)(qword_5984388 + 228) )
            j_il2cpp_runtime_class_init_0(qword_5984388, v32);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &v39->obj.klass + v41;
            v5->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)data;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)data, v33, v34, v35, v36, v37, v38);
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
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)v44, (System_String_o *)StringLiteral_1825/*"="*/, 0))
          && (v45 = System_Collections_Generic_List_object___get_Item(
                      v5,
                      v5->fields._size - 1,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)v45, (System_String_o *)StringLiteral_869/*","*/, 0)) )
        {
LABEL_52:
          if ( !*(_DWORD *)(qword_5984388 + 228) )
            j_il2cpp_runtime_class_init_0(qword_5984388, v22);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v5->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)data;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)data, v46, v47, v48, v49, v50, v51);
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
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_73:
    sub_2213CDC(this, data);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v5->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 4), (int32_t)v6, v57, v58, v59, v60, v61, v62);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x21
  System_String_o *v6; // x0
  Il2CppObject *v7; // x1
  System_String_array *v8; // x24
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  System_String_o **v15; // x5
  bool v16; // w6
  bool v17; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x23
  System_String_o *v20; // x28
  System_String_o *v21; // x26
  System_String_o *v22; // x27
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *v45; // x8
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x8
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppObject *v82; // x1
  Il2CppClass **v83; // x0
  MissionNaviTransitionBoardItem_o *v84; // x0
  __int64 v85; // x8
  System_Collections_Generic_List_object__o *v86; // x0
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  _QWORD *v108; // x9
  struct System_Object_array *v109; // x8
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  struct System_Int32_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  struct System_Int32_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  struct System_String_array *v132; // x0
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  struct System_String_array *v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  struct System_Int32_array *v146; // x0
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v154; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+10h] [xbp-90h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59725A8 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_2213A60(&StringLiteral_395/*"#"*/);
    sub_2213A60(&StringLiteral_1126/*"//"*/);
    sub_2213A60(&StringLiteral_21053/*"i"*/);
    sub_2213A60(&StringLiteral_22160/*"k"*/);
    sub_2213A60(&StringLiteral_24034/*"q"*/);
    sub_2213A60(&StringLiteral_506/*"%"*/);
    sub_2213A60(&StringLiteral_528/*"&"*/);
    sub_2213A60(&StringLiteral_22314/*"line"*/);
    sub_2213A60(&StringLiteral_25264/*"talkStart"*/);
    sub_2213A60(&StringLiteral_21266/*"image"*/);
    sub_2213A60(&StringLiteral_16632/*"[r]"*/);
    sub_2213A60(&StringLiteral_25260/*"talkName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59725A8 = 1;
  }
  scriptDataList = 0;
  tagDataList = 0;
  lineDataList = 0;
  lastMessageIndex = 0;
  v5 = (System_Array_o *)sub_2213B20(char___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v5,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
    0);
  if ( !scriptData )
    goto LABEL_137;
  v8 = System_String__Split_75706100(scriptData, (System_Char_array *)v5, 1, 0);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v9;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v11;
  lastMessageIndex = -1;
  if ( !v8 )
    goto LABEL_137;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    a = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      v20 = v8->m_Items[v19];
      if ( !v20 )
        goto LABEL_137;
      if ( v20->fields._stringLength >= 1 )
      {
        v21 = (System_String_o *)StringLiteral_1/*""*/;
        v6 = (System_String_o *)System_String__StartsWith(v8->m_Items[v19], (System_String_o *)StringLiteral_1126/*"//"*/, 0);
        if ( ((unsigned __int8)v6 & 1) == 0 )
        {
          v6 = (System_String_o *)System_String__StartsWith(v20, this->fields.codeCommentString, 0);
          if ( ((unsigned __int8)v6 & 1) == 0 )
            break;
        }
      }
LABEL_112:
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_115;
    }
    if ( System_String__StartsWith(v20, this->fields.codeTalkString, 0) )
    {
      v22 = (System_String_o *)StringLiteral_25260/*"talkName"*/;
      v21 = System_String__Substring(v20, 1, 0);
      if ( v22 )
      {
        v6 = (System_String_o *)System_String__op_Equality(v22, (System_String_o *)StringLiteral_22160/*"k"*/, 0);
        if ( ((unsigned __int8)v6 & 1) != 0
          || (v6 = (System_String_o *)System_String__op_Equality(v22, (System_String_o *)StringLiteral_24034/*"q"*/, 0),
              ((unsigned __int8)v6 & 1) != 0) )
        {
          if ( (lastMessageIndex & 0x80000000) == 0 )
          {
            if ( !v9 )
              goto LABEL_137;
            items = v9->fields._items;
            v30 = Method_System_Collections_Generic_List_string__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_137;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                0,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v32[4] = 0;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), 0, v23, v24, v25, v26, v27, v28);
            }
            if ( !v10 )
              goto LABEL_137;
            v55 = v10->fields._items;
            v7 = (Il2CppObject *)StringLiteral_16632/*"[r]"*/;
            v56 = Method_System_Collections_Generic_List_string__Add__;
            ++v10->fields._version;
            if ( !v55 )
              goto LABEL_137;
            v57 = v10->fields._size;
            if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &v55->obj.klass + v57;
              v10->fields._size = v57 + 1;
              v58[4] = (Il2CppClass *)v7;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v7, v33, v34, v35, v36, v37, v38);
            }
            if ( !v11 )
              goto LABEL_137;
            v59 = v11->fields._items;
            v60 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !v59 )
              goto LABEL_137;
            v61 = v11->fields._size;
            if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v19 + 1,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = v61 + 1;
              v59->m_Items[v61] = v19 + 1;
            }
            lastMessageIndex = -1;
            goto LABEL_96;
          }
        }
        else if ( System_String__op_Equality(v22, (System_String_o *)StringLiteral_25260/*"talkName"*/, 0) )
        {
          v6 = (System_String_o *)System_String__op_Equality(v22, (System_String_o *)StringLiteral_25260/*"talkName"*/, 0);
          v54 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v6 & 1) != 0 )
            v54 = v21;
          a = v54;
        }
        else if ( System_String__op_Equality(v22, (System_String_o *)StringLiteral_21053/*"i"*/, 0)
               || System_String__op_Equality(v22, (System_String_o *)StringLiteral_21266/*"image"*/, 0)
               || System_String__op_Equality(v22, (System_String_o *)StringLiteral_22314/*"line"*/, 0)
               || System_String__StartsWith(v22, (System_String_o *)StringLiteral_506/*"%"*/, 0)
               || System_String__StartsWith(v22, (System_String_o *)StringLiteral_528/*"&"*/, 0)
               || (v6 = (System_String_o *)System_String__StartsWith(v22, (System_String_o *)StringLiteral_395/*"#"*/, 0),
                   ((unsigned __int8)v6 & 1) != 0) )
        {
          v6 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( ((unsigned __int8)v6 & 1) != 0 && lastMessageIndex < 0 )
          {
            if ( !v9 )
              goto LABEL_137;
            v87 = v9->fields._items;
            v7 = (Il2CppObject *)StringLiteral_25264/*"talkStart"*/;
            v88 = Method_System_Collections_Generic_List_string__Add__;
            ++v9->fields._version;
            if ( !v87 )
              goto LABEL_137;
            v89 = v9->fields._size;
            if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
            }
            else
            {
              v90 = &v87->obj.klass + v89;
              v9->fields._size = v89 + 1;
              v90[4] = (Il2CppClass *)v7;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v7, v23, v24, v25, v26, v27, v28);
            }
            if ( !v10 )
              goto LABEL_137;
            v97 = v10->fields._items;
            v7 = (Il2CppObject *)StringLiteral_1/*""*/;
            v98 = Method_System_Collections_Generic_List_string__Add__;
            ++v10->fields._version;
            if ( !v97 )
              goto LABEL_137;
            v99 = v10->fields._size;
            if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &v97->obj.klass + v99;
              v10->fields._size = v99 + 1;
              v100[4] = (Il2CppClass *)v7;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v100 + 4), (int32_t)v7, v91, v92, v93, v94, v95, v96);
            }
            if ( !v11 )
              goto LABEL_137;
            v101 = v11->fields._items;
            v102 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !v101 )
              goto LABEL_137;
            v103 = v11->fields._size;
            if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v19 + 1,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = v103 + 1;
              v101->m_Items[v103] = v19 + 1;
            }
          }
          else if ( !v10 )
          {
            goto LABEL_137;
          }
          lastMessageIndex = v10->fields._size;
        }
        if ( !v9 )
          goto LABEL_137;
LABEL_96:
        v104 = v9->fields._items;
        v105 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( !v104 )
          goto LABEL_137;
        v106 = v9->fields._size;
        if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &v104->obj.klass + v106;
          v9->fields._size = v106 + 1;
          v107[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v107 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
        }
        if ( !v10 )
          goto LABEL_137;
        v108 = Method_System_Collections_Generic_List_string__Add__;
        v109 = v10->fields._items;
        ++v10->fields._version;
        if ( !v109 )
          goto LABEL_137;
        v110 = v10->fields._size;
        if ( (unsigned int)v110 < LODWORD(v109->max_length) )
        {
          v111 = &v109->obj.klass + v110;
          LODWORD(v82) = (_DWORD)v21;
          v10->fields._size = v110 + 1;
          v111[4] = (Il2CppClass *)v21;
          v84 = (MissionNaviTransitionBoardItem_o *)(v111 + 4);
          goto LABEL_104;
        }
        v85 = v108[4];
        v86 = v10;
        v82 = (Il2CppObject *)v21;
        goto LABEL_106;
      }
    }
    else
    {
      v6 = (System_String_o *)System_String__StartsWith(v20, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        goto LABEL_112;
      CommonMessageManager__AnalysText(
        this,
        &tagDataList,
        &scriptDataList,
        &lineDataList,
        &lastMessageIndex,
        v15,
        v20,
        v19 + 1,
        v154);
    }
    v6 = (System_String_o *)System_String__op_Inequality(v21, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      goto LABEL_112;
    v6 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 && lastMessageIndex < 0 )
    {
      if ( !v9 )
        goto LABEL_137;
      v45 = v9->fields._items;
      v7 = (Il2CppObject *)StringLiteral_25264/*"talkStart"*/;
      ++v9->fields._version;
      if ( !v45 )
        goto LABEL_137;
      v46 = v9->fields._size;
      if ( (unsigned int)v46 >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v7,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_string__Add__ + 4)
                                                   + 192LL)
                                       + 112LL));
      }
      else
      {
        v47 = &v45->obj.klass + v46;
        v9->fields._size = v46 + 1;
        v47[4] = (Il2CppClass *)v7;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v7, v39, v40, v41, v42, v43, v44);
      }
      if ( !v10 )
        goto LABEL_137;
      v62 = v10->fields._items;
      v7 = (Il2CppObject *)StringLiteral_1/*""*/;
      v63 = Method_System_Collections_Generic_List_string__Add__;
      ++v10->fields._version;
      if ( !v62 )
        goto LABEL_137;
      v64 = v10->fields._size;
      if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v7,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &v62->obj.klass + v64;
        v10->fields._size = v64 + 1;
        v65[4] = (Il2CppClass *)v7;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v7, v48, v49, v50, v51, v52, v53);
      }
      if ( !v11 )
        goto LABEL_137;
      v66 = v11->fields._items;
      v67 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !v66 )
        goto LABEL_137;
      v68 = v11->fields._size;
      if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v19 + 1,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = v68 + 1;
        v66->m_Items[v68] = v19 + 1;
      }
    }
    else if ( !v9 )
    {
      goto LABEL_137;
    }
    v69 = v9->fields._items;
    v70 = Method_System_Collections_Generic_List_string__Add__;
    ++v9->fields._version;
    if ( !v69 )
      goto LABEL_137;
    v71 = v9->fields._size;
    if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        0,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v9->fields._size = v71 + 1;
      v72[4] = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), 0, v39, v40, v41, v42, v43, v44);
    }
    if ( !v10 )
      goto LABEL_137;
    lastMessageIndex = v10->fields._size;
    if ( !v21 )
      goto LABEL_137;
    v6 = System_String__Replace_75703400(v21, this->fields.codeReturnString, (System_String_o *)StringLiteral_16632/*"[r]"*/, 0);
    v79 = v10->fields._items;
    v80 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v79 )
      goto LABEL_137;
    v81 = v10->fields._size;
    v82 = (Il2CppObject *)v6;
    if ( (unsigned int)v81 < LODWORD(v79->max_length) )
    {
      v83 = &v79->obj.klass + v81;
      v10->fields._size = v81 + 1;
      v83[4] = (Il2CppClass *)v82;
      v84 = (MissionNaviTransitionBoardItem_o *)(v83 + 4);
LABEL_104:
      sub_2213A04(v84, (int32_t)v82, v73, v74, v75, v76, v77, v78);
      goto LABEL_107;
    }
    v85 = v80[4];
    v86 = v10;
LABEL_106:
    System_Collections_Generic_List_object___AddWithResize(
      v86,
      v82,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v85 + 192) + 112LL));
LABEL_107:
    if ( !v11 )
      goto LABEL_137;
    v112 = v11->fields._items;
    v113 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !v112 )
      goto LABEL_137;
    v114 = v11->fields._size;
    if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        v19 + 1,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = v114 + 1;
      v112->m_Items[v114] = v19 + 1;
    }
    goto LABEL_112;
  }
  LODWORD(v19) = 0;
LABEL_115:
  if ( (lastMessageIndex & 0x80000000) == 0 )
  {
    if ( v9 )
    {
      v115 = v9->fields._items;
      v116 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( v115 )
      {
        v117 = v9->fields._size;
        if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            0,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
        }
        else
        {
          v118 = &v115->obj.klass + v117;
          v9->fields._size = v117 + 1;
          v118[4] = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v118 + 4), 0, v12, v13, v14, (int32_t)v15, v16, v17);
        }
        if ( v10 )
        {
          v125 = v10->fields._items;
          v7 = (Il2CppObject *)StringLiteral_16632/*"[r]"*/;
          v126 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( v125 )
          {
            v127 = v10->fields._size;
            if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
            }
            else
            {
              v128 = &v125->obj.klass + v127;
              v10->fields._size = v127 + 1;
              v128[4] = (Il2CppClass *)v7;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v128 + 4),
                (int32_t)v7,
                v119,
                v120,
                v121,
                v122,
                v123,
                v124);
            }
            if ( v11 )
            {
              v129 = v11->fields._items;
              v130 = Method_System_Collections_Generic_List_int__Add__;
              ++v11->fields._version;
              if ( v129 )
              {
                v131 = v11->fields._size;
                if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v11,
                    v19,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                }
                else
                {
                  v11->fields._size = v131 + 1;
                  v129->m_Items[v131] = v19;
                }
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
LABEL_137:
    sub_2213CDC(v6, v7);
  }
  if ( !v9 )
    goto LABEL_137;
LABEL_133:
  v132 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v132;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeTagList,
    (int32_t)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  if ( !v10 )
    goto LABEL_137;
  v139 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeDataList = v139;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeDataList,
    (int32_t)v139,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  if ( !v11 )
    goto LABEL_137;
  v146 = System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.executeLineList = v146;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executeLineList,
    (int32_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
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
  if ( (byte_59725A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&StringLiteral_18792/*"clear"*/);
    sub_2213A60(&StringLiteral_20469/*"font"*/);
    sub_2213A60(&StringLiteral_20246/*"f"*/);
    sub_2213A60(&StringLiteral_24850/*"speed"*/);
    sub_2213A60(&StringLiteral_22160/*"k"*/);
    sub_2213A60(&StringLiteral_24034/*"q"*/);
    sub_2213A60(&StringLiteral_26083/*"voiceStop"*/);
    sub_2213A60(&StringLiteral_17882/*"bgm"*/);
    sub_2213A60(&StringLiteral_17884/*"bgmStop"*/);
    sub_2213A60(&StringLiteral_26239/*"wt"*/);
    sub_2213A60(&StringLiteral_24451/*"seStop"*/);
    sub_2213A60(&StringLiteral_23771/*"page"*/);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    sub_2213A60(&StringLiteral_19893/*"end"*/);
    sub_2213A60(&StringLiteral_22131/*"jingle"*/);
    sub_2213A60(&StringLiteral_24442/*"se"*/);
    sub_2213A60(&StringLiteral_22219/*"l"*/);
    sub_2213A60(&StringLiteral_26075/*"voice"*/);
    sub_2213A60(&StringLiteral_25367/*"time "*/);
    sub_2213A60(&StringLiteral_20473/*"fontSize"*/);
    sub_2213A60(&StringLiteral_24449/*"seLoop"*/);
    sub_2213A60(&StringLiteral_366/*"\""*/);
    sub_2213A60(&StringLiteral_16632/*"[r]"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_24383/*"s"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    sub_2213A60(&StringLiteral_17869/*"betweenHeight"*/);
    sub_2213A60(&StringLiteral_22132/*"jingleStop"*/);
    sub_2213A60(&StringLiteral_24821/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_59725A9 = 1;
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v26 + 32) = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), 0, v17, v18, v19, v20, v21, v22);
          }
          if ( !v12 )
            goto LABEL_238;
          v32 = (System_Collections_Generic_List_object__o *)*scriptDataList;
          this = (CommonMessageManager_o *)System_String__Replace_75703400(
                                             v12,
                                             v166->fields.codeReturnString,
                                             (System_String_o *)StringLiteral_16632/*"[r]"*/,
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v42;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v42, v33, v34, v35, v36, v37, v38);
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
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
            if ( !*(_DWORD *)(qword_5984388 + 228) )
              j_il2cpp_runtime_class_init_0(qword_5984388, v52);
            v54 = System_Char__ToString((uint16_t)v171, 0);
            v47 = System_String__Concat_75651716(v47, v54, 0);
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
                  if ( !*(_DWORD *)(qword_5984388 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_5984388, v56);
                  v57 = System_Char__ToString((uint16_t)v171, 0);
                  v47 = System_String__Concat_75651716(v47, v57, 0);
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
              v47 = System_String__Concat_75651716(v47, (System_String_o *)StringLiteral_366/*"\""*/, 0);
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
                  v64 = &StringLiteral_20469/*"font"*/;
                  goto LABEL_136;
                case 0x34A684A5:
                  v64 = &StringLiteral_24451/*"seStop"*/;
                  goto LABEL_136;
                case 0x3B958991:
                  v64 = &StringLiteral_17884/*"bgmStop"*/;
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
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v84 = v81 + 8 * v83;
                      LODWORD(this->fields.m_CancellationTokenSource) = v83 + 1;
                      *(_QWORD *)(v84 + 32) = v48;
                      sub_2213A04(
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
              v64 = &StringLiteral_24442/*"se"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this == 1195446059 )
            {
              v64 = &StringLiteral_24449/*"seLoop"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this != 1262982374 )
              goto LABEL_161;
            this = (CommonMessageManager_o *)System_String__op_Equality(v48, (System_String_o *)StringLiteral_26239/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_161;
            this = *v170;
            if ( !*v170 )
              goto LABEL_238;
            v65 = this->fields.m_CachedPtr;
            tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_26090/*"wait"*/;
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = v65 + 8 * v67;
              LODWORD(this->fields.m_CancellationTokenSource) = v67 + 1;
              *(_QWORD *)(v68 + 32) = tagDataList;
              sub_2213A04(
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
            v138 = (System_String_o *)StringLiteral_25367/*"time "*/;
            v139 = v47->fields._stringLength <= v137 + 1
                 ? (System_String_o *)StringLiteral_1198/*"0"*/
                 : System_String__Substring(v47, v137 + 1, 0);
            this = (CommonMessageManager_o *)System_String__Concat_75651716(v138, v139, 0);
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
                v64 = &StringLiteral_19893/*"end"*/;
                goto LABEL_136;
              case 0x6EE5B7E7:
                v64 = &StringLiteral_24821/*"soundStopAll"*/;
                goto LABEL_136;
              case 0x7B80C780:
                v64 = &StringLiteral_24850/*"speed"*/;
                goto LABEL_136;
            }
            goto LABEL_161;
          }
          if ( (_DWORD)this != 1550717474 )
          {
            if ( (_DWORD)this == 1572001937 )
            {
              v64 = &StringLiteral_17882/*"bgm"*/;
              goto LABEL_136;
            }
            if ( (_DWORD)this == 1719366448 )
            {
              v64 = &StringLiteral_22132/*"jingleStop"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v69 = &StringLiteral_18792/*"clear"*/;
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = v70 + 8 * v72;
            LODWORD(this->fields.m_CancellationTokenSource) = v72 + 1;
            *(_QWORD *)(v73 + 32) = v48;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 32), (int32_t)v48, v58, v59, v60, v61, v62, v63);
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
                v64 = &StringLiteral_26090/*"wait"*/;
                goto LABEL_136;
              case 0x9859D490:
                v64 = &StringLiteral_17869/*"betweenHeight"*/;
                goto LABEL_136;
              case 0xA8F18501:
                v64 = &StringLiteral_20473/*"fontSize"*/;
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
              v64 = &StringLiteral_26075/*"voice"*/;
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v106 = v103 + 8 * v105;
              LODWORD(this->fields.m_CancellationTokenSource) = v105 + 1;
              *(_QWORD *)(v106 + 32) = 0;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v106 + 32), 0, v58, v59, v60, v61, v62, v63);
            }
            v107 = *scriptDataList;
            this = (CommonMessageManager_o *)System_String__Concat_75694928(
                                               (System_String_o *)StringLiteral_16427/*"["*/,
                                               v47,
                                               (System_String_o *)StringLiteral_16691/*"]"*/,
                                               0);
            if ( !v107 )
              goto LABEL_238;
            goto LABEL_168;
          }
          v69 = &StringLiteral_23771/*"page"*/;
          goto LABEL_127;
        }
        if ( (unsigned int)this <= 0xE90C310B )
        {
          switch ( (_DWORD)this )
          {
            case 0xC73F3BA9:
              v64 = &StringLiteral_26083/*"voiceStop"*/;
              goto LABEL_136;
            case 0xE30C2799:
              v64 = &StringLiteral_20246/*"f"*/;
              goto LABEL_136;
            case 0xE90C310B:
              v64 = &StringLiteral_22219/*"l"*/;
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
              v64 = &StringLiteral_24383/*"s"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v92 = &StringLiteral_24034/*"q"*/;
        }
        else
        {
          if ( (_DWORD)this != -301188886 )
          {
            if ( (_DWORD)this == -281374168 )
            {
              v64 = &StringLiteral_22131/*"jingle"*/;
              goto LABEL_136;
            }
            goto LABEL_161;
          }
          v92 = &StringLiteral_22160/*"k"*/;
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = v93 + 8 * v95;
          LODWORD(this->fields.m_CancellationTokenSource) = v95 + 1;
          *(_QWORD *)(v96 + 32) = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 32), 0, v58, v59, v60, v61, v62, v63);
        }
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_238;
        v116 = this->fields.m_CachedPtr;
        tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16632/*"[r]"*/;
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
        }
        else
        {
          v119 = v116 + 8 * v118;
          LODWORD(this->fields.m_CancellationTokenSource) = v118 + 1;
          *(_QWORD *)(v119 + 32) = tagDataList;
          sub_2213A04(
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = v129 + 8 * v131;
          LODWORD(this->fields.m_CancellationTokenSource) = v131 + 1;
          *(_QWORD *)(v132 + 32) = v48;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v132 + 32), (int32_t)v48, v120, v121, v122, v123, v124, v125);
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
          sub_2213A04(v90, (int32_t)tagDataList, v74, v75, v76, v77, v78, v79);
          goto LABEL_175;
        }
        v91 = v134[4];
LABEL_174:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)tagDataList,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91 + 192) + 112LL));
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
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
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v16);
        v31 = System_Char__ToString((uint16_t)v171, 0);
LABEL_27:
        v12 = System_String__Concat_75651716(v12, v31, 0);
        if ( v13 >= stringLength )
        {
          v140 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_219;
        }
      }
    }
    if ( !*(_DWORD *)(qword_5984388 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984388, v16);
    v27 = System_Char__ToString((uint16_t)v171, 0);
    v12 = System_String__Concat_75651716(v12, v27, 0);
    if ( v13 < stringLength )
    {
      while ( 1 )
      {
        v28 = v13 + 1;
        v171[0] = System_String__get_Chars(analysData, v13, 0);
        if ( v171[0] == 34 )
          break;
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v29);
        v30 = System_Char__ToString((uint16_t)v171, 0);
        v12 = System_String__Concat_75651716(v12, v30, 0);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = v147 + 8 * v149;
            LODWORD(this->fields.m_CancellationTokenSource) = v149 + 1;
            *(_QWORD *)(v150 + 32) = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v150 + 32), 0, v141, v142, v143, v144, v145, v146);
          }
          if ( v12 )
          {
            v151 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_75703400(
                                               v12,
                                               v166->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16632/*"[r]"*/,
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
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
                }
                else
                {
                  v162 = &v158->obj.klass + v160;
                  v151->fields._size = v160 + 1;
                  v162[4] = (Il2CppClass *)v161;
                  sub_2213A04(
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
                        *(const MethodInfo_4467270 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
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
    sub_2213CDC(this, tagDataList);
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
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_59725A6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11993/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_2213A60(&StringLiteral_12003/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_2213A60(&StringLiteral_11996/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_2213A60(&StringLiteral_12002/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_59725A6 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11993/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.codeTalkString,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.codeVoiceString,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v24;
  sub_2213A04(
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_59725AB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22652/*"messageOn"*/);
    sub_2213A60(&StringLiteral_18792/*"clear"*/);
    sub_2213A60(&StringLiteral_20469/*"font"*/);
    sub_2213A60(&StringLiteral_23776/*"page3"*/);
    sub_2213A60(&StringLiteral_22650/*"messageOff"*/);
    sub_2213A60(&StringLiteral_23775/*"page2"*/);
    sub_2213A60(&StringLiteral_20246/*"f"*/);
    sub_2213A60(&StringLiteral_24850/*"speed"*/);
    sub_2213A60(&StringLiteral_22160/*"k"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_24034/*"q"*/);
    sub_2213A60(&StringLiteral_23791/*"parameter error"*/);
    sub_2213A60(&StringLiteral_25433/*"touch2"*/);
    sub_2213A60(&StringLiteral_23771/*"page"*/);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    sub_2213A60(&StringLiteral_23790/*"parameter be unnecessary"*/);
    sub_2213A60(&StringLiteral_19893/*"end"*/);
    sub_2213A60(&StringLiteral_22642/*"message2"*/);
    sub_2213A60(&StringLiteral_22219/*"l"*/);
    sub_2213A60(&StringLiteral_20473/*"fontSize"*/);
    sub_2213A60(&StringLiteral_22639/*"message"*/);
    sub_2213A60(&StringLiteral_25260/*"talkName"*/);
    sub_2213A60(&StringLiteral_25431/*"touch"*/);
    sub_2213A60(&StringLiteral_22643/*"message3"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_24383/*"s"*/);
    sub_2213A60(&StringLiteral_17869/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_2213A60(&StringLiteral_18794/*"clear2"*/);
    byte_59725AB = 1;
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
        sub_2213CDC(this, method);
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
                                                 (System_String_o *)StringLiteral_24034/*"q"*/,
                                                 0);
              if ( v14 || ((unsigned __int8)this & 1) != 0 )
                goto LABEL_172;
LABEL_153:
              v56 = StringLiteral_22639/*"message"*/;
              v5->fields.state = 4;
              v5->fields.waitType = (struct System_String_o *)v56;
              sub_2213A04(
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
              v41 = &StringLiteral_24383/*"s"*/;
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
                  v21 = &StringLiteral_23791/*"parameter error"*/;
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
              v33 = &StringLiteral_22219/*"l"*/;
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
                      sub_2213CE4(this);
                    v51 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_23791/*"parameter error"*/;
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
                                                 (System_String_o *)StringLiteral_22160/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23790/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                v42 = &StringLiteral_25431/*"touch"*/;
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
              v46 = &StringLiteral_20473/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_152;
              v46 = &StringLiteral_20246/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_26090/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_191;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v21 = &StringLiteral_23791/*"parameter error"*/;
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
            v33 = &StringLiteral_17869/*"betweenHeight"*/;
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
                                                 (System_String_o *)StringLiteral_25260/*"talkName"*/,
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
                                                 (System_String_o *)StringLiteral_22652/*"messageOn"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23791/*"parameter error"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
                v22 = StringLiteral_22639/*"message"*/;
                v5->fields.state = 4;
                v5->fields.waitType = (struct System_String_o *)v22;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.waitType, v22, v23, v24, v25, v26, v27, v28);
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
                                                 (System_String_o *)StringLiteral_18792/*"clear"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_191;
                v21 = &StringLiteral_23790/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_171;
                v42 = &StringLiteral_18792/*"clear"*/;
                goto LABEL_150;
              }
            }
            goto LABEL_152;
          }
          v46 = &StringLiteral_20469/*"font"*/;
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
              v21 = &StringLiteral_23791/*"parameter error"*/;
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
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_23771/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_191;
              v21 = &StringLiteral_23790/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_171;
              v42 = &StringLiteral_23771/*"page"*/;
LABEL_150:
              v30 = (System_String_o *)*v42;
              v5->fields.state = 4;
              v5->fields.waitType = v30;
LABEL_151:
              v29 = (MissionNaviTransitionBoardItem_o *)&v5->fields.waitType;
LABEL_155:
              sub_2213A04(v29, (int32_t)v30, (System_String_o *)v3, v16, v17, v18, v19, v20);
              goto LABEL_172;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22650/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_191;
              v21 = &StringLiteral_23791/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19893/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_191;
            v21 = &StringLiteral_23790/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_171;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_172;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v41 = &StringLiteral_24850/*"speed"*/;
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
          if ( v32 == 1770621400 && System_String__op_Equality(v31, (System_String_o *)StringLiteral_25431/*"touch"*/, 0) )
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
            v65 = &StringLiteral_25433/*"touch2"*/;
            goto LABEL_190;
          }
          goto LABEL_175;
        }
        if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18792/*"clear"*/, 0) )
          goto LABEL_175;
        if ( v5->fields.isBusy )
          goto LABEL_187;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v45 = &StringLiteral_18794/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22639/*"message"*/, 0) )
        goto LABEL_175;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_187;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v45 = &StringLiteral_22642/*"message2"*/;
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
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22643/*"message3"*/, 0) || v5->fields.isScroll )
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
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_25433/*"touch2"*/, 0)
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
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_23771/*"page"*/, 0) )
        goto LABEL_175;
      if ( v5->fields.isBusy )
        goto LABEL_187;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v45 = &StringLiteral_23775/*"page2"*/;
LABEL_120:
      v40 = *v45;
      *p_waitType = (System_String_o *)*v45;
LABEL_121:
      sub_2213A04(
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
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18794/*"clear2"*/, 0)
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
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_23776/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_175;
    goto LABEL_83;
  }
  if ( v32 == -16520990 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22642/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v40) = StringLiteral_22643/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_22643/*"message3"*/;
    goto LABEL_121;
  }
  if ( v32 == -353306356
    && System_String__op_Equality(v31, (System_String_o *)StringLiteral_23775/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v65 = &StringLiteral_23776/*"page3"*/;
LABEL_190:
    v66 = *v65;
    v5->fields.waitType = (struct System_String_o *)*v65;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.waitType, v66, v59, v60, v61, v62, v63, v64);
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
  sub_2213A04(
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
  sub_2213A04(
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
  sub_2213A04(
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

  if ( (byte_59725A7 & 1) == 0 )
  {
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    byte_59725A7 = 1;
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
  sub_2213A04(
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