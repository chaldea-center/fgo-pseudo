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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x0
  const MethodInfo *v28; // x3
  struct ClassBoardSquareEntity_o *v29; // x8

  if ( (byte_49FF851 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSquareUser_TypeInfo, squareEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v8);
    byte_49FF851 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                      squareEntity,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v9, v10, v11);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lineList, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)squareEntity, v17, v18);
  entity = this->fields.entity;
  v22 = sub_1B64314(ClassBoardSquareUser_TypeInfo, v20, v21);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_QWORD *)(v22 + 24) = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)entity, v23, v24);
  this->fields.user = (struct IClassBoardSquareUser_o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.user, v22, v25, v26);
  v29 = this->fields.entity;
  if ( !v29 )
    sub_1B64324(v27);
  ClassBoardSquareModel__InitializeItemList(this, v29->fields.itemIds, v29->fields.itemNums, v28);
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

  if ( (byte_49FF852 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line);
    byte_49FF852 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1B64324(lineList);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)line;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)line, (int32_t)method, v3);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t current; // w1
  __int64 **v24; // x21
  __int64 v25; // x0
  __int64 *v26; // x23
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x23
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
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
  __int64 v55; // x23
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  struct ClassBoardSquareEntity_o *v63; // x8
  System_Collections_Generic_List_T__o *v64; // x23
  System_Func_object__bool__o *v65; // x24
  _BOOL8 v66; // x0
  __int64 *v67; // x23
  __int64 v68; // x8
  System_Collections_Generic_List_object__o *v69; // x22
  __int64 v70; // x9
  IClassBoardLineModel_c **v71; // x10
  __int64 v72; // x0
  Il2CppObject *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppObject *v76; // x1
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x0
  __int64 *v82; // x22
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x22
  __int64 v89; // x8
  __int64 v90; // x9
  IClassBoardSquareModel_c **v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 *v94; // x21
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  Il2CppObject *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  Il2CppObject *v102; // x1
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  __int64 v107; // x0
  __int64 *v108; // x22
  __int64 v109; // x8
  __int64 v110; // x9
  IClassBoardLineModel_c **v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x22
  __int64 v115; // x8
  __int64 v116; // x9
  IClassBoardSquareModel_c **v117; // x10
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 *v120; // x21
  __int64 v121; // x8
  __int64 v122; // x9
  IClassBoardLineModel_c **v123; // x10
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x21
  __int64 v127; // x8
  IClassBoardSquareModel_c *v128; // x1
  __int64 v129; // x9
  IClassBoardSquareModel_c **v130; // x10
  __int64 v131; // x0
  __int64 v132; // x8
  __int64 v133; // x9
  IClassBoardSquareModel_c **v134; // x10
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FF855 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_1B640C8(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v9);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v12);
    sub_1B640C8(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v13);
    sub_1B640C8(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v14);
    sub_1B640C8(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v15);
    byte_49FF855 = 1;
  }
  memset(&v136, 0, sizeof(v136));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v135,
    lineList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v136 = v135;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v136,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v19 = sub_1B64314(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v17, v18);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19 )
      sub_1B64324(v20);
    current = (int32_t)v136.fields._current;
    *(_QWORD *)(v19 + 16) = v136.fields._current;
    v24 = (__int64 **)(v19 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), current, v21, v22);
    v26 = *(__int64 **)(v19 + 16);
    if ( !v26 )
      sub_1B64324(v25);
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
      v30 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( !v31 )
      sub_1B64324(0LL);
    v33 = *(_QWORD *)v31;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v35 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_19;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_19:
      v36 = sub_1BB60A8(v31, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1B64324(v37);
    if ( (_DWORD)v37 == entity->fields.id
      || (v41 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v42 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardSquareModel__bool__TypeInfo, v38, v39),
          System_Func_object__bool____ctor(
            v42,
            (Il2CppObject *)v19,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            0LL),
          v37 = BasicHelper__Any_object_(
                  v41,
                  (System_Func_T__bool__o *)v42,
                  (const MethodInfo_2E24870 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v37 & 1) != 0) )
    {
      v43 = *v24;
      if ( !*v24 )
        sub_1B64324(v37);
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
        v47 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
      v55 = v54;
      if ( !v54 )
        sub_1B64324(0LL);
      v56 = *(_QWORD *)v54;
      v57 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
      {
        v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v58 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v57;
          v58 += 4;
          if ( !v57 )
            goto LABEL_42;
        }
        v59 = v56 + 16LL * *v58 + 312;
      }
      else
      {
LABEL_42:
        v59 = sub_1BB60A8(v54, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
      v63 = this->fields.entity;
      if ( !v63 )
        sub_1B64324(v60);
      if ( (_DWORD)v60 != v63->fields.id )
      {
        v64 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v65 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardSquareModel__bool__TypeInfo, v61, v62);
        System_Func_object__bool____ctor(
          v65,
          (Il2CppObject *)v19,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          0LL);
        v66 = BasicHelper__Any_object_(
                v64,
                (System_Func_T__bool__o *)v65,
                (const MethodInfo_2E24870 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v66 )
        {
          v67 = *v24;
          if ( !*v24 )
            sub_1B64324(v66);
          v68 = *v67;
          v69 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v70 = *(unsigned __int16 *)(*v67 + 302);
          if ( *(_WORD *)(*v67 + 302) )
          {
            v71 = (IClassBoardLineModel_c **)(*(_QWORD *)(v68 + 176) + 8LL);
            while ( *(v71 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v70;
              v71 += 2;
              if ( !v70 )
                goto LABEL_52;
            }
            v72 = v68 + 16LL * (*(_DWORD *)v71 + 1) + 312;
          }
          else
          {
LABEL_52:
            v72 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v99 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v72)(v67, *(_QWORD *)(v72 + 8));
          v102 = v99;
          if ( !v69 )
            sub_1B64324(v99);
          items = v69->fields._items;
          v104 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v69->fields._version;
          if ( !items )
            sub_1B64324(v99);
          size = v69->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v69,
              v99,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
          }
          else
          {
            v106 = &items->obj.klass + size;
            v69->fields._size = size + 1;
            v106[4] = (Il2CppClass *)v102;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v106 + 4), (int32_t)v102, v100, v101);
          }
          v108 = *v24;
          if ( !*v24 )
            sub_1B64324(v107);
          v109 = *v108;
          v110 = *(unsigned __int16 *)(*v108 + 302);
          if ( *(_WORD *)(*v108 + 302) )
          {
            v111 = (IClassBoardLineModel_c **)(*(_QWORD *)(v109 + 176) + 8LL);
            while ( *(v111 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v110;
              v111 += 2;
              if ( !v110 )
                goto LABEL_91;
            }
            v112 = v109 + 16LL * (*(_DWORD *)v111 + 1) + 312;
          }
          else
          {
LABEL_91:
            v112 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v113 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v112)(v108, *(_QWORD *)(v112 + 8));
          v114 = v113;
          if ( !v113 )
            sub_1B64324(0LL);
          v115 = *(_QWORD *)v113;
          v116 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
          {
            v117 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v115 + 176) + 8LL);
            while ( *(v117 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v116;
              v117 += 2;
              if ( !v116 )
                goto LABEL_98;
            }
            v118 = v115 + 16LL * (*(_DWORD *)v117 + 5) + 312;
          }
          else
          {
LABEL_98:
            v118 = sub_1BB60A8(v113, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v119 = (*(__int64 (__fastcall **)(__int64, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
          if ( (v119 & 1) != 0 )
          {
            v120 = *v24;
            if ( !v120 )
              sub_1B64324(v119);
            v121 = *v120;
            v122 = *(unsigned __int16 *)(*v120 + 302);
            if ( *(_WORD *)(*v120 + 302) )
            {
              v123 = (IClassBoardLineModel_c **)(*(_QWORD *)(v121 + 176) + 8LL);
              while ( *(v123 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v122;
                v123 += 2;
                if ( !v122 )
                  goto LABEL_106;
              }
              v124 = v121 + 16LL * (*(_DWORD *)v123 + 1) + 312;
            }
            else
            {
LABEL_106:
              v124 = sub_1BB60A8(v120, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v125 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v124)(v120, *(_QWORD *)(v124 + 8));
            v126 = v125;
            if ( !v125 )
              sub_1B64324(0LL);
            v132 = *(_QWORD *)v125;
            v128 = IClassBoardSquareModel_TypeInfo;
            v133 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v125 + 302LL) )
              goto LABEL_113;
            v134 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v132 + 176) + 8LL);
            while ( *(v134 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v133;
              v134 += 2;
              if ( !v133 )
                goto LABEL_113;
            }
            v131 = v132 + 16LL * (*(_DWORD *)v134 + 15) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v48 = *v24;
      if ( !*v24 )
        sub_1B64324(v37);
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
        v53 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v73 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v53)(v48, *(_QWORD *)(v53 + 8));
      v76 = v73;
      if ( !v50 )
        sub_1B64324(v73);
      v77 = v50->fields._items;
      v78 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v50->fields._version;
      if ( !v77 )
        sub_1B64324(v73);
      v79 = v50->fields._size;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          v73,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &v77->obj.klass + v79;
        v50->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v76;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v76, v74, v75);
      }
      v82 = *v24;
      if ( !*v24 )
        sub_1B64324(v81);
      v83 = *v82;
      v84 = *(unsigned __int16 *)(*v82 + 302);
      if ( *(_WORD *)(*v82 + 302) )
      {
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v85 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v84;
          v85 += 4;
          if ( !v84 )
            goto LABEL_64;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_64:
        v86 = sub_1BB60A8(*v24, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v87 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8));
      v88 = v87;
      if ( !v87 )
        sub_1B64324(0LL);
      v89 = *(_QWORD *)v87;
      v90 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
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
        v92 = sub_1BB60A8(v87, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      if ( (v93 & 1) != 0 )
      {
        v94 = *v24;
        if ( !v94 )
          sub_1B64324(v93);
        v95 = *v94;
        v96 = *(unsigned __int16 *)(*v94 + 302);
        if ( *(_WORD *)(*v94 + 302) )
        {
          v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v97 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v96;
            v97 += 4;
            if ( !v96 )
              goto LABEL_79;
          }
          v98 = v95 + 16LL * *v97 + 312;
        }
        else
        {
LABEL_79:
          v98 = sub_1BB60A8(v94, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v125 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
        v126 = v125;
        if ( !v125 )
          sub_1B64324(0LL);
        v127 = *(_QWORD *)v125;
        v128 = IClassBoardSquareModel_TypeInfo;
        v129 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v125 + 302LL) )
        {
LABEL_113:
          v131 = sub_1BB60A8(v125, v128, 15LL);
          goto LABEL_115;
        }
        v130 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v127 + 176) + 8LL);
        while ( *(v130 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v129;
          v130 += 2;
          if ( !v129 )
            goto LABEL_113;
        }
        v131 = v127 + 16LL * (*(_DWORD *)v130 + 15) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v131)(
          v126,
          connectSquareList,
          *(_QWORD *)(v131 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v136,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  Il2CppObject *current; // x21
  Il2CppClass *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x22
  __int64 v32; // x8
  __int64 v33; // x9
  IClassBoardSquareModel_c **v34; // x10
  __int64 v35; // x0
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  IClassBoardSquareModel_o *v40; // x1
  const MethodInfo *v41; // x3
  Il2CppClass *v42; // x8
  __int64 v43; // x9
  IClassBoardLineModel_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x22
  __int64 v48; // x8
  __int64 v49; // x9
  IClassBoardSquareModel_c **v50; // x10
  __int64 v51; // x0
  Il2CppClass *v52; // x8
  __int64 v53; // x9
  IClassBoardLineModel_c **v54; // x10
  __int64 v55; // x0
  IClassBoardSquareModel_o *v56; // x1
  const MethodInfo *v57; // x3
  Il2CppClass *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x22
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x22
  __int64 v76; // x8
  __int64 v77; // x9
  IClassBoardSquareModel_c **v78; // x10
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x22
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  Il2CppClass *v86; // x8
  __int64 v87; // x9
  IClassBoardLineModel_c **v88; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x22
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  struct ClassBoardSquareEntity_o *v97; // x8
  Il2CppClass *v98; // x8
  __int64 v99; // x9
  IClassBoardLineModel_c **v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x21
  __int64 v104; // x8
  __int64 v105; // x9
  IClassBoardSquareModel_c **v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x21
  __int64 v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
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
  if ( (byte_49FF84F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B640C8(&IClassBoardItemModel_TypeInfo, v9);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v10);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B640C8(&IClassBoardSquareUser_TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    this = (ClassBoardSquareModel_o *)sub_1B640C8(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v17);
    byte_49FF84F = 1;
  }
  memset(&v140, 0, sizeof(v140));
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        checkedBlankIdHashSet,
                                                        method);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
    p_method = sub_1BB60A8(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
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
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v140 = v139;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v140,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v24 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v140,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v23 = 2;
LABEL_138:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v115 = itemList->klass;
        v116 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
        {
          v117 = &v115->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v117 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v116;
            v117 += 4;
            if ( !v116 )
              goto LABEL_143;
          }
          v118 = (__int64)(&v115->vtable._0_Equals.method + 2 * *v117);
        }
        else
        {
LABEL_143:
          v118 = sub_1BB60A8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v119 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v118)(
                 itemList,
                 *(_QWORD *)(v118 + 8));
        if ( !v119 )
          sub_1B64324(0LL);
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
                goto LABEL_150;
            }
            v123 = v120 + 16LL * *v122 + 312;
          }
          else
          {
LABEL_150:
            v123 = sub_1BB60A8(v119, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_157;
            }
            v127 = v124 + 16LL * *v126 + 312;
          }
          else
          {
LABEL_157:
            v127 = sub_1BB60A8(v119, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))v127)(v119, *(_QWORD *)(v127 + 8));
          v129 = v128;
          if ( !v128 )
            sub_1B64324(0LL);
          v130 = *(_QWORD *)v128;
          v131 = *(unsigned __int16 *)(*(_QWORD *)v128 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v128 + 302LL) )
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
            v133 = sub_1BB60A8(v128, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8)) & 1) == 0 )
          {
            v23 |= 8u;
            break;
          }
        }
        v134 = *(_QWORD *)v119;
        v135 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
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
          v137 = sub_1BB60A8(v119, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v137)(v119, *(_QWORD *)(v137 + 8));
        return v23;
      }
      goto LABEL_184;
    }
    current = v140.fields._current;
    if ( !v140.fields._current )
      sub_1B64324(v24);
    v26 = v140.fields._current->klass;
    v27 = *(unsigned __int16 *)(&v140.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v140.fields._current->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v28 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_24;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_24:
      v29 = sub_1BB60A8(v140.fields._current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v29)(current, *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( !v30 )
      sub_1B64324(0LL);
    v32 = *(_QWORD *)v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v34 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_31;
      }
      v35 = v32 + 16LL * (*(_DWORD *)v34 + 5) + 312;
    }
    else
    {
LABEL_31:
      v35 = sub_1BB60A8(v30, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) != 0 )
    {
      v36 = current->klass;
      v37 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v38 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_38;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_38:
        v39 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v40 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v39)(
                                          current,
                                          *(_QWORD *)(v39 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v40, v3, v41) )
        break;
    }
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
          goto LABEL_45;
      }
      v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1].method;
    }
    else
    {
LABEL_45:
      v45 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v46 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v45)(current, *(_QWORD *)(v45 + 8));
    v47 = v46;
    if ( !v46 )
      sub_1B64324(0LL);
    v48 = *(_QWORD *)v46;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v50 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *(v50 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v49;
        v50 += 2;
        if ( !v49 )
          goto LABEL_52;
      }
      v51 = v48 + 16LL * (*(_DWORD *)v50 + 5) + 312;
    }
    else
    {
LABEL_52:
      v51 = sub_1BB60A8(v46, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) != 0 )
    {
      v52 = current->klass;
      v53 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v54 = (IClassBoardLineModel_c **)&v52->_1.interfaceOffsets->offset;
        while ( *(v54 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v53;
          v54 += 2;
          if ( !v53 )
            goto LABEL_59;
        }
        v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
      }
      else
      {
LABEL_59:
        v55 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v56 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v55)(
                                          current,
                                          *(_QWORD *)(v55 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v56, v3, v57) )
        break;
    }
    v58 = current->klass;
    v59 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_66;
      }
      v61 = (__int64)&v58->vtable[*v60].method;
    }
    else
    {
LABEL_66:
      v61 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v62 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v61)(current, *(_QWORD *)(v61 + 8));
    v63 = v62;
    if ( !v62 )
      sub_1B64324(0LL);
    v64 = *(_QWORD *)v62;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_73;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_73:
      v67 = sub_1BB60A8(v62, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
    entity = v4->fields.entity;
    if ( !entity )
      sub_1B64324(v68);
    if ( (_DWORD)v68 != entity->fields.id )
    {
      v70 = current->klass;
      v71 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v72 = &v70->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v72 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_81;
        }
        v73 = (__int64)&v70->vtable[*v72].method;
      }
      else
      {
LABEL_81:
        v73 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v74 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v73)(current, *(_QWORD *)(v73 + 8));
      v75 = v74;
      if ( !v74 )
        sub_1B64324(0LL);
      v76 = *(_QWORD *)v74;
      v77 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v78 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v76 + 176) + 8LL);
        while ( *(v78 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v77;
          v78 += 2;
          if ( !v77 )
            goto LABEL_88;
        }
        v79 = v76 + 16LL * (*(_DWORD *)v78 + 12) + 312;
      }
      else
      {
LABEL_88:
        v79 = sub_1BB60A8(v74, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v80 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
      v81 = v80;
      if ( !v80 )
        sub_1B64324(0LL);
      v82 = *(_QWORD *)v80;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
      {
        v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v84 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v83;
          v84 += 4;
          if ( !v83 )
            goto LABEL_95;
        }
        v85 = v82 + 16LL * *v84 + 312;
      }
      else
      {
LABEL_95:
        v85 = sub_1BB60A8(v80, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8)) & 1) != 0 )
        break;
    }
    v86 = current->klass;
    v87 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v88 = (IClassBoardLineModel_c **)&v86->_1.interfaceOffsets->offset;
      while ( *(v88 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v87;
        v88 += 2;
        if ( !v87 )
          goto LABEL_102;
      }
      v89 = (__int64)&v86->vtable[*(_DWORD *)v88 + 1].method;
    }
    else
    {
LABEL_102:
      v89 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v90 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v89)(current, *(_QWORD *)(v89 + 8));
    v91 = v90;
    if ( !v90 )
      sub_1B64324(0LL);
    v92 = *(_QWORD *)v90;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v94 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_109;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_109:
      v95 = sub_1BB60A8(v90, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
    v97 = v4->fields.entity;
    if ( !v97 )
      sub_1B64324(v96);
    if ( (_DWORD)v96 != v97->fields.id )
    {
      v98 = current->klass;
      v99 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v100 = (IClassBoardLineModel_c **)&v98->_1.interfaceOffsets->offset;
        while ( *(v100 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v99;
          v100 += 2;
          if ( !v99 )
            goto LABEL_117;
        }
        v101 = (__int64)&v98->vtable[*(_DWORD *)v100 + 1].method;
      }
      else
      {
LABEL_117:
        v101 = sub_1BB60A8(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v102 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v101)(current, *(_QWORD *)(v101 + 8));
      v103 = v102;
      if ( !v102 )
        sub_1B64324(0LL);
      v104 = *(_QWORD *)v102;
      v105 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
      {
        v106 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v104 + 176) + 8LL);
        while ( *(v106 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v105;
          v106 += 2;
          if ( !v105 )
            goto LABEL_124;
        }
        v107 = v104 + 16LL * (*(_DWORD *)v106 + 12) + 312;
      }
      else
      {
LABEL_124:
        v107 = sub_1BB60A8(v102, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v103, *(_QWORD *)(v107 + 8));
      v109 = v108;
      if ( !v108 )
        sub_1B64324(0LL);
      v110 = *(_QWORD *)v108;
      v111 = *(unsigned __int16 *)(*(_QWORD *)v108 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v108 + 302LL) )
      {
        v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v112 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v111;
          v112 += 4;
          if ( !v111 )
            goto LABEL_131;
        }
        v113 = v110 + 16LL * *v112 + 312;
      }
      else
      {
LABEL_131:
        v113 = sub_1BB60A8(v108, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  __int64 v16; // x2
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w23
  int32_t v20; // w24
  ClassBoardItemModel_o *v21; // x22
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_49FF853 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardItemModel_TypeInfo, itemIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v9);
    byte_49FF853 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                       itemIds,
                                                       itemNums);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v10;
  p_itemList = &this->fields.itemList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)v10, v12, v13);
  if ( !itemIds )
    goto LABEL_16;
  v17 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v18 >= itemNums->max_length )
LABEL_17:
        sub_1B6432C(v14, v15);
      v19 = itemIds->m_Items[v18 + 1];
      v20 = itemNums->m_Items[v18 + 1];
      v21 = (ClassBoardItemModel_o *)sub_1B64314(ClassBoardItemModel_TypeInfo, v15, v16);
      ClassBoardItemModel___ctor(v21, v19, v20, v22);
      v14 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v14->fields._items;
      v26 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v14->fields._version;
      if ( !items )
        break;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
      }
      LODWORD(v17) = itemIds->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        return;
    }
LABEL_16:
    sub_1B64324(v14);
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
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x20
  IClassBoardSquareModel_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  ClassBoardSquareModel_c *v38; // x8
  ClassBoardSquareModel_o *v39; // x21
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x24
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x25
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x25
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x1
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  IClassBoardLineModel_c **v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x25
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x8
  __int64 v99; // x9
  IClassBoardLineModel_c **v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x25
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  struct ClassBoardSquareEntity_o *v109; // x8
  __int64 v110; // x8
  __int64 v111; // x9
  IClassBoardLineModel_c **v112; // x10
  __int64 v113; // x0
  Il2CppObject *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
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
  bool v128; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v130; // x8
  __int64 v131; // x9
  int32_t *v132; // x10
  __int64 v133; // x0
  int v134; // w19
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_49FF854 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, blankModel);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v11);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v19);
    this = (ClassBoardSquareModel_o *)sub_1B640C8(
                                        &System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                        v20);
    byte_49FF854 = 1;
  }
  memset(&v136, 0, sizeof(v136));
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
    p_method = sub_1BB60A8(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
    v29 = sub_1BB60A8(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v29)(blankModel, *(_QWORD *)(v29 + 8));
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v30,
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v34 = blankModel->klass;
  v35 = *(unsigned __int16 *)(&blankModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&blankModel->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v36 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_23;
    }
    v37 = (__int64)&v34->vtable[*v36 + 9].method;
  }
  else
  {
LABEL_23:
    v37 = sub_1BB60A8(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v37)(
                                      blankModel,
                                      *(_QWORD *)(v37 + 8));
  if ( !this )
    goto LABEL_160;
  v38 = this->klass;
  v39 = this;
  v40 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v41 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v41 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_30;
    }
    v42 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v41);
  }
  else
  {
LABEL_30:
    v42 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v43 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
  if ( !v43 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_37;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_37:
      v47 = sub_1BB60A8(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v43;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v50 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_44;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_44:
      v51 = sub_1BB60A8(v43, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
    v53 = v52;
    if ( !v52 )
      sub_1B64324(0LL);
    v54 = *(_QWORD *)v52;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
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
      v57 = sub_1BB60A8(v52, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    v59 = v58;
    if ( !v58 )
      sub_1B64324(0LL);
    v60 = *(_QWORD *)v58;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v62 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_58;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_58:
      v63 = sub_1BB60A8(v58, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) != v30 )
    {
      v64 = *(_QWORD *)v53;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v66 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_65;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_65:
        v67 = sub_1BB60A8(v53, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v53, *(_QWORD *)(v67 + 8));
      v69 = v68;
      if ( !v68 )
        sub_1B64324(0LL);
      v70 = *(_QWORD *)v68;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v72 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_72;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_72:
        v73 = sub_1BB60A8(v68, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1B64324(v74);
      if ( (_DWORD)v74 != entity->fields.id )
      {
        v76 = *(_QWORD *)v53;
        v77 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v78 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v77;
            v78 += 4;
            if ( !v77 )
              goto LABEL_80;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_80:
          v79 = sub_1BB60A8(v53, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v80 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v53, *(_QWORD *)(v79 + 8));
        v83 = v80;
        if ( !v33 )
          sub_1B64324(v80);
        items = v33->fields._items;
        v85 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v33->fields._version;
        if ( !items )
          sub_1B64324(v80);
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            v80,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v87[4] = (Il2CppClass *)v83;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v83, v81, v82);
        }
      }
    }
    v88 = *(_QWORD *)v53;
    v89 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v90 = (IClassBoardLineModel_c **)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *(v90 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v89;
        v90 += 2;
        if ( !v89 )
          goto LABEL_91;
      }
      v91 = v88 + 16LL * (*(_DWORD *)v90 + 1) + 312;
    }
    else
    {
LABEL_91:
      v91 = sub_1BB60A8(v53, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v53, *(_QWORD *)(v91 + 8));
    v93 = v92;
    if ( !v92 )
      sub_1B64324(0LL);
    v94 = *(_QWORD *)v92;
    v95 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
    {
      v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v96 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v95;
        v96 += 4;
        if ( !v95 )
          goto LABEL_98;
      }
      v97 = v94 + 16LL * *v96 + 312;
    }
    else
    {
LABEL_98:
      v97 = sub_1BB60A8(v92, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v97)(v93, *(_QWORD *)(v97 + 8)) != v30 )
    {
      v98 = *(_QWORD *)v53;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
      {
        v100 = (IClassBoardLineModel_c **)(*(_QWORD *)(v98 + 176) + 8LL);
        while ( *(v100 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v99;
          v100 += 2;
          if ( !v99 )
            goto LABEL_105;
        }
        v101 = v98 + 16LL * (*(_DWORD *)v100 + 1) + 312;
      }
      else
      {
LABEL_105:
        v101 = sub_1BB60A8(v53, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v53, *(_QWORD *)(v101 + 8));
      v103 = v102;
      if ( !v102 )
        sub_1B64324(0LL);
      v104 = *(_QWORD *)v102;
      v105 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
      {
        v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v106 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v105;
          v106 += 4;
          if ( !v105 )
            goto LABEL_112;
        }
        v107 = v104 + 16LL * *v106 + 312;
      }
      else
      {
LABEL_112:
        v107 = sub_1BB60A8(v102, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v103, *(_QWORD *)(v107 + 8));
      v109 = v6->fields.entity;
      if ( !v109 )
        sub_1B64324(v108);
      if ( (_DWORD)v108 != v109->fields.id )
      {
        v110 = *(_QWORD *)v53;
        v111 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v112 = (IClassBoardLineModel_c **)(*(_QWORD *)(v110 + 176) + 8LL);
          while ( *(v112 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v111;
            v112 += 2;
            if ( !v111 )
              goto LABEL_120;
          }
          v113 = v110 + 16LL * (*(_DWORD *)v112 + 1) + 312;
        }
        else
        {
LABEL_120:
          v113 = sub_1BB60A8(v53, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v114 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v53, *(_QWORD *)(v113 + 8));
        v117 = v114;
        if ( !v33 )
          sub_1B64324(v114);
        v118 = v33->fields._items;
        v119 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v33->fields._version;
        if ( !v118 )
          sub_1B64324(v114);
        v120 = v33->fields._size;
        if ( (unsigned int)v120 >= v118->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            v114,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v121 = &v118->obj.klass + v120;
          v33->fields._size = v120 + 1;
          v121[4] = (Il2CppClass *)v117;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v121 + 4), (int32_t)v117, v115, v116);
        }
      }
    }
  }
  v122 = *(_QWORD *)v43;
  v123 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
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
    v125 = sub_1BB60A8(v43, System_IDisposable_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v43, *(_QWORD *)(v125 + 8));
  if ( !v33 )
LABEL_160:
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v33,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v126 = 0;
  while ( 1 )
  {
    v127 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v136,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v128 = v127;
    if ( !v127 )
      break;
    current = v136.fields._current;
    if ( !v136.fields._current )
      sub_1B64324(v127);
    v130 = v136.fields._current->klass;
    v131 = *(unsigned __int16 *)(&v136.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v136.fields._current->klass->_2.bitflags2 + 3) )
    {
      v132 = &v130->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v132 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v131;
        v132 += 4;
        if ( !v131 )
          goto LABEL_141;
      }
      v133 = (__int64)&v130->vtable[*v132 + 13].method;
    }
    else
    {
LABEL_141:
      v133 = sub_1BB60A8(v136.fields._current, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    v126 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v133)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v133 + 8));
    if ( (v126 & 1) != 0 )
    {
      v134 = 9;
      goto LABEL_146;
    }
  }
  v134 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v136,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v128 && v134 == 9;
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_49FF850 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method);
    byte_49FF850 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(0LL);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0LL);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
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
  if ( (byte_49FF856 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v5);
    byte_49FF856 = 1;
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
    p_method = sub_1BB60A8(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
    v15 = sub_1BB60A8(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_1B64324(this);
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
    v20 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 0LL);
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
  if ( (byte_49FF857 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v5);
    byte_49FF857 = 1;
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
    p_method = sub_1BB60A8(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
    v15 = sub_1BB60A8(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_1B64324(this);
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
    v20 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v20)(
                  v17,
                  *(_QWORD *)(v20 + 8));
}