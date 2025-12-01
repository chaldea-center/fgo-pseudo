void ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  struct ClassBoardSquareEntity_o *v42; // x8

  if ( (byte_4CCB0D4 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardSquareUser_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_4CCB0D4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.lineList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.entity = squareEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)squareEntity, v19, v20, v21, v22, v23, v24);
  entity = this->fields.entity;
  v26 = sub_1C715FC(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  *(_QWORD *)(v26 + 24) = entity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 24), (int32_t)entity, v27, v28, v29, v30, v31, v32);
  this->fields.user = (struct IClassBoardSquareUser_o *)v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.user, v26, v33, v34, v35, v36, v37, v38);
  v42 = this->fields.entity;
  if ( !v42 )
    sub_1C71608(v39, v40);
  ClassBoardSquareModel__InitializeItemList(this, v42->fields.itemIds, v42->fields.itemNums, v41);
}


void ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4CCB0D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4CCB0D5 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v12 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1C71608(lineList, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)line;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)line, (int32_t)method, v3, v4, v5, v6, v7);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
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
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
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
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
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

  if ( (byte_4CCB0D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C713B0(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_1C713B0(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__);
    sub_1C713B0(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__);
    sub_1C713B0(&ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    byte_4CCB0D8 = 1;
  }
  memset(&v146, 0, sizeof(v146));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1C71608(0, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    lineList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v146 = v145;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v146,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_1C715FC(ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      sub_1C71608(v7, v8);
    current = (int32_t)v146.fields._current;
    *(_QWORD *)(v6 + 16) = v146.fields._current;
    v16 = (__int64 **)(v6 + 16);
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
    v19 = *(__int64 **)(v6 + 16);
    if ( !v19 )
      sub_1C71608(v17, v18);
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
      v23 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_1C71608(0, v25);
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
      v30 = sub_1C47738(v24, IClassBoardSquareModel_TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1C71608(v31, v32);
    if ( (_DWORD)v31 == entity->fields.id
      || (v34 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v35 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v35,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__,
            0),
          v31 = BasicHelper__Any_object_(
                  v34,
                  (System_Func_T__bool__o *)v35,
                  (const MethodInfo_31341D4 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v31 & 1) != 0) )
    {
      v36 = *v16;
      if ( !*v16 )
        sub_1C71608(v31, v32);
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
        v40 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 1);
      }
      v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
      v49 = v47;
      if ( !v47 )
        sub_1C71608(0, v48);
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
        v53 = sub_1C47738(v47, IClassBoardSquareModel_TypeInfo, 0);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8));
      v56 = this->fields.entity;
      if ( !v56 )
        sub_1C71608(v54, v55);
      if ( (_DWORD)v54 != v56->fields.id )
      {
        v57 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v58 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__,
          0);
        v59 = BasicHelper__Any_object_(
                v57,
                (System_Func_T__bool__o *)v58,
                (const MethodInfo_31341D4 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v59 )
        {
          v61 = *v16;
          if ( !*v16 )
            sub_1C71608(v59, v60);
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
            v66 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 1);
          }
          v100 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v66)(v61, *(_QWORD *)(v66 + 8));
          v107 = v100;
          if ( !v63 )
            sub_1C71608(v100, v100);
          items = v63->fields._items;
          v109 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v63->fields._version;
          if ( !items )
            sub_1C71608(v100, v100);
          size = v63->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              v100,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = &items->obj.klass + size;
            v63->fields._size = size + 1;
            v111[4] = (Il2CppClass *)v107;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v111 + 4), (int32_t)v107, v101, v102, v103, v104, v105, v106);
          }
          v114 = *v16;
          if ( !*v16 )
            sub_1C71608(v112, v113);
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
            v118 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 1);
          }
          v119 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
          v121 = v119;
          if ( !v119 )
            sub_1C71608(0, v120);
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
            v125 = sub_1C47738(v119, IClassBoardSquareModel_TypeInfo, 5);
          }
          v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
          if ( (v126 & 1) != 0 )
          {
            v128 = *v16;
            if ( !v128 )
              sub_1C71608(v126, v127);
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
              v132 = sub_1C47738(v128, IClassBoardLineModel_TypeInfo, 1);
            }
            v133 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v132)(v128, *(_QWORD *)(v132 + 8));
            v135 = v133;
            if ( !v133 )
              sub_1C71608(0, v141);
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
        sub_1C71608(v31, v32);
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
        v46 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 0);
      }
      v67 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8));
      v74 = v67;
      if ( !v43 )
        sub_1C71608(v67, v67);
      v75 = v43->fields._items;
      v76 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v43->fields._version;
      if ( !v75 )
        sub_1C71608(v67, v67);
      v77 = v43->fields._size;
      if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v67,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &v75->obj.klass + v77;
        v43->fields._size = v77 + 1;
        v78[4] = (Il2CppClass *)v74;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v78 + 4), (int32_t)v74, v68, v69, v70, v71, v72, v73);
      }
      v81 = *v16;
      if ( !*v16 )
        sub_1C71608(v79, v80);
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
        v85 = sub_1C47738(*v16, IClassBoardLineModel_TypeInfo, 0);
      }
      v86 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
      v88 = v86;
      if ( !v86 )
        sub_1C71608(0, v87);
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
        v92 = sub_1C47738(v86, IClassBoardSquareModel_TypeInfo, 5);
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      if ( (v93 & 1) != 0 )
      {
        v95 = *v16;
        if ( !v95 )
          sub_1C71608(v93, v94);
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
          v99 = sub_1C47738(v95, IClassBoardLineModel_TypeInfo, 0);
        }
        v133 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8));
        v135 = v133;
        if ( !v133 )
          sub_1C71608(0, v134);
        v136 = *(_QWORD *)v133;
        v137 = IClassBoardSquareModel_TypeInfo;
        v138 = *(unsigned __int16 *)(*(_QWORD *)v133 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v133 + 302LL) )
        {
LABEL_113:
          v140 = sub_1C47738(v133, v137, 17);
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
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  int32_t v10; // w20
  struct ClassBoardSquareEntity_o *entity; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0
  Il2CppClass *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  IClassBoardSquareModel_o *v30; // x1
  const MethodInfo *v31; // x3
  Il2CppClass *v32; // x8
  __int64 v33; // x9
  IClassBoardLineModel_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x22
  __int64 v39; // x8
  __int64 v40; // x9
  IClassBoardSquareModel_c **v41; // x10
  __int64 v42; // x0
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  IClassBoardLineModel_c **v45; // x10
  __int64 v46; // x0
  IClassBoardSquareModel_o *v47; // x1
  const MethodInfo *v48; // x3
  Il2CppClass *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x22
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  struct ClassBoardSquareEntity_o *v62; // x8
  Il2CppClass *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x22
  __int64 v70; // x8
  __int64 v71; // x9
  IClassBoardSquareModel_c **v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x22
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  Il2CppClass *v81; // x8
  __int64 v82; // x9
  IClassBoardLineModel_c **v83; // x10
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x22
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  struct ClassBoardSquareEntity_o *v94; // x8
  Il2CppClass *v95; // x8
  __int64 v96; // x9
  IClassBoardLineModel_c **v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x21
  __int64 v102; // x8
  __int64 v103; // x9
  IClassBoardSquareModel_c **v104; // x10
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x21
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x19
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  __int64 v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x21
  __int64 v131; // x8
  __int64 v132; // x9
  IClassBoardItemModel_c **v133; // x10
  __int64 v134; // x0
  __int64 v135; // x8
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+20h] [xbp-70h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_4CCB0D2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&IClassBoardItemModel_TypeInfo);
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareUser_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_4CCB0D2 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_184;
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
    v9 = sub_1C47738(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))v9)(user, *(_QWORD *)(v9 + 8)) & 1) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardSquareModel_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_184;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      entity->fields.classBoardBaseId,
                                      (const MethodInfo_3408E80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_184;
  if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)this, 0) )
    return 2;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart((ClassBoardSquareEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_142;
  this = (ClassBoardSquareModel_o *)v4->fields.lineList;
  if ( !this )
LABEL_184:
    sub_1C71608(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v141 = v140;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v141,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v10 = 2;
LABEL_145:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v114 = itemList->klass;
        v115 = *(unsigned __int16 *)&itemList->klass->_2.rank;
        if ( *(_WORD *)&itemList->klass->_2.rank )
        {
          v116 = &v114->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v116 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v115;
            v116 += 4;
            if ( !v115 )
              goto LABEL_150;
          }
          v117 = (__int64)&v114->vtable + 16 * *v116;
        }
        else
        {
LABEL_150:
          v117 = sub_1C47738(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
        }
        v119 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v117)(
                 itemList,
                 *(_QWORD *)(v117 + 8));
        if ( !v119 )
          sub_1C71608(0, v118);
        while ( 1 )
        {
          v120 = *(_QWORD *)v119;
          v121 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
          {
            v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v122 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v121;
              v122 += 4;
              if ( !v121 )
                goto LABEL_157;
            }
            v123 = v120 + 16LL * *v122 + 312;
          }
          else
          {
LABEL_157:
            v123 = sub_1C47738(v119, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v119, *(_QWORD *)(v123 + 8)) & 1) == 0 )
            break;
          v124 = *(_QWORD *)v119;
          v125 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
          {
            v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v126 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              --v125;
              v126 += 4;
              if ( !v125 )
                goto LABEL_164;
            }
            v127 = v124 + 16LL * *v126 + 312;
          }
          else
          {
LABEL_164:
            v127 = sub_1C47738(v119, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
          }
          v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))v127)(v119, *(_QWORD *)(v127 + 8));
          v130 = v128;
          if ( !v128 )
            sub_1C71608(0, v129);
          v131 = *(_QWORD *)v128;
          v132 = *(unsigned __int16 *)(*(_QWORD *)v128 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v128 + 302LL) )
          {
            v133 = (IClassBoardItemModel_c **)(*(_QWORD *)(v131 + 176) + 8LL);
            while ( *(v133 - 1) != IClassBoardItemModel_TypeInfo )
            {
              --v132;
              v133 += 2;
              if ( !v132 )
                goto LABEL_171;
            }
            v134 = v131 + 16LL * (*(_DWORD *)v133 + 2) + 312;
          }
          else
          {
LABEL_171:
            v134 = sub_1C47738(v128, IClassBoardItemModel_TypeInfo, 2);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v134)(v130, *(_QWORD *)(v134 + 8)) & 1) == 0 )
          {
            v10 |= 8u;
            break;
          }
        }
        v135 = *(_QWORD *)v119;
        v136 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
        {
          v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v137 - 1) != System_IDisposable_TypeInfo )
          {
            --v136;
            v137 += 4;
            if ( !v136 )
              goto LABEL_179;
          }
          v138 = v135 + 16LL * *v137 + 312;
        }
        else
        {
LABEL_179:
          v138 = sub_1C47738(v119, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v138)(v119, *(_QWORD *)(v138 + 8));
        return v10;
      }
      goto LABEL_184;
    }
    current = v141.fields._current;
    if ( !v141.fields._current )
      sub_1C71608(v12, v13);
    v15 = v141.fields._current->klass;
    v16 = *(unsigned __int16 *)&v141.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v141.fields._current->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v17 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_30;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_30:
      v18 = sub_1C47738(v141.fields._current, IClassBoardLineModel_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v18)(current, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C71608(0, v20);
    v22 = *(_QWORD *)v19;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v24 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_37;
      }
      v25 = v22 + 16LL * (*(_DWORD *)v24 + 5) + 312;
    }
    else
    {
LABEL_37:
      v25 = sub_1C47738(v19, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) != 0 )
    {
      v26 = current->klass;
      v27 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v28 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_44;
        }
        v29 = (__int64)&v26->vtable[*v28];
      }
      else
      {
LABEL_44:
        v29 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v30 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v29)(
                                          current,
                                          *(_QWORD *)(v29 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v30, v3, v31) )
        break;
    }
    v32 = current->klass;
    v33 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v34 = (IClassBoardLineModel_c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_51;
      }
      v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 1];
    }
    else
    {
LABEL_51:
      v35 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v36 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v35)(current, *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_1C71608(0, v37);
    v39 = *(_QWORD *)v36;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v41 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v40;
        v41 += 2;
        if ( !v40 )
          goto LABEL_58;
      }
      v42 = v39 + 16LL * (*(_DWORD *)v41 + 5) + 312;
    }
    else
    {
LABEL_58:
      v42 = sub_1C47738(v36, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) != 0 )
    {
      v43 = current->klass;
      v44 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v45 = (IClassBoardLineModel_c **)&v43->_1.interfaceOffsets->offset;
        while ( *(v45 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v44;
          v45 += 2;
          if ( !v44 )
            goto LABEL_65;
        }
        v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1];
      }
      else
      {
LABEL_65:
        v46 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v47 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(
                                          current,
                                          *(_QWORD *)(v46 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v47, v3, v48) )
        break;
    }
    v49 = current->klass;
    v50 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v51 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_72;
      }
      v52 = (__int64)&v49->vtable[*v51];
    }
    else
    {
LABEL_72:
      v52 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 0);
    }
    v53 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(current, *(_QWORD *)(v52 + 8));
    v55 = v53;
    if ( !v53 )
      sub_1C71608(0, v54);
    v56 = *(_QWORD *)v53;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v58 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_79;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_79:
      v59 = sub_1C47738(v53, IClassBoardSquareModel_TypeInfo, 0);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    v62 = v4->fields.entity;
    if ( !v62 )
      sub_1C71608(v60, v61);
    if ( (_DWORD)v60 != v62->fields.id )
    {
      v63 = current->klass;
      v64 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v65 = &v63->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v65 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_87;
        }
        v66 = (__int64)&v63->vtable[*v65];
      }
      else
      {
LABEL_87:
        v66 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v67 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v66)(current, *(_QWORD *)(v66 + 8));
      v69 = v67;
      if ( !v67 )
        sub_1C71608(0, v68);
      v70 = *(_QWORD *)v67;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v72 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *(v72 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v71;
          v72 += 2;
          if ( !v71 )
            goto LABEL_94;
        }
        v73 = v70 + 16LL * (*(_DWORD *)v72 + 14) + 312;
      }
      else
      {
LABEL_94:
        v73 = sub_1C47738(v67, IClassBoardSquareModel_TypeInfo, 14);
      }
      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
      v76 = v74;
      if ( !v74 )
        sub_1C71608(0, v75);
      v77 = *(_QWORD *)v74;
      v78 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v79 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v78;
          v79 += 4;
          if ( !v78 )
            goto LABEL_101;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_101:
        v80 = sub_1C47738(v74, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8)) & 1) != 0 )
        break;
    }
    v81 = current->klass;
    v82 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v83 = (IClassBoardLineModel_c **)&v81->_1.interfaceOffsets->offset;
      while ( *(v83 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v82;
        v83 += 2;
        if ( !v82 )
          goto LABEL_108;
      }
      v84 = (__int64)&v81->vtable[*(_DWORD *)v83 + 1];
    }
    else
    {
LABEL_108:
      v84 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v85 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v84)(current, *(_QWORD *)(v84 + 8));
    v87 = v85;
    if ( !v85 )
      sub_1C71608(0, v86);
    v88 = *(_QWORD *)v85;
    v89 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v90 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v89;
        v90 += 4;
        if ( !v89 )
          goto LABEL_115;
      }
      v91 = v88 + 16LL * *v90 + 312;
    }
    else
    {
LABEL_115:
      v91 = sub_1C47738(v85, IClassBoardSquareModel_TypeInfo, 0);
    }
    v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
    v94 = v4->fields.entity;
    if ( !v94 )
      sub_1C71608(v92, v93);
    if ( (_DWORD)v92 != v94->fields.id )
    {
      v95 = current->klass;
      v96 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v97 = (IClassBoardLineModel_c **)&v95->_1.interfaceOffsets->offset;
        while ( *(v97 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v96;
          v97 += 2;
          if ( !v96 )
            goto LABEL_123;
        }
        v98 = (__int64)&v95->vtable[*(_DWORD *)v97 + 1];
      }
      else
      {
LABEL_123:
        v98 = sub_1C47738(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v99 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v98)(current, *(_QWORD *)(v98 + 8));
      v101 = v99;
      if ( !v99 )
        sub_1C71608(0, v100);
      v102 = *(_QWORD *)v99;
      v103 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
      {
        v104 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v102 + 176) + 8LL);
        while ( *(v104 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v103;
          v104 += 2;
          if ( !v103 )
            goto LABEL_130;
        }
        v105 = v102 + 16LL * (*(_DWORD *)v104 + 14) + 312;
      }
      else
      {
LABEL_130:
        v105 = sub_1C47738(v99, IClassBoardSquareModel_TypeInfo, 14);
      }
      v106 = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8));
      v108 = v106;
      if ( !v106 )
        sub_1C71608(0, v107);
      v109 = *(_QWORD *)v106;
      v110 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
      {
        v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v111 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v110;
          v111 += 4;
          if ( !v110 )
            goto LABEL_137;
        }
        v112 = v109 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_137:
        v112 = sub_1C47738(v106, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v108, *(_QWORD *)(v112 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_142:
    v10 = 0;
    goto LABEL_145;
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w23
  int32_t v20; // w24
  ClassBoardItemModel_o *v21; // x22
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8

  if ( (byte_4CCB0D6 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardItemModel_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4CCB0D6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_itemList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
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
        sub_1C71610(v15);
      v19 = itemIds->m_Items[v18];
      v20 = itemNums->m_Items[v18];
      v21 = (ClassBoardItemModel_o *)sub_1C715FC(ClassBoardItemModel_TypeInfo);
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
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v21;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v21, v23, v24, v25, v26, v27, v28);
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_1C71608(v15, v16);
  }
}


bool ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  IClassBoardSquareModel_c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  int32_t v16; // w23
  System_Collections_Generic_List_object__o *v17; // x20
  IClassBoardSquareModel_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardSquareModel_c *v22; // x8
  ClassBoardSquareModel_o *v23; // x21
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x24
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x25
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x25
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x1
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  IClassBoardLineModel_c **v83; // x10
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x25
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  IClassBoardLineModel_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x25
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x1
  struct ClassBoardSquareEntity_o *v105; // x8
  __int64 v106; // x8
  __int64 v107; // x9
  IClassBoardLineModel_c **v108; // x10
  __int64 v109; // x0
  Il2CppObject *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  Il2CppObject *v117; // x1
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  int v126; // w22
  _BOOL8 v127; // x0
  __int64 v128; // x1
  bool v129; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v131; // x8
  __int64 v132; // x9
  int32_t *v133; // x10
  __int64 v134; // x0
  int v135; // w19
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_4CCB0D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_1C713B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4CCB0D7 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  if ( !blankModel )
    goto LABEL_160;
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
    v10 = sub_1C47738(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v10)(
                                      blankModel,
                                      *(_QWORD *)(v10 + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_36C1454 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
    v15 = sub_1C47738(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v16,
    (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    v21 = sub_1C47738(blankModel, IClassBoardSquareModel_TypeInfo, 9);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v21)(
                                      blankModel,
                                      *(_QWORD *)(v21 + 8));
  if ( !this )
    goto LABEL_160;
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
    v26 = sub_1C47738(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1C71608(0, v27);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_37;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_37:
      v32 = sub_1C47738(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v35 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_44;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_44:
      v36 = sub_1C47738(v28, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1C71608(0, v38);
    v40 = *(_QWORD *)v37;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v42 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_51;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_51:
      v43 = sub_1C47738(v37, IClassBoardLineModel_TypeInfo, 0);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      sub_1C71608(0, v45);
    v47 = *(_QWORD *)v44;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v49 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_58;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_58:
      v50 = sub_1C47738(v44, IClassBoardSquareModel_TypeInfo, 0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) != v16 )
    {
      v51 = *(_QWORD *)v39;
      v52 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v53 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v52;
          v53 += 4;
          if ( !v52 )
            goto LABEL_65;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_65:
        v54 = sub_1C47738(v39, IClassBoardLineModel_TypeInfo, 0);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v39, *(_QWORD *)(v54 + 8));
      v57 = v55;
      if ( !v55 )
        sub_1C71608(0, v56);
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
            goto LABEL_72;
        }
        v61 = v58 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_72:
        v61 = sub_1C47738(v55, IClassBoardSquareModel_TypeInfo, 0);
      }
      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1C71608(v62, v63);
      if ( (_DWORD)v62 != entity->fields.id )
      {
        v65 = *(_QWORD *)v39;
        v66 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v67 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v66;
            v67 += 4;
            if ( !v66 )
              goto LABEL_80;
          }
          v68 = v65 + 16LL * *v67 + 312;
        }
        else
        {
LABEL_80:
          v68 = sub_1C47738(v39, IClassBoardLineModel_TypeInfo, 0);
        }
        v69 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v39, *(_QWORD *)(v68 + 8));
        v76 = v69;
        if ( !v17 )
          sub_1C71608(v69, v69);
        items = v17->fields._items;
        v78 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1C71608(v69, v69);
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v69,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v80[4] = (Il2CppClass *)v76;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v80 + 4), (int32_t)v76, v70, v71, v72, v73, v74, v75);
        }
      }
    }
    v81 = *(_QWORD *)v39;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v83 = (IClassBoardLineModel_c **)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *(v83 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v82;
        v83 += 2;
        if ( !v82 )
          goto LABEL_91;
      }
      v84 = v81 + 16LL * (*(_DWORD *)v83 + 1) + 312;
    }
    else
    {
LABEL_91:
      v84 = sub_1C47738(v39, IClassBoardLineModel_TypeInfo, 1);
    }
    v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v39, *(_QWORD *)(v84 + 8));
    v87 = v85;
    if ( !v85 )
      sub_1C71608(0, v86);
    v88 = *(_QWORD *)v85;
    v89 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v90 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v89;
        v90 += 4;
        if ( !v89 )
          goto LABEL_98;
      }
      v91 = v88 + 16LL * *v90 + 312;
    }
    else
    {
LABEL_98:
      v91 = sub_1C47738(v85, IClassBoardSquareModel_TypeInfo, 0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8)) != v16 )
    {
      v92 = *(_QWORD *)v39;
      v93 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v94 = (IClassBoardLineModel_c **)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *(v94 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v93;
          v94 += 2;
          if ( !v93 )
            goto LABEL_105;
        }
        v95 = v92 + 16LL * (*(_DWORD *)v94 + 1) + 312;
      }
      else
      {
LABEL_105:
        v95 = sub_1C47738(v39, IClassBoardLineModel_TypeInfo, 1);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v39, *(_QWORD *)(v95 + 8));
      v98 = v96;
      if ( !v96 )
        sub_1C71608(0, v97);
      v99 = *(_QWORD *)v96;
      v100 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
      {
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v101 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v100;
          v101 += 4;
          if ( !v100 )
            goto LABEL_112;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_112:
        v102 = sub_1C47738(v96, IClassBoardSquareModel_TypeInfo, 0);
      }
      v103 = (*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v98, *(_QWORD *)(v102 + 8));
      v105 = v6->fields.entity;
      if ( !v105 )
        sub_1C71608(v103, v104);
      if ( (_DWORD)v103 != v105->fields.id )
      {
        v106 = *(_QWORD *)v39;
        v107 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v108 = (IClassBoardLineModel_c **)(*(_QWORD *)(v106 + 176) + 8LL);
          while ( *(v108 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v107;
            v108 += 2;
            if ( !v107 )
              goto LABEL_120;
          }
          v109 = v106 + 16LL * (*(_DWORD *)v108 + 1) + 312;
        }
        else
        {
LABEL_120:
          v109 = sub_1C47738(v39, IClassBoardLineModel_TypeInfo, 1);
        }
        v110 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v39, *(_QWORD *)(v109 + 8));
        v117 = v110;
        if ( !v17 )
          sub_1C71608(v110, v110);
        v118 = v17->fields._items;
        v119 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !v118 )
          sub_1C71608(v110, v110);
        v120 = v17->fields._size;
        if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v110,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v121 = &v118->obj.klass + v120;
          v17->fields._size = v120 + 1;
          v121[4] = (Il2CppClass *)v117;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v121 + 4), (int32_t)v117, v111, v112, v113, v114, v115, v116);
        }
      }
    }
  }
  v122 = *(_QWORD *)v28;
  v123 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
    {
      --v123;
      v124 += 4;
      if ( !v123 )
        goto LABEL_131;
    }
    v125 = v122 + 16LL * *v124 + 312;
  }
  else
  {
LABEL_131:
    v125 = sub_1C47738(v28, System_IDisposable_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v28, *(_QWORD *)(v125 + 8));
  if ( !v17 )
LABEL_160:
    sub_1C71608(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v137,
    v17,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v126 = 0;
  while ( 1 )
  {
    v127 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v137,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v129 = v127;
    if ( !v127 )
      break;
    current = v137.fields._current;
    if ( !v137.fields._current )
      sub_1C71608(v127, v128);
    v131 = v137.fields._current->klass;
    v132 = *(unsigned __int16 *)&v137.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v137.fields._current->klass->_2.rank )
    {
      v133 = &v131->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v133 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v132;
        v133 += 4;
        if ( !v132 )
          goto LABEL_141;
      }
      v134 = (__int64)&v131->vtable[*v133 + 15];
    }
    else
    {
LABEL_141:
      v134 = sub_1C47738(v137.fields._current, IClassBoardSquareModel_TypeInfo, 15);
    }
    v126 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v134)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v134 + 8));
    if ( (v126 & 1) != 0 )
    {
      v135 = 9;
      goto LABEL_146;
    }
  }
  v135 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v129 && v135 == 9;
}


void ClassBoardSquareModel__UpdatePosition(
        ClassBoardSquareModel_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  int x; // w9
  int y; // w10

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  x = (int)pos.fields.x;
  if ( pos.fields.x == INFINITY )
    x = 0x80000000;
  if ( pos.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)pos.fields.y;
  entity->fields.posX = x;
  entity->fields.posY = y;
}


int32_t ClassBoardSquareModel__get_AssetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.assetId;
}


int32_t ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.classBoardBaseId;
}


bool ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB0D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_4CCB0D3 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.iconId;
}


int32_t ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.id;
}


bool ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(0, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0);
}


bool ClassBoardSquareModel__get_IsGrand(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(0, method);
  return ClassBoardSquareEntity__IsGrand(entity, 0);
}


bool ClassBoardSquareModel__get_IsSetGrandSvt(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(0, method);
  return ClassBoardSquareEntity__IsSetGrandSvt(entity, 0);
}


bool ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(0, method);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  return entity->fields.skillType;
}


int32_t ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.targetId;
}


int32_t ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
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
  if ( (byte_4CCB0D9 & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCB0D9 = 1;
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
    v8 = sub_1C47738(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C47738(lineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C71608(this, x);
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
    v19 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 0);
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
  if ( (byte_4CCB0DA & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCB0DA = 1;
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
    v8 = sub_1C47738(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C47738(lineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C71608(this, x);
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
    v19 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass43_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}