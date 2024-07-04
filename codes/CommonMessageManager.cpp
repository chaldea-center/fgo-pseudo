void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_48E4157 & 1) == 0 )
  {
    sub_1B00CCC(&ScriptMessageManager_TypeInfo, method);
    byte_48E4157 = 1;
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
  System_String_o *v3; // x19
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
  int stringLength; // w28
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
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int v43; // w8
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  System_String_o *v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int16 v60[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_48E4155 & 1) == 0 )
  {
    sub_1B00CCC(&char_TypeInfo, data);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__set_Item__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_1848/*"="*/, v11);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v12);
    sub_1B00CCC(&StringLiteral_865/*","*/, v13);
    sub_1B00CCC(&StringLiteral_369/*"\""*/, v14);
    this = (CommonMessageManager_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v15);
    byte_48E4155 = 1;
  }
  v60[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = v19++;
      Chars = System_String__get_Chars(v3, v20, 0LL);
      v60[0] = Chars;
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
                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_115/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v60, 0LL);
          items = v17->fields._items;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_72;
          v50 = v17->fields._size;
          if ( (unsigned int)v50 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)data,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + v50;
            v17->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)data;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)data, v46, v47);
          }
          goto LABEL_63;
        }
        v29 = v17->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v30 = System_Char__ToString((uint16_t)v60, 0LL);
        if ( v30 )
          v31 = (Il2CppObject *)v30;
        else
          v31 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v17,
          v29 - 1,
          v31,
          (const MethodInfo_33C1754 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v22 = System_Char__ToString((uint16_t)v60, 0LL);
            v18 = System_String__Concat_60325748(v18, v22, 0LL);
            if ( v19 < stringLength )
            {
              while ( 1 )
              {
                v23 = v19 + 1;
                v60[0] = System_String__get_Chars(v3, v19, 0LL);
                if ( v60[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v24 = System_Char__ToString((uint16_t)v60, 0LL);
                v18 = System_String__Concat_60325748(v18, v24, 0LL);
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
            v36 = (System_String_o *)StringLiteral_369/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v36 = System_Char__ToString((uint16_t)v60, 0LL);
          }
          v18 = System_String__Concat_60325748(v18, v36, 0LL);
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
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            v17->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)v18;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v18, v25, v26);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v60, 0LL);
          v39 = v17->fields._items;
          v40 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !v39 )
            goto LABEL_72;
          v41 = v17->fields._size;
          if ( (unsigned int)v41 >= v39->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)data,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &v39->obj.klass + v41;
            v17->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)data;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)data, v37, v38);
          }
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v43 = v17->fields._size;
        if ( v43 < 1 )
          goto LABEL_51;
        v44 = System_Collections_Generic_List_object___get_Item(
                v17,
                v43 - 1,
                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v44, (System_String_o *)StringLiteral_1848/*"="*/, 0LL) )
        {
          v45 = System_Collections_Generic_List_object___get_Item(
                  v17,
                  v17->fields._size - 1,
                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v45, (System_String_o *)StringLiteral_865/*","*/, 0LL) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v19 >= stringLength )
      {
        v52 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v52 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v18, v52, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v17 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v17,
                                      (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1B00F28(this, data);
  }
  if ( !v17 )
    goto LABEL_72;
  v55 = v17->fields._items;
  v56 = Method_System_Collections_Generic_List_string__Add__;
  ++v17->fields._version;
  if ( !v55 )
    goto LABEL_72;
  v57 = v17->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v17->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v18, v53, v54);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v17,
                                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  Il2CppObject *v31; // x1
  System_String_array *v32; // x23
  System_Collections_Generic_List_object__o *v33; // x22
  System_Collections_Generic_List_object__o *v34; // x21
  System_Collections_Generic_List_int__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  __int64 v39; // x26
  System_String_o **m_Items; // x9
  __int64 v41; // x29
  __int64 v42; // x24
  System_String_o **v43; // x27
  System_String_o *v44; // x28
  System_String_o *v45; // x25
  System_String_o *v46; // x0
  System_String_o *v47; // x28
  System_String_o **v48; // x5
  int32_t v49; // w2
  int32_t v50; // w3
  _QWORD *v51; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  _QWORD *v57; // x9
  struct System_Object_array *v58; // x8
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  System_String_o *v73; // x1
  Il2CppClass **v74; // x0
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  int32_t v78; // w26
  int32_t v79; // w2
  int32_t v80; // w3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x8
  _QWORD *v88; // x9
  struct System_Object_array *v89; // x8
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  struct System_Int32_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  _QWORD *v95; // x9
  struct System_Object_array *v96; // x8
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  _QWORD *v101; // x9
  struct System_Object_array *v102; // x8
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  struct System_Int32_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  struct System_Int32_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  _QWORD *v127; // x9
  struct System_Object_array *v128; // x8
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  struct System_Int32_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  struct System_String_array *v134; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  struct System_String_array *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  struct System_Int32_array *v140; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v144; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v150; // 0:w1.4

  if ( (byte_48E4153 & 1) == 0 )
  {
    sub_1B00CCC(&char___TypeInfo, scriptData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v14);
    sub_1B00CCC(&StringLiteral_398/*"#"*/, v15);
    sub_1B00CCC(&StringLiteral_1123/*"//"*/, v16);
    sub_1B00CCC(&StringLiteral_19777/*"i"*/, v17);
    sub_1B00CCC(&StringLiteral_20682/*"k"*/, v18);
    sub_1B00CCC(&StringLiteral_22363/*"q"*/, v19);
    sub_1B00CCC(&StringLiteral_510/*"%"*/, v20);
    sub_1B00CCC(&StringLiteral_532/*"&"*/, v21);
    sub_1B00CCC(&StringLiteral_20827/*"line"*/, v22);
    sub_1B00CCC(&StringLiteral_23494/*"talkStart"*/, v23);
    sub_1B00CCC(&StringLiteral_19959/*"image"*/, v24);
    sub_1B00CCC(&StringLiteral_15777/*"[r]"*/, v25);
    sub_1B00CCC(&StringLiteral_23490/*"talkName"*/, v26);
    sub_1B00CCC(&StringLiteral_1/*""*/, v27);
    byte_48E4153 = 1;
  }
  v28 = (System_Array_o *)sub_1B00D74(char___TypeInfo, 5LL);
  v150.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v29 = (System_Char_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v28, v150, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v32 = System_String__Split_60348132(scriptData, v29, 1, 0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v33;
  v34 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v34;
  v35 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v35;
  lastMessageIndex = -1;
  if ( !v32 )
    goto LABEL_144;
  v38 = *(_QWORD *)&v32->max_length;
  if ( (int)v38 < 1 )
  {
    LODWORD(v39) = 0;
    goto LABEL_122;
  }
  v39 = 0LL;
  m_Items = v32->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v41 = 0LL;
    v42 = (v39 << 32) + 0x100000000LL;
    v43 = &m_Items[v39];
    while ( 1 )
    {
      if ( (int)v39 + (int)v41 >= (unsigned int)v38 )
        sub_1B00F30(v30, v31);
      v44 = v43[v41];
      if ( !v44 )
        goto LABEL_144;
      if ( v44->fields._stringLength < 1 )
        goto LABEL_53;
      v45 = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (System_String_o *)System_String__StartsWith(v43[v41], (System_String_o *)StringLiteral_1123/*"//"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      v30 = (System_String_o *)System_String__StartsWith(v44, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v44, this->fields.codeTalkString, 0LL) )
        break;
      v30 = (System_String_o *)System_String__StartsWith(v44, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v48,
          v44,
          v39 + v41 + 1,
          v144);
LABEL_18:
        v30 = (System_String_o *)System_String__op_Inequality(v45, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v30 & 1) != 0 )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_144;
            v51 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_23494/*"talkStart"*/;
            items = v33->fields._items;
            ++v33->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                v31,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v31;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v31, v49, v50);
            }
            if ( !v34 )
              goto LABEL_144;
            v57 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_1/*""*/;
            v58 = v34->fields._items;
            ++v34->fields._version;
            if ( !v58 )
              goto LABEL_144;
            v59 = v34->fields._size;
            if ( (unsigned int)v59 >= v58->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v31,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &v58->obj.klass + v59;
              v34->fields._size = v59 + 1;
              v60[4] = (Il2CppClass *)v31;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v31, v55, v56);
            }
            if ( !v35 )
              goto LABEL_144;
            v61 = v35->fields._items;
            v62 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !v61 )
              goto LABEL_144;
            v63 = v35->fields._size;
            if ( (unsigned int)v63 >= v61->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                v39 + v41 + 1,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = v63 + 1;
              v61->m_Items[v63 + 1] = v39 + v41 + 1;
            }
          }
          else if ( !v33 )
          {
            goto LABEL_144;
          }
          v64 = v33->fields._items;
          v65 = Method_System_Collections_Generic_List_string__Add__;
          ++v33->fields._version;
          if ( !v64 )
            goto LABEL_144;
          v66 = v33->fields._size;
          if ( (unsigned int)v66 >= v64->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              0LL,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v64->obj.klass + v66;
            v33->fields._size = v66 + 1;
            v67[4] = 0LL;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v67 + 4), 0, v49, v50);
          }
          if ( !v34 )
            goto LABEL_144;
          lastMessageIndex = v34->fields._size;
          if ( !v45 )
            goto LABEL_144;
          v30 = System_String__Replace_60345368(
                  v45,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_15777/*"[r]"*/,
                  0LL);
          v70 = v34->fields._items;
          v71 = Method_System_Collections_Generic_List_string__Add__;
          ++v34->fields._version;
          if ( !v70 )
            goto LABEL_144;
          v72 = v34->fields._size;
          v73 = v30;
          if ( (unsigned int)v72 >= v70->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v30,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v70->obj.klass + v72;
            v34->fields._size = v72 + 1;
            v74[4] = (Il2CppClass *)v73;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v73, v68, v69);
          }
          if ( !v35 )
            goto LABEL_144;
          v75 = v35->fields._items;
          v76 = Method_System_Collections_Generic_List_int__Add__;
          ++v35->fields._version;
          if ( !v75 )
            goto LABEL_144;
          v77 = v35->fields._size;
          if ( (unsigned int)v77 >= v75->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v35,
              v39 + v41 + 1,
              *(const MethodInfo_33A49AC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v35->fields._size = v77 + 1;
            v75->m_Items[v77 + 1] = v39 + v41 + 1;
          }
        }
      }
LABEL_53:
      v38 = *(_QWORD *)&v32->max_length;
      ++v41;
      v42 += 0x100000000LL;
      if ( v39 + v41 >= (int)v38 )
      {
        LODWORD(v39) = v39 + v41;
        goto LABEL_122;
      }
    }
    v46 = v44;
    v47 = (System_String_o *)StringLiteral_23490/*"talkName"*/;
    v45 = System_String__Substring(v46, 1, 0LL);
    if ( !v47 )
      goto LABEL_18;
    v78 = v39 + v41 + 1;
    v30 = (System_String_o *)System_String__op_Equality(v47, (System_String_o *)StringLiteral_20682/*"k"*/, 0LL);
    if ( ((unsigned __int8)v30 & 1) == 0 )
    {
      v30 = (System_String_o *)System_String__op_Equality(v47, (System_String_o *)StringLiteral_22363/*"q"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        if ( System_String__op_Equality(v47, (System_String_o *)StringLiteral_23490/*"talkName"*/, 0LL) )
        {
          v30 = (System_String_o *)System_String__op_Equality(v47, (System_String_o *)StringLiteral_23490/*"talkName"*/, 0LL);
          v87 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v30 & 1) != 0 )
            v87 = v45;
          a = v87;
        }
        else if ( System_String__op_Equality(v47, (System_String_o *)StringLiteral_19777/*"i"*/, 0LL)
               || System_String__op_Equality(v47, (System_String_o *)StringLiteral_19959/*"image"*/, 0LL)
               || System_String__op_Equality(v47, (System_String_o *)StringLiteral_20827/*"line"*/, 0LL)
               || System_String__StartsWith(v47, (System_String_o *)StringLiteral_510/*"%"*/, 0LL)
               || System_String__StartsWith(v47, (System_String_o *)StringLiteral_532/*"&"*/, 0LL)
               || (v30 = (System_String_o *)System_String__StartsWith(v47, (System_String_o *)StringLiteral_398/*"#"*/, 0LL),
                   ((unsigned __int8)v30 & 1) != 0) )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_144;
            v95 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_23494/*"talkStart"*/;
            v96 = v33->fields._items;
            ++v33->fields._version;
            if ( !v96 )
              goto LABEL_144;
            v97 = v33->fields._size;
            if ( (unsigned int)v97 >= v96->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                v31,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
            }
            else
            {
              v98 = &v96->obj.klass + v97;
              v33->fields._size = v97 + 1;
              v98[4] = (Il2CppClass *)v31;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v31, v79, v80);
            }
            if ( !v34 )
              goto LABEL_144;
            v101 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_1/*""*/;
            v102 = v34->fields._items;
            ++v34->fields._version;
            if ( !v102 )
              goto LABEL_144;
            v103 = v34->fields._size;
            if ( (unsigned int)v103 >= v102->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v31,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v104 = &v102->obj.klass + v103;
              v34->fields._size = v103 + 1;
              v104[4] = (Il2CppClass *)v31;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v104 + 4), (int32_t)v31, v99, v100);
            }
            if ( !v35 )
              goto LABEL_144;
            v105 = v35->fields._items;
            v106 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !v105 )
              goto LABEL_144;
            v107 = v35->fields._size;
            if ( (unsigned int)v107 >= v105->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                v78,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = v107 + 1;
              v105->m_Items[v107 + 1] = v78;
            }
          }
          else if ( !v34 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v34->fields._size;
        }
LABEL_104:
        if ( v33 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( (lastMessageIndex & 0x80000000) != 0 )
      goto LABEL_104;
    if ( !v33 )
      goto LABEL_144;
    v81 = v33->fields._items;
    v82 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v81 )
      goto LABEL_144;
    v83 = v33->fields._size;
    if ( (unsigned int)v83 >= v81->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        0LL,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &v81->obj.klass + v83;
      v33->fields._size = v83 + 1;
      v84[4] = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v84 + 4), 0, v79, v80);
    }
    if ( !v34 )
      goto LABEL_144;
    v88 = Method_System_Collections_Generic_List_string__Add__;
    v31 = (Il2CppObject *)StringLiteral_15777/*"[r]"*/;
    v89 = v34->fields._items;
    ++v34->fields._version;
    if ( !v89 )
      goto LABEL_144;
    v90 = v34->fields._size;
    if ( (unsigned int)v90 >= v89->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v31,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v89->obj.klass + v90;
      v34->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v31;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)v31, v85, v86);
    }
    if ( !v35 )
      goto LABEL_144;
    v92 = v35->fields._items;
    v93 = Method_System_Collections_Generic_List_int__Add__;
    ++v35->fields._version;
    if ( !v92 )
      goto LABEL_144;
    v94 = v35->fields._size;
    if ( (unsigned int)v94 >= v92->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v35,
        v78,
        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v94 + 1;
      v92->m_Items[v94 + 1] = v78;
    }
    lastMessageIndex = -1;
LABEL_105:
    v108 = v33->fields._items;
    v109 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v108 )
      goto LABEL_144;
    v110 = v33->fields._size;
    if ( (unsigned int)v110 >= v108->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v47,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v33->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v47;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v111 + 4), (int32_t)v47, v79, v80);
    }
    if ( !v34 )
      goto LABEL_144;
    v114 = v34->fields._items;
    v115 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v114 )
      goto LABEL_144;
    v116 = v34->fields._size;
    if ( (unsigned int)v116 >= v114->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)v45,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v117 = &v114->obj.klass + v116;
      v34->fields._size = v116 + 1;
      v117[4] = (Il2CppClass *)v45;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v45, v112, v113);
    }
    if ( !v35 )
      goto LABEL_144;
    v118 = v35->fields._items;
    v119 = Method_System_Collections_Generic_List_int__Add__;
    ++v35->fields._version;
    if ( !v118 )
      goto LABEL_144;
    v120 = v35->fields._size;
    if ( (unsigned int)v120 >= v118->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v35,
        v78,
        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v120 + 1;
      v118->m_Items[v120 + 1] = v78;
    }
    v38 = *(_QWORD *)&v32->max_length;
    m_Items = v32->m_Items;
    v39 = v42 >> 32;
  }
  while ( v42 >> 32 < (int)v38 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v33 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v33 )
    goto LABEL_144;
  v121 = v33->fields._items;
  v122 = Method_System_Collections_Generic_List_string__Add__;
  ++v33->fields._version;
  if ( !v121 )
    goto LABEL_144;
  v123 = v33->fields._size;
  if ( (unsigned int)v123 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      0LL,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
  }
  else
  {
    v124 = &v121->obj.klass + v123;
    v33->fields._size = v123 + 1;
    v124[4] = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v124 + 4), 0, v36, v37);
  }
  if ( !v34 )
    goto LABEL_144;
  v127 = Method_System_Collections_Generic_List_string__Add__;
  v31 = (Il2CppObject *)StringLiteral_15777/*"[r]"*/;
  v128 = v34->fields._items;
  ++v34->fields._version;
  if ( !v128 )
    goto LABEL_144;
  v129 = v34->fields._size;
  if ( (unsigned int)v129 >= v128->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      v31,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = &v128->obj.klass + v129;
    v34->fields._size = v129 + 1;
    v130[4] = (Il2CppClass *)v31;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v130 + 4), (int32_t)v31, v125, v126);
  }
  if ( !v35 )
    goto LABEL_144;
  v131 = v35->fields._items;
  v132 = Method_System_Collections_Generic_List_int__Add__;
  ++v35->fields._version;
  if ( !v131 )
    goto LABEL_144;
  v133 = v35->fields._size;
  if ( (unsigned int)v133 >= v131->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v35,
      v39,
      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v35->fields._size = v133 + 1;
    v131->m_Items[v133 + 1] = v39;
  }
LABEL_140:
  v134 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v33,
                                         (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v134;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.executeTagList, (int32_t)v134, v135, v136);
  if ( !v34
    || (v137 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v34,
                                               (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v137,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.executeDataList, (int32_t)v137, v138, v139),
        !v35)
    || (v140 = System_Collections_Generic_List_int___ToArray(
                 v35,
                 (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v140,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.executeLineList, (int32_t)v140, v141, v142),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1B00F28(v30, v31);
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
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  __int64 *v87; // x8
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  int32_t v92; // w2
  int32_t v93; // w3
  System_Collections_Generic_List_string__o **v94; // x27
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  ServantStatusBattleListViewItem_o *v103; // x0
  __int64 v104; // x8
  __int64 *v105; // x8
  __int64 v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x8
  int32_t v110; // w2
  int32_t v111; // w3
  __int64 v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  __int64 v115; // x8
  System_Collections_Generic_List_string__o *v116; // x28
  struct System_String_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  int32_t v124; // w8
  __int64 v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  __int64 v128; // x8
  int32_t v129; // w2
  int32_t v130; // w3
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  __int64 v141; // x8
  int32_t v142; // w8
  System_String_o *v143; // x24
  System_String_o *v144; // x1
  System_String_o *v145; // x1
  int32_t v146; // w2
  int32_t v147; // w3
  __int64 v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  __int64 v151; // x8
  System_Collections_Generic_List_object__o *v152; // x21
  int32_t v153; // w2
  int32_t v154; // w3
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  CommonMessageManager_o *v158; // x1
  Il2CppClass **v159; // x0
  __int64 v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  CommonMessageManager_o *v163; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v167; // [xsp+20h] [xbp-70h]
  __int16 v168[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v163 = this;
  v167 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_48E4154 & 1) == 0 )
  {
    sub_1B00CCC(&char_TypeInfo, tagDataList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1B00CCC(&StringLiteral_17755/*"clear"*/, v14);
    sub_1B00CCC(&StringLiteral_19254/*"font"*/, v15);
    sub_1B00CCC(&StringLiteral_19070/*"f"*/, v16);
    sub_1B00CCC(&StringLiteral_23077/*"speed"*/, v17);
    sub_1B00CCC(&StringLiteral_20682/*"k"*/, v18);
    sub_1B00CCC(&StringLiteral_22363/*"q"*/, v19);
    sub_1B00CCC(&StringLiteral_24229/*"voiceStop"*/, v20);
    sub_1B00CCC(&StringLiteral_16938/*"bgm"*/, v21);
    sub_1B00CCC(&StringLiteral_16940/*"bgmStop"*/, v22);
    sub_1B00CCC(&StringLiteral_24376/*"wt"*/, v23);
    sub_1B00CCC(&StringLiteral_22742/*"seStop"*/, v24);
    sub_1B00CCC(&StringLiteral_22132/*"page"*/, v25);
    sub_1B00CCC(&StringLiteral_24237/*"wait"*/, v26);
    sub_1B00CCC(&StringLiteral_18747/*"end"*/, v27);
    sub_1B00CCC(&StringLiteral_20665/*"jingle"*/, v28);
    sub_1B00CCC(&StringLiteral_22736/*"se"*/, v29);
    sub_1B00CCC(&StringLiteral_20744/*"l"*/, v30);
    sub_1B00CCC(&StringLiteral_24223/*"voice"*/, v31);
    sub_1B00CCC(&StringLiteral_23575/*"time "*/, v32);
    sub_1B00CCC(&StringLiteral_19259/*"fontSize"*/, v33);
    sub_1B00CCC(&StringLiteral_22740/*"seLoop"*/, v34);
    sub_1B00CCC(&StringLiteral_369/*"\""*/, v35);
    sub_1B00CCC(&StringLiteral_15777/*"[r]"*/, v36);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v37);
    sub_1B00CCC(&StringLiteral_1/*""*/, v38);
    sub_1B00CCC(&StringLiteral_22673/*"s"*/, v39);
    sub_1B00CCC(&StringLiteral_15837/*"]"*/, v40);
    sub_1B00CCC(&StringLiteral_16926/*"betweenHeight"*/, v41);
    sub_1B00CCC(&StringLiteral_20666/*"jingleStop"*/, v42);
    sub_1B00CCC(&StringLiteral_23050/*"soundStopAll"*/, v43);
    this = (CommonMessageManager_o *)sub_1B00CCC(&StringLiteral_1207/*"0"*/, v44);
    byte_48E4154 = 1;
  }
  v168[0] = 0;
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
        v168[0] = Chars;
        if ( Chars == 91 )
          break;
        v56 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v57 = System_Char__ToString((uint16_t)v168, 0LL);
        v46 = System_String__Concat_60325748(v46, v57, 0LL);
        if ( v56 == 34 )
        {
          if ( v47 < stringLength )
          {
            while ( 1 )
            {
              v58 = v47 + 1;
              v168[0] = System_String__get_Chars(analysData, v47, 0LL);
              if ( v168[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v59 = System_Char__ToString((uint16_t)v168, 0LL);
              v46 = System_String__Concat_60325748(v46, v59, 0LL);
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
          v46 = System_String__Concat_60325748(v46, (System_String_o *)StringLiteral_369/*"\""*/, 0LL);
        }
        if ( v47 >= stringLength )
        {
          v145 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v46, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v167;
        if ( !*v167 )
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
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = v52 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v55 + 32) = 0LL;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v55 + 32), 0, v50, v51);
        }
        if ( !v46 )
          goto LABEL_234;
        v60 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_60345368(
                                           v46,
                                           v163->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_15777/*"[r]"*/,
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
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &items->obj.klass + size;
          v60->fields._size = size + 1;
          v67[4] = (Il2CppClass *)v66;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v66, v61, v62);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
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
          v168[0] = v75;
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
          v77 = System_Char__ToString((uint16_t)v168, 0LL);
          v71 = System_String__Concat_60325748(v71, v77, 0LL);
          if ( v168[0] == 34 )
          {
            if ( v47 < stringLength )
            {
              while ( 1 )
              {
                v78 = v47 + 1;
                v168[0] = System_String__get_Chars(analysData, v47, 0LL);
                if ( v168[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v79 = System_Char__ToString((uint16_t)v168, 0LL);
                v71 = System_String__Concat_60325748(v71, v79, 0LL);
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
            v71 = System_String__Concat_60325748(v71, (System_String_o *)StringLiteral_369/*"\""*/, 0LL);
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
                v105 = &StringLiteral_22363/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v105, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v167;
                  if ( !*v167 )
                    goto LABEL_234;
                  v106 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v107 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v106 )
                    goto LABEL_234;
                  v108 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v108 >= *(_DWORD *)(v106 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0LL,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v109 = v106 + 8 * v108;
                    LODWORD(this->fields.m_CancellationTokenSource) = v108 + 1;
                    *(_QWORD *)(v109 + 32) = 0LL;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v109 + 32), 0, v80, v81);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_15777/*"[r]"*/;
                  v125 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v126 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v125 )
                    goto LABEL_234;
                  v127 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v127 >= *(_DWORD *)(v125 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v128 = v125 + 8 * v127;
                    LODWORD(this->fields.m_CancellationTokenSource) = v127 + 1;
                    *(_QWORD *)(v128 + 32) = tagDataList;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v128 + 32), (int32_t)tagDataList, v110, v111);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v131 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v132 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v131 )
                    goto LABEL_234;
                  v133 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v133 + 1;
                    *(_DWORD *)(v131 + 4 * v133 + 32) = line;
                  }
                  this = *v167;
                  if ( !*v167 )
                    goto LABEL_234;
                  v134 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v135 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v134 )
                    goto LABEL_234;
                  v136 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v72,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v137 = v134 + 8 * v136;
                    LODWORD(this->fields.m_CancellationTokenSource) = v136 + 1;
                    *(_QWORD *)(v137 + 32) = v72;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v137 + 32), (int32_t)v72, v129, v130);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v138 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v139 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v138 )
                    goto LABEL_234;
                  v140 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v140 < *(_DWORD *)(v138 + 24) )
                  {
                    v141 = v138 + 8 * v140;
                    LODWORD(this->fields.m_CancellationTokenSource) = v140 + 1;
                    *(_QWORD *)(v141 + 32) = tagDataList;
                    v103 = (ServantStatusBattleListViewItem_o *)(v141 + 32);
                    goto LABEL_168;
                  }
                  v104 = v139[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v82 = &StringLiteral_22673/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v105 = &StringLiteral_20682/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v82 = &StringLiteral_20665/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v82 = &StringLiteral_24229/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v82 = &StringLiteral_19070/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v82 = &StringLiteral_20744/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v82 = &StringLiteral_24237/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v82 = &StringLiteral_16926/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v82 = &StringLiteral_19259/*"fontSize"*/;
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
              v87 = &StringLiteral_22132/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v82 = &StringLiteral_24223/*"voice"*/;
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
              v82 = &StringLiteral_18747/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v82 = &StringLiteral_23050/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v82, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v71 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v72->fields._stringLength + 1);
                v94 = (System_Collections_Generic_List_string__o **)(v71->fields._stringLength <= (int)tagDataList
                                                                   ? StringLiteral_1/*""*/
                                                                   : System_String__Substring(
                                                                       v71,
                                                                       (int32_t)tagDataList,
                                                                       0LL));
                this = *v167;
                if ( !*v167 )
                  goto LABEL_234;
                v95 = *(_QWORD *)&this->fields.m_CachedPtr;
                v96 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v95 )
                  goto LABEL_234;
                v97 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
                }
                else
                {
                  v98 = v95 + 8 * v97;
                  LODWORD(this->fields.m_CancellationTokenSource) = v97 + 1;
                  *(_QWORD *)(v98 + 32) = v72;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v98 + 32), (int32_t)v72, v80, v81);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v99 = *(_QWORD *)&this->fields.m_CachedPtr;
                v100 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v99 )
                  goto LABEL_234;
                v101 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v101 < *(_DWORD *)(v99 + 24) )
                {
                  v102 = v99 + 8 * v101;
                  LODWORD(this->fields.m_CancellationTokenSource) = v101 + 1;
                  *(_QWORD *)(v102 + 32) = v94;
                  v103 = (ServantStatusBattleListViewItem_o *)(v102 + 32);
                  LODWORD(tagDataList) = (_DWORD)v94;
LABEL_168:
                  sub_1B00C70(v103, (int32_t)tagDataList, v92, v93);
                  goto LABEL_171;
                }
                v104 = v100[4];
                tagDataList = v94;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v82 = &StringLiteral_23077/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v87 = &StringLiteral_17755/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v72, (System_String_o *)*v87, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v167;
                if ( !*v167 )
                  goto LABEL_234;
                v88 = *(_QWORD *)&this->fields.m_CachedPtr;
                v89 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v88 )
                  goto LABEL_234;
                v90 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                }
                else
                {
                  v91 = v88 + 8 * v90;
                  LODWORD(this->fields.m_CancellationTokenSource) = v90 + 1;
                  *(_QWORD *)(v91 + 32) = v72;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v91 + 32), (int32_t)v72, v80, v81);
                }
                if ( !v71 )
                  goto LABEL_234;
                v124 = v72->fields._stringLength;
                v116 = *scriptDataList;
                if ( v71->fields._stringLength <= v124 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v71, v124 + 1, 0LL);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v116 )
                  goto LABEL_234;
                v117 = v116->fields._items;
                v118 = Method_System_Collections_Generic_List_string__Add__;
                ++v116->fields._version;
                if ( !v117 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v82 = &StringLiteral_16938/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v82 = &StringLiteral_20666/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v82 = &StringLiteral_22736/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v82 = &StringLiteral_22740/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v72,
                                               (System_String_o *)StringLiteral_24376/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v167;
              if ( !*v167 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24237/*"wait"*/;
              v83 = *(_QWORD *)&this->fields.m_CachedPtr;
              v84 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v83 )
                goto LABEL_234;
              v85 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
              }
              else
              {
                v86 = v83 + 8 * v85;
                LODWORD(this->fields.m_CancellationTokenSource) = v85 + 1;
                *(_QWORD *)(v86 + 32) = tagDataList;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v86 + 32), (int32_t)tagDataList, v80, v81);
              }
              if ( !v71 )
                goto LABEL_234;
              v142 = v72->fields._stringLength;
              v116 = *scriptDataList;
              v143 = (System_String_o *)StringLiteral_23575/*"time "*/;
              v144 = v71->fields._stringLength <= v142 + 1
                   ? (System_String_o *)StringLiteral_1207/*"0"*/
                   : System_String__Substring(v71, v142 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_60325748(v143, v144, 0LL);
              if ( !v116 )
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
            v82 = &StringLiteral_19254/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v82 = &StringLiteral_22742/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v82 = &StringLiteral_16940/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v167;
      if ( !*v167 )
        goto LABEL_234;
      v112 = *(_QWORD *)&this->fields.m_CachedPtr;
      v113 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v112 )
        goto LABEL_234;
      v114 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v114 >= *(_DWORD *)(v112 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
      }
      else
      {
        v115 = v112 + 8 * v114;
        LODWORD(this->fields.m_CancellationTokenSource) = v114 + 1;
        *(_QWORD *)(v115 + 32) = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v115 + 32), 0, v80, v81);
      }
      v116 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_60337008(
                                         (System_String_o *)StringLiteral_15581/*"["*/,
                                         v71,
                                         (System_String_o *)StringLiteral_15837/*"]"*/,
                                         0LL);
      if ( !v116 )
        goto LABEL_234;
LABEL_164:
      v117 = v116->fields._items;
      v118 = Method_System_Collections_Generic_List_string__Add__;
      ++v116->fields._version;
      if ( !v117 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v119 = v116->fields._size;
      if ( (unsigned int)v119 < v117->max_length )
      {
        v120 = &v117->obj.klass + v119;
        v116->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)tagDataList;
        v103 = (ServantStatusBattleListViewItem_o *)(v120 + 4);
        goto LABEL_168;
      }
      v104 = v118[4];
      this = (CommonMessageManager_o *)v116;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v104 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v121 = *(_QWORD *)&this->fields.m_CachedPtr;
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
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v123 + 1;
        *(_DWORD *)(v121 + 4 * v123 + 32) = line;
      }
LABEL_176:
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      v145 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v47 >= stringLength )
        goto LABEL_215;
    }
  }
  v145 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v46, v145, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v167;
      if ( *v167 )
      {
        v148 = *(_QWORD *)&this->fields.m_CachedPtr;
        v149 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v148 )
        {
          v150 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v150 >= *(_DWORD *)(v148 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
          }
          else
          {
            v151 = v148 + 8 * v150;
            LODWORD(this->fields.m_CancellationTokenSource) = v150 + 1;
            *(_QWORD *)(v151 + 32) = 0LL;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v151 + 32), 0, v146, v147);
          }
          if ( v46 )
          {
            v152 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_60345368(
                                               v46,
                                               v163->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_15777/*"[r]"*/,
                                               0LL);
            if ( v152 )
            {
              v155 = v152->fields._items;
              v156 = Method_System_Collections_Generic_List_string__Add__;
              ++v152->fields._version;
              if ( v155 )
              {
                v157 = v152->fields._size;
                v158 = this;
                if ( (unsigned int)v157 >= v155->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v152,
                    (Il2CppObject *)this,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
                }
                else
                {
                  v159 = &v155->obj.klass + v157;
                  v152->fields._size = v157 + 1;
                  v159[4] = (Il2CppClass *)v158;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v159 + 4), (int32_t)v158, v153, v154);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v160 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v161 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v160 )
                  {
                    v162 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v162 >= *(_DWORD *)(v160 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v162 + 1;
                      *(_DWORD *)(v160 + 4 * v162 + 32) = line;
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
    sub_1B00F28(this, tagDataList);
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
    sub_1B00C70(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_48E4151 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_11271/*"SCRIPT_ACTION_CODE_COMMENT"*/, v3);
    sub_1B00CCC(&StringLiteral_11280/*"SCRIPT_ACTION_CODE_VOICE"*/, v4);
    sub_1B00CCC(&StringLiteral_11274/*"SCRIPT_ACTION_CODE_RETURN"*/, v5);
    sub_1B00CCC(&StringLiteral_11279/*"SCRIPT_ACTION_CODE_TALK"*/, v6);
    byte_48E4151 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11271/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.codeCommentString, (int32_t)v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11279/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.codeTalkString, (int32_t)v10, v11, v12);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11280/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v13;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.codeVoiceString, (int32_t)v13, v14, v15);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11274/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v16;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.codeReturnString, (int32_t)v16, v17, v18);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
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
  if ( (byte_48E4156 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21124/*"messageOn"*/, method);
    sub_1B00CCC(&StringLiteral_17755/*"clear"*/, v6);
    sub_1B00CCC(&StringLiteral_19254/*"font"*/, v7);
    sub_1B00CCC(&StringLiteral_22137/*"page3"*/, v8);
    sub_1B00CCC(&StringLiteral_21122/*"messageOff"*/, v9);
    sub_1B00CCC(&StringLiteral_22136/*"page2"*/, v10);
    sub_1B00CCC(&StringLiteral_19070/*"f"*/, v11);
    sub_1B00CCC(&StringLiteral_23077/*"speed"*/, v12);
    sub_1B00CCC(&StringLiteral_20682/*"k"*/, v13);
    sub_1B00CCC(&StringLiteral_916/*"-"*/, v14);
    sub_1B00CCC(&StringLiteral_22363/*"q"*/, v15);
    sub_1B00CCC(&StringLiteral_22151/*"parameter error"*/, v16);
    sub_1B00CCC(&StringLiteral_23643/*"touch2"*/, v17);
    sub_1B00CCC(&StringLiteral_22132/*"page"*/, v18);
    sub_1B00CCC(&StringLiteral_24237/*"wait"*/, v19);
    sub_1B00CCC(&StringLiteral_22150/*"parameter be unnecessary"*/, v20);
    sub_1B00CCC(&StringLiteral_18747/*"end"*/, v21);
    sub_1B00CCC(&StringLiteral_21116/*"message2"*/, v22);
    sub_1B00CCC(&StringLiteral_20744/*"l"*/, v23);
    sub_1B00CCC(&StringLiteral_19259/*"fontSize"*/, v24);
    sub_1B00CCC(&StringLiteral_21112/*"message"*/, v25);
    sub_1B00CCC(&StringLiteral_23490/*"talkName"*/, v26);
    sub_1B00CCC(&StringLiteral_23641/*"touch"*/, v27);
    sub_1B00CCC(&StringLiteral_21117/*"message3"*/, v28);
    sub_1B00CCC(&StringLiteral_1/*""*/, v29);
    sub_1B00CCC(&StringLiteral_22673/*"s"*/, v30);
    sub_1B00CCC(&StringLiteral_16926/*"betweenHeight"*/, v31);
    this = (CommonMessageManager_o *)sub_1B00CCC(&StringLiteral_17757/*"clear2"*/, v32);
    byte_48E4156 = 1;
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
        sub_1B00F28(this, method);
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
                                                 (System_String_o *)StringLiteral_22363/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v56 = &StringLiteral_22673/*"s"*/;
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
                                                     (System_String_o *)StringLiteral_916/*"-"*/,
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
                  v44 = &StringLiteral_22151/*"parameter error"*/;
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
              v52 = &StringLiteral_20744/*"l"*/;
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
                                                     (System_String_o *)StringLiteral_916/*"-"*/,
                                                     0LL);
                  v66 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42->max_length )
LABEL_189:
                      sub_1B00F30(this, method);
                    v66 = System_Single__Parse(v42->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v44 = &StringLiteral_22151/*"parameter error"*/;
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
                                                 (System_String_o *)StringLiteral_20682/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v44 = &StringLiteral_22150/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v42->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v57 = &StringLiteral_23641/*"touch"*/;
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
              v61 = &StringLiteral_19259/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v61 = &StringLiteral_19070/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_24237/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v42 )
                goto LABEL_190;
              if ( (int)v42->max_length < 1 )
              {
                v44 = &StringLiteral_22151/*"parameter error"*/;
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
            v52 = &StringLiteral_16926/*"betweenHeight"*/;
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
                                               (System_String_o *)StringLiteral_22132/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v44 = &StringLiteral_22150/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v42->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v57 = &StringLiteral_22132/*"page"*/;
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
                                               (System_String_o *)StringLiteral_21122/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v44 = &StringLiteral_22151/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_18747/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v44 = &StringLiteral_22150/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v56 = &StringLiteral_23077/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v61 = &StringLiteral_19254/*"font"*/;
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
              v44 = &StringLiteral_22151/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_17755/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v44 = &StringLiteral_22150/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v57 = &StringLiteral_17755/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_23490/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v40;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_21124/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_190;
          v44 = &StringLiteral_22151/*"parameter error"*/;
          if ( *(_QWORD *)&v42->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v45 = StringLiteral_21112/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21112/*"message"*/;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v45, v46, v47);
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
        v71 = StringLiteral_21112/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21112/*"message"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v71, (int32_t)v3, v43);
        v5->fields.waitMessage = v40;
        v48 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v49) = (_DWORD)v40;
LABEL_156:
        sub_1B00C70(v48, (int32_t)v49, (int32_t)v3, v43);
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
          if ( v51 == 1770621400 && System_String__op_Equality(v50, (System_String_o *)StringLiteral_23641/*"touch"*/, 0LL) )
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
            v76 = &StringLiteral_23643/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_17755/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v60 = &StringLiteral_17757/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21112/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v60 = &StringLiteral_21116/*"message2"*/;
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
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21117/*"message3"*/, 0LL) || v5->fields.isScroll )
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
      || !System_String__op_Equality(v50, (System_String_o *)StringLiteral_23643/*"touch2"*/, 0LL)
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
      if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_22132/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v60 = &StringLiteral_22136/*"page2"*/;
LABEL_120:
      v55 = *v60;
      *p_waitType = (System_String_o *)*v60;
LABEL_121:
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v55, (int32_t)v53, v54);
      goto LABEL_171;
    }
    if ( v51 != -1857654992
      || !System_String__op_Equality(v50, (System_String_o *)StringLiteral_17757/*"clear2"*/, 0LL)
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
    if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_22137/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v51 == -16520990 )
  {
    if ( !System_String__op_Equality(v50, (System_String_o *)StringLiteral_21116/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    LODWORD(v55) = StringLiteral_21117/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21117/*"message3"*/;
    goto LABEL_121;
  }
  if ( v51 == -353306356
    && System_String__op_Equality(v50, (System_String_o *)StringLiteral_22136/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v76 = &StringLiteral_22137/*"page3"*/;
LABEL_188:
    v77 = *v76;
    v5->fields.waitType = (struct System_String_o *)*v76;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v77, v74, v75);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v9, v10);
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

  if ( (byte_48E4152 & 1) == 0 )
  {
    sub_1B00CCC(&ScriptMessageLabel_TypeInfo, name);
    byte_48E4152 = 1;
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
  sub_1B00C70(
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