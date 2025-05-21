void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ListViewSort_o *v9; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ListViewSort_o *v13; // x19
  struct ServantSortSelectMenu_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B4028E & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_TypeInfo, v1);
    sub_1BDB878(&ServantSortSelectMenu_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_12707/*"ServantSortSelect1"*/, v3);
    sub_1BDB878(&StringLiteral_12708/*"ServantSortSelect2"*/, v4);
    sub_1BDB878(&StringLiteral_12709/*"ServantSortSelect4"*/, v5);
    byte_4B4028E = 1;
  }
  v6 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v6, (System_String_o *)StringLiteral_12707/*"ServantSortSelect1"*/, 3, 0, 0LL);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)ServantSortSelectMenu_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v9 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v9, (System_String_o *)StringLiteral_12708/*"ServantSortSelect2"*/, 3, 0, 0LL);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->commonServantEquipSortInfo, (int32_t)v9, v11, v12);
  v13 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v13, (System_String_o *)StringLiteral_12709/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v14 = ServantSortSelectMenu_TypeInfo->static_fields;
  v14->commandCodeSortInfo = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14->commandCodeSortInfo, (int32_t)v13, v15, v16);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _QWORD *v11; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  System_Collections_Generic_List_T__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _QWORD *v30; // x8
  int32_t *v31; // x25
  struct System_Object_array *v32; // x9
  __int64 v33; // x10
  int32_t *v34; // x24
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  System_Collections_Generic_List_T__o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  _QWORD *v50; // x8
  int32_t *v51; // x25
  struct System_Object_array *v52; // x9
  __int64 v53; // x10
  int32_t *v54; // x24
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x10
  __int64 v58; // x10
  __int64 v59; // x10
  __int64 v60; // x10
  __int64 v61; // x10
  __int64 v62; // x10
  __int64 v63; // x10
  __int64 v64; // x10
  __int64 v65; // x10
  __int64 v66; // x10
  System_Collections_Generic_List_T__o *v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x9
  _QWORD *v71; // x8
  __int64 v72; // x10
  __int64 v73; // x10
  __int64 v74; // x10
  __int64 v75; // x10
  __int64 v76; // x10
  __int64 v77; // x10
  __int64 v78; // x10
  __int64 v79; // x10
  __int64 v80; // x10
  __int64 v81; // x10
  System_Collections_Generic_List_T__o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct System_Object_array *v85; // x9
  _QWORD *v86; // x8
  __int64 v87; // x10
  __int64 v88; // x10
  __int64 v89; // x10
  __int64 v90; // x10
  __int64 v91; // x10
  __int64 v92; // x10
  __int64 v93; // x10
  __int64 v94; // x10
  System_Collections_Generic_List_T__o *v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x9
  _QWORD *v99; // x8
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  __int64 v103; // x10
  __int64 v104; // x10
  __int64 v105; // x10
  __int64 v106; // x10
  __int64 v107; // x10
  System_Collections_Generic_List_T__o *v108; // x20
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x10
  __int64 v115; // x10

  if ( (byte_4B4028D & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v5);
    byte_4B4028D = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v6 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v6 )
    goto LABEL_221;
  v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  p_version = &v6->fields._version;
  ++v6->fields._version;
  items = v6->fields._items;
  p_size = &v6->fields._size;
  size = v6->fields._size;
  if ( !items )
    goto LABEL_221;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 3;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      10,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 10;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      4,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 4;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      7,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 7;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      5,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 5;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      6,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 6;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      15,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 15;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      16,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 16;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 2;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      14,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 14;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 1;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      8,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantBaseSelectList, (int32_t)v6, v9, v10);
  v27 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v27,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v27 )
    goto LABEL_221;
  v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v31 = &v27->fields._version;
  ++v27->fields._version;
  v32 = v27->fields._items;
  v34 = &v27->fields._size;
  v33 = v27->fields._size;
  if ( !v32 )
    goto LABEL_221;
  if ( (unsigned int)v33 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v33 + 1;
    *((_DWORD *)v32->m_Items + v33) = 3;
    ++*v31;
  }
  v35 = *v34;
  if ( (unsigned int)v35 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      10,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v35 + 1;
    *((_DWORD *)v32->m_Items + v35) = 10;
    ++*v31;
  }
  v36 = *v34;
  if ( (unsigned int)v36 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      4,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v36 + 1;
    *((_DWORD *)v32->m_Items + v36) = 4;
    ++*v31;
  }
  v37 = *v34;
  if ( (unsigned int)v37 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      7,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v37 + 1;
    *((_DWORD *)v32->m_Items + v37) = 7;
    ++*v31;
  }
  v38 = *v34;
  if ( (unsigned int)v38 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      5,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v38 + 1;
    *((_DWORD *)v32->m_Items + v38) = 5;
    ++*v31;
  }
  v39 = *v34;
  if ( (unsigned int)v39 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      6,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v39 + 1;
    *((_DWORD *)v32->m_Items + v39) = 6;
    ++*v31;
  }
  v40 = *v34;
  if ( (unsigned int)v40 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      15,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v40 + 1;
    *((_DWORD *)v32->m_Items + v40) = 15;
    ++*v31;
  }
  v41 = *v34;
  if ( (unsigned int)v41 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      16,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v41 + 1;
    *((_DWORD *)v32->m_Items + v41) = 16;
    ++*v31;
  }
  v42 = *v34;
  if ( (unsigned int)v42 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v42 + 1;
    *((_DWORD *)v32->m_Items + v42) = 2;
    ++*v31;
  }
  v43 = *v34;
  if ( (unsigned int)v43 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      14,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v43 + 1;
    *((_DWORD *)v32->m_Items + v43) = 14;
    ++*v31;
  }
  v44 = *v34;
  if ( (unsigned int)v44 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v44 + 1;
    *((_DWORD *)v32->m_Items + v44) = 1;
    ++*v31;
  }
  v45 = *v34;
  if ( (unsigned int)v45 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      8,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v32 = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v32 )
      goto LABEL_221;
  }
  else
  {
    *v34 = v45 + 1;
    *((_DWORD *)v32->m_Items + v45) = 8;
    ++*v31;
  }
  v46 = *v34;
  if ( (unsigned int)v46 >= v32->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      25,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    *v34 = v46 + 1;
    *((_DWORD *)v32->m_Items + v46) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.fatigureSelectList, (int32_t)v27, v28, v29);
  v47 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v47,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v47 )
    goto LABEL_221;
  v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v51 = &v47->fields._version;
  ++v47->fields._version;
  v52 = v47->fields._items;
  v54 = &v47->fields._size;
  v53 = v47->fields._size;
  if ( !v52 )
    goto LABEL_221;
  if ( (unsigned int)v53 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v53 + 1;
    *((_DWORD *)v52->m_Items + v53) = 3;
    ++*v51;
  }
  v55 = *v54;
  if ( (unsigned int)v55 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      10,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v55 + 1;
    *((_DWORD *)v52->m_Items + v55) = 10;
    ++*v51;
  }
  v56 = *v54;
  if ( (unsigned int)v56 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      4,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v56 + 1;
    *((_DWORD *)v52->m_Items + v56) = 4;
    ++*v51;
  }
  v57 = *v54;
  if ( (unsigned int)v57 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      7,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v57 + 1;
    *((_DWORD *)v52->m_Items + v57) = 7;
    ++*v51;
  }
  v58 = *v54;
  if ( (unsigned int)v58 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      5,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v58 + 1;
    *((_DWORD *)v52->m_Items + v58) = 5;
    ++*v51;
  }
  v59 = *v54;
  if ( (unsigned int)v59 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      6,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v59 + 1;
    *((_DWORD *)v52->m_Items + v59) = 6;
    ++*v51;
  }
  v60 = *v54;
  if ( (unsigned int)v60 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      15,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v60 + 1;
    *((_DWORD *)v52->m_Items + v60) = 15;
    ++*v51;
  }
  v61 = *v54;
  if ( (unsigned int)v61 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      16,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v61 + 1;
    *((_DWORD *)v52->m_Items + v61) = 16;
    ++*v51;
  }
  v62 = *v54;
  if ( (unsigned int)v62 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v62 + 1;
    *((_DWORD *)v52->m_Items + v62) = 2;
    ++*v51;
  }
  v63 = *v54;
  if ( (unsigned int)v63 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      14,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v63 + 1;
    *((_DWORD *)v52->m_Items + v63) = 14;
    ++*v51;
  }
  v64 = *v54;
  if ( (unsigned int)v64 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v64 + 1;
    *((_DWORD *)v52->m_Items + v64) = 1;
    ++*v51;
  }
  v65 = *v54;
  if ( (unsigned int)v65 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      8,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    v52 = v47->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v47->fields._version;
    if ( !v52 )
      goto LABEL_221;
  }
  else
  {
    *v54 = v65 + 1;
    *((_DWORD *)v52->m_Items + v65) = 8;
    ++*v51;
  }
  v66 = *v54;
  if ( (unsigned int)v66 >= v52->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v47,
      28,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    *v54 = v66 + 1;
    *((_DWORD *)v52->m_Items + v66) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v47;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.buddySelectList, (int32_t)v47, v48, v49);
  v67 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v67,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v67 )
    goto LABEL_221;
  v70 = v67->fields._items;
  v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v67->fields._version;
  if ( !v70 )
    goto LABEL_221;
  v72 = v67->fields._size;
  if ( (unsigned int)v72 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v72 + 1;
    *((_DWORD *)v70->m_Items + v72) = 3;
    ++v67->fields._version;
  }
  v73 = v67->fields._size;
  if ( (unsigned int)v73 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      10,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v73 + 1;
    *((_DWORD *)v70->m_Items + v73) = 10;
    ++v67->fields._version;
  }
  v74 = v67->fields._size;
  if ( (unsigned int)v74 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      4,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v74 + 1;
    *((_DWORD *)v70->m_Items + v74) = 4;
    ++v67->fields._version;
  }
  v75 = v67->fields._size;
  if ( (unsigned int)v75 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      7,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v75 + 1;
    *((_DWORD *)v70->m_Items + v75) = 7;
    ++v67->fields._version;
  }
  v76 = v67->fields._size;
  if ( (unsigned int)v76 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v76 + 1;
    *((_DWORD *)v70->m_Items + v76) = 2;
    ++v67->fields._version;
  }
  v77 = v67->fields._size;
  if ( (unsigned int)v77 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      5,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v77 + 1;
    *((_DWORD *)v70->m_Items + v77) = 5;
    ++v67->fields._version;
  }
  v78 = v67->fields._size;
  if ( (unsigned int)v78 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      6,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v78 + 1;
    *((_DWORD *)v70->m_Items + v78) = 6;
    ++v67->fields._version;
  }
  v79 = v67->fields._size;
  if ( (unsigned int)v79 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      14,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v79 + 1;
    *((_DWORD *)v70->m_Items + v79) = 14;
    ++v67->fields._version;
  }
  v80 = v67->fields._size;
  if ( (unsigned int)v80 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    v70 = v67->fields._items;
    v71 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v67->fields._version;
    if ( !v70 )
      goto LABEL_221;
  }
  else
  {
    v67->fields._size = v80 + 1;
    *((_DWORD *)v70->m_Items + v80) = 1;
    ++v67->fields._version;
  }
  v81 = v67->fields._size;
  if ( (unsigned int)v81 >= v70->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v67,
      8,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v67->fields._size = v81 + 1;
    *((_DWORD *)v70->m_Items + v81) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v67;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantSelectList, (int32_t)v67, v68, v69);
  v82 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v82,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v82 )
    goto LABEL_221;
  v85 = v82->fields._items;
  v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v82->fields._version;
  if ( !v85 )
    goto LABEL_221;
  v87 = v82->fields._size;
  if ( (unsigned int)v87 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v87 + 1;
    *((_DWORD *)v85->m_Items + v87) = 3;
    ++v82->fields._version;
  }
  v88 = v82->fields._size;
  if ( (unsigned int)v88 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      5,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v88 + 1;
    *((_DWORD *)v85->m_Items + v88) = 5;
    ++v82->fields._version;
  }
  v89 = v82->fields._size;
  if ( (unsigned int)v89 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      6,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v89 + 1;
    *((_DWORD *)v85->m_Items + v89) = 6;
    ++v82->fields._version;
  }
  v90 = v82->fields._size;
  if ( (unsigned int)v90 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      7,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v90 + 1;
    *((_DWORD *)v85->m_Items + v90) = 7;
    ++v82->fields._version;
  }
  v91 = v82->fields._size;
  if ( (unsigned int)v91 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v91 + 1;
    *((_DWORD *)v85->m_Items + v91) = 2;
    ++v82->fields._version;
  }
  v92 = v82->fields._size;
  if ( (unsigned int)v92 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      14,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v92 + 1;
    *((_DWORD *)v85->m_Items + v92) = 14;
    ++v82->fields._version;
  }
  v93 = v82->fields._size;
  if ( (unsigned int)v93 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    v85 = v82->fields._items;
    v86 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v85 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v93 + 1;
    *((_DWORD *)v85->m_Items + v93) = 1;
    ++v82->fields._version;
  }
  v94 = v82->fields._size;
  if ( (unsigned int)v94 >= v85->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      24,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v82->fields._size = v94 + 1;
    *((_DWORD *)v85->m_Items + v94) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v82;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEquipSelectList, (int32_t)v82, v83, v84);
  v95 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v95,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v95 )
    goto LABEL_221;
  v98 = v95->fields._items;
  v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v95->fields._version;
  if ( !v98 )
    goto LABEL_221;
  v100 = v95->fields._size;
  if ( (unsigned int)v100 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      8,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v100 + 1;
    *((_DWORD *)v98->m_Items + v100) = 8;
    ++v95->fields._version;
  }
  v101 = v95->fields._size;
  if ( (unsigned int)v101 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      3,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v101 + 1;
    *((_DWORD *)v98->m_Items + v101) = 3;
    ++v95->fields._version;
  }
  v102 = v95->fields._size;
  if ( (unsigned int)v102 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      19,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v102 + 1;
    *((_DWORD *)v98->m_Items + v102) = 19;
    ++v95->fields._version;
  }
  v103 = v95->fields._size;
  if ( (unsigned int)v103 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      20,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v103 + 1;
    *((_DWORD *)v98->m_Items + v103) = 20;
    ++v95->fields._version;
  }
  v104 = v95->fields._size;
  if ( (unsigned int)v104 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      21,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v104 + 1;
    *((_DWORD *)v98->m_Items + v104) = 21;
    ++v95->fields._version;
  }
  v105 = v95->fields._size;
  if ( (unsigned int)v105 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      22,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v105 + 1;
    *((_DWORD *)v98->m_Items + v105) = 22;
    ++v95->fields._version;
  }
  v106 = v95->fields._size;
  if ( (unsigned int)v106 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      23,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    v98 = v95->fields._items;
    v99 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v98 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v106 + 1;
    *((_DWORD *)v98->m_Items + v106) = 23;
    ++v95->fields._version;
  }
  v107 = v95->fields._size;
  if ( (unsigned int)v107 >= v98->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v95->fields._size = v107 + 1;
    *((_DWORD *)v98->m_Items + v107) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v95;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantCostumeSelectList, (int32_t)v95, v96, v97);
  v108 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v108,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v108 )
    goto LABEL_221;
  v111 = v108->fields._items;
  v112 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v108->fields._version;
  if ( !v111 )
    goto LABEL_221;
  v113 = v108->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      2,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v112 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_221;
  }
  else
  {
    v108->fields._size = v113 + 1;
    *((_DWORD *)v111->m_Items + v113) = 2;
    ++v108->fields._version;
  }
  v114 = v108->fields._size;
  if ( (unsigned int)v114 < v111->max_length )
  {
    v108->fields._size = v114 + 1;
    *((_DWORD *)v111->m_Items + v114) = 14;
    ++v108->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v108,
    14,
    *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  v111 = v108->fields._items;
  v112 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v108->fields._version;
  if ( !v111 )
LABEL_221:
    sub_1BDBAD4(v7, v8);
LABEL_215:
  v115 = v108->fields._size;
  if ( (unsigned int)v115 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      1,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v108->fields._size = v115 + 1;
    *((_DWORD *)v111->m_Items + v115) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v108;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeSelectList, (int32_t)v108, v109, v110);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantSortSelectMenu__ChangeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  switch ( this->fields.kind )
  {
    case 0:
    case 1:
    case 3:
      ServantSortSelectMenu__SetAllButtonSelect(this, method);
      break;
    case 2:
    case 4:
      ServantSortSelectMenu__SetShortButtonSelect(this, method);
      break;
    case 5:
      ServantSortSelectMenu__SetCostumeButtonSelect(this, method);
      break;
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonSelect(this, method);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonSelect(this, method);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonSelect(this, method);
      break;
    default:
      return;
  }
}


void __fastcall ServantSortSelectMenu__Close(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSortSelectMenu__Close_33001380(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_33001380(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4B40261 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_ServantSortSelectMenu_EndClose__, v5);
    byte_4B40261 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantSortSelectMenu__EndOpen(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantEquipSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_4B4025F & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B4025F = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1BDBAD4(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B4025E & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B4025E = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BDBAD4(0LL, v1);
  ListViewSort__Load(commonServantSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void __fastcall ServantSortSelectMenu__Init(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__InitAllDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40263 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40263 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(allDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(allDispObject, method, v4);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = allDispSortBtnsLabel->m_Items[v6];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v6,
                                                    (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        allDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                      operationSortInfo,
                                                      (int32_t)allDispObject,
                                                      0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)allDispObject, 0LL);
          allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel;
          ++v6;
          if ( allDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitBuddyDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40265 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40265 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(buddyDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(buddyDispObject, method, v4);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = buddyDispSortBtnsLabel->m_Items[v6];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v6,
                                                      (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        buddyDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)buddyDispObject,
                                                        0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)buddyDispObject, 0LL);
          buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel;
          ++v6;
          if ( buddyDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitCommandCodeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40269 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40269 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(commandCodeDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(commandCodeDispObject, method, v4);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = commandCodeDispSortBtnsLabel->m_Items[v6];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v6,
                                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        commandCodeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                              operationSortInfo,
                                                              (int32_t)commandCodeDispObject,
                                                              0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)commandCodeDispObject, 0LL);
          commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel;
          ++v6;
          if ( commandCodeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitCostumeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *costumeDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40268 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40268 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(costumeDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(costumeDispObject, method, v4);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = costumeDispSortBtnsLabel->m_Items[v6];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v6,
                                                        (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        costumeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)costumeDispObject,
                                                          0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)costumeDispObject, 0LL);
          costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel;
          ++v6;
          if ( costumeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitFatigueDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40264 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40264 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(fatigueDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(fatigueDispObject, method, v4);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = fatigueDispSortBtnsLabel->m_Items[v6];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v6,
                                                        (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        fatigueDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)fatigueDispObject,
                                                          0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)fatigueDispObject, 0LL);
          fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel;
          ++v6;
          if ( fatigueDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B4025D & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B4025D = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BDBAD4(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *normalDispObject; // x0
  __int64 v4; // x2
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B40262 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40262 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(normalDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(normalDispObject, method, v4);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = normalSortBtnsLabel->m_Items[v6];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v6,
                                                       (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        normalDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                         operationSortInfo,
                                                         (int32_t)normalDispObject,
                                                         0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)normalDispObject, 0LL);
          normalSortBtnsLabel = this->fields.normalSortBtnsLabel;
          ++v6;
          if ( normalSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitShortDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v7; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v10; // x21

  if ( (byte_4B40266 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B40266 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(shortDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(shortDispObject, method, v5);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v10 = shortDispSortBtnsLabel->m_Items[v7];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v7,
                                                      (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        shortDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)shortDispObject,
                                                        0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)shortDispObject, 0LL);
          shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel;
          ++v7;
          if ( shortDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__InitShortDispButtons(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *servantEquipSelectList; // x0
  int32_t v9; // w0
  __int64 v10; // x2
  il2cpp_array_size_t v11; // w20
  char v12; // w21
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v14; // x20
  struct UICommonButton_array *v15; // x22
  int max_length; // w8
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v26; // x8
  int v27; // w9
  int v28; // w10
  int v29; // w22
  int32_t v30; // w21
  int v31; // w24
  int v32; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v37; // w27
  float v38; // s0
  float v39; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0

  if ( (byte_4B40267 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UICommonButton__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_UICommonButton__TypeInfo, v7);
    byte_4B40267 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v9 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_36BC248 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v9 != -1 )
  {
    v11 = v9;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)ListViewSort__get_IsWareHouseEquipList(
                                                                         (ListViewSort_o *)servantEquipSelectList,
                                                                         0LL);
      v12 = (char)servantEquipSelectList;
    }
    else
    {
      v12 = 0;
    }
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_43;
    if ( v11 >= shortDispSortButtons->max_length )
      goto LABEL_44;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)shortDispSortButtons->m_Items[v11];
    if ( !servantEquipSelectList )
      goto LABEL_43;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)servantEquipSelectList,
                                                                       0LL);
    if ( !servantEquipSelectList )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v12 & 1, 0LL);
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v15 = this->fields.shortDispSortButtons;
  if ( !v15 )
    goto LABEL_43;
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = &v15->obj.klass + (int)v17;
      v19 = (Il2CppObject *)v18[4];
      if ( !v19 )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)v18[4],
                                                                         0LL);
      if ( !servantEquipSelectList )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)servantEquipSelectList,
                                                                         0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_43;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v19, v10, v20);
        }
      }
      max_length = v15->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1BDBADC(servantEquipSelectList, method, v10);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_44;
  v26 = shortDispSortSprites->m_Items[0];
  if ( !v26 || !v14 )
LABEL_43:
    sub_1BDBAD4(servantEquipSelectList, method);
  v27 = v14->fields._size;
  v28 = v27 + 3;
  if ( v27 >= 0 )
    v28 = v14->fields._size;
  if ( v27 >= 1 )
  {
    v29 = 0;
    v30 = 0;
    v31 = v28 >> 2;
    v32 = (v14->fields._size & 3) - 1;
    mWidth = (float)v26->fields.mWidth;
    mHeight = (float)v26->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v37 = v29 >= v31 ? v32 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v14,
                                                                         v30,
                                                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v38 = (float)(v30 - 4 * v29) + (float)((float)v37 * -0.5);
      v39 = (float)(v38 * mWidth) + (float)(v38 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v39, 0LL);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v14,
                                                                         v30,
                                                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v41, (float)v29 * (float)-(float)(y + mHeight), 0LL);
      if ( (~v30++ & 3) == 0 )
        ++v29;
      if ( v30 >= v14->fields._size )
        return;
    }
    goto LABEL_43;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B40274 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickCancel__, method);
    byte_4B40274 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantSortSelectMenu__OnClickChoiceSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4028B & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickChoiceSort__, method);
    byte_4B4028B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1

  if ( (byte_4B40273 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickDecide__, method);
    byte_4B40273 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1BDBAD4(baseSortInfo, v5);
    }
    v9 = this->fields.openedKind != operationSortInfo->fields.sortKind
      || this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      || this->fields.openedChoiceSort != operationSortInfo->fields.isChoiceSort;
    ServantSortSelectMenu__Callback(this, v9, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40278 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickEventOrder__, method);
    byte_4B40278 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v10; // x20
  int32_t v11; // w1

  if ( (byte_4B40275 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickHelpClose__, v3);
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickHelp__, v4);
    byte_4B40275 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickHelp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1BDBAD4(helpButton, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v11, v10, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 32;
        goto LABEL_15;
      }
    }
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v11 = 42;
    goto LABEL_15;
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelpClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
  {
    sub_1BDBAD4(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4028A & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSmartSort__, method);
    byte_4B4028A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40282 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__, method);
    byte_4B40282 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40281 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__, method);
    byte_4B40281 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027F & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortAmount__, method);
    byte_4B4027F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027D & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortAttack__, method);
    byte_4B4027D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40289 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortBuddy__, method);
    byte_4B40289 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40276 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortClass__, method);
    byte_4B40276 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027E & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortCost__, method);
    byte_4B4027E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40283 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortCostume__, method);
    byte_4B40283 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40277 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortCreate__, method);
    byte_4B40277 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40280 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortFriendShip__, method);
    byte_4B40280 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40284 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__, method);
    byte_4B40284 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027C & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortHp__, method);
    byte_4B4027C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027A & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortLevel__, method);
    byte_4B4027A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40287 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortLimitCount__, method);
    byte_4B40287 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40285 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__, method);
    byte_4B40285 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingItem(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40286 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__, method);
    byte_4B40286 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B4027B & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortNpLevel__, method);
    byte_4B4027B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40279 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortRarity__, method);
    byte_4B40279 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRecoveryFatigue(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B40288 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__, method);
    byte_4B40288 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__Open(
        ServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        bool isChoiceReverse,
        ServantSortSelectMenu_CallbackFunc_o *callback,
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool isChoiceSort; // w8
  ListViewSort_o *v27; // x21
  ListViewSort_o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  ListViewSort_o *baseSortInfo; // x0
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *smartSortLabel; // x21
  UILabel_o *smartSortDetail; // x21
  UILabel_o *costumeSmartSortLabel; // x21
  UILabel_o *costumeSmartSortDetail; // x21
  UILabel_o *smartChoiceLabel; // x21
  UILabel_o *choiceSortLabel; // x21
  UILabel_o *choiceSort2Label; // x21
  UILabel_o *smartChoiceDetail; // x21
  __int64 *v45; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  int32_t v52; // w8
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  int32_t v55; // w8
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  int32_t v60; // w1
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  System_Action_o *v68; // x20
  int32_t v69; // w20
  ServantSortSelectMenu_c *v70; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v72; // x1
  __int64 v73; // x0
  __int64 v74; // x1

  if ( (byte_4B40260 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&ListViewSort_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&Method_ServantSortSelectMenu_EndOpen__, v13);
    sub_1BDB878(&ServantSortSelectMenu_TypeInfo, v14);
    sub_1BDB878(&StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, v15);
    sub_1BDB878(&StringLiteral_12214/*"SMART_SORT_DETAIL"*/, v16);
    sub_1BDB878(&StringLiteral_12215/*"SMART_SORT_NAME"*/, v17);
    sub_1BDB878(&StringLiteral_11688/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_1BDB878(&StringLiteral_3399/*"CHOICE_SORT_NAME"*/, v19);
    sub_1BDB878(&StringLiteral_11692/*"SERVANT_SORT_DECIDE"*/, v20);
    sub_1BDB878(&StringLiteral_3398/*"CHOICE_SORT_DETAIL_REVERSE"*/, v21);
    sub_1BDB878(&StringLiteral_12220/*"SORT_WINDOW_DETAIL"*/, v22);
    sub_1BDB878(&StringLiteral_3397/*"CHOICE_SORT_DETAIL"*/, v23);
    byte_4B40260 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)isChoiceReverse);
    if ( !sort )
    {
      v69 = this->fields.kind;
      v70 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v70 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v70->static_fields->commonServantSortInfo;
      if ( v69 == 2 )
        ++p_commonServantSortInfo;
      v72 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)v72, v24, v25);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0LL);
        sub_1BDBAD4(v73, v74);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v24, v25);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v27 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v28 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
    ListViewSort___ctor_42768220(v28, v27, 0LL);
    this->fields.operationSortInfo = v28;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v28, v29, v30);
    baseSortInfo = (ListViewSort_o *)this->fields.allDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.fatigueDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.buddyDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.normalDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.shortDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSort2Object;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
    if ( !baseSortInfo )
      goto LABEL_80;
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSortInfo, 0LL);
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SORT_WINDOW_DETAIL"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SMART_SORT_NAME"*/, 0LL);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SMART_SORT_NAME"*/, 0LL);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v45 = &StringLiteral_3398/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0LL);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0LL);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0LL);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v48);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v49);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v57);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v49);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v50);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v51);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v52 = this->fields.kind;
                  if ( v52 == 3 )
                    goto LABEL_69;
                  if ( v52 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v49);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v53);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v54);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v55 = this->fields.kind;
                  if ( v55 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      v60 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v60, 0LL, 0, 0, 0, 0, 0LL);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v55 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v68 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                      System_Action___ctor(v68, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v56);
LABEL_65:
                      v60 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v49);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v58);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v59);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v60 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v49);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v61);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v62);
                  baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  goto LABEL_72;
                case 7:
                  ServantSortSelectMenu__InitFatigueDisp(this, v49);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v63);
LABEL_61:
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v64);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v65);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v49);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v66);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v67);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
LABEL_69:
                  baseSortInfo = (ListViewSort_o *)this->fields.choiceSort2Object;
                  if ( !baseSortInfo )
                    break;
                  goto LABEL_72;
                default:
                  goto LABEL_74;
              }
            }
          }
        }
LABEL_80:
        sub_1BDBAD4(baseSortInfo, v31);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v45 = &StringLiteral_3397/*"CHOICE_SORT_DETAIL"*/;
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetAllButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *allDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  allDispSortButtons = this->fields.allDispSortButtons;
  if ( !allDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)allDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      allDispSortButtons = v4->fields.allDispSortButtons;
      ++v5;
      if ( allDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetAllButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026B = 1;
  }
  allDispSortSprites = v3->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantBaseSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = allDispSortSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          allDispSortSprites = v3->fields.allDispSortSprites;
          ++v7;
          if ( allDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetBuddyButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *buddyDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  buddyDispSortButtons = this->fields.buddyDispSortButtons;
  if ( !buddyDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)buddyDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      buddyDispSortButtons = v4->fields.buddyDispSortButtons;
      ++v5;
      if ( buddyDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetBuddyButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026D = 1;
  }
  buddyDispSortSprites = v3->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.buddySelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = buddyDispSortSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          buddyDispSortSprites = v3->fields.buddyDispSortSprites;
          ++v7;
          if ( buddyDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__SetChoiceSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B40272 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17520/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17519/*"btn_off"*/, v3);
    byte_4B40272 = 1;
  }
  switch ( v2->fields.kind )
  {
    case 3:
    case 8:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSort2BtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    case 4:
    case 6:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSortBtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    default:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartChoiceBtnSprite) == 0LL )
LABEL_16:
        sub_1BDBAD4(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v5 = &StringLiteral_17520/*"btn_on"*/;
      else
        v5 = &StringLiteral_17519/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetCommandCodeButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *commandCodeDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  commandCodeDispSortButtons = this->fields.commandCodeDispSortButtons;
  if ( !commandCodeDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)commandCodeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      commandCodeDispSortButtons = v4->fields.commandCodeDispSortButtons;
      ++v5;
      if ( commandCodeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetCommandCodeButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B40270 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B40270 = 1;
  }
  commandCodeDispSprites = v3->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.commandCodeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = commandCodeDispSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          commandCodeDispSprites = v3->fields.commandCodeDispSprites;
          ++v7;
          if ( commandCodeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetCostumeButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *costumeDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  costumeDispSortButtons = this->fields.costumeDispSortButtons;
  if ( !costumeDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)costumeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      costumeDispSortButtons = v4->fields.costumeDispSortButtons;
      ++v5;
      if ( costumeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetCostumeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026F = 1;
  }
  costumeDispSprites = v3->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantCostumeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = costumeDispSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          costumeDispSprites = v3->fields.costumeDispSprites;
          ++v7;
          if ( costumeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetEnableButtons(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  bool v5; // w21
  const MethodInfo *v7; // x2

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL),
        (decideButton = this->fields.cancelButton) == 0LL) )
  {
    sub_1BDBAD4(decideButton, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider(decideButton, v5, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 1:
    case 3:
      ServantSortSelectMenu__SetAllButtonEnable(this, isEnable, v7);
      break;
    case 2:
    case 4:
      ServantSortSelectMenu__SetShortButtonEnable(this, isEnable, v7);
      break;
    case 5:
      ServantSortSelectMenu__SetCostumeButtonEnable(this, isEnable, v7);
      break;
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonEnable(this, isEnable, v7);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonEnable(this, isEnable, v7);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonEnable(this, isEnable, v7);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetFatigueButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *fatigueDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  fatigueDispSortButtons = this->fields.fatigueDispSortButtons;
  if ( !fatigueDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)fatigueDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      fatigueDispSortButtons = v4->fields.fatigueDispSortButtons;
      ++v5;
      if ( fatigueDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetFatigueButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026C = 1;
  }
  fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.fatigureSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = fatigueDispSortSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
          ++v7;
          if ( fatigueDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetNormalButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *normalSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  normalSortButtons = this->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)normalSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      normalSortButtons = v4->fields.normalSortButtons;
      ++v5;
      if ( normalSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetNormalButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v7; // x20
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026A = 1;
  }
  normalSortButtons = v3->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( (int)v7 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v3->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v7 >= normalSortSprites->max_length )
        sub_1BDBADC(this, method, v2);
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (ServantSortSelectMenu_o *)v3->fields.servantSelectList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v11 = normalSortSprites->m_Items[v7];
          this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)this,
                                              v7,
                                              (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v11 )
          {
            v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            normalSortButtons = v3->fields.normalSortButtons;
            ++v7;
            if ( normalSortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetShortButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *shortDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  shortDispSortButtons = this->fields.shortDispSortButtons;
  if ( !shortDispSortButtons )
LABEL_7:
    sub_1BDBAD4(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BDBADC(this, isEnable, method);
    this = (ServantSortSelectMenu_o *)shortDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      shortDispSortButtons = v4->fields.shortDispSortButtons;
      ++v5;
      if ( shortDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetShortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v11; // x21
  System_String_o **v12; // x8

  v3 = this;
  if ( (byte_4B4026E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v5);
    byte_4B4026E = 1;
  }
  shortDispSortSprites = v3->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1BDBAD4(this, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(this, method, v2);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantEquipSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v11 = shortDispSortSprites->m_Items[v7];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v7,
                                            (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v11 )
        {
          v12 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          shortDispSortSprites = v3->fields.shortDispSortSprites;
          ++v7;
          if ( shortDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__SetSmartSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B40271 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17520/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17519/*"btn_off"*/, v3);
    byte_4B40271 = 1;
  }
  if ( v2->fields.kind == 5 )
  {
    operationSortInfo = v2->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_13;
    this = (ServantSortSelectMenu_o *)v2->fields.costumeSmartSortBtnSprite;
    if ( !this )
      goto LABEL_13;
  }
  else
  {
    operationSortInfo = v2->fields.operationSortInfo;
    if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartSortBtnSprite) == 0LL )
LABEL_13:
      sub_1BDBAD4(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v5 = &StringLiteral_17520/*"btn_on"*/;
  else
    v5 = &StringLiteral_17519/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall ServantSortSelectMenu__add_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantSortSelectMenu_o *v10; // x0
  ServantSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B4025B & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B4025B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1BDBD94(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4028C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15616/*"Window/CancelButton"*/, method);
    byte_4B4028C = 1;
  }
  return (System_String_o *)StringLiteral_15616/*"Window/CancelButton"*/;
}


void __fastcall ServantSortSelectMenu__remove_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4B4025C & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B4025C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BDBD94(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1E884;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1E83C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantSortSelectMenu_CallbackFunc__BeginInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B4028F & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, result);
    byte_4B4028F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__Invoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}