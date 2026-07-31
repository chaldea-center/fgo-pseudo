void ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  struct ClassBoardSquareEntity_o *v42; // x8

  if ( (byte_593C55B & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSquareUser_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_593C55B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.lineList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.entity = squareEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)squareEntity, v19, v20, v21, v22, v23, v24);
  entity = this->fields.entity;
  v26 = sub_21FFEBC(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  *(_QWORD *)(v26 + 24) = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 24), (int32_t)entity, v27, v28, v29, v30, v31, v32);
  this->fields.user = (struct IClassBoardSquareUser_o *)v26;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.user, v26, v33, v34, v35, v36, v37, v38);
  v42 = this->fields.entity;
  if ( !v42 )
    sub_21FFECC(v39, v40);
  ClassBoardSquareModel__InitializeItemList(this, v42->fields.itemIds, v42->fields.itemNums, v41);
}


void ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ClassBoardSquareModel_o *v9; // x20
  System_Collections_Generic_List_object__o *lineList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593C55C & 1) == 0 )
  {
    this = (ClassBoardSquareModel_o *)sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_593C55C = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)v9->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v12 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_21FFECC(this, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)line;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)line,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *lineList; // x0
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t current; // w1
  __int64 **v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 *v19; // x23
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v34; // x23
  System_Func_object__bool__o *v35; // x24
  __int64 *v36; // x23
  __int64 v37; // x8
  __int64 v38; // x9
  IClassBoardLineModel_c **v39; // x10
  __int64 v40; // x0
  __int64 *v41; // x23
  __int64 v42; // x8
  System_Collections_Generic_List_object__o *v43; // x22
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x23
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  struct ClassBoardSquareEntity_o *v56; // x8
  System_Collections_Generic_List_T__o *v57; // x23
  System_Func_object__bool__o *v58; // x24
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 *v61; // x23
  __int64 v62; // x8
  System_Collections_Generic_List_object__o *v63; // x22
  __int64 v64; // x9
  IClassBoardLineModel_c **v65; // x10
  __int64 v66; // x0
  Il2CppObject *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x1
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 *v81; // x22
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x22
  __int64 v89; // x8
  __int64 v90; // x9
  IClassBoardSquareModel_c **v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 *v95; // x21
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  Il2CppObject *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  Il2CppObject *v107; // x1
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 *v114; // x22
  __int64 v115; // x8
  __int64 v116; // x9
  IClassBoardLineModel_c **v117; // x10
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x22
  __int64 v122; // x8
  __int64 v123; // x9
  IClassBoardSquareModel_c **v124; // x10
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 *v128; // x21
  __int64 v129; // x8
  __int64 v130; // x9
  IClassBoardLineModel_c **v131; // x10
  __int64 v132; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x21
  __int64 v136; // x8
  IClassBoardSquareModel_c *v137; // x1
  __int64 v138; // x9
  IClassBoardSquareModel_c **v139; // x10
  __int64 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x8
  __int64 v143; // x9
  IClassBoardSquareModel_c **v144; // x10
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593C55F & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_21FFC50(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_21FFC50(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__);
    sub_21FFC50(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__);
    sub_21FFC50(&ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    byte_593C55F = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  memset(&v146, 0, sizeof(v146));
  if ( !lineList )
    sub_21FFECC(0, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    lineList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v146 = v145;
  v145.fields._list = 0;
  *(_QWORD *)&v145.fields._index = &v146;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v146,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_21FFEBC(ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      sub_21FFECC(v7, v8);
    current = (int32_t)v146.fields._current;
    *(_QWORD *)(v6 + 16) = v146.fields._current;
    v16 = (__int64 **)(v6 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
    v19 = *(__int64 **)(v6 + 16);
    if ( !v19 )
      sub_21FFECC(v17, v18);
    v20 = *v19;
    v21 = *(unsigned __int16 *)(*v19 + 302);
    if ( *(_WORD *)(*v19 + 302) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v22 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_12;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_12:
      v23 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_21FFECC(0, v25);
    v27 = *(_QWORD *)v24;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_19;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_19:
      v30 = sub_2237E2C(v24, IClassBoardSquareModel_TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_21FFECC(v31, v32);
    if ( (_DWORD)v31 == entity->fields.id
      || (v34 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v35 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v35,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__,
            0),
          v31 = BasicHelper__Any_object_(
                  v34,
                  (System_Func_T__bool__o *)v35,
                  (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v31 & 1) != 0) )
    {
      v36 = *v16;
      if ( !*v16 )
        sub_21FFECC(v31, v32);
      v37 = *v36;
      v38 = *(unsigned __int16 *)(*v36 + 302);
      if ( *(_WORD *)(*v36 + 302) )
      {
        v39 = (IClassBoardLineModel_c **)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *(v39 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v38;
          v39 += 2;
          if ( !v38 )
            goto LABEL_29;
        }
        v40 = v37 + 16LL * (*(_DWORD *)v39 + 1) + 312;
      }
      else
      {
LABEL_29:
        v40 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 1);
      }
      v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
      v49 = v47;
      if ( !v47 )
        sub_21FFECC(0, v48);
      v50 = *(_QWORD *)v47;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v52 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_42;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_42:
        v53 = sub_2237E2C(v47, IClassBoardSquareModel_TypeInfo, 0);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8));
      v56 = this->fields.entity;
      if ( !v56 )
        sub_21FFECC(v54, v55);
      if ( (_DWORD)v54 != v56->fields.id )
      {
        v57 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v58 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__,
          0);
        v59 = BasicHelper__Any_object_(
                v57,
                (System_Func_T__bool__o *)v58,
                (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v59 )
        {
          v61 = *v16;
          if ( !*v16 )
            sub_21FFECC(v59, v60);
          v62 = *v61;
          v63 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v64 = *(unsigned __int16 *)(*v61 + 302);
          if ( *(_WORD *)(*v61 + 302) )
          {
            v65 = (IClassBoardLineModel_c **)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *(v65 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v64;
              v65 += 2;
              if ( !v64 )
                goto LABEL_52;
            }
            v66 = v62 + 16LL * (*(_DWORD *)v65 + 1) + 312;
          }
          else
          {
LABEL_52:
            v66 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 1);
          }
          v100 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v66)(v61, *(_QWORD *)(v66 + 8));
          v107 = v100;
          if ( !v63
            || (items = v63->fields._items,
                v109 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                ++v63->fields._version,
                !items) )
          {
            sub_21FFECC(v100, v100);
          }
          size = v63->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              v100,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = &items->obj.klass + size;
            v63->fields._size = size + 1;
            v111[4] = (Il2CppClass *)v107;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v111 + 4),
              (int32_t)v107,
              v101,
              v102,
              v103,
              v104,
              v105,
              v106);
          }
          v114 = *v16;
          if ( !*v16 )
            sub_21FFECC(v112, v113);
          v115 = *v114;
          v116 = *(unsigned __int16 *)(*v114 + 302);
          if ( *(_WORD *)(*v114 + 302) )
          {
            v117 = (IClassBoardLineModel_c **)(*(_QWORD *)(v115 + 176) + 8LL);
            while ( *(v117 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v116;
              v117 += 2;
              if ( !v116 )
                goto LABEL_91;
            }
            v118 = v115 + 16LL * (*(_DWORD *)v117 + 1) + 312;
          }
          else
          {
LABEL_91:
            v118 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 1);
          }
          v119 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
          v121 = v119;
          if ( !v119 )
            sub_21FFECC(0, v120);
          v122 = *(_QWORD *)v119;
          v123 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
          {
            v124 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v122 + 176) + 8LL);
            while ( *(v124 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v123;
              v124 += 2;
              if ( !v123 )
                goto LABEL_98;
            }
            v125 = v122 + 16LL * (*(_DWORD *)v124 + 5) + 312;
          }
          else
          {
LABEL_98:
            v125 = sub_2237E2C(v119, IClassBoardSquareModel_TypeInfo, 5);
          }
          v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
          if ( (v126 & 1) != 0 )
          {
            v128 = *v16;
            if ( !v128 )
              sub_21FFECC(v126, v127);
            v129 = *v128;
            v130 = *(unsigned __int16 *)(*v128 + 302);
            if ( *(_WORD *)(*v128 + 302) )
            {
              v131 = (IClassBoardLineModel_c **)(*(_QWORD *)(v129 + 176) + 8LL);
              while ( *(v131 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v130;
                v131 += 2;
                if ( !v130 )
                  goto LABEL_106;
              }
              v132 = v129 + 16LL * (*(_DWORD *)v131 + 1) + 312;
            }
            else
            {
LABEL_106:
              v132 = sub_2237E2C(v128, IClassBoardLineModel_TypeInfo, 1);
            }
            v133 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v132)(v128, *(_QWORD *)(v132 + 8));
            v135 = v133;
            if ( !v133 )
              sub_21FFECC(0, v141);
            v142 = *(_QWORD *)v133;
            v137 = IClassBoardSquareModel_TypeInfo;
            v143 = *(unsigned __int16 *)(*(_QWORD *)v133 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v133 + 302LL) )
              goto LABEL_113;
            v144 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v142 + 176) + 8LL);
            while ( *(v144 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v143;
              v144 += 2;
              if ( !v143 )
                goto LABEL_113;
            }
            v140 = v142 + 16LL * (*(_DWORD *)v144 + 17) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v41 = *v16;
      if ( !*v16 )
        sub_21FFECC(v31, v32);
      v42 = *v41;
      v43 = (System_Collections_Generic_List_object__o *)*connectSquareList;
      v44 = *(unsigned __int16 *)(*v41 + 302);
      if ( *(_WORD *)(*v41 + 302) )
      {
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v45 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_35;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_35:
        v46 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 0);
      }
      v67 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8));
      v74 = v67;
      if ( !v43
        || (v75 = v43->fields._items,
            v76 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
            ++v43->fields._version,
            !v75) )
      {
        sub_21FFECC(v67, v67);
      }
      v77 = v43->fields._size;
      if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v67,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &v75->obj.klass + v77;
        v43->fields._size = v77 + 1;
        v78[4] = (Il2CppClass *)v74;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v78 + 4), (int32_t)v74, v68, v69, v70, v71, v72, v73);
      }
      v81 = *v16;
      if ( !*v16 )
        sub_21FFECC(v79, v80);
      v82 = *v81;
      v83 = *(unsigned __int16 *)(*v81 + 302);
      if ( *(_WORD *)(*v81 + 302) )
      {
        v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v84 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v83;
          v84 += 4;
          if ( !v83 )
            goto LABEL_64;
        }
        v85 = v82 + 16LL * *v84 + 312;
      }
      else
      {
LABEL_64:
        v85 = sub_2237E2C(*v16, IClassBoardLineModel_TypeInfo, 0);
      }
      v86 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
      v88 = v86;
      if ( !v86 )
        sub_21FFECC(0, v87);
      v89 = *(_QWORD *)v86;
      v90 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
      {
        v91 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *(v91 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v90;
          v91 += 2;
          if ( !v90 )
            goto LABEL_71;
        }
        v92 = v89 + 16LL * (*(_DWORD *)v91 + 5) + 312;
      }
      else
      {
LABEL_71:
        v92 = sub_2237E2C(v86, IClassBoardSquareModel_TypeInfo, 5);
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      if ( (v93 & 1) != 0 )
      {
        v95 = *v16;
        if ( !v95 )
          sub_21FFECC(v93, v94);
        v96 = *v95;
        v97 = *(unsigned __int16 *)(*v95 + 302);
        if ( *(_WORD *)(*v95 + 302) )
        {
          v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v98 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v97;
            v98 += 4;
            if ( !v97 )
              goto LABEL_79;
          }
          v99 = v96 + 16LL * *v98 + 312;
        }
        else
        {
LABEL_79:
          v99 = sub_2237E2C(v95, IClassBoardLineModel_TypeInfo, 0);
        }
        v133 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8));
        v135 = v133;
        if ( !v133 )
          sub_21FFECC(0, v134);
        v136 = *(_QWORD *)v133;
        v137 = IClassBoardSquareModel_TypeInfo;
        v138 = *(unsigned __int16 *)(*(_QWORD *)v133 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v133 + 302LL) )
        {
LABEL_113:
          v140 = sub_2237E2C(v133, v137, 17);
          goto LABEL_115;
        }
        v139 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v136 + 176) + 8LL);
        while ( *(v139 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v138;
          v139 += 2;
          if ( !v138 )
            goto LABEL_113;
        }
        v140 = v136 + 16LL * (*(_DWORD *)v139 + 17) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v140)(
          v135,
          connectSquareList,
          *(_QWORD *)(v140 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v146,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  ClassBoardSquareModel_o *v4; // x19
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w20
  struct ClassBoardSquareEntity_o *entity; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  bool v15; // w21
  Il2CppObject *current; // x22
  Il2CppClass *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 v25; // x9
  IClassBoardSquareModel_c **v26; // x10
  __int64 v27; // x0
  Il2CppClass *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  IClassBoardSquareModel_o *v32; // x1
  const MethodInfo *v33; // x3
  Il2CppClass *v34; // x8
  __int64 v35; // x9
  IClassBoardLineModel_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x23
  __int64 v41; // x8
  __int64 v42; // x9
  IClassBoardSquareModel_c **v43; // x10
  __int64 v44; // x0
  Il2CppClass *v45; // x8
  __int64 v46; // x9
  IClassBoardLineModel_c **v47; // x10
  __int64 v48; // x0
  IClassBoardSquareModel_o *v49; // x1
  const MethodInfo *v50; // x3
  Il2CppClass *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x23
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  struct ClassBoardSquareEntity_o *v64; // x8
  Il2CppClass *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x23
  __int64 v72; // x8
  __int64 v73; // x9
  IClassBoardSquareModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x23
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  Il2CppClass *v83; // x8
  __int64 v84; // x9
  IClassBoardLineModel_c **v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x23
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  struct ClassBoardSquareEntity_o *v96; // x8
  Il2CppClass *v97; // x8
  __int64 v98; // x9
  IClassBoardLineModel_c **v99; // x10
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x22
  __int64 v104; // x8
  __int64 v105; // x9
  IClassBoardSquareModel_c **v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x22
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x19
  __int64 v123; // x8
  __int64 v124; // x9
  int *v125; // x10
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x19
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x19
  __int64 v137; // x8
  __int64 v138; // x9
  IClassBoardItemModel_c **v139; // x10
  __int64 v140; // x0
  __int64 v141; // x21
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+0h] [xbp-90h] BYREF
  __int64 v148; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+20h] [xbp-70h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_593C559 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&IClassBoardItemModel_TypeInfo);
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareUser_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_593C559 = 1;
  }
  memset(&v149, 0, sizeof(v149));
  v148 = 0;
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_192;
  klass = user->klass;
  v7 = *(unsigned __int16 *)&user->klass->_2.rank;
  if ( *(_WORD *)&user->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v9 = sub_2237E2C(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))v9)(user, *(_QWORD *)(v9 + 8)) & 1) != 0 )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  this = (ClassBoardSquareModel_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_192;
  if ( !this )
    goto LABEL_192;
  this = (ClassBoardSquareModel_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      entity->fields.classBoardBaseId,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_192;
  if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)this, 0) )
    return 2;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_192;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart((ClassBoardSquareEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_22;
  this = (ClassBoardSquareModel_o *)v4->fields.lineList;
  if ( !this )
LABEL_192:
    sub_21FFECC(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v147,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v149 = v147;
  v147.fields._list = 0;
  *(_QWORD *)&v147.fields._index = &v149;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v149,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    v15 = v13;
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v149,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      goto LABEL_147;
    }
    current = v149.fields._current;
    if ( !v149.fields._current )
      sub_21FFECC(v13, v14);
    v17 = v149.fields._current->klass;
    v18 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v19 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_32;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_32:
      v20 = sub_2237E2C(v149.fields._current, IClassBoardLineModel_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v20)(current, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_21FFECC(0, v22);
    v24 = *(_QWORD *)v21;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v26 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v26 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_39;
      }
      v27 = v24 + 16LL * (*(_DWORD *)v26 + 5) + 312;
    }
    else
    {
LABEL_39:
      v27 = sub_2237E2C(v21, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) != 0 )
    {
      v28 = current->klass;
      v29 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v30 = &v28->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v30 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_46;
        }
        v31 = (__int64)&v28->vtable[*v30];
      }
      else
      {
LABEL_46:
        v31 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v32 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v31)(
                                          current,
                                          *(_QWORD *)(v31 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v32, v3, v33) )
        break;
    }
    v34 = current->klass;
    v35 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v36 = (IClassBoardLineModel_c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v36 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v35;
        v36 += 2;
        if ( !v35 )
          goto LABEL_53;
      }
      v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 1];
    }
    else
    {
LABEL_53:
      v37 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v38 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v37)(current, *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38 )
      sub_21FFECC(0, v39);
    v41 = *(_QWORD *)v38;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v43 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *(v43 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v42;
        v43 += 2;
        if ( !v42 )
          goto LABEL_60;
      }
      v44 = v41 + 16LL * (*(_DWORD *)v43 + 5) + 312;
    }
    else
    {
LABEL_60:
      v44 = sub_2237E2C(v38, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) != 0 )
    {
      v45 = current->klass;
      v46 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v47 = (IClassBoardLineModel_c **)&v45->_1.interfaceOffsets->offset;
        while ( *(v47 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v46;
          v47 += 2;
          if ( !v46 )
            goto LABEL_67;
        }
        v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1];
      }
      else
      {
LABEL_67:
        v48 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v49 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v48)(
                                          current,
                                          *(_QWORD *)(v48 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v49, v3, v50) )
        break;
    }
    v51 = current->klass;
    v52 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v53 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_74;
      }
      v54 = (__int64)&v51->vtable[*v53];
    }
    else
    {
LABEL_74:
      v54 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 0);
    }
    v55 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v54)(current, *(_QWORD *)(v54 + 8));
    v57 = v55;
    if ( !v55 )
      sub_21FFECC(0, v56);
    v58 = *(_QWORD *)v55;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v60 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_81;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_81:
      v61 = sub_2237E2C(v55, IClassBoardSquareModel_TypeInfo, 0);
    }
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
    v64 = v4->fields.entity;
    if ( !v64 )
      sub_21FFECC(v62, v63);
    if ( (_DWORD)v62 != v64->fields.id )
    {
      v65 = current->klass;
      v66 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v67 = &v65->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v67 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_89;
        }
        v68 = (__int64)&v65->vtable[*v67];
      }
      else
      {
LABEL_89:
        v68 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v69 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v68)(current, *(_QWORD *)(v68 + 8));
      v71 = v69;
      if ( !v69 )
        sub_21FFECC(0, v70);
      v72 = *(_QWORD *)v69;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
      {
        v74 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *(v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 2;
          if ( !v73 )
            goto LABEL_96;
        }
        v75 = v72 + 16LL * (*(_DWORD *)v74 + 14) + 312;
      }
      else
      {
LABEL_96:
        v75 = sub_2237E2C(v69, IClassBoardSquareModel_TypeInfo, 14);
      }
      v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8));
      v78 = v76;
      if ( !v76 )
        sub_21FFECC(0, v77);
      v79 = *(_QWORD *)v76;
      v80 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
      {
        v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v81 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_103;
        }
        v82 = v79 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_103:
        v82 = sub_2237E2C(v76, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) != 0 )
        break;
    }
    v83 = current->klass;
    v84 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v85 = (IClassBoardLineModel_c **)&v83->_1.interfaceOffsets->offset;
      while ( *(v85 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v84;
        v85 += 2;
        if ( !v84 )
          goto LABEL_110;
      }
      v86 = (__int64)&v83->vtable[*(_DWORD *)v85 + 1];
    }
    else
    {
LABEL_110:
      v86 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v87 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v86)(current, *(_QWORD *)(v86 + 8));
    v89 = v87;
    if ( !v87 )
      sub_21FFECC(0, v88);
    v90 = *(_QWORD *)v87;
    v91 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v92 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_117;
      }
      v93 = v90 + 16LL * *v92 + 312;
    }
    else
    {
LABEL_117:
      v93 = sub_2237E2C(v87, IClassBoardSquareModel_TypeInfo, 0);
    }
    v94 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
    v96 = v4->fields.entity;
    if ( !v96 )
      sub_21FFECC(v94, v95);
    if ( (_DWORD)v94 != v96->fields.id )
    {
      v97 = current->klass;
      v98 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v99 = (IClassBoardLineModel_c **)&v97->_1.interfaceOffsets->offset;
        while ( *(v99 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v98;
          v99 += 2;
          if ( !v98 )
            goto LABEL_125;
        }
        v100 = (__int64)&v97->vtable[*(_DWORD *)v99 + 1];
      }
      else
      {
LABEL_125:
        v100 = sub_2237E2C(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v101 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v100)(current, *(_QWORD *)(v100 + 8));
      v103 = v101;
      if ( !v101 )
        sub_21FFECC(0, v102);
      v104 = *(_QWORD *)v101;
      v105 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
      {
        v106 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v104 + 176) + 8LL);
        while ( *(v106 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v105;
          v106 += 2;
          if ( !v105 )
            goto LABEL_132;
        }
        v107 = v104 + 16LL * (*(_DWORD *)v106 + 14) + 312;
      }
      else
      {
LABEL_132:
        v107 = sub_2237E2C(v101, IClassBoardSquareModel_TypeInfo, 14);
      }
      v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v103, *(_QWORD *)(v107 + 8));
      v110 = v108;
      if ( !v108 )
        sub_21FFECC(0, v109);
      v111 = *(_QWORD *)v108;
      v112 = *(unsigned __int16 *)(*(_QWORD *)v108 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v108 + 302LL) )
      {
        v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v113 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_139;
        }
        v114 = v111 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_139:
        v114 = sub_2237E2C(v108, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v149,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  if ( !v15 )
  {
LABEL_147:
    v11 = 2;
LABEL_148:
    itemList = v4->fields.itemList;
    if ( itemList )
    {
      v116 = itemList->klass;
      v117 = *(unsigned __int16 *)&itemList->klass->_2.rank;
      if ( *(_WORD *)&itemList->klass->_2.rank )
      {
        v118 = &v116->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v118 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
        {
          --v117;
          v118 += 4;
          if ( !v117 )
            goto LABEL_153;
        }
        v119 = (__int64)&v116->vtable + 16 * *v118;
      }
      else
      {
LABEL_153:
        v119 = sub_2237E2C(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
      }
      v120 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v119)(
               itemList,
               *(_QWORD *)(v119 + 8));
      v148 = v120;
      v147.fields._list = 0;
      *(_QWORD *)&v147.fields._index = &v148;
      while ( 1 )
      {
        v122 = v148;
        if ( !v148 )
          sub_21FFECC(v120, v121);
        v123 = *(_QWORD *)v148;
        v124 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
        {
          v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v125 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v124;
            v125 += 4;
            if ( !v124 )
              goto LABEL_161;
          }
          v126 = v123 + 16LL * *v125 + 312;
        }
        else
        {
LABEL_161:
          v126 = sub_2237E2C(v148, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8));
        if ( (v127 & 1) == 0 )
          break;
        v129 = v148;
        if ( !v148 )
          sub_21FFECC(v127, v128);
        v130 = *(_QWORD *)v148;
        v131 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
        {
          v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v132 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
          {
            --v131;
            v132 += 4;
            if ( !v131 )
              goto LABEL_169;
          }
          v133 = v130 + 16LL * *v132 + 312;
        }
        else
        {
LABEL_169:
          v133 = sub_2237E2C(v148, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
        }
        v134 = (*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8));
        v136 = v134;
        if ( !v134 )
          sub_21FFECC(0, v135);
        v137 = *(_QWORD *)v134;
        v138 = *(unsigned __int16 *)(*(_QWORD *)v134 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v134 + 302LL) )
        {
          v139 = (IClassBoardItemModel_c **)(*(_QWORD *)(v137 + 176) + 8LL);
          while ( *(v139 - 1) != IClassBoardItemModel_TypeInfo )
          {
            --v138;
            v139 += 2;
            if ( !v138 )
              goto LABEL_176;
          }
          v140 = v137 + 16LL * (*(_DWORD *)v139 + 2) + 312;
        }
        else
        {
LABEL_176:
          v140 = sub_2237E2C(v134, IClassBoardItemModel_TypeInfo, 2);
        }
        v120 = (*(__int64 (__fastcall **)(__int64, _QWORD))v140)(v136, *(_QWORD *)(v140 + 8));
        if ( (v120 & 1) == 0 )
        {
          v11 |= 8u;
          break;
        }
      }
      v141 = v148;
      if ( v148 )
      {
        v142 = *(_QWORD *)v148;
        v143 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
        {
          v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v144 - 1) != System_IDisposable_TypeInfo )
          {
            --v143;
            v144 += 4;
            if ( !v143 )
              goto LABEL_185;
          }
          v145 = v142 + 16LL * *v144 + 312;
        }
        else
        {
LABEL_185:
          v145 = sub_2237E2C(v148, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v145)(v141, *(_QWORD *)(v145 + 8));
      }
      return v11;
    }
    goto LABEL_192;
  }
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_192;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_22:
    v11 = 0;
    goto LABEL_148;
  }
  return 1;
}


void ClassBoardSquareModel__InitializeItemList(
        ClassBoardSquareModel_o *this,
        System_Int32_array *itemIds,
        System_Int32_array *itemNums,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w23
  int32_t v20; // w24
  ClassBoardItemModel_o *v21; // x22
  const MethodInfo *v22; // x3
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8

  if ( (byte_593C55D & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardItemModel_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_593C55D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_itemList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !itemIds )
    goto LABEL_16;
  max_length = itemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v18 >= LODWORD(itemNums->max_length) )
LABEL_17:
        sub_21FFED4(v15);
      v19 = itemIds->m_Items[v18];
      v20 = itemNums->m_Items[v18];
      v21 = (ClassBoardItemModel_o *)sub_21FFEBC(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v21, v19, v20, v22);
      v15 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v15->fields._items;
      v30 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v21;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v21, v23, v24, v25, v26, v27, v28);
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_21FFECC(v15, v16);
  }
}


bool ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  bool v11; // w21
  IClassBoardSquareModel_c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  int32_t v16; // w22
  System_Collections_Generic_List_object__o *v17; // x20
  IClassBoardSquareModel_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardSquareModel_c *v22; // x8
  ClassBoardSquareModel_o *v23; // x23
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x23
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x23
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x24
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x24
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  Il2CppObject *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *v77; // x1
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  IClassBoardLineModel_c **v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x24
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x8
  __int64 v94; // x9
  IClassBoardLineModel_c **v95; // x10
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x24
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  struct ClassBoardSquareEntity_o *v104; // x8
  __int64 v105; // x8
  __int64 v106; // x9
  IClassBoardLineModel_c **v107; // x10
  __int64 v108; // x0
  Il2CppObject *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  Il2CppObject *v116; // x1
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x8
  __int64 v122; // x9
  int *v123; // x10
  __int64 v124; // x0
  int v125; // w22
  _BOOL8 v126; // x0
  __int64 v127; // x1
  Il2CppObject *current; // x20
  Il2CppClass *v129; // x8
  __int64 v130; // x9
  int32_t *v131; // x10
  __int64 v132; // x0
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+10h] [xbp-80h] BYREF
  __int64 v135; // [xsp+28h] [xbp-68h]

  v6 = this;
  if ( (byte_593C55E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_21FFC50(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_593C55E = 1;
  }
  v135 = 0;
  memset(&v134, 0, sizeof(v134));
  if ( !blankModel )
    goto LABEL_163;
  klass = blankModel->klass;
  v8 = *(unsigned __int16 *)&blankModel->klass->_2.rank;
  if ( *(_WORD *)&blankModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_2237E2C(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v10)(
                                      blankModel,
                                      *(_QWORD *)(v10 + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_163;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  v12 = blankModel->klass;
  v13 = *(unsigned __int16 *)&blankModel->klass->_2.rank;
  if ( *(_WORD *)&blankModel->klass->_2.rank )
  {
    v14 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&v12->vtable[*v14];
  }
  else
  {
LABEL_17:
    v15 = sub_2237E2C(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v16,
    (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v18 = blankModel->klass;
  v19 = *(unsigned __int16 *)&blankModel->klass->_2.rank;
  if ( *(_WORD *)&blankModel->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_23;
    }
    v21 = (__int64)&v18->vtable[*v20 + 9];
  }
  else
  {
LABEL_23:
    v21 = sub_2237E2C(blankModel, IClassBoardSquareModel_TypeInfo, 9);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v21)(
                                      blankModel,
                                      *(_QWORD *)(v21 + 8));
  if ( !this )
    goto LABEL_163;
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v25 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = (__int64)&v22->vtable + 16 * *v25;
  }
  else
  {
LABEL_30:
    v26 = sub_2237E2C(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  v135 = v27;
  if ( !v27 )
LABEL_130:
    sub_21FFECC(v27, v28);
  v29 = v27;
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_38;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_38:
      v33 = sub_2237E2C(v29, System_Collections_IEnumerator_TypeInfo, 0);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !v135 )
      sub_21FFECC(this, blankModel);
    v34 = *(_QWORD *)v135;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v36 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_46;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_46:
      v37 = sub_2237E2C(v135, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v135, *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38 )
      sub_21FFECC(0, v39);
    v41 = *(_QWORD *)v38;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v43 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_53;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_53:
      v44 = sub_2237E2C(v38, IClassBoardLineModel_TypeInfo, 0);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_21FFECC(0, v46);
    v48 = *(_QWORD *)v45;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v50 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_60;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_60:
      v51 = sub_2237E2C(v45, IClassBoardSquareModel_TypeInfo, 0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) != v16 )
    {
      v52 = *(_QWORD *)v40;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v54 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_67;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_67:
        v55 = sub_2237E2C(v40, IClassBoardLineModel_TypeInfo, 0);
      }
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v40, *(_QWORD *)(v55 + 8));
      v58 = v56;
      if ( !v56 )
        sub_21FFECC(0, v57);
      v59 = *(_QWORD *)v56;
      v60 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v61 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_74;
        }
        v62 = v59 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_74:
        v62 = sub_2237E2C(v56, IClassBoardSquareModel_TypeInfo, 0);
      }
      v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_21FFECC(v63, v64);
      if ( (_DWORD)v63 != entity->fields.id )
      {
        v66 = *(_QWORD *)v40;
        v67 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
        {
          v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v68 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v67;
            v68 += 4;
            if ( !v67 )
              goto LABEL_82;
          }
          v69 = v66 + 16LL * *v68 + 312;
        }
        else
        {
LABEL_82:
          v69 = sub_2237E2C(v40, IClassBoardLineModel_TypeInfo, 0);
        }
        v70 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v40, *(_QWORD *)(v69 + 8));
        v77 = v70;
        if ( !v17
          || (items = v17->fields._items,
              v79 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
              ++v17->fields._version,
              !items) )
        {
          sub_21FFECC(v70, v70);
        }
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v70,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v81[4] = (Il2CppClass *)v77;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v77, v71, v72, v73, v74, v75, v76);
        }
      }
    }
    v82 = *(_QWORD *)v40;
    v83 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v84 = (IClassBoardLineModel_c **)(*(_QWORD *)(v82 + 176) + 8LL);
      while ( *(v84 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v83;
        v84 += 2;
        if ( !v83 )
          goto LABEL_93;
      }
      v85 = v82 + 16LL * (*(_DWORD *)v84 + 1) + 312;
    }
    else
    {
LABEL_93:
      v85 = sub_2237E2C(v40, IClassBoardLineModel_TypeInfo, 1);
    }
    v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v40, *(_QWORD *)(v85 + 8));
    v88 = v86;
    if ( !v86 )
      sub_21FFECC(0, v87);
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
          goto LABEL_100;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_100:
      v92 = sub_2237E2C(v86, IClassBoardSquareModel_TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
    if ( (_DWORD)v27 != v16 )
    {
      v93 = *(_QWORD *)v40;
      v94 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v95 = (IClassBoardLineModel_c **)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *(v95 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v94;
          v95 += 2;
          if ( !v94 )
            goto LABEL_107;
        }
        v96 = v93 + 16LL * (*(_DWORD *)v95 + 1) + 312;
      }
      else
      {
LABEL_107:
        v96 = sub_2237E2C(v40, IClassBoardLineModel_TypeInfo, 1);
      }
      v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v40, *(_QWORD *)(v96 + 8));
      v99 = v97;
      if ( !v97 )
        sub_21FFECC(0, v98);
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
            goto LABEL_114;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_114:
        v103 = sub_2237E2C(v97, IClassBoardSquareModel_TypeInfo, 0);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
      v104 = v6->fields.entity;
      if ( !v104 )
        sub_21FFECC(v27, v28);
      if ( (_DWORD)v27 != v104->fields.id )
      {
        v105 = *(_QWORD *)v40;
        v106 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
        {
          v107 = (IClassBoardLineModel_c **)(*(_QWORD *)(v105 + 176) + 8LL);
          while ( *(v107 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v106;
            v107 += 2;
            if ( !v106 )
              goto LABEL_122;
          }
          v108 = v105 + 16LL * (*(_DWORD *)v107 + 1) + 312;
        }
        else
        {
LABEL_122:
          v108 = sub_2237E2C(v40, IClassBoardLineModel_TypeInfo, 1);
        }
        v109 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v108)(v40, *(_QWORD *)(v108 + 8));
        v116 = v109;
        if ( !v17
          || (v117 = v17->fields._items,
              v118 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
              ++v17->fields._version,
              !v117) )
        {
          sub_21FFECC(v109, v109);
        }
        v119 = v17->fields._size;
        if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v109,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
        }
        else
        {
          v120 = &v117->obj.klass + v119;
          v17->fields._size = v119 + 1;
          v120[4] = (Il2CppClass *)v116;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v120 + 4), (int32_t)v116, v110, v111, v112, v113, v114, v115);
        }
      }
    }
    v29 = v135;
    if ( !v135 )
      goto LABEL_130;
  }
  if ( v135 )
  {
    v121 = *(_QWORD *)v135;
    v122 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v123 = (int *)(*(_QWORD *)(v121 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v123 - 1) != System_IDisposable_TypeInfo )
      {
        --v122;
        v123 += 4;
        if ( !v122 )
          goto LABEL_136;
      }
      v124 = v121 + 16LL * *v123 + 312;
    }
    else
    {
LABEL_136:
      v124 = sub_2237E2C(v135, System_IDisposable_TypeInfo, 0);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v124)(v135, *(_QWORD *)(v124 + 8));
  }
  if ( !v17 )
LABEL_163:
    sub_21FFECC(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    v17,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v125 = 0;
  do
  {
    v126 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v134,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v11 = v126;
    if ( !v126 )
      break;
    current = v134.fields._current;
    if ( !v134.fields._current )
      sub_21FFECC(v126, v127);
    v129 = v134.fields._current->klass;
    v130 = *(unsigned __int16 *)&v134.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v134.fields._current->klass->_2.rank )
    {
      v131 = &v129->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v131 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v130;
        v131 += 4;
        if ( !v130 )
          goto LABEL_147;
      }
      v132 = (__int64)&v129->vtable[*v131 + 15];
    }
    else
    {
LABEL_147:
      v132 = sub_2237E2C(v134.fields._current, IClassBoardSquareModel_TypeInfo, 15);
    }
    v125 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v132)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v132 + 8));
  }
  while ( (v125 & 1) == 0 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v134,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquareModel__UpdatePosition(
        ClassBoardSquareModel_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  float y; // v0.s[1]

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  y = pos.fields.y;
  *(int8x8_t *)&entity->fields.posX = vbsl_s8(
                                        vceq_f32(*(float32x2_t *)&pos.fields.x, vdup_n_s32(0x7F800000u)),
                                        (int8x8_t)0x8000000080000000LL,
                                        vcvt_s32_f32(*(float32x2_t *)&pos.fields.x));
}


int32_t ClassBoardSquareModel__get_AssetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.assetId;
}


int32_t ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.classBoardBaseId;
}


bool ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_593C55A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_593C55A = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.iconId;
}


int32_t ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.id;
}


bool ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(0, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0);
}


bool ClassBoardSquareModel__get_IsGrand(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(0, method);
  return ClassBoardSquareEntity__IsGrand(entity, 0);
}


bool ClassBoardSquareModel__get_IsSetGrandSvt(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(0, method);
  return ClassBoardSquareEntity__IsSetGrandSvt(entity, 0);
}


bool ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(0, method);
  return ClassBoardSquareEntity__get_IsStart(entity, 0);
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *ClassBoardSquareModel__get_ItemList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)this->fields.itemList;
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *ClassBoardSquareModel__get_LineList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *)this->fields.lineList;
}


UnityEngine_Vector3_o ClassBoardSquareModel__get_Position(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  float v3; // s2
  float posX; // s0
  float posY; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  v3 = 0.0;
  posX = (float)entity->fields.posX;
  posY = (float)entity->fields.posY;
  result.fields.z = v3;
  result.fields.y = posY;
  result.fields.x = posX;
  return result;
}


int32_t ClassBoardSquareModel__get_SkillType(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.skillType;
}


int32_t ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.targetId;
}


int32_t ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.upSkillLv;
}


IClassBoardSquareUser_o *ClassBoardSquareModel__get_User(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  return this->fields.user;
}


void ClassBoardSquareModel___c__DisplayClass43_0___ctor(
        ClassBoardSquareModel___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSquareModel___c__DisplayClass43_0___FindLinkSquares_b__0(
        ClassBoardSquareModel___c__DisplayClass43_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass43_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass43_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass43_0_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_593C560 & 1) == 0 )
  {
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    byte_593C560 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_2237E2C(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                            x,
                                                            *(_QWORD *)(v8 + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  v12 = *(unsigned __int16 *)&lineModel->klass->_2.rank;
  if ( *(_WORD *)&lineModel->klass->_2.rank )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*v13];
  }
  else
  {
LABEL_15:
    v14 = sub_2237E2C(lineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_21FFECC(this, x);
  v15 = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)&v15->vtable + 16 * *v18;
  }
  else
  {
LABEL_22:
    v19 = sub_2237E2C(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass43_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}


bool ClassBoardSquareModel___c__DisplayClass43_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass43_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass43_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  __int64 v12; // x9
  IClassBoardLineModel_c **v13; // x10
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass43_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass43_0_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_593C561 & 1) == 0 )
  {
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    byte_593C561 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_2237E2C(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                            x,
                                                            *(_QWORD *)(v8 + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  v12 = *(unsigned __int16 *)&lineModel->klass->_2.rank;
  if ( *(_WORD *)&lineModel->klass->_2.rank )
  {
    v13 = (IClassBoardLineModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v12;
      v13 += 2;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*(_DWORD *)v13 + 1];
  }
  else
  {
LABEL_15:
    v14 = sub_2237E2C(lineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_21FFECC(this, x);
  v15 = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)&v15->vtable + 16 * *v18;
  }
  else
  {
LABEL_22:
    v19 = sub_2237E2C(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass43_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}