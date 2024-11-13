void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int64_t v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x3
  struct ClassBoardSquareEntity_o *v57; // x8

  if ( (byte_4B19766 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSquareUser_TypeInfo, squareEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v12, v13);
    byte_4B19766 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                       squareEntity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)squareEntity, v31, v32, v33, v34, v35, v36);
  entity = this->fields.entity;
  v41 = sub_1BCAA2C(ClassBoardSquareUser_TypeInfo, v38, v39, v40);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  *(_QWORD *)(v41 + 24) = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)entity, v42, v43, v44, v45, v46, v47);
  this->fields.user = (struct IClassBoardSquareUser_o *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.user, v41, v48, v49, v50, v51, v52, v53);
  v57 = this->fields.entity;
  if ( !v57 )
    sub_1BCAA3C(v54, v55);
  ClassBoardSquareModel__InitializeItemList(this, v57->fields.itemIds, v57->fields.itemNums, v56);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B19767 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line, method);
    byte_4B19767 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v12 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1BCAA3C(lineList, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)line;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)line, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
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
  System_Collections_Generic_List_object__o *lineList; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *current; // x1
  __int64 **v41; // x21
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x23
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v61; // x23
  System_Func_object__bool__o *v62; // x24
  __int64 *v63; // x23
  __int64 v64; // x8
  __int64 v65; // x9
  IClassBoardLineModel_c **v66; // x10
  __int64 v67; // x0
  __int64 *v68; // x23
  __int64 v69; // x8
  System_Collections_Generic_List_object__o *v70; // x22
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x23
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  struct ClassBoardSquareEntity_o *v85; // x8
  System_Collections_Generic_List_T__o *v86; // x23
  System_Func_object__bool__o *v87; // x24
  _BOOL8 v88; // x0
  __int64 v89; // x1
  __int64 *v90; // x23
  __int64 v91; // x8
  System_Collections_Generic_List_object__o *v92; // x22
  __int64 v93; // x9
  IClassBoardLineModel_c **v94; // x10
  __int64 v95; // x0
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 *v110; // x22
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  __int64 v117; // x22
  __int64 v118; // x8
  __int64 v119; // x9
  IClassBoardSquareModel_c **v120; // x10
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 *v124; // x21
  __int64 v125; // x8
  __int64 v126; // x9
  int *v127; // x10
  __int64 v128; // x0
  Il2CppObject *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x1
  struct System_Object_array *items; // x8
  _QWORD *v138; // x9
  __int64 size; // x10
  Il2CppClass **v140; // x0
  __int64 v141; // x0
  __int64 v142; // x1
  __int64 *v143; // x22
  __int64 v144; // x8
  __int64 v145; // x9
  IClassBoardLineModel_c **v146; // x10
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x22
  __int64 v151; // x8
  __int64 v152; // x9
  IClassBoardSquareModel_c **v153; // x10
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x1
  __int64 *v157; // x21
  __int64 v158; // x8
  __int64 v159; // x9
  IClassBoardLineModel_c **v160; // x10
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x1
  __int64 v164; // x21
  __int64 v165; // x8
  IClassBoardSquareModel_c *v166; // x1
  __int64 v167; // x9
  IClassBoardSquareModel_c **v168; // x10
  __int64 v169; // x0
  __int64 v170; // x1
  __int64 v171; // x8
  __int64 v172; // x9
  IClassBoardSquareModel_c **v173; // x10
  System_Collections_Generic_List_Enumerator_object__o v174; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v175; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1976A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v9, v10);
    sub_1BCA7E0(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v13, v14);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v21, v22);
    sub_1BCA7E0(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v23, v24);
    sub_1BCA7E0(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v25, v26);
    byte_4B1976A = 1;
  }
  memset(&v175, 0, sizeof(v175));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1BCAA3C(0LL, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v174,
    lineList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v175 = v174;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v175,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v31 = sub_1BCAA2C(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v28, v29, v30);
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    if ( !v31 )
      sub_1BCAA3C(v32, v33);
    current = v175.fields._current;
    *(_QWORD *)(v31 + 16) = v175.fields._current;
    v41 = (__int64 **)(v31 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)current, v34, v35, v36, v37, v38, v39);
    v44 = *(__int64 **)(v31 + 16);
    if ( !v44 )
      sub_1BCAA3C(v42, v43);
    v45 = *v44;
    v46 = *(unsigned __int16 *)(*v44 + 302);
    if ( *(_WORD *)(*v44 + 302) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v47 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_12;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_12:
      v48 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      sub_1BCAA3C(0LL, v50);
    v52 = *(_QWORD *)v49;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_19;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_19:
      v55 = sub_1C1C7C0(v49, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1BCAA3C(v56, v57);
    if ( (_DWORD)v56 == entity->fields.id
      || (v61 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v62 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                 v57,
                                                 v58,
                                                 v59),
          System_Func_object__bool____ctor(
            v62,
            (Il2CppObject *)v31,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            0LL),
          v56 = BasicHelper__Any_object_(
                  v61,
                  (System_Func_T__bool__o *)v62,
                  (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v56 & 1) != 0) )
    {
      v63 = *v41;
      if ( !*v41 )
        sub_1BCAA3C(v56, v57);
      v64 = *v63;
      v65 = *(unsigned __int16 *)(*v63 + 302);
      if ( *(_WORD *)(*v63 + 302) )
      {
        v66 = (IClassBoardLineModel_c **)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *(v66 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v65;
          v66 += 2;
          if ( !v65 )
            goto LABEL_29;
        }
        v67 = v64 + 16LL * (*(_DWORD *)v66 + 1) + 312;
      }
      else
      {
LABEL_29:
        v67 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v74 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
      v76 = v74;
      if ( !v74 )
        sub_1BCAA3C(0LL, v75);
      v77 = *(_QWORD *)v74;
      v78 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v79 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v78;
          v79 += 4;
          if ( !v78 )
            goto LABEL_42;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_42:
        v80 = sub_1C1C7C0(v74, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
      v85 = this->fields.entity;
      if ( !v85 )
        sub_1BCAA3C(v81, v82);
      if ( (_DWORD)v81 != v85->fields.id )
      {
        v86 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v87 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                               v82,
                                               v83,
                                               v84);
        System_Func_object__bool____ctor(
          v87,
          (Il2CppObject *)v31,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          0LL);
        v88 = BasicHelper__Any_object_(
                v86,
                (System_Func_T__bool__o *)v87,
                (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v88 )
        {
          v90 = *v41;
          if ( !*v41 )
            sub_1BCAA3C(v88, v89);
          v91 = *v90;
          v92 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v93 = *(unsigned __int16 *)(*v90 + 302);
          if ( *(_WORD *)(*v90 + 302) )
          {
            v94 = (IClassBoardLineModel_c **)(*(_QWORD *)(v91 + 176) + 8LL);
            while ( *(v94 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v93;
              v94 += 2;
              if ( !v93 )
                goto LABEL_52;
            }
            v95 = v91 + 16LL * (*(_DWORD *)v94 + 1) + 312;
          }
          else
          {
LABEL_52:
            v95 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v129 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v95)(v90, *(_QWORD *)(v95 + 8));
          v136 = (int64_t)v129;
          if ( !v92 )
            sub_1BCAA3C(v129, v129);
          items = v92->fields._items;
          v138 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v92->fields._version;
          if ( !items )
            sub_1BCAA3C(v129, v129);
          size = v92->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v92,
              v129,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
          }
          else
          {
            v140 = &items->obj.klass + size;
            v92->fields._size = size + 1;
            v140[4] = (Il2CppClass *)v136;
            sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), v136, v130, v131, v132, v133, v134, v135);
          }
          v143 = *v41;
          if ( !*v41 )
            sub_1BCAA3C(v141, v142);
          v144 = *v143;
          v145 = *(unsigned __int16 *)(*v143 + 302);
          if ( *(_WORD *)(*v143 + 302) )
          {
            v146 = (IClassBoardLineModel_c **)(*(_QWORD *)(v144 + 176) + 8LL);
            while ( *(v146 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v145;
              v146 += 2;
              if ( !v145 )
                goto LABEL_91;
            }
            v147 = v144 + 16LL * (*(_DWORD *)v146 + 1) + 312;
          }
          else
          {
LABEL_91:
            v147 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v148 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v147)(v143, *(_QWORD *)(v147 + 8));
          v150 = v148;
          if ( !v148 )
            sub_1BCAA3C(0LL, v149);
          v151 = *(_QWORD *)v148;
          v152 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
          {
            v153 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v151 + 176) + 8LL);
            while ( *(v153 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v152;
              v153 += 2;
              if ( !v152 )
                goto LABEL_98;
            }
            v154 = v151 + 16LL * (*(_DWORD *)v153 + 5) + 312;
          }
          else
          {
LABEL_98:
            v154 = sub_1C1C7C0(v148, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v155 = (*(__int64 (__fastcall **)(__int64, _QWORD))v154)(v150, *(_QWORD *)(v154 + 8));
          if ( (v155 & 1) != 0 )
          {
            v157 = *v41;
            if ( !v157 )
              sub_1BCAA3C(v155, v156);
            v158 = *v157;
            v159 = *(unsigned __int16 *)(*v157 + 302);
            if ( *(_WORD *)(*v157 + 302) )
            {
              v160 = (IClassBoardLineModel_c **)(*(_QWORD *)(v158 + 176) + 8LL);
              while ( *(v160 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v159;
                v160 += 2;
                if ( !v159 )
                  goto LABEL_106;
              }
              v161 = v158 + 16LL * (*(_DWORD *)v160 + 1) + 312;
            }
            else
            {
LABEL_106:
              v161 = sub_1C1C7C0(v157, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v162 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v161)(v157, *(_QWORD *)(v161 + 8));
            v164 = v162;
            if ( !v162 )
              sub_1BCAA3C(0LL, v170);
            v171 = *(_QWORD *)v162;
            v166 = IClassBoardSquareModel_TypeInfo;
            v172 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v162 + 302LL) )
              goto LABEL_113;
            v173 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v171 + 176) + 8LL);
            while ( *(v173 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v172;
              v173 += 2;
              if ( !v172 )
                goto LABEL_113;
            }
            v169 = v171 + 16LL * (*(_DWORD *)v173 + 15) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v68 = *v41;
      if ( !*v41 )
        sub_1BCAA3C(v56, v57);
      v69 = *v68;
      v70 = (System_Collections_Generic_List_object__o *)*connectSquareList;
      v71 = *(unsigned __int16 *)(*v68 + 302);
      if ( *(_WORD *)(*v68 + 302) )
      {
        v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v72 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_35;
        }
        v73 = v69 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_35:
        v73 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v96 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v73)(v68, *(_QWORD *)(v73 + 8));
      v103 = (int64_t)v96;
      if ( !v70 )
        sub_1BCAA3C(v96, v96);
      v104 = v70->fields._items;
      v105 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v70->fields._version;
      if ( !v104 )
        sub_1BCAA3C(v96, v96);
      v106 = v70->fields._size;
      if ( (unsigned int)v106 >= v104->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v70,
          v96,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
      }
      else
      {
        v107 = &v104->obj.klass + v106;
        v70->fields._size = v106 + 1;
        v107[4] = (Il2CppClass *)v103;
        sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), v103, v97, v98, v99, v100, v101, v102);
      }
      v110 = *v41;
      if ( !*v41 )
        sub_1BCAA3C(v108, v109);
      v111 = *v110;
      v112 = *(unsigned __int16 *)(*v110 + 302);
      if ( *(_WORD *)(*v110 + 302) )
      {
        v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v113 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_64;
        }
        v114 = v111 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_64:
        v114 = sub_1C1C7C0(*v41, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v115 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8));
      v117 = v115;
      if ( !v115 )
        sub_1BCAA3C(0LL, v116);
      v118 = *(_QWORD *)v115;
      v119 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
      {
        v120 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *(v120 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v119;
          v120 += 2;
          if ( !v119 )
            goto LABEL_71;
        }
        v121 = v118 + 16LL * (*(_DWORD *)v120 + 5) + 312;
      }
      else
      {
LABEL_71:
        v121 = sub_1C1C7C0(v115, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v122 = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8));
      if ( (v122 & 1) != 0 )
      {
        v124 = *v41;
        if ( !v124 )
          sub_1BCAA3C(v122, v123);
        v125 = *v124;
        v126 = *(unsigned __int16 *)(*v124 + 302);
        if ( *(_WORD *)(*v124 + 302) )
        {
          v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v127 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v126;
            v127 += 4;
            if ( !v126 )
              goto LABEL_79;
          }
          v128 = v125 + 16LL * *v127 + 312;
        }
        else
        {
LABEL_79:
          v128 = sub_1C1C7C0(v124, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v162 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v128)(v124, *(_QWORD *)(v128 + 8));
        v164 = v162;
        if ( !v162 )
          sub_1BCAA3C(0LL, v163);
        v165 = *(_QWORD *)v162;
        v166 = IClassBoardSquareModel_TypeInfo;
        v167 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v162 + 302LL) )
        {
LABEL_113:
          v169 = sub_1C1C7C0(v162, v166, 15LL);
          goto LABEL_115;
        }
        v168 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v165 + 176) + 8LL);
        while ( *(v168 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v167;
          v168 += 2;
          if ( !v167 )
            goto LABEL_113;
        }
        v169 = v165 + 16LL * (*(_DWORD *)v168 + 15) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v169)(
          v164,
          connectSquareList,
          *(_QWORD *)(v169 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v175,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *v4; // x20
  ClassBoardSquareModel_o *v5; // x19
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
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  __int64 v34; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  int32_t v37; // w20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x22
  __int64 v48; // x8
  __int64 v49; // x9
  IClassBoardSquareModel_c **v50; // x10
  __int64 v51; // x0
  Il2CppClass *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  IClassBoardSquareModel_o *v56; // x1
  const MethodInfo *v57; // x3
  Il2CppClass *v58; // x8
  __int64 v59; // x9
  IClassBoardLineModel_c **v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x22
  __int64 v65; // x8
  __int64 v66; // x9
  IClassBoardSquareModel_c **v67; // x10
  __int64 v68; // x0
  Il2CppClass *v69; // x8
  __int64 v70; // x9
  IClassBoardLineModel_c **v71; // x10
  __int64 v72; // x0
  IClassBoardSquareModel_o *v73; // x1
  const MethodInfo *v74; // x3
  Il2CppClass *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x22
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x22
  __int64 v96; // x8
  __int64 v97; // x9
  IClassBoardSquareModel_c **v98; // x10
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x22
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  Il2CppClass *v107; // x8
  __int64 v108; // x9
  IClassBoardLineModel_c **v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x22
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  struct ClassBoardSquareEntity_o *v120; // x8
  Il2CppClass *v121; // x8
  __int64 v122; // x9
  IClassBoardLineModel_c **v123; // x10
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x21
  __int64 v128; // x8
  __int64 v129; // x9
  IClassBoardSquareModel_c **v130; // x10
  __int64 v131; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x21
  __int64 v135; // x8
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v140; // x8
  __int64 v141; // x9
  int *v142; // x10
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x19
  __int64 v146; // x8
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  __int64 v150; // x8
  __int64 v151; // x9
  int *v152; // x10
  __int64 v153; // x0
  __int64 v154; // x0
  __int64 v155; // x1
  __int64 v156; // x21
  __int64 v157; // x8
  __int64 v158; // x9
  IClassBoardItemModel_c **v159; // x10
  __int64 v160; // x0
  __int64 v161; // x8
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+20h] [xbp-70h] BYREF

  v4 = checkedBlankIdHashSet;
  v5 = this;
  if ( (byte_4B19764 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&IClassBoardItemModel_TypeInfo, v14, v15);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v16, v17);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v18, v19);
    sub_1BCA7E0(&IClassBoardSquareUser_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    this = (ClassBoardSquareModel_o *)sub_1BCA7E0(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v30,
                                        v31);
    byte_4B19764 = 1;
  }
  memset(&v167, 0, sizeof(v167));
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        checkedBlankIdHashSet,
                                                        method,
                                                        v3);
    System_Collections_Generic_HashSet_int____ctor(
      v4,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  user = v5->fields.user;
  if ( !user )
    goto LABEL_184;
  klass = user->klass;
  v34 = *(unsigned __int16 *)(&user->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&user->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(v5->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart((ClassBoardSquareEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_136;
  this = (ClassBoardSquareModel_o *)v5->fields.lineList;
  if ( !this )
LABEL_184:
    sub_1BCAA3C(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v166,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v167 = v166;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v167,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v38 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v167,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v37 = 2;
LABEL_138:
      itemList = v5->fields.itemList;
      if ( itemList )
      {
        v140 = itemList->klass;
        v141 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
        {
          v142 = &v140->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v142 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v141;
            v142 += 4;
            if ( !v141 )
              goto LABEL_143;
          }
          v143 = (__int64)(&v140->vtable._0_Equals.method + 2 * *v142);
        }
        else
        {
LABEL_143:
          v143 = sub_1C1C7C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v145 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v143)(
                 itemList,
                 *(_QWORD *)(v143 + 8));
        if ( !v145 )
          sub_1BCAA3C(0LL, v144);
        while ( 1 )
        {
          v146 = *(_QWORD *)v145;
          v147 = *(unsigned __int16 *)(*(_QWORD *)v145 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v145 + 302LL) )
          {
            v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v148 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v147;
              v148 += 4;
              if ( !v147 )
                goto LABEL_150;
            }
            v149 = v146 + 16LL * *v148 + 312;
          }
          else
          {
LABEL_150:
            v149 = sub_1C1C7C0(v145, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v149)(v145, *(_QWORD *)(v149 + 8)) & 1) == 0 )
            break;
          v150 = *(_QWORD *)v145;
          v151 = *(unsigned __int16 *)(*(_QWORD *)v145 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v145 + 302LL) )
          {
            v152 = (int *)(*(_QWORD *)(v150 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v152 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              --v151;
              v152 += 4;
              if ( !v151 )
                goto LABEL_157;
            }
            v153 = v150 + 16LL * *v152 + 312;
          }
          else
          {
LABEL_157:
            v153 = sub_1C1C7C0(v145, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v154 = (*(__int64 (__fastcall **)(__int64, _QWORD))v153)(v145, *(_QWORD *)(v153 + 8));
          v156 = v154;
          if ( !v154 )
            sub_1BCAA3C(0LL, v155);
          v157 = *(_QWORD *)v154;
          v158 = *(unsigned __int16 *)(*(_QWORD *)v154 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v154 + 302LL) )
          {
            v159 = (IClassBoardItemModel_c **)(*(_QWORD *)(v157 + 176) + 8LL);
            while ( *(v159 - 1) != IClassBoardItemModel_TypeInfo )
            {
              --v158;
              v159 += 2;
              if ( !v158 )
                goto LABEL_164;
            }
            v160 = v157 + 16LL * (*(_DWORD *)v159 + 2) + 312;
          }
          else
          {
LABEL_164:
            v160 = sub_1C1C7C0(v154, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v160)(v156, *(_QWORD *)(v160 + 8)) & 1) == 0 )
          {
            v37 |= 8u;
            break;
          }
        }
        v161 = *(_QWORD *)v145;
        v162 = *(unsigned __int16 *)(*(_QWORD *)v145 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v145 + 302LL) )
        {
          v163 = (int *)(*(_QWORD *)(v161 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v163 - 1) != System_IDisposable_TypeInfo )
          {
            --v162;
            v163 += 4;
            if ( !v162 )
              goto LABEL_172;
          }
          v164 = v161 + 16LL * *v163 + 312;
        }
        else
        {
LABEL_172:
          v164 = sub_1C1C7C0(v145, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v164)(v145, *(_QWORD *)(v164 + 8));
        return v37;
      }
      goto LABEL_184;
    }
    current = v167.fields._current;
    if ( !v167.fields._current )
      sub_1BCAA3C(v38, v39);
    v41 = v167.fields._current->klass;
    v42 = *(unsigned __int16 *)(&v167.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v167.fields._current->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v43 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_24;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_24:
      v44 = sub_1C1C7C0(v167.fields._current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v44)(current, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_1BCAA3C(0LL, v46);
    v48 = *(_QWORD *)v45;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v50 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *(v50 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v49;
        v50 += 2;
        if ( !v49 )
          goto LABEL_31;
      }
      v51 = v48 + 16LL * (*(_DWORD *)v50 + 5) + 312;
    }
    else
    {
LABEL_31:
      v51 = sub_1C1C7C0(v45, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) != 0 )
    {
      v52 = current->klass;
      v53 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v54 = &v52->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v54 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_38;
        }
        v55 = (__int64)&v52->vtable[*v54].method;
      }
      else
      {
LABEL_38:
        v55 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v56 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v55)(
                                          current,
                                          *(_QWORD *)(v55 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v56, v4, v57) )
        break;
    }
    v58 = current->klass;
    v59 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v60 = (IClassBoardLineModel_c **)&v58->_1.interfaceOffsets->offset;
      while ( *(v60 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v59;
        v60 += 2;
        if ( !v59 )
          goto LABEL_45;
      }
      v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 1].method;
    }
    else
    {
LABEL_45:
      v61 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v62 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v61)(current, *(_QWORD *)(v61 + 8));
    v64 = v62;
    if ( !v62 )
      sub_1BCAA3C(0LL, v63);
    v65 = *(_QWORD *)v62;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
    {
      v67 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *(v67 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v66;
        v67 += 2;
        if ( !v66 )
          goto LABEL_52;
      }
      v68 = v65 + 16LL * (*(_DWORD *)v67 + 5) + 312;
    }
    else
    {
LABEL_52:
      v68 = sub_1C1C7C0(v62, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8)) & 1) != 0 )
    {
      v69 = current->klass;
      v70 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v71 = (IClassBoardLineModel_c **)&v69->_1.interfaceOffsets->offset;
        while ( *(v71 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v70;
          v71 += 2;
          if ( !v70 )
            goto LABEL_59;
        }
        v72 = (__int64)&v69->vtable[*(_DWORD *)v71 + 1].method;
      }
      else
      {
LABEL_59:
        v72 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v73 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v72)(
                                          current,
                                          *(_QWORD *)(v72 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v73, v4, v74) )
        break;
    }
    v75 = current->klass;
    v76 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v77 = &v75->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v77 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_66;
      }
      v78 = (__int64)&v75->vtable[*v77].method;
    }
    else
    {
LABEL_66:
      v78 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v79 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v78)(current, *(_QWORD *)(v78 + 8));
    v81 = v79;
    if ( !v79 )
      sub_1BCAA3C(0LL, v80);
    v82 = *(_QWORD *)v79;
    v83 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v84 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v83;
        v84 += 4;
        if ( !v83 )
          goto LABEL_73;
      }
      v85 = v82 + 16LL * *v84 + 312;
    }
    else
    {
LABEL_73:
      v85 = sub_1C1C7C0(v79, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
    entity = v5->fields.entity;
    if ( !entity )
      sub_1BCAA3C(v86, v87);
    if ( (_DWORD)v86 != entity->fields.id )
    {
      v89 = current->klass;
      v90 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v91 = &v89->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v91 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v90;
          v91 += 4;
          if ( !v90 )
            goto LABEL_81;
        }
        v92 = (__int64)&v89->vtable[*v91].method;
      }
      else
      {
LABEL_81:
        v92 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v93 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v92)(current, *(_QWORD *)(v92 + 8));
      v95 = v93;
      if ( !v93 )
        sub_1BCAA3C(0LL, v94);
      v96 = *(_QWORD *)v93;
      v97 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
      {
        v98 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v96 + 176) + 8LL);
        while ( *(v98 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v97;
          v98 += 2;
          if ( !v97 )
            goto LABEL_88;
        }
        v99 = v96 + 16LL * (*(_DWORD *)v98 + 12) + 312;
      }
      else
      {
LABEL_88:
        v99 = sub_1C1C7C0(v93, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v100 = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8));
      v102 = v100;
      if ( !v100 )
        sub_1BCAA3C(0LL, v101);
      v103 = *(_QWORD *)v100;
      v104 = *(unsigned __int16 *)(*(_QWORD *)v100 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v100 + 302LL) )
      {
        v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v105 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v104;
          v105 += 4;
          if ( !v104 )
            goto LABEL_95;
        }
        v106 = v103 + 16LL * *v105 + 312;
      }
      else
      {
LABEL_95:
        v106 = sub_1C1C7C0(v100, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8)) & 1) != 0 )
        break;
    }
    v107 = current->klass;
    v108 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v109 = (IClassBoardLineModel_c **)&v107->_1.interfaceOffsets->offset;
      while ( *(v109 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v108;
        v109 += 2;
        if ( !v108 )
          goto LABEL_102;
      }
      v110 = (__int64)&v107->vtable[*(_DWORD *)v109 + 1].method;
    }
    else
    {
LABEL_102:
      v110 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v111 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v110)(current, *(_QWORD *)(v110 + 8));
    v113 = v111;
    if ( !v111 )
      sub_1BCAA3C(0LL, v112);
    v114 = *(_QWORD *)v111;
    v115 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
    {
      v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v116 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v115;
        v116 += 4;
        if ( !v115 )
          goto LABEL_109;
      }
      v117 = v114 + 16LL * *v116 + 312;
    }
    else
    {
LABEL_109:
      v117 = sub_1C1C7C0(v111, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8));
    v120 = v5->fields.entity;
    if ( !v120 )
      sub_1BCAA3C(v118, v119);
    if ( (_DWORD)v118 != v120->fields.id )
    {
      v121 = current->klass;
      v122 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v123 = (IClassBoardLineModel_c **)&v121->_1.interfaceOffsets->offset;
        while ( *(v123 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v122;
          v123 += 2;
          if ( !v122 )
            goto LABEL_117;
        }
        v124 = (__int64)&v121->vtable[*(_DWORD *)v123 + 1].method;
      }
      else
      {
LABEL_117:
        v124 = sub_1C1C7C0(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v125 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v124)(current, *(_QWORD *)(v124 + 8));
      v127 = v125;
      if ( !v125 )
        sub_1BCAA3C(0LL, v126);
      v128 = *(_QWORD *)v125;
      v129 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v125 + 302LL) )
      {
        v130 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v128 + 176) + 8LL);
        while ( *(v130 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v129;
          v130 += 2;
          if ( !v129 )
            goto LABEL_124;
        }
        v131 = v128 + 16LL * (*(_DWORD *)v130 + 12) + 312;
      }
      else
      {
LABEL_124:
        v131 = sub_1C1C7C0(v125, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v132 = (*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8));
      v134 = v132;
      if ( !v132 )
        sub_1BCAA3C(0LL, v133);
      v135 = *(_QWORD *)v132;
      v136 = *(unsigned __int16 *)(*(_QWORD *)v132 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v132 + 302LL) )
      {
        v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v137 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v136;
          v137 += 4;
          if ( !v136 )
            goto LABEL_131;
        }
        v138 = v135 + 16LL * *v137 + 312;
      }
      else
      {
LABEL_131:
        v138 = sub_1C1C7C0(v132, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v134, *(_QWORD *)(v138 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v167,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v37 = 0;
    goto LABEL_138;
  }
  return 1;
}


void __fastcall ClassBoardSquareModel__InitializeItemList(
        ClassBoardSquareModel_o *this,
        System_Int32_array *itemIds,
        System_Int32_array *itemNums,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x8
  unsigned __int64 v26; // x25
  int32_t v27; // w23
  int32_t v28; // w24
  ClassBoardItemModel_o *v29; // x22
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8

  if ( (byte_4B19768 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardItemModel_TypeInfo, itemIds, itemNums);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v11, v12);
    byte_4B19768 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                       itemIds,
                                                       itemNums,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v13;
  p_itemList = &this->fields.itemList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_itemList, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  if ( !itemIds )
    goto LABEL_16;
  v25 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v26 >= itemNums->max_length )
LABEL_17:
        sub_1BCAA44(v21, v22);
      v27 = itemIds->m_Items[v26 + 1];
      v28 = itemNums->m_Items[v26 + 1];
      v29 = (ClassBoardItemModel_o *)sub_1BCAA2C(ClassBoardItemModel_TypeInfo, v22, v23, v24);
      ClassBoardItemModel___ctor(v29, v27, v28, v30);
      v21 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v21->fields._items;
      v38 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v21->fields._version;
      if ( !items )
        break;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v29, v31, v32, v33, v34, v35, v36);
      }
      LODWORD(v25) = itemIds->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        return;
    }
LABEL_16:
    sub_1BCAA3C(v21, v22);
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x22
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
  IClassBoardSquareModel_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  int32_t v44; // w23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_object__o *v48; // x20
  IClassBoardSquareModel_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  ClassBoardSquareModel_c *v53; // x8
  ClassBoardSquareModel_o *v54; // x21
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x21
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x24
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x25
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x25
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  Il2CppObject *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x8
  __int64 v113; // x9
  IClassBoardLineModel_c **v114; // x10
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x25
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0
  __int64 v123; // x8
  __int64 v124; // x9
  IClassBoardLineModel_c **v125; // x10
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x25
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  struct ClassBoardSquareEntity_o *v136; // x8
  __int64 v137; // x8
  __int64 v138; // x9
  IClassBoardLineModel_c **v139; // x10
  __int64 v140; // x0
  Il2CppObject *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x1
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  __int64 v153; // x8
  __int64 v154; // x9
  int *v155; // x10
  __int64 v156; // x0
  int v157; // w22
  _BOOL8 v158; // x0
  __int64 v159; // x1
  bool v160; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v162; // x8
  __int64 v163; // x9
  int32_t *v164; // x10
  __int64 v165; // x0
  int v166; // w19
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_4B19769 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__,
      blankModel,
      checkedBlankIdHashSet);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v13, v14);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v15, v16);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v31, v32);
    this = (ClassBoardSquareModel_o *)sub_1BCA7E0(
                                        &System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                        v33,
                                        v34);
    byte_4B19769 = 1;
  }
  memset(&v168, 0, sizeof(v168));
  if ( !blankModel )
    goto LABEL_160;
  klass = blankModel->klass;
  v36 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  v40 = blankModel->klass;
  v41 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v42 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_17;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_17:
    v43 = sub_1C1C7C0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v43)(blankModel, *(_QWORD *)(v43 + 8));
  v48 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v44,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v49 = blankModel->klass;
  v50 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v51 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_23;
    }
    v52 = (__int64)&v49->vtable[*v51 + 9].method;
  }
  else
  {
LABEL_23:
    v52 = sub_1C1C7C0(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v52)(
                                      blankModel,
                                      *(_QWORD *)(v52 + 8));
  if ( !this )
    goto LABEL_160;
  v53 = this->klass;
  v54 = this;
  v55 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v56 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v56 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_30;
    }
    v57 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v56);
  }
  else
  {
LABEL_30:
    v57 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v59 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
  if ( !v59 )
    sub_1BCAA3C(0LL, v58);
  while ( 1 )
  {
    v60 = *(_QWORD *)v59;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_37;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_37:
      v63 = sub_1C1C7C0(v59, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) & 1) == 0 )
      break;
    v64 = *(_QWORD *)v59;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v66 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_44;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_44:
      v67 = sub_1C1C7C0(v59, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v59, *(_QWORD *)(v67 + 8));
    v70 = v68;
    if ( !v68 )
      sub_1BCAA3C(0LL, v69);
    v71 = *(_QWORD *)v68;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v73 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_51;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_51:
      v74 = sub_1C1C7C0(v68, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8));
    v77 = v75;
    if ( !v75 )
      sub_1BCAA3C(0LL, v76);
    v78 = *(_QWORD *)v75;
    v79 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v80 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_58;
      }
      v81 = v78 + 16LL * *v80 + 312;
    }
    else
    {
LABEL_58:
      v81 = sub_1C1C7C0(v75, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8)) != v44 )
    {
      v82 = *(_QWORD *)v70;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v84 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v83;
          v84 += 4;
          if ( !v83 )
            goto LABEL_65;
        }
        v85 = v82 + 16LL * *v84 + 312;
      }
      else
      {
LABEL_65:
        v85 = sub_1C1C7C0(v70, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v70, *(_QWORD *)(v85 + 8));
      v88 = v86;
      if ( !v86 )
        sub_1BCAA3C(0LL, v87);
      v89 = *(_QWORD *)v86;
      v90 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
      {
        v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v91 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v90;
          v91 += 4;
          if ( !v90 )
            goto LABEL_72;
        }
        v92 = v89 + 16LL * *v91 + 312;
      }
      else
      {
LABEL_72:
        v92 = sub_1C1C7C0(v86, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1BCAA3C(v93, v94);
      if ( (_DWORD)v93 != entity->fields.id )
      {
        v96 = *(_QWORD *)v70;
        v97 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v98 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v97;
            v98 += 4;
            if ( !v97 )
              goto LABEL_80;
          }
          v99 = v96 + 16LL * *v98 + 312;
        }
        else
        {
LABEL_80:
          v99 = sub_1C1C7C0(v70, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v100 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v70, *(_QWORD *)(v99 + 8));
        v107 = (int64_t)v100;
        if ( !v48 )
          sub_1BCAA3C(v100, v100);
        items = v48->fields._items;
        v109 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v48->fields._version;
        if ( !items )
          sub_1BCAA3C(v100, v100);
        size = v48->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            v100,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        }
        else
        {
          v111 = &items->obj.klass + size;
          v48->fields._size = size + 1;
          v111[4] = (Il2CppClass *)v107;
          sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), v107, v101, v102, v103, v104, v105, v106);
        }
      }
    }
    v112 = *(_QWORD *)v70;
    v113 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
    {
      v114 = (IClassBoardLineModel_c **)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *(v114 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v113;
        v114 += 2;
        if ( !v113 )
          goto LABEL_91;
      }
      v115 = v112 + 16LL * (*(_DWORD *)v114 + 1) + 312;
    }
    else
    {
LABEL_91:
      v115 = sub_1C1C7C0(v70, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v70, *(_QWORD *)(v115 + 8));
    v118 = v116;
    if ( !v116 )
      sub_1BCAA3C(0LL, v117);
    v119 = *(_QWORD *)v116;
    v120 = *(unsigned __int16 *)(*(_QWORD *)v116 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v116 + 302LL) )
    {
      v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v121 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v120;
        v121 += 4;
        if ( !v120 )
          goto LABEL_98;
      }
      v122 = v119 + 16LL * *v121 + 312;
    }
    else
    {
LABEL_98:
      v122 = sub_1C1C7C0(v116, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v122)(v118, *(_QWORD *)(v122 + 8)) != v44 )
    {
      v123 = *(_QWORD *)v70;
      v124 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v125 = (IClassBoardLineModel_c **)(*(_QWORD *)(v123 + 176) + 8LL);
        while ( *(v125 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v124;
          v125 += 2;
          if ( !v124 )
            goto LABEL_105;
        }
        v126 = v123 + 16LL * (*(_DWORD *)v125 + 1) + 312;
      }
      else
      {
LABEL_105:
        v126 = sub_1C1C7C0(v70, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v70, *(_QWORD *)(v126 + 8));
      v129 = v127;
      if ( !v127 )
        sub_1BCAA3C(0LL, v128);
      v130 = *(_QWORD *)v127;
      v131 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
      {
        v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v132 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v131;
          v132 += 4;
          if ( !v131 )
            goto LABEL_112;
        }
        v133 = v130 + 16LL * *v132 + 312;
      }
      else
      {
LABEL_112:
        v133 = sub_1C1C7C0(v127, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v134 = (*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8));
      v136 = v6->fields.entity;
      if ( !v136 )
        sub_1BCAA3C(v134, v135);
      if ( (_DWORD)v134 != v136->fields.id )
      {
        v137 = *(_QWORD *)v70;
        v138 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v139 = (IClassBoardLineModel_c **)(*(_QWORD *)(v137 + 176) + 8LL);
          while ( *(v139 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v138;
            v139 += 2;
            if ( !v138 )
              goto LABEL_120;
          }
          v140 = v137 + 16LL * (*(_DWORD *)v139 + 1) + 312;
        }
        else
        {
LABEL_120:
          v140 = sub_1C1C7C0(v70, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v141 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v140)(v70, *(_QWORD *)(v140 + 8));
        v148 = (int64_t)v141;
        if ( !v48 )
          sub_1BCAA3C(v141, v141);
        v149 = v48->fields._items;
        v150 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v48->fields._version;
        if ( !v149 )
          sub_1BCAA3C(v141, v141);
        v151 = v48->fields._size;
        if ( (unsigned int)v151 >= v149->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            v141,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = &v149->obj.klass + v151;
          v48->fields._size = v151 + 1;
          v152[4] = (Il2CppClass *)v148;
          sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 4), v148, v142, v143, v144, v145, v146, v147);
        }
      }
    }
  }
  v153 = *(_QWORD *)v59;
  v154 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
  {
    v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v155 - 1) != System_IDisposable_TypeInfo )
    {
      --v154;
      v155 += 4;
      if ( !v154 )
        goto LABEL_131;
    }
    v156 = v153 + 16LL * *v155 + 312;
  }
  else
  {
LABEL_131:
    v156 = sub_1C1C7C0(v59, System_IDisposable_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v156)(v59, *(_QWORD *)(v156 + 8));
  if ( !v48 )
LABEL_160:
    sub_1BCAA3C(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    v48,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v157 = 0;
  while ( 1 )
  {
    v158 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v168,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v160 = v158;
    if ( !v158 )
      break;
    current = v168.fields._current;
    if ( !v168.fields._current )
      sub_1BCAA3C(v158, v159);
    v162 = v168.fields._current->klass;
    v163 = *(unsigned __int16 *)(&v168.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v168.fields._current->klass->_2.bitflags2 + 3) )
    {
      v164 = &v162->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v164 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v163;
        v164 += 4;
        if ( !v163 )
          goto LABEL_141;
      }
      v165 = (__int64)&v162->vtable[*v164 + 13].method;
    }
    else
    {
LABEL_141:
      v165 = sub_1C1C7C0(v168.fields._current, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    v157 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v165)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v165 + 8));
    if ( (v157 & 1) != 0 )
    {
      v166 = 9;
      goto LABEL_146;
    }
  }
  v166 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v168,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v160 && v166 == 9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareModel__UpdatePosition(
        ClassBoardSquareModel_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  int x; // w9
  float v5; // s1
  int v6; // w10

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  x = (int)pos.fields.x;
  if ( pos.fields.x == INFINITY )
    x = 0x80000000;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  else
    v6 = (int)v5;
  entity->fields.posX = x;
  entity->fields.posY = v6;
}


int32_t __fastcall ClassBoardSquareModel__get_AssetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19765 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method, v2);
    byte_4B19765 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0LL);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(0LL, method);
  return ClassBoardSquareEntity__get_IsStart(entity, 0LL);
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *__fastcall ClassBoardSquareModel__get_ItemList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)this->fields.itemList;
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *__fastcall ClassBoardSquareModel__get_LineList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *)this->fields.lineList;
}


UnityEngine_Vector3_o __fastcall ClassBoardSquareModel__get_Position(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  float v3; // s2
  float posX; // s0
  float posY; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  v3 = 0.0;
  posX = (float)entity->fields.posX;
  posY = (float)entity->fields.posY;
  result.fields.z = v3;
  result.fields.y = posY;
  result.fields.x = posX;
  return result;
}


int32_t __fastcall ClassBoardSquareModel__get_SkillType(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  return entity->fields.upSkillLv;
}


IClassBoardSquareUser_o *__fastcall ClassBoardSquareModel__get_User(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return this->fields.user;
}


void __fastcall ClassBoardSquareModel___c__DisplayClass38_0___ctor(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__0(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v17; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4B1976B & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, x, method);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v5, v6);
    byte_4B1976B = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v8 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = (int)this;
  v14 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v15 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*v15].method;
  }
  else
  {
LABEL_15:
    v16 = sub_1C1C7C0(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(
                                                            lineModel,
                                                            *(_QWORD *)(v16 + 8));
  if ( !this )
LABEL_25:
    sub_1BCAA3C(this, x);
  v17 = this->klass;
  v18 = this;
  v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_22;
    }
    v21 = (__int64)(&v17->vtable._0_Equals.method + 2 * *v20);
  }
  else
  {
LABEL_22:
    v21 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v21)(
                  v18,
                  *(_QWORD *)(v21 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  __int64 v14; // x9
  IClassBoardLineModel_c **v15; // x10
  __int64 v16; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v17; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4B1976C & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, x, method);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v5, v6);
    byte_4B1976C = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v8 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = (int)this;
  v14 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v15 = (IClassBoardLineModel_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*(_DWORD *)v15 + 1].method;
  }
  else
  {
LABEL_15:
    v16 = sub_1C1C7C0(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(
                                                            lineModel,
                                                            *(_QWORD *)(v16 + 8));
  if ( !this )
LABEL_25:
    sub_1BCAA3C(this, x);
  v17 = this->klass;
  v18 = this;
  v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_22;
    }
    v21 = (__int64)(&v17->vtable._0_Equals.method + 2 * *v20);
  }
  else
  {
LABEL_22:
    v21 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v21)(
                  v18,
                  *(_QWORD *)(v21 + 8));
}