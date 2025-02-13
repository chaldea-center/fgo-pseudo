void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDE035 & 1) == 0 )
  {
    sub_1C21E38(&ScriptMessageManager_TypeInfo);
    byte_4BDE035 = 1;
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
  int stringLength; // w28
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x22
  int32_t v7; // w24
  int32_t v8; // w1
  uint16_t Chars; // w0
  System_String_o *v10; // x0
  int v11; // w21
  System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  int v39; // w8
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  System_String_o *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  __int16 v64[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_4BDE033 & 1) == 0 )
  {
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&StringLiteral_1862/*"="*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_369/*"\""*/);
    this = (CommonMessageManager_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE033 = 1;
  }
  v64[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(v3, v8, 0LL);
      v64[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_34;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_31;
        size = v5->fields._size;
        if ( size < 1
          || (Item = System_Collections_Generic_List_object___get_Item(
                       v5,
                       size - 1,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_117/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v64, 0LL);
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
          if ( (unsigned int)v50 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + v50;
            v5->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)data;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)data, v42, v43, v44, v45, v46, v47);
          }
          goto LABEL_63;
        }
        v21 = v5->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__ToString((uint16_t)v64, 0LL);
        if ( v22 )
          v23 = (Il2CppObject *)v22;
        else
          v23 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v21 - 1,
          v23,
          (const MethodInfo_364EE38 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v10 = System_Char__ToString((uint16_t)v64, 0LL);
            v6 = System_String__Concat_63115476(v6, v10, 0LL);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v11 = v7 + 1;
                v64[0] = System_String__get_Chars(v3, v7, 0LL);
                if ( v64[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v12 = System_Char__ToString((uint16_t)v64, 0LL);
                v6 = System_String__Concat_63115476(v6, v12, 0LL);
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
            v28 = (System_String_o *)StringLiteral_369/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v28 = System_Char__ToString((uint16_t)v64, 0LL);
          }
          v6 = System_String__Concat_63115476(v6, v28, 0LL);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
          if ( (unsigned int)v26 >= v24->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v6,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v5->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v6;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v6, v13, v14, v15, v16, v17, v18);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v64, 0LL);
          v35 = v5->fields._items;
          v36 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v35 )
            goto LABEL_72;
          v37 = v5->fields._size;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v5->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)data;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)data, v29, v30, v31, v32, v33, v34);
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
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v40, (System_String_o *)StringLiteral_1862/*"="*/, 0LL) )
        {
          v41 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v41, (System_String_o *)StringLiteral_866/*","*/, 0LL) )
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
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v52, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1C22094(this, data);
  }
  if ( !v5 )
    goto LABEL_72;
  v59 = v5->fields._items;
  v60 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v59 )
    goto LABEL_72;
  v61 = v5->fields._size;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v59->obj.klass + v61;
    v5->fields._size = v61 + 1;
    v62[4] = (Il2CppClass *)v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v6, v53, v54, v55, v56, v57, v58);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x0
  System_Char_array *v6; // x21
  System_String_o *v7; // x0
  Il2CppObject *v8; // x1
  System_String_array *v9; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  System_String_o **v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  __int64 v20; // x26
  System_String_o **m_Items; // x9
  __int64 v22; // x29
  __int64 v23; // x24
  System_String_o **v24; // x27
  System_String_o *v25; // x28
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  System_String_o *v28; // x28
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  _QWORD *v35; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  _QWORD *v45; // x9
  struct System_Object_array *v46; // x8
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int64_t v65; // x1
  Il2CppClass **v66; // x0
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  int32_t v70; // w26
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
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
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  _QWORD *v105; // x9
  struct System_Object_array *v106; // x8
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  struct System_Int32_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct System_Int32_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  _QWORD *v139; // x9
  struct System_Object_array *v140; // x8
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  struct System_Int32_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  struct System_String_array *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct System_String_array *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct System_Int32_array *v160; // x0
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v168; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v174; // 0:w1.4

  if ( (byte_4BDE031 & 1) == 0 )
  {
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C21E38(&StringLiteral_398/*"#"*/);
    sub_1C21E38(&StringLiteral_1126/*"//"*/);
    sub_1C21E38(&StringLiteral_20397/*"i"*/);
    sub_1C21E38(&StringLiteral_21341/*"k"*/);
    sub_1C21E38(&StringLiteral_23084/*"q"*/);
    sub_1C21E38(&StringLiteral_510/*"%"*/);
    sub_1C21E38(&StringLiteral_532/*"&"*/);
    sub_1C21E38(&StringLiteral_21487/*"line"*/);
    sub_1C21E38(&StringLiteral_24275/*"talkStart"*/);
    sub_1C21E38(&StringLiteral_20589/*"image"*/);
    sub_1C21E38(&StringLiteral_16283/*"[r]"*/);
    sub_1C21E38(&StringLiteral_24271/*"talkName"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE031 = 1;
  }
  v5 = (System_Array_o *)sub_1C21EE0(char___TypeInfo, 5LL);
  v174.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v5, v174, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v9 = System_String__Split_63137868(scriptData, v6, 1, 0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v12;
  lastMessageIndex = -1;
  if ( !v9 )
    goto LABEL_144;
  v19 = *(_QWORD *)&v9->max_length;
  if ( (int)v19 < 1 )
  {
    LODWORD(v20) = 0;
    goto LABEL_122;
  }
  v20 = 0LL;
  m_Items = v9->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v22 = 0LL;
    v23 = (v20 << 32) + 0x100000000LL;
    v24 = &m_Items[v20];
    while ( 1 )
    {
      if ( (int)v20 + (int)v22 >= (unsigned int)v19 )
        sub_1C2209C(v7, v8);
      v25 = v24[v22];
      if ( !v25 )
        goto LABEL_144;
      if ( v25->fields._stringLength < 1 )
        goto LABEL_53;
      v26 = (System_String_o *)StringLiteral_1/*""*/;
      v7 = (System_String_o *)System_String__StartsWith(v24[v22], (System_String_o *)StringLiteral_1126/*"//"*/, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        goto LABEL_53;
      v7 = (System_String_o *)System_String__StartsWith(v25, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v25, this->fields.codeTalkString, 0LL) )
        break;
      v7 = (System_String_o *)System_String__StartsWith(v25, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v16,
          v25,
          v20 + v22 + 1,
          v168);
LABEL_18:
        v7 = (System_String_o *)System_String__op_Inequality(v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          v7 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v7 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v35 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_24275/*"talkStart"*/;
            items = v10->fields._items;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v8, v29, v30, v31, v32, v33, v34);
            }
            if ( !v11 )
              goto LABEL_144;
            v45 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_1/*""*/;
            v46 = v11->fields._items;
            ++v11->fields._version;
            if ( !v46 )
              goto LABEL_144;
            v47 = v11->fields._size;
            if ( (unsigned int)v47 >= v46->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &v46->obj.klass + v47;
              v11->fields._size = v47 + 1;
              v48[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v8, v39, v40, v41, v42, v43, v44);
            }
            if ( !v12 )
              goto LABEL_144;
            v49 = v12->fields._items;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v49 )
              goto LABEL_144;
            v51 = v12->fields._size;
            if ( (unsigned int)v51 >= v49->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v20 + v22 + 1,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v51 + 1;
              v49->m_Items[v51 + 1] = v20 + v22 + 1;
            }
          }
          else if ( !v10 )
          {
            goto LABEL_144;
          }
          v52 = v10->fields._items;
          v53 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( !v52 )
            goto LABEL_144;
          v54 = v10->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              0LL,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v10->fields._size = v54 + 1;
            v55[4] = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), 0LL, v29, v30, v31, v32, v33, v34);
          }
          if ( !v11 )
            goto LABEL_144;
          lastMessageIndex = v11->fields._size;
          if ( !v26 )
            goto LABEL_144;
          v7 = System_String__Replace_63135104(
                 v26,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_16283/*"[r]"*/,
                 0LL);
          v62 = v11->fields._items;
          v63 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !v62 )
            goto LABEL_144;
          v64 = v11->fields._size;
          v65 = (int64_t)v7;
          if ( (unsigned int)v64 >= v62->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v7,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &v62->obj.klass + v64;
            v11->fields._size = v64 + 1;
            v66[4] = (Il2CppClass *)v65;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 4), v65, v56, v57, v58, v59, v60, v61);
          }
          if ( !v12 )
            goto LABEL_144;
          v67 = v12->fields._items;
          v68 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v67 )
            goto LABEL_144;
          v69 = v12->fields._size;
          if ( (unsigned int)v69 >= v67->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v20 + v22 + 1,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v69 + 1;
            v67->m_Items[v69 + 1] = v20 + v22 + 1;
          }
        }
      }
LABEL_53:
      v19 = *(_QWORD *)&v9->max_length;
      ++v22;
      v23 += 0x100000000LL;
      if ( v20 + v22 >= (int)v19 )
      {
        LODWORD(v20) = v20 + v22;
        goto LABEL_122;
      }
    }
    v27 = v25;
    v28 = (System_String_o *)StringLiteral_24271/*"talkName"*/;
    v26 = System_String__Substring(v27, 1, 0LL);
    if ( !v28 )
      goto LABEL_18;
    v70 = v20 + v22 + 1;
    v7 = (System_String_o *)System_String__op_Equality(v28, (System_String_o *)StringLiteral_21341/*"k"*/, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v7 = (System_String_o *)System_String__op_Equality(v28, (System_String_o *)StringLiteral_23084/*"q"*/, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        if ( System_String__op_Equality(v28, (System_String_o *)StringLiteral_24271/*"talkName"*/, 0LL) )
        {
          v7 = (System_String_o *)System_String__op_Equality(v28, (System_String_o *)StringLiteral_24271/*"talkName"*/, 0LL);
          v87 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v7 & 1) != 0 )
            v87 = v26;
          a = v87;
        }
        else if ( System_String__op_Equality(v28, (System_String_o *)StringLiteral_20397/*"i"*/, 0LL)
               || System_String__op_Equality(v28, (System_String_o *)StringLiteral_20589/*"image"*/, 0LL)
               || System_String__op_Equality(v28, (System_String_o *)StringLiteral_21487/*"line"*/, 0LL)
               || System_String__StartsWith(v28, (System_String_o *)StringLiteral_510/*"%"*/, 0LL)
               || System_String__StartsWith(v28, (System_String_o *)StringLiteral_532/*"&"*/, 0LL)
               || (v7 = (System_String_o *)System_String__StartsWith(v28, (System_String_o *)StringLiteral_398/*"#"*/, 0LL),
                   ((unsigned __int8)v7 & 1) != 0) )
        {
          v7 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v7 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v95 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_24275/*"talkStart"*/;
            v96 = v10->fields._items;
            ++v10->fields._version;
            if ( !v96 )
              goto LABEL_144;
            v97 = v10->fields._size;
            if ( (unsigned int)v97 >= v96->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
            }
            else
            {
              v98 = &v96->obj.klass + v97;
              v10->fields._size = v97 + 1;
              v98[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v98 + 4), (int64_t)v8, v71, v72, v73, v74, v75, v76);
            }
            if ( !v11 )
              goto LABEL_144;
            v105 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_1/*""*/;
            v106 = v11->fields._items;
            ++v11->fields._version;
            if ( !v106 )
              goto LABEL_144;
            v107 = v11->fields._size;
            if ( (unsigned int)v107 >= v106->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v108 = &v106->obj.klass + v107;
              v11->fields._size = v107 + 1;
              v108[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v108 + 4), (int64_t)v8, v99, v100, v101, v102, v103, v104);
            }
            if ( !v12 )
              goto LABEL_144;
            v109 = v12->fields._items;
            v110 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v109 )
              goto LABEL_144;
            v111 = v12->fields._size;
            if ( (unsigned int)v111 >= v109->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v70,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v111 + 1;
              v109->m_Items[v111 + 1] = v70;
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
    if ( (lastMessageIndex & 0x80000000) != 0 )
      goto LABEL_104;
    if ( !v10 )
      goto LABEL_144;
    v77 = v10->fields._items;
    v78 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v77 )
      goto LABEL_144;
    v79 = v10->fields._size;
    if ( (unsigned int)v79 >= v77->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        0LL,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v77->obj.klass + v79;
      v10->fields._size = v79 + 1;
      v80[4] = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 4), 0LL, v71, v72, v73, v74, v75, v76);
    }
    if ( !v11 )
      goto LABEL_144;
    v88 = Method_System_Collections_Generic_List_string__Add__;
    v8 = (Il2CppObject *)StringLiteral_16283/*"[r]"*/;
    v89 = v11->fields._items;
    ++v11->fields._version;
    if ( !v89 )
      goto LABEL_144;
    v90 = v11->fields._size;
    if ( (unsigned int)v90 >= v89->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        v8,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v89->obj.klass + v90;
      v11->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v8;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v8, v81, v82, v83, v84, v85, v86);
    }
    if ( !v12 )
      goto LABEL_144;
    v92 = v12->fields._items;
    v93 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v92 )
      goto LABEL_144;
    v94 = v12->fields._size;
    if ( (unsigned int)v94 >= v92->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v70,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v94 + 1;
      v92->m_Items[v94 + 1] = v70;
    }
    lastMessageIndex = -1;
LABEL_105:
    v112 = v10->fields._items;
    v113 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v112 )
      goto LABEL_144;
    v114 = v10->fields._size;
    if ( (unsigned int)v114 >= v112->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v28,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    }
    else
    {
      v115 = &v112->obj.klass + v114;
      v10->fields._size = v114 + 1;
      v115[4] = (Il2CppClass *)v28;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v115 + 4), (int64_t)v28, v71, v72, v73, v74, v75, v76);
    }
    if ( !v11 )
      goto LABEL_144;
    v122 = v11->fields._items;
    v123 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v122 )
      goto LABEL_144;
    v124 = v11->fields._size;
    if ( (unsigned int)v124 >= v122->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v26,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    }
    else
    {
      v125 = &v122->obj.klass + v124;
      v11->fields._size = v124 + 1;
      v125[4] = (Il2CppClass *)v26;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v125 + 4), (int64_t)v26, v116, v117, v118, v119, v120, v121);
    }
    if ( !v12 )
      goto LABEL_144;
    v126 = v12->fields._items;
    v127 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v126 )
      goto LABEL_144;
    v128 = v12->fields._size;
    if ( (unsigned int)v128 >= v126->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v70,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v128 + 1;
      v126->m_Items[v128 + 1] = v70;
    }
    v19 = *(_QWORD *)&v9->max_length;
    m_Items = v9->m_Items;
    v20 = v23 >> 32;
  }
  while ( v23 >> 32 < (int)v19 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v10 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v10 )
    goto LABEL_144;
  v129 = v10->fields._items;
  v130 = Method_System_Collections_Generic_List_string__Add__;
  ++v10->fields._version;
  if ( !v129 )
    goto LABEL_144;
  v131 = v10->fields._size;
  if ( (unsigned int)v131 >= v129->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      0LL,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = &v129->obj.klass + v131;
    v10->fields._size = v131 + 1;
    v132[4] = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v132 + 4), 0LL, v13, v14, v15, (BattleSetupInfo_o *)v16, v17, v18);
  }
  if ( !v11 )
    goto LABEL_144;
  v139 = Method_System_Collections_Generic_List_string__Add__;
  v8 = (Il2CppObject *)StringLiteral_16283/*"[r]"*/;
  v140 = v11->fields._items;
  ++v11->fields._version;
  if ( !v140 )
    goto LABEL_144;
  v141 = v11->fields._size;
  if ( (unsigned int)v141 >= v140->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v8,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
  }
  else
  {
    v142 = &v140->obj.klass + v141;
    v11->fields._size = v141 + 1;
    v142[4] = (Il2CppClass *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v142 + 4), (int64_t)v8, v133, v134, v135, v136, v137, v138);
  }
  if ( !v12 )
    goto LABEL_144;
  v143 = v12->fields._items;
  v144 = Method_System_Collections_Generic_List_int__Add__;
  ++v12->fields._version;
  if ( !v143 )
    goto LABEL_144;
  v145 = v12->fields._size;
  if ( (unsigned int)v145 >= v143->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v12,
      v20,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v145 + 1;
    v143->m_Items[v145 + 1] = v20;
  }
LABEL_140:
  v146 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v146;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.executeTagList,
    (int64_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  if ( !v11
    || (v153 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v11,
                                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v153,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.executeDataList,
          (int64_t)v153,
          v154,
          v155,
          v156,
          v157,
          v158,
          v159),
        !v12)
    || (v160 = System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v160,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.executeLineList,
          (int64_t)v160,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1C22094(v7, v8);
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
  int32_t stringLength; // w22
  System_String_o *v12; // x27
  int32_t v13; // w29
  int32_t v14; // w1
  uint16_t Chars; // w0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  uint16_t v26; // w28
  System_String_o *v27; // x0
  int v28; // w24
  System_String_o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x28
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  CommonMessageManager_o *v40; // x1
  Il2CppClass **v41; // x0
  __int64 v42; // x8
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
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 *v60; // x8
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 *v65; // x8
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_List_string__o **v76; // x27
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x8
  __int64 v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  __int64 v84; // x8
  PartyOrganizationUtility_o *v85; // x0
  __int64 v86; // x8
  __int64 *v87; // x8
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  System_Collections_Generic_List_string__o *v102; // x28
  struct System_String_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  int32_t v110; // w8
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  __int64 v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  __int64 v131; // x8
  int32_t v132; // w8
  System_String_o *v133; // x24
  System_String_o *v134; // x1
  System_String_o *v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  __int64 v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  __int64 v145; // x8
  System_Collections_Generic_List_object__o *v146; // x21
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  CommonMessageManager_o *v156; // x1
  Il2CppClass **v157; // x0
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  CommonMessageManager_o *v161; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v165; // [xsp+20h] [xbp-70h]
  __int16 v166[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v161 = this;
  v165 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4BDE032 & 1) == 0 )
  {
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&StringLiteral_18305/*"clear"*/);
    sub_1C21E38(&StringLiteral_19851/*"font"*/);
    sub_1C21E38(&StringLiteral_19663/*"f"*/);
    sub_1C21E38(&StringLiteral_23852/*"speed"*/);
    sub_1C21E38(&StringLiteral_21341/*"k"*/);
    sub_1C21E38(&StringLiteral_23084/*"q"*/);
    sub_1C21E38(&StringLiteral_25033/*"voiceStop"*/);
    sub_1C21E38(&StringLiteral_17464/*"bgm"*/);
    sub_1C21E38(&StringLiteral_17466/*"bgmStop"*/);
    sub_1C21E38(&StringLiteral_25182/*"wt"*/);
    sub_1C21E38(&StringLiteral_23482/*"seStop"*/);
    sub_1C21E38(&StringLiteral_22849/*"page"*/);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    sub_1C21E38(&StringLiteral_19324/*"end"*/);
    sub_1C21E38(&StringLiteral_21325/*"jingle"*/);
    sub_1C21E38(&StringLiteral_23476/*"se"*/);
    sub_1C21E38(&StringLiteral_21404/*"l"*/);
    sub_1C21E38(&StringLiteral_25027/*"voice"*/);
    sub_1C21E38(&StringLiteral_24361/*"time "*/);
    sub_1C21E38(&StringLiteral_19856/*"fontSize"*/);
    sub_1C21E38(&StringLiteral_23480/*"seLoop"*/);
    sub_1C21E38(&StringLiteral_369/*"\""*/);
    sub_1C21E38(&StringLiteral_16283/*"[r]"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_23414/*"s"*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    sub_1C21E38(&StringLiteral_17452/*"betweenHeight"*/);
    sub_1C21E38(&StringLiteral_21326/*"jingleStop"*/);
    sub_1C21E38(&StringLiteral_23825/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BDE032 = 1;
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
        Chars = System_String__get_Chars(analysData, v14, 0LL);
        v166[0] = Chars;
        if ( Chars == 91 )
          break;
        v26 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v27 = System_Char__ToString((uint16_t)v166, 0LL);
        v12 = System_String__Concat_63115476(v12, v27, 0LL);
        if ( v26 == 34 )
        {
          if ( v13 < stringLength )
          {
            while ( 1 )
            {
              v28 = v13 + 1;
              v166[0] = System_String__get_Chars(analysData, v13, 0LL);
              if ( v166[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v29 = System_Char__ToString((uint16_t)v166, 0LL);
              v12 = System_String__Concat_63115476(v12, v29, 0LL);
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
          v12 = System_String__Concat_63115476(v12, (System_String_o *)StringLiteral_369/*"\""*/, 0LL);
        }
        if ( v13 >= stringLength )
        {
          v135 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v165;
        if ( !*v165 )
          goto LABEL_234;
        v22 = *(_QWORD *)&this->fields.m_CachedPtr;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v22 )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0LL,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v25 + 32) = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 32), 0LL, v16, v17, v18, v19, v20, v21);
        }
        if ( !v12 )
          goto LABEL_234;
        v30 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_63135104(
                                           v12,
                                           v161->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16283/*"[r]"*/,
                                           0LL);
        if ( !v30 )
          goto LABEL_234;
        items = v30->fields._items;
        v38 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v30->fields._size;
        v40 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)this,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v40, v31, v32, v33, v34, v35, v36);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v42 = *(_QWORD *)&this->fields.m_CachedPtr;
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
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
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
        v46 = 0LL;
      }
      else
      {
        v46 = 0LL;
        v47 = 0;
        v48 = v13;
        do
        {
          v13 = v48 + 1;
          v49 = System_String__get_Chars(analysData, v48, 0LL);
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
          else if ( v49 == 32 && v46 == 0LL )
          {
            v46 = v45;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v51 = System_Char__ToString((uint16_t)v166, 0LL);
          v45 = System_String__Concat_63115476(v45, v51, 0LL);
          if ( v166[0] == 34 )
          {
            if ( v13 < stringLength )
            {
              while ( 1 )
              {
                v52 = v13 + 1;
                v166[0] = System_String__get_Chars(analysData, v13, 0LL);
                if ( v166[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v53 = System_Char__ToString((uint16_t)v166, 0LL);
                v45 = System_String__Concat_63115476(v45, v53, 0LL);
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
            v45 = System_String__Concat_63115476(v45, (System_String_o *)StringLiteral_369/*"\""*/, 0LL);
          }
          v48 = v13;
        }
        while ( v13 < stringLength );
      }
      if ( !v46 )
        v46 = v45;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v46, 0LL);
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
                v87 = &StringLiteral_23084/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v87, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v165;
                  if ( !*v165 )
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
                      0LL,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v91 = v88 + 8 * v90;
                    LODWORD(this->fields.m_CancellationTokenSource) = v90 + 1;
                    *(_QWORD *)(v91 + 32) = 0LL;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v91 + 32), 0LL, v54, v55, v56, v57, v58, v59);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16283/*"[r]"*/;
                  v111 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v114 = v111 + 8 * v113;
                    LODWORD(this->fields.m_CancellationTokenSource) = v113 + 1;
                    *(_QWORD *)(v114 + 32) = tagDataList;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v114 + 32),
                      (int64_t)tagDataList,
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
                      *(const MethodInfo_3632090 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v123 + 1;
                    *(_DWORD *)(v121 + 4 * v123 + 32) = line;
                  }
                  this = *v165;
                  if ( !*v165 )
                    goto LABEL_234;
                  v124 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v127 = v124 + 8 * v126;
                    LODWORD(this->fields.m_CancellationTokenSource) = v126 + 1;
                    *(_QWORD *)(v127 + 32) = v46;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v127 + 32),
                      (int64_t)v46,
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
                  v128 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                    v85 = (PartyOrganizationUtility_o *)(v131 + 32);
                    goto LABEL_168;
                  }
                  v86 = v129[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v60 = &StringLiteral_23414/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v87 = &StringLiteral_21341/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v60 = &StringLiteral_21325/*"jingle"*/;
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
                v60 = &StringLiteral_19663/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v60 = &StringLiteral_21404/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v60 = &StringLiteral_25041/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v60 = &StringLiteral_17452/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v60 = &StringLiteral_19856/*"fontSize"*/;
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
              v65 = &StringLiteral_22849/*"page"*/;
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
              v60 = &StringLiteral_19324/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v60 = &StringLiteral_23825/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v60, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v45 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v46->fields._stringLength + 1);
                v76 = (System_Collections_Generic_List_string__o **)(v45->fields._stringLength <= (int)tagDataList
                                                                   ? StringLiteral_1/*""*/
                                                                   : System_String__Substring(
                                                                       v45,
                                                                       (int32_t)tagDataList,
                                                                       0LL));
                this = *v165;
                if ( !*v165 )
                  goto LABEL_234;
                v77 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v80 = v77 + 8 * v79;
                  LODWORD(this->fields.m_CancellationTokenSource) = v79 + 1;
                  *(_QWORD *)(v80 + 32) = v46;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)v46, v54, v55, v56, v57, v58, v59);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v81 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                  v85 = (PartyOrganizationUtility_o *)(v84 + 32);
                  tagDataList = v76;
LABEL_168:
                  sub_1C21DDC(v85, (int64_t)tagDataList, v70, v71, v72, v73, v74, v75);
                  goto LABEL_171;
                }
                v86 = v82[4];
                tagDataList = v76;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v60 = &StringLiteral_23852/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v65 = &StringLiteral_18305/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v46, (System_String_o *)*v65, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v165;
                if ( !*v165 )
                  goto LABEL_234;
                v66 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = v66 + 8 * v68;
                  LODWORD(this->fields.m_CancellationTokenSource) = v68 + 1;
                  *(_QWORD *)(v69 + 32) = v46;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v69 + 32), (int64_t)v46, v54, v55, v56, v57, v58, v59);
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
                  this = (CommonMessageManager_o *)System_String__Substring(v45, v110 + 1, 0LL);
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
              v60 = &StringLiteral_17464/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v60 = &StringLiteral_21326/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v60 = &StringLiteral_23476/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v60 = &StringLiteral_23480/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v46,
                                               (System_String_o *)StringLiteral_25182/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v165;
              if ( !*v165 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_25041/*"wait"*/;
              v61 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = v61 + 8 * v63;
                LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
                *(_QWORD *)(v64 + 32) = tagDataList;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)(v64 + 32),
                  (int64_t)tagDataList,
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
              v133 = (System_String_o *)StringLiteral_24361/*"time "*/;
              v134 = v45->fields._stringLength <= v132 + 1
                   ? (System_String_o *)StringLiteral_1212/*"0"*/
                   : System_String__Substring(v45, v132 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_63115476(v133, v134, 0LL);
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
            v60 = &StringLiteral_19851/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v60 = &StringLiteral_23482/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v60 = &StringLiteral_17466/*"bgmStop"*/;
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
      v98 = *(_QWORD *)&this->fields.m_CachedPtr;
      v99 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v98 )
        goto LABEL_234;
      v100 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = v98 + 8 * v100;
        LODWORD(this->fields.m_CancellationTokenSource) = v100 + 1;
        *(_QWORD *)(v101 + 32) = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v101 + 32), 0LL, v54, v55, v56, v57, v58, v59);
      }
      v102 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_63126736(
                                         (System_String_o *)StringLiteral_16086/*"["*/,
                                         v45,
                                         (System_String_o *)StringLiteral_16345/*"]"*/,
                                         0LL);
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
      if ( (unsigned int)v105 < v103->max_length )
      {
        v106 = &v103->obj.klass + v105;
        v102->fields._size = v105 + 1;
        v106[4] = (Il2CppClass *)tagDataList;
        v85 = (PartyOrganizationUtility_o *)(v106 + 4);
        goto LABEL_168;
      }
      v86 = v104[4];
      this = (CommonMessageManager_o *)v102;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v86 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v107 = *(_QWORD *)&this->fields.m_CachedPtr;
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
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
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
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v135, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v165;
      if ( *v165 )
      {
        v142 = *(_QWORD *)&this->fields.m_CachedPtr;
        v143 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v142 )
        {
          v144 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = v142 + 8 * v144;
            LODWORD(this->fields.m_CancellationTokenSource) = v144 + 1;
            *(_QWORD *)(v145 + 32) = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v145 + 32), 0LL, v136, v137, v138, v139, v140, v141);
          }
          if ( v12 )
          {
            v146 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_63135104(
                                               v12,
                                               v161->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16283/*"[r]"*/,
                                               0LL);
            if ( v146 )
            {
              v153 = v146->fields._items;
              v154 = Method_System_Collections_Generic_List_string__Add__;
              ++v146->fields._version;
              if ( v153 )
              {
                v155 = v146->fields._size;
                v156 = this;
                if ( (unsigned int)v155 >= v153->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v146,
                    (Il2CppObject *)this,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = &v153->obj.klass + v155;
                  v146->fields._size = v155 + 1;
                  v157[4] = (Il2CppClass *)v156;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v157 + 4),
                    (int64_t)v156,
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
                  v158 = *(_QWORD *)&this->fields.m_CachedPtr;
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
                        *(const MethodInfo_3632090 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
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
    sub_1C22094(this, tagDataList);
  }
}


void __fastcall CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *callbackFunc; // x19
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_String_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_String_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDE02F & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11678/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1C21E38(&StringLiteral_11688/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1C21E38(&StringLiteral_11681/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1C21E38(&StringLiteral_11687/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4BDE02F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.codeCommentString, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.codeTalkString, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.codeVoiceString, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.codeReturnString, (int64_t)v24, v25, v26, v27, v28, v29, v30);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__OnLongPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *longPressCallbackFunc; // x20

  ScriptMessageCommonManager__OnLongPressWindow((ScriptMessageCommonManager_o *)this, 0LL);
  longPressCallbackFunc = this->fields.longPressCallbackFunc;
  if ( longPressCallbackFunc )
  {
    this->fields.longPressCallbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.longPressCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))longPressCallbackFunc->fields.m_target)(
      longPressCallbackFunc->fields.original_method_info,
      *(_QWORD *)&longPressCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 *v21; // x8
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *v29; // x0
  int64_t v30; // x1
  System_String_o *v31; // x23
  uint32_t v32; // w0
  __int64 *v33; // x8
  const MethodInfo *v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  __int64 *v41; // x8
  int64_t *v42; // x8
  System_String_o *v43; // x1
  int32_t playSpeed; // w8
  int64_t *v45; // x8
  __int64 *v46; // x8
  __int64 v47; // x9
  float v48; // s0
  System_String_o *v49; // x1
  __int64 v50; // x9
  float v51; // s0
  __int64 v52; // x9
  System_String_o *v53; // x1
  ScriptMessageCommonManager_o *v54; // x0
  System_String_o *v55; // x2
  int64_t v56; // x1
  _BOOL4 isBusy; // w20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t *v65; // x8
  int64_t v66; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4BDE034 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21793/*"messageOn"*/);
    sub_1C21E38(&StringLiteral_18305/*"clear"*/);
    sub_1C21E38(&StringLiteral_19851/*"font"*/);
    sub_1C21E38(&StringLiteral_22854/*"page3"*/);
    sub_1C21E38(&StringLiteral_21791/*"messageOff"*/);
    sub_1C21E38(&StringLiteral_22853/*"page2"*/);
    sub_1C21E38(&StringLiteral_19663/*"f"*/);
    sub_1C21E38(&StringLiteral_23852/*"speed"*/);
    sub_1C21E38(&StringLiteral_21341/*"k"*/);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_23084/*"q"*/);
    sub_1C21E38(&StringLiteral_22868/*"parameter error"*/);
    sub_1C21E38(&StringLiteral_24430/*"touch2"*/);
    sub_1C21E38(&StringLiteral_22849/*"page"*/);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    sub_1C21E38(&StringLiteral_22867/*"parameter be unnecessary"*/);
    sub_1C21E38(&StringLiteral_19324/*"end"*/);
    sub_1C21E38(&StringLiteral_21785/*"message2"*/);
    sub_1C21E38(&StringLiteral_21404/*"l"*/);
    sub_1C21E38(&StringLiteral_19856/*"fontSize"*/);
    sub_1C21E38(&StringLiteral_21780/*"message"*/);
    sub_1C21E38(&StringLiteral_24271/*"talkName"*/);
    sub_1C21E38(&StringLiteral_24428/*"touch"*/);
    sub_1C21E38(&StringLiteral_21786/*"message3"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_23414/*"s"*/);
    sub_1C21E38(&StringLiteral_17452/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1C21E38(&StringLiteral_18307/*"clear2"*/);
    byte_4BDE034 = 1;
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
        sub_1C22094(this, method);
      if ( (unsigned int)executeIndex >= executeLineList->max_length )
        goto LABEL_189;
      v13 = executeDataList->m_Items[executeIndex];
      v14 = executeTagList->m_Items[executeIndex];
      v15 = CommonMessageManager__AnalysParam(this, v13, v3);
      if ( !v14 && v5->fields.isBusy )
        goto LABEL_181;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v14, 0LL);
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
                                                 (System_String_o *)StringLiteral_23084/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v41 = &StringLiteral_23414/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v41, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v47 = *(_QWORD *)&v15->max_length;
                if ( (_DWORD)v47 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_918/*"-"*/,
                                                     0LL);
                  v48 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v15->max_length )
                      goto LABEL_189;
                    v48 = System_Single__Parse(v15->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v21 = &StringLiteral_22868/*"parameter error"*/;
                  if ( v47 )
                    goto LABEL_169;
                  v48 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v48, 0LL);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v33 = &StringLiteral_21404/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v33, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v50 = *(_QWORD *)&v15->max_length;
                if ( (_DWORD)v50 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_918/*"-"*/,
                                                     0LL);
                  v51 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v15->max_length )
LABEL_189:
                      sub_1C2209C(this, method);
                    v51 = System_Single__Parse(v15->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v21 = &StringLiteral_22868/*"parameter error"*/;
                  if ( v50 )
                    goto LABEL_169;
                  v51 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v51, 0LL);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_21341/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v21 = &StringLiteral_22867/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v42 = &StringLiteral_24428/*"touch"*/;
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
              v46 = &StringLiteral_19856/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v46 = &StringLiteral_19663/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_25041/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( (int)v15->max_length < 1 )
              {
                v21 = &StringLiteral_22868/*"parameter error"*/;
LABEL_169:
                if ( *v21 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v30 = (int64_t)v15->m_Items[0];
              *p_waitType = (System_String_o *)v30;
LABEL_151:
              v29 = (PartyOrganizationUtility_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v33 = &StringLiteral_17452/*"betweenHeight"*/;
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
                                               v14,
                                               (System_String_o *)StringLiteral_22849/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22867/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v42 = &StringLiteral_22849/*"page"*/;
LABEL_150:
              v30 = *v42;
              v5->fields.waitType = (struct System_String_o *)*v42;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_21791/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v21 = &StringLiteral_22868/*"parameter error"*/;
              if ( *(_QWORD *)&v15->max_length )
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_19324/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22867/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v41 = &StringLiteral_23852/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v46 = &StringLiteral_19851/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v46, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v52 = *(_QWORD *)&v15->max_length;
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
              v21 = &StringLiteral_22868/*"parameter error"*/;
              if ( v52 )
                goto LABEL_169;
              v54 = (ScriptMessageCommonManager_o *)v5;
              v53 = 0LL;
LABEL_145:
              v55 = 0LL;
            }
            ScriptMessageCommonManager__SetFontSize(v54, v53, v55, 0LL);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18305/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v21 = &StringLiteral_22867/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v42 = &StringLiteral_18305/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_24271/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v29 = (PartyOrganizationUtility_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21793/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v21 = &StringLiteral_22868/*"parameter error"*/;
          if ( *(_QWORD *)&v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v22 = StringLiteral_21780/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21780/*"message"*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v5->fields.waitType, v22, v23, v24, v25, v26, v27, v28);
          v29 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
          v30 = 0LL;
          v5->fields.waitMessage = 0LL;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v14 )
      {
        v5->fields.state = 4;
        v56 = StringLiteral_21780/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21780/*"message"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v5->fields.waitType, v56, (int64_t)v3, v16, v17, v18, v19, v20);
        v5->fields.waitMessage = v13;
        v29 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
LABEL_155:
        v30 = (int64_t)v13;
LABEL_156:
        sub_1C21DDC(v29, v30, (int64_t)v3, v16, v17, v18, v19, v20);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v31 = *p_waitType;
    v32 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0LL);
    if ( v32 > 0x698989D8 )
      break;
    if ( v32 > 0xD841B5E )
    {
      if ( v32 != 619841764 )
      {
        if ( v32 != 1550717474 )
        {
          if ( v32 == 1770621400 && System_String__op_Equality(v31, (System_String_o *)StringLiteral_24428/*"touch"*/, 0LL) )
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
            v65 = &StringLiteral_24430/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18305/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v45 = &StringLiteral_18307/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21780/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v45 = &StringLiteral_21785/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v34);
      v49 = *p_waitMessage;
      if ( !*p_waitMessage )
        v49 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v49, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v32 == 256629 )
    {
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21786/*"message3"*/, 0LL) || v5->fields.isScroll )
        goto LABEL_173;
      v43 = *p_waitMessage;
      if ( !*p_waitMessage )
        v43 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v43, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0LL);
      goto LABEL_115;
    }
    if ( v32 != 226761566
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_24430/*"touch2"*/, 0LL)
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
  if ( v32 <= 0x91466F30 )
  {
    if ( v32 == -2124547466 )
    {
      if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22849/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v45 = &StringLiteral_22853/*"page2"*/;
LABEL_120:
      v40 = *v45;
      *p_waitType = (System_String_o *)*v45;
LABEL_121:
      sub_1C21DDC((PartyOrganizationUtility_o *)&v5->fields.waitType, v40, (int64_t)v34, v35, v36, v37, v38, v39);
      goto LABEL_171;
    }
    if ( v32 != -1857654992
      || !System_String__op_Equality(v31, (System_String_o *)StringLiteral_18307/*"clear2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
    goto LABEL_115;
  }
  if ( v32 == -336528737 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_22854/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v32 == -16520990 )
  {
    if ( !System_String__op_Equality(v31, (System_String_o *)StringLiteral_21785/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    v40 = StringLiteral_21786/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21786/*"message3"*/;
    goto LABEL_121;
  }
  if ( v32 == -353306356
    && System_String__op_Equality(v31, (System_String_o *)StringLiteral_22853/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v65 = &StringLiteral_22854/*"page3"*/;
LABEL_188:
    v66 = *v65;
    v5->fields.waitType = (struct System_String_o *)*v65;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v5->fields.waitType, v66, v59, v60, v61, v62, v63, v64);
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


void __fastcall CommonMessageManager__SetCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommonMessageManager__SetLongPressCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.longPressCallbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.longPressCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  bool v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  v8 = isDispLastTouchMark;
  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
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

  if ( (byte_4BDE030 & 1) == 0 )
  {
    sub_1C21E38(&ScriptMessageLabel_TypeInfo);
    byte_4BDE030 = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.touchCallbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}