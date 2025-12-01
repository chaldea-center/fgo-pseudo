void CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CC90EB & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageManager_TypeInfo);
    byte_4CC90EB = 1;
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
  if ( (byte_4CC90E9 & 1) == 0 )
  {
    sub_1C713B0(&char_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&StringLiteral_1737/*"="*/);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_341/*"\""*/);
    this = (CommonMessageManager_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC90E9 = 1;
  }
  v64[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
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
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__),
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + v50;
            v5->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)data;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)data, v42, v43, v44, v45, v46, v47);
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
          (const MethodInfo_381049C *)Method_System_Collections_Generic_List_string__set_Item__);
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
            v6 = System_String__Concat_64031724(v6, v10, 0);
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
                v6 = System_String__Concat_64031724(v6, v12, 0);
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
            v28 = (System_String_o *)StringLiteral_341/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v28 = System_Char__ToString((uint16_t)v64, 0);
          }
          v6 = System_String__Concat_64031724(v6, v28, 0);
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v5->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v6;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v6, v13, v14, v15, v16, v17, v18);
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v5->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)data;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)data, v29, v30, v31, v32, v33, v34);
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
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v40, (System_String_o *)StringLiteral_1737/*"="*/, 0) )
        {
          v41 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v41, (System_String_o *)StringLiteral_808/*","*/, 0) )
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
                                      (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1C71608(this, data);
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v59->obj.klass + v61;
    v5->fields._size = v61 + 1;
    v62[4] = (Il2CppClass *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v6, v53, v54, v55, v56, v57, v58);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  System_String_o **v17; // x5
  int64_t v18; // x6
  System_String_o *v19; // x7
  il2cpp_array_size_t max_length; // x8
  __int64 v21; // x26
  System_String_o **m_Items; // x9
  __int64 v23; // x29
  __int64 v24; // x24
  System_String_o **v25; // x27
  System_String_o *v26; // x28
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  System_String_o *v29; // x28
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  _QWORD *v36; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  _QWORD *v46; // x9
  struct System_Object_array *v47; // x8
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  System_String_o *v66; // x1
  Il2CppClass **v67; // x0
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  int32_t v71; // w26
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x8
  _QWORD *v89; // x9
  struct System_Object_array *v90; // x8
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  struct System_Int32_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  _QWORD *v96; // x9
  struct System_Object_array *v97; // x8
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  _QWORD *v106; // x9
  struct System_Object_array *v107; // x8
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  struct System_Int32_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  _QWORD *v140; // x9
  struct System_Object_array *v141; // x8
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  struct System_Int32_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  struct System_String_array *v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  struct System_String_array *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Int32_array *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v169; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CC90E7 & 1) == 0 )
  {
    sub_1C713B0(&char___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C713B0(&StringLiteral_369/*"#"*/);
    sub_1C713B0(&StringLiteral_1044/*"//"*/);
    sub_1C713B0(&StringLiteral_20167/*"i"*/);
    sub_1C713B0(&StringLiteral_21192/*"k"*/);
    sub_1C713B0(&StringLiteral_22955/*"q"*/);
    sub_1C713B0(&StringLiteral_478/*"%"*/);
    sub_1C713B0(&StringLiteral_500/*"&"*/);
    sub_1C713B0(&StringLiteral_21338/*"line"*/);
    sub_1C713B0(&StringLiteral_24104/*"talkStart"*/);
    sub_1C713B0(&StringLiteral_20363/*"image"*/);
    sub_1C713B0(&StringLiteral_16000/*"[r]"*/);
    sub_1C713B0(&StringLiteral_24100/*"talkName"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC90E7 = 1;
  }
  v5 = (System_Array_o *)sub_1C71458(char___TypeInfo, 5);
  v6.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v7 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v5, v6, 0);
  if ( !scriptData )
    goto LABEL_144;
  v10 = System_String__Split_64080932(scriptData, v7, 1, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v12;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v13;
  lastMessageIndex = -1;
  if ( !v10 )
    goto LABEL_144;
  max_length = v10->max_length;
  if ( (int)max_length < 1 )
  {
    LODWORD(v21) = 0;
    goto LABEL_122;
  }
  v21 = 0;
  m_Items = v10->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v23 = 0;
    v24 = (v21 << 32) + 0x100000000LL;
    v25 = &m_Items[v21];
    while ( 1 )
    {
      if ( (int)v21 + (int)v23 >= (unsigned int)max_length )
        sub_1C71610(v8);
      v26 = v25[v23];
      if ( !v26 )
        goto LABEL_144;
      if ( v26->fields._stringLength < 1 )
        goto LABEL_53;
      v27 = (System_String_o *)StringLiteral_1/*""*/;
      v8 = (System_String_o *)System_String__StartsWith(v25[v23], (System_String_o *)StringLiteral_1044/*"//"*/, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      v8 = (System_String_o *)System_String__StartsWith(v26, this->fields.codeCommentString, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v26, this->fields.codeTalkString, 0) )
        break;
      v8 = (System_String_o *)System_String__StartsWith(v26, this->fields.codeVoiceString, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v17,
          v26,
          v21 + v23 + 1,
          v169);
LABEL_18:
        v8 = (System_String_o *)System_String__op_Inequality(v27, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_144;
            v36 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_24104/*"talkStart"*/;
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
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v9;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v9, v30, v31, v32, v33, v34, v35);
            }
            if ( !v12 )
              goto LABEL_144;
            v46 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_1/*""*/;
            v47 = v12->fields._items;
            ++v12->fields._version;
            if ( !v47 )
              goto LABEL_144;
            v48 = v12->fields._size;
            if ( (unsigned int)v48 >= LODWORD(v47->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &v47->obj.klass + v48;
              v12->fields._size = v48 + 1;
              v49[4] = (Il2CppClass *)v9;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v9, v40, v41, v42, v43, v44, v45);
            }
            if ( !v13 )
              goto LABEL_144;
            v50 = v13->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v50 )
              goto LABEL_144;
            v52 = v13->fields._size;
            if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v21 + v23 + 1,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v52 + 1;
              v50->m_Items[v52] = v21 + v23 + 1;
            }
          }
          else if ( !v11 )
          {
            goto LABEL_144;
          }
          v53 = v11->fields._items;
          v54 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !v53 )
            goto LABEL_144;
          v55 = v11->fields._size;
          if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              0,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->obj.klass + v55;
            v11->fields._size = v55 + 1;
            v56[4] = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v56 + 4), 0, v30, v31, v32, v33, v34, v35);
          }
          if ( !v12 )
            goto LABEL_144;
          lastMessageIndex = v12->fields._size;
          if ( !v27 )
            goto LABEL_144;
          v8 = System_String__Replace_64078288(
                 v27,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_16000/*"[r]"*/,
                 0);
          v63 = v12->fields._items;
          v64 = Method_System_Collections_Generic_List_string__Add__;
          ++v12->fields._version;
          if ( !v63 )
            goto LABEL_144;
          v65 = v12->fields._size;
          v66 = v8;
          if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v8,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v63->obj.klass + v65;
            v12->fields._size = v65 + 1;
            v67[4] = (Il2CppClass *)v66;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v66, v57, v58, v59, v60, v61, v62);
          }
          if ( !v13 )
            goto LABEL_144;
          v68 = v13->fields._items;
          v69 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !v68 )
            goto LABEL_144;
          v70 = v13->fields._size;
          if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v21 + v23 + 1,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = v70 + 1;
            v68->m_Items[v70] = v21 + v23 + 1;
          }
        }
      }
LABEL_53:
      max_length = v10->max_length;
      ++v23;
      v24 += 0x100000000LL;
      if ( v21 + v23 >= (int)max_length )
      {
        LODWORD(v21) = v21 + v23;
        goto LABEL_122;
      }
    }
    v28 = v26;
    v29 = (System_String_o *)StringLiteral_24100/*"talkName"*/;
    v27 = System_String__Substring(v28, 1, 0);
    if ( !v29 )
      goto LABEL_18;
    v71 = v21 + v23 + 1;
    v8 = (System_String_o *)System_String__op_Equality(v29, (System_String_o *)StringLiteral_21192/*"k"*/, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = (System_String_o *)System_String__op_Equality(v29, (System_String_o *)StringLiteral_22955/*"q"*/, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( System_String__op_Equality(v29, (System_String_o *)StringLiteral_24100/*"talkName"*/, 0) )
        {
          v8 = (System_String_o *)System_String__op_Equality(v29, (System_String_o *)StringLiteral_24100/*"talkName"*/, 0);
          v88 = StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v8 & 1) != 0 )
            v88 = (__int64)v27;
          a = (System_String_o *)v88;
        }
        else if ( System_String__op_Equality(v29, (System_String_o *)StringLiteral_20167/*"i"*/, 0)
               || System_String__op_Equality(v29, (System_String_o *)StringLiteral_20363/*"image"*/, 0)
               || System_String__op_Equality(v29, (System_String_o *)StringLiteral_21338/*"line"*/, 0)
               || System_String__StartsWith(v29, (System_String_o *)StringLiteral_478/*"%"*/, 0)
               || System_String__StartsWith(v29, (System_String_o *)StringLiteral_500/*"&"*/, 0)
               || (v8 = (System_String_o *)System_String__StartsWith(v29, (System_String_o *)StringLiteral_369/*"#"*/, 0),
                   ((unsigned __int8)v8 & 1) != 0) )
        {
          v8 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( lastMessageIndex < 0 && ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_144;
            v96 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_24104/*"talkStart"*/;
            v97 = v11->fields._items;
            ++v11->fields._version;
            if ( !v97 )
              goto LABEL_144;
            v98 = v11->fields._size;
            if ( (unsigned int)v98 >= LODWORD(v97->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v9,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v99 = &v97->obj.klass + v98;
              v11->fields._size = v98 + 1;
              v99[4] = (Il2CppClass *)v9;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v99 + 4), (int32_t)v9, v72, v73, v74, v75, v76, v77);
            }
            if ( !v12 )
              goto LABEL_144;
            v106 = Method_System_Collections_Generic_List_string__Add__;
            v9 = (Il2CppObject *)StringLiteral_1/*""*/;
            v107 = v12->fields._items;
            ++v12->fields._version;
            if ( !v107 )
              goto LABEL_144;
            v108 = v12->fields._size;
            if ( (unsigned int)v108 >= LODWORD(v107->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v9,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
            }
            else
            {
              v109 = &v107->obj.klass + v108;
              v12->fields._size = v108 + 1;
              v109[4] = (Il2CppClass *)v9;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)v9, v100, v101, v102, v103, v104, v105);
            }
            if ( !v13 )
              goto LABEL_144;
            v110 = v13->fields._items;
            v111 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !v110 )
              goto LABEL_144;
            v112 = v13->fields._size;
            if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v71,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = v112 + 1;
              v110->m_Items[v112] = v71;
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
    v78 = v11->fields._items;
    v79 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v78 )
      goto LABEL_144;
    v80 = v11->fields._size;
    if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        0,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v78->obj.klass + v80;
      v11->fields._size = v80 + 1;
      v81[4] = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v81 + 4), 0, v72, v73, v74, v75, v76, v77);
    }
    if ( !v12 )
      goto LABEL_144;
    v89 = Method_System_Collections_Generic_List_string__Add__;
    v9 = (Il2CppObject *)StringLiteral_16000/*"[r]"*/;
    v90 = v12->fields._items;
    ++v12->fields._version;
    if ( !v90 )
      goto LABEL_144;
    v91 = v12->fields._size;
    if ( (unsigned int)v91 >= LODWORD(v90->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        v9,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v90->obj.klass + v91;
      v12->fields._size = v91 + 1;
      v92[4] = (Il2CppClass *)v9;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)v9, v82, v83, v84, v85, v86, v87);
    }
    if ( !v13 )
      goto LABEL_144;
    v93 = v13->fields._items;
    v94 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v93 )
      goto LABEL_144;
    v95 = v13->fields._size;
    if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v71,
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v95 + 1;
      v93->m_Items[v95] = v71;
    }
    lastMessageIndex = -1;
LABEL_105:
    v113 = v11->fields._items;
    v114 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v113 )
      goto LABEL_144;
    v115 = v11->fields._size;
    if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v29,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
    }
    else
    {
      v116 = &v113->obj.klass + v115;
      v11->fields._size = v115 + 1;
      v116[4] = (Il2CppClass *)v29;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v116 + 4), (int32_t)v29, v72, v73, v74, v75, v76, v77);
    }
    if ( !v12 )
      goto LABEL_144;
    v123 = v12->fields._items;
    v124 = Method_System_Collections_Generic_List_string__Add__;
    ++v12->fields._version;
    if ( !v123 )
      goto LABEL_144;
    v125 = v12->fields._size;
    if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v27,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
    }
    else
    {
      v126 = &v123->obj.klass + v125;
      v12->fields._size = v125 + 1;
      v126[4] = (Il2CppClass *)v27;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v126 + 4), (int32_t)v27, v117, v118, v119, v120, v121, v122);
    }
    if ( !v13 )
      goto LABEL_144;
    v127 = v13->fields._items;
    v128 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v127 )
      goto LABEL_144;
    v129 = v13->fields._size;
    if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v71,
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v129 + 1;
      v127->m_Items[v129] = v71;
    }
    max_length = v10->max_length;
    m_Items = v10->m_Items;
    v21 = v24 >> 32;
  }
  while ( v24 >> 32 < (int)max_length );
LABEL_122:
  if ( lastMessageIndex < 0 )
  {
    if ( v11 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v11 )
    goto LABEL_144;
  v130 = v11->fields._items;
  v131 = Method_System_Collections_Generic_List_string__Add__;
  ++v11->fields._version;
  if ( !v130 )
    goto LABEL_144;
  v132 = v11->fields._size;
  if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      0,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = &v130->obj.klass + v132;
    v11->fields._size = v132 + 1;
    v133[4] = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v133 + 4), 0, v14, v15, v16, (int32_t)v17, v18, v19);
  }
  if ( !v12 )
    goto LABEL_144;
  v140 = Method_System_Collections_Generic_List_string__Add__;
  v9 = (Il2CppObject *)StringLiteral_16000/*"[r]"*/;
  v141 = v12->fields._items;
  ++v12->fields._version;
  if ( !v141 )
    goto LABEL_144;
  v142 = v12->fields._size;
  if ( (unsigned int)v142 >= LODWORD(v141->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      v9,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  }
  else
  {
    v143 = &v141->obj.klass + v142;
    v12->fields._size = v142 + 1;
    v143[4] = (Il2CppClass *)v9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v143 + 4), (int32_t)v9, v134, v135, v136, v137, v138, v139);
  }
  if ( !v13 )
    goto LABEL_144;
  v144 = v13->fields._items;
  v145 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !v144 )
    goto LABEL_144;
  v146 = v13->fields._size;
  if ( (unsigned int)v146 >= LODWORD(v144->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      v21,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v146 + 1;
    v144->m_Items[v146] = v21;
  }
LABEL_140:
  v147 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v147;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.executeTagList,
    (int32_t)v147,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  if ( !v12
    || (v154 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v12,
                                               (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v154,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.executeDataList,
          (int32_t)v154,
          v155,
          v156,
          v157,
          v158,
          v159,
          v160),
        !v13)
    || (v161 = System_Collections_Generic_List_int___ToArray(
                 v13,
                 (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v161,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.executeLineList,
          (int32_t)v161,
          v162,
          v163,
          v164,
          v165,
          v166,
          v167),
        (executeDataList = this->fields.executeDataList) == 0) )
  {
LABEL_144:
    sub_1C71608(v8, v9);
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
  if ( (byte_4CC90E8 & 1) == 0 )
  {
    sub_1C713B0(&char_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&StringLiteral_18025/*"clear"*/);
    sub_1C713B0(&StringLiteral_19614/*"font"*/);
    sub_1C713B0(&StringLiteral_19412/*"f"*/);
    sub_1C713B0(&StringLiteral_23709/*"speed"*/);
    sub_1C713B0(&StringLiteral_21192/*"k"*/);
    sub_1C713B0(&StringLiteral_22955/*"q"*/);
    sub_1C713B0(&StringLiteral_24841/*"voiceStop"*/);
    sub_1C713B0(&StringLiteral_17167/*"bgm"*/);
    sub_1C713B0(&StringLiteral_17169/*"bgmStop"*/);
    sub_1C713B0(&StringLiteral_24991/*"wt"*/);
    sub_1C713B0(&StringLiteral_23350/*"seStop"*/);
    sub_1C713B0(&StringLiteral_22719/*"page"*/);
    sub_1C713B0(&StringLiteral_24848/*"wait"*/);
    sub_1C713B0(&StringLiteral_19064/*"end"*/);
    sub_1C713B0(&StringLiteral_21175/*"jingle"*/);
    sub_1C713B0(&StringLiteral_23341/*"se"*/);
    sub_1C713B0(&StringLiteral_21250/*"l"*/);
    sub_1C713B0(&StringLiteral_24835/*"voice"*/);
    sub_1C713B0(&StringLiteral_24190/*"time "*/);
    sub_1C713B0(&StringLiteral_19619/*"fontSize"*/);
    sub_1C713B0(&StringLiteral_23348/*"seLoop"*/);
    sub_1C713B0(&StringLiteral_341/*"\""*/);
    sub_1C713B0(&StringLiteral_16000/*"[r]"*/);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_23290/*"s"*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    sub_1C713B0(&StringLiteral_17155/*"betweenHeight"*/);
    sub_1C713B0(&StringLiteral_21176/*"jingleStop"*/);
    sub_1C713B0(&StringLiteral_23682/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1C713B0(&StringLiteral_1115/*"0"*/);
    byte_4CC90E8 = 1;
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
        v12 = System_String__Concat_64031724(v12, v27, 0);
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
              v12 = System_String__Concat_64031724(v12, v29, 0);
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
          v12 = System_String__Concat_64031724(v12, (System_String_o *)StringLiteral_341/*"\""*/, 0);
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
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v25 + 32) = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 32), 0, v16, v17, v18, v19, v20, v21);
        }
        if ( !v12 )
          goto LABEL_234;
        v30 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_64078288(
                                           v12,
                                           v161->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16000/*"[r]"*/,
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
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
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
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
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
          v45 = System_String__Concat_64031724(v45, v51, 0);
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
                v45 = System_String__Concat_64031724(v45, v53, 0);
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
            v45 = System_String__Concat_64031724(v45, (System_String_o *)StringLiteral_341/*"\""*/, 0);
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
                v87 = &StringLiteral_22955/*"q"*/;
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
                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v91 = v88 + 8 * v90;
                    LODWORD(this->fields.m_CancellationTokenSource) = v90 + 1;
                    *(_QWORD *)(v91 + 32) = 0;
                    sub_1C71354((GrandQuestFolderBoardItem_o *)(v91 + 32), 0, v54, v55, v56, v57, v58, v59);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16000/*"[r]"*/;
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
                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v114 = v111 + 8 * v113;
                    LODWORD(this->fields.m_CancellationTokenSource) = v113 + 1;
                    *(_QWORD *)(v114 + 32) = tagDataList;
                    sub_1C71354(
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
                      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
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
                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v127 = v124 + 8 * v126;
                    LODWORD(this->fields.m_CancellationTokenSource) = v126 + 1;
                    *(_QWORD *)(v127 + 32) = v46;
                    sub_1C71354(
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
                v60 = &StringLiteral_23290/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v87 = &StringLiteral_21192/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v60 = &StringLiteral_21175/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v60 = &StringLiteral_24841/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v60 = &StringLiteral_19412/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v60 = &StringLiteral_21250/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v60 = &StringLiteral_24848/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v60 = &StringLiteral_17155/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v60 = &StringLiteral_19619/*"fontSize"*/;
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
              v65 = &StringLiteral_22719/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v60 = &StringLiteral_24835/*"voice"*/;
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
              v60 = &StringLiteral_19064/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v60 = &StringLiteral_23682/*"soundStopAll"*/;
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
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v80 = v77 + 8 * v79;
                  LODWORD(this->fields.m_CancellationTokenSource) = v79 + 1;
                  *(_QWORD *)(v80 + 32) = v46;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v80 + 32), (int32_t)v46, v54, v55, v56, v57, v58, v59);
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
                  sub_1C71354(v85, (int32_t)tagDataList, v70, v71, v72, v73, v74, v75);
                  goto LABEL_171;
                }
                v86 = v82[4];
                tagDataList = v76;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v60 = &StringLiteral_23709/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v65 = &StringLiteral_18025/*"clear"*/;
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
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = v66 + 8 * v68;
                  LODWORD(this->fields.m_CancellationTokenSource) = v68 + 1;
                  *(_QWORD *)(v69 + 32) = v46;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v46, v54, v55, v56, v57, v58, v59);
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
              v60 = &StringLiteral_17167/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v60 = &StringLiteral_21176/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v60 = &StringLiteral_23341/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v60 = &StringLiteral_23348/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)StringLiteral_24991/*"wt"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v165;
              if ( !*v165 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24848/*"wait"*/;
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
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = v61 + 8 * v63;
                LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
                *(_QWORD *)(v64 + 32) = tagDataList;
                sub_1C71354(
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
              v133 = (System_String_o *)StringLiteral_24190/*"time "*/;
              v134 = v45->fields._stringLength <= v132 + 1
                   ? (System_String_o *)StringLiteral_1115/*"0"*/
                   : System_String__Substring(v45, v132 + 1, 0);
              this = (CommonMessageManager_o *)System_String__Concat_64031724(v133, v134, 0);
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
            v60 = &StringLiteral_19614/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v60 = &StringLiteral_23350/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v60 = &StringLiteral_17169/*"bgmStop"*/;
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
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = v98 + 8 * v100;
        LODWORD(this->fields.m_CancellationTokenSource) = v100 + 1;
        *(_QWORD *)(v101 + 32) = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v101 + 32), 0, v54, v55, v56, v57, v58, v59);
      }
      v102 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_64069988(
                                         (System_String_o *)StringLiteral_15808/*"["*/,
                                         v45,
                                         (System_String_o *)StringLiteral_16058/*"]"*/,
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v86 + 192) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = v142 + 8 * v144;
            LODWORD(this->fields.m_CancellationTokenSource) = v144 + 1;
            *(_QWORD *)(v145 + 32) = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v145 + 32), 0, v136, v137, v138, v139, v140, v141);
          }
          if ( v12 )
          {
            v146 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_64078288(
                                               v12,
                                               v161->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16000/*"[r]"*/,
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
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = &v153->obj.klass + v155;
                  v146->fields._size = v155 + 1;
                  v157[4] = (Il2CppClass *)v156;
                  sub_1C71354(
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
                        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
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
    sub_1C71608(this, tagDataList);
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
    sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4CC90E5 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11490/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1C713B0(&StringLiteral_11500/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1C713B0(&StringLiteral_11493/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1C713B0(&StringLiteral_11499/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4CC90E5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11490/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0);
  this->fields.codeCommentString = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11499/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  this->fields.codeTalkString = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.codeTalkString, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11500/*"SCRIPT_ACTION_CODE_VOICE"*/, 0);
  this->fields.codeVoiceString = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.codeVoiceString, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SCRIPT_ACTION_CODE_RETURN"*/, 0);
  this->fields.codeReturnString = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.codeReturnString, (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.longPressCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_4CC90EA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21654/*"messageOn"*/);
    sub_1C713B0(&StringLiteral_18025/*"clear"*/);
    sub_1C713B0(&StringLiteral_19614/*"font"*/);
    sub_1C713B0(&StringLiteral_22724/*"page3"*/);
    sub_1C713B0(&StringLiteral_21652/*"messageOff"*/);
    sub_1C713B0(&StringLiteral_22723/*"page2"*/);
    sub_1C713B0(&StringLiteral_19412/*"f"*/);
    sub_1C713B0(&StringLiteral_23709/*"speed"*/);
    sub_1C713B0(&StringLiteral_21192/*"k"*/);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    sub_1C713B0(&StringLiteral_22955/*"q"*/);
    sub_1C713B0(&StringLiteral_22738/*"parameter error"*/);
    sub_1C713B0(&StringLiteral_24254/*"touch2"*/);
    sub_1C713B0(&StringLiteral_22719/*"page"*/);
    sub_1C713B0(&StringLiteral_24848/*"wait"*/);
    sub_1C713B0(&StringLiteral_22737/*"parameter be unnecessary"*/);
    sub_1C713B0(&StringLiteral_19064/*"end"*/);
    sub_1C713B0(&StringLiteral_21644/*"message2"*/);
    sub_1C713B0(&StringLiteral_21250/*"l"*/);
    sub_1C713B0(&StringLiteral_19619/*"fontSize"*/);
    sub_1C713B0(&StringLiteral_21640/*"message"*/);
    sub_1C713B0(&StringLiteral_24100/*"talkName"*/);
    sub_1C713B0(&StringLiteral_24252/*"touch"*/);
    sub_1C713B0(&StringLiteral_21645/*"message3"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_23290/*"s"*/);
    sub_1C713B0(&StringLiteral_17155/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1C713B0(&StringLiteral_18027/*"clear2"*/);
    byte_4CC90EA = 1;
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
        sub_1C71608(this, method);
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
                                                 (System_String_o *)StringLiteral_22955/*"q"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v41 = &StringLiteral_23290/*"s"*/;
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
                                                     (System_String_o *)StringLiteral_858/*"-"*/,
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
                  v21 = &StringLiteral_22738/*"parameter error"*/;
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
              v33 = &StringLiteral_21250/*"l"*/;
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
                                                     (System_String_o *)StringLiteral_858/*"-"*/,
                                                     0);
                  v51 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !LODWORD(v15->max_length) )
LABEL_189:
                      sub_1C71610(this);
                    v51 = System_Single__Parse(v15->m_Items[0], 0);
                  }
                }
                else
                {
                  v21 = &StringLiteral_22738/*"parameter error"*/;
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
                                                 (System_String_o *)StringLiteral_21192/*"k"*/,
                                                 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v21 = &StringLiteral_22737/*"parameter be unnecessary"*/;
                if ( v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v42 = &StringLiteral_24252/*"touch"*/;
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
              v46 = &StringLiteral_19619/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v46 = &StringLiteral_19412/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24848/*"wait"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( SLODWORD(v15->max_length) < 1 )
              {
                v21 = &StringLiteral_22738/*"parameter error"*/;
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
            v33 = &StringLiteral_17155/*"betweenHeight"*/;
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
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_22719/*"page"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22737/*"parameter be unnecessary"*/;
              if ( v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v42 = &StringLiteral_22719/*"page"*/;
LABEL_150:
              v30 = (System_String_o *)*v42;
              v5->fields.waitType = (struct System_String_o *)*v42;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21652/*"messageOff"*/, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22738/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19064/*"end"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22737/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v41 = &StringLiteral_23709/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v46 = &StringLiteral_19614/*"font"*/;
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
              v21 = &StringLiteral_22738/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18025/*"clear"*/, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22737/*"parameter be unnecessary"*/;
            if ( v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v42 = &StringLiteral_18025/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24100/*"talkName"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21654/*"messageOn"*/, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v21 = &StringLiteral_22738/*"parameter error"*/;
          if ( v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0);
          v5->fields.state = 4;
          v22 = StringLiteral_21640/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21640/*"message"*/;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v22, v23, v24, v25, v26, v27, v28);
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
        v56 = StringLiteral_21640/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21640/*"message"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v56, (int32_t)v3, v16, v17, v18, v19, v20);
        v5->fields.waitMessage = v13;
        v29 = (GrandQuestFolderBoardItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v30) = (_DWORD)v13;
LABEL_156:
        sub_1C71354(v29, (int32_t)v30, (int32_t)v3, v16, v17, v18, v19, v20);
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
          if ( v32 == 1770621400 && System_String__op_Equality(v31, (System_String_o *)StringLiteral_24252/*"touch"*/, 0) )
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
            v65 = &StringLiteral_24254/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18025/*"clear"*/, 0) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
        v45 = &StringLiteral_18027/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21640/*"message"*/, 0) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v45 = &StringLiteral_21644/*"message2"*/;
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
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21645/*"message3"*/, 0) || v5->fields.isScroll )
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
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_24254/*"touch2"*/, 0)
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
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22719/*"page"*/, 0) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0);
      v45 = &StringLiteral_22723/*"page2"*/;
LABEL_120:
      v40 = *v45;
      *p_waitType = (System_String_o *)*v45;
LABEL_121:
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v40, (int32_t)v34, v35, v36, v37, v38, v39);
      goto LABEL_171;
    }
    if ( v32 != -1857654992
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18027/*"clear2"*/, 0)
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
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22724/*"page3"*/, 0) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v32 == -16520990 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21644/*"message2"*/, 0)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0);
    LODWORD(v40) = StringLiteral_21645/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21645/*"message3"*/;
    goto LABEL_121;
  }
  if ( v32 == -353306356
    && System_String__op_Equality(v31, (System_String_o *)StringLiteral_22723/*"page2"*/, 0)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0);
    v65 = &StringLiteral_22724/*"page3"*/;
LABEL_188:
    v66 = *v65;
    v5->fields.waitType = (struct System_String_o *)*v65;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v5->fields.waitType, v66, v59, v60, v61, v62, v63, v64);
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
  sub_1C71354(
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
  sub_1C71354(
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
  sub_1C71354(
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

  if ( (byte_4CC90E6 & 1) == 0 )
  {
    sub_1C713B0(&ScriptMessageLabel_TypeInfo);
    byte_4CC90E6 = 1;
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
  sub_1C71354(
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