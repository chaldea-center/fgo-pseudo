void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D3268B & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageManager_TypeInfo);
    byte_4D3268B = 1;
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int size; // w8
  Il2CppObject *Item; // x0
  int32_t v21; // w21
  System_String_o *v22; // x0
  Il2CppObject *v23; // x2
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  System_String_o *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  int v39; // w8
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  System_String_o *v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  _WORD v64[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_4D32689 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&StringLiteral_1738/*"="*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_342/*"\""*/);
    this = (CommonMessageManager_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32689 = 1;
  }
  v64[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(v3, v8, 0);
      v64[0] = Chars;
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
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_113/*" "*/, 0)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v64, 0);
          items = v5->fields._items;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_72;
          v50 = v5->fields._size;
          if ( (unsigned int)v50 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + v50;
            v5->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)data;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)data, v42, v43, v44, v45, v46, v47);
          }
          goto LABEL_63;
        }
        v21 = v5->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__ToString((uint16_t)v64, 0);
        if ( v22 )
          v23 = (Il2CppObject *)v22;
        else
          v23 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v21 - 1,
          v23,
          (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v10 = System_Char__ToString((uint16_t)v64, 0);
            v6 = System_String__Concat_64425724(v6, v10, 0);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v11 = v7 + 1;
                v64[0] = System_String__get_Chars(v3, v7, 0);
                if ( v64[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v12 = System_Char__ToString((uint16_t)v64, 0);
                v6 = System_String__Concat_64425724(v6, v12, 0);
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
            v28 = (System_String_o *)StringLiteral_342/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v28 = System_Char__ToString((uint16_t)v64, 0);
          }
          v6 = System_String__Concat_64425724(v6, v28, 0);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v24 = v5->fields._items;
          v25 = Method_System_Collections_Generic_List_string__Add__;
          ++v5->fields._version;
          if ( !v24 )
            goto LABEL_72;
          v26 = v5->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v6,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v5->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v6;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v6, v13, v14, v15, v16, v17, v18);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v64, 0);
          v35 = v5->fields._items;
          v36 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v35 )
            goto LABEL_72;
          v37 = v5->fields._size;
          if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v5->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)data;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)data, v29, v30, v31, v32, v33, v34);
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v39 = v5->fields._size;
        if ( v39 < 1 )
          goto LABEL_51;
        v40 = System_Collections_Generic_List_object___get_Item(
                v5,
                v39 - 1,
                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v40, (System_String_o *)StringLiteral_1738/*"="*/, 0) )
        {
          v41 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v41, (System_String_o *)StringLiteral_809/*","*/, 0) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v7 >= stringLength )
      {
        v52 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v52 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v52, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1C93D2C(this, data);
  }
  if ( !v5 )
    goto LABEL_72;
  v59 = v5->fields._items;
  v60 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v59 )
    goto LABEL_72;
  v61 = v5->fields._size;
  if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v59->obj.klass + v61;
    v5->fields._size = v61 + 1;
    v62[4] = (Il2CppClass *)v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v6, v53, v54, v55, v56, v57, v58);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x21
  System_String_o *v6; // x0
  Il2CppObject *v7; // x1
  System_String_array *v8; // x23
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  System_String_o **v15; // x5
  int64_t v16; // x6
  System_String_o *v17; // x7
  il2cpp_array_size_t max_length; // x8
  __int64 v19; // x26
  System_String_o **m_Items; // x9
  __int64 v21; // x29
  __int64 v22; // x24
  System_String_o **v23; // x27
  System_String_o *v24; // x28
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  System_String_o *v27; // x28
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _QWORD *v34; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  _QWORD *v44; // x9
  struct System_Object_array *v45; // x8
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  System_String_o *v64; // x1
  Il2CppClass **v65; // x0
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  int32_t v69; // w26
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x8
  _QWORD *v87; // x9
  struct System_Object_array *v88; // x8
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  _QWORD *v94; // x9
  struct System_Object_array *v95; // x8
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  _QWORD *v104; // x9
  struct System_Object_array *v105; // x8
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  struct System_Int32_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  struct System_Int32_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  _QWORD *v138; // x9
  struct System_Object_array *v139; // x8
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  struct System_Int32_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  struct System_String_array *v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  struct System_String_array *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  struct System_Int32_array *v159; // x0
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v167; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D32687 & 1) == 0 )
  {
    sub_1C93AD4(&char___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C93AD4(&StringLiteral_370/*"#"*/);
    sub_1C93AD4(&StringLiteral_1045/*"//"*/);
    sub_1C93AD4(&StringLiteral_20310/*"i"*/);
    sub_1C93AD4(&StringLiteral_21358/*"k"*/);
    sub_1C93AD4(&StringLiteral_23129/*"q"*/);
    sub_1C93AD4(&StringLiteral_479/*"%"*/);
    sub_1C93AD4(&StringLiteral_501/*"&"*/);
    sub_1C93AD4(&StringLiteral_21502/*"line"*/);
    sub_1C93AD4(&StringLiteral_24290/*"talkStart"*/);
    sub_1C93AD4(&StringLiteral_20513/*"image"*/);
    sub_1C93AD4(&StringLiteral_16098/*"[r]"*/);
    sub_1C93AD4(&StringLiteral_24286/*"talkName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32687 = 1;
  }
  v5 = (System_Array_o *)sub_1C93B7C(char___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v5,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
    0);
  if ( !scriptData )
    goto LABEL_144;
  v8 = System_String__Split_64474932(scriptData, (System_Char_array *)v5, 1, 0);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v9;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v11;
  lastMessageIndex = -1;
  if ( !v8 )
    goto LABEL_144;
  max_length = v8->max_length;
  if ( (int)max_length < 1 )
  {
    LODWORD(v19) = 0;
    goto LABEL_122;
  }
  v19 = 0;
  m_Items = v8->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v21 = 0;
    v22 = (v19 << 32) + 0x100000000LL;
    v23 = &m_Items[v19];
    while ( 1 )
    {
      if ( (int)v19 + (int)v21 >= (unsigned int)max_length )
        sub_1C93D34(v6);
      v24 = v23[v21];
      if ( !v24 )
        goto LABEL_144;
      if ( v24->fields._stringLength < 1 )
        goto LABEL_53;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      v6 = (System_String_o *)System_String__StartsWith(v23[v21], (System_String_o *)StringLiteral_1045/*"//"*/, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        goto LABEL_53;
      v6 = (System_String_o *)System_String__StartsWith(v24, this->fields.codeCommentString, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v24, this->fields.codeTalkString, 0) )
        break;
      v6 = (System_String_o *)System_String__StartsWith(v24, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v6 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v15,
          v24,
          v19 + v21 + 1,
          v167);
LABEL_18:
        v6 = (System_String_o *)System_String__op_Inequality(v25, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          v6 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v6 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_144;
            v34 = Method_System_Collections_Generic_List_string__Add__;
            v7 = (Il2CppObject *)StringLiteral_24290/*"talkStart"*/;
            items = v9->fields._items;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v7,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v7;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v7, v28, v29, v30, v31, v32, v33);
            }
            if ( !v10 )
              goto LABEL_144;
            v44 = Method_System_Collections_Generic_List_string__Add__;
            v7 = (Il2CppObject *)StringLiteral_1/*""*/;
            v45 = v10->fields._items;
            ++v10->fields._version;
            if ( !v45 )
              goto LABEL_144;
            v46 = v10->fields._size;
            if ( (unsigned int)v46 >= LODWORD(v45->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &v45->obj.klass + v46;
              v10->fields._size = v46 + 1;
              v47[4] = (Il2CppClass *)v7;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v7, v38, v39, v40, v41, v42, v43);
            }
            if ( !v11 )
              goto LABEL_144;
            v48 = v11->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !v48 )
              goto LABEL_144;
            v50 = v11->fields._size;
            if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v19 + v21 + 1,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = v50 + 1;
              v48->m_Items[v50] = v19 + v21 + 1;
            }
          }
          else if ( !v9 )
          {
            goto LABEL_144;
          }
          v51 = v9->fields._items;
          v52 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( !v51 )
            goto LABEL_144;
          v53 = v9->fields._size;
          if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              0,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &v51->obj.klass + v53;
            v9->fields._size = v53 + 1;
            v54[4] = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), 0, v28, v29, v30, v31, v32, v33);
          }
          if ( !v10 )
            goto LABEL_144;
          lastMessageIndex = v10->fields._size;
          if ( !v25 )
            goto LABEL_144;
          v6 = System_String__Replace_64472288(
                 v25,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_16098/*"[r]"*/,
                 0);
          v61 = v10->fields._items;
          v62 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( !v61 )
            goto LABEL_144;
          v63 = v10->fields._size;
          v64 = v6;
          if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v6,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v61->obj.klass + v63;
            v10->fields._size = v63 + 1;
            v65[4] = (Il2CppClass *)v64;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v64, v55, v56, v57, v58, v59, v60);
          }
          if ( !v11 )
            goto LABEL_144;
          v66 = v11->fields._items;
          v67 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !v66 )
            goto LABEL_144;
          v68 = v11->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v19 + v21 + 1,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = v68 + 1;
            v66->m_Items[v68] = v19 + v21 + 1;
          }
        }
      }
LABEL_53:
      max_length = v8->max_length;
      ++v21;
      v22 += 0x100000000LL;
      if ( v19 + v21 >= (int)max_length )
      {
        LODWORD(v19) = v19 + v21;
        goto LABEL_122;
      }
    }
    v26 = v24;
    v27 = (System_String_o *)StringLiteral_24286/*"talkName"*/;
    v25 = System_String__Substring(v26, 1, 0);
    if ( !v27 )
      goto LABEL_18;
    v69 = v19 + v21 + 1;
    v6 = (System_String_o *)System_String__op_Equality(v27, (System_String_o *)StringLiteral_21358/*"k"*/, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      v6 = (System_String_o *)System_String__op_Equality(v27, (System_String_o *)StringLiteral_23129/*"q"*/, 0);
      if ( ((unsigned __int8)v6 & 1) == 0 )
      {
        if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_24286/*"talkName"*/, 0) )
        {
          v6 = (System_String_o *)System_String__op_Equality(v27, (System_String_o *)StringLiteral_24286/*"talkName"*/, 0);
          v86 = StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v6 & 1) != 0 )
            v86 = (__int64)v25;
          a = (System_String_o *)v86;
        }
        else if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_20310/*"i"*/, 0)
               || System_String__op_Equality(v27, (System_String_o *)StringLiteral_20513/*"image"*/, 0)
               || System_String__op_Equality(v27, (System_String_o *)StringLiteral_21502/*"line"*/, 0)
               || System_String__StartsWith(v27, (System_String_o *)StringLiteral_479/*"%"*/, 0)
               || System_String__StartsWith(v27, (System_String_o *)StringLiteral_501/*"&"*/, 0)
               || (v6 = (System_String_o *)System_String__StartsWith(v27, (System_String_o *)StringLiteral_370/*"#"*/, 0),
                   ((unsigned __int8)v6 & 1) != 0) )
        {
          v6 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v6 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_144;
            v94 = Method_System_Collections_Generic_List_string__Add__;
            v7 = (Il2CppObject *)StringLiteral_24290/*"talkStart"*/;
            v95 = v9->fields._items;
            ++v9->fields._version;
            if ( !v95 )
              goto LABEL_144;
            v96 = v9->fields._size;
            if ( (unsigned int)v96 >= LODWORD(v95->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v7,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
            }
            else
            {
              v97 = &v95->obj.klass + v96;
              v9->fields._size = v96 + 1;
              v97[4] = (Il2CppClass *)v7;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v7, v70, v71, v72, v73, v74, v75);
            }
            if ( !v10 )
              goto LABEL_144;
            v104 = Method_System_Collections_Generic_List_string__Add__;
            v7 = (Il2CppObject *)StringLiteral_1/*""*/;
            v105 = v10->fields._items;
            ++v10->fields._version;
            if ( !v105 )
              goto LABEL_144;
            v106 = v10->fields._size;
            if ( (unsigned int)v106 >= LODWORD(v105->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &v105->obj.klass + v106;
              v10->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)v7;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v107 + 4), (int32_t)v7, v98, v99, v100, v101, v102, v103);
            }
            if ( !v11 )
              goto LABEL_144;
            v108 = v11->fields._items;
            v109 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !v108 )
              goto LABEL_144;
            v110 = v11->fields._size;
            if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v69,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = v110 + 1;
              v108->m_Items[v110] = v69;
            }
          }
          else if ( !v10 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v10->fields._size;
        }
LABEL_104:
        if ( v9 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( lastMessageIndex < 0 )
      goto LABEL_104;
    if ( !v9 )
      goto LABEL_144;
    v76 = v9->fields._items;
    v77 = Method_System_Collections_Generic_List_string__Add__;
    ++v9->fields._version;
    if ( !v76 )
      goto LABEL_144;
    v78 = v9->fields._size;
    if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        0,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &v76->obj.klass + v78;
      v9->fields._size = v78 + 1;
      v79[4] = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v79 + 4), 0, v70, v71, v72, v73, v74, v75);
    }
    if ( !v10 )
      goto LABEL_144;
    v87 = Method_System_Collections_Generic_List_string__Add__;
    v7 = (Il2CppObject *)StringLiteral_16098/*"[r]"*/;
    v88 = v10->fields._items;
    ++v10->fields._version;
    if ( !v88 )
      goto LABEL_144;
    v89 = v10->fields._size;
    if ( (unsigned int)v89 >= LODWORD(v88->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        v7,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v88->obj.klass + v89;
      v10->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)v7, v80, v81, v82, v83, v84, v85);
    }
    if ( !v11 )
      goto LABEL_144;
    v91 = v11->fields._items;
    v92 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !v91 )
      goto LABEL_144;
    v93 = v11->fields._size;
    if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        v69,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = v93 + 1;
      v91->m_Items[v93] = v69;
    }
    lastMessageIndex = -1;
LABEL_105:
    v111 = v9->fields._items;
    v112 = Method_System_Collections_Generic_List_string__Add__;
    ++v9->fields._version;
    if ( !v111 )
      goto LABEL_144;
    v113 = v9->fields._size;
    if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v27,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
    }
    else
    {
      v114 = &v111->obj.klass + v113;
      v9->fields._size = v113 + 1;
      v114[4] = (Il2CppClass *)v27;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v114 + 4), (int32_t)v27, v70, v71, v72, v73, v74, v75);
    }
    if ( !v10 )
      goto LABEL_144;
    v121 = v10->fields._items;
    v122 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v121 )
      goto LABEL_144;
    v123 = v10->fields._size;
    if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v25,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
    }
    else
    {
      v124 = &v121->obj.klass + v123;
      v10->fields._size = v123 + 1;
      v124[4] = (Il2CppClass *)v25;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v124 + 4), (int32_t)v25, v115, v116, v117, v118, v119, v120);
    }
    if ( !v11 )
      goto LABEL_144;
    v125 = v11->fields._items;
    v126 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !v125 )
      goto LABEL_144;
    v127 = v11->fields._size;
    if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        v69,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = v127 + 1;
      v125->m_Items[v127] = v69;
    }
    max_length = v8->max_length;
    m_Items = v8->m_Items;
    v19 = v22 >> 32;
  }
  while ( v22 >> 32 < (int)max_length );
LABEL_122:
  if ( lastMessageIndex < 0 )
  {
    if ( v9 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v9 )
    goto LABEL_144;
  v128 = v9->fields._items;
  v129 = Method_System_Collections_Generic_List_string__Add__;
  ++v9->fields._version;
  if ( !v128 )
    goto LABEL_144;
  v130 = v9->fields._size;
  if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      0,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
  }
  else
  {
    v131 = &v128->obj.klass + v130;
    v9->fields._size = v130 + 1;
    v131[4] = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v131 + 4), 0, v12, v13, v14, (int32_t)v15, v16, v17);
  }
  if ( !v10 )
    goto LABEL_144;
  v138 = Method_System_Collections_Generic_List_string__Add__;
  v7 = (Il2CppObject *)StringLiteral_16098/*"[r]"*/;
  v139 = v10->fields._items;
  ++v10->fields._version;
  if ( !v139 )
    goto LABEL_144;
  v140 = v10->fields._size;
  if ( (unsigned int)v140 >= LODWORD(v139->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      v7,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v141 = &v139->obj.klass + v140;
    v10->fields._size = v140 + 1;
    v141[4] = (Il2CppClass *)v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v141 + 4), (int32_t)v7, v132, v133, v134, v135, v136, v137);
  }
  if ( !v11 )
    goto LABEL_144;
  v142 = v11->fields._items;
  v143 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !v142 )
    goto LABEL_144;
  v144 = v11->fields._size;
  if ( (unsigned int)v144 >= LODWORD(v142->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v19,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = v144 + 1;
    v142->m_Items[v144] = v19;
  }
LABEL_140:
  v145 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v145;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.executeTagList,
    (int32_t)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  if ( !v10
    || (v152 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v10,
                                               (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v152,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.executeDataList,
          (int32_t)v152,
          v153,
          v154,
          v155,
          v156,
          v157,
          v158),
        !v11)
    || (v159 = System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v159,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.executeLineList,
          (int32_t)v159,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165),
        (executeDataList = this->fields.executeDataList) == 0) )
  {
LABEL_144:
    sub_1C93D2C(v6, v7);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  uint16_t v26; // w28
  System_String_o *v27; // x0
  int v28; // w24
  System_String_o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  CommonMessageManager_o *v40; // x1
  Il2CppClass **v41; // x0
  intptr_t v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  System_String_o *v45; // x27
  System_String_o *v46; // x28
  int v47; // w24
  int32_t v48; // w1
  uint16_t v49; // w0
  System_String_o *v51; // x0
  int v52; // w26
  System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 *v60; // x8
  intptr_t v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  intptr_t v64; // x8
  __int64 *v65; // x8
  intptr_t v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  intptr_t v69; // x8
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_List_string__o **v76; // x27
  intptr_t v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  intptr_t v80; // x8
  intptr_t v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  intptr_t v84; // x8
  GrandQuestFolderBoardItem_o *v85; // x0
  __int64 v86; // x8
  __int64 *v87; // x8
  intptr_t v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  intptr_t v91; // x8
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  intptr_t v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  intptr_t v101; // x8
  System_Collections_Generic_List_string__o *v102; // x28
  struct System_String_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  intptr_t v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  int32_t v110; // w8
  intptr_t v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  intptr_t v114; // x8
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  intptr_t v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  intptr_t v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  intptr_t v127; // x8
  intptr_t v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  intptr_t v131; // x8
  int32_t v132; // w8
  System_String_o *v133; // x24
  System_String_o *v134; // x1
  System_String_o *v135; // x1
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  intptr_t v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  intptr_t v145; // x8
  System_Collections_Generic_List_object__o *v146; // x21
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  CommonMessageManager_o *v156; // x1
  Il2CppClass **v157; // x0
  intptr_t v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  CommonMessageManager_o *v161; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v165; // [xsp+20h] [xbp-70h]
  _WORD v166[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v161 = this;
  v165 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4D32688 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&StringLiteral_18139/*"clear"*/);
    sub_1C93AD4(&StringLiteral_19749/*"font"*/);
    sub_1C93AD4(&StringLiteral_19546/*"f"*/);
    sub_1C93AD4(&StringLiteral_23887/*"speed"*/);
    sub_1C93AD4(&StringLiteral_21358/*"k"*/);
    sub_1C93AD4(&StringLiteral_23129/*"q"*/);
    sub_1C93AD4(&StringLiteral_25033/*"voiceStop"*/);
    sub_1C93AD4(&StringLiteral_17274/*"bgm"*/);
    sub_1C93AD4(&StringLiteral_17276/*"bgmStop"*/);
    sub_1C93AD4(&StringLiteral_25185/*"wt"*/);
    sub_1C93AD4(&StringLiteral_23524/*"seStop"*/);
    sub_1C93AD4(&StringLiteral_22890/*"page"*/);
    sub_1C93AD4(&StringLiteral_25040/*"wait"*/);
    sub_1C93AD4(&StringLiteral_19196/*"end"*/);
    sub_1C93AD4(&StringLiteral_21341/*"jingle"*/);
    sub_1C93AD4(&StringLiteral_23515/*"se"*/);
    sub_1C93AD4(&StringLiteral_21415/*"l"*/);
    sub_1C93AD4(&StringLiteral_25027/*"voice"*/);
    sub_1C93AD4(&StringLiteral_24377/*"time "*/);
    sub_1C93AD4(&StringLiteral_19754/*"fontSize"*/);
    sub_1C93AD4(&StringLiteral_23522/*"seLoop"*/);
    sub_1C93AD4(&StringLiteral_342/*"\""*/);
    sub_1C93AD4(&StringLiteral_16098/*"[r]"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_23464/*"s"*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    sub_1C93AD4(&StringLiteral_17261/*"betweenHeight"*/);
    sub_1C93AD4(&StringLiteral_21342/*"jingleStop"*/);
    sub_1C93AD4(&StringLiteral_23860/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D32688 = 1;
  }
  v166[0] = 0;
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
        v166[0] = Chars;
        if ( Chars == 91 )
          break;
        v26 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v27 = System_Char__ToString((uint16_t)v166, 0);
        v12 = System_String__Concat_64425724(v12, v27, 0);
        if ( v26 == 34 )
        {
          if ( v13 < stringLength )
          {
            while ( 1 )
            {
              v28 = v13 + 1;
              v166[0] = System_String__get_Chars(analysData, v13, 0);
              if ( v166[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v29 = System_Char__ToString((uint16_t)v166, 0);
              v12 = System_String__Concat_64425724(v12, v29, 0);
              ++v13;
              if ( stringLength == v28 )
              {
                v13 = stringLength;
                goto LABEL_86;
              }
            }
            ++v13;
          }
LABEL_86:
          v12 = System_String__Concat_64425724(v12, (System_String_o *)StringLiteral_342/*"\""*/, 0);
        }
        if ( v13 >= stringLength )
        {
          v135 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v165;
        if ( !*v165 )
          goto LABEL_234;
        m_CachedPtr = this->fields.m_CachedPtr;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v25 + 32) = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 32), 0, v16, v17, v18, v19, v20, v21);
        }
        if ( !v12 )
          goto LABEL_234;
        v30 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_64472288(
                                           v12,
                                           v161->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16098/*"[r]"*/,
                                           0);
        if ( !v30 )
          goto LABEL_234;
        items = v30->fields._items;
        v38 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v30->fields._size;
        v40 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)this,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v42 = this->fields.m_CachedPtr;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v42 )
          goto LABEL_234;
        v44 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v44 + 1;
          *(_DWORD *)(v42 + 4 * v44 + 32) = line;
        }
      }
      v45 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
      {
        v46 = 0;
      }
      else
      {
        v46 = 0;
        v47 = 0;
        v48 = v13;
        do
        {
          v13 = v48 + 1;
          v49 = System_String__get_Chars(analysData, v48, 0);
          v166[0] = v49;
          if ( v49 == 91 )
          {
            ++v47;
          }
          else if ( v49 == 93 )
          {
            if ( --v47 < 0 )
              break;
          }
          else if ( v49 == 32 && v46 == 0 )
          {
            v46 = v45;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v51 = System_Char__ToString((uint16_t)v166, 0);
          v45 = System_String__Concat_64425724(v45, v51, 0);
          if ( v166[0] == 34 )
          {
            if ( v13 < stringLength )
            {
              while ( 1 )
              {
                v52 = v13 + 1;
                v166[0] = System_String__get_Chars(analysData, v13, 0);
                if ( v166[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v53 = System_Char__ToString((uint16_t)v166, 0);
                v45 = System_String__Concat_64425724(v45, v53, 0);
                ++v13;
                if ( stringLength == v52 )
                {
                  v13 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v13;
            }
LABEL_56:
            v45 = System_String__Concat_64425724(v45, (System_String_o *)StringLiteral_342/*"\""*/, 0);
          }
          v48 = v13;
        }
        while ( v13 < stringLength );
      }
      if ( !v46 )
        v46 = v45;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v46, 0);
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
                v87 = &StringLiteral_23129/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v87, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v165;
                  if ( !*v165 )
                    goto LABEL_234;
                  v88 = this->fields.m_CachedPtr;
                  v89 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v88 )
                    goto LABEL_234;
                  v90 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v91 = v88 + 8 * v90;
                    LODWORD(this->fields.m_CancellationTokenSource) = v90 + 1;
                    *(_QWORD *)(v91 + 32) = 0;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v91 + 32), 0, v54, v55, v56, v57, v58, v59);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16098/*"[r]"*/;
                  v111 = this->fields.m_CachedPtr;
                  v112 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v111 )
                    goto LABEL_234;
                  v113 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v114 = v111 + 8 * v113;
                    LODWORD(this->fields.m_CancellationTokenSource) = v113 + 1;
                    *(_QWORD *)(v114 + 32) = tagDataList;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v114 + 32),
                      (int32_t)tagDataList,
                      v92,
                      v93,
                      v94,
                      v95,
                      v96,
                      v97);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v121 = this->fields.m_CachedPtr;
                  v122 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v121 )
                    goto LABEL_234;
                  v123 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v123 >= *(_DWORD *)(v121 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_385C978 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v123 + 1;
                    *(_DWORD *)(v121 + 4 * v123 + 32) = line;
                  }
                  this = *v165;
                  if ( !*v165 )
                    goto LABEL_234;
                  v124 = this->fields.m_CachedPtr;
                  v125 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v124 )
                    goto LABEL_234;
                  v126 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v46,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v127 = v124 + 8 * v126;
                    LODWORD(this->fields.m_CancellationTokenSource) = v126 + 1;
                    *(_QWORD *)(v127 + 32) = v46;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v127 + 32),
                      (int32_t)v46,
                      v115,
                      v116,
                      v117,
                      v118,
                      v119,
                      v120);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v128 = this->fields.m_CachedPtr;
                  v129 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v128 )
                    goto LABEL_234;
                  v130 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v130 < *(_DWORD *)(v128 + 24) )
                  {
                    v131 = v128 + 8 * v130;
                    LODWORD(this->fields.m_CancellationTokenSource) = v130 + 1;
                    *(_QWORD *)(v131 + 32) = tagDataList;
                    v85 = (GrandQuestFolderBoardItem_o *)(v131 + 32);
                    goto LABEL_168;
                  }
                  v86 = v129[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v60 = &StringLiteral_23464/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v87 = &StringLiteral_21358/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v60 = &StringLiteral_21341/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v60 = &StringLiteral_25033/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v60 = &StringLiteral_19546/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v60 = &StringLiteral_21415/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v60 = &StringLiteral_25040/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v60 = &StringLiteral_17261/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v60 = &StringLiteral_19754/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v46 && !v46->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v65 = &StringLiteral_22890/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v60 = &StringLiteral_25027/*"voice"*/;
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
              v60 = &StringLiteral_19196/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v60 = &StringLiteral_23860/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v60, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v45 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v46->fields._stringLength + 1);
                v76 = v45->fields._stringLength <= (int)tagDataList
                    ? (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/
                    : (System_Collections_Generic_List_string__o **)System_String__Substring(
                                                                      v45,
                                                                      (int32_t)tagDataList,
                                                                      0);
                this = *v165;
                if ( !*v165 )
                  goto LABEL_234;
                v77 = this->fields.m_CachedPtr;
                v78 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v77 )
                  goto LABEL_234;
                v79 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v46,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v80 = v77 + 8 * v79;
                  LODWORD(this->fields.m_CancellationTokenSource) = v79 + 1;
                  *(_QWORD *)(v80 + 32) = v46;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 32), (int32_t)v46, v54, v55, v56, v57, v58, v59);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v81 = this->fields.m_CachedPtr;
                v82 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v81 )
                  goto LABEL_234;
                v83 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v83 < *(_DWORD *)(v81 + 24) )
                {
                  v84 = v81 + 8 * v83;
                  LODWORD(this->fields.m_CancellationTokenSource) = v83 + 1;
                  *(_QWORD *)(v84 + 32) = v76;
                  v85 = (GrandQuestFolderBoardItem_o *)(v84 + 32);
                  LODWORD(tagDataList) = (_DWORD)v76;
LABEL_168:
                  sub_1C93A78(v85, (int32_t)tagDataList, v70, v71, v72, v73, v74, v75);
                  goto LABEL_171;
                }
                v86 = v82[4];
                tagDataList = v76;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v60 = &StringLiteral_23887/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v65 = &StringLiteral_18139/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v65, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v165;
                if ( !*v165 )
                  goto LABEL_234;
                v66 = this->fields.m_CachedPtr;
                v67 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v66 )
                  goto LABEL_234;
                v68 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v46,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = v66 + 8 * v68;
                  LODWORD(this->fields.m_CancellationTokenSource) = v68 + 1;
                  *(_QWORD *)(v69 + 32) = v46;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v46, v54, v55, v56, v57, v58, v59);
                }
                if ( !v45 )
                  goto LABEL_234;
                v110 = v46->fields._stringLength;
                v102 = *scriptDataList;
                if ( v45->fields._stringLength <= v110 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v45, v110 + 1, 0);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v102 )
                  goto LABEL_234;
                v103 = v102->fields._items;
                v104 = Method_System_Collections_Generic_List_string__Add__;
                ++v102->fields._version;
                if ( !v103 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v60 = &StringLiteral_17274/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v60 = &StringLiteral_21342/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v60 = &StringLiteral_23515/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v60 = &StringLiteral_23522/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)StringLiteral_25185/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v165;
              if ( !*v165 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_25040/*"wait"*/;
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
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = v61 + 8 * v63;
                LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
                *(_QWORD *)(v64 + 32) = tagDataList;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v64 + 32),
                  (int32_t)tagDataList,
                  v54,
                  v55,
                  v56,
                  v57,
                  v58,
                  v59);
              }
              if ( !v45 )
                goto LABEL_234;
              v132 = v46->fields._stringLength;
              v102 = *scriptDataList;
              v133 = (System_String_o *)StringLiteral_24377/*"time "*/;
              v134 = v45->fields._stringLength <= v132 + 1
                   ? (System_String_o *)StringLiteral_1116/*"0"*/
                   : System_String__Substring(v45, v132 + 1, 0);
              this = (CommonMessageManager_o *)System_String__Concat_64425724(v133, v134, 0);
              if ( !v102 )
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
            v60 = &StringLiteral_19749/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v60 = &StringLiteral_23524/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v60 = &StringLiteral_17276/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v165;
      if ( !*v165 )
        goto LABEL_234;
      v98 = this->fields.m_CachedPtr;
      v99 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v98 )
        goto LABEL_234;
      v100 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = v98 + 8 * v100;
        LODWORD(this->fields.m_CancellationTokenSource) = v100 + 1;
        *(_QWORD *)(v101 + 32) = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v101 + 32), 0, v54, v55, v56, v57, v58, v59);
      }
      v102 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_64463988(
                                         (System_String_o *)StringLiteral_15904/*"["*/,
                                         v45,
                                         (System_String_o *)StringLiteral_16156/*"]"*/,
                                         0);
      if ( !v102 )
        goto LABEL_234;
LABEL_164:
      v103 = v102->fields._items;
      v104 = Method_System_Collections_Generic_List_string__Add__;
      ++v102->fields._version;
      if ( !v103 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v105 = v102->fields._size;
      if ( (unsigned int)v105 < LODWORD(v103->max_length) )
      {
        v106 = &v103->obj.klass + v105;
        v102->fields._size = v105 + 1;
        v106[4] = (Il2CppClass *)tagDataList;
        v85 = (GrandQuestFolderBoardItem_o *)(v106 + 4);
        goto LABEL_168;
      }
      v86 = v104[4];
      this = (CommonMessageManager_o *)v102;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v86 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v107 = this->fields.m_CachedPtr;
      v108 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v107 )
        goto LABEL_234;
      v109 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v109 + 1;
        *(_DWORD *)(v107 + 4 * v109 + 32) = line;
      }
LABEL_176:
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      v135 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
        goto LABEL_215;
    }
  }
  v135 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v135, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v165;
      if ( *v165 )
      {
        v142 = this->fields.m_CachedPtr;
        v143 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v142 )
        {
          v144 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = v142 + 8 * v144;
            LODWORD(this->fields.m_CancellationTokenSource) = v144 + 1;
            *(_QWORD *)(v145 + 32) = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v145 + 32), 0, v136, v137, v138, v139, v140, v141);
          }
          if ( v12 )
          {
            v146 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_64472288(
                                               v12,
                                               v161->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16098/*"[r]"*/,
                                               0);
            if ( v146 )
            {
              v153 = v146->fields._items;
              v154 = Method_System_Collections_Generic_List_string__Add__;
              ++v146->fields._version;
              if ( v153 )
              {
                v155 = v146->fields._size;
                v156 = this;
                if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v146,
                    (Il2CppObject *)this,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = &v153->obj.klass + v155;
                  v146->fields._size = v155 + 1;
                  v157[4] = (Il2CppClass *)v156;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v157 + 4),
                    (int32_t)v156,
                    v147,
                    v148,
                    v149,
                    v150,
                    v151,
                    v152);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v158 = this->fields.m_CachedPtr;
                  v159 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v158 )
                  {
                    v160 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v160 + 1;
                      *(_DWORD *)(v158 + 4 * v160 + 32) = line;
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
    sub_1C93D2C(this, tagDataList);
  }
}


void CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *callbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D32685 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11572/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1C93AD4(&StringLiteral_11582/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1C93AD4(&StringLiteral_11575/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1C93AD4(&StringLiteral_11581/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4D32685 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11572/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11581/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.codeTalkString, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.codeVoiceString, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11575/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.codeReturnString, (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))touchCallbackFunc->fields.invoke_impl)(
      touchCallbackFunc->fields.method_code,
      touchCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnLongPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *longPressCallbackFunc; // x20

  ScriptMessageCommonManager__OnLongPressWindow((ScriptMessageCommonManager_o *)this, 0);
  longPressCallbackFunc = this->fields.longPressCallbackFunc;
  if ( longPressCallbackFunc )
  {
    this->fields.longPressCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))longPressCallbackFunc->fields.invoke_impl)(
      longPressCallbackFunc->fields.method_code,
      longPressCallbackFunc->fields.method);
  }
}


void CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 *v21; // x8
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  GrandQuestFolderBoardItem_o *v29; // x0
  System_String_o *v30; // x1
  System_String_o *v31; // x23
  uint32_t v32; // w0
  __int64 *v33; // x8
  const MethodInfo *v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
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
  int32_t v56; // w1
  _BOOL4 isBusy; // w20
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 *v65; // x8
  __int64 v66; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4D3268A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21818/*"messageOn"*/);
    sub_1C93AD4(&StringLiteral_18139/*"clear"*/);
    sub_1C93AD4(&StringLiteral_19749/*"font"*/);
    sub_1C93AD4(&StringLiteral_22895/*"page3"*/);
    sub_1C93AD4(&StringLiteral_21816/*"messageOff"*/);
    sub_1C93AD4(&StringLiteral_22894/*"page2"*/);
    sub_1C93AD4(&StringLiteral_19546/*"f"*/);
    sub_1C93AD4(&StringLiteral_23887/*"speed"*/);
    sub_1C93AD4(&StringLiteral_21358/*"k"*/);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_23129/*"q"*/);
    sub_1C93AD4(&StringLiteral_22909/*"parameter error"*/);
    sub_1C93AD4(&StringLiteral_24441/*"touch2"*/);
    sub_1C93AD4(&StringLiteral_22890/*"page"*/);
    sub_1C93AD4(&StringLiteral_25040/*"wait"*/);
    sub_1C93AD4(&StringLiteral_22908/*"parameter be unnecessary"*/);
    sub_1C93AD4(&StringLiteral_19196/*"end"*/);
    sub_1C93AD4(&StringLiteral_21808/*"message2"*/);
    sub_1C93AD4(&StringLiteral_21415/*"l"*/);
    sub_1C93AD4(&StringLiteral_19754/*"fontSize"*/);
    sub_1C93AD4(&StringLiteral_21805/*"message"*/);
    sub_1C93AD4(&StringLiteral_24286/*"talkName"*/);
    sub_1C93AD4(&StringLiteral_24439/*"touch"*/);
    sub_1C93AD4(&StringLiteral_21809/*"message3"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_23464/*"s"*/);
    sub_1C93AD4(&StringLiteral_17261/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1C93AD4(&StringLiteral_18141/*"clear2"*/);
    byte_4D3268A = 1;
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
        sub_1C93D2C(this, method);
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
                                                 (System_String_o *)StringLiteral_23129/*"q"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v41 = &StringLiteral_23464/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v41, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                max_length = v15->max_length;
                if ( (_DWORD)max_length == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_859/*"-"*/,
                                                     0);
                  v48 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
                      goto LABEL_189;
                    v48 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_22909/*"parameter error"*/;
                  if ( max_length )
                    goto LABEL_169;
                  v48 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v48, 0);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v33 = &StringLiteral_21415/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v33, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v50 = v15->max_length;
                if ( (_DWORD)v50 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_859/*"-"*/,
                                                     0);
                  v51 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
LABEL_189:
                      sub_1C93D34(this);
                    v51 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_22909/*"parameter error"*/;
                  if ( v50 )
                    goto LABEL_169;
                  v51 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v51, 0);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_21358/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v21 = &StringLiteral_22908/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v42 = &StringLiteral_24439/*"touch"*/;
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
              v46 = &StringLiteral_19754/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v46 = &StringLiteral_19546/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_25040/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v21 = &StringLiteral_22909/*"parameter error"*/;
LABEL_169:
                if ( *v21 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v30 = v15->m_Items[0];
              *p_waitType = v30;
LABEL_151:
              v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v33 = &StringLiteral_17261/*"betweenHeight"*/;
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
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22890/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22908/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v42 = &StringLiteral_22890/*"page"*/;
LABEL_150:
              v30 = (System_String_o *)*v42;
              v5->fields.waitType = (struct System_String_o *)*v42;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21816/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22909/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19196/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22908/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v41 = &StringLiteral_23887/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v46 = &StringLiteral_19749/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v46, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
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
              v21 = &StringLiteral_22909/*"parameter error"*/;
              if ( v52 )
                goto LABEL_169;
              v54 = (ScriptMessageCommonManager_o *)v5;
              v53 = 0;
LABEL_145:
              v55 = 0;
            }
            ScriptMessageCommonManager__SetFontSize(v54, v53, v55, 0);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18139/*"clear"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22908/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v42 = &StringLiteral_18139/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24286/*"talkName"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21818/*"messageOn"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v21 = &StringLiteral_22909/*"parameter error"*/;
          if ( v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
          v5->fields.state = 4;
          v22 = StringLiteral_21805/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21805/*"message"*/;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v22, v23, v24, v25, v26, v27, v28);
          v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitMessage;
          LODWORD(v30) = 0;
          v5->fields.waitMessage = 0;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v14 )
      {
        v5->fields.state = 4;
        v56 = StringLiteral_21805/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21805/*"message"*/;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v56, (int32_t)v3, v16, v17, v18, v19, v20);
        v5->fields.waitMessage = v13;
        v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v30) = (_DWORD)v13;
LABEL_156:
        sub_1C93A78(v29, (int32_t)v30, (int32_t)v3, v16, v17, v18, v19, v20);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
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
          if ( v32 == 1770621400 && System_String__op_Equality(v31, (System_String_o *)StringLiteral_24439/*"touch"*/, 0) )
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
            v65 = &StringLiteral_24441/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18139/*"clear"*/, 0) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v45 = &StringLiteral_18141/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21805/*"message"*/, 0) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v45 = &StringLiteral_21808/*"message2"*/;
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
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21809/*"message3"*/, 0) || v5->fields.isScroll )
        goto LABEL_173;
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
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_24441/*"touch2"*/, 0)
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
  if ( v32 <= 0x91466F30 )
  {
    if ( v32 == -2124547466 )
    {
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22890/*"page"*/, 0) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v45 = &StringLiteral_22894/*"page2"*/;
LABEL_120:
      v40 = *v45;
      *p_waitType = (System_String_o *)*v45;
LABEL_121:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v40, (int32_t)v34, v35, v36, v37, v38, v39);
      goto LABEL_171;
    }
    if ( v32 != -1857654992
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18141/*"clear2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
    goto LABEL_115;
  }
  if ( v32 == -336528737 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22895/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v32 == -16520990 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21808/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v40) = StringLiteral_21809/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21809/*"message3"*/;
    goto LABEL_121;
  }
  if ( v32 == -353306356
    && System_String__op_Equality(v31, (System_String_o *)StringLiteral_22894/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v65 = &StringLiteral_22895/*"page3"*/;
LABEL_188:
    v66 = *v65;
    v5->fields.waitType = (struct System_String_o *)*v65;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v66, v59, v60, v61, v62, v63, v64);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.longPressCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.longPressCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
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
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  v8 = isDispLastTouchMark;
  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CommonMessageManager__AnalysScript(this, messageBlock, v15);
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

  if ( (byte_4D32686 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    byte_4D32686 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.touchCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.touchCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
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