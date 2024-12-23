void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B68670 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptMessageManager_TypeInfo, method);
    byte_4B68670 = 1;
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int size; // w8
  Il2CppObject *Item; // x0
  int32_t v33; // w21
  System_String_o *v34; // x0
  Il2CppObject *v35; // x2
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_String_o *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  int v51; // w8
  Il2CppObject *v52; // x0
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  System_String_o *v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int16 v76[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_4B6866E & 1) == 0 )
  {
    sub_1BE4ACC(&char_TypeInfo, data);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__set_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_1858/*"="*/, v11);
    sub_1BE4ACC(&StringLiteral_116/*" "*/, v12);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v13);
    sub_1BE4ACC(&StringLiteral_367/*"\""*/, v14);
    this = (CommonMessageManager_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v15);
    byte_4B6866E = 1;
  }
  v76[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = v19++;
      Chars = System_String__get_Chars(v3, v20, 0LL);
      v76[0] = Chars;
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
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_116/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v76, 0LL);
          items = v17->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_72;
          v62 = v17->fields._size;
          if ( (unsigned int)v62 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)data,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + v62;
            v17->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)data;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)data, v54, v55, v56, v57, v58, v59);
          }
          goto LABEL_63;
        }
        v33 = v17->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v34 = System_Char__ToString((uint16_t)v76, 0LL);
        if ( v34 )
          v35 = (Il2CppObject *)v34;
        else
          v35 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v17,
          v33 - 1,
          v35,
          (const MethodInfo_35EBFA8 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v22 = System_Char__ToString((uint16_t)v76, 0LL);
            v18 = System_String__Concat_62698808(v18, v22, 0LL);
            if ( v19 < stringLength )
            {
              while ( 1 )
              {
                v23 = v19 + 1;
                v76[0] = System_String__get_Chars(v3, v19, 0LL);
                if ( v76[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v24 = System_Char__ToString((uint16_t)v76, 0LL);
                v18 = System_String__Concat_62698808(v18, v24, 0LL);
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
            v40 = (System_String_o *)StringLiteral_367/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v40 = System_Char__ToString((uint16_t)v76, 0LL);
          }
          v18 = System_String__Concat_62698808(v18, v40, 0LL);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v17 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v36 = v17->fields._items;
          v37 = Method_System_Collections_Generic_List_string__Add__;
          ++v17->fields._version;
          if ( !v36 )
            goto LABEL_72;
          v38 = v17->fields._size;
          if ( (unsigned int)v38 >= v36->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v18,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->obj.klass + v38;
            v17->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)v18;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v18, v25, v26, v27, v28, v29, v30);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v76, 0LL);
          v47 = v17->fields._items;
          v48 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v17->fields._version;
          if ( !v47 )
            goto LABEL_72;
          v49 = v17->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)data,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v17->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)data;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)data, v41, v42, v43, v44, v45, v46);
          }
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v51 = v17->fields._size;
        if ( v51 < 1 )
          goto LABEL_51;
        v52 = System_Collections_Generic_List_object___get_Item(
                v17,
                v51 - 1,
                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v52, (System_String_o *)StringLiteral_1858/*"="*/, 0LL) )
        {
          v53 = System_Collections_Generic_List_object___get_Item(
                  v17,
                  v17->fields._size - 1,
                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v53, (System_String_o *)StringLiteral_863/*","*/, 0LL) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v19 >= stringLength )
      {
        v64 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v64 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v18, v64, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v17 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v17,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1BE4D28(this, data);
  }
  if ( !v17 )
    goto LABEL_72;
  v71 = v17->fields._items;
  v72 = Method_System_Collections_Generic_List_string__Add__;
  ++v17->fields._version;
  if ( !v71 )
    goto LABEL_72;
  v73 = v17->fields._size;
  if ( (unsigned int)v73 >= v71->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v71->obj.klass + v73;
    v17->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v18, v65, v66, v67, v68, v69, v70);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v17,
                                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  System_String_o **v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x26
  System_String_o **m_Items; // x9
  __int64 v45; // x29
  __int64 v46; // x24
  System_String_o **v47; // x27
  System_String_o *v48; // x28
  System_String_o *v49; // x25
  System_String_o *v50; // x0
  System_String_o *v51; // x28
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  _QWORD *v58; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  _QWORD *v68; // x9
  struct System_Object_array *v69; // x8
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  int64_t v88; // x1
  Il2CppClass **v89; // x0
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int32_t v93; // w26
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_String_o *v110; // x8
  _QWORD *v111; // x9
  struct System_Object_array *v112; // x8
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  struct System_Int32_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  _QWORD *v118; // x9
  struct System_Object_array *v119; // x8
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  _QWORD *v128; // x9
  struct System_Object_array *v129; // x8
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  struct System_Int32_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x0
  struct System_Int32_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  Il2CppClass **v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  _QWORD *v162; // x9
  struct System_Object_array *v163; // x8
  __int64 v164; // x10
  Il2CppClass **v165; // x0
  struct System_Int32_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  struct System_String_array *v169; // x0
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  struct System_String_array *v176; // x0
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  struct System_Int32_array *v183; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v191; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v197; // 0:w1.4

  if ( (byte_4B6866C & 1) == 0 )
  {
    sub_1BE4ACC(&char___TypeInfo, scriptData);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v14);
    sub_1BE4ACC(&StringLiteral_396/*"#"*/, v15);
    sub_1BE4ACC(&StringLiteral_1123/*"//"*/, v16);
    sub_1BE4ACC(&StringLiteral_20324/*"i"*/, v17);
    sub_1BE4ACC(&StringLiteral_21261/*"k"*/, v18);
    sub_1BE4ACC(&StringLiteral_22994/*"q"*/, v19);
    sub_1BE4ACC(&StringLiteral_508/*"%"*/, v20);
    sub_1BE4ACC(&StringLiteral_530/*"&"*/, v21);
    sub_1BE4ACC(&StringLiteral_21406/*"line"*/, v22);
    sub_1BE4ACC(&StringLiteral_24180/*"talkStart"*/, v23);
    sub_1BE4ACC(&StringLiteral_20515/*"image"*/, v24);
    sub_1BE4ACC(&StringLiteral_16215/*"[r]"*/, v25);
    sub_1BE4ACC(&StringLiteral_24176/*"talkName"*/, v26);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v27);
    byte_4B6866C = 1;
  }
  v28 = (System_Array_o *)sub_1BE4B74(char___TypeInfo, 5LL);
  v197.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v29 = (System_Char_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v28, v197, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v32 = System_String__Split_62721200(scriptData, v29, 1, 0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v33;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v34;
  v35 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v35;
  lastMessageIndex = -1;
  if ( !v32 )
    goto LABEL_144;
  v42 = *(_QWORD *)&v32->max_length;
  if ( (int)v42 < 1 )
  {
    LODWORD(v43) = 0;
    goto LABEL_122;
  }
  v43 = 0LL;
  m_Items = v32->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v45 = 0LL;
    v46 = (v43 << 32) + 0x100000000LL;
    v47 = &m_Items[v43];
    while ( 1 )
    {
      if ( (int)v43 + (int)v45 >= (unsigned int)v42 )
        sub_1BE4D30(v30, v31);
      v48 = v47[v45];
      if ( !v48 )
        goto LABEL_144;
      if ( v48->fields._stringLength < 1 )
        goto LABEL_53;
      v49 = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (System_String_o *)System_String__StartsWith(v47[v45], (System_String_o *)StringLiteral_1123/*"//"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      v30 = (System_String_o *)System_String__StartsWith(v48, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v30 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v48, this->fields.codeTalkString, 0LL) )
        break;
      v30 = (System_String_o *)System_String__StartsWith(v48, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v39,
          v48,
          v43 + v45 + 1,
          v191);
LABEL_18:
        v30 = (System_String_o *)System_String__op_Inequality(v49, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v30 & 1) != 0 )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_144;
            v58 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_24180/*"talkStart"*/;
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
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v31;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v31, v52, v53, v54, v55, v56, v57);
            }
            if ( !v34 )
              goto LABEL_144;
            v68 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_1/*""*/;
            v69 = v34->fields._items;
            ++v34->fields._version;
            if ( !v69 )
              goto LABEL_144;
            v70 = v34->fields._size;
            if ( (unsigned int)v70 >= v69->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v31,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v71 = &v69->obj.klass + v70;
              v34->fields._size = v70 + 1;
              v71[4] = (Il2CppClass *)v31;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v31, v62, v63, v64, v65, v66, v67);
            }
            if ( !v35 )
              goto LABEL_144;
            v72 = v35->fields._items;
            v73 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !v72 )
              goto LABEL_144;
            v74 = v35->fields._size;
            if ( (unsigned int)v74 >= v72->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                v43 + v45 + 1,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = v74 + 1;
              v72->m_Items[v74 + 1] = v43 + v45 + 1;
            }
          }
          else if ( !v33 )
          {
            goto LABEL_144;
          }
          v75 = v33->fields._items;
          v76 = Method_System_Collections_Generic_List_string__Add__;
          ++v33->fields._version;
          if ( !v75 )
            goto LABEL_144;
          v77 = v33->fields._size;
          if ( (unsigned int)v77 >= v75->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              0LL,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v78 = &v75->obj.klass + v77;
            v33->fields._size = v77 + 1;
            v78[4] = 0LL;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v78 + 4), 0LL, v52, v53, v54, v55, v56, v57);
          }
          if ( !v34 )
            goto LABEL_144;
          lastMessageIndex = v34->fields._size;
          if ( !v49 )
            goto LABEL_144;
          v30 = System_String__Replace_62718436(
                  v49,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_16215/*"[r]"*/,
                  0LL);
          v85 = v34->fields._items;
          v86 = Method_System_Collections_Generic_List_string__Add__;
          ++v34->fields._version;
          if ( !v85 )
            goto LABEL_144;
          v87 = v34->fields._size;
          v88 = (int64_t)v30;
          if ( (unsigned int)v87 >= v85->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v30,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &v85->obj.klass + v87;
            v34->fields._size = v87 + 1;
            v89[4] = (Il2CppClass *)v88;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 4), v88, v79, v80, v81, v82, v83, v84);
          }
          if ( !v35 )
            goto LABEL_144;
          v90 = v35->fields._items;
          v91 = Method_System_Collections_Generic_List_int__Add__;
          ++v35->fields._version;
          if ( !v90 )
            goto LABEL_144;
          v92 = v35->fields._size;
          if ( (unsigned int)v92 >= v90->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v35,
              v43 + v45 + 1,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v35->fields._size = v92 + 1;
            v90->m_Items[v92 + 1] = v43 + v45 + 1;
          }
        }
      }
LABEL_53:
      v42 = *(_QWORD *)&v32->max_length;
      ++v45;
      v46 += 0x100000000LL;
      if ( v43 + v45 >= (int)v42 )
      {
        LODWORD(v43) = v43 + v45;
        goto LABEL_122;
      }
    }
    v50 = v48;
    v51 = (System_String_o *)StringLiteral_24176/*"talkName"*/;
    v49 = System_String__Substring(v50, 1, 0LL);
    if ( !v51 )
      goto LABEL_18;
    v93 = v43 + v45 + 1;
    v30 = (System_String_o *)System_String__op_Equality(v51, (System_String_o *)StringLiteral_21261/*"k"*/, 0LL);
    if ( ((unsigned __int8)v30 & 1) == 0 )
    {
      v30 = (System_String_o *)System_String__op_Equality(v51, (System_String_o *)StringLiteral_22994/*"q"*/, 0LL);
      if ( ((unsigned __int8)v30 & 1) == 0 )
      {
        if ( System_String__op_Equality(v51, (System_String_o *)StringLiteral_24176/*"talkName"*/, 0LL) )
        {
          v30 = (System_String_o *)System_String__op_Equality(v51, (System_String_o *)StringLiteral_24176/*"talkName"*/, 0LL);
          v110 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v30 & 1) != 0 )
            v110 = v49;
          a = v110;
        }
        else if ( System_String__op_Equality(v51, (System_String_o *)StringLiteral_20324/*"i"*/, 0LL)
               || System_String__op_Equality(v51, (System_String_o *)StringLiteral_20515/*"image"*/, 0LL)
               || System_String__op_Equality(v51, (System_String_o *)StringLiteral_21406/*"line"*/, 0LL)
               || System_String__StartsWith(v51, (System_String_o *)StringLiteral_508/*"%"*/, 0LL)
               || System_String__StartsWith(v51, (System_String_o *)StringLiteral_530/*"&"*/, 0LL)
               || (v30 = (System_String_o *)System_String__StartsWith(v51, (System_String_o *)StringLiteral_396/*"#"*/, 0LL),
                   ((unsigned __int8)v30 & 1) != 0) )
        {
          v30 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v30 & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_144;
            v118 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_24180/*"talkStart"*/;
            v119 = v33->fields._items;
            ++v33->fields._version;
            if ( !v119 )
              goto LABEL_144;
            v120 = v33->fields._size;
            if ( (unsigned int)v120 >= v119->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                v31,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
            }
            else
            {
              v121 = &v119->obj.klass + v120;
              v33->fields._size = v120 + 1;
              v121[4] = (Il2CppClass *)v31;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v121 + 4), (int64_t)v31, v94, v95, v96, v97, v98, v99);
            }
            if ( !v34 )
              goto LABEL_144;
            v128 = Method_System_Collections_Generic_List_string__Add__;
            v31 = (Il2CppObject *)StringLiteral_1/*""*/;
            v129 = v34->fields._items;
            ++v34->fields._version;
            if ( !v129 )
              goto LABEL_144;
            v130 = v34->fields._size;
            if ( (unsigned int)v130 >= v129->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v31,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
            }
            else
            {
              v131 = &v129->obj.klass + v130;
              v34->fields._size = v130 + 1;
              v131[4] = (Il2CppClass *)v31;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v131 + 4), (int64_t)v31, v122, v123, v124, v125, v126, v127);
            }
            if ( !v35 )
              goto LABEL_144;
            v132 = v35->fields._items;
            v133 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !v132 )
              goto LABEL_144;
            v134 = v35->fields._size;
            if ( (unsigned int)v134 >= v132->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                v93,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = v134 + 1;
              v132->m_Items[v134 + 1] = v93;
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
    v100 = v33->fields._items;
    v101 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v100 )
      goto LABEL_144;
    v102 = v33->fields._size;
    if ( (unsigned int)v102 >= v100->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        0LL,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
    }
    else
    {
      v103 = &v100->obj.klass + v102;
      v33->fields._size = v102 + 1;
      v103[4] = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v103 + 4), 0LL, v94, v95, v96, v97, v98, v99);
    }
    if ( !v34 )
      goto LABEL_144;
    v111 = Method_System_Collections_Generic_List_string__Add__;
    v31 = (Il2CppObject *)StringLiteral_16215/*"[r]"*/;
    v112 = v34->fields._items;
    ++v34->fields._version;
    if ( !v112 )
      goto LABEL_144;
    v113 = v34->fields._size;
    if ( (unsigned int)v113 >= v112->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v31,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      v114 = &v112->obj.klass + v113;
      v34->fields._size = v113 + 1;
      v114[4] = (Il2CppClass *)v31;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v114 + 4), (int64_t)v31, v104, v105, v106, v107, v108, v109);
    }
    if ( !v35 )
      goto LABEL_144;
    v115 = v35->fields._items;
    v116 = Method_System_Collections_Generic_List_int__Add__;
    ++v35->fields._version;
    if ( !v115 )
      goto LABEL_144;
    v117 = v35->fields._size;
    if ( (unsigned int)v117 >= v115->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v35,
        v93,
        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v117 + 1;
      v115->m_Items[v117 + 1] = v93;
    }
    lastMessageIndex = -1;
LABEL_105:
    v135 = v33->fields._items;
    v136 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v135 )
      goto LABEL_144;
    v137 = v33->fields._size;
    if ( (unsigned int)v137 >= v135->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v51,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    }
    else
    {
      v138 = &v135->obj.klass + v137;
      v33->fields._size = v137 + 1;
      v138[4] = (Il2CppClass *)v51;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v138 + 4), (int64_t)v51, v94, v95, v96, v97, v98, v99);
    }
    if ( !v34 )
      goto LABEL_144;
    v145 = v34->fields._items;
    v146 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v145 )
      goto LABEL_144;
    v147 = v34->fields._size;
    if ( (unsigned int)v147 >= v145->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)v49,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
    }
    else
    {
      v148 = &v145->obj.klass + v147;
      v34->fields._size = v147 + 1;
      v148[4] = (Il2CppClass *)v49;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v148 + 4), (int64_t)v49, v139, v140, v141, v142, v143, v144);
    }
    if ( !v35 )
      goto LABEL_144;
    v149 = v35->fields._items;
    v150 = Method_System_Collections_Generic_List_int__Add__;
    ++v35->fields._version;
    if ( !v149 )
      goto LABEL_144;
    v151 = v35->fields._size;
    if ( (unsigned int)v151 >= v149->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v35,
        v93,
        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v151 + 1;
      v149->m_Items[v151 + 1] = v93;
    }
    v42 = *(_QWORD *)&v32->max_length;
    m_Items = v32->m_Items;
    v43 = v46 >> 32;
  }
  while ( v46 >> 32 < (int)v42 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v33 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v33 )
    goto LABEL_144;
  v152 = v33->fields._items;
  v153 = Method_System_Collections_Generic_List_string__Add__;
  ++v33->fields._version;
  if ( !v152 )
    goto LABEL_144;
  v154 = v33->fields._size;
  if ( (unsigned int)v154 >= v152->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      0LL,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
  }
  else
  {
    v155 = &v152->obj.klass + v154;
    v33->fields._size = v154 + 1;
    v155[4] = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v155 + 4), 0LL, v36, v37, v38, (BattleSetupInfo_o *)v39, v40, v41);
  }
  if ( !v34 )
    goto LABEL_144;
  v162 = Method_System_Collections_Generic_List_string__Add__;
  v31 = (Il2CppObject *)StringLiteral_16215/*"[r]"*/;
  v163 = v34->fields._items;
  ++v34->fields._version;
  if ( !v163 )
    goto LABEL_144;
  v164 = v34->fields._size;
  if ( (unsigned int)v164 >= v163->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      v31,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
  }
  else
  {
    v165 = &v163->obj.klass + v164;
    v34->fields._size = v164 + 1;
    v165[4] = (Il2CppClass *)v31;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v165 + 4), (int64_t)v31, v156, v157, v158, v159, v160, v161);
  }
  if ( !v35 )
    goto LABEL_144;
  v166 = v35->fields._items;
  v167 = Method_System_Collections_Generic_List_int__Add__;
  ++v35->fields._version;
  if ( !v166 )
    goto LABEL_144;
  v168 = v35->fields._size;
  if ( (unsigned int)v168 >= v166->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v35,
      v43,
      *(const MethodInfo_35CF200 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
  }
  else
  {
    v35->fields._size = v168 + 1;
    v166->m_Items[v168 + 1] = v43;
  }
LABEL_140:
  v169 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v33,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v169;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.executeTagList,
    (int64_t)v169,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  if ( !v34
    || (v176 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v34,
                                               (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v176,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.executeDataList,
          (int64_t)v176,
          v177,
          v178,
          v179,
          v180,
          v181,
          v182),
        !v35)
    || (v183 = System_Collections_Generic_List_int___ToArray(
                 v35,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v183,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.executeLineList,
          (int64_t)v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          v189),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1BE4D28(v30, v31);
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
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v59; // x8
  uint16_t v60; // w28
  System_String_o *v61; // x0
  int v62; // w24
  System_String_o *v63; // x0
  System_Collections_Generic_List_object__o *v64; // x28
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  CommonMessageManager_o *v74; // x1
  Il2CppClass **v75; // x0
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  System_String_o *v79; // x27
  System_String_o *v80; // x28
  int v81; // w24
  int32_t v82; // w1
  uint16_t v83; // w0
  System_String_o *v85; // x0
  int v86; // w26
  System_String_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 *v94; // x8
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  __int64 *v99; // x8
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_Collections_Generic_List_string__o **v110; // x27
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  __int64 v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x8
  PartyOrganizationUtility_o *v119; // x0
  __int64 v120; // x8
  __int64 *v121; // x8
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  System_Collections_Generic_List_string__o *v136; // x28
  struct System_String_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  __int64 v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  int32_t v144; // w8
  __int64 v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  __int64 v148; // x8
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  __int64 v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x8
  __int64 v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  __int64 v165; // x8
  int32_t v166; // w8
  System_String_o *v167; // x24
  System_String_o *v168; // x1
  System_String_o *v169; // x1
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  __int64 v179; // x8
  System_Collections_Generic_List_object__o *v180; // x21
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  CommonMessageManager_o *v190; // x1
  Il2CppClass **v191; // x0
  __int64 v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  CommonMessageManager_o *v195; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v199; // [xsp+20h] [xbp-70h]
  __int16 v200[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v195 = this;
  v199 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4B6866D & 1) == 0 )
  {
    sub_1BE4ACC(&char_TypeInfo, tagDataList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1BE4ACC(&StringLiteral_18234/*"clear"*/, v14);
    sub_1BE4ACC(&StringLiteral_19778/*"font"*/, v15);
    sub_1BE4ACC(&StringLiteral_19590/*"f"*/, v16);
    sub_1BE4ACC(&StringLiteral_23759/*"speed"*/, v17);
    sub_1BE4ACC(&StringLiteral_21261/*"k"*/, v18);
    sub_1BE4ACC(&StringLiteral_22994/*"q"*/, v19);
    sub_1BE4ACC(&StringLiteral_24934/*"voiceStop"*/, v20);
    sub_1BE4ACC(&StringLiteral_17391/*"bgm"*/, v21);
    sub_1BE4ACC(&StringLiteral_17393/*"bgmStop"*/, v22);
    sub_1BE4ACC(&StringLiteral_25082/*"wt"*/, v23);
    sub_1BE4ACC(&StringLiteral_23389/*"seStop"*/, v24);
    sub_1BE4ACC(&StringLiteral_22759/*"page"*/, v25);
    sub_1BE4ACC(&StringLiteral_24942/*"wait"*/, v26);
    sub_1BE4ACC(&StringLiteral_19251/*"end"*/, v27);
    sub_1BE4ACC(&StringLiteral_21245/*"jingle"*/, v28);
    sub_1BE4ACC(&StringLiteral_23383/*"se"*/, v29);
    sub_1BE4ACC(&StringLiteral_21323/*"l"*/, v30);
    sub_1BE4ACC(&StringLiteral_24928/*"voice"*/, v31);
    sub_1BE4ACC(&StringLiteral_24266/*"time "*/, v32);
    sub_1BE4ACC(&StringLiteral_19783/*"fontSize"*/, v33);
    sub_1BE4ACC(&StringLiteral_23387/*"seLoop"*/, v34);
    sub_1BE4ACC(&StringLiteral_367/*"\""*/, v35);
    sub_1BE4ACC(&StringLiteral_16215/*"[r]"*/, v36);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v37);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v38);
    sub_1BE4ACC(&StringLiteral_23321/*"s"*/, v39);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v40);
    sub_1BE4ACC(&StringLiteral_17379/*"betweenHeight"*/, v41);
    sub_1BE4ACC(&StringLiteral_21246/*"jingleStop"*/, v42);
    sub_1BE4ACC(&StringLiteral_23732/*"soundStopAll"*/, v43);
    this = (CommonMessageManager_o *)sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v44);
    byte_4B6866D = 1;
  }
  v200[0] = 0;
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
        v200[0] = Chars;
        if ( Chars == 91 )
          break;
        v60 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v61 = System_Char__ToString((uint16_t)v200, 0LL);
        v46 = System_String__Concat_62698808(v46, v61, 0LL);
        if ( v60 == 34 )
        {
          if ( v47 < stringLength )
          {
            while ( 1 )
            {
              v62 = v47 + 1;
              v200[0] = System_String__get_Chars(analysData, v47, 0LL);
              if ( v200[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v63 = System_Char__ToString((uint16_t)v200, 0LL);
              v46 = System_String__Concat_62698808(v46, v63, 0LL);
              ++v47;
              if ( stringLength == v62 )
              {
                v47 = stringLength;
                goto LABEL_86;
              }
            }
            ++v47;
          }
LABEL_86:
          v46 = System_String__Concat_62698808(v46, (System_String_o *)StringLiteral_367/*"\""*/, 0LL);
        }
        if ( v47 >= stringLength )
        {
          v169 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v46, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v199;
        if ( !*v199 )
          goto LABEL_234;
        v56 = *(_QWORD *)&this->fields.m_CachedPtr;
        v57 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v56 )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v56 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0LL,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = v56 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v59 + 32) = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v59 + 32), 0LL, v50, v51, v52, v53, v54, v55);
        }
        if ( !v46 )
          goto LABEL_234;
        v64 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_62718436(
                                           v46,
                                           v195->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16215/*"[r]"*/,
                                           0LL);
        if ( !v64 )
          goto LABEL_234;
        items = v64->fields._items;
        v72 = Method_System_Collections_Generic_List_string__Add__;
        ++v64->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v64->fields._size;
        v74 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)this,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &items->obj.klass + size;
          v64->fields._size = size + 1;
          v75[4] = (Il2CppClass *)v74;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v74, v65, v66, v67, v68, v69, v70);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v76 = *(_QWORD *)&this->fields.m_CachedPtr;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v76 )
          goto LABEL_234;
        v78 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v78 + 1;
          *(_DWORD *)(v76 + 4 * v78 + 32) = line;
        }
      }
      v79 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v47 >= stringLength )
      {
        v80 = 0LL;
      }
      else
      {
        v80 = 0LL;
        v81 = 0;
        v82 = v47;
        do
        {
          v47 = v82 + 1;
          v83 = System_String__get_Chars(analysData, v82, 0LL);
          v200[0] = v83;
          if ( v83 == 91 )
          {
            ++v81;
          }
          else if ( v83 == 93 )
          {
            if ( --v81 < 0 )
              break;
          }
          else if ( v83 == 32 && v80 == 0LL )
          {
            v80 = v79;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v85 = System_Char__ToString((uint16_t)v200, 0LL);
          v79 = System_String__Concat_62698808(v79, v85, 0LL);
          if ( v200[0] == 34 )
          {
            if ( v47 < stringLength )
            {
              while ( 1 )
              {
                v86 = v47 + 1;
                v200[0] = System_String__get_Chars(analysData, v47, 0LL);
                if ( v200[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v87 = System_Char__ToString((uint16_t)v200, 0LL);
                v79 = System_String__Concat_62698808(v79, v87, 0LL);
                ++v47;
                if ( stringLength == v86 )
                {
                  v47 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v47;
            }
LABEL_56:
            v79 = System_String__Concat_62698808(v79, (System_String_o *)StringLiteral_367/*"\""*/, 0LL);
          }
          v82 = v47;
        }
        while ( v47 < stringLength );
      }
      if ( !v80 )
        v80 = v79;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v80, 0LL);
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
                v121 = &StringLiteral_22994/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v80, (System_String_o *)*v121, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v199;
                  if ( !*v199 )
                    goto LABEL_234;
                  v122 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v123 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v122 )
                    goto LABEL_234;
                  v124 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0LL,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v125 = v122 + 8 * v124;
                    LODWORD(this->fields.m_CancellationTokenSource) = v124 + 1;
                    *(_QWORD *)(v125 + 32) = 0LL;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v125 + 32), 0LL, v88, v89, v90, v91, v92, v93);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16215/*"[r]"*/;
                  v145 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v146 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v145 )
                    goto LABEL_234;
                  v147 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v147 >= *(_DWORD *)(v145 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v148 = v145 + 8 * v147;
                    LODWORD(this->fields.m_CancellationTokenSource) = v147 + 1;
                    *(_QWORD *)(v148 + 32) = tagDataList;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)(v148 + 32),
                      (int64_t)tagDataList,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130,
                      v131);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v155 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v156 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v155 )
                    goto LABEL_234;
                  v157 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v157 >= *(_DWORD *)(v155 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_35CF200 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v157 + 1;
                    *(_DWORD *)(v155 + 4 * v157 + 32) = line;
                  }
                  this = *v199;
                  if ( !*v199 )
                    goto LABEL_234;
                  v158 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v159 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v158 )
                    goto LABEL_234;
                  v160 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v80,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v161 = v158 + 8 * v160;
                    LODWORD(this->fields.m_CancellationTokenSource) = v160 + 1;
                    *(_QWORD *)(v161 + 32) = v80;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)(v161 + 32),
                      (int64_t)v80,
                      v149,
                      v150,
                      v151,
                      v152,
                      v153,
                      v154);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v162 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v163 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v162 )
                    goto LABEL_234;
                  v164 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v164 < *(_DWORD *)(v162 + 24) )
                  {
                    v165 = v162 + 8 * v164;
                    LODWORD(this->fields.m_CancellationTokenSource) = v164 + 1;
                    *(_QWORD *)(v165 + 32) = tagDataList;
                    v119 = (PartyOrganizationUtility_o *)(v165 + 32);
                    goto LABEL_168;
                  }
                  v120 = v163[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v94 = &StringLiteral_23321/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v121 = &StringLiteral_21261/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v94 = &StringLiteral_21245/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v94 = &StringLiteral_24934/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v94 = &StringLiteral_19590/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v94 = &StringLiteral_21323/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v94 = &StringLiteral_24942/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v94 = &StringLiteral_17379/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v94 = &StringLiteral_19783/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v80 && !v80->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v99 = &StringLiteral_22759/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v94 = &StringLiteral_24928/*"voice"*/;
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
              v94 = &StringLiteral_19251/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v94 = &StringLiteral_23732/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v80, (System_String_o *)*v94, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v79 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v80->fields._stringLength + 1);
                v110 = (System_Collections_Generic_List_string__o **)(v79->fields._stringLength <= (int)tagDataList
                                                                    ? StringLiteral_1/*""*/
                                                                    : System_String__Substring(
                                                                        v79,
                                                                        (int32_t)tagDataList,
                                                                        0LL));
                this = *v199;
                if ( !*v199 )
                  goto LABEL_234;
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
                    (Il2CppObject *)v80,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                }
                else
                {
                  v114 = v111 + 8 * v113;
                  LODWORD(this->fields.m_CancellationTokenSource) = v113 + 1;
                  *(_QWORD *)(v114 + 32) = v80;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v114 + 32), (int64_t)v80, v88, v89, v90, v91, v92, v93);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v115 = *(_QWORD *)&this->fields.m_CachedPtr;
                v116 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v115 )
                  goto LABEL_234;
                v117 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v117 < *(_DWORD *)(v115 + 24) )
                {
                  v118 = v115 + 8 * v117;
                  LODWORD(this->fields.m_CancellationTokenSource) = v117 + 1;
                  *(_QWORD *)(v118 + 32) = v110;
                  v119 = (PartyOrganizationUtility_o *)(v118 + 32);
                  tagDataList = v110;
LABEL_168:
                  sub_1BE4A70(v119, (int64_t)tagDataList, v104, v105, v106, v107, v108, v109);
                  goto LABEL_171;
                }
                v120 = v116[4];
                tagDataList = v110;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v94 = &StringLiteral_23759/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v99 = &StringLiteral_18234/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v80, (System_String_o *)*v99, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v199;
                if ( !*v199 )
                  goto LABEL_234;
                v100 = *(_QWORD *)&this->fields.m_CachedPtr;
                v101 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v100 )
                  goto LABEL_234;
                v102 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v80,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                }
                else
                {
                  v103 = v100 + 8 * v102;
                  LODWORD(this->fields.m_CancellationTokenSource) = v102 + 1;
                  *(_QWORD *)(v103 + 32) = v80;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v103 + 32), (int64_t)v80, v88, v89, v90, v91, v92, v93);
                }
                if ( !v79 )
                  goto LABEL_234;
                v144 = v80->fields._stringLength;
                v136 = *scriptDataList;
                if ( v79->fields._stringLength <= v144 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v79, v144 + 1, 0LL);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v136 )
                  goto LABEL_234;
                v137 = v136->fields._items;
                v138 = Method_System_Collections_Generic_List_string__Add__;
                ++v136->fields._version;
                if ( !v137 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v94 = &StringLiteral_17391/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v94 = &StringLiteral_21246/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v94 = &StringLiteral_23383/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v94 = &StringLiteral_23387/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v80,
                                               (System_String_o *)StringLiteral_25082/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v199;
              if ( !*v199 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24942/*"wait"*/;
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
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
              }
              else
              {
                v98 = v95 + 8 * v97;
                LODWORD(this->fields.m_CancellationTokenSource) = v97 + 1;
                *(_QWORD *)(v98 + 32) = tagDataList;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)(v98 + 32),
                  (int64_t)tagDataList,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93);
              }
              if ( !v79 )
                goto LABEL_234;
              v166 = v80->fields._stringLength;
              v136 = *scriptDataList;
              v167 = (System_String_o *)StringLiteral_24266/*"time "*/;
              v168 = v79->fields._stringLength <= v166 + 1
                   ? (System_String_o *)StringLiteral_1209/*"0"*/
                   : System_String__Substring(v79, v166 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_62698808(v167, v168, 0LL);
              if ( !v136 )
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
            v94 = &StringLiteral_19778/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v94 = &StringLiteral_23389/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v94 = &StringLiteral_17393/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v199;
      if ( !*v199 )
        goto LABEL_234;
      v132 = *(_QWORD *)&this->fields.m_CachedPtr;
      v133 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v132 )
        goto LABEL_234;
      v134 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
      }
      else
      {
        v135 = v132 + 8 * v134;
        LODWORD(this->fields.m_CancellationTokenSource) = v134 + 1;
        *(_QWORD *)(v135 + 32) = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v135 + 32), 0LL, v88, v89, v90, v91, v92, v93);
      }
      v136 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_62710068(
                                         (System_String_o *)StringLiteral_16018/*"["*/,
                                         v79,
                                         (System_String_o *)StringLiteral_16276/*"]"*/,
                                         0LL);
      if ( !v136 )
        goto LABEL_234;
LABEL_164:
      v137 = v136->fields._items;
      v138 = Method_System_Collections_Generic_List_string__Add__;
      ++v136->fields._version;
      if ( !v137 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v139 = v136->fields._size;
      if ( (unsigned int)v139 < v137->max_length )
      {
        v140 = &v137->obj.klass + v139;
        v136->fields._size = v139 + 1;
        v140[4] = (Il2CppClass *)tagDataList;
        v119 = (PartyOrganizationUtility_o *)(v140 + 4);
        goto LABEL_168;
      }
      v120 = v138[4];
      this = (CommonMessageManager_o *)v136;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v120 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v141 = *(_QWORD *)&this->fields.m_CachedPtr;
      v142 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v141 )
        goto LABEL_234;
      v143 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v143 >= *(_DWORD *)(v141 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v143 + 1;
        *(_DWORD *)(v141 + 4 * v143 + 32) = line;
      }
LABEL_176:
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      v169 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v47 >= stringLength )
        goto LABEL_215;
    }
  }
  v169 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v46, v169, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v199;
      if ( *v199 )
      {
        v176 = *(_QWORD *)&this->fields.m_CachedPtr;
        v177 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v176 )
        {
          v178 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v179 = v176 + 8 * v178;
            LODWORD(this->fields.m_CancellationTokenSource) = v178 + 1;
            *(_QWORD *)(v179 + 32) = 0LL;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v179 + 32), 0LL, v170, v171, v172, v173, v174, v175);
          }
          if ( v46 )
          {
            v180 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_62718436(
                                               v46,
                                               v195->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16215/*"[r]"*/,
                                               0LL);
            if ( v180 )
            {
              v187 = v180->fields._items;
              v188 = Method_System_Collections_Generic_List_string__Add__;
              ++v180->fields._version;
              if ( v187 )
              {
                v189 = v180->fields._size;
                v190 = this;
                if ( (unsigned int)v189 >= v187->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v180,
                    (Il2CppObject *)this,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
                }
                else
                {
                  v191 = &v187->obj.klass + v189;
                  v180->fields._size = v189 + 1;
                  v191[4] = (Il2CppClass *)v190;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)(v191 + 4),
                    (int64_t)v190,
                    v181,
                    v182,
                    v183,
                    v184,
                    v185,
                    v186);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v192 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v193 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v192 )
                  {
                    v194 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v194 >= *(_DWORD *)(v192 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v194 + 1;
                      *(_DWORD *)(v192 + 4 * v194 + 32) = line;
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
    sub_1BE4D28(this, tagDataList);
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
    sub_1BE4A70(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B6866A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_11630/*"SCRIPT_ACTION_CODE_COMMENT"*/, v3);
    sub_1BE4ACC(&StringLiteral_11640/*"SCRIPT_ACTION_CODE_VOICE"*/, v4);
    sub_1BE4ACC(&StringLiteral_11633/*"SCRIPT_ACTION_CODE_RETURN"*/, v5);
    sub_1BE4ACC(&StringLiteral_11639/*"SCRIPT_ACTION_CODE_TALK"*/, v6);
    byte_4B6866A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11630/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.codeCommentString, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11639/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.codeTalkString, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11640/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.codeVoiceString, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.codeReturnString, (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.longPressCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 *v48; // x8
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  PartyOrganizationUtility_o *v56; // x0
  int64_t v57; // x1
  System_String_o *v58; // x23
  uint32_t v59; // w0
  __int64 *v60; // x8
  const MethodInfo *v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  __int64 *v68; // x8
  int64_t *v69; // x8
  System_String_o *v70; // x1
  int32_t playSpeed; // w8
  int64_t *v72; // x8
  __int64 *v73; // x8
  __int64 v74; // x9
  float v75; // s0
  System_String_o *v76; // x1
  __int64 v77; // x9
  float v78; // s0
  __int64 v79; // x9
  System_String_o *v80; // x1
  ScriptMessageCommonManager_o *v81; // x0
  System_String_o *v82; // x2
  int64_t v83; // x1
  _BOOL4 isBusy; // w20
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t *v92; // x8
  int64_t v93; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4B6866F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21711/*"messageOn"*/, method);
    sub_1BE4ACC(&StringLiteral_18234/*"clear"*/, v6);
    sub_1BE4ACC(&StringLiteral_19778/*"font"*/, v7);
    sub_1BE4ACC(&StringLiteral_22764/*"page3"*/, v8);
    sub_1BE4ACC(&StringLiteral_21709/*"messageOff"*/, v9);
    sub_1BE4ACC(&StringLiteral_22763/*"page2"*/, v10);
    sub_1BE4ACC(&StringLiteral_19590/*"f"*/, v11);
    sub_1BE4ACC(&StringLiteral_23759/*"speed"*/, v12);
    sub_1BE4ACC(&StringLiteral_21261/*"k"*/, v13);
    sub_1BE4ACC(&StringLiteral_915/*"-"*/, v14);
    sub_1BE4ACC(&StringLiteral_22994/*"q"*/, v15);
    sub_1BE4ACC(&StringLiteral_22778/*"parameter error"*/, v16);
    sub_1BE4ACC(&StringLiteral_24335/*"touch2"*/, v17);
    sub_1BE4ACC(&StringLiteral_22759/*"page"*/, v18);
    sub_1BE4ACC(&StringLiteral_24942/*"wait"*/, v19);
    sub_1BE4ACC(&StringLiteral_22777/*"parameter be unnecessary"*/, v20);
    sub_1BE4ACC(&StringLiteral_19251/*"end"*/, v21);
    sub_1BE4ACC(&StringLiteral_21703/*"message2"*/, v22);
    sub_1BE4ACC(&StringLiteral_21323/*"l"*/, v23);
    sub_1BE4ACC(&StringLiteral_19783/*"fontSize"*/, v24);
    sub_1BE4ACC(&StringLiteral_21699/*"message"*/, v25);
    sub_1BE4ACC(&StringLiteral_24176/*"talkName"*/, v26);
    sub_1BE4ACC(&StringLiteral_24333/*"touch"*/, v27);
    sub_1BE4ACC(&StringLiteral_21704/*"message3"*/, v28);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v29);
    sub_1BE4ACC(&StringLiteral_23321/*"s"*/, v30);
    sub_1BE4ACC(&StringLiteral_17379/*"betweenHeight"*/, v31);
    this = (CommonMessageManager_o *)sub_1BE4ACC(&StringLiteral_18236/*"clear2"*/, v32);
    byte_4B6866F = 1;
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
        sub_1BE4D28(this, method);
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
                                                 (System_String_o *)StringLiteral_22994/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v68 = &StringLiteral_23321/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v68, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v74 = *(_QWORD *)&v42->max_length;
                if ( (_DWORD)v74 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v42->m_Items[0],
                                                     (System_String_o *)StringLiteral_915/*"-"*/,
                                                     0LL);
                  v75 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42->max_length )
                      goto LABEL_189;
                    v75 = System_Single__Parse(v42->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v48 = &StringLiteral_22778/*"parameter error"*/;
                  if ( v74 )
                    goto LABEL_169;
                  v75 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v75, 0LL);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v60 = &StringLiteral_21323/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v60, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v77 = *(_QWORD *)&v42->max_length;
                if ( (_DWORD)v77 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v42->m_Items[0],
                                                     (System_String_o *)StringLiteral_915/*"-"*/,
                                                     0LL);
                  v78 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42->max_length )
LABEL_189:
                      sub_1BE4D30(this, method);
                    v78 = System_Single__Parse(v42->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v48 = &StringLiteral_22778/*"parameter error"*/;
                  if ( v77 )
                    goto LABEL_169;
                  v78 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v78, 0LL);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_21261/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v42 )
                  goto LABEL_190;
                v48 = &StringLiteral_22777/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v42->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v69 = &StringLiteral_24333/*"touch"*/;
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
              v73 = &StringLiteral_19783/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v73 = &StringLiteral_19590/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_24942/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v42 )
                goto LABEL_190;
              if ( (int)v42->max_length < 1 )
              {
                v48 = &StringLiteral_22778/*"parameter error"*/;
LABEL_169:
                if ( *v48 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v57 = (int64_t)v42->m_Items[0];
              *p_waitType = (System_String_o *)v57;
LABEL_151:
              v56 = (PartyOrganizationUtility_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v60 = &StringLiteral_17379/*"betweenHeight"*/;
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
                                               (System_String_o *)StringLiteral_22759/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v48 = &StringLiteral_22777/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v42->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v69 = &StringLiteral_22759/*"page"*/;
LABEL_150:
              v57 = *v69;
              v5->fields.waitType = (struct System_String_o *)*v69;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_21709/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_190;
              v48 = &StringLiteral_22778/*"parameter error"*/;
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_19251/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v48 = &StringLiteral_22777/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v68 = &StringLiteral_23759/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v73 = &StringLiteral_19778/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v73, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v79 = *(_QWORD *)&v42->max_length;
            if ( (_DWORD)v79 == 1 )
            {
              v80 = v42->m_Items[0];
              v81 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v79 >= 3 )
            {
              v80 = v42->m_Items[0];
              v82 = v42->m_Items[2];
              v81 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v48 = &StringLiteral_22778/*"parameter error"*/;
              if ( v79 )
                goto LABEL_169;
              v81 = (ScriptMessageCommonManager_o *)v5;
              v80 = 0LL;
LABEL_145:
              v82 = 0LL;
            }
            ScriptMessageCommonManager__SetFontSize(v81, v80, v82, 0LL);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_18234/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_190;
            v48 = &StringLiteral_22777/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v42->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v69 = &StringLiteral_18234/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_24176/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v56 = (PartyOrganizationUtility_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v40;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)StringLiteral_21711/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_190;
          v48 = &StringLiteral_22778/*"parameter error"*/;
          if ( *(_QWORD *)&v42->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v49 = StringLiteral_21699/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21699/*"message"*/;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.waitType, v49, v50, v51, v52, v53, v54, v55);
          v56 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
          v57 = 0LL;
          v5->fields.waitMessage = 0LL;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v41 )
      {
        v5->fields.state = 4;
        v83 = StringLiteral_21699/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21699/*"message"*/;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.waitType, v83, (int64_t)v3, v43, v44, v45, v46, v47);
        v5->fields.waitMessage = v40;
        v56 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
LABEL_155:
        v57 = (int64_t)v40;
LABEL_156:
        sub_1BE4A70(v56, v57, (int64_t)v3, v43, v44, v45, v46, v47);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v58 = *p_waitType;
    v59 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0LL);
    if ( v59 > 0x698989D8 )
      break;
    if ( v59 > 0xD841B5E )
    {
      if ( v59 != 619841764 )
      {
        if ( v59 != 1550717474 )
        {
          if ( v59 == 1770621400 && System_String__op_Equality(v58, (System_String_o *)StringLiteral_24333/*"touch"*/, 0LL) )
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
            v92 = &StringLiteral_24335/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_18234/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v72 = &StringLiteral_18236/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_21699/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v72 = &StringLiteral_21703/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v61);
      v76 = *p_waitMessage;
      if ( !*p_waitMessage )
        v76 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v76, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v59 == 256629 )
    {
      if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_21704/*"message3"*/, 0LL) || v5->fields.isScroll )
        goto LABEL_173;
      v70 = *p_waitMessage;
      if ( !*p_waitMessage )
        v70 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v70, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0LL);
      goto LABEL_115;
    }
    if ( v59 != 226761566
      || !System_String__op_Equality(v58, (System_String_o *)StringLiteral_24335/*"touch2"*/, 0LL)
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
  if ( v59 <= 0x91466F30 )
  {
    if ( v59 == -2124547466 )
    {
      if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_22759/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v72 = &StringLiteral_22763/*"page2"*/;
LABEL_120:
      v67 = *v72;
      *p_waitType = (System_String_o *)*v72;
LABEL_121:
      sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.waitType, v67, (int64_t)v61, v62, v63, v64, v65, v66);
      goto LABEL_171;
    }
    if ( v59 != -1857654992
      || !System_String__op_Equality(v58, (System_String_o *)StringLiteral_18236/*"clear2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
    goto LABEL_115;
  }
  if ( v59 == -336528737 )
  {
    if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_22764/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v59 == -16520990 )
  {
    if ( !System_String__op_Equality(v58, (System_String_o *)StringLiteral_21703/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    v67 = StringLiteral_21704/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21704/*"message3"*/;
    goto LABEL_121;
  }
  if ( v59 == -353306356
    && System_String__op_Equality(v58, (System_String_o *)StringLiteral_22763/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v92 = &StringLiteral_22764/*"page3"*/;
LABEL_188:
    v93 = *v92;
    v5->fields.waitType = (struct System_String_o *)*v92;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.waitType, v93, v86, v87, v88, v89, v90, v91);
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
  sub_1BE4A70(
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
  sub_1BE4A70(
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
  sub_1BE4A70(
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

  if ( (byte_4B6866B & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptMessageLabel_TypeInfo, name);
    byte_4B6866B = 1;
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
  sub_1BE4A70(
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