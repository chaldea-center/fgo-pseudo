void ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct ClassBoardSquareEntity_o *entity; // x20
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct ClassBoardSquareEntity_o *v22; // x8

  if ( (byte_4C2ADC4 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardSquareUser_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_4C2ADC4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lineList, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.entity = squareEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)squareEntity, v11, v12);
  entity = this->fields.entity;
  v14 = sub_1C2D6DC(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_QWORD *)(v14 + 24) = entity;
  sub_1C2D434((CGThumbnailListItem_o *)(v14 + 24), (int32_t)entity, v15, v16);
  this->fields.user = (struct IClassBoardSquareUser_o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.user, v14, v17, v18);
  v22 = this->fields.entity;
  if ( !v22 )
    sub_1C2D6EC(v19, v20);
  ClassBoardSquareModel__InitializeItemList(this, v22->fields.itemIds, v22->fields.itemNums, v21);
}


void ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C2ADC5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4C2ADC5 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1C2D6EC(lineList, line);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)line;
    sub_1C2D434((CGThumbnailListItem_o *)(v10 + 4), (int32_t)line, (int32_t)method, v3);
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
  const MethodInfo *v10; // x3
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
  const MethodInfo *v65; // x3
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
  const MethodInfo *v94; // x3
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

  if ( (byte_4C2ADC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C2D490(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C2D490(&IClassBoardLineModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_1C2D490(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__);
    sub_1C2D490(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__);
    sub_1C2D490(&ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    byte_4C2ADC8 = 1;
  }
  memset(&v134, 0, sizeof(v134));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1C2D6EC(0, connectSquareList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v133,
    lineList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v134 = v133;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v134,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_1C2D6DC(ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      sub_1C2D6EC(v7, v8);
    current = (int32_t)v134.fields._current;
    *(_QWORD *)(v6 + 16) = v134.fields._current;
    v12 = (__int64 **)(v6 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), current, v9, v10);
    v15 = *(__int64 **)(v6 + 16);
    if ( !v15 )
      sub_1C2D6EC(v13, v14);
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
      v19 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
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
      v26 = sub_1C7DCA8(v20, IClassBoardSquareModel_TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1C2D6EC(v27, v28);
    if ( (_DWORD)v27 == entity->fields.id
      || (v30 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v31 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v31,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__,
            0),
          v27 = BasicHelper__Any_object_(
                  v30,
                  (System_Func_T__bool__o *)v31,
                  (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v27 & 1) != 0) )
    {
      v32 = *v12;
      if ( !*v12 )
        sub_1C2D6EC(v27, v28);
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
        v36 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 1);
      }
      v43 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
      v45 = v43;
      if ( !v43 )
        sub_1C2D6EC(0, v44);
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
        v49 = sub_1C7DCA8(v43, IClassBoardSquareModel_TypeInfo, 0);
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
      v52 = this->fields.entity;
      if ( !v52 )
        sub_1C2D6EC(v50, v51);
      if ( (_DWORD)v50 != v52->fields.id )
      {
        v53 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v54 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v54,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__,
          0);
        v55 = BasicHelper__Any_object_(
                v53,
                (System_Func_T__bool__o *)v54,
                (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v55 )
        {
          v57 = *v12;
          if ( !*v12 )
            sub_1C2D6EC(v55, v56);
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
            v62 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 1);
          }
          v92 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v62)(v57, *(_QWORD *)(v62 + 8));
          v95 = v92;
          if ( !v59 )
            sub_1C2D6EC(v92, v92);
          items = v59->fields._items;
          v97 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v59->fields._version;
          if ( !items )
            sub_1C2D6EC(v92, v92);
          size = v59->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              v92,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &items->obj.klass + size;
            v59->fields._size = size + 1;
            v99[4] = (Il2CppClass *)v95;
            sub_1C2D434((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v95, v93, v94);
          }
          v102 = *v12;
          if ( !*v12 )
            sub_1C2D6EC(v100, v101);
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
            v106 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 1);
          }
          v107 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8));
          v109 = v107;
          if ( !v107 )
            sub_1C2D6EC(0, v108);
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
            v113 = sub_1C7DCA8(v107, IClassBoardSquareModel_TypeInfo, 5);
          }
          v114 = (*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
          if ( (v114 & 1) != 0 )
          {
            v116 = *v12;
            if ( !v116 )
              sub_1C2D6EC(v114, v115);
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
              v120 = sub_1C7DCA8(v116, IClassBoardLineModel_TypeInfo, 1);
            }
            v121 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v120)(v116, *(_QWORD *)(v120 + 8));
            v123 = v121;
            if ( !v121 )
              sub_1C2D6EC(0, v129);
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
            v128 = v130 + 16LL * (*(_DWORD *)v132 + 17) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v37 = *v12;
      if ( !*v12 )
        sub_1C2D6EC(v27, v28);
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
        v42 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 0);
      }
      v63 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8));
      v66 = v63;
      if ( !v39 )
        sub_1C2D6EC(v63, v63);
      v67 = v39->fields._items;
      v68 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v39->fields._version;
      if ( !v67 )
        sub_1C2D6EC(v63, v63);
      v69 = v39->fields._size;
      if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v63,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v39->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v66;
        sub_1C2D434((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v66, v64, v65);
      }
      v73 = *v12;
      if ( !*v12 )
        sub_1C2D6EC(v71, v72);
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
        v77 = sub_1C7DCA8(*v12, IClassBoardLineModel_TypeInfo, 0);
      }
      v78 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8));
      v80 = v78;
      if ( !v78 )
        sub_1C2D6EC(0, v79);
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
        v84 = sub_1C7DCA8(v78, IClassBoardSquareModel_TypeInfo, 5);
      }
      v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
      if ( (v85 & 1) != 0 )
      {
        v87 = *v12;
        if ( !v87 )
          sub_1C2D6EC(v85, v86);
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
          v91 = sub_1C7DCA8(v87, IClassBoardLineModel_TypeInfo, 0);
        }
        v121 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
        v123 = v121;
        if ( !v121 )
          sub_1C2D6EC(0, v122);
        v124 = *(_QWORD *)v121;
        v125 = IClassBoardSquareModel_TypeInfo;
        v126 = *(unsigned __int16 *)(*(_QWORD *)v121 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v121 + 302LL) )
        {
LABEL_113:
          v128 = sub_1C7DCA8(v121, v125, 17);
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
        v128 = v124 + 16LL * (*(_DWORD *)v127 + 17) + 312;
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  if ( (byte_4C2ADC2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&IClassBoardItemModel_TypeInfo);
    sub_1C2D490(&IClassBoardLineModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareUser_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_4C2ADC2 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
    v9 = sub_1C7DCA8(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))v9)(user, *(_QWORD *)(v9 + 8)) & 1) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardSquareModel_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_184;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      entity->fields.classBoardBaseId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
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
    sub_1C2D6EC(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v141 = v140;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v141,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
          v117 = sub_1C7DCA8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
        }
        v119 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v117)(
                 itemList,
                 *(_QWORD *)(v117 + 8));
        if ( !v119 )
          sub_1C2D6EC(0, v118);
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
            v123 = sub_1C7DCA8(v119, System_Collections_IEnumerator_TypeInfo, 0);
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
            v127 = sub_1C7DCA8(v119, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
          }
          v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))v127)(v119, *(_QWORD *)(v127 + 8));
          v130 = v128;
          if ( !v128 )
            sub_1C2D6EC(0, v129);
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
            v134 = sub_1C7DCA8(v128, IClassBoardItemModel_TypeInfo, 2);
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
          v138 = sub_1C7DCA8(v119, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v138)(v119, *(_QWORD *)(v138 + 8));
        return v10;
      }
      goto LABEL_184;
    }
    current = v141.fields._current;
    if ( !v141.fields._current )
      sub_1C2D6EC(v12, v13);
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
      v18 = sub_1C7DCA8(v141.fields._current, IClassBoardLineModel_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v18)(current, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C2D6EC(0, v20);
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
      v25 = sub_1C7DCA8(v19, IClassBoardSquareModel_TypeInfo, 5);
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
        v29 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 0);
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
      v35 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v36 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v35)(current, *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_1C2D6EC(0, v37);
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
      v42 = sub_1C7DCA8(v36, IClassBoardSquareModel_TypeInfo, 5);
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
        v46 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 1);
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
      v52 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 0);
    }
    v53 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(current, *(_QWORD *)(v52 + 8));
    v55 = v53;
    if ( !v53 )
      sub_1C2D6EC(0, v54);
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
      v59 = sub_1C7DCA8(v53, IClassBoardSquareModel_TypeInfo, 0);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    v62 = v4->fields.entity;
    if ( !v62 )
      sub_1C2D6EC(v60, v61);
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
        v66 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v67 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v66)(current, *(_QWORD *)(v66 + 8));
      v69 = v67;
      if ( !v67 )
        sub_1C2D6EC(0, v68);
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
        v73 = sub_1C7DCA8(v67, IClassBoardSquareModel_TypeInfo, 14);
      }
      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
      v76 = v74;
      if ( !v74 )
        sub_1C2D6EC(0, v75);
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
        v80 = sub_1C7DCA8(v74, IClassBoardSquareUser_TypeInfo, 0);
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
      v84 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v85 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v84)(current, *(_QWORD *)(v84 + 8));
    v87 = v85;
    if ( !v85 )
      sub_1C2D6EC(0, v86);
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
      v91 = sub_1C7DCA8(v85, IClassBoardSquareModel_TypeInfo, 0);
    }
    v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
    v94 = v4->fields.entity;
    if ( !v94 )
      sub_1C2D6EC(v92, v93);
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
        v98 = sub_1C7DCA8(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v99 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v98)(current, *(_QWORD *)(v98 + 8));
      v101 = v99;
      if ( !v99 )
        sub_1C2D6EC(0, v100);
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
        v105 = sub_1C7DCA8(v99, IClassBoardSquareModel_TypeInfo, 14);
      }
      v106 = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8));
      v108 = v106;
      if ( !v106 )
        sub_1C2D6EC(0, v107);
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
        v112 = sub_1C7DCA8(v106, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v108, *(_QWORD *)(v112 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x25
  int32_t v16; // w23
  int32_t v17; // w24
  ClassBoardItemModel_o *v18; // x22
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4C2ADC6 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardItemModel_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4C2ADC6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_1C2D434((CGThumbnailListItem_o *)p_itemList, (int32_t)v7, v9, v10);
  if ( !itemIds )
    goto LABEL_16;
  max_length = itemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v15 >= LODWORD(itemNums->max_length) )
LABEL_17:
        sub_1C2D6F4(v11, v12, v13);
      v16 = itemIds->m_Items[v15];
      v17 = itemNums->m_Items[v15];
      v18 = (ClassBoardItemModel_o *)sub_1C2D6DC(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v18, v16, v17, v19);
      v11 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v11->fields._items;
      v23 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v18;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_1C2D6EC(v11, v12);
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
  const MethodInfo *v71; // x3
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
  const MethodInfo *v108; // x3
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
  if ( (byte_4C2ADC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&IClassBoardLineModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_1C2D490(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C2ADC7 = 1;
  }
  memset(&v129, 0, sizeof(v129));
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
    v10 = sub_1C7DCA8(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v10)(
                                      blankModel,
                                      *(_QWORD *)(v10 + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
    v15 = sub_1C7DCA8(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v16,
    (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    v21 = sub_1C7DCA8(blankModel, IClassBoardSquareModel_TypeInfo, 9);
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
    v26 = sub_1C7DCA8(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1C2D6EC(0, v27);
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
      v32 = sub_1C7DCA8(v28, System_Collections_IEnumerator_TypeInfo, 0);
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
      v36 = sub_1C7DCA8(v28, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1C2D6EC(0, v38);
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
      v43 = sub_1C7DCA8(v37, IClassBoardLineModel_TypeInfo, 0);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      sub_1C2D6EC(0, v45);
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
      v50 = sub_1C7DCA8(v44, IClassBoardSquareModel_TypeInfo, 0);
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
        v54 = sub_1C7DCA8(v39, IClassBoardLineModel_TypeInfo, 0);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v39, *(_QWORD *)(v54 + 8));
      v57 = v55;
      if ( !v55 )
        sub_1C2D6EC(0, v56);
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
        v61 = sub_1C7DCA8(v55, IClassBoardSquareModel_TypeInfo, 0);
      }
      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1C2D6EC(v62, v63);
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
          v68 = sub_1C7DCA8(v39, IClassBoardLineModel_TypeInfo, 0);
        }
        v69 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v39, *(_QWORD *)(v68 + 8));
        v72 = v69;
        if ( !v17 )
          sub_1C2D6EC(v69, v69);
        items = v17->fields._items;
        v74 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1C2D6EC(v69, v69);
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v69,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v76[4] = (Il2CppClass *)v72;
          sub_1C2D434((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v72, v70, v71);
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
      v80 = sub_1C7DCA8(v39, IClassBoardLineModel_TypeInfo, 1);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v39, *(_QWORD *)(v80 + 8));
    v83 = v81;
    if ( !v81 )
      sub_1C2D6EC(0, v82);
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
      v87 = sub_1C7DCA8(v81, IClassBoardSquareModel_TypeInfo, 0);
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
        v91 = sub_1C7DCA8(v39, IClassBoardLineModel_TypeInfo, 1);
      }
      v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v39, *(_QWORD *)(v91 + 8));
      v94 = v92;
      if ( !v92 )
        sub_1C2D6EC(0, v93);
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
        v98 = sub_1C7DCA8(v92, IClassBoardSquareModel_TypeInfo, 0);
      }
      v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
      v101 = v6->fields.entity;
      if ( !v101 )
        sub_1C2D6EC(v99, v100);
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
          v105 = sub_1C7DCA8(v39, IClassBoardLineModel_TypeInfo, 1);
        }
        v106 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v39, *(_QWORD *)(v105 + 8));
        v109 = v106;
        if ( !v17 )
          sub_1C2D6EC(v106, v106);
        v110 = v17->fields._items;
        v111 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !v110 )
          sub_1C2D6EC(v106, v106);
        v112 = v17->fields._size;
        if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v106,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v113 = &v110->obj.klass + v112;
          v17->fields._size = v112 + 1;
          v113[4] = (Il2CppClass *)v109;
          sub_1C2D434((CGThumbnailListItem_o *)(v113 + 4), (int32_t)v109, v107, v108);
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
    v117 = sub_1C7DCA8(v28, System_IDisposable_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v28, *(_QWORD *)(v117 + 8));
  if ( !v17 )
LABEL_160:
    sub_1C2D6EC(this, blankModel);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v129,
    v17,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v118 = 0;
  while ( 1 )
  {
    v119 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v129,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v121 = v119;
    if ( !v119 )
      break;
    current = v129.fields._current;
    if ( !v129.fields._current )
      sub_1C2D6EC(v119, v120);
    v123 = v129.fields._current->klass;
    v124 = *(unsigned __int16 *)&v129.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v129.fields._current->klass->_2.rank )
    {
      v125 = &v123->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v125 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v124;
        v125 += 4;
        if ( !v124 )
          goto LABEL_141;
      }
      v126 = (__int64)&v123->vtable[*v125 + 15];
    }
    else
    {
LABEL_141:
      v126 = sub_1C7DCA8(v129.fields._current, IClassBoardSquareModel_TypeInfo, 15);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v121 && v127 == 9;
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  return entity->fields.assetId;
}


int32_t ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(this, method);
  return entity->fields.classBoardBaseId;
}


bool ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4C2ADC3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_4C2ADC3 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(this, method);
  return entity->fields.iconId;
}


int32_t ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(this, method);
  return entity->fields.id;
}


bool ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(0, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0);
}


bool ClassBoardSquareModel__get_IsGrand(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(0, method);
  return ClassBoardSquareEntity__IsGrand(entity, 0);
}


bool ClassBoardSquareModel__get_IsSetGrandSvt(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(0, method);
  return ClassBoardSquareEntity__IsSetGrandSvt(entity, 0);
}


bool ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  return entity->fields.skillType;
}


int32_t ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(this, method);
  return entity->fields.targetId;
}


int32_t ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C2ADC9 & 1) == 0 )
  {
    sub_1C2D490(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    byte_4C2ADC9 = 1;
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
    v8 = sub_1C7DCA8(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C7DCA8(lineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C2D6EC(this, x);
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
    v19 = sub_1C7DCA8(this, IClassBoardSquareModel_TypeInfo, 0);
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
  if ( (byte_4C2ADCA & 1) == 0 )
  {
    sub_1C2D490(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    byte_4C2ADCA = 1;
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
    v8 = sub_1C7DCA8(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C7DCA8(lineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C2D6EC(this, x);
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
    v19 = sub_1C7DCA8(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass43_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}