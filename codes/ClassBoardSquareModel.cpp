void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct ClassBoardSquareEntity_o *v22; // x8

  if ( (byte_4A5E638 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSquareUser_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_4A5E638 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lineList, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)squareEntity, v11, v12);
  entity = this->fields.entity;
  v14 = sub_1B887FC(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_QWORD *)(v14 + 24) = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)entity, v15, v16);
  this->fields.user = (struct IClassBoardSquareUser_o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.user, v14, v17, v18);
  v22 = this->fields.entity;
  if ( !v22 )
    sub_1B8880C(v19, v20);
  ClassBoardSquareModel__InitializeItemList(this, v22->fields.itemIds, v22->fields.itemNums, v21);
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

  if ( (byte_4A5E639 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4A5E639 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1B8880C(lineList, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)line;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)line, (int32_t)method, v3);
  }
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
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
  int32_t current; // w1
  __int64 **v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v30; // x23
  System_Func_object__bool__o *v31; // x24
  __int64 *v32; // x23
  __int64 v33; // x8
  __int64 v34; // x9
  IClassBoardLineModel_c **v35; // x10
  __int64 v36; // x0
  __int64 *v37; // x23
  __int64 v38; // x8
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x23
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  struct ClassBoardSquareEntity_o *v52; // x8
  System_Collections_Generic_List_T__o *v53; // x23
  System_Func_object__bool__o *v54; // x24
  _BOOL8 v55; // x0
  __int64 v56; // x1
  __int64 *v57; // x23
  __int64 v58; // x8
  System_Collections_Generic_List_object__o *v59; // x22
  __int64 v60; // x9
  IClassBoardLineModel_c **v61; // x10
  __int64 v62; // x0
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x1
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 *v73; // x22
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x22
  __int64 v81; // x8
  __int64 v82; // x9
  IClassBoardSquareModel_c **v83; // x10
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 *v87; // x21
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x1
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 *v102; // x22
  __int64 v103; // x8
  __int64 v104; // x9
  IClassBoardLineModel_c **v105; // x10
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x22
  __int64 v110; // x8
  __int64 v111; // x9
  IClassBoardSquareModel_c **v112; // x10
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  __int64 *v116; // x21
  __int64 v117; // x8
  __int64 v118; // x9
  IClassBoardLineModel_c **v119; // x10
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x1
  __int64 v123; // x21
  __int64 v124; // x8
  IClassBoardSquareModel_c *v125; // x1
  __int64 v126; // x9
  IClassBoardSquareModel_c **v127; // x10
  __int64 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x8
  __int64 v131; // x9
  IClassBoardSquareModel_c **v132; // x10
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5E63C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1B885B0(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1B885B0(&IClassBoardLineModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_1B885B0(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__);
    sub_1B885B0(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__);
    sub_1B885B0(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    byte_4A5E63C = 1;
  }
  memset(&v134, 0, sizeof(v134));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1B8880C(0LL, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v133,
    lineList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v134 = v133;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v134,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_1B887FC(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    if ( !v6 )
      sub_1B8880C(v7, v8);
    current = (int32_t)v134.fields._current;
    *(_QWORD *)(v6 + 16) = v134.fields._current;
    v12 = (__int64 **)(v6 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), current, v9, v10);
    v15 = *(__int64 **)(v6 + 16);
    if ( !v15 )
      sub_1B8880C(v13, v14);
    v16 = *v15;
    v17 = *(unsigned __int16 *)(*v15 + 302);
    if ( *(_WORD *)(*v15 + 302) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v18 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_12;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_12:
      v19 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      sub_1B8880C(0LL, v21);
    v23 = *(_QWORD *)v20;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v25 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_19;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_19:
      v26 = sub_1BDA590(v20, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1B8880C(v27, v28);
    if ( (_DWORD)v27 == entity->fields.id
      || (v30 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v31 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v31,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            0LL),
          v27 = BasicHelper__Any_object_(
                  v30,
                  (System_Func_T__bool__o *)v31,
                  (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v27 & 1) != 0) )
    {
      v32 = *v12;
      if ( !*v12 )
        sub_1B8880C(v27, v28);
      v33 = *v32;
      v34 = *(unsigned __int16 *)(*v32 + 302);
      if ( *(_WORD *)(*v32 + 302) )
      {
        v35 = (IClassBoardLineModel_c **)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *(v35 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v34;
          v35 += 2;
          if ( !v34 )
            goto LABEL_29;
        }
        v36 = v33 + 16LL * (*(_DWORD *)v35 + 1) + 312;
      }
      else
      {
LABEL_29:
        v36 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v43 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
      v45 = v43;
      if ( !v43 )
        sub_1B8880C(0LL, v44);
      v46 = *(_QWORD *)v43;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v48 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_42;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_42:
        v49 = sub_1BDA590(v43, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
      v52 = this->fields.entity;
      if ( !v52 )
        sub_1B8880C(v50, v51);
      if ( (_DWORD)v50 != v52->fields.id )
      {
        v53 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v54 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v54,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          0LL);
        v55 = BasicHelper__Any_object_(
                v53,
                (System_Func_T__bool__o *)v54,
                (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v55 )
        {
          v57 = *v12;
          if ( !*v12 )
            sub_1B8880C(v55, v56);
          v58 = *v57;
          v59 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v60 = *(unsigned __int16 *)(*v57 + 302);
          if ( *(_WORD *)(*v57 + 302) )
          {
            v61 = (IClassBoardLineModel_c **)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *(v61 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v60;
              v61 += 2;
              if ( !v60 )
                goto LABEL_52;
            }
            v62 = v58 + 16LL * (*(_DWORD *)v61 + 1) + 312;
          }
          else
          {
LABEL_52:
            v62 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v92 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v62)(v57, *(_QWORD *)(v62 + 8));
          v95 = v92;
          if ( !v59 )
            sub_1B8880C(v92, v92);
          items = v59->fields._items;
          v97 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v59->fields._version;
          if ( !items )
            sub_1B8880C(v92, v92);
          size = v59->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              v92,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &items->obj.klass + size;
            v59->fields._size = size + 1;
            v99[4] = (Il2CppClass *)v95;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v95, v93, v94);
          }
          v102 = *v12;
          if ( !*v12 )
            sub_1B8880C(v100, v101);
          v103 = *v102;
          v104 = *(unsigned __int16 *)(*v102 + 302);
          if ( *(_WORD *)(*v102 + 302) )
          {
            v105 = (IClassBoardLineModel_c **)(*(_QWORD *)(v103 + 176) + 8LL);
            while ( *(v105 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v104;
              v105 += 2;
              if ( !v104 )
                goto LABEL_91;
            }
            v106 = v103 + 16LL * (*(_DWORD *)v105 + 1) + 312;
          }
          else
          {
LABEL_91:
            v106 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v107 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8));
          v109 = v107;
          if ( !v107 )
            sub_1B8880C(0LL, v108);
          v110 = *(_QWORD *)v107;
          v111 = *(unsigned __int16 *)(*(_QWORD *)v107 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v107 + 302LL) )
          {
            v112 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v110 + 176) + 8LL);
            while ( *(v112 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v111;
              v112 += 2;
              if ( !v111 )
                goto LABEL_98;
            }
            v113 = v110 + 16LL * (*(_DWORD *)v112 + 5) + 312;
          }
          else
          {
LABEL_98:
            v113 = sub_1BDA590(v107, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v114 = (*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
          if ( (v114 & 1) != 0 )
          {
            v116 = *v12;
            if ( !v116 )
              sub_1B8880C(v114, v115);
            v117 = *v116;
            v118 = *(unsigned __int16 *)(*v116 + 302);
            if ( *(_WORD *)(*v116 + 302) )
            {
              v119 = (IClassBoardLineModel_c **)(*(_QWORD *)(v117 + 176) + 8LL);
              while ( *(v119 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v118;
                v119 += 2;
                if ( !v118 )
                  goto LABEL_106;
              }
              v120 = v117 + 16LL * (*(_DWORD *)v119 + 1) + 312;
            }
            else
            {
LABEL_106:
              v120 = sub_1BDA590(v116, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v121 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v120)(v116, *(_QWORD *)(v120 + 8));
            v123 = v121;
            if ( !v121 )
              sub_1B8880C(0LL, v129);
            v130 = *(_QWORD *)v121;
            v125 = IClassBoardSquareModel_TypeInfo;
            v131 = *(unsigned __int16 *)(*(_QWORD *)v121 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v121 + 302LL) )
              goto LABEL_113;
            v132 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *(v132 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v131;
              v132 += 2;
              if ( !v131 )
                goto LABEL_113;
            }
            v128 = v130 + 16LL * (*(_DWORD *)v132 + 15) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v37 = *v12;
      if ( !*v12 )
        sub_1B8880C(v27, v28);
      v38 = *v37;
      v39 = (System_Collections_Generic_List_object__o *)*connectSquareList;
      v40 = *(unsigned __int16 *)(*v37 + 302);
      if ( *(_WORD *)(*v37 + 302) )
      {
        v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v41 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_35;
        }
        v42 = v38 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_35:
        v42 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v63 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8));
      v66 = v63;
      if ( !v39 )
        sub_1B8880C(v63, v63);
      v67 = v39->fields._items;
      v68 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v39->fields._version;
      if ( !v67 )
        sub_1B8880C(v63, v63);
      v69 = v39->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v63,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v39->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v66;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v66, v64, v65);
      }
      v73 = *v12;
      if ( !*v12 )
        sub_1B8880C(v71, v72);
      v74 = *v73;
      v75 = *(unsigned __int16 *)(*v73 + 302);
      if ( *(_WORD *)(*v73 + 302) )
      {
        v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v76 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v75;
          v76 += 4;
          if ( !v75 )
            goto LABEL_64;
        }
        v77 = v74 + 16LL * *v76 + 312;
      }
      else
      {
LABEL_64:
        v77 = sub_1BDA590(*v12, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v78 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8));
      v80 = v78;
      if ( !v78 )
        sub_1B8880C(0LL, v79);
      v81 = *(_QWORD *)v78;
      v82 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
      {
        v83 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v81 + 176) + 8LL);
        while ( *(v83 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v82;
          v83 += 2;
          if ( !v82 )
            goto LABEL_71;
        }
        v84 = v81 + 16LL * (*(_DWORD *)v83 + 5) + 312;
      }
      else
      {
LABEL_71:
        v84 = sub_1BDA590(v78, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
      if ( (v85 & 1) != 0 )
      {
        v87 = *v12;
        if ( !v87 )
          sub_1B8880C(v85, v86);
        v88 = *v87;
        v89 = *(unsigned __int16 *)(*v87 + 302);
        if ( *(_WORD *)(*v87 + 302) )
        {
          v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v90 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v89;
            v90 += 4;
            if ( !v89 )
              goto LABEL_79;
          }
          v91 = v88 + 16LL * *v90 + 312;
        }
        else
        {
LABEL_79:
          v91 = sub_1BDA590(v87, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v121 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
        v123 = v121;
        if ( !v121 )
          sub_1B8880C(0LL, v122);
        v124 = *(_QWORD *)v121;
        v125 = IClassBoardSquareModel_TypeInfo;
        v126 = *(unsigned __int16 *)(*(_QWORD *)v121 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v121 + 302LL) )
        {
LABEL_113:
          v128 = sub_1BDA590(v121, v125, 15LL);
          goto LABEL_115;
        }
        v127 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v124 + 176) + 8LL);
        while ( *(v127 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v126;
          v127 += 2;
          if ( !v126 )
            goto LABEL_113;
        }
        v128 = v124 + 16LL * (*(_DWORD *)v127 + 15) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v128)(
          v123,
          connectSquareList,
          *(_QWORD *)(v128 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v134,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
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
  __int64 p_method; // x0
  int32_t v10; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x8
  __int64 v22; // x9
  IClassBoardSquareModel_c **v23; // x10
  __int64 v24; // x0
  Il2CppClass *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  IClassBoardSquareModel_o *v29; // x1
  const MethodInfo *v30; // x3
  Il2CppClass *v31; // x8
  __int64 v32; // x9
  IClassBoardLineModel_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 v38; // x8
  __int64 v39; // x9
  IClassBoardSquareModel_c **v40; // x10
  __int64 v41; // x0
  Il2CppClass *v42; // x8
  __int64 v43; // x9
  IClassBoardLineModel_c **v44; // x10
  __int64 v45; // x0
  IClassBoardSquareModel_o *v46; // x1
  const MethodInfo *v47; // x3
  Il2CppClass *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x22
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x22
  __int64 v69; // x8
  __int64 v70; // x9
  IClassBoardSquareModel_c **v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x22
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  Il2CppClass *v80; // x8
  __int64 v81; // x9
  IClassBoardLineModel_c **v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x22
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  struct ClassBoardSquareEntity_o *v93; // x8
  Il2CppClass *v94; // x8
  __int64 v95; // x9
  IClassBoardLineModel_c **v96; // x10
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x21
  __int64 v101; // x8
  __int64 v102; // x9
  IClassBoardSquareModel_c **v103; // x10
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x21
  __int64 v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v113; // x8
  __int64 v114; // x9
  int *v115; // x10
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x19
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0
  __int64 v123; // x8
  __int64 v124; // x9
  int *v125; // x10
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x21
  __int64 v130; // x8
  __int64 v131; // x9
  IClassBoardItemModel_c **v132; // x10
  __int64 v133; // x0
  __int64 v134; // x8
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+20h] [xbp-70h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_4A5E636 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&IClassBoardItemModel_TypeInfo);
    sub_1B885B0(&IClassBoardLineModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareUser_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_4A5E636 = 1;
  }
  memset(&v140, 0, sizeof(v140));
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_184;
  klass = user->klass;
  v7 = *(unsigned __int16 *)(&user->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&user->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
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
    sub_1B8880C(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v140 = v139;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v140,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v11 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v140,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v10 = 2;
LABEL_138:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v113 = itemList->klass;
        v114 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
        {
          v115 = &v113->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v115 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v114;
            v115 += 4;
            if ( !v114 )
              goto LABEL_143;
          }
          v116 = (__int64)(&v113->vtable._0_Equals.method + 2 * *v115);
        }
        else
        {
LABEL_143:
          v116 = sub_1BDA590(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v118 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v116)(
                 itemList,
                 *(_QWORD *)(v116 + 8));
        if ( !v118 )
          sub_1B8880C(0LL, v117);
        while ( 1 )
        {
          v119 = *(_QWORD *)v118;
          v120 = *(unsigned __int16 *)(*(_QWORD *)v118 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v118 + 302LL) )
          {
            v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v121 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v120;
              v121 += 4;
              if ( !v120 )
                goto LABEL_150;
            }
            v122 = v119 + 16LL * *v121 + 312;
          }
          else
          {
LABEL_150:
            v122 = sub_1BDA590(v118, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v122)(v118, *(_QWORD *)(v122 + 8)) & 1) == 0 )
            break;
          v123 = *(_QWORD *)v118;
          v124 = *(unsigned __int16 *)(*(_QWORD *)v118 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v118 + 302LL) )
          {
            v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v125 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              --v124;
              v125 += 4;
              if ( !v124 )
                goto LABEL_157;
            }
            v126 = v123 + 16LL * *v125 + 312;
          }
          else
          {
LABEL_157:
            v126 = sub_1BDA590(v118, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v118, *(_QWORD *)(v126 + 8));
          v129 = v127;
          if ( !v127 )
            sub_1B8880C(0LL, v128);
          v130 = *(_QWORD *)v127;
          v131 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
          {
            v132 = (IClassBoardItemModel_c **)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *(v132 - 1) != IClassBoardItemModel_TypeInfo )
            {
              --v131;
              v132 += 2;
              if ( !v131 )
                goto LABEL_164;
            }
            v133 = v130 + 16LL * (*(_DWORD *)v132 + 2) + 312;
          }
          else
          {
LABEL_164:
            v133 = sub_1BDA590(v127, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8)) & 1) == 0 )
          {
            v10 |= 8u;
            break;
          }
        }
        v134 = *(_QWORD *)v118;
        v135 = *(unsigned __int16 *)(*(_QWORD *)v118 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v118 + 302LL) )
        {
          v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
          {
            --v135;
            v136 += 4;
            if ( !v135 )
              goto LABEL_172;
          }
          v137 = v134 + 16LL * *v136 + 312;
        }
        else
        {
LABEL_172:
          v137 = sub_1BDA590(v118, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v137)(v118, *(_QWORD *)(v137 + 8));
        return v10;
      }
      goto LABEL_184;
    }
    current = v140.fields._current;
    if ( !v140.fields._current )
      sub_1B8880C(v11, v12);
    v14 = v140.fields._current->klass;
    v15 = *(unsigned __int16 *)(&v140.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v140.fields._current->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v16 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_24;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_24:
      v17 = sub_1BDA590(v140.fields._current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(current, *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1B8880C(0LL, v19);
    v21 = *(_QWORD *)v18;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v23 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v23 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_31;
      }
      v24 = v21 + 16LL * (*(_DWORD *)v23 + 5) + 312;
    }
    else
    {
LABEL_31:
      v24 = sub_1BDA590(v18, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) != 0 )
    {
      v25 = current->klass;
      v26 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v27 = &v25->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v27 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_38;
        }
        v28 = (__int64)&v25->vtable[*v27].method;
      }
      else
      {
LABEL_38:
        v28 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v28)(
                                          current,
                                          *(_QWORD *)(v28 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v29, v3, v30) )
        break;
    }
    v31 = current->klass;
    v32 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v33 = (IClassBoardLineModel_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_45;
      }
      v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
    }
    else
    {
LABEL_45:
      v34 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v35 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v34)(current, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1B8880C(0LL, v36);
    v38 = *(_QWORD *)v35;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v40 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v39;
        v40 += 2;
        if ( !v39 )
          goto LABEL_52;
      }
      v41 = v38 + 16LL * (*(_DWORD *)v40 + 5) + 312;
    }
    else
    {
LABEL_52:
      v41 = sub_1BDA590(v35, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) != 0 )
    {
      v42 = current->klass;
      v43 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v44 = (IClassBoardLineModel_c **)&v42->_1.interfaceOffsets->offset;
        while ( *(v44 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v43;
          v44 += 2;
          if ( !v43 )
            goto LABEL_59;
        }
        v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1].method;
      }
      else
      {
LABEL_59:
        v45 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v46 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v45)(
                                          current,
                                          *(_QWORD *)(v45 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v46, v3, v47) )
        break;
    }
    v48 = current->klass;
    v49 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_66;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_66:
      v51 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v51)(current, *(_QWORD *)(v51 + 8));
    v54 = v52;
    if ( !v52 )
      sub_1B8880C(0LL, v53);
    v55 = *(_QWORD *)v52;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_73;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_73:
      v58 = sub_1BDA590(v52, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
    entity = v4->fields.entity;
    if ( !entity )
      sub_1B8880C(v59, v60);
    if ( (_DWORD)v59 != entity->fields.id )
    {
      v62 = current->klass;
      v63 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v64 = &v62->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v64 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_81;
        }
        v65 = (__int64)&v62->vtable[*v64].method;
      }
      else
      {
LABEL_81:
        v65 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v66 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v65)(current, *(_QWORD *)(v65 + 8));
      v68 = v66;
      if ( !v66 )
        sub_1B8880C(0LL, v67);
      v69 = *(_QWORD *)v66;
      v70 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
      {
        v71 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *(v71 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v70;
          v71 += 2;
          if ( !v70 )
            goto LABEL_88;
        }
        v72 = v69 + 16LL * (*(_DWORD *)v71 + 12) + 312;
      }
      else
      {
LABEL_88:
        v72 = sub_1BDA590(v66, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
      v75 = v73;
      if ( !v73 )
        sub_1B8880C(0LL, v74);
      v76 = *(_QWORD *)v73;
      v77 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
      {
        v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v78 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v77;
          v78 += 4;
          if ( !v77 )
            goto LABEL_95;
        }
        v79 = v76 + 16LL * *v78 + 312;
      }
      else
      {
LABEL_95:
        v79 = sub_1BDA590(v73, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8)) & 1) != 0 )
        break;
    }
    v80 = current->klass;
    v81 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v82 = (IClassBoardLineModel_c **)&v80->_1.interfaceOffsets->offset;
      while ( *(v82 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v81;
        v82 += 2;
        if ( !v81 )
          goto LABEL_102;
      }
      v83 = (__int64)&v80->vtable[*(_DWORD *)v82 + 1].method;
    }
    else
    {
LABEL_102:
      v83 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v84 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v83)(current, *(_QWORD *)(v83 + 8));
    v86 = v84;
    if ( !v84 )
      sub_1B8880C(0LL, v85);
    v87 = *(_QWORD *)v84;
    v88 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v89 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v88;
        v89 += 4;
        if ( !v88 )
          goto LABEL_109;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_109:
      v90 = sub_1BDA590(v84, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
    v93 = v4->fields.entity;
    if ( !v93 )
      sub_1B8880C(v91, v92);
    if ( (_DWORD)v91 != v93->fields.id )
    {
      v94 = current->klass;
      v95 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v96 = (IClassBoardLineModel_c **)&v94->_1.interfaceOffsets->offset;
        while ( *(v96 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v95;
          v96 += 2;
          if ( !v95 )
            goto LABEL_117;
        }
        v97 = (__int64)&v94->vtable[*(_DWORD *)v96 + 1].method;
      }
      else
      {
LABEL_117:
        v97 = sub_1BDA590(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v98 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v97)(current, *(_QWORD *)(v97 + 8));
      v100 = v98;
      if ( !v98 )
        sub_1B8880C(0LL, v99);
      v101 = *(_QWORD *)v98;
      v102 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
      {
        v103 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v101 + 176) + 8LL);
        while ( *(v103 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v102;
          v103 += 2;
          if ( !v102 )
            goto LABEL_124;
        }
        v104 = v101 + 16LL * (*(_DWORD *)v103 + 12) + 312;
      }
      else
      {
LABEL_124:
        v104 = sub_1BDA590(v98, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v105 = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8));
      v107 = v105;
      if ( !v105 )
        sub_1B8880C(0LL, v106);
      v108 = *(_QWORD *)v105;
      v109 = *(unsigned __int16 *)(*(_QWORD *)v105 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v105 + 302LL) )
      {
        v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v110 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v109;
          v110 += 4;
          if ( !v109 )
            goto LABEL_131;
        }
        v111 = v108 + 16LL * *v110 + 312;
      }
      else
      {
LABEL_131:
        v111 = sub_1BDA590(v105, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v107, *(_QWORD *)(v111 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v10 = 0;
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
  System_Collections_Generic_List_object__o *v7; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w23
  int32_t v16; // w24
  ClassBoardItemModel_o *v17; // x22
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4A5E63A & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardItemModel_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4A5E63A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)v7, v9, v10);
  if ( !itemIds )
    goto LABEL_16;
  v13 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v14 >= itemNums->max_length )
LABEL_17:
        sub_1B88814(v11, v12);
      v15 = itemIds->m_Items[v14 + 1];
      v16 = itemNums->m_Items[v14 + 1];
      v17 = (ClassBoardItemModel_o *)sub_1B887FC(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v17, v15, v16, v18);
      v11 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
      }
      LODWORD(v13) = itemIds->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return;
    }
LABEL_16:
    sub_1B8880C(v11, v12);
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  Il2CppObject *v72; // x1
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  IClassBoardLineModel_c **v79; // x10
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x25
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  IClassBoardLineModel_c **v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x25
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  struct ClassBoardSquareEntity_o *v101; // x8
  __int64 v102; // x8
  __int64 v103; // x9
  IClassBoardLineModel_c **v104; // x10
  __int64 v105; // x0
  Il2CppObject *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *v109; // x1
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  int v118; // w22
  _BOOL8 v119; // x0
  __int64 v120; // x1
  bool v121; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v123; // x8
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  int v127; // w19
  System_Collections_Generic_List_Enumerator_object__o v129; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_4A5E63B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&IClassBoardLineModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_1B885B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4A5E63B = 1;
  }
  memset(&v129, 0, sizeof(v129));
  if ( !blankModel )
    goto LABEL_160;
  klass = blankModel->klass;
  v8 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
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
    p_method = sub_1BDA590(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  v12 = blankModel->klass;
  v13 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v14 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&v12->vtable[*v14].method;
  }
  else
  {
LABEL_17:
    v15 = sub_1BDA590(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v16,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v18 = blankModel->klass;
  v19 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_23;
    }
    v21 = (__int64)&v18->vtable[*v20 + 9].method;
  }
  else
  {
LABEL_23:
    v21 = sub_1BDA590(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v21)(
                                      blankModel,
                                      *(_QWORD *)(v21 + 8));
  if ( !this )
    goto LABEL_160;
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v25 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = (__int64)(&v22->vtable._0_Equals.method + 2 * *v25);
  }
  else
  {
LABEL_30:
    v26 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1B8880C(0LL, v27);
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
      v32 = sub_1BDA590(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_1BDA590(v28, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1B8880C(0LL, v38);
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
      v43 = sub_1BDA590(v37, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      sub_1B8880C(0LL, v45);
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
      v50 = sub_1BDA590(v44, IClassBoardSquareModel_TypeInfo, 0LL);
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
        v54 = sub_1BDA590(v39, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v39, *(_QWORD *)(v54 + 8));
      v57 = v55;
      if ( !v55 )
        sub_1B8880C(0LL, v56);
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
        v61 = sub_1BDA590(v55, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1B8880C(v62, v63);
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
          v68 = sub_1BDA590(v39, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v69 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v39, *(_QWORD *)(v68 + 8));
        v72 = v69;
        if ( !v17 )
          sub_1B8880C(v69, v69);
        items = v17->fields._items;
        v74 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1B8880C(v69, v69);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v69,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v76[4] = (Il2CppClass *)v72;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v72, v70, v71);
        }
      }
    }
    v77 = *(_QWORD *)v39;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v79 = (IClassBoardLineModel_c **)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *(v79 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v78;
        v79 += 2;
        if ( !v78 )
          goto LABEL_91;
      }
      v80 = v77 + 16LL * (*(_DWORD *)v79 + 1) + 312;
    }
    else
    {
LABEL_91:
      v80 = sub_1BDA590(v39, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v39, *(_QWORD *)(v80 + 8));
    v83 = v81;
    if ( !v81 )
      sub_1B8880C(0LL, v82);
    v84 = *(_QWORD *)v81;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v86 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_98;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_98:
      v87 = sub_1BDA590(v81, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v87)(v83, *(_QWORD *)(v87 + 8)) != v16 )
    {
      v88 = *(_QWORD *)v39;
      v89 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v90 = (IClassBoardLineModel_c **)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *(v90 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v89;
          v90 += 2;
          if ( !v89 )
            goto LABEL_105;
        }
        v91 = v88 + 16LL * (*(_DWORD *)v90 + 1) + 312;
      }
      else
      {
LABEL_105:
        v91 = sub_1BDA590(v39, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v39, *(_QWORD *)(v91 + 8));
      v94 = v92;
      if ( !v92 )
        sub_1B8880C(0LL, v93);
      v95 = *(_QWORD *)v92;
      v96 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
      {
        v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v97 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v96;
          v97 += 4;
          if ( !v96 )
            goto LABEL_112;
        }
        v98 = v95 + 16LL * *v97 + 312;
      }
      else
      {
LABEL_112:
        v98 = sub_1BDA590(v92, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
      v101 = v6->fields.entity;
      if ( !v101 )
        sub_1B8880C(v99, v100);
      if ( (_DWORD)v99 != v101->fields.id )
      {
        v102 = *(_QWORD *)v39;
        v103 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v104 = (IClassBoardLineModel_c **)(*(_QWORD *)(v102 + 176) + 8LL);
          while ( *(v104 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v103;
            v104 += 2;
            if ( !v103 )
              goto LABEL_120;
          }
          v105 = v102 + 16LL * (*(_DWORD *)v104 + 1) + 312;
        }
        else
        {
LABEL_120:
          v105 = sub_1BDA590(v39, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v106 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v39, *(_QWORD *)(v105 + 8));
        v109 = v106;
        if ( !v17 )
          sub_1B8880C(v106, v106);
        v110 = v17->fields._items;
        v111 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !v110 )
          sub_1B8880C(v106, v106);
        v112 = v17->fields._size;
        if ( (unsigned int)v112 >= v110->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v106,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v113 = &v110->obj.klass + v112;
          v17->fields._size = v112 + 1;
          v113[4] = (Il2CppClass *)v109;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v113 + 4), (int32_t)v109, v107, v108);
        }
      }
    }
  }
  v114 = *(_QWORD *)v28;
  v115 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v116 - 1) != System_IDisposable_TypeInfo )
    {
      --v115;
      v116 += 4;
      if ( !v115 )
        goto LABEL_131;
    }
    v117 = v114 + 16LL * *v116 + 312;
  }
  else
  {
LABEL_131:
    v117 = sub_1BDA590(v28, System_IDisposable_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v28, *(_QWORD *)(v117 + 8));
  if ( !v17 )
LABEL_160:
    sub_1B8880C(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v129,
    v17,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v118 = 0;
  while ( 1 )
  {
    v119 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v129,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v121 = v119;
    if ( !v119 )
      break;
    current = v129.fields._current;
    if ( !v129.fields._current )
      sub_1B8880C(v119, v120);
    v123 = v129.fields._current->klass;
    v124 = *(unsigned __int16 *)(&v129.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v129.fields._current->klass->_2.bitflags2 + 3) )
    {
      v125 = &v123->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v125 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v124;
        v125 += 4;
        if ( !v124 )
          goto LABEL_141;
      }
      v126 = (__int64)&v123->vtable[*v125 + 13].method;
    }
    else
    {
LABEL_141:
      v126 = sub_1BDA590(v129.fields._current, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    v118 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v126)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v126 + 8));
    if ( (v118 & 1) != 0 )
    {
      v127 = 9;
      goto LABEL_146;
    }
  }
  v127 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v129,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v121 && v127 == 9;
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E637 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_4A5E637 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0LL);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, method);
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
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4A5E63D & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E63D = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  v12 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*v13].method;
  }
  else
  {
LABEL_15:
    v14 = sub_1BDA590(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1B8880C(this, x);
  v15 = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v18);
  }
  else
  {
LABEL_22:
    v19 = sub_1BDA590(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  __int64 v12; // x9
  IClassBoardLineModel_c **v13; // x10
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4A5E63E & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E63E = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  v12 = *(unsigned __int16 *)(&lineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineModel->klass->_2.bitflags2 + 3) )
  {
    v13 = (IClassBoardLineModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v12;
      v13 += 2;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*(_DWORD *)v13 + 1].method;
  }
  else
  {
LABEL_15:
    v14 = sub_1BDA590(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1B8880C(this, x);
  v15 = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v18);
  }
  else
  {
LABEL_22:
    v19 = sub_1BDA590(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}