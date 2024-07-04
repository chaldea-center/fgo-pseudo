void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  struct ClassBoardSquareEntity_o *v26; // x8

  if ( (byte_48E5A7C & 1) == 0 )
  {
    sub_1B00CCC(&ClassBoardSquareUser_TypeInfo, squareEntity);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v7);
    sub_1B00CCC(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v8);
    byte_48E5A7C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v12;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.lineList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)squareEntity, v15, v16);
  entity = this->fields.entity;
  v18 = sub_1B00F18(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_QWORD *)(v18 + 24) = entity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)entity, v19, v20);
  this->fields.user = (struct IClassBoardSquareUser_o *)v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.user, v18, v21, v22);
  v26 = this->fields.entity;
  if ( !v26 )
    sub_1B00F28(v23, v24);
  ClassBoardSquareModel__InitializeItemList(this, v26->fields.itemIds, v26->fields.itemNums, v25);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_48E5A7D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line);
    byte_48E5A7D = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1B00F28(lineList, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)line;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)line, (int32_t)method, v3);
  }
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
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
  System_Collections_Generic_List_object__o *lineList; // x0
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t current; // w1
  __int64 **v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 *v26; // x23
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x23
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v41; // x23
  System_Func_object__bool__o *v42; // x24
  __int64 *v43; // x23
  __int64 v44; // x8
  __int64 v45; // x9
  IClassBoardLineModel_c **v46; // x10
  __int64 v47; // x0
  __int64 *v48; // x23
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x22
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x23
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  struct ClassBoardSquareEntity_o *v63; // x8
  System_Collections_Generic_List_T__o *v64; // x23
  System_Func_object__bool__o *v65; // x24
  _BOOL8 v66; // x0
  __int64 v67; // x1
  __int64 *v68; // x23
  __int64 v69; // x8
  System_Collections_Generic_List_object__o *v70; // x22
  __int64 v71; // x9
  IClassBoardLineModel_c **v72; // x10
  __int64 v73; // x0
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 *v84; // x22
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x22
  __int64 v92; // x8
  __int64 v93; // x9
  IClassBoardSquareModel_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 *v98; // x21
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  Il2CppObject *v106; // x1
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 *v113; // x22
  __int64 v114; // x8
  __int64 v115; // x9
  IClassBoardLineModel_c **v116; // x10
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x22
  __int64 v121; // x8
  __int64 v122; // x9
  IClassBoardSquareModel_c **v123; // x10
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 *v127; // x21
  __int64 v128; // x8
  __int64 v129; // x9
  IClassBoardLineModel_c **v130; // x10
  __int64 v131; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x21
  __int64 v135; // x8
  IClassBoardSquareModel_c *v136; // x1
  __int64 v137; // x9
  IClassBoardSquareModel_c **v138; // x10
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x8
  __int64 v142; // x9
  IClassBoardSquareModel_c **v143; // x10
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E5A80 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_1B00CCC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    sub_1B00CCC(&IClassBoardLineModel_TypeInfo, v9);
    sub_1B00CCC(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v12);
    sub_1B00CCC(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v13);
    sub_1B00CCC(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v14);
    sub_1B00CCC(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v15);
    byte_48E5A80 = 1;
  }
  memset(&v145, 0, sizeof(v145));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1B00F28(0LL, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v144,
    lineList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v145 = v144;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v145,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v17 = sub_1B00F18(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      sub_1B00F28(v18, v19);
    current = (int32_t)v145.fields._current;
    *(_QWORD *)(v17 + 16) = v145.fields._current;
    v23 = (__int64 **)(v17 + 16);
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 16), current, v20, v21);
    v26 = *(__int64 **)(v17 + 16);
    if ( !v26 )
      sub_1B00F28(v24, v25);
    v27 = *v26;
    v28 = *(unsigned __int16 *)(*v26 + 302);
    if ( *(_WORD *)(*v26 + 302) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v29 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_12;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_12:
      v30 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1B00F28(0LL, v32);
    v34 = *(_QWORD *)v31;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v36 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_19;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_19:
      v37 = sub_1B52CAC(v31, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1B00F28(v38, v39);
    if ( (_DWORD)v38 == entity->fields.id
      || (v41 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v42 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v42,
            (Il2CppObject *)v17,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            0LL),
          v38 = BasicHelper__Any_object_(
                  v41,
                  (System_Func_T__bool__o *)v42,
                  (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v38 & 1) != 0) )
    {
      v43 = *v23;
      if ( !*v23 )
        sub_1B00F28(v38, v39);
      v44 = *v43;
      v45 = *(unsigned __int16 *)(*v43 + 302);
      if ( *(_WORD *)(*v43 + 302) )
      {
        v46 = (IClassBoardLineModel_c **)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *(v46 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v45;
          v46 += 2;
          if ( !v45 )
            goto LABEL_29;
        }
        v47 = v44 + 16LL * (*(_DWORD *)v46 + 1) + 312;
      }
      else
      {
LABEL_29:
        v47 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
      v56 = v54;
      if ( !v54 )
        sub_1B00F28(0LL, v55);
      v57 = *(_QWORD *)v54;
      v58 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
      {
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v59 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_42;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_42:
        v60 = sub_1B52CAC(v54, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
      v63 = this->fields.entity;
      if ( !v63 )
        sub_1B00F28(v61, v62);
      if ( (_DWORD)v61 != v63->fields.id )
      {
        v64 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v65 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v65,
          (Il2CppObject *)v17,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          0LL);
        v66 = BasicHelper__Any_object_(
                v64,
                (System_Func_T__bool__o *)v65,
                (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v66 )
        {
          v68 = *v23;
          if ( !*v23 )
            sub_1B00F28(v66, v67);
          v69 = *v68;
          v70 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v71 = *(unsigned __int16 *)(*v68 + 302);
          if ( *(_WORD *)(*v68 + 302) )
          {
            v72 = (IClassBoardLineModel_c **)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *(v72 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v71;
              v72 += 2;
              if ( !v71 )
                goto LABEL_52;
            }
            v73 = v69 + 16LL * (*(_DWORD *)v72 + 1) + 312;
          }
          else
          {
LABEL_52:
            v73 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v103 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v73)(v68, *(_QWORD *)(v73 + 8));
          v106 = v103;
          if ( !v70 )
            sub_1B00F28(v103, v103);
          items = v70->fields._items;
          v108 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v70->fields._version;
          if ( !items )
            sub_1B00F28(v103, v103);
          size = v70->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v70,
              v103,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = &items->obj.klass + size;
            v70->fields._size = size + 1;
            v110[4] = (Il2CppClass *)v106;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v106, v104, v105);
          }
          v113 = *v23;
          if ( !*v23 )
            sub_1B00F28(v111, v112);
          v114 = *v113;
          v115 = *(unsigned __int16 *)(*v113 + 302);
          if ( *(_WORD *)(*v113 + 302) )
          {
            v116 = (IClassBoardLineModel_c **)(*(_QWORD *)(v114 + 176) + 8LL);
            while ( *(v116 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v115;
              v116 += 2;
              if ( !v115 )
                goto LABEL_91;
            }
            v117 = v114 + 16LL * (*(_DWORD *)v116 + 1) + 312;
          }
          else
          {
LABEL_91:
            v117 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v118 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8));
          v120 = v118;
          if ( !v118 )
            sub_1B00F28(0LL, v119);
          v121 = *(_QWORD *)v118;
          v122 = *(unsigned __int16 *)(*(_QWORD *)v118 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v118 + 302LL) )
          {
            v123 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v121 + 176) + 8LL);
            while ( *(v123 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v122;
              v123 += 2;
              if ( !v122 )
                goto LABEL_98;
            }
            v124 = v121 + 16LL * (*(_DWORD *)v123 + 5) + 312;
          }
          else
          {
LABEL_98:
            v124 = sub_1B52CAC(v118, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v125 = (*(__int64 (__fastcall **)(__int64, _QWORD))v124)(v120, *(_QWORD *)(v124 + 8));
          if ( (v125 & 1) != 0 )
          {
            v127 = *v23;
            if ( !v127 )
              sub_1B00F28(v125, v126);
            v128 = *v127;
            v129 = *(unsigned __int16 *)(*v127 + 302);
            if ( *(_WORD *)(*v127 + 302) )
            {
              v130 = (IClassBoardLineModel_c **)(*(_QWORD *)(v128 + 176) + 8LL);
              while ( *(v130 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v129;
                v130 += 2;
                if ( !v129 )
                  goto LABEL_106;
              }
              v131 = v128 + 16LL * (*(_DWORD *)v130 + 1) + 312;
            }
            else
            {
LABEL_106:
              v131 = sub_1B52CAC(v127, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v132 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8));
            v134 = v132;
            if ( !v132 )
              sub_1B00F28(0LL, v140);
            v141 = *(_QWORD *)v132;
            v136 = IClassBoardSquareModel_TypeInfo;
            v142 = *(unsigned __int16 *)(*(_QWORD *)v132 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v132 + 302LL) )
              goto LABEL_113;
            v143 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v141 + 176) + 8LL);
            while ( *(v143 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v142;
              v143 += 2;
              if ( !v142 )
                goto LABEL_113;
            }
            v139 = v141 + 16LL * (*(_DWORD *)v143 + 15) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v48 = *v23;
      if ( !*v23 )
        sub_1B00F28(v38, v39);
      v49 = *v48;
      v50 = (System_Collections_Generic_List_object__o *)*connectSquareList;
      v51 = *(unsigned __int16 *)(*v48 + 302);
      if ( *(_WORD *)(*v48 + 302) )
      {
        v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v52 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_35;
        }
        v53 = v49 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_35:
        v53 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v74 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v53)(v48, *(_QWORD *)(v53 + 8));
      v77 = v74;
      if ( !v50 )
        sub_1B00F28(v74, v74);
      v78 = v50->fields._items;
      v79 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v50->fields._version;
      if ( !v78 )
        sub_1B00F28(v74, v74);
      v80 = v50->fields._size;
      if ( (unsigned int)v80 >= v78->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          v74,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v78->obj.klass + v80;
        v50->fields._size = v80 + 1;
        v81[4] = (Il2CppClass *)v77;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v77, v75, v76);
      }
      v84 = *v23;
      if ( !*v23 )
        sub_1B00F28(v82, v83);
      v85 = *v84;
      v86 = *(unsigned __int16 *)(*v84 + 302);
      if ( *(_WORD *)(*v84 + 302) )
      {
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v87 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v86;
          v87 += 4;
          if ( !v86 )
            goto LABEL_64;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_64:
        v88 = sub_1B52CAC(*v23, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v89 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
      v91 = v89;
      if ( !v89 )
        sub_1B00F28(0LL, v90);
      v92 = *(_QWORD *)v89;
      v93 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
      {
        v94 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *(v94 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v93;
          v94 += 2;
          if ( !v93 )
            goto LABEL_71;
        }
        v95 = v92 + 16LL * (*(_DWORD *)v94 + 5) + 312;
      }
      else
      {
LABEL_71:
        v95 = sub_1B52CAC(v89, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      if ( (v96 & 1) != 0 )
      {
        v98 = *v23;
        if ( !v98 )
          sub_1B00F28(v96, v97);
        v99 = *v98;
        v100 = *(unsigned __int16 *)(*v98 + 302);
        if ( *(_WORD *)(*v98 + 302) )
        {
          v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v101 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v100;
            v101 += 4;
            if ( !v100 )
              goto LABEL_79;
          }
          v102 = v99 + 16LL * *v101 + 312;
        }
        else
        {
LABEL_79:
          v102 = sub_1B52CAC(v98, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v132 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v102)(v98, *(_QWORD *)(v102 + 8));
        v134 = v132;
        if ( !v132 )
          sub_1B00F28(0LL, v133);
        v135 = *(_QWORD *)v132;
        v136 = IClassBoardSquareModel_TypeInfo;
        v137 = *(unsigned __int16 *)(*(_QWORD *)v132 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v132 + 302LL) )
        {
LABEL_113:
          v139 = sub_1B52CAC(v132, v136, 15LL);
          goto LABEL_115;
        }
        v138 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v135 + 176) + 8LL);
        while ( *(v138 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v137;
          v138 += 2;
          if ( !v137 )
            goto LABEL_113;
        }
        v139 = v135 + 16LL * (*(_DWORD *)v138 + 15) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v139)(
          v134,
          connectSquareList,
          *(_QWORD *)(v139 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v145,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  ClassBoardSquareModel_o *v4; // x19
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
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  int32_t v23; // w20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  IClassBoardSquareModel_c **v36; // x10
  __int64 v37; // x0
  Il2CppClass *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  IClassBoardSquareModel_o *v42; // x1
  const MethodInfo *v43; // x3
  Il2CppClass *v44; // x8
  __int64 v45; // x9
  IClassBoardLineModel_c **v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  IClassBoardSquareModel_c **v53; // x10
  __int64 v54; // x0
  Il2CppClass *v55; // x8
  __int64 v56; // x9
  IClassBoardLineModel_c **v57; // x10
  __int64 v58; // x0
  IClassBoardSquareModel_o *v59; // x1
  const MethodInfo *v60; // x3
  Il2CppClass *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x22
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x22
  __int64 v82; // x8
  __int64 v83; // x9
  IClassBoardSquareModel_c **v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x22
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  Il2CppClass *v93; // x8
  __int64 v94; // x9
  IClassBoardLineModel_c **v95; // x10
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x22
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  struct ClassBoardSquareEntity_o *v106; // x8
  Il2CppClass *v107; // x8
  __int64 v108; // x9
  IClassBoardLineModel_c **v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x21
  __int64 v114; // x8
  __int64 v115; // x9
  IClassBoardSquareModel_c **v116; // x10
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x21
  __int64 v121; // x8
  __int64 v122; // x9
  int *v123; // x10
  __int64 v124; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x19
  __int64 v132; // x8
  __int64 v133; // x9
  int *v134; // x10
  __int64 v135; // x0
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x21
  __int64 v143; // x8
  __int64 v144; // x9
  IClassBoardItemModel_c **v145; // x10
  __int64 v146; // x0
  __int64 v147; // x8
  __int64 v148; // x9
  int *v149; // x10
  __int64 v150; // x0
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+20h] [xbp-70h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_48E5A7A & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B00CCC(&IClassBoardItemModel_TypeInfo, v9);
    sub_1B00CCC(&IClassBoardLineModel_TypeInfo, v10);
    sub_1B00CCC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B00CCC(&IClassBoardSquareUser_TypeInfo, v12);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v15);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v16);
    this = (ClassBoardSquareModel_o *)sub_1B00CCC(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v17);
    byte_48E5A7A = 1;
  }
  memset(&v153, 0, sizeof(v153));
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_184;
  klass = user->klass;
  v20 = *(unsigned __int16 *)(&user->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&user->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1B52CAC(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart((ClassBoardSquareEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_136;
  this = (ClassBoardSquareModel_o *)v4->fields.lineList;
  if ( !this )
LABEL_184:
    sub_1B00F28(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v152,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v153 = v152;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v153,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v24 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v153,
        (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v23 = 2;
LABEL_138:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v126 = itemList->klass;
        v127 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
        {
          v128 = &v126->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v128 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v127;
            v128 += 4;
            if ( !v127 )
              goto LABEL_143;
          }
          v129 = (__int64)(&v126->vtable._0_Equals.method + 2 * *v128);
        }
        else
        {
LABEL_143:
          v129 = sub_1B52CAC(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v131 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v129)(
                 itemList,
                 *(_QWORD *)(v129 + 8));
        if ( !v131 )
          sub_1B00F28(0LL, v130);
        while ( 1 )
        {
          v132 = *(_QWORD *)v131;
          v133 = *(unsigned __int16 *)(*(_QWORD *)v131 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v131 + 302LL) )
          {
            v134 = (int *)(*(_QWORD *)(v132 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v134 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v133;
              v134 += 4;
              if ( !v133 )
                goto LABEL_150;
            }
            v135 = v132 + 16LL * *v134 + 312;
          }
          else
          {
LABEL_150:
            v135 = sub_1B52CAC(v131, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v135)(v131, *(_QWORD *)(v135 + 8)) & 1) == 0 )
            break;
          v136 = *(_QWORD *)v131;
          v137 = *(unsigned __int16 *)(*(_QWORD *)v131 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v131 + 302LL) )
          {
            v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v138 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              --v137;
              v138 += 4;
              if ( !v137 )
                goto LABEL_157;
            }
            v139 = v136 + 16LL * *v138 + 312;
          }
          else
          {
LABEL_157:
            v139 = sub_1B52CAC(v131, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v140 = (*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v131, *(_QWORD *)(v139 + 8));
          v142 = v140;
          if ( !v140 )
            sub_1B00F28(0LL, v141);
          v143 = *(_QWORD *)v140;
          v144 = *(unsigned __int16 *)(*(_QWORD *)v140 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v140 + 302LL) )
          {
            v145 = (IClassBoardItemModel_c **)(*(_QWORD *)(v143 + 176) + 8LL);
            while ( *(v145 - 1) != IClassBoardItemModel_TypeInfo )
            {
              --v144;
              v145 += 2;
              if ( !v144 )
                goto LABEL_164;
            }
            v146 = v143 + 16LL * (*(_DWORD *)v145 + 2) + 312;
          }
          else
          {
LABEL_164:
            v146 = sub_1B52CAC(v140, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v146)(v142, *(_QWORD *)(v146 + 8)) & 1) == 0 )
          {
            v23 |= 8u;
            break;
          }
        }
        v147 = *(_QWORD *)v131;
        v148 = *(unsigned __int16 *)(*(_QWORD *)v131 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v131 + 302LL) )
        {
          v149 = (int *)(*(_QWORD *)(v147 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v149 - 1) != System_IDisposable_TypeInfo )
          {
            --v148;
            v149 += 4;
            if ( !v148 )
              goto LABEL_172;
          }
          v150 = v147 + 16LL * *v149 + 312;
        }
        else
        {
LABEL_172:
          v150 = sub_1B52CAC(v131, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v150)(v131, *(_QWORD *)(v150 + 8));
        return v23;
      }
      goto LABEL_184;
    }
    current = v153.fields._current;
    if ( !v153.fields._current )
      sub_1B00F28(v24, v25);
    v27 = v153.fields._current->klass;
    v28 = *(unsigned __int16 *)(&v153.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v153.fields._current->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v29 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_24;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_24:
      v30 = sub_1B52CAC(v153.fields._current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v30)(current, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1B00F28(0LL, v32);
    v34 = *(_QWORD *)v31;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v36 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *(v36 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v35;
        v36 += 2;
        if ( !v35 )
          goto LABEL_31;
      }
      v37 = v34 + 16LL * (*(_DWORD *)v36 + 5) + 312;
    }
    else
    {
LABEL_31:
      v37 = sub_1B52CAC(v31, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) != 0 )
    {
      v38 = current->klass;
      v39 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v40 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_38;
        }
        v41 = (__int64)&v38->vtable[*v40].method;
      }
      else
      {
LABEL_38:
        v41 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v42 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v41)(
                                          current,
                                          *(_QWORD *)(v41 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v42, v3, v43) )
        break;
    }
    v44 = current->klass;
    v45 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v46 = (IClassBoardLineModel_c **)&v44->_1.interfaceOffsets->offset;
      while ( *(v46 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v45;
        v46 += 2;
        if ( !v45 )
          goto LABEL_45;
      }
      v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 1].method;
    }
    else
    {
LABEL_45:
      v47 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v48 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v47)(current, *(_QWORD *)(v47 + 8));
    v50 = v48;
    if ( !v48 )
      sub_1B00F28(0LL, v49);
    v51 = *(_QWORD *)v48;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v53 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *(v53 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v52;
        v53 += 2;
        if ( !v52 )
          goto LABEL_52;
      }
      v54 = v51 + 16LL * (*(_DWORD *)v53 + 5) + 312;
    }
    else
    {
LABEL_52:
      v54 = sub_1B52CAC(v48, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) != 0 )
    {
      v55 = current->klass;
      v56 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v57 = (IClassBoardLineModel_c **)&v55->_1.interfaceOffsets->offset;
        while ( *(v57 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v56;
          v57 += 2;
          if ( !v56 )
            goto LABEL_59;
        }
        v58 = (__int64)&v55->vtable[*(_DWORD *)v57 + 1].method;
      }
      else
      {
LABEL_59:
        v58 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v59 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v58)(
                                          current,
                                          *(_QWORD *)(v58 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v59, v3, v60) )
        break;
    }
    v61 = current->klass;
    v62 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v63 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_66;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_66:
      v64 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v65 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v64)(current, *(_QWORD *)(v64 + 8));
    v67 = v65;
    if ( !v65 )
      sub_1B00F28(0LL, v66);
    v68 = *(_QWORD *)v65;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v70 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_73;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_73:
      v71 = sub_1B52CAC(v65, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
    entity = v4->fields.entity;
    if ( !entity )
      sub_1B00F28(v72, v73);
    if ( (_DWORD)v72 != entity->fields.id )
    {
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
            goto LABEL_81;
        }
        v78 = (__int64)&v75->vtable[*v77].method;
      }
      else
      {
LABEL_81:
        v78 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v79 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v78)(current, *(_QWORD *)(v78 + 8));
      v81 = v79;
      if ( !v79 )
        sub_1B00F28(0LL, v80);
      v82 = *(_QWORD *)v79;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
      {
        v84 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *(v84 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v83;
          v84 += 2;
          if ( !v83 )
            goto LABEL_88;
        }
        v85 = v82 + 16LL * (*(_DWORD *)v84 + 12) + 312;
      }
      else
      {
LABEL_88:
        v85 = sub_1B52CAC(v79, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
      v88 = v86;
      if ( !v86 )
        sub_1B00F28(0LL, v87);
      v89 = *(_QWORD *)v86;
      v90 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
      {
        v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v91 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v90;
          v91 += 4;
          if ( !v90 )
            goto LABEL_95;
        }
        v92 = v89 + 16LL * *v91 + 312;
      }
      else
      {
LABEL_95:
        v92 = sub_1B52CAC(v86, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8)) & 1) != 0 )
        break;
    }
    v93 = current->klass;
    v94 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v95 = (IClassBoardLineModel_c **)&v93->_1.interfaceOffsets->offset;
      while ( *(v95 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v94;
        v95 += 2;
        if ( !v94 )
          goto LABEL_102;
      }
      v96 = (__int64)&v93->vtable[*(_DWORD *)v95 + 1].method;
    }
    else
    {
LABEL_102:
      v96 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v97 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v96)(current, *(_QWORD *)(v96 + 8));
    v99 = v97;
    if ( !v97 )
      sub_1B00F28(0LL, v98);
    v100 = *(_QWORD *)v97;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v102 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_109;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_109:
      v103 = sub_1B52CAC(v97, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
    v106 = v4->fields.entity;
    if ( !v106 )
      sub_1B00F28(v104, v105);
    if ( (_DWORD)v104 != v106->fields.id )
    {
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
            goto LABEL_117;
        }
        v110 = (__int64)&v107->vtable[*(_DWORD *)v109 + 1].method;
      }
      else
      {
LABEL_117:
        v110 = sub_1B52CAC(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v111 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v110)(current, *(_QWORD *)(v110 + 8));
      v113 = v111;
      if ( !v111 )
        sub_1B00F28(0LL, v112);
      v114 = *(_QWORD *)v111;
      v115 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
      {
        v116 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v114 + 176) + 8LL);
        while ( *(v116 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v115;
          v116 += 2;
          if ( !v115 )
            goto LABEL_124;
        }
        v117 = v114 + 16LL * (*(_DWORD *)v116 + 12) + 312;
      }
      else
      {
LABEL_124:
        v117 = sub_1B52CAC(v111, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8));
      v120 = v118;
      if ( !v118 )
        sub_1B00F28(0LL, v119);
      v121 = *(_QWORD *)v118;
      v122 = *(unsigned __int16 *)(*(_QWORD *)v118 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v118 + 302LL) )
      {
        v123 = (int *)(*(_QWORD *)(v121 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v123 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v122;
          v123 += 4;
          if ( !v122 )
            goto LABEL_131;
        }
        v124 = v121 + 16LL * *v123 + 312;
      }
      else
      {
LABEL_131:
        v124 = sub_1B52CAC(v118, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v124)(v120, *(_QWORD *)(v124 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v153,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v23 = 0;
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  unsigned __int64 v17; // x25
  int32_t v18; // w23
  int32_t v19; // w24
  ClassBoardItemModel_o *v20; // x22
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_48E5A7E & 1) == 0 )
  {
    sub_1B00CCC(&ClassBoardItemModel_TypeInfo, itemIds);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v9);
    byte_48E5A7E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v10;
  p_itemList = &this->fields.itemList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)v10, v12, v13);
  if ( !itemIds )
    goto LABEL_16;
  v16 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v17 >= itemNums->max_length )
LABEL_17:
        sub_1B00F30(v14, v15);
      v18 = itemIds->m_Items[v17 + 1];
      v19 = itemNums->m_Items[v17 + 1];
      v20 = (ClassBoardItemModel_o *)sub_1B00F18(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v20, v18, v19, v21);
      v14 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v14->fields._items;
      v25 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v14->fields._version;
      if ( !items )
        break;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v20,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v20;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
      }
      LODWORD(v16) = itemIds->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        return;
    }
LABEL_16:
    sub_1B00F28(v14, v15);
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
  IClassBoardSquareModel_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int32_t v30; // w23
  System_Collections_Generic_List_object__o *v31; // x20
  IClassBoardSquareModel_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  ClassBoardSquareModel_c *v36; // x8
  ClassBoardSquareModel_o *v37; // x21
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x24
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x25
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x25
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  Il2CppObject *v86; // x1
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  IClassBoardLineModel_c **v93; // x10
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x25
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 v102; // x8
  __int64 v103; // x9
  IClassBoardLineModel_c **v104; // x10
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x25
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  struct ClassBoardSquareEntity_o *v115; // x8
  __int64 v116; // x8
  __int64 v117; // x9
  IClassBoardLineModel_c **v118; // x10
  __int64 v119; // x0
  Il2CppObject *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  Il2CppObject *v123; // x1
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  __int64 v128; // x8
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  int v132; // w22
  _BOOL8 v133; // x0
  __int64 v134; // x1
  bool v135; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v137; // x8
  __int64 v138; // x9
  int32_t *v139; // x10
  __int64 v140; // x0
  int v141; // w19
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_48E5A7F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, blankModel);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1B00CCC(&IClassBoardLineModel_TypeInfo, v11);
    sub_1B00CCC(&IClassBoardSquareModel_TypeInfo, v12);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v15);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v19);
    this = (ClassBoardSquareModel_o *)sub_1B00CCC(
                                        &System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                        v20);
    byte_48E5A7F = 1;
  }
  memset(&v143, 0, sizeof(v143));
  if ( !blankModel )
    goto LABEL_160;
  klass = blankModel->klass;
  v22 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_327A530 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  v26 = blankModel->klass;
  v27 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_17;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_17:
    v29 = sub_1B52CAC(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v29)(blankModel, *(_QWORD *)(v29 + 8));
  v31 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v30,
    (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v32 = blankModel->klass;
  v33 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v34 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_23;
    }
    v35 = (__int64)&v32->vtable[*v34 + 9].method;
  }
  else
  {
LABEL_23:
    v35 = sub_1B52CAC(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v35)(
                                      blankModel,
                                      *(_QWORD *)(v35 + 8));
  if ( !this )
    goto LABEL_160;
  v36 = this->klass;
  v37 = this;
  v38 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v39 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v39 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_30;
    }
    v40 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v39);
  }
  else
  {
LABEL_30:
    v40 = sub_1B52CAC(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  if ( !v42 )
    sub_1B00F28(0LL, v41);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_37;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_37:
      v46 = sub_1B52CAC(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v49 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_44;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_44:
      v50 = sub_1B52CAC(v42, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    v53 = v51;
    if ( !v51 )
      sub_1B00F28(0LL, v52);
    v54 = *(_QWORD *)v51;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v56 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_51;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_51:
      v57 = sub_1B52CAC(v51, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    v60 = v58;
    if ( !v58 )
      sub_1B00F28(0LL, v59);
    v61 = *(_QWORD *)v58;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v63 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_58;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_58:
      v64 = sub_1B52CAC(v58, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8)) != v30 )
    {
      v65 = *(_QWORD *)v53;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v67 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_65;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_65:
        v68 = sub_1B52CAC(v53, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v53, *(_QWORD *)(v68 + 8));
      v71 = v69;
      if ( !v69 )
        sub_1B00F28(0LL, v70);
      v72 = *(_QWORD *)v69;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
      {
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_72;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_72:
        v75 = sub_1B52CAC(v69, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1B00F28(v76, v77);
      if ( (_DWORD)v76 != entity->fields.id )
      {
        v79 = *(_QWORD *)v53;
        v80 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v81 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v80;
            v81 += 4;
            if ( !v80 )
              goto LABEL_80;
          }
          v82 = v79 + 16LL * *v81 + 312;
        }
        else
        {
LABEL_80:
          v82 = sub_1B52CAC(v53, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v83 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v53, *(_QWORD *)(v82 + 8));
        v86 = v83;
        if ( !v31 )
          sub_1B00F28(v83, v83);
        items = v31->fields._items;
        v88 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1B00F28(v83, v83);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            v83,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v90[4] = (Il2CppClass *)v86;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v90 + 4), (int32_t)v86, v84, v85);
        }
      }
    }
    v91 = *(_QWORD *)v53;
    v92 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v93 = (IClassBoardLineModel_c **)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *(v93 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v92;
        v93 += 2;
        if ( !v92 )
          goto LABEL_91;
      }
      v94 = v91 + 16LL * (*(_DWORD *)v93 + 1) + 312;
    }
    else
    {
LABEL_91:
      v94 = sub_1B52CAC(v53, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v95 = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v53, *(_QWORD *)(v94 + 8));
    v97 = v95;
    if ( !v95 )
      sub_1B00F28(0LL, v96);
    v98 = *(_QWORD *)v95;
    v99 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
    {
      v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v100 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v99;
        v100 += 4;
        if ( !v99 )
          goto LABEL_98;
      }
      v101 = v98 + 16LL * *v100 + 312;
    }
    else
    {
LABEL_98:
      v101 = sub_1B52CAC(v95, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8)) != v30 )
    {
      v102 = *(_QWORD *)v53;
      v103 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
      {
        v104 = (IClassBoardLineModel_c **)(*(_QWORD *)(v102 + 176) + 8LL);
        while ( *(v104 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v103;
          v104 += 2;
          if ( !v103 )
            goto LABEL_105;
        }
        v105 = v102 + 16LL * (*(_DWORD *)v104 + 1) + 312;
      }
      else
      {
LABEL_105:
        v105 = sub_1B52CAC(v53, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v106 = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v53, *(_QWORD *)(v105 + 8));
      v108 = v106;
      if ( !v106 )
        sub_1B00F28(0LL, v107);
      v109 = *(_QWORD *)v106;
      v110 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
      {
        v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v111 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v110;
          v111 += 4;
          if ( !v110 )
            goto LABEL_112;
        }
        v112 = v109 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_112:
        v112 = sub_1B52CAC(v106, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v113 = (*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v108, *(_QWORD *)(v112 + 8));
      v115 = v6->fields.entity;
      if ( !v115 )
        sub_1B00F28(v113, v114);
      if ( (_DWORD)v113 != v115->fields.id )
      {
        v116 = *(_QWORD *)v53;
        v117 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v118 = (IClassBoardLineModel_c **)(*(_QWORD *)(v116 + 176) + 8LL);
          while ( *(v118 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v117;
            v118 += 2;
            if ( !v117 )
              goto LABEL_120;
          }
          v119 = v116 + 16LL * (*(_DWORD *)v118 + 1) + 312;
        }
        else
        {
LABEL_120:
          v119 = sub_1B52CAC(v53, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v120 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v53, *(_QWORD *)(v119 + 8));
        v123 = v120;
        if ( !v31 )
          sub_1B00F28(v120, v120);
        v124 = v31->fields._items;
        v125 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v31->fields._version;
        if ( !v124 )
          sub_1B00F28(v120, v120);
        v126 = v31->fields._size;
        if ( (unsigned int)v126 >= v124->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            v120,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v127 = &v124->obj.klass + v126;
          v31->fields._size = v126 + 1;
          v127[4] = (Il2CppClass *)v123;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v127 + 4), (int32_t)v123, v121, v122);
        }
      }
    }
  }
  v128 = *(_QWORD *)v42;
  v129 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v130 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v130 - 1) != System_IDisposable_TypeInfo )
    {
      --v129;
      v130 += 4;
      if ( !v129 )
        goto LABEL_131;
    }
    v131 = v128 + 16LL * *v130 + 312;
  }
  else
  {
LABEL_131:
    v131 = sub_1B52CAC(v42, System_IDisposable_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v42, *(_QWORD *)(v131 + 8));
  if ( !v31 )
LABEL_160:
    sub_1B00F28(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v143,
    v31,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v132 = 0;
  while ( 1 )
  {
    v133 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v143,
             (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v135 = v133;
    if ( !v133 )
      break;
    current = v143.fields._current;
    if ( !v143.fields._current )
      sub_1B00F28(v133, v134);
    v137 = v143.fields._current->klass;
    v138 = *(unsigned __int16 *)(&v143.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v143.fields._current->klass->_2.bitflags2 + 3) )
    {
      v139 = &v137->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v139 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v138;
        v139 += 4;
        if ( !v138 )
          goto LABEL_141;
      }
      v140 = (__int64)&v137->vtable[*v139 + 13].method;
    }
    else
    {
LABEL_141:
      v140 = sub_1B52CAC(v143.fields._current, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    v132 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v140)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v140 + 8));
    if ( (v132 & 1) != 0 )
    {
      v141 = 9;
      goto LABEL_146;
    }
  }
  v141 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v135 && v141 == 9;
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_48E5A7B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method);
    byte_48E5A7B = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0LL);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B00F28(this, method);
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
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v16; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  v4 = this;
  if ( (byte_48E5A81 & 1) == 0 )
  {
    sub_1B00CCC(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B00CCC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_48E5A81 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v7 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v11 = lineModel->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v14 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_15:
    v15 = sub_1B52CAC(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_1B00F28(this, x);
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_22;
    }
    v20 = (__int64)(&v16->vtable._0_Equals.method + 2 * *v19);
  }
  else
  {
LABEL_22:
    v20 = sub_1B52CAC(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v20)(
                  v17,
                  *(_QWORD *)(v20 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  IClassBoardLineModel_c **v14; // x10
  __int64 v15; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v16; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  v4 = this;
  if ( (byte_48E5A82 & 1) == 0 )
  {
    sub_1B00CCC(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B00CCC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_48E5A82 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v7 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v11 = lineModel->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v14 = (IClassBoardLineModel_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v13;
      v14 += 2;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)&v11->vtable[*(_DWORD *)v14 + 1].method;
  }
  else
  {
LABEL_15:
    v15 = sub_1B52CAC(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_1B00F28(this, x);
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_22;
    }
    v20 = (__int64)(&v16->vtable._0_Equals.method + 2 * *v19);
  }
  else
  {
LABEL_22:
    v20 = sub_1B52CAC(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v20)(
                  v17,
                  *(_QWORD *)(v20 + 8));
}