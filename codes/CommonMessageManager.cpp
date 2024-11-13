void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17C51 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageManager_TypeInfo, method, v2);
    byte_4B17C51 = 1;
  }
  this->fields.playSpeed = 2;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo, method);
  ScriptMessageManager___ctor((ScriptMessageManager_o *)this, 0LL);
}


System_String_array *__fastcall CommonMessageManager__AnalysParam(
        CommonMessageManager_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int stringLength; // w28
  System_Collections_Generic_List_object__o *v30; // x20
  System_String_o *v31; // x22
  int32_t v32; // w24
  int32_t v33; // w1
  uint16_t Chars; // w0
  __int64 v35; // x1
  System_String_o *v36; // x0
  int v37; // w21
  __int64 v38; // x1
  System_String_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int size; // w8
  __int64 v47; // x1
  Il2CppObject *Item; // x0
  int32_t v49; // w21
  System_String_o *v50; // x0
  Il2CppObject *v51; // x2
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  int v68; // w8
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_String_o *v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  __int16 v93[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = data;
  if ( (byte_4B17C4F & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1849/*"="*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_367/*"\""*/, v25, v26);
    this = (CommonMessageManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B17C4F = 1;
  }
  v93[0] = 0;
  if ( !v4 )
    goto LABEL_72;
  stringLength = v4->fields._stringLength;
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       data,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = v32++;
      Chars = System_String__get_Chars(v4, v33, 0LL);
      v93[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_34;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v31, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v30 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_31;
        size = v30->fields._size;
        v47 = (unsigned int)(size - 1);
        if ( size < 1
          || (Item = System_Collections_Generic_List_object___get_Item(
                       v30,
                       v47,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_116/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v47);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v93, 0LL);
          items = v30->fields._items;
          v78 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v30->fields._version;
          if ( !items )
            goto LABEL_72;
          v79 = v30->fields._size;
          if ( (unsigned int)v79 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)data,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &items->obj.klass + v79;
            v30->fields._size = v79 + 1;
            v80[4] = (Il2CppClass *)data;
            sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)data, v71, v72, v73, v74, v75, v76);
          }
          goto LABEL_63;
        }
        v49 = v30->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v47);
        v50 = System_Char__ToString((uint16_t)v93, 0LL);
        if ( v50 )
          v51 = (Il2CppObject *)v50;
        else
          v51 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v30,
          v49 - 1,
          v51,
          (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo, v35);
            v36 = System_Char__ToString((uint16_t)v93, 0LL);
            v31 = System_String__Concat_62401220(v31, v36, 0LL);
            if ( v32 < stringLength )
            {
              while ( 1 )
              {
                v37 = v32 + 1;
                v93[0] = System_String__get_Chars(v4, v32, 0LL);
                if ( v93[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo, v38);
                v39 = System_Char__ToString((uint16_t)v93, 0LL);
                v31 = System_String__Concat_62401220(v31, v39, 0LL);
                ++v32;
                if ( stringLength == v37 )
                {
                  v32 = stringLength;
                  goto LABEL_61;
                }
              }
              ++v32;
            }
LABEL_61:
            v57 = (System_String_o *)StringLiteral_367/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo, v35);
            v57 = System_Char__ToString((uint16_t)v93, 0LL);
          }
          v31 = System_String__Concat_62401220(v31, v57, 0LL);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v31, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v30 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v52 = v30->fields._items;
          v53 = Method_System_Collections_Generic_List_string__Add__;
          ++v30->fields._version;
          if ( !v52 )
            goto LABEL_72;
          v54 = v30->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v31,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v30->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v31, v40, v41, v42, v43, v44, v45);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v56);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v93, 0LL);
          v64 = v30->fields._items;
          v65 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v30->fields._version;
          if ( !v64 )
            goto LABEL_72;
          v66 = v30->fields._size;
          if ( (unsigned int)v66 >= v64->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)data,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v64->obj.klass + v66;
            v30->fields._size = v66 + 1;
            v67[4] = (Il2CppClass *)data;
            sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)data, v58, v59, v60, v61, v62, v63);
          }
          v31 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v68 = v30->fields._size;
        v47 = (unsigned int)(v68 - 1);
        if ( v68 < 1 )
          goto LABEL_51;
        v69 = System_Collections_Generic_List_object___get_Item(
                v30,
                v47,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v69, (System_String_o *)StringLiteral_1849/*"="*/, 0LL) )
        {
          v70 = System_Collections_Generic_List_object___get_Item(
                  v30,
                  v30->fields._size - 1,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v70, (System_String_o *)StringLiteral_863/*","*/, 0LL) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v32 >= stringLength )
      {
        v81 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v81 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v31, v81, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v30 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v30,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1BCAA3C(this, data);
  }
  if ( !v30 )
    goto LABEL_72;
  v88 = v30->fields._items;
  v89 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !v88 )
    goto LABEL_72;
  v90 = v30->fields._size;
  if ( (unsigned int)v90 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)v31,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v30->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v31, v82, v83, v84, v85, v86, v87);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v30,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  System_Array_o *v51; // x0
  System_Char_array *v52; // x21
  System_String_o *v53; // x0
  Il2CppObject *v54; // x1
  System_String_array *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_object__o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_int__o *v67; // x20
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  System_String_o **v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x8
  __int64 v75; // x26
  System_String_o **m_Items; // x9
  __int64 v77; // x29
  __int64 v78; // x24
  System_String_o **v79; // x27
  System_String_o *v80; // x28
  System_String_o *v81; // x25
  System_String_o *v82; // x0
  System_String_o *v83; // x28
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  _QWORD *v90; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  _QWORD *v100; // x9
  struct System_Object_array *v101; // x8
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct System_Int32_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  int64_t v120; // x1
  Il2CppClass **v121; // x0
  struct System_Int32_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  int32_t v125; // w26
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_String_o *v142; // x8
  _QWORD *v143; // x9
  struct System_Object_array *v144; // x8
  __int64 v145; // x10
  Il2CppClass **v146; // x0
  struct System_Int32_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  _QWORD *v150; // x9
  struct System_Object_array *v151; // x8
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  _QWORD *v160; // x9
  struct System_Object_array *v161; // x8
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  struct System_Int32_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  struct System_Int32_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  _QWORD *v194; // x9
  struct System_Object_array *v195; // x8
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  struct System_Int32_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  struct System_String_array *v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  struct System_String_array *v208; // x0
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  struct System_Int32_array *v215; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v223; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v229; // 0:w1.4

  if ( (byte_4B17C4D & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, scriptData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v21, v22);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v23,
      v24);
    sub_1BCA7E0(&StringLiteral_396/*"#"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1123/*"//"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_20256/*"i"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_21190/*"k"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22916/*"q"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_508/*"%"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_530/*"&"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24093/*"talkStart"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_20447/*"image"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_16175/*"[r]"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_24089/*"talkName"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v49, v50);
    byte_4B17C4D = 1;
  }
  v51 = (System_Array_o *)sub_1BCA888(char___TypeInfo, 5LL);
  v229.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v52 = (System_Char_array *)v51;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v51, v229, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v55 = System_String__Split_62423612(scriptData, v52, 1, 0LL);
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v59;
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v60,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v63;
  v67 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v64,
                                                    v65,
                                                    v66);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v67;
  lastMessageIndex = -1;
  if ( !v55 )
    goto LABEL_144;
  v74 = *(_QWORD *)&v55->max_length;
  if ( (int)v74 < 1 )
  {
    LODWORD(v75) = 0;
    goto LABEL_122;
  }
  v75 = 0LL;
  m_Items = v55->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v77 = 0LL;
    v78 = (v75 << 32) + 0x100000000LL;
    v79 = &m_Items[v75];
    while ( 1 )
    {
      if ( (int)v75 + (int)v77 >= (unsigned int)v74 )
        sub_1BCAA44(v53, v54);
      v80 = v79[v77];
      if ( !v80 )
        goto LABEL_144;
      if ( v80->fields._stringLength < 1 )
        goto LABEL_53;
      v81 = (System_String_o *)StringLiteral_1/*""*/;
      v53 = (System_String_o *)System_String__StartsWith(v79[v77], (System_String_o *)StringLiteral_1123/*"//"*/, 0LL);
      if ( ((unsigned __int8)v53 & 1) != 0 )
        goto LABEL_53;
      v53 = (System_String_o *)System_String__StartsWith(v80, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v53 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v80, this->fields.codeTalkString, 0LL) )
        break;
      v53 = (System_String_o *)System_String__StartsWith(v80, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v53 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v71,
          v80,
          v75 + v77 + 1,
          v223);
LABEL_18:
        v53 = (System_String_o *)System_String__op_Inequality(v81, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v53 & 1) != 0 )
        {
          v53 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v53 & 1) != 0 )
          {
            if ( !v59 )
              goto LABEL_144;
            v90 = Method_System_Collections_Generic_List_string__Add__;
            v54 = (Il2CppObject *)StringLiteral_24093/*"talkStart"*/;
            items = v59->fields._items;
            ++v59->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v59->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v59,
                v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = &items->obj.klass + size;
              v59->fields._size = size + 1;
              v93[4] = (Il2CppClass *)v54;
              sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v54, v84, v85, v86, v87, v88, v89);
            }
            if ( !v63 )
              goto LABEL_144;
            v100 = Method_System_Collections_Generic_List_string__Add__;
            v54 = (Il2CppObject *)StringLiteral_1/*""*/;
            v101 = v63->fields._items;
            ++v63->fields._version;
            if ( !v101 )
              goto LABEL_144;
            v102 = v63->fields._size;
            if ( (unsigned int)v102 >= v101->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v63,
                v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &v101->obj.klass + v102;
              v63->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v54;
              sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v54, v94, v95, v96, v97, v98, v99);
            }
            if ( !v67 )
              goto LABEL_144;
            v104 = v67->fields._items;
            v105 = Method_System_Collections_Generic_List_int__Add__;
            ++v67->fields._version;
            if ( !v104 )
              goto LABEL_144;
            v106 = v67->fields._size;
            if ( (unsigned int)v106 >= v104->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v67,
                v75 + v77 + 1,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v67->fields._size = v106 + 1;
              v104->m_Items[v106 + 1] = v75 + v77 + 1;
            }
          }
          else if ( !v59 )
          {
            goto LABEL_144;
          }
          v107 = v59->fields._items;
          v108 = Method_System_Collections_Generic_List_string__Add__;
          ++v59->fields._version;
          if ( !v107 )
            goto LABEL_144;
          v109 = v59->fields._size;
          if ( (unsigned int)v109 >= v107->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              0LL,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = &v107->obj.klass + v109;
            v59->fields._size = v109 + 1;
            v110[4] = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 4), 0LL, v84, v85, v86, v87, v88, v89);
          }
          if ( !v63 )
            goto LABEL_144;
          lastMessageIndex = v63->fields._size;
          if ( !v81 )
            goto LABEL_144;
          v53 = System_String__Replace_62420848(
                  v81,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_16175/*"[r]"*/,
                  0LL);
          v117 = v63->fields._items;
          v118 = Method_System_Collections_Generic_List_string__Add__;
          ++v63->fields._version;
          if ( !v117 )
            goto LABEL_144;
          v119 = v63->fields._size;
          v120 = (int64_t)v53;
          if ( (unsigned int)v119 >= v117->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              (Il2CppObject *)v53,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
          }
          else
          {
            v121 = &v117->obj.klass + v119;
            v63->fields._size = v119 + 1;
            v121[4] = (Il2CppClass *)v120;
            sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 4), v120, v111, v112, v113, v114, v115, v116);
          }
          if ( !v67 )
            goto LABEL_144;
          v122 = v67->fields._items;
          v123 = Method_System_Collections_Generic_List_int__Add__;
          ++v67->fields._version;
          if ( !v122 )
            goto LABEL_144;
          v124 = v67->fields._size;
          if ( (unsigned int)v124 >= v122->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v67,
              v75 + v77 + 1,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
          }
          else
          {
            v67->fields._size = v124 + 1;
            v122->m_Items[v124 + 1] = v75 + v77 + 1;
          }
        }
      }
LABEL_53:
      v74 = *(_QWORD *)&v55->max_length;
      ++v77;
      v78 += 0x100000000LL;
      if ( v75 + v77 >= (int)v74 )
      {
        LODWORD(v75) = v75 + v77;
        goto LABEL_122;
      }
    }
    v82 = v80;
    v83 = (System_String_o *)StringLiteral_24089/*"talkName"*/;
    v81 = System_String__Substring(v82, 1, 0LL);
    if ( !v83 )
      goto LABEL_18;
    v125 = v75 + v77 + 1;
    v53 = (System_String_o *)System_String__op_Equality(v83, (System_String_o *)StringLiteral_21190/*"k"*/, 0LL);
    if ( ((unsigned __int8)v53 & 1) == 0 )
    {
      v53 = (System_String_o *)System_String__op_Equality(v83, (System_String_o *)StringLiteral_22916/*"q"*/, 0LL);
      if ( ((unsigned __int8)v53 & 1) == 0 )
      {
        if ( System_String__op_Equality(v83, (System_String_o *)StringLiteral_24089/*"talkName"*/, 0LL) )
        {
          v53 = (System_String_o *)System_String__op_Equality(v83, (System_String_o *)StringLiteral_24089/*"talkName"*/, 0LL);
          v142 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v53 & 1) != 0 )
            v142 = v81;
          a = v142;
        }
        else if ( System_String__op_Equality(v83, (System_String_o *)StringLiteral_20256/*"i"*/, 0LL)
               || System_String__op_Equality(v83, (System_String_o *)StringLiteral_20447/*"image"*/, 0LL)
               || System_String__op_Equality(v83, (System_String_o *)StringLiteral_21335/*"line"*/, 0LL)
               || System_String__StartsWith(v83, (System_String_o *)StringLiteral_508/*"%"*/, 0LL)
               || System_String__StartsWith(v83, (System_String_o *)StringLiteral_530/*"&"*/, 0LL)
               || (v53 = (System_String_o *)System_String__StartsWith(v83, (System_String_o *)StringLiteral_396/*"#"*/, 0LL),
                   ((unsigned __int8)v53 & 1) != 0) )
        {
          v53 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v53 & 1) != 0 )
          {
            if ( !v59 )
              goto LABEL_144;
            v150 = Method_System_Collections_Generic_List_string__Add__;
            v54 = (Il2CppObject *)StringLiteral_24093/*"talkStart"*/;
            v151 = v59->fields._items;
            ++v59->fields._version;
            if ( !v151 )
              goto LABEL_144;
            v152 = v59->fields._size;
            if ( (unsigned int)v152 >= v151->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v59,
                v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
            }
            else
            {
              v153 = &v151->obj.klass + v152;
              v59->fields._size = v152 + 1;
              v153[4] = (Il2CppClass *)v54;
              sub_1BCA784((PartyOrganizationUtility_o *)(v153 + 4), (int64_t)v54, v126, v127, v128, v129, v130, v131);
            }
            if ( !v63 )
              goto LABEL_144;
            v160 = Method_System_Collections_Generic_List_string__Add__;
            v54 = (Il2CppObject *)StringLiteral_1/*""*/;
            v161 = v63->fields._items;
            ++v63->fields._version;
            if ( !v161 )
              goto LABEL_144;
            v162 = v63->fields._size;
            if ( (unsigned int)v162 >= v161->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v63,
                v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
            }
            else
            {
              v163 = &v161->obj.klass + v162;
              v63->fields._size = v162 + 1;
              v163[4] = (Il2CppClass *)v54;
              sub_1BCA784((PartyOrganizationUtility_o *)(v163 + 4), (int64_t)v54, v154, v155, v156, v157, v158, v159);
            }
            if ( !v67 )
              goto LABEL_144;
            v164 = v67->fields._items;
            v165 = Method_System_Collections_Generic_List_int__Add__;
            ++v67->fields._version;
            if ( !v164 )
              goto LABEL_144;
            v166 = v67->fields._size;
            if ( (unsigned int)v166 >= v164->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v67,
                v125,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
            }
            else
            {
              v67->fields._size = v166 + 1;
              v164->m_Items[v166 + 1] = v125;
            }
          }
          else if ( !v63 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v63->fields._size;
        }
LABEL_104:
        if ( v59 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( (lastMessageIndex & 0x80000000) != 0 )
      goto LABEL_104;
    if ( !v59 )
      goto LABEL_144;
    v132 = v59->fields._items;
    v133 = Method_System_Collections_Generic_List_string__Add__;
    ++v59->fields._version;
    if ( !v132 )
      goto LABEL_144;
    v134 = v59->fields._size;
    if ( (unsigned int)v134 >= v132->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v59,
        0LL,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
    }
    else
    {
      v135 = &v132->obj.klass + v134;
      v59->fields._size = v134 + 1;
      v135[4] = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 4), 0LL, v126, v127, v128, v129, v130, v131);
    }
    if ( !v63 )
      goto LABEL_144;
    v143 = Method_System_Collections_Generic_List_string__Add__;
    v54 = (Il2CppObject *)StringLiteral_16175/*"[r]"*/;
    v144 = v63->fields._items;
    ++v63->fields._version;
    if ( !v144 )
      goto LABEL_144;
    v145 = v63->fields._size;
    if ( (unsigned int)v145 >= v144->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v63,
        v54,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
    }
    else
    {
      v146 = &v144->obj.klass + v145;
      v63->fields._size = v145 + 1;
      v146[4] = (Il2CppClass *)v54;
      sub_1BCA784((PartyOrganizationUtility_o *)(v146 + 4), (int64_t)v54, v136, v137, v138, v139, v140, v141);
    }
    if ( !v67 )
      goto LABEL_144;
    v147 = v67->fields._items;
    v148 = Method_System_Collections_Generic_List_int__Add__;
    ++v67->fields._version;
    if ( !v147 )
      goto LABEL_144;
    v149 = v67->fields._size;
    if ( (unsigned int)v149 >= v147->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v67,
        v125,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
    }
    else
    {
      v67->fields._size = v149 + 1;
      v147->m_Items[v149 + 1] = v125;
    }
    lastMessageIndex = -1;
LABEL_105:
    v167 = v59->fields._items;
    v168 = Method_System_Collections_Generic_List_string__Add__;
    ++v59->fields._version;
    if ( !v167 )
      goto LABEL_144;
    v169 = v59->fields._size;
    if ( (unsigned int)v169 >= v167->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v59,
        (Il2CppObject *)v83,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    }
    else
    {
      v170 = &v167->obj.klass + v169;
      v59->fields._size = v169 + 1;
      v170[4] = (Il2CppClass *)v83;
      sub_1BCA784((PartyOrganizationUtility_o *)(v170 + 4), (int64_t)v83, v126, v127, v128, v129, v130, v131);
    }
    if ( !v63 )
      goto LABEL_144;
    v177 = v63->fields._items;
    v178 = Method_System_Collections_Generic_List_string__Add__;
    ++v63->fields._version;
    if ( !v177 )
      goto LABEL_144;
    v179 = v63->fields._size;
    if ( (unsigned int)v179 >= v177->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v63,
        (Il2CppObject *)v81,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    }
    else
    {
      v180 = &v177->obj.klass + v179;
      v63->fields._size = v179 + 1;
      v180[4] = (Il2CppClass *)v81;
      sub_1BCA784((PartyOrganizationUtility_o *)(v180 + 4), (int64_t)v81, v171, v172, v173, v174, v175, v176);
    }
    if ( !v67 )
      goto LABEL_144;
    v181 = v67->fields._items;
    v182 = Method_System_Collections_Generic_List_int__Add__;
    ++v67->fields._version;
    if ( !v181 )
      goto LABEL_144;
    v183 = v67->fields._size;
    if ( (unsigned int)v183 >= v181->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v67,
        v125,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    }
    else
    {
      v67->fields._size = v183 + 1;
      v181->m_Items[v183 + 1] = v125;
    }
    v74 = *(_QWORD *)&v55->max_length;
    m_Items = v55->m_Items;
    v75 = v78 >> 32;
  }
  while ( v78 >> 32 < (int)v74 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v59 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v59 )
    goto LABEL_144;
  v184 = v59->fields._items;
  v185 = Method_System_Collections_Generic_List_string__Add__;
  ++v59->fields._version;
  if ( !v184 )
    goto LABEL_144;
  v186 = v59->fields._size;
  if ( (unsigned int)v186 >= v184->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v59,
      0LL,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
  }
  else
  {
    v187 = &v184->obj.klass + v186;
    v59->fields._size = v186 + 1;
    v187[4] = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)(v187 + 4), 0LL, v68, v69, v70, (BattleSetupInfo_o *)v71, v72, v73);
  }
  if ( !v63 )
    goto LABEL_144;
  v194 = Method_System_Collections_Generic_List_string__Add__;
  v54 = (Il2CppObject *)StringLiteral_16175/*"[r]"*/;
  v195 = v63->fields._items;
  ++v63->fields._version;
  if ( !v195 )
    goto LABEL_144;
  v196 = v63->fields._size;
  if ( (unsigned int)v196 >= v195->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v54,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
  }
  else
  {
    v197 = &v195->obj.klass + v196;
    v63->fields._size = v196 + 1;
    v197[4] = (Il2CppClass *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)(v197 + 4), (int64_t)v54, v188, v189, v190, v191, v192, v193);
  }
  if ( !v67 )
    goto LABEL_144;
  v198 = v67->fields._items;
  v199 = Method_System_Collections_Generic_List_int__Add__;
  ++v67->fields._version;
  if ( !v198 )
    goto LABEL_144;
  v200 = v67->fields._size;
  if ( (unsigned int)v200 >= v198->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v67,
      v75,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
  }
  else
  {
    v67->fields._size = v200 + 1;
    v198->m_Items[v200 + 1] = v75;
  }
LABEL_140:
  v201 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v59,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v201;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.executeTagList,
    (int64_t)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  if ( !v63
    || (v208 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v63,
                                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v208,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.executeDataList,
          (int64_t)v208,
          v209,
          v210,
          v211,
          v212,
          v213,
          v214),
        !v67)
    || (v215 = System_Collections_Generic_List_int___ToArray(
                 v67,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v215,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.executeLineList,
          (int64_t)v215,
          v216,
          v217,
          v218,
          v219,
          v220,
          v221),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1BCAA3C(v53, v54);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  int32_t stringLength; // w22
  System_String_o *v80; // x27
  int32_t v81; // w29
  int32_t v82; // w1
  uint16_t Chars; // w0
  __int64 v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v94; // x8
  uint16_t v95; // w28
  System_String_o *v96; // x0
  int v97; // w24
  __int64 v98; // x1
  System_String_o *v99; // x0
  System_Collections_Generic_List_object__o *v100; // x28
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  CommonMessageManager_o *v110; // x1
  Il2CppClass **v111; // x0
  __int64 v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  System_String_o *v115; // x27
  System_String_o *v116; // x28
  int v117; // w24
  int32_t v118; // w1
  uint16_t v119; // w0
  __int64 v120; // x1
  System_String_o *v122; // x0
  int v123; // w26
  __int64 v124; // x1
  System_String_o *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 *v132; // x8
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  __int64 *v137; // x8
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  __int64 v141; // x8
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_Collections_Generic_List_string__o **v148; // x27
  __int64 v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x8
  __int64 v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x8
  PartyOrganizationUtility_o *v157; // x0
  __int64 v158; // x8
  __int64 *v159; // x8
  __int64 v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  __int64 v163; // x8
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  __int64 v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  __int64 v173; // x8
  System_Collections_Generic_List_string__o *v174; // x28
  struct System_String_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  int32_t v182; // w8
  __int64 v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x8
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  __int64 v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x8
  _QWORD *v197; // x9
  __int64 v198; // x10
  __int64 v199; // x8
  __int64 v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x8
  int32_t v204; // w8
  System_String_o *v205; // x24
  System_String_o *v206; // x1
  System_String_o *v207; // x1
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  __int64 v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  __int64 v217; // x8
  System_Collections_Generic_List_object__o *v218; // x21
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  struct System_Object_array *v225; // x8
  _QWORD *v226; // x9
  __int64 v227; // x10
  CommonMessageManager_o *v228; // x1
  Il2CppClass **v229; // x0
  __int64 v230; // x8
  _QWORD *v231; // x9
  __int64 v232; // x10
  CommonMessageManager_o *v233; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v237; // [xsp+20h] [xbp-70h]
  __int16 v238[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v233 = this;
  v237 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4B17C4E & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, tagDataList, scriptDataList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_18183/*"clear"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_19719/*"font"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_19531/*"f"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23672/*"speed"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21190/*"k"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22916/*"q"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_24846/*"voiceStop"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17347/*"bgm"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17349/*"bgmStop"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_24994/*"wt"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_23304/*"seStop"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_22680/*"page"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_21174/*"jingle"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_23298/*"se"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_21252/*"l"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_24840/*"voice"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_24179/*"time "*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_19724/*"fontSize"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_23302/*"seLoop"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_367/*"\""*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_16175/*"[r]"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_23237/*"s"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_17335/*"betweenHeight"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_21175/*"jingleStop"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_23645/*"soundStopAll"*/, v75, v76);
    this = (CommonMessageManager_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v77, v78);
    byte_4B17C4E = 1;
  }
  v238[0] = 0;
  if ( !analysData )
    goto LABEL_234;
  stringLength = analysData->fields._stringLength;
  v80 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v81 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v82 = v81++;
        Chars = System_String__get_Chars(analysData, v82, 0LL);
        v238[0] = Chars;
        if ( Chars == 91 )
          break;
        v95 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v84);
        v96 = System_Char__ToString((uint16_t)v238, 0LL);
        v80 = System_String__Concat_62401220(v80, v96, 0LL);
        if ( v95 == 34 )
        {
          if ( v81 < stringLength )
          {
            while ( 1 )
            {
              v97 = v81 + 1;
              v238[0] = System_String__get_Chars(analysData, v81, 0LL);
              if ( v238[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo, v98);
              v99 = System_Char__ToString((uint16_t)v238, 0LL);
              v80 = System_String__Concat_62401220(v80, v99, 0LL);
              ++v81;
              if ( stringLength == v97 )
              {
                v81 = stringLength;
                goto LABEL_86;
              }
            }
            ++v81;
          }
LABEL_86:
          v80 = System_String__Concat_62401220(v80, (System_String_o *)StringLiteral_367/*"\""*/, 0LL);
        }
        if ( v81 >= stringLength )
        {
          v207 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v80, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v237;
        if ( !*v237 )
          goto LABEL_234;
        v91 = *(_QWORD *)&this->fields.m_CachedPtr;
        v92 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v91 )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v91 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0LL,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = v91 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v94 + 32) = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 32), 0LL, v85, v86, v87, v88, v89, v90);
        }
        if ( !v80 )
          goto LABEL_234;
        v100 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_62420848(
                                           v80,
                                           v233->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16175/*"[r]"*/,
                                           0LL);
        if ( !v100 )
          goto LABEL_234;
        items = v100->fields._items;
        v108 = Method_System_Collections_Generic_List_string__Add__;
        ++v100->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v100->fields._size;
        v110 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v100,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v111 = &items->obj.klass + size;
          v100->fields._size = size + 1;
          v111[4] = (Il2CppClass *)v110;
          sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v110, v101, v102, v103, v104, v105, v106);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v112 = *(_QWORD *)&this->fields.m_CachedPtr;
        v113 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v112 )
          goto LABEL_234;
        v114 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v114 >= *(_DWORD *)(v112 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v114 + 1;
          *(_DWORD *)(v112 + 4 * v114 + 32) = line;
        }
      }
      v115 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v81 >= stringLength )
      {
        v116 = 0LL;
      }
      else
      {
        v116 = 0LL;
        v117 = 0;
        v118 = v81;
        do
        {
          v81 = v118 + 1;
          v119 = System_String__get_Chars(analysData, v118, 0LL);
          v238[0] = v119;
          if ( v119 == 91 )
          {
            ++v117;
          }
          else if ( v119 == 93 )
          {
            if ( --v117 < 0 )
              break;
          }
          else if ( v119 == 32 && v116 == 0LL )
          {
            v116 = v115;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v120);
          v122 = System_Char__ToString((uint16_t)v238, 0LL);
          v115 = System_String__Concat_62401220(v115, v122, 0LL);
          if ( v238[0] == 34 )
          {
            if ( v81 < stringLength )
            {
              while ( 1 )
              {
                v123 = v81 + 1;
                v238[0] = System_String__get_Chars(analysData, v81, 0LL);
                if ( v238[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo, v124);
                v125 = System_Char__ToString((uint16_t)v238, 0LL);
                v115 = System_String__Concat_62401220(v115, v125, 0LL);
                ++v81;
                if ( stringLength == v123 )
                {
                  v81 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v81;
            }
LABEL_56:
            v115 = System_String__Concat_62401220(v115, (System_String_o *)StringLiteral_367/*"\""*/, 0LL);
          }
          v118 = v81;
        }
        while ( v81 < stringLength );
      }
      if ( !v116 )
        v116 = v115;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v116, 0LL);
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
                v159 = &StringLiteral_22916/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v116, (System_String_o *)*v159, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v237;
                  if ( !*v237 )
                    goto LABEL_234;
                  v160 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v161 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v160 )
                    goto LABEL_234;
                  v162 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v162 >= *(_DWORD *)(v160 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0LL,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v163 = v160 + 8 * v162;
                    LODWORD(this->fields.m_CancellationTokenSource) = v162 + 1;
                    *(_QWORD *)(v163 + 32) = 0LL;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v163 + 32), 0LL, v126, v127, v128, v129, v130, v131);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16175/*"[r]"*/;
                  v183 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v184 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v183 )
                    goto LABEL_234;
                  v185 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v185 >= *(_DWORD *)(v183 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v186 = v183 + 8 * v185;
                    LODWORD(this->fields.m_CancellationTokenSource) = v185 + 1;
                    *(_QWORD *)(v186 + 32) = tagDataList;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v186 + 32),
                      (int64_t)tagDataList,
                      v164,
                      v165,
                      v166,
                      v167,
                      v168,
                      v169);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v193 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v194 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v193 )
                    goto LABEL_234;
                  v195 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v195 >= *(_DWORD *)(v193 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v195 + 1;
                    *(_DWORD *)(v193 + 4 * v195 + 32) = line;
                  }
                  this = *v237;
                  if ( !*v237 )
                    goto LABEL_234;
                  v196 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v197 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v196 )
                    goto LABEL_234;
                  v198 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v198 >= *(_DWORD *)(v196 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v116,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v199 = v196 + 8 * v198;
                    LODWORD(this->fields.m_CancellationTokenSource) = v198 + 1;
                    *(_QWORD *)(v199 + 32) = v116;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v199 + 32),
                      (int64_t)v116,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191,
                      v192);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v200 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v201 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v200 )
                    goto LABEL_234;
                  v202 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v202 < *(_DWORD *)(v200 + 24) )
                  {
                    v203 = v200 + 8 * v202;
                    LODWORD(this->fields.m_CancellationTokenSource) = v202 + 1;
                    *(_QWORD *)(v203 + 32) = tagDataList;
                    v157 = (PartyOrganizationUtility_o *)(v203 + 32);
                    goto LABEL_168;
                  }
                  v158 = v201[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v132 = &StringLiteral_23237/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v159 = &StringLiteral_21190/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v132 = &StringLiteral_21174/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v132 = &StringLiteral_24846/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v132 = &StringLiteral_19531/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v132 = &StringLiteral_21252/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v132 = &StringLiteral_24854/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v132 = &StringLiteral_17335/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v132 = &StringLiteral_19724/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v116 && !v116->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v137 = &StringLiteral_22680/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v132 = &StringLiteral_24840/*"voice"*/;
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
              v132 = &StringLiteral_19193/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v132 = &StringLiteral_23645/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v116, (System_String_o *)*v132, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v115 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v116->fields._stringLength + 1);
                v148 = (System_Collections_Generic_List_string__o **)(v115->fields._stringLength <= (int)tagDataList
                                                                    ? StringLiteral_1/*""*/
                                                                    : System_String__Substring(
                                                                        v115,
                                                                        (int32_t)tagDataList,
                                                                        0LL));
                this = *v237;
                if ( !*v237 )
                  goto LABEL_234;
                v149 = *(_QWORD *)&this->fields.m_CachedPtr;
                v150 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v149 )
                  goto LABEL_234;
                v151 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v116,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
                }
                else
                {
                  v152 = v149 + 8 * v151;
                  LODWORD(this->fields.m_CancellationTokenSource) = v151 + 1;
                  *(_QWORD *)(v152 + 32) = v116;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v152 + 32),
                    (int64_t)v116,
                    v126,
                    v127,
                    v128,
                    v129,
                    v130,
                    v131);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v153 = *(_QWORD *)&this->fields.m_CachedPtr;
                v154 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v153 )
                  goto LABEL_234;
                v155 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v155 < *(_DWORD *)(v153 + 24) )
                {
                  v156 = v153 + 8 * v155;
                  LODWORD(this->fields.m_CancellationTokenSource) = v155 + 1;
                  *(_QWORD *)(v156 + 32) = v148;
                  v157 = (PartyOrganizationUtility_o *)(v156 + 32);
                  tagDataList = v148;
LABEL_168:
                  sub_1BCA784(v157, (int64_t)tagDataList, v142, v143, v144, v145, v146, v147);
                  goto LABEL_171;
                }
                v158 = v154[4];
                tagDataList = v148;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v132 = &StringLiteral_23672/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v137 = &StringLiteral_18183/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v116, (System_String_o *)*v137, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v237;
                if ( !*v237 )
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
                    (Il2CppObject *)v116,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                }
                else
                {
                  v141 = v138 + 8 * v140;
                  LODWORD(this->fields.m_CancellationTokenSource) = v140 + 1;
                  *(_QWORD *)(v141 + 32) = v116;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v141 + 32),
                    (int64_t)v116,
                    v126,
                    v127,
                    v128,
                    v129,
                    v130,
                    v131);
                }
                if ( !v115 )
                  goto LABEL_234;
                v182 = v116->fields._stringLength;
                v174 = *scriptDataList;
                if ( v115->fields._stringLength <= v182 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v115, v182 + 1, 0LL);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v174 )
                  goto LABEL_234;
                v175 = v174->fields._items;
                v176 = Method_System_Collections_Generic_List_string__Add__;
                ++v174->fields._version;
                if ( !v175 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v132 = &StringLiteral_17347/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v132 = &StringLiteral_21175/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v132 = &StringLiteral_23298/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v132 = &StringLiteral_23302/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v116,
                                               (System_String_o *)StringLiteral_24994/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v237;
              if ( !*v237 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24854/*"wait"*/;
              v133 = *(_QWORD *)&this->fields.m_CachedPtr;
              v134 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v133 )
                goto LABEL_234;
              v135 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
              }
              else
              {
                v136 = v133 + 8 * v135;
                LODWORD(this->fields.m_CancellationTokenSource) = v135 + 1;
                *(_QWORD *)(v136 + 32) = tagDataList;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v136 + 32),
                  (int64_t)tagDataList,
                  v126,
                  v127,
                  v128,
                  v129,
                  v130,
                  v131);
              }
              if ( !v115 )
                goto LABEL_234;
              v204 = v116->fields._stringLength;
              v174 = *scriptDataList;
              v205 = (System_String_o *)StringLiteral_24179/*"time "*/;
              v206 = v115->fields._stringLength <= v204 + 1
                   ? (System_String_o *)StringLiteral_1209/*"0"*/
                   : System_String__Substring(v115, v204 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_62401220(v205, v206, 0LL);
              if ( !v174 )
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
            v132 = &StringLiteral_19719/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v132 = &StringLiteral_23304/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v132 = &StringLiteral_17349/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v237;
      if ( !*v237 )
        goto LABEL_234;
      v170 = *(_QWORD *)&this->fields.m_CachedPtr;
      v171 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v170 )
        goto LABEL_234;
      v172 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
      }
      else
      {
        v173 = v170 + 8 * v172;
        LODWORD(this->fields.m_CancellationTokenSource) = v172 + 1;
        *(_QWORD *)(v173 + 32) = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)(v173 + 32), 0LL, v126, v127, v128, v129, v130, v131);
      }
      v174 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_62412480(
                                         (System_String_o *)StringLiteral_15978/*"["*/,
                                         v115,
                                         (System_String_o *)StringLiteral_16236/*"]"*/,
                                         0LL);
      if ( !v174 )
        goto LABEL_234;
LABEL_164:
      v175 = v174->fields._items;
      v176 = Method_System_Collections_Generic_List_string__Add__;
      ++v174->fields._version;
      if ( !v175 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v177 = v174->fields._size;
      if ( (unsigned int)v177 < v175->max_length )
      {
        v178 = &v175->obj.klass + v177;
        v174->fields._size = v177 + 1;
        v178[4] = (Il2CppClass *)tagDataList;
        v157 = (PartyOrganizationUtility_o *)(v178 + 4);
        goto LABEL_168;
      }
      v158 = v176[4];
      this = (CommonMessageManager_o *)v174;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v158 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v179 = *(_QWORD *)&this->fields.m_CachedPtr;
      v180 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v179 )
        goto LABEL_234;
      v181 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v181 + 1;
        *(_DWORD *)(v179 + 4 * v181 + 32) = line;
      }
LABEL_176:
      v80 = (System_String_o *)StringLiteral_1/*""*/;
      v207 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v81 >= stringLength )
        goto LABEL_215;
    }
  }
  v207 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v80, v207, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v237;
      if ( *v237 )
      {
        v214 = *(_QWORD *)&this->fields.m_CachedPtr;
        v215 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v214 )
        {
          v216 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v216 >= *(_DWORD *)(v214 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
          }
          else
          {
            v217 = v214 + 8 * v216;
            LODWORD(this->fields.m_CancellationTokenSource) = v216 + 1;
            *(_QWORD *)(v217 + 32) = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)(v217 + 32), 0LL, v208, v209, v210, v211, v212, v213);
          }
          if ( v80 )
          {
            v218 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_62420848(
                                               v80,
                                               v233->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16175/*"[r]"*/,
                                               0LL);
            if ( v218 )
            {
              v225 = v218->fields._items;
              v226 = Method_System_Collections_Generic_List_string__Add__;
              ++v218->fields._version;
              if ( v225 )
              {
                v227 = v218->fields._size;
                v228 = this;
                if ( (unsigned int)v227 >= v225->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v218,
                    (Il2CppObject *)this,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
                }
                else
                {
                  v229 = &v225->obj.klass + v227;
                  v218->fields._size = v227 + 1;
                  v229[4] = (Il2CppClass *)v228;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v229 + 4),
                    (int64_t)v228,
                    v219,
                    v220,
                    v221,
                    v222,
                    v223,
                    v224);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v230 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v231 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v230 )
                  {
                    v232 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v232 >= *(_DWORD *)(v230 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v232 + 1;
                      *(_DWORD *)(v230 + 4 * v232 + 32) = line;
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
    sub_1BCAA3C(this, tagDataList);
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
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_String_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B17C4B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11598/*"SCRIPT_ACTION_CODE_COMMENT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11608/*"SCRIPT_ACTION_CODE_VOICE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11601/*"SCRIPT_ACTION_CODE_RETURN"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11607/*"SCRIPT_ACTION_CODE_TALK"*/, v10, v11);
    byte_4B17C4B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11598/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.codeCommentString, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.codeTalkString, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11608/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.codeVoiceString, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.codeReturnString, (int64_t)v33, v34, v35, v36, v37, v38, v39);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x22
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v67; // x24
  System_String_o *v68; // x25
  System_String_array *v69; // x23
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 *v75; // x8
  int64_t v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  PartyOrganizationUtility_o *v83; // x0
  int64_t v84; // x1
  System_String_o *v85; // x23
  uint32_t v86; // w0
  __int64 *v87; // x8
  const MethodInfo *v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  __int64 *v95; // x8
  int64_t *v96; // x8
  System_String_o *v97; // x1
  int32_t playSpeed; // w8
  int64_t *v99; // x8
  __int64 *v100; // x8
  __int64 v101; // x9
  float v102; // s0
  System_String_o *v103; // x1
  __int64 v104; // x9
  float v105; // s0
  __int64 v106; // x9
  System_String_o *v107; // x1
  ScriptMessageCommonManager_o *v108; // x0
  System_String_o *v109; // x2
  int64_t v110; // x1
  _BOOL4 isBusy; // w20
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t *v119; // x8
  int64_t v120; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4B17C50 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21639/*"messageOn"*/, method, v3);
    sub_1BCA7E0(&StringLiteral_18183/*"clear"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_19719/*"font"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22685/*"page3"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21637/*"messageOff"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22684/*"page2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19531/*"f"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_23672/*"speed"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_21190/*"k"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22916/*"q"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22699/*"parameter error"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_24248/*"touch2"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22680/*"page"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_22698/*"parameter be unnecessary"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_21631/*"message2"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_21252/*"l"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_19724/*"fontSize"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_24089/*"talkName"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_24246/*"touch"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_21632/*"message3"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_23237/*"s"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_17335/*"betweenHeight"*/, v56, v57);
    this = (CommonMessageManager_o *)sub_1BCA7E0(&StringLiteral_18185/*"clear2"*/, v58, v59);
    byte_4B17C50 = 1;
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
        sub_1BCAA3C(this, method);
      if ( (unsigned int)executeIndex >= executeLineList->max_length )
        goto LABEL_189;
      v67 = executeDataList->m_Items[executeIndex];
      v68 = executeTagList->m_Items[executeIndex];
      v69 = CommonMessageManager__AnalysParam(this, v67, v3);
      if ( !v68 && v5->fields.isBusy )
        goto LABEL_181;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v68, 0LL);
      if ( (unsigned int)this > 0x84F7AC69 )
      {
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v68,
                                                 (System_String_o *)StringLiteral_22916/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v95 = &StringLiteral_23237/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)*v95, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v69 )
                  goto LABEL_190;
                v101 = *(_QWORD *)&v69->max_length;
                if ( (_DWORD)v101 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v69->m_Items[0],
                                                     (System_String_o *)StringLiteral_915/*"-"*/,
                                                     0LL);
                  v102 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v69->max_length )
                      goto LABEL_189;
                    v102 = System_Single__Parse(v69->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v75 = &StringLiteral_22699/*"parameter error"*/;
                  if ( v101 )
                    goto LABEL_169;
                  v102 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v102, 0LL);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v87 = &StringLiteral_21252/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)*v87, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v69 )
                  goto LABEL_190;
                v104 = *(_QWORD *)&v69->max_length;
                if ( (_DWORD)v104 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v69->m_Items[0],
                                                     (System_String_o *)StringLiteral_915/*"-"*/,
                                                     0LL);
                  v105 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v69->max_length )
LABEL_189:
                      sub_1BCAA44(this, method);
                    v105 = System_Single__Parse(v69->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v75 = &StringLiteral_22699/*"parameter error"*/;
                  if ( v104 )
                    goto LABEL_169;
                  v105 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v105, 0LL);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v68,
                                                 (System_String_o *)StringLiteral_21190/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v69 )
                  goto LABEL_190;
                v75 = &StringLiteral_22698/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v69->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v96 = &StringLiteral_24246/*"touch"*/;
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
              v100 = &StringLiteral_19724/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v100 = &StringLiteral_19531/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v68,
                                               (System_String_o *)StringLiteral_24854/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v69 )
                goto LABEL_190;
              if ( (int)v69->max_length < 1 )
              {
                v75 = &StringLiteral_22699/*"parameter error"*/;
LABEL_169:
                if ( *v75 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v84 = (int64_t)v69->m_Items[0];
              *p_waitType = (System_String_o *)v84;
LABEL_151:
              v83 = (PartyOrganizationUtility_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v87 = &StringLiteral_17335/*"betweenHeight"*/;
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
                                               v68,
                                               (System_String_o *)StringLiteral_22680/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v69 )
                goto LABEL_190;
              v75 = &StringLiteral_22698/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v69->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v96 = &StringLiteral_22680/*"page"*/;
LABEL_150:
              v84 = *v96;
              v5->fields.waitType = (struct System_String_o *)*v96;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v68,
                                               (System_String_o *)StringLiteral_21637/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v69 )
                goto LABEL_190;
              v75 = &StringLiteral_22699/*"parameter error"*/;
              if ( *(_QWORD *)&v69->max_length )
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
          this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)StringLiteral_19193/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v69 )
              goto LABEL_190;
            v75 = &StringLiteral_22698/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v69->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v95 = &StringLiteral_23672/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v100 = &StringLiteral_19719/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)*v100, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v69 )
              goto LABEL_190;
            v106 = *(_QWORD *)&v69->max_length;
            if ( (_DWORD)v106 == 1 )
            {
              v107 = v69->m_Items[0];
              v108 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v106 >= 3 )
            {
              v107 = v69->m_Items[0];
              v109 = v69->m_Items[2];
              v108 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v75 = &StringLiteral_22699/*"parameter error"*/;
              if ( v106 )
                goto LABEL_169;
              v108 = (ScriptMessageCommonManager_o *)v5;
              v107 = 0LL;
LABEL_145:
              v109 = 0LL;
            }
            ScriptMessageCommonManager__SetFontSize(v108, v107, v109, 0LL);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)StringLiteral_18183/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v69 )
              goto LABEL_190;
            v75 = &StringLiteral_22698/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v69->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v96 = &StringLiteral_18183/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)StringLiteral_24089/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v83 = (PartyOrganizationUtility_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v67;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v68, (System_String_o *)StringLiteral_21639/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v69 )
            goto LABEL_190;
          v75 = &StringLiteral_22699/*"parameter error"*/;
          if ( *(_QWORD *)&v69->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v76 = StringLiteral_21627/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21627/*"message"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.waitType, v76, v77, v78, v79, v80, v81, v82);
          v83 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
          v84 = 0LL;
          v5->fields.waitMessage = 0LL;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v68 )
      {
        v5->fields.state = 4;
        v110 = StringLiteral_21627/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21627/*"message"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.waitType, v110, (int64_t)v3, v70, v71, v72, v73, v74);
        v5->fields.waitMessage = v67;
        v83 = (PartyOrganizationUtility_o *)&v5->fields.waitMessage;
LABEL_155:
        v84 = (int64_t)v67;
LABEL_156:
        sub_1BCA784(v83, v84, (int64_t)v3, v70, v71, v72, v73, v74);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v85 = *p_waitType;
    v86 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0LL);
    if ( v86 > 0x698989D8 )
      break;
    if ( v86 > 0xD841B5E )
    {
      if ( v86 != 619841764 )
      {
        if ( v86 != 1550717474 )
        {
          if ( v86 == 1770621400 && System_String__op_Equality(v85, (System_String_o *)StringLiteral_24246/*"touch"*/, 0LL) )
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
            v119 = &StringLiteral_24248/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_18183/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v99 = &StringLiteral_18185/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_21627/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v99 = &StringLiteral_21631/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v88);
      v103 = *p_waitMessage;
      if ( !*p_waitMessage )
        v103 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v103, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v86 == 256629 )
    {
      if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_21632/*"message3"*/, 0LL) || v5->fields.isScroll )
        goto LABEL_173;
      v97 = *p_waitMessage;
      if ( !*p_waitMessage )
        v97 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v97, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0LL);
      goto LABEL_115;
    }
    if ( v86 != 226761566
      || !System_String__op_Equality(v85, (System_String_o *)StringLiteral_24248/*"touch2"*/, 0LL)
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
  if ( v86 <= 0x91466F30 )
  {
    if ( v86 == -2124547466 )
    {
      if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_22680/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v99 = &StringLiteral_22684/*"page2"*/;
LABEL_120:
      v94 = *v99;
      *p_waitType = (System_String_o *)*v99;
LABEL_121:
      sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.waitType, v94, (int64_t)v88, v89, v90, v91, v92, v93);
      goto LABEL_171;
    }
    if ( v86 != -1857654992
      || !System_String__op_Equality(v85, (System_String_o *)StringLiteral_18185/*"clear2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
    goto LABEL_115;
  }
  if ( v86 == -336528737 )
  {
    if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_22685/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v86 == -16520990 )
  {
    if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_21631/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    v94 = StringLiteral_21632/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21632/*"message3"*/;
    goto LABEL_121;
  }
  if ( v86 == -353306356
    && System_String__op_Equality(v85, (System_String_o *)StringLiteral_22684/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v119 = &StringLiteral_22685/*"page3"*/;
LABEL_188:
    v120 = *v119;
    v5->fields.waitType = (struct System_String_o *)*v119;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.waitType, v120, v113, v114, v115, v116, v117, v118);
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
  sub_1BCA784(
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

  if ( (byte_4B17C4C & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, name, method);
    byte_4B17C4C = 1;
  }
  imageName = 0LL;
  charaName = 0LL;
  className = 0LL;
  charaIndex = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, name);
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
  sub_1BCA784(
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