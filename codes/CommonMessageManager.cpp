void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FDE04 & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageManager_TypeInfo, method);
    byte_49FDE04 = 1;
  }
  this->fields.playSpeed = 2;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
  ScriptMessageManager___ctor((ScriptMessageManager_o *)this, 0LL);
}


System_String_array *__fastcall CommonMessageManager__AnalysParam(
        CommonMessageManager_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  int32_t stringLength; // w28
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x22
  int32_t v19; // w24
  int32_t v20; // w1
  uint16_t Chars; // w0
  System_String_o *v22; // x0
  int v23; // w21
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int size; // w8
  Il2CppObject *Item; // x0
  int32_t v29; // w21
  System_String_o *v30; // x0
  Il2CppObject *v31; // x2
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_String_o *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  Il2CppObject *v41; // x1
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  int v44; // w8
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  Il2CppObject *v51; // x1
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_String_o *v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  __int16 v62[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FDE02 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__set_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1854/*"="*/, v11);
    sub_1B640C8(&StringLiteral_117/*" "*/, v12);
    sub_1B640C8(&StringLiteral_869/*","*/, v13);
    sub_1B640C8(&StringLiteral_373/*"\""*/, v14);
    this = (CommonMessageManager_o *)sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49FDE02 = 1;
  }
  v62[0] = 0;
  if ( !data )
    goto LABEL_72;
  stringLength = data->fields._stringLength;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = v19++;
      Chars = System_String__get_Chars(data, v20, 0LL);
      v62[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_34;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v17 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_31;
        size = v17->fields._size;
        if ( size < 1
          || (Item = System_Collections_Generic_List_object___get_Item(
                       v17,
                       size - 1,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_117/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v62, 0LL);
          items = v17->fields._items;
          v50 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            v51 = (Il2CppObject *)this;
          else
            v51 = (Il2CppObject *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_72;
          v52 = v17->fields._size;
          if ( (unsigned int)v52 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v51,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + v52;
            v17->fields._size = v52 + 1;
            v53[4] = (Il2CppClass *)v51;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v51, v47, v48);
          }
          goto LABEL_63;
        }
        v29 = v17->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v30 = System_Char__ToString((uint16_t)v62, 0LL);
        if ( v30 )
          v31 = (Il2CppObject *)v30;
        else
          v31 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v17,
          v29 - 1,
          v31,
          (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v22 = System_Char__ToString((uint16_t)v62, 0LL);
            v18 = System_String__Concat_61375396(v18, v22, 0LL);
            if ( v19 < stringLength )
            {
              while ( 1 )
              {
                v23 = v19 + 1;
                v62[0] = System_String__get_Chars(data, v19, 0LL);
                if ( v62[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v24 = System_Char__ToString((uint16_t)v62, 0LL);
                v18 = System_String__Concat_61375396(v18, v24, 0LL);
                ++v19;
                if ( stringLength == v23 )
                {
                  v19 = stringLength;
                  goto LABEL_61;
                }
              }
              ++v19;
            }
LABEL_61:
            v36 = (System_String_o *)StringLiteral_373/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v36 = System_Char__ToString((uint16_t)v62, 0LL);
          }
          v18 = System_String__Concat_61375396(v18, v36, 0LL);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v17 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v32 = v17->fields._items;
          v33 = Method_System_Collections_Generic_List_string__Add__;
          ++v17->fields._version;
          if ( !v32 )
            goto LABEL_72;
          v34 = v17->fields._size;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v18,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            v17->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v18, v25, v26);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v62, 0LL);
          v39 = v17->fields._items;
          v40 = Method_System_Collections_Generic_List_string__Add__;
          v41 = this ? (Il2CppObject *)this : (Il2CppObject *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !v39 )
            goto LABEL_72;
          v42 = v17->fields._size;
          if ( (unsigned int)v42 >= v39->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v41,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &v39->obj.klass + v42;
            v17->fields._size = v42 + 1;
            v43[4] = (Il2CppClass *)v41;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v41, v37, v38);
          }
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v44 = v17->fields._size;
        if ( v44 < 1 )
          goto LABEL_51;
        v45 = System_Collections_Generic_List_object___get_Item(
                v17,
                v44 - 1,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v45, (System_String_o *)StringLiteral_1854/*"="*/, 0LL) )
        {
          v46 = System_Collections_Generic_List_object___get_Item(
                  v17,
                  v17->fields._size - 1,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v46, (System_String_o *)StringLiteral_869/*","*/, 0LL) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v19 >= stringLength )
      {
        v54 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v54 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v18, v54, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v17 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v17,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1B64324(this);
  }
  if ( !v17 )
    goto LABEL_72;
  v57 = v17->fields._items;
  v58 = Method_System_Collections_Generic_List_string__Add__;
  ++v17->fields._version;
  if ( !v57 )
    goto LABEL_72;
  v59 = v17->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v17->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v18, v55, v56);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v17,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
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
  System_Array_o *v28; // x0
  System_Char_array *v29; // x21
  System_String_o *v30; // x0
  System_String_array *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_int__o *v40; // x20
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  __int64 v45; // x26
  System_String_o **m_Items; // x9
  __int64 v47; // x29
  __int64 v48; // x24
  System_String_o **v49; // x27
  System_String_o *v50; // x28
  System_String_o *v51; // x25
  System_String_o *v52; // x0
  System_String_o *v53; // x28
  System_String_o **v54; // x5
  int32_t v55; // w2
  int32_t v56; // w3
  _QWORD *v57; // x9
  Il2CppObject *v58; // x1
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  _QWORD *v64; // x9
  Il2CppObject *v65; // x1
  struct System_Object_array *v66; // x8
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  System_String_o *v81; // x1
  Il2CppClass **v82; // x0
  struct System_Int32_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  int32_t v86; // w26
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x8
  _QWORD *v96; // x9
  Il2CppObject *v97; // x1
  struct System_Object_array *v98; // x8
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  _QWORD *v104; // x9
  Il2CppObject *v105; // x1
  struct System_Object_array *v106; // x8
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  _QWORD *v111; // x9
  Il2CppObject *v112; // x1
  struct System_Object_array *v113; // x8
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  struct System_Int32_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  struct System_Int32_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  _QWORD *v138; // x9
  Il2CppObject *v139; // x1
  struct System_Object_array *v140; // x8
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  struct System_Int32_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  struct System_String_array *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  struct System_String_array *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  struct System_Int32_array *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v156; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v162; // 0:w1.4

  if ( (byte_49FDE00 & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, scriptData);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v14);
    sub_1B640C8(&StringLiteral_402/*"#"*/, v15);
    sub_1B640C8(&StringLiteral_1127/*"//"*/, v16);
    sub_1B640C8(&StringLiteral_19969/*"i"*/, v17);
    sub_1B640C8(&StringLiteral_20882/*"k"*/, v18);
    sub_1B640C8(&StringLiteral_22581/*"q"*/, v19);
    sub_1B640C8(&StringLiteral_514/*"%"*/, v20);
    sub_1B640C8(&StringLiteral_536/*"&"*/, v21);
    sub_1B640C8(&StringLiteral_21027/*"line"*/, v22);
    sub_1B640C8(&StringLiteral_23748/*"talkStart"*/, v23);
    sub_1B640C8(&StringLiteral_20153/*"image"*/, v24);
    sub_1B640C8(&StringLiteral_15940/*"[r]"*/, v25);
    sub_1B640C8(&StringLiteral_23744/*"talkName"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_49FDE00 = 1;
  }
  v28 = (System_Array_o *)sub_1B64170(char___TypeInfo, 5LL);
  v162.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v29 = (System_Char_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v28, v162, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v31 = System_String__Split_61397780(scriptData, v29, 1, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v34;
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v37;
  v40 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v38, v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v40;
  lastMessageIndex = -1;
  if ( !v31 )
    goto LABEL_144;
  v44 = *(_QWORD *)&v31->max_length;
  if ( (int)v44 < 1 )
  {
    LODWORD(v45) = 0;
    goto LABEL_122;
  }
  v45 = 0LL;
  m_Items = v31->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v47 = 0LL;
    v48 = (v45 << 32) + 0x100000000LL;
    v49 = &m_Items[v45];
    while ( 1 )
    {
      if ( (int)v45 + (int)v47 >= (unsigned int)v44 )
        sub_1B6432C(v30, v41);
      v50 = v49[v47];
      if ( !v50 )
        goto LABEL_144;
      if ( v50->fields._stringLength < 1 )
        goto LABEL_53;
      v51 = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (System_String_o *)System_String__StartsWith(v49[v47], (System_String_o *)StringLiteral_1127/*"//"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      v30 = (System_String_o *)System_String__StartsWith(v50, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v50, this->fields.codeTalkString, 0LL) )
        break;
      v30 = (System_String_o *)System_String__StartsWith(v50, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v54,
          v50,
          v45 + v47 + 1,
          v156);
LABEL_18:
        v30 = (System_String_o *)System_String__op_Inequality(v51, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v30 & 1) != 0 )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_144;
            v57 = Method_System_Collections_Generic_List_string__Add__;
            v58 = (Il2CppObject *)StringLiteral_23748/*"talkStart"*/;
            items = v34->fields._items;
            ++v34->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v34->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v58,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v58;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v58, v55, v56);
            }
            if ( !v37 )
              goto LABEL_144;
            v64 = Method_System_Collections_Generic_List_string__Add__;
            v65 = (Il2CppObject *)StringLiteral_1/*""*/;
            v66 = v37->fields._items;
            ++v37->fields._version;
            if ( !v66 )
              goto LABEL_144;
            v67 = v37->fields._size;
            if ( (unsigned int)v67 >= v66->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v37,
                v65,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = &v66->obj.klass + v67;
              v37->fields._size = v67 + 1;
              v68[4] = (Il2CppClass *)v65;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v65, v62, v63);
            }
            if ( !v40 )
              goto LABEL_144;
            v69 = v40->fields._items;
            v70 = Method_System_Collections_Generic_List_int__Add__;
            ++v40->fields._version;
            if ( !v69 )
              goto LABEL_144;
            v71 = v40->fields._size;
            if ( (unsigned int)v71 >= v69->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v40,
                v45 + v47 + 1,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v40->fields._size = v71 + 1;
              v69->m_Items[v71 + 1] = v45 + v47 + 1;
            }
          }
          else if ( !v34 )
          {
            goto LABEL_144;
          }
          v72 = v34->fields._items;
          v73 = Method_System_Collections_Generic_List_string__Add__;
          ++v34->fields._version;
          if ( !v72 )
            goto LABEL_144;
          v74 = v34->fields._size;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              0LL,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v34->fields._size = v74 + 1;
            v75[4] = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), 0, v55, v56);
          }
          if ( !v37 )
            goto LABEL_144;
          lastMessageIndex = v37->fields._size;
          if ( !v51 )
            goto LABEL_144;
          v30 = System_String__Replace_61395016(
                  v51,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_15940/*"[r]"*/,
                  0LL);
          v78 = v37->fields._items;
          v79 = Method_System_Collections_Generic_List_string__Add__;
          ++v37->fields._version;
          if ( !v78 )
            goto LABEL_144;
          v80 = v37->fields._size;
          v81 = v30;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v30,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &v78->obj.klass + v80;
            v37->fields._size = v80 + 1;
            v82[4] = (Il2CppClass *)v81;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v81, v76, v77);
          }
          if ( !v40 )
            goto LABEL_144;
          v83 = v40->fields._items;
          v84 = Method_System_Collections_Generic_List_int__Add__;
          ++v40->fields._version;
          if ( !v83 )
            goto LABEL_144;
          v85 = v40->fields._size;
          if ( (unsigned int)v85 >= v83->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v40,
              v45 + v47 + 1,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v40->fields._size = v85 + 1;
            v83->m_Items[v85 + 1] = v45 + v47 + 1;
          }
        }
      }
LABEL_53:
      v44 = *(_QWORD *)&v31->max_length;
      ++v47;
      v48 += 0x100000000LL;
      if ( v45 + v47 >= (int)v44 )
      {
        LODWORD(v45) = v45 + v47;
        goto LABEL_122;
      }
    }
    v52 = v50;
    v53 = (System_String_o *)StringLiteral_23744/*"talkName"*/;
    v51 = System_String__Substring(v52, 1, 0LL);
    if ( !v53 )
      goto LABEL_18;
    v86 = v45 + v47 + 1;
    v30 = (System_String_o *)System_String__op_Equality(v53, (System_String_o *)StringLiteral_20882/*"k"*/, 0LL);
    if ( ((unsigned __int8)v30 & 1) == 0 )
    {
      v30 = (System_String_o *)System_String__op_Equality(v53, (System_String_o *)StringLiteral_22581/*"q"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_23744/*"talkName"*/, 0LL) )
        {
          v30 = (System_String_o *)System_String__op_Equality(v53, (System_String_o *)StringLiteral_23744/*"talkName"*/, 0LL);
          v95 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v30 & 1) != 0 )
            v95 = v51;
          a = v95;
        }
        else if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_19969/*"i"*/, 0LL)
               || System_String__op_Equality(v53, (System_String_o *)StringLiteral_20153/*"image"*/, 0LL)
               || System_String__op_Equality(v53, (System_String_o *)StringLiteral_21027/*"line"*/, 0LL)
               || System_String__StartsWith(v53, (System_String_o *)StringLiteral_514/*"%"*/, 0LL)
               || System_String__StartsWith(v53, (System_String_o *)StringLiteral_536/*"&"*/, 0LL)
               || (v30 = (System_String_o *)System_String__StartsWith(v53, (System_String_o *)StringLiteral_402/*"#"*/, 0LL),
                   ((unsigned __int8)v30 & 1) != 0) )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_144;
            v104 = Method_System_Collections_Generic_List_string__Add__;
            v105 = (Il2CppObject *)StringLiteral_23748/*"talkStart"*/;
            v106 = v34->fields._items;
            ++v34->fields._version;
            if ( !v106 )
              goto LABEL_144;
            v107 = v34->fields._size;
            if ( (unsigned int)v107 >= v106->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v105,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v108 = &v106->obj.klass + v107;
              v34->fields._size = v107 + 1;
              v108[4] = (Il2CppClass *)v105;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v105, v87, v88);
            }
            if ( !v37 )
              goto LABEL_144;
            v111 = Method_System_Collections_Generic_List_string__Add__;
            v112 = (Il2CppObject *)StringLiteral_1/*""*/;
            v113 = v37->fields._items;
            ++v37->fields._version;
            if ( !v113 )
              goto LABEL_144;
            v114 = v37->fields._size;
            if ( (unsigned int)v114 >= v113->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v37,
                v112,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
            }
            else
            {
              v115 = &v113->obj.klass + v114;
              v37->fields._size = v114 + 1;
              v115[4] = (Il2CppClass *)v112;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v115 + 4), (int32_t)v112, v109, v110);
            }
            if ( !v40 )
              goto LABEL_144;
            v116 = v40->fields._items;
            v117 = Method_System_Collections_Generic_List_int__Add__;
            ++v40->fields._version;
            if ( !v116 )
              goto LABEL_144;
            v118 = v40->fields._size;
            if ( (unsigned int)v118 >= v116->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v40,
                v86,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v40->fields._size = v118 + 1;
              v116->m_Items[v118 + 1] = v86;
            }
          }
          else if ( !v37 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v37->fields._size;
        }
LABEL_104:
        if ( v34 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( (lastMessageIndex & 0x80000000) != 0 )
      goto LABEL_104;
    if ( !v34 )
      goto LABEL_144;
    v89 = v34->fields._items;
    v90 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v89 )
      goto LABEL_144;
    v91 = v34->fields._size;
    if ( (unsigned int)v91 >= v89->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        0LL,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v89->obj.klass + v91;
      v34->fields._size = v91 + 1;
      v92[4] = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v92 + 4), 0, v87, v88);
    }
    if ( !v37 )
      goto LABEL_144;
    v96 = Method_System_Collections_Generic_List_string__Add__;
    v97 = (Il2CppObject *)StringLiteral_15940/*"[r]"*/;
    v98 = v37->fields._items;
    ++v37->fields._version;
    if ( !v98 )
      goto LABEL_144;
    v99 = v37->fields._size;
    if ( (unsigned int)v99 >= v98->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        v97,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = &v98->obj.klass + v99;
      v37->fields._size = v99 + 1;
      v100[4] = (Il2CppClass *)v97;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v97, v93, v94);
    }
    if ( !v40 )
      goto LABEL_144;
    v101 = v40->fields._items;
    v102 = Method_System_Collections_Generic_List_int__Add__;
    ++v40->fields._version;
    if ( !v101 )
      goto LABEL_144;
    v103 = v40->fields._size;
    if ( (unsigned int)v103 >= v101->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v40,
        v86,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
    }
    else
    {
      v40->fields._size = v103 + 1;
      v101->m_Items[v103 + 1] = v86;
    }
    lastMessageIndex = -1;
LABEL_105:
    v119 = v34->fields._items;
    v120 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v119 )
      goto LABEL_144;
    v121 = v34->fields._size;
    if ( (unsigned int)v121 >= v119->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)v53,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v119->obj.klass + v121;
      v34->fields._size = v121 + 1;
      v122[4] = (Il2CppClass *)v53;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v53, v87, v88);
    }
    if ( !v37 )
      goto LABEL_144;
    v125 = v37->fields._items;
    v126 = Method_System_Collections_Generic_List_string__Add__;
    ++v37->fields._version;
    if ( !v125 )
      goto LABEL_144;
    v127 = v37->fields._size;
    if ( (unsigned int)v127 >= v125->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)v51,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      v128 = &v125->obj.klass + v127;
      v37->fields._size = v127 + 1;
      v128[4] = (Il2CppClass *)v51;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v51, v123, v124);
    }
    if ( !v40 )
      goto LABEL_144;
    v129 = v40->fields._items;
    v130 = Method_System_Collections_Generic_List_int__Add__;
    ++v40->fields._version;
    if ( !v129 )
      goto LABEL_144;
    v131 = v40->fields._size;
    if ( (unsigned int)v131 >= v129->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v40,
        v86,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    }
    else
    {
      v40->fields._size = v131 + 1;
      v129->m_Items[v131 + 1] = v86;
    }
    v44 = *(_QWORD *)&v31->max_length;
    m_Items = v31->m_Items;
    v45 = v48 >> 32;
  }
  while ( v48 >> 32 < (int)v44 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v34 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v34 )
    goto LABEL_144;
  v132 = v34->fields._items;
  v133 = Method_System_Collections_Generic_List_string__Add__;
  ++v34->fields._version;
  if ( !v132 )
    goto LABEL_144;
  v134 = v34->fields._size;
  if ( (unsigned int)v134 >= v132->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      0LL,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = &v132->obj.klass + v134;
    v34->fields._size = v134 + 1;
    v135[4] = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v135 + 4), 0, v42, v43);
  }
  if ( !v37 )
    goto LABEL_144;
  v138 = Method_System_Collections_Generic_List_string__Add__;
  v139 = (Il2CppObject *)StringLiteral_15940/*"[r]"*/;
  v140 = v37->fields._items;
  ++v37->fields._version;
  if ( !v140 )
    goto LABEL_144;
  v141 = v37->fields._size;
  if ( (unsigned int)v141 >= v140->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      v139,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v142 = &v140->obj.klass + v141;
    v37->fields._size = v141 + 1;
    v142[4] = (Il2CppClass *)v139;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v142 + 4), (int32_t)v139, v136, v137);
  }
  if ( !v40 )
    goto LABEL_144;
  v143 = v40->fields._items;
  v144 = Method_System_Collections_Generic_List_int__Add__;
  ++v40->fields._version;
  if ( !v143 )
    goto LABEL_144;
  v145 = v40->fields._size;
  if ( (unsigned int)v145 >= v143->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v40,
      v45,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v40->fields._size = v145 + 1;
    v143->m_Items[v145 + 1] = v45;
  }
LABEL_140:
  v146 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v34,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v146;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.executeTagList, (int32_t)v146, v147, v148);
  if ( !v37
    || (v149 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v37,
                                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v149,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.executeDataList, (int32_t)v149, v150, v151),
        !v40)
    || (v152 = System_Collections_Generic_List_int___ToArray(
                 v40,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v152,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.executeLineList, (int32_t)v152, v153, v154),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1B64324(v30);
  }
  this->fields.executeIndexMax = *(_QWORD *)&executeDataList->max_length;
}


void __fastcall CommonMessageManager__AnalysText(
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  int32_t stringLength; // w22
  System_String_o *v46; // x27
  int32_t v47; // w29
  int32_t v48; // w1
  uint16_t Chars; // w0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v55; // x8
  uint16_t v56; // w28
  System_String_o *v57; // x0
  int v58; // w24
  System_String_o *v59; // x0
  System_Collections_Generic_List_object__o *v60; // x28
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  CommonMessageManager_o *v66; // x1
  Il2CppClass **v67; // x0
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  System_String_o *v71; // x27
  System_String_o *v72; // x28
  int v73; // w24
  int32_t v74; // w1
  uint16_t v75; // w0
  System_String_o *v77; // x0
  int v78; // w26
  System_String_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 *v82; // x8
  Il2CppObject *v83; // x1
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  __int64 *v88; // x8
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x8
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w1
  Il2CppObject *v96; // x27
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  ServantStatusBattleListViewItem_o *v105; // x0
  Il2CppObject *v106; // x1
  __int64 v107; // x8
  __int64 *v108; // x8
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  int32_t v113; // w2
  int32_t v114; // w3
  __int64 v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x8
  System_Collections_Generic_List_string__o *v119; // x28
  struct System_String_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  int32_t v127; // w8
  Il2CppObject *v128; // x1
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  __int64 v141; // x8
  __int64 v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  __int64 v145; // x8
  int32_t v146; // w8
  System_String_o *v147; // x24
  System_String_o *v148; // x1
  System_String_o *v149; // x1
  int32_t v150; // w2
  int32_t v151; // w3
  __int64 v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  __int64 v155; // x8
  System_Collections_Generic_List_object__o *v156; // x21
  int32_t v157; // w2
  int32_t v158; // w3
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  CommonMessageManager_o *v162; // x1
  Il2CppClass **v163; // x0
  __int64 v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  CommonMessageManager_o *v167; // [xsp+0h] [xbp-90h]
  __int16 v172[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v167 = this;
  if ( (byte_49FDE01 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, tagDataList);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1B640C8(&StringLiteral_17931/*"clear"*/, v14);
    sub_1B640C8(&StringLiteral_19439/*"font"*/, v15);
    sub_1B640C8(&StringLiteral_19252/*"f"*/, v16);
    sub_1B640C8(&StringLiteral_23326/*"speed"*/, v17);
    sub_1B640C8(&StringLiteral_20882/*"k"*/, v18);
    sub_1B640C8(&StringLiteral_22581/*"q"*/, v19);
    sub_1B640C8(&StringLiteral_24493/*"voiceStop"*/, v20);
    sub_1B640C8(&StringLiteral_17106/*"bgm"*/, v21);
    sub_1B640C8(&StringLiteral_17108/*"bgmStop"*/, v22);
    sub_1B640C8(&StringLiteral_24641/*"wt"*/, v23);
    sub_1B640C8(&StringLiteral_22964/*"seStop"*/, v24);
    sub_1B640C8(&StringLiteral_22347/*"page"*/, v25);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v26);
    sub_1B640C8(&StringLiteral_18926/*"end"*/, v27);
    sub_1B640C8(&StringLiteral_20865/*"jingle"*/, v28);
    sub_1B640C8(&StringLiteral_22958/*"se"*/, v29);
    sub_1B640C8(&StringLiteral_20944/*"l"*/, v30);
    sub_1B640C8(&StringLiteral_24487/*"voice"*/, v31);
    sub_1B640C8(&StringLiteral_23831/*"time "*/, v32);
    sub_1B640C8(&StringLiteral_19444/*"fontSize"*/, v33);
    sub_1B640C8(&StringLiteral_22962/*"seLoop"*/, v34);
    sub_1B640C8(&StringLiteral_373/*"\""*/, v35);
    sub_1B640C8(&StringLiteral_15940/*"[r]"*/, v36);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v37);
    sub_1B640C8(&StringLiteral_1/*""*/, v38);
    sub_1B640C8(&StringLiteral_22895/*"s"*/, v39);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v40);
    sub_1B640C8(&StringLiteral_17094/*"betweenHeight"*/, v41);
    sub_1B640C8(&StringLiteral_20866/*"jingleStop"*/, v42);
    sub_1B640C8(&StringLiteral_23299/*"soundStopAll"*/, v43);
    this = (CommonMessageManager_o *)sub_1B640C8(&StringLiteral_1213/*"0"*/, v44);
    byte_49FDE01 = 1;
  }
  v172[0] = 0;
  if ( !analysData )
    goto LABEL_234;
  stringLength = analysData->fields._stringLength;
  v46 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v48 = v47++;
        Chars = System_String__get_Chars(analysData, v48, 0LL);
        v172[0] = Chars;
        if ( Chars == 91 )
          break;
        v56 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v57 = System_Char__ToString((uint16_t)v172, 0LL);
        v46 = System_String__Concat_61375396(v46, v57, 0LL);
        if ( v56 == 34 )
        {
          if ( v47 < stringLength )
          {
            while ( 1 )
            {
              v58 = v47 + 1;
              v172[0] = System_String__get_Chars(analysData, v47, 0LL);
              if ( v172[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v59 = System_Char__ToString((uint16_t)v172, 0LL);
              v46 = System_String__Concat_61375396(v46, v59, 0LL);
              ++v47;
              if ( stringLength == v58 )
              {
                v47 = stringLength;
                goto LABEL_86;
              }
            }
            ++v47;
          }
LABEL_86:
          v46 = System_String__Concat_61375396(v46, (System_String_o *)StringLiteral_373/*"\""*/, 0LL);
        }
        if ( v47 >= stringLength )
        {
          v149 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v46, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = (CommonMessageManager_o *)*tagDataList;
        if ( !*tagDataList )
          goto LABEL_234;
        v52 = *(_QWORD *)&this->fields.m_CachedPtr;
        v53 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v52 )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v52 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0LL,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = v52 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v55 + 32) = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), 0, v50, v51);
        }
        if ( !v46 )
          goto LABEL_234;
        v60 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_61395016(
                                           v46,
                                           v167->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_15940/*"[r]"*/,
                                           0LL);
        if ( !v60 )
          goto LABEL_234;
        items = v60->fields._items;
        v64 = Method_System_Collections_Generic_List_string__Add__;
        ++v60->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v60->fields._size;
        v66 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v60,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &items->obj.klass + size;
          v60->fields._size = size + 1;
          v67[4] = (Il2CppClass *)v66;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v66, v61, v62);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v68 = *(_QWORD *)&this->fields.m_CachedPtr;
        v69 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v68 )
          goto LABEL_234;
        v70 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v70 + 1;
          *(_DWORD *)(v68 + 4 * v70 + 32) = line;
        }
      }
      v71 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v47 >= stringLength )
      {
        v72 = 0LL;
      }
      else
      {
        v72 = 0LL;
        v73 = 0;
        v74 = v47;
        do
        {
          v47 = v74 + 1;
          v75 = System_String__get_Chars(analysData, v74, 0LL);
          v172[0] = v75;
          if ( v75 == 91 )
          {
            ++v73;
          }
          else if ( v75 == 93 )
          {
            if ( --v73 < 0 )
              break;
          }
          else if ( v75 == 32 && v72 == 0LL )
          {
            v72 = v71;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v77 = System_Char__ToString((uint16_t)v172, 0LL);
          v71 = System_String__Concat_61375396(v71, v77, 0LL);
          if ( v172[0] == 34 )
          {
            if ( v47 < stringLength )
            {
              while ( 1 )
              {
                v78 = v47 + 1;
                v172[0] = System_String__get_Chars(analysData, v47, 0LL);
                if ( v172[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v79 = System_Char__ToString((uint16_t)v172, 0LL);
                v71 = System_String__Concat_61375396(v71, v79, 0LL);
                ++v47;
                if ( stringLength == v78 )
                {
                  v47 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v47;
            }
LABEL_56:
            v71 = System_String__Concat_61375396(v71, (System_String_o *)StringLiteral_373/*"\""*/, 0LL);
          }
          v74 = v47;
        }
        while ( v47 < stringLength );
      }
      if ( !v72 )
        v72 = v71;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v72, 0LL);
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
                v108 = &StringLiteral_22581/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v108, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = (CommonMessageManager_o *)*tagDataList;
                  if ( !*tagDataList )
                    goto LABEL_234;
                  v109 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v110 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v109 )
                    goto LABEL_234;
                  v111 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0LL,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v112 = v109 + 8 * v111;
                    LODWORD(this->fields.m_CancellationTokenSource) = v111 + 1;
                    *(_QWORD *)(v112 + 32) = 0LL;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 32), 0, v80, v81);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  v128 = (Il2CppObject *)StringLiteral_15940/*"[r]"*/;
                  v129 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v130 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v129 )
                    goto LABEL_234;
                  v131 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      v128,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v132 = v129 + 8 * v131;
                    LODWORD(this->fields.m_CancellationTokenSource) = v131 + 1;
                    *(_QWORD *)(v132 + 32) = v128;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v132 + 32), (int32_t)v128, v113, v114);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v135 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v136 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v135 )
                    goto LABEL_234;
                  v137 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v137 + 1;
                    *(_DWORD *)(v135 + 4 * v137 + 32) = line;
                  }
                  this = (CommonMessageManager_o *)*tagDataList;
                  if ( !*tagDataList )
                    goto LABEL_234;
                  v138 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v139 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v138 )
                    goto LABEL_234;
                  v140 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v140 >= *(_DWORD *)(v138 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v72,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v141 = v138 + 8 * v140;
                    LODWORD(this->fields.m_CancellationTokenSource) = v140 + 1;
                    *(_QWORD *)(v141 + 32) = v72;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 32), (int32_t)v72, v133, v134);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  v106 = (Il2CppObject *)StringLiteral_1/*""*/;
                  v142 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v143 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v142 )
                    goto LABEL_234;
                  v144 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v144 < *(_DWORD *)(v142 + 24) )
                  {
                    v145 = v142 + 8 * v144;
                    LODWORD(this->fields.m_CancellationTokenSource) = v144 + 1;
                    *(_QWORD *)(v145 + 32) = v106;
                    v105 = (ServantStatusBattleListViewItem_o *)(v145 + 32);
                    goto LABEL_168;
                  }
                  v107 = v143[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v82 = &StringLiteral_22895/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v108 = &StringLiteral_20882/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v82 = &StringLiteral_20865/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v82 = &StringLiteral_24493/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v82 = &StringLiteral_19252/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v82 = &StringLiteral_20944/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v82 = &StringLiteral_24501/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v82 = &StringLiteral_17094/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v82 = &StringLiteral_19444/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v72 && !v72->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v88 = &StringLiteral_22347/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v82 = &StringLiteral_24487/*"voice"*/;
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
              v82 = &StringLiteral_18926/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v82 = &StringLiteral_23299/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v82, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v71 )
                  goto LABEL_234;
                v95 = v72->fields._stringLength + 1;
                v96 = (Il2CppObject *)(v71->fields._stringLength <= v95
                                     ? StringLiteral_1/*""*/
                                     : System_String__Substring(v71, v95, 0LL));
                this = (CommonMessageManager_o *)*tagDataList;
                if ( !*tagDataList )
                  goto LABEL_234;
                v97 = *(_QWORD *)&this->fields.m_CachedPtr;
                v98 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v97 )
                  goto LABEL_234;
                v99 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                }
                else
                {
                  v100 = v97 + 8 * v99;
                  LODWORD(this->fields.m_CancellationTokenSource) = v99 + 1;
                  *(_QWORD *)(v100 + 32) = v72;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 32), (int32_t)v72, v80, v81);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v101 = *(_QWORD *)&this->fields.m_CachedPtr;
                v102 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v101 )
                  goto LABEL_234;
                v103 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v103 < *(_DWORD *)(v101 + 24) )
                {
                  v104 = v101 + 8 * v103;
                  LODWORD(this->fields.m_CancellationTokenSource) = v103 + 1;
                  *(_QWORD *)(v104 + 32) = v96;
                  v105 = (ServantStatusBattleListViewItem_o *)(v104 + 32);
                  LODWORD(v106) = (_DWORD)v96;
LABEL_168:
                  sub_1B6406C(v105, (int32_t)v106, v93, v94);
                  goto LABEL_171;
                }
                v107 = v102[4];
                v106 = v96;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v82 = &StringLiteral_23326/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v88 = &StringLiteral_17931/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v88, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (CommonMessageManager_o *)*tagDataList;
                if ( !*tagDataList )
                  goto LABEL_234;
                v89 = *(_QWORD *)&this->fields.m_CachedPtr;
                v90 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v89 )
                  goto LABEL_234;
                v91 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                }
                else
                {
                  v92 = v89 + 8 * v91;
                  LODWORD(this->fields.m_CancellationTokenSource) = v91 + 1;
                  *(_QWORD *)(v92 + 32) = v72;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v92 + 32), (int32_t)v72, v80, v81);
                }
                if ( !v71 )
                  goto LABEL_234;
                v127 = v72->fields._stringLength;
                v119 = *scriptDataList;
                if ( v71->fields._stringLength <= v127 + 1 )
                {
                  v106 = (Il2CppObject *)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v71, v127 + 1, 0LL);
                  v106 = (Il2CppObject *)this;
                }
                if ( !v119 )
                  goto LABEL_234;
                v120 = v119->fields._items;
                v121 = Method_System_Collections_Generic_List_string__Add__;
                ++v119->fields._version;
                if ( !v120 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v82 = &StringLiteral_17106/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v82 = &StringLiteral_20866/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v82 = &StringLiteral_22958/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v82 = &StringLiteral_22962/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v72,
                                               (System_String_o *)StringLiteral_24641/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonMessageManager_o *)*tagDataList;
              if ( !*tagDataList )
                goto LABEL_234;
              v83 = (Il2CppObject *)StringLiteral_24501/*"wait"*/;
              v84 = *(_QWORD *)&this->fields.m_CachedPtr;
              v85 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v84 )
                goto LABEL_234;
              v86 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  v83,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
              }
              else
              {
                v87 = v84 + 8 * v86;
                LODWORD(this->fields.m_CancellationTokenSource) = v86 + 1;
                *(_QWORD *)(v87 + 32) = v83;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v83, v80, v81);
              }
              if ( !v71 )
                goto LABEL_234;
              v146 = v72->fields._stringLength;
              v119 = *scriptDataList;
              v147 = (System_String_o *)StringLiteral_23831/*"time "*/;
              v148 = v71->fields._stringLength <= v146 + 1
                   ? (System_String_o *)StringLiteral_1213/*"0"*/
                   : System_String__Substring(v71, v146 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_61375396(v147, v148, 0LL);
              if ( !v119 )
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
            v82 = &StringLiteral_19439/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v82 = &StringLiteral_22964/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v82 = &StringLiteral_17108/*"bgmStop"*/;
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
      v115 = *(_QWORD *)&this->fields.m_CachedPtr;
      v116 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v115 )
        goto LABEL_234;
      v117 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v117 >= *(_DWORD *)(v115 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
      }
      else
      {
        v118 = v115 + 8 * v117;
        LODWORD(this->fields.m_CancellationTokenSource) = v117 + 1;
        *(_QWORD *)(v118 + 32) = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 32), 0, v80, v81);
      }
      v119 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_61386656(
                                         (System_String_o *)StringLiteral_15744/*"["*/,
                                         v71,
                                         (System_String_o *)StringLiteral_16000/*"]"*/,
                                         0LL);
      if ( !v119 )
        goto LABEL_234;
LABEL_164:
      v120 = v119->fields._items;
      v121 = Method_System_Collections_Generic_List_string__Add__;
      ++v119->fields._version;
      if ( !v120 )
        goto LABEL_234;
      v106 = (Il2CppObject *)this;
LABEL_166:
      v122 = v119->fields._size;
      if ( (unsigned int)v122 < v120->max_length )
      {
        v123 = &v120->obj.klass + v122;
        v119->fields._size = v122 + 1;
        v123[4] = (Il2CppClass *)v106;
        v105 = (ServantStatusBattleListViewItem_o *)(v123 + 4);
        goto LABEL_168;
      }
      v107 = v121[4];
      this = (CommonMessageManager_o *)v119;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v106,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v107 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v124 = *(_QWORD *)&this->fields.m_CachedPtr;
      v125 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v124 )
        goto LABEL_234;
      v126 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v126 + 1;
        *(_DWORD *)(v124 + 4 * v126 + 32) = line;
      }
LABEL_176:
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      v149 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v47 >= stringLength )
        goto LABEL_215;
    }
  }
  v149 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v46, v149, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = (CommonMessageManager_o *)*tagDataList;
      if ( *tagDataList )
      {
        v152 = *(_QWORD *)&this->fields.m_CachedPtr;
        v153 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v152 )
        {
          v154 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v154 >= *(_DWORD *)(v152 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
          }
          else
          {
            v155 = v152 + 8 * v154;
            LODWORD(this->fields.m_CancellationTokenSource) = v154 + 1;
            *(_QWORD *)(v155 + 32) = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v155 + 32), 0, v150, v151);
          }
          if ( v46 )
          {
            v156 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_61395016(
                                               v46,
                                               v167->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_15940/*"[r]"*/,
                                               0LL);
            if ( v156 )
            {
              v159 = v156->fields._items;
              v160 = Method_System_Collections_Generic_List_string__Add__;
              ++v156->fields._version;
              if ( v159 )
              {
                v161 = v156->fields._size;
                v162 = this;
                if ( (unsigned int)v161 >= v159->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v156,
                    (Il2CppObject *)this,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
                }
                else
                {
                  v163 = &v159->obj.klass + v161;
                  v156->fields._size = v161 + 1;
                  v163[4] = (Il2CppClass *)v162;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v163 + 4), (int32_t)v162, v157, v158);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v164 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v165 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v164 )
                  {
                    v166 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v166 >= *(_DWORD *)(v164 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v166 + 1;
                      *(_DWORD *)(v164 + 4 * v166 + 32) = line;
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
    sub_1B64324(this);
  }
}


void __fastcall CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FDDFE & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11406/*"SCRIPT_ACTION_CODE_COMMENT"*/, v3);
    sub_1B640C8(&StringLiteral_11415/*"SCRIPT_ACTION_CODE_VOICE"*/, v4);
    sub_1B640C8(&StringLiteral_11409/*"SCRIPT_ACTION_CODE_RETURN"*/, v5);
    sub_1B640C8(&StringLiteral_11414/*"SCRIPT_ACTION_CODE_TALK"*/, v6);
    byte_49FDDFE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11406/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.codeCommentString, (int32_t)v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11414/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.codeTalkString, (int32_t)v10, v11, v12);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11415/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.codeVoiceString, (int32_t)v13, v14, v15);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11409/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.codeReturnString, (int32_t)v16, v17, v18);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetTalkNameBack((ScriptMessageCommonManager_o *)this, 0LL, 0LL);
  ScriptMessageCommonManager__InitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)this, 1, 0LL);
  this->fields.isDispLastTouchMark = 1;
}


void __fastcall CommonMessageManager__OnClickWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
  }
}


bool __fastcall CommonMessageManager__ProcessScript(
        CommonMessageManager_o *this,
        float delta,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CommonMessageManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x22
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v40; // x24
  System_String_o *v41; // x25
  System_String_array *v42; // x23
  int32_t v43; // w3
  __int64 *v44; // x8
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  ServantStatusBattleListViewItem_o *v48; // x0
  System_String_o *v49; // x1
  System_String_o *v50; // x23
  uint32_t v51; // w0
  __int64 *v52; // x8
  const MethodInfo *v53; // x2
  int32_t v54; // w3
  __int64 v55; // x1
  __int64 *v56; // x8
  __int64 *v57; // x8
  System_String_o *v58; // x1
  int32_t playSpeed; // w8
  __int64 *v60; // x8
  __int64 *v61; // x8
  __int64 v62; // x9
  float v63; // s0
  System_String_o *v64; // x1
  __int64 v65; // x9
  float v66; // s0
  __int64 v67; // x9
  System_String_o *v68; // x1
  ScriptMessageCommonManager_o *v69; // x0
  System_String_o *v70; // x2
  int32_t v71; // w1
  _BOOL4 isBusy; // w20
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 *v76; // x8
  __int64 v77; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_49FDE03 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21325/*"messageOn"*/, method);
    sub_1B640C8(&StringLiteral_17931/*"clear"*/, v6);
    sub_1B640C8(&StringLiteral_19439/*"font"*/, v7);
    sub_1B640C8(&StringLiteral_22352/*"page3"*/, v8);
    sub_1B640C8(&StringLiteral_21323/*"messageOff"*/, v9);
    sub_1B640C8(&StringLiteral_22351/*"page2"*/, v10);
    sub_1B640C8(&StringLiteral_19252/*"f"*/, v11);
    sub_1B640C8(&StringLiteral_23326/*"speed"*/, v12);
    sub_1B640C8(&StringLiteral_20882/*"k"*/, v13);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v14);
    sub_1B640C8(&StringLiteral_22581/*"q"*/, v15);
    sub_1B640C8(&StringLiteral_22366/*"parameter error"*/, v16);
    sub_1B640C8(&StringLiteral_23899/*"touch2"*/, v17);
    sub_1B640C8(&StringLiteral_22347/*"page"*/, v18);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v19);
    sub_1B640C8(&StringLiteral_22365/*"parameter be unnecessary"*/, v20);
    sub_1B640C8(&StringLiteral_18926/*"end"*/, v21);
    sub_1B640C8(&StringLiteral_21317/*"message2"*/, v22);
    sub_1B640C8(&StringLiteral_20944/*"l"*/, v23);
    sub_1B640C8(&StringLiteral_19444/*"fontSize"*/, v24);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v25);
    sub_1B640C8(&StringLiteral_23744/*"talkName"*/, v26);
    sub_1B640C8(&StringLiteral_23897/*"touch"*/, v27);
    sub_1B640C8(&StringLiteral_21318/*"message3"*/, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    sub_1B640C8(&StringLiteral_22895/*"s"*/, v30);
    sub_1B640C8(&StringLiteral_17094/*"betweenHeight"*/, v31);
    this = (CommonMessageManager_o *)sub_1B640C8(&StringLiteral_17933/*"clear2"*/, v32);
    byte_49FDE03 = 1;
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
      if ( (unsigned int)executeIndex >= executeTagList->max_length )
        goto LABEL_189;
      executeDataList = v5->fields.executeDataList;
      if ( !executeDataList )
        goto LABEL_190;
      if ( (unsigned int)executeIndex >= executeDataList->max_length )
        goto LABEL_189;
      executeLineList = v5->fields.executeLineList;
      if ( !executeLineList )
LABEL_190:
        sub_1B64324(this);
      if ( (unsigned int)executeIndex >= executeLineList->max_length )
        goto LABEL_189;
      v40 = executeDataList->m_Items[executeIndex];
      v41 = executeTagList->m_Items[executeIndex];
      v42 = CommonMessageManager__AnalysParam(this, v40, v3);
      if ( !v41 && v5->fields.isBusy )
        goto LABEL_181;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v41, 0LL);
      if ( (unsigned int)this > 0x84F7AC69 )
      {
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_22581/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v56 = &StringLiteral_22895/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v56, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v62 = *(_QWORD *)&v42->max_length;
                if ( (_DWORD)v62 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v42->m_Items[0],
                                                     (System_String_o *)StringLiteral_920/*"-"*/,
                                                     0LL);
                  v63 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42->max_length )
                      goto LABEL_189;
                    v63 = System_Single__Parse(v42->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v44 = &StringLiteral_22366/*"parameter error"*/;
                  if ( v62 )
                    goto LABEL_169;
                  v63 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v63, 0LL);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v52 = &StringLiteral_20944/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v52, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v65 = *(_QWORD *)&v42->max_length;
                if ( (_DWORD)v65 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v42->m_Items[0],
                                                     (System_String_o *)StringLiteral_920/*"-"*/,
                                                     0LL);
                  v66 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42->max_length )
LABEL_189:
                      sub_1B6432C(this, method);
                    v66 = System_Single__Parse(v42->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v44 = &StringLiteral_22366/*"parameter error"*/;
                  if ( v65 )
                    goto LABEL_169;
                  v66 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v66, 0LL);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_20882/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v44 = &StringLiteral_22365/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v42->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v57 = &StringLiteral_23897/*"touch"*/;
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
              v61 = &StringLiteral_19444/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v61 = &StringLiteral_19252/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_24501/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v42 )
                goto LABEL_190;
              if ( (int)v42->max_length < 1 )
              {
                v44 = &StringLiteral_22366/*"parameter error"*/;
LABEL_169:
                if ( *v44 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v49 = v42->m_Items[0];
              *p_waitType = v49;
LABEL_151:
              v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v52 = &StringLiteral_17094/*"betweenHeight"*/;
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
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_22347/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v44 = &StringLiteral_22365/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v42->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v57 = &StringLiteral_22347/*"page"*/;
LABEL_150:
              v49 = (System_String_o *)*v57;
              v5->fields.waitType = (struct System_String_o *)*v57;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_21323/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v44 = &StringLiteral_22366/*"parameter error"*/;
              if ( *(_QWORD *)&v42->max_length )
                goto LABEL_169;
              ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
              ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
              goto LABEL_170;
            }
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1787721130 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_18926/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v44 = &StringLiteral_22365/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v56 = &StringLiteral_23326/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v61 = &StringLiteral_19439/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v61, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v67 = *(_QWORD *)&v42->max_length;
            if ( (_DWORD)v67 == 1 )
            {
              v68 = v42->m_Items[0];
              v69 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v67 >= 3 )
            {
              v68 = v42->m_Items[0];
              v70 = v42->m_Items[2];
              v69 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v44 = &StringLiteral_22366/*"parameter error"*/;
              if ( v67 )
                goto LABEL_169;
              v69 = (ScriptMessageCommonManager_o *)v5;
              v68 = 0LL;
LABEL_145:
              v70 = 0LL;
            }
            ScriptMessageCommonManager__SetFontSize(v69, v68, v70, 0LL);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_17931/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v44 = &StringLiteral_22365/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v57 = &StringLiteral_17931/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_23744/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v40;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_21325/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_190;
          v44 = &StringLiteral_22366/*"parameter error"*/;
          if ( *(_QWORD *)&v42->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v45 = StringLiteral_21313/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21313/*"message"*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v45, v46, v47);
          v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitMessage;
          LODWORD(v49) = 0;
          v5->fields.waitMessage = 0LL;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v41 )
      {
        v5->fields.state = 4;
        v71 = StringLiteral_21313/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21313/*"message"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v71, (int32_t)v3, v43);
        v5->fields.waitMessage = v40;
        v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v49) = (_DWORD)v40;
LABEL_156:
        sub_1B6406C(v48, (int32_t)v49, (int32_t)v3, v43);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v50 = *p_waitType;
    v51 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0LL);
    if ( v51 > 0x698989D8 )
      break;
    if ( v51 > 0xD841B5E )
    {
      if ( v51 != 619841764 )
      {
        if ( v51 != 1550717474 )
        {
          if ( v51 == 1770621400 && System_String__op_Equality(v50, (System_String_o *)StringLiteral_23897/*"touch"*/, 0LL) )
          {
            if ( v5->fields.isBusy )
            {
LABEL_181:
              ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
              return !v5->fields.isBusy && v5->fields.state == 3;
            }
            ScriptMessageCommonManager__WaitNextTouch(
              (ScriptMessageCommonManager_o *)v5,
              v5->fields.isDispLastTouchMark,
              0LL);
            v76 = &StringLiteral_23899/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_17931/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v60 = &StringLiteral_17933/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21313/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v60 = &StringLiteral_21317/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v53);
      v64 = *p_waitMessage;
      if ( !*p_waitMessage )
        v64 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v64, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v51 == 256629 )
    {
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21318/*"message3"*/, 0LL) || v5->fields.isScroll )
        goto LABEL_173;
      v58 = *p_waitMessage;
      if ( !*p_waitMessage )
        v58 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v58, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0LL);
      goto LABEL_115;
    }
    if ( v51 != 226761566
      || !System_String__op_Equality(v50, (System_String_o *)StringLiteral_23899/*"touch2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0LL);
    v5->fields.isCancelInput = 1;
LABEL_115:
    state = 3;
    v5->fields.state = 3;
  }
  if ( v51 <= 0x91466F30 )
  {
    if ( v51 == -2124547466 )
    {
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_22347/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v60 = &StringLiteral_22351/*"page2"*/;
LABEL_120:
      v55 = *v60;
      *p_waitType = (System_String_o *)*v60;
LABEL_121:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v55, (int32_t)v53, v54);
      goto LABEL_171;
    }
    if ( v51 != -1857654992
      || !System_String__op_Equality(v50, (System_String_o *)StringLiteral_17933/*"clear2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
    goto LABEL_115;
  }
  if ( v51 == -336528737 )
  {
    if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_22352/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v51 == -16520990 )
  {
    if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21317/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    LODWORD(v55) = StringLiteral_21318/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21318/*"message3"*/;
    goto LABEL_121;
  }
  if ( v51 == -353306356
    && System_String__op_Equality(v50, (System_String_o *)StringLiteral_22351/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v76 = &StringLiteral_22352/*"page3"*/;
LABEL_188:
    v77 = *v76;
    v5->fields.waitType = (struct System_String_o *)*v76;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v77, v74, v75);
  }
LABEL_173:
  isBusy = v5->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
  if ( !isBusy )
    return 0;
  return !v5->fields.isBusy && v5->fields.state == 3;
}


void __fastcall CommonMessageManager__Quit(CommonMessageManager_o *this, const MethodInfo *method)
{
  CommonMessageManager__EndExecuteScript(this, method);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  v8 = isDispLastTouchMark;
  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v9, v10);
  CommonMessageManager__AnalysScript(this, messageBlock, v11);
  this->fields.executeIndex = 0;
  this->fields.isCancelInput = 0;
  this->fields.state = 3;
  this->fields.isDispLastTouchMark = v8;
}


void __fastcall CommonMessageManager__SetMessageSpeed(
        CommonMessageManager_o *this,
        int32_t playSpeed,
        const MethodInfo *method)
{
  this->fields.playSpeed = playSpeed;
}


void __fastcall CommonMessageManager__SetTalkName(
        CommonMessageManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t charaIndex; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-38h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49FDDFF & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, name);
    byte_49FDDFF = 1;
  }
  imageName = 0LL;
  charaName = 0LL;
  className = 0LL;
  charaIndex = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTalkName(&imageName, &className, &charaName, &charaIndex, name, 0LL);
  ScriptMessageCommonManager__SetTalkName(
    (ScriptMessageCommonManager_o *)this,
    0LL,
    className,
    charaName,
    charaIndex,
    0LL);
}


void __fastcall CommonMessageManager__SetTouchCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.touchCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}