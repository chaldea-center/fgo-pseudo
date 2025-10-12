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
  const MethodInfo *v20; // x3
  struct ClassBoardSquareEntity_o *v21; // x8

  if ( (byte_4C3B5A0 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardSquareUser_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_4C3B5A0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lineList, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.entity = squareEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)squareEntity, v11, v12);
  entity = this->fields.entity;
  v14 = sub_1C32E6C(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_QWORD *)(v14 + 24) = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 24), (int32_t)entity, v15, v16);
  this->fields.user = (struct IClassBoardSquareUser_o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.user, v14, v17, v18);
  v21 = this->fields.entity;
  if ( !v21 )
    sub_1C32E7C(v19);
  ClassBoardSquareModel__InitializeItemList(this, v21->fields.itemIds, v21->fields.itemNums, v20);
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

  if ( (byte_4C3B5A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4C3B5A1 = 1;
  }
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1C32E7C(lineList);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)line,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)line;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 4), (int32_t)line, (int32_t)method, v3);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t current; // w1
  __int64 **v11; // x21
  __int64 v12; // x0
  __int64 *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x23
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v26; // x23
  System_Func_object__bool__o *v27; // x24
  __int64 *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x9
  IClassBoardLineModel_c **v31; // x10
  __int64 v32; // x0
  __int64 *v33; // x23
  __int64 v34; // x8
  System_Collections_Generic_List_object__o *v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x23
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  struct ClassBoardSquareEntity_o *v46; // x8
  System_Collections_Generic_List_T__o *v47; // x23
  System_Func_object__bool__o *v48; // x24
  _BOOL8 v49; // x0
  __int64 *v50; // x23
  __int64 v51; // x8
  System_Collections_Generic_List_object__o *v52; // x22
  __int64 v53; // x9
  IClassBoardLineModel_c **v54; // x10
  __int64 v55; // x0
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x1
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x0
  __int64 *v65; // x22
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x22
  __int64 v72; // x8
  __int64 v73; // x9
  IClassBoardSquareModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 *v77; // x21
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x1
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  __int64 v90; // x0
  __int64 *v91; // x22
  __int64 v92; // x8
  __int64 v93; // x9
  IClassBoardLineModel_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x22
  __int64 v98; // x8
  __int64 v99; // x9
  IClassBoardSquareModel_c **v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 *v103; // x21
  __int64 v104; // x8
  __int64 v105; // x9
  IClassBoardLineModel_c **v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x21
  __int64 v110; // x8
  IClassBoardSquareModel_c *v111; // x1
  __int64 v112; // x9
  IClassBoardSquareModel_c **v113; // x10
  __int64 v114; // x0
  __int64 v115; // x8
  __int64 v116; // x9
  IClassBoardSquareModel_c **v117; // x10
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3B5A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C32C20(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_1C32C20(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__);
    sub_1C32C20(&Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__);
    sub_1C32C20(&ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    byte_4C3B5A4 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    lineList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v119 = v118;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v119,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_1C32E6C(ClassBoardSquareModel___c__DisplayClass43_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      sub_1C32E7C(v7);
    current = (int32_t)v119.fields._current;
    *(_QWORD *)(v6 + 16) = v119.fields._current;
    v11 = (__int64 **)(v6 + 16);
    sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), current, v8, v9);
    v13 = *(__int64 **)(v6 + 16);
    if ( !v13 )
      sub_1C32E7C(v12);
    v14 = *v13;
    v15 = *(unsigned __int16 *)(*v13 + 302);
    if ( *(_WORD *)(*v13 + 302) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v16 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_12:
      v17 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    v20 = *(_QWORD *)v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_19;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_19:
      v23 = sub_1C83438(v18, IClassBoardSquareModel_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_1C32E7C(v24);
    if ( (_DWORD)v24 == entity->fields.id
      || (v26 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v27,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__0__,
            0),
          v24 = BasicHelper__Any_object_(
                  v26,
                  (System_Func_T__bool__o *)v27,
                  (const MethodInfo_30C6790 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v24 & 1) != 0) )
    {
      v28 = *v11;
      if ( !*v11 )
        sub_1C32E7C(v24);
      v29 = *v28;
      v30 = *(unsigned __int16 *)(*v28 + 302);
      if ( *(_WORD *)(*v28 + 302) )
      {
        v31 = (IClassBoardLineModel_c **)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *(v31 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v30;
          v31 += 2;
          if ( !v30 )
            goto LABEL_29;
        }
        v32 = v29 + 16LL * (*(_DWORD *)v31 + 1) + 312;
      }
      else
      {
LABEL_29:
        v32 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 1);
      }
      v39 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
      v40 = v39;
      if ( !v39 )
        sub_1C32E7C(0);
      v41 = *(_QWORD *)v39;
      v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v43 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_42;
        }
        v44 = v41 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_42:
        v44 = sub_1C83438(v39, IClassBoardSquareModel_TypeInfo, 0);
      }
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
      v46 = this->fields.entity;
      if ( !v46 )
        sub_1C32E7C(v45);
      if ( (_DWORD)v45 != v46->fields.id )
      {
        v47 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v48 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v48,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass43_0__FindLinkSquares_b__1__,
          0);
        v49 = BasicHelper__Any_object_(
                v47,
                (System_Func_T__bool__o *)v48,
                (const MethodInfo_30C6790 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v49 )
        {
          v50 = *v11;
          if ( !*v11 )
            sub_1C32E7C(v49);
          v51 = *v50;
          v52 = (System_Collections_Generic_List_object__o *)*connectSquareList;
          v53 = *(unsigned __int16 *)(*v50 + 302);
          if ( *(_WORD *)(*v50 + 302) )
          {
            v54 = (IClassBoardLineModel_c **)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *(v54 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v53;
              v54 += 2;
              if ( !v53 )
                goto LABEL_52;
            }
            v55 = v51 + 16LL * (*(_DWORD *)v54 + 1) + 312;
          }
          else
          {
LABEL_52:
            v55 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 1);
          }
          v82 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v55)(v50, *(_QWORD *)(v55 + 8));
          v85 = v82;
          if ( !v52 )
            sub_1C32E7C(v82);
          items = v52->fields._items;
          v87 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
          ++v52->fields._version;
          if ( !items )
            sub_1C32E7C(v82);
          size = v52->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v52,
              v82,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &items->obj.klass + size;
            v52->fields._size = size + 1;
            v89[4] = (Il2CppClass *)v85;
            sub_1C32BC4((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v85, v83, v84);
          }
          v91 = *v11;
          if ( !*v11 )
            sub_1C32E7C(v90);
          v92 = *v91;
          v93 = *(unsigned __int16 *)(*v91 + 302);
          if ( *(_WORD *)(*v91 + 302) )
          {
            v94 = (IClassBoardLineModel_c **)(*(_QWORD *)(v92 + 176) + 8LL);
            while ( *(v94 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v93;
              v94 += 2;
              if ( !v93 )
                goto LABEL_91;
            }
            v95 = v92 + 16LL * (*(_DWORD *)v94 + 1) + 312;
          }
          else
          {
LABEL_91:
            v95 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 1);
          }
          v96 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
          v97 = v96;
          if ( !v96 )
            sub_1C32E7C(0);
          v98 = *(_QWORD *)v96;
          v99 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
          {
            v100 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v98 + 176) + 8LL);
            while ( *(v100 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v99;
              v100 += 2;
              if ( !v99 )
                goto LABEL_98;
            }
            v101 = v98 + 16LL * (*(_DWORD *)v100 + 5) + 312;
          }
          else
          {
LABEL_98:
            v101 = sub_1C83438(v96, IClassBoardSquareModel_TypeInfo, 5);
          }
          v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
          if ( (v102 & 1) != 0 )
          {
            v103 = *v11;
            if ( !v103 )
              sub_1C32E7C(v102);
            v104 = *v103;
            v105 = *(unsigned __int16 *)(*v103 + 302);
            if ( *(_WORD *)(*v103 + 302) )
            {
              v106 = (IClassBoardLineModel_c **)(*(_QWORD *)(v104 + 176) + 8LL);
              while ( *(v106 - 1) != IClassBoardLineModel_TypeInfo )
              {
                --v105;
                v106 += 2;
                if ( !v105 )
                  goto LABEL_106;
              }
              v107 = v104 + 16LL * (*(_DWORD *)v106 + 1) + 312;
            }
            else
            {
LABEL_106:
              v107 = sub_1C83438(v103, IClassBoardLineModel_TypeInfo, 1);
            }
            v108 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v107)(v103, *(_QWORD *)(v107 + 8));
            v109 = v108;
            if ( !v108 )
              sub_1C32E7C(0);
            v115 = *(_QWORD *)v108;
            v111 = IClassBoardSquareModel_TypeInfo;
            v116 = *(unsigned __int16 *)(*(_QWORD *)v108 + 302LL);
            if ( !*(_WORD *)(*(_QWORD *)v108 + 302LL) )
              goto LABEL_113;
            v117 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v115 + 176) + 8LL);
            while ( *(v117 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v116;
              v117 += 2;
              if ( !v116 )
                goto LABEL_113;
            }
            v114 = v115 + 16LL * (*(_DWORD *)v117 + 17) + 312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      v33 = *v11;
      if ( !*v11 )
        sub_1C32E7C(v24);
      v34 = *v33;
      v35 = (System_Collections_Generic_List_object__o *)*connectSquareList;
      v36 = *(unsigned __int16 *)(*v33 + 302);
      if ( *(_WORD *)(*v33 + 302) )
      {
        v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v37 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_35;
        }
        v38 = v34 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_35:
        v38 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 0);
      }
      v56 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8));
      v59 = v56;
      if ( !v35 )
        sub_1C32E7C(v56);
      v60 = v35->fields._items;
      v61 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
      ++v35->fields._version;
      if ( !v60 )
        sub_1C32E7C(v56);
      v62 = v35->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v56,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &v60->obj.klass + v62;
        v35->fields._size = v62 + 1;
        v63[4] = (Il2CppClass *)v59;
        sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v59, v57, v58);
      }
      v65 = *v11;
      if ( !*v11 )
        sub_1C32E7C(v64);
      v66 = *v65;
      v67 = *(unsigned __int16 *)(*v65 + 302);
      if ( *(_WORD *)(*v65 + 302) )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v68 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_64;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_64:
        v69 = sub_1C83438(*v11, IClassBoardLineModel_TypeInfo, 0);
      }
      v70 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
      v71 = v70;
      if ( !v70 )
        sub_1C32E7C(0);
      v72 = *(_QWORD *)v70;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v74 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *(v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 2;
          if ( !v73 )
            goto LABEL_71;
        }
        v75 = v72 + 16LL * (*(_DWORD *)v74 + 5) + 312;
      }
      else
      {
LABEL_71:
        v75 = sub_1C83438(v70, IClassBoardSquareModel_TypeInfo, 5);
      }
      v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8));
      if ( (v76 & 1) != 0 )
      {
        v77 = *v11;
        if ( !v77 )
          sub_1C32E7C(v76);
        v78 = *v77;
        v79 = *(unsigned __int16 *)(*v77 + 302);
        if ( *(_WORD *)(*v77 + 302) )
        {
          v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v80 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v79;
            v80 += 4;
            if ( !v79 )
              goto LABEL_79;
          }
          v81 = v78 + 16LL * *v80 + 312;
        }
        else
        {
LABEL_79:
          v81 = sub_1C83438(v77, IClassBoardLineModel_TypeInfo, 0);
        }
        v108 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8));
        v109 = v108;
        if ( !v108 )
          sub_1C32E7C(0);
        v110 = *(_QWORD *)v108;
        v111 = IClassBoardSquareModel_TypeInfo;
        v112 = *(unsigned __int16 *)(*(_QWORD *)v108 + 302LL);
        if ( !*(_WORD *)(*(_QWORD *)v108 + 302LL) )
        {
LABEL_113:
          v114 = sub_1C83438(v108, v111, 17);
          goto LABEL_115;
        }
        v113 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *(v113 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v112;
          v113 += 2;
          if ( !v112 )
            goto LABEL_113;
        }
        v114 = v110 + 16LL * (*(_DWORD *)v113 + 17) + 312;
LABEL_115:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v114)(
          v109,
          connectSquareList,
          *(_QWORD *)(v114 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v4; // x19
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  int32_t v10; // w20
  struct ClassBoardSquareEntity_o *entity; // x8
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  Il2CppClass *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x22
  __int64 v20; // x8
  __int64 v21; // x9
  IClassBoardSquareModel_c **v22; // x10
  __int64 v23; // x0
  Il2CppClass *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  IClassBoardSquareModel_o *v28; // x1
  const MethodInfo *v29; // x3
  Il2CppClass *v30; // x8
  __int64 v31; // x9
  IClassBoardLineModel_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  IClassBoardSquareModel_c **v38; // x10
  __int64 v39; // x0
  Il2CppClass *v40; // x8
  __int64 v41; // x9
  IClassBoardLineModel_c **v42; // x10
  __int64 v43; // x0
  IClassBoardSquareModel_o *v44; // x1
  const MethodInfo *v45; // x3
  Il2CppClass *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x22
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  struct ClassBoardSquareEntity_o *v57; // x8
  Il2CppClass *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x22
  __int64 v64; // x8
  __int64 v65; // x9
  IClassBoardSquareModel_c **v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x22
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  Il2CppClass *v74; // x8
  __int64 v75; // x9
  IClassBoardLineModel_c **v76; // x10
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x22
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  struct ClassBoardSquareEntity_o *v85; // x8
  Il2CppClass *v86; // x8
  __int64 v87; // x9
  IClassBoardLineModel_c **v88; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x21
  __int64 v92; // x8
  __int64 v93; // x9
  IClassBoardSquareModel_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x21
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x19
  __int64 v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x21
  __int64 v118; // x8
  __int64 v119; // x9
  IClassBoardItemModel_c **v120; // x10
  __int64 v121; // x0
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4C3B59E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&IClassBoardItemModel_TypeInfo);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareUser_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_4C3B59E = 1;
  }
  memset(&v128, 0, sizeof(v128));
  if ( !checkedBlankIdHashSet )
  {
    checkedBlankIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      checkedBlankIdHashSet,
      (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
    v9 = sub_1C83438(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))v9)(user, *(_QWORD *)(v9 + 8)) & 1) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardSquareModel_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_184;
  if ( !this )
    goto LABEL_184;
  this = (ClassBoardSquareModel_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      entity->fields.classBoardBaseId,
                                      (const MethodInfo_3396838 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
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
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v127,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v128 = v127;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v128,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v128,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v10 = 2;
LABEL_145:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v103 = itemList->klass;
        v104 = *(unsigned __int16 *)&itemList->klass->_2.rank;
        if ( *(_WORD *)&itemList->klass->_2.rank )
        {
          v105 = &v103->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v105 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            --v104;
            v105 += 4;
            if ( !v104 )
              goto LABEL_150;
          }
          v106 = (__int64)&v103->vtable + 16 * *v105;
        }
        else
        {
LABEL_150:
          v106 = sub_1C83438(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
        }
        v107 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v106)(
                 itemList,
                 *(_QWORD *)(v106 + 8));
        if ( !v107 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v108 = *(_QWORD *)v107;
          v109 = *(unsigned __int16 *)(*(_QWORD *)v107 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v107 + 302LL) )
          {
            v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v110 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v109;
              v110 += 4;
              if ( !v109 )
                goto LABEL_157;
            }
            v111 = v108 + 16LL * *v110 + 312;
          }
          else
          {
LABEL_157:
            v111 = sub_1C83438(v107, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v107, *(_QWORD *)(v111 + 8)) & 1) == 0 )
            break;
          v112 = *(_QWORD *)v107;
          v113 = *(unsigned __int16 *)(*(_QWORD *)v107 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v107 + 302LL) )
          {
            v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v114 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              --v113;
              v114 += 4;
              if ( !v113 )
                goto LABEL_164;
            }
            v115 = v112 + 16LL * *v114 + 312;
          }
          else
          {
LABEL_164:
            v115 = sub_1C83438(v107, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
          }
          v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v107, *(_QWORD *)(v115 + 8));
          v117 = v116;
          if ( !v116 )
            sub_1C32E7C(0);
          v118 = *(_QWORD *)v116;
          v119 = *(unsigned __int16 *)(*(_QWORD *)v116 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v116 + 302LL) )
          {
            v120 = (IClassBoardItemModel_c **)(*(_QWORD *)(v118 + 176) + 8LL);
            while ( *(v120 - 1) != IClassBoardItemModel_TypeInfo )
            {
              --v119;
              v120 += 2;
              if ( !v119 )
                goto LABEL_171;
            }
            v121 = v118 + 16LL * (*(_DWORD *)v120 + 2) + 312;
          }
          else
          {
LABEL_171:
            v121 = sub_1C83438(v116, IClassBoardItemModel_TypeInfo, 2);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8)) & 1) == 0 )
          {
            v10 |= 8u;
            break;
          }
        }
        v122 = *(_QWORD *)v107;
        v123 = *(unsigned __int16 *)(*(_QWORD *)v107 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v107 + 302LL) )
        {
          v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
          {
            --v123;
            v124 += 4;
            if ( !v123 )
              goto LABEL_179;
          }
          v125 = v122 + 16LL * *v124 + 312;
        }
        else
        {
LABEL_179:
          v125 = sub_1C83438(v107, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v125)(v107, *(_QWORD *)(v125 + 8));
        return v10;
      }
      goto LABEL_184;
    }
    current = v128.fields._current;
    if ( !v128.fields._current )
      sub_1C32E7C(v12);
    v14 = v128.fields._current->klass;
    v15 = *(unsigned __int16 *)&v128.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v128.fields._current->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v16 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_30;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_30:
      v17 = sub_1C83438(v128.fields._current, IClassBoardLineModel_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(current, *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    v20 = *(_QWORD *)v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v22 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_37;
      }
      v23 = v20 + 16LL * (*(_DWORD *)v22 + 5) + 312;
    }
    else
    {
LABEL_37:
      v23 = sub_1C83438(v18, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) != 0 )
    {
      v24 = current->klass;
      v25 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v26 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_44;
        }
        v27 = (__int64)&v24->vtable[*v26];
      }
      else
      {
LABEL_44:
        v27 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v28 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v27)(
                                          current,
                                          *(_QWORD *)(v27 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v28, checkedBlankIdHashSet, v29) )
        break;
    }
    v30 = current->klass;
    v31 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v32 = (IClassBoardLineModel_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_51;
      }
      v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1];
    }
    else
    {
LABEL_51:
      v33 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v34 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v33)(current, *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( !v34 )
      sub_1C32E7C(0);
    v36 = *(_QWORD *)v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_58;
      }
      v39 = v36 + 16LL * (*(_DWORD *)v38 + 5) + 312;
    }
    else
    {
LABEL_58:
      v39 = sub_1C83438(v34, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) != 0 )
    {
      v40 = current->klass;
      v41 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v42 = (IClassBoardLineModel_c **)&v40->_1.interfaceOffsets->offset;
        while ( *(v42 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v41;
          v42 += 2;
          if ( !v41 )
            goto LABEL_65;
        }
        v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 1];
      }
      else
      {
LABEL_65:
        v43 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v44 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v43)(
                                          current,
                                          *(_QWORD *)(v43 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v44, checkedBlankIdHashSet, v45) )
        break;
    }
    v46 = current->klass;
    v47 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v48 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_72;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_72:
      v49 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 0);
    }
    v50 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v49)(current, *(_QWORD *)(v49 + 8));
    v51 = v50;
    if ( !v50 )
      sub_1C32E7C(0);
    v52 = *(_QWORD *)v50;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_79;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_79:
      v55 = sub_1C83438(v50, IClassBoardSquareModel_TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
    v57 = v4->fields.entity;
    if ( !v57 )
      sub_1C32E7C(v56);
    if ( (_DWORD)v56 != v57->fields.id )
    {
      v58 = current->klass;
      v59 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v60 = &v58->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_87;
        }
        v61 = (__int64)&v58->vtable[*v60];
      }
      else
      {
LABEL_87:
        v61 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 0);
      }
      v62 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v61)(current, *(_QWORD *)(v61 + 8));
      v63 = v62;
      if ( !v62 )
        sub_1C32E7C(0);
      v64 = *(_QWORD *)v62;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
      {
        v66 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v65;
          v66 += 2;
          if ( !v65 )
            goto LABEL_94;
        }
        v67 = v64 + 16LL * (*(_DWORD *)v66 + 14) + 312;
      }
      else
      {
LABEL_94:
        v67 = sub_1C83438(v62, IClassBoardSquareModel_TypeInfo, 14);
      }
      v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
      v69 = v68;
      if ( !v68 )
        sub_1C32E7C(0);
      v70 = *(_QWORD *)v68;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v72 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_101;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_101:
        v73 = sub_1C83438(v68, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8)) & 1) != 0 )
        break;
    }
    v74 = current->klass;
    v75 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v76 = (IClassBoardLineModel_c **)&v74->_1.interfaceOffsets->offset;
      while ( *(v76 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v75;
        v76 += 2;
        if ( !v75 )
          goto LABEL_108;
      }
      v77 = (__int64)&v74->vtable[*(_DWORD *)v76 + 1];
    }
    else
    {
LABEL_108:
      v77 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 1);
    }
    v78 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v77)(current, *(_QWORD *)(v77 + 8));
    v79 = v78;
    if ( !v78 )
      sub_1C32E7C(0);
    v80 = *(_QWORD *)v78;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v82 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_115;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_115:
      v83 = sub_1C83438(v78, IClassBoardSquareModel_TypeInfo, 0);
    }
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
    v85 = v4->fields.entity;
    if ( !v85 )
      sub_1C32E7C(v84);
    if ( (_DWORD)v84 != v85->fields.id )
    {
      v86 = current->klass;
      v87 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v88 = (IClassBoardLineModel_c **)&v86->_1.interfaceOffsets->offset;
        while ( *(v88 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v87;
          v88 += 2;
          if ( !v87 )
            goto LABEL_123;
        }
        v89 = (__int64)&v86->vtable[*(_DWORD *)v88 + 1];
      }
      else
      {
LABEL_123:
        v89 = sub_1C83438(current, IClassBoardLineModel_TypeInfo, 1);
      }
      v90 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v89)(current, *(_QWORD *)(v89 + 8));
      v91 = v90;
      if ( !v90 )
        sub_1C32E7C(0);
      v92 = *(_QWORD *)v90;
      v93 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
      {
        v94 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *(v94 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v93;
          v94 += 2;
          if ( !v93 )
            goto LABEL_130;
        }
        v95 = v92 + 16LL * (*(_DWORD *)v94 + 14) + 312;
      }
      else
      {
LABEL_130:
        v95 = sub_1C83438(v90, IClassBoardSquareModel_TypeInfo, 14);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      v97 = v96;
      if ( !v96 )
        sub_1C32E7C(0);
      v98 = *(_QWORD *)v96;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
      {
        v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v100 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          --v99;
          v100 += 4;
          if ( !v99 )
            goto LABEL_137;
        }
        v101 = v98 + 16LL * *v100 + 312;
      }
      else
      {
LABEL_137:
        v101 = sub_1C83438(v96, IClassBoardSquareUser_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8)) & 1) != 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v128,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x25
  int32_t v14; // w23
  int32_t v15; // w24
  ClassBoardItemModel_o *v16; // x22
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4C3B5A2 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardItemModel_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4C3B5A2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_1C32BC4((CGThumbnailListItem_o *)p_itemList, (int32_t)v7, v9, v10);
  if ( !itemIds )
    goto LABEL_16;
  max_length = itemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        goto LABEL_17;
      if ( !itemNums )
        break;
      if ( v13 >= LODWORD(itemNums->max_length) )
LABEL_17:
        sub_1C32E84(v11);
      v14 = itemIds->m_Items[v13];
      v15 = itemNums->m_Items[v13];
      v16 = (ClassBoardItemModel_o *)sub_1C32E6C(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v16, v14, v15, v17);
      v11 = (System_Collections_Generic_List_object__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      items = v11->fields._items;
      v21 = Method_System_Collections_Generic_List_IClassBoardItemModel__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v16,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v16;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_1C32E7C(v11);
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
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x25
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x1
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  IClassBoardLineModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x25
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  IClassBoardLineModel_c **v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x25
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  struct ClassBoardSquareEntity_o *v93; // x8
  __int64 v94; // x8
  __int64 v95; // x9
  IClassBoardLineModel_c **v96; // x10
  __int64 v97; // x0
  Il2CppObject *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  Il2CppObject *v101; // x1
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  int v110; // w22
  _BOOL8 v111; // x0
  bool v112; // w20
  Il2CppObject *current; // x21
  Il2CppClass *v114; // x8
  __int64 v115; // x9
  int32_t *v116; // x10
  __int64 v117; // x0
  int v118; // w19
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+8h] [xbp-78h] BYREF

  v6 = this;
  if ( (byte_4C3B5A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_1C32C20(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C3B5A3 = 1;
  }
  memset(&v120, 0, sizeof(v120));
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
    v10 = sub_1C83438(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v10)(
                                      blankModel,
                                      *(_QWORD *)(v10 + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_160;
  if ( System_Collections_Generic_HashSet_int___Contains(
         checkedBlankIdHashSet,
         (int32_t)this,
         (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
    v15 = sub_1C83438(blankModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  System_Collections_Generic_HashSet_int___Add(
    checkedBlankIdHashSet,
    v16,
    (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    v21 = sub_1C83438(blankModel, IClassBoardSquareModel_TypeInfo, 9);
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
    v26 = sub_1C83438(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v27 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_37;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_37:
      v31 = sub_1C83438(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v27;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v34 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_44;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_44:
      v35 = sub_1C83438(v27, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
    v37 = v36;
    if ( !v36 )
      sub_1C32E7C(0);
    v38 = *(_QWORD *)v36;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v40 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_51;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_51:
      v41 = sub_1C83438(v36, IClassBoardLineModel_TypeInfo, 0);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    v43 = v42;
    if ( !v42 )
      sub_1C32E7C(0);
    v44 = *(_QWORD *)v42;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v46 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_58;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_58:
      v47 = sub_1C83438(v42, IClassBoardSquareModel_TypeInfo, 0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) != v16 )
    {
      v48 = *(_QWORD *)v37;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_65;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_65:
        v51 = sub_1C83438(v37, IClassBoardLineModel_TypeInfo, 0);
      }
      v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v37, *(_QWORD *)(v51 + 8));
      v53 = v52;
      if ( !v52 )
        sub_1C32E7C(0);
      v54 = *(_QWORD *)v52;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_72;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_72:
        v57 = sub_1C83438(v52, IClassBoardSquareModel_TypeInfo, 0);
      }
      v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
      entity = v6->fields.entity;
      if ( !entity )
        sub_1C32E7C(v58);
      if ( (_DWORD)v58 != entity->fields.id )
      {
        v60 = *(_QWORD *)v37;
        v61 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
        {
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v62 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_80;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_80:
          v63 = sub_1C83438(v37, IClassBoardLineModel_TypeInfo, 0);
        }
        v64 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v37, *(_QWORD *)(v63 + 8));
        v67 = v64;
        if ( !v17 )
          sub_1C32E7C(v64);
        items = v17->fields._items;
        v69 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1C32E7C(v64);
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v64,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v71[4] = (Il2CppClass *)v67;
          sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v67, v65, v66);
        }
      }
    }
    v72 = *(_QWORD *)v37;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v74 = (IClassBoardLineModel_c **)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *(v74 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v73;
        v74 += 2;
        if ( !v73 )
          goto LABEL_91;
      }
      v75 = v72 + 16LL * (*(_DWORD *)v74 + 1) + 312;
    }
    else
    {
LABEL_91:
      v75 = sub_1C83438(v37, IClassBoardLineModel_TypeInfo, 1);
    }
    v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v37, *(_QWORD *)(v75 + 8));
    v77 = v76;
    if ( !v76 )
      sub_1C32E7C(0);
    v78 = *(_QWORD *)v76;
    v79 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
    {
      v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v80 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_98;
      }
      v81 = v78 + 16LL * *v80 + 312;
    }
    else
    {
LABEL_98:
      v81 = sub_1C83438(v76, IClassBoardSquareModel_TypeInfo, 0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8)) != v16 )
    {
      v82 = *(_QWORD *)v37;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v84 = (IClassBoardLineModel_c **)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *(v84 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v83;
          v84 += 2;
          if ( !v83 )
            goto LABEL_105;
        }
        v85 = v82 + 16LL * (*(_DWORD *)v84 + 1) + 312;
      }
      else
      {
LABEL_105:
        v85 = sub_1C83438(v37, IClassBoardLineModel_TypeInfo, 1);
      }
      v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v37, *(_QWORD *)(v85 + 8));
      v87 = v86;
      if ( !v86 )
        sub_1C32E7C(0);
      v88 = *(_QWORD *)v86;
      v89 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
      {
        v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v90 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_112;
        }
        v91 = v88 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_112:
        v91 = sub_1C83438(v86, IClassBoardSquareModel_TypeInfo, 0);
      }
      v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
      v93 = v6->fields.entity;
      if ( !v93 )
        sub_1C32E7C(v92);
      if ( (_DWORD)v92 != v93->fields.id )
      {
        v94 = *(_QWORD *)v37;
        v95 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
        {
          v96 = (IClassBoardLineModel_c **)(*(_QWORD *)(v94 + 176) + 8LL);
          while ( *(v96 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v95;
            v96 += 2;
            if ( !v95 )
              goto LABEL_120;
          }
          v97 = v94 + 16LL * (*(_DWORD *)v96 + 1) + 312;
        }
        else
        {
LABEL_120:
          v97 = sub_1C83438(v37, IClassBoardLineModel_TypeInfo, 1);
        }
        v98 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v37, *(_QWORD *)(v97 + 8));
        v101 = v98;
        if ( !v17 )
          sub_1C32E7C(v98);
        v102 = v17->fields._items;
        v103 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__;
        ++v17->fields._version;
        if ( !v102 )
          sub_1C32E7C(v98);
        v104 = v17->fields._size;
        if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v98,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = &v102->obj.klass + v104;
          v17->fields._size = v104 + 1;
          v105[4] = (Il2CppClass *)v101;
          sub_1C32BC4((CGThumbnailListItem_o *)(v105 + 4), (int32_t)v101, v99, v100);
        }
      }
    }
  }
  v106 = *(_QWORD *)v27;
  v107 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
    {
      --v107;
      v108 += 4;
      if ( !v107 )
        goto LABEL_131;
    }
    v109 = v106 + 16LL * *v108 + 312;
  }
  else
  {
LABEL_131:
    v109 = sub_1C83438(v27, System_IDisposable_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v27, *(_QWORD *)(v109 + 8));
  if ( !v17 )
LABEL_160:
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v120,
    v17,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v110 = 0;
  while ( 1 )
  {
    v111 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v120,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    v112 = v111;
    if ( !v111 )
      break;
    current = v120.fields._current;
    if ( !v120.fields._current )
      sub_1C32E7C(v111);
    v114 = v120.fields._current->klass;
    v115 = *(unsigned __int16 *)&v120.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v120.fields._current->klass->_2.rank )
    {
      v116 = &v114->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v116 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v115;
        v116 += 4;
        if ( !v115 )
          goto LABEL_141;
      }
      v117 = (__int64)&v114->vtable[*v116 + 15];
    }
    else
    {
LABEL_141:
      v117 = sub_1C83438(v120.fields._current, IClassBoardSquareModel_TypeInfo, 15);
    }
    v110 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v117)(
              current,
              checkedBlankIdHashSet,
              *(_QWORD *)(v117 + 8));
    if ( (v110 & 1) != 0 )
    {
      v118 = 9;
      goto LABEL_146;
    }
  }
  v118 = 10;
LABEL_146:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v120,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  return v112 && v118 == 9;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return entity->fields.assetId;
}


int32_t ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.classBoardBaseId;
}


bool ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B59F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_4C3B59F = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.iconId;
}


int32_t ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.id;
}


bool ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(0);
  return ClassBoardSquareEntity__get_IsBlank(entity, 0);
}


bool ClassBoardSquareModel__get_IsGrand(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(0);
  return ClassBoardSquareEntity__IsGrand(entity, 0);
}


bool ClassBoardSquareModel__get_IsSetGrandSvt(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(0);
  return ClassBoardSquareEntity__IsSetGrandSvt(entity, 0);
}


bool ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return entity->fields.skillType;
}


int32_t ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.targetId;
}


int32_t ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
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
  if ( (byte_4C3B5A5 & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B5A5 = 1;
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
    v8 = sub_1C83438(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C83438(lineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C32E7C(this);
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
    v19 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 0);
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
  if ( (byte_4C3B5A6 & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B5A6 = 1;
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
    v8 = sub_1C83438(x, IClassBoardSquareModel_TypeInfo, 0);
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
    v14 = sub_1C83438(lineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardSquareModel___c__DisplayClass43_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_1C32E7C(this);
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
    v19 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass43_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}