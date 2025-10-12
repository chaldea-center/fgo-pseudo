void ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ListViewSort_o *v4; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ListViewSort_o *v8; // x19
  struct ServantSortSelectMenu_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C32D8A & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&ServantSortSelectMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_12742/*"ServantSortSelect1"*/);
    sub_1C32C20(&StringLiteral_12743/*"ServantSortSelect2"*/);
    sub_1C32C20(&StringLiteral_12744/*"ServantSortSelect4"*/);
    byte_4C32D8A = 1;
  }
  v1 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v1, (System_String_o *)StringLiteral_12742/*"ServantSortSelect1"*/, 3, 0, 0);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantSortSelectMenu_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v4, (System_String_o *)StringLiteral_12743/*"ServantSortSelect2"*/, 3, 0, 0);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->commonServantEquipSortInfo, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v8, (System_String_o *)StringLiteral_12744/*"ServantSortSelect4"*/, 3, 0, 0);
  v9 = ServantSortSelectMenu_TypeInfo->static_fields;
  v9->commandCodeSortInfo = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->commandCodeSortInfo, (int32_t)v8, v10, v11);
}


void ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  System_Collections_Generic_List_T__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  _QWORD *v26; // x8
  int32_t *v27; // x25
  struct System_Object_array *v28; // x9
  __int64 v29; // x10
  int32_t *v30; // x24
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  System_Collections_Generic_List_T__o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _QWORD *v46; // x8
  int32_t *v47; // x25
  struct System_Object_array *v48; // x9
  __int64 v49; // x10
  int32_t *v50; // x24
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x10
  __int64 v58; // x10
  __int64 v59; // x10
  __int64 v60; // x10
  __int64 v61; // x10
  __int64 v62; // x10
  System_Collections_Generic_List_T__o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x9
  _QWORD *v67; // x8
  __int64 v68; // x10
  __int64 v69; // x10
  __int64 v70; // x10
  __int64 v71; // x10
  __int64 v72; // x10
  __int64 v73; // x10
  __int64 v74; // x10
  __int64 v75; // x10
  __int64 v76; // x10
  __int64 v77; // x10
  System_Collections_Generic_List_T__o *v78; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x9
  _QWORD *v82; // x8
  __int64 v83; // x10
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  __int64 v87; // x10
  __int64 v88; // x10
  __int64 v89; // x10
  __int64 v90; // x10
  System_Collections_Generic_List_T__o *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Object_array *v94; // x9
  _QWORD *v95; // x8
  __int64 v96; // x10
  __int64 v97; // x10
  __int64 v98; // x10
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  __int64 v103; // x10
  System_Collections_Generic_List_T__o *v104; // x20
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x10
  __int64 v111; // x10

  if ( (byte_4C32D89 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_4C32D89 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_221;
  v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  p_version = &v3->fields._version;
  ++v3->fields._version;
  items = v3->fields._items;
  p_size = &v3->fields._size;
  size = v3->fields._size;
  if ( !items )
    goto LABEL_221;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 3;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 10;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 4;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 7;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 5;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 6;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      15,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 15;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      16,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 16;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 2;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 14;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 1;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantBaseSelectList, (int32_t)v3, v5, v6);
  v23 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v23,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v23 )
    goto LABEL_221;
  v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v27 = &v23->fields._version;
  ++v23->fields._version;
  v28 = v23->fields._items;
  v30 = &v23->fields._size;
  v29 = v23->fields._size;
  if ( !v28 )
    goto LABEL_221;
  if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v29 + 1;
    *((_DWORD *)v28->m_Items + v29) = 3;
    ++*v27;
  }
  v31 = *v30;
  if ( (unsigned int)v31 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      10,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v31 + 1;
    *((_DWORD *)v28->m_Items + v31) = 10;
    ++*v27;
  }
  v32 = *v30;
  if ( (unsigned int)v32 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      4,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v32 + 1;
    *((_DWORD *)v28->m_Items + v32) = 4;
    ++*v27;
  }
  v33 = *v30;
  if ( (unsigned int)v33 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      7,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v33 + 1;
    *((_DWORD *)v28->m_Items + v33) = 7;
    ++*v27;
  }
  v34 = *v30;
  if ( (unsigned int)v34 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      5,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v34 + 1;
    *((_DWORD *)v28->m_Items + v34) = 5;
    ++*v27;
  }
  v35 = *v30;
  if ( (unsigned int)v35 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      6,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v35 + 1;
    *((_DWORD *)v28->m_Items + v35) = 6;
    ++*v27;
  }
  v36 = *v30;
  if ( (unsigned int)v36 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      15,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v36 + 1;
    *((_DWORD *)v28->m_Items + v36) = 15;
    ++*v27;
  }
  v37 = *v30;
  if ( (unsigned int)v37 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      16,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v37 + 1;
    *((_DWORD *)v28->m_Items + v37) = 16;
    ++*v27;
  }
  v38 = *v30;
  if ( (unsigned int)v38 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v38 + 1;
    *((_DWORD *)v28->m_Items + v38) = 2;
    ++*v27;
  }
  v39 = *v30;
  if ( (unsigned int)v39 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v39 + 1;
    *((_DWORD *)v28->m_Items + v39) = 14;
    ++*v27;
  }
  v40 = *v30;
  if ( (unsigned int)v40 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v40 + 1;
    *((_DWORD *)v28->m_Items + v40) = 1;
    ++*v27;
  }
  v41 = *v30;
  if ( (unsigned int)v41 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      8,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v23->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v23->fields._version;
    if ( !v28 )
      goto LABEL_221;
  }
  else
  {
    *v30 = v41 + 1;
    *((_DWORD *)v28->m_Items + v41) = 8;
    ++*v27;
  }
  v42 = *v30;
  if ( (unsigned int)v42 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      25,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    *v30 = v42 + 1;
    *((_DWORD *)v28->m_Items + v42) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fatigureSelectList, (int32_t)v23, v24, v25);
  v43 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v43,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v43 )
    goto LABEL_221;
  v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v47 = &v43->fields._version;
  ++v43->fields._version;
  v48 = v43->fields._items;
  v50 = &v43->fields._size;
  v49 = v43->fields._size;
  if ( !v48 )
    goto LABEL_221;
  if ( (unsigned int)v49 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v49 + 1;
    *((_DWORD *)v48->m_Items + v49) = 3;
    ++*v47;
  }
  v51 = *v50;
  if ( (unsigned int)v51 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      10,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v51 + 1;
    *((_DWORD *)v48->m_Items + v51) = 10;
    ++*v47;
  }
  v52 = *v50;
  if ( (unsigned int)v52 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      4,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v52 + 1;
    *((_DWORD *)v48->m_Items + v52) = 4;
    ++*v47;
  }
  v53 = *v50;
  if ( (unsigned int)v53 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      7,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v53 + 1;
    *((_DWORD *)v48->m_Items + v53) = 7;
    ++*v47;
  }
  v54 = *v50;
  if ( (unsigned int)v54 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      5,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v54 + 1;
    *((_DWORD *)v48->m_Items + v54) = 5;
    ++*v47;
  }
  v55 = *v50;
  if ( (unsigned int)v55 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      6,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v55 + 1;
    *((_DWORD *)v48->m_Items + v55) = 6;
    ++*v47;
  }
  v56 = *v50;
  if ( (unsigned int)v56 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      15,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v56 + 1;
    *((_DWORD *)v48->m_Items + v56) = 15;
    ++*v47;
  }
  v57 = *v50;
  if ( (unsigned int)v57 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      16,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v57 + 1;
    *((_DWORD *)v48->m_Items + v57) = 16;
    ++*v47;
  }
  v58 = *v50;
  if ( (unsigned int)v58 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v58 + 1;
    *((_DWORD *)v48->m_Items + v58) = 2;
    ++*v47;
  }
  v59 = *v50;
  if ( (unsigned int)v59 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v59 + 1;
    *((_DWORD *)v48->m_Items + v59) = 14;
    ++*v47;
  }
  v60 = *v50;
  if ( (unsigned int)v60 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v60 + 1;
    *((_DWORD *)v48->m_Items + v60) = 1;
    ++*v47;
  }
  v61 = *v50;
  if ( (unsigned int)v61 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      8,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v43->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v48 )
      goto LABEL_221;
  }
  else
  {
    *v50 = v61 + 1;
    *((_DWORD *)v48->m_Items + v61) = 8;
    ++*v47;
  }
  v62 = *v50;
  if ( (unsigned int)v62 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      28,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    *v50 = v62 + 1;
    *((_DWORD *)v48->m_Items + v62) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buddySelectList, (int32_t)v43, v44, v45);
  v63 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v63,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v63 )
    goto LABEL_221;
  v66 = v63->fields._items;
  v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v63->fields._version;
  if ( !v66 )
    goto LABEL_221;
  v68 = v63->fields._size;
  if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v68 + 1;
    *((_DWORD *)v66->m_Items + v68) = 3;
    ++v63->fields._version;
  }
  v69 = v63->fields._size;
  if ( (unsigned int)v69 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      10,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v69 + 1;
    *((_DWORD *)v66->m_Items + v69) = 10;
    ++v63->fields._version;
  }
  v70 = v63->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      4,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v70 + 1;
    *((_DWORD *)v66->m_Items + v70) = 4;
    ++v63->fields._version;
  }
  v71 = v63->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      7,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v71 + 1;
    *((_DWORD *)v66->m_Items + v71) = 7;
    ++v63->fields._version;
  }
  v72 = v63->fields._size;
  if ( (unsigned int)v72 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v72 + 1;
    *((_DWORD *)v66->m_Items + v72) = 2;
    ++v63->fields._version;
  }
  v73 = v63->fields._size;
  if ( (unsigned int)v73 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      5,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v73 + 1;
    *((_DWORD *)v66->m_Items + v73) = 5;
    ++v63->fields._version;
  }
  v74 = v63->fields._size;
  if ( (unsigned int)v74 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      6,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v74 + 1;
    *((_DWORD *)v66->m_Items + v74) = 6;
    ++v63->fields._version;
  }
  v75 = v63->fields._size;
  if ( (unsigned int)v75 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v75 + 1;
    *((_DWORD *)v66->m_Items + v75) = 14;
    ++v63->fields._version;
  }
  v76 = v63->fields._size;
  if ( (unsigned int)v76 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    v66 = v63->fields._items;
    v67 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v63->fields._version;
    if ( !v66 )
      goto LABEL_221;
  }
  else
  {
    v63->fields._size = v76 + 1;
    *((_DWORD *)v66->m_Items + v76) = 1;
    ++v63->fields._version;
  }
  v77 = v63->fields._size;
  if ( (unsigned int)v77 >= LODWORD(v66->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      8,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v63->fields._size = v77 + 1;
    *((_DWORD *)v66->m_Items + v77) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v63;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantSelectList, (int32_t)v63, v64, v65);
  v78 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v78,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v78 )
    goto LABEL_221;
  v81 = v78->fields._items;
  v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v78->fields._version;
  if ( !v81 )
    goto LABEL_221;
  v83 = v78->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v83 + 1;
    *((_DWORD *)v81->m_Items + v83) = 3;
    ++v78->fields._version;
  }
  v84 = v78->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      5,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v84 + 1;
    *((_DWORD *)v81->m_Items + v84) = 5;
    ++v78->fields._version;
  }
  v85 = v78->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      6,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v85 + 1;
    *((_DWORD *)v81->m_Items + v85) = 6;
    ++v78->fields._version;
  }
  v86 = v78->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      7,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v86 + 1;
    *((_DWORD *)v81->m_Items + v86) = 7;
    ++v78->fields._version;
  }
  v87 = v78->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v87 + 1;
    *((_DWORD *)v81->m_Items + v87) = 2;
    ++v78->fields._version;
  }
  v88 = v78->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v88 + 1;
    *((_DWORD *)v81->m_Items + v88) = 14;
    ++v78->fields._version;
  }
  v89 = v78->fields._size;
  if ( (unsigned int)v89 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    v81 = v78->fields._items;
    v82 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v78->fields._version;
    if ( !v81 )
      goto LABEL_221;
  }
  else
  {
    v78->fields._size = v89 + 1;
    *((_DWORD *)v81->m_Items + v89) = 1;
    ++v78->fields._version;
  }
  v90 = v78->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v78,
      24,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v78->fields._size = v90 + 1;
    *((_DWORD *)v81->m_Items + v90) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v78;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEquipSelectList, (int32_t)v78, v79, v80);
  v91 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v91,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v91 )
    goto LABEL_221;
  v94 = v91->fields._items;
  v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v91->fields._version;
  if ( !v94 )
    goto LABEL_221;
  v96 = v91->fields._size;
  if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      8,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v96 + 1;
    *((_DWORD *)v94->m_Items + v96) = 8;
    ++v91->fields._version;
  }
  v97 = v91->fields._size;
  if ( (unsigned int)v97 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      3,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v97 + 1;
    *((_DWORD *)v94->m_Items + v97) = 3;
    ++v91->fields._version;
  }
  v98 = v91->fields._size;
  if ( (unsigned int)v98 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      19,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v98 + 1;
    *((_DWORD *)v94->m_Items + v98) = 19;
    ++v91->fields._version;
  }
  v99 = v91->fields._size;
  if ( (unsigned int)v99 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      20,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v99 + 1;
    *((_DWORD *)v94->m_Items + v99) = 20;
    ++v91->fields._version;
  }
  v100 = v91->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      21,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v100 + 1;
    *((_DWORD *)v94->m_Items + v100) = 21;
    ++v91->fields._version;
  }
  v101 = v91->fields._size;
  if ( (unsigned int)v101 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      22,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v101 + 1;
    *((_DWORD *)v94->m_Items + v101) = 22;
    ++v91->fields._version;
  }
  v102 = v91->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      23,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v102 + 1;
    *((_DWORD *)v94->m_Items + v102) = 23;
    ++v91->fields._version;
  }
  v103 = v91->fields._size;
  if ( (unsigned int)v103 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v91->fields._size = v103 + 1;
    *((_DWORD *)v94->m_Items + v103) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v91;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantCostumeSelectList, (int32_t)v91, v92, v93);
  v104 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v104,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v104 )
    goto LABEL_221;
  v107 = v104->fields._items;
  v108 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v104->fields._version;
  if ( !v107 )
    goto LABEL_221;
  v109 = v104->fields._size;
  if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v104,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    v107 = v104->fields._items;
    v108 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v104->fields._version;
    if ( !v107 )
      goto LABEL_221;
  }
  else
  {
    v104->fields._size = v109 + 1;
    *((_DWORD *)v107->m_Items + v109) = 2;
    ++v104->fields._version;
  }
  v110 = v104->fields._size;
  if ( (unsigned int)v110 < LODWORD(v107->max_length) )
  {
    v104->fields._size = v110 + 1;
    *((_DWORD *)v107->m_Items + v110) = 14;
    ++v104->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v104,
    14,
    *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  v107 = v104->fields._items;
  v108 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v104->fields._version;
  if ( !v107 )
LABEL_221:
    sub_1C32E7C(v4);
LABEL_215:
  v111 = v104->fields._size;
  if ( (unsigned int)v111 >= LODWORD(v107->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v104,
      1,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v104->fields._size = v111 + 1;
    *((_DWORD *)v107->m_Items + v111) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v104;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeSelectList, (int32_t)v104, v105, v106);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void ServantSortSelectMenu__ChangeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
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


void ServantSortSelectMenu__Close(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSortSelectMenu__Close_33389320(this, 0, v2);
}


void ServantSortSelectMenu__Close_33389320(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *v7; // x20

  if ( (byte_4C32D5D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ServantSortSelectMenu_EndClose__);
    byte_4C32D5D = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


void ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantSortSelectMenu__EndOpen(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


ListViewSort_o *ServantSortSelectMenu__GetServantEquipSortInfo(const MethodInfo *method)
{
  ServantSortSelectMenu_c *v1; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_4C32D5B & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_TypeInfo);
    byte_4C32D5B = 1;
  }
  v1 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v1 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v1->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1C32E7C(0);
  ListViewSort__Load(commonServantEquipSortInfo, 0);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  ServantSortSelectMenu_c *v1; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4C32D5A & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_TypeInfo);
    byte_4C32D5A = 1;
  }
  v1 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v1 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v1->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C32E7C(0);
  ListViewSort__Load(commonServantSortInfo, 0);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void ServantSortSelectMenu__Init(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantSortSelectMenu__InitAllDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allDispObject; // x0
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D5F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D5F = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(allDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(allDispObject);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        allDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                      operationSortInfo,
                                                      (int32_t)allDispObject,
                                                      0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)allDispObject, 0);
          allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel;
          ++v5;
          if ( allDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitBuddyDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyDispObject; // x0
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D61 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D61 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(buddyDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(buddyDispObject);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        buddyDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)buddyDispObject,
                                                        0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)buddyDispObject, 0);
          buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel;
          ++v5;
          if ( buddyDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitCommandCodeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D65 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D65 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(commandCodeDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(commandCodeDispObject);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        commandCodeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                              operationSortInfo,
                                                              (int32_t)commandCodeDispObject,
                                                              0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)commandCodeDispObject, 0);
          commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel;
          ++v5;
          if ( commandCodeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitCostumeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *costumeDispObject; // x0
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D64 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D64 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(costumeDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(costumeDispObject);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        costumeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)costumeDispObject,
                                                          0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)costumeDispObject, 0);
          costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel;
          ++v5;
          if ( costumeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitFatigueDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D60 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D60 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(fatigueDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(fatigueDispObject);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        fatigueDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)fatigueDispObject,
                                                          0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)fatigueDispObject, 0);
          fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel;
          ++v5;
          if ( fatigueDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitLoad(const MethodInfo *method)
{
  ServantSortSelectMenu_c *v1; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4C32D59 & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_TypeInfo);
    byte_4C32D59 = 1;
  }
  v1 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v1 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v1->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C32E7C(0);
  ListViewSort__InitLoad(commonServantSortInfo, 0);
}


void ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *normalDispObject; // x0
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4C32D5E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D5E = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(normalDispObject);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(normalDispObject);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        normalDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                         operationSortInfo,
                                                         (int32_t)normalDispObject,
                                                         0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)normalDispObject, 0);
          normalSortBtnsLabel = this->fields.normalSortBtnsLabel;
          ++v5;
          if ( normalSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitShortDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v4; // x1
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4C32D62 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4C32D62 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C32E7C(shortDispObject);
  }
  v6 = 0;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C32E84(shortDispObject);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        shortDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)shortDispObject,
                                                        0);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)shortDispObject, 0);
          shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel;
          ++v6;
          if ( shortDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void ServantSortSelectMenu__InitShortDispButtons(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *servantEquipSelectList; // x0
  int32_t v4; // w0
  unsigned int v5; // w20
  char v6; // w21
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  struct UICommonButton_array *v9; // x22
  int max_length; // w8
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v21; // x8
  int v22; // w9
  int v23; // w10
  int v24; // w22
  int32_t v25; // w21
  int v26; // w24
  int v27; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v32; // w27
  float v33; // s0
  float v34; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0

  if ( (byte_4C32D63 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_4C32D63 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v4 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_377EC40 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v4 != -1 )
  {
    v5 = v4;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)ListViewSort__get_IsWareHouseEquipList(
                                                                         (ListViewSort_o *)servantEquipSelectList,
                                                                         0);
      v6 = (char)servantEquipSelectList;
    }
    else
    {
      v6 = 0;
    }
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_43;
    if ( v5 >= LODWORD(shortDispSortButtons->max_length) )
      goto LABEL_44;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)shortDispSortButtons->m_Items[v5];
    if ( !servantEquipSelectList )
      goto LABEL_43;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)servantEquipSelectList,
                                                                       0);
    if ( !servantEquipSelectList )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v6 & 1, 0);
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v9 = this->fields.shortDispSortButtons;
  if ( !v9 )
    goto LABEL_43;
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = &v9->obj.klass + (int)v11;
      v13 = (Il2CppObject *)v12[4];
      if ( !v13 )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)v12[4],
                                                                         0);
      if ( !servantEquipSelectList )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)servantEquipSelectList,
                                                                         0);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_43;
        items = v8->fields._items;
        v17 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v13,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1C32E84(servantEquipSelectList);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !LODWORD(shortDispSortSprites->max_length) )
    goto LABEL_44;
  v21 = shortDispSortSprites->m_Items[0];
  if ( !v21 || !v8 )
LABEL_43:
    sub_1C32E7C(servantEquipSelectList);
  v22 = v8->fields._size;
  v23 = v22 + 3;
  if ( v22 >= 0 )
    v23 = v8->fields._size;
  if ( v22 >= 1 )
  {
    v24 = 0;
    v25 = 0;
    v26 = v23 >> 2;
    v27 = (v8->fields._size & 3) - 1;
    mWidth = (float)v21->fields.mWidth;
    mHeight = (float)v21->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v32 = v24 >= v26 ? v27 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v25,
                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v33 = (float)(v25 - 4 * v24) + (float)((float)v32 * -0.5);
      v34 = (float)(v33 * mWidth) + (float)(v33 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v34, 0);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v25,
                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionY(v36, (float)v24 * (float)-(float)(y + mHeight), 0);
      if ( (~v25++ & 3) == 0 )
        ++v24;
      if ( v25 >= v8->fields._size )
        return;
    }
    goto LABEL_43;
  }
}


void ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C32D70 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickCancel__);
    byte_4C32D70 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void ServantSortSelectMenu__OnClickChoiceSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D87 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickChoiceSort__);
    byte_4C32D87 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v6; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v8; // w1

  if ( (byte_4C32D6F & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickDecide__);
    byte_4C32D6F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_1C32E7C(baseSortInfo);
    }
    v8 = this->fields.openedKind != operationSortInfo->fields.sortKind
      || this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      || this->fields.openedChoiceSort != operationSortInfo->fields.isChoiceSort;
    ServantSortSelectMenu__Callback(this, v8, v6);
  }
}


void ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D74 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickEventOrder__);
    byte_4C32D74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v7; // x20
  int32_t v8; // w1

  if ( (byte_4C32D71 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickHelp__);
    byte_4C32D71 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
    {
      sub_1C32E7C(helpButton);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v8 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v8, v7, 0, 0);
        return;
      }
      if ( kind == 5 )
      {
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v8 = 32;
        goto LABEL_15;
      }
    }
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
    v8 = 42;
    goto LABEL_15;
  }
}


void ServantSortSelectMenu__OnClickHelpClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
  {
    sub_1C32E7C(helpButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0);
}


void ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D86 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSmartSort__);
    byte_4C32D86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7E & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    byte_4C32D7E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7D & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    byte_4C32D7D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7B & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortAmount__);
    byte_4C32D7B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D79 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortAttack__);
    byte_4C32D79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D85 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortBuddy__);
    byte_4C32D85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D72 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortClass__);
    byte_4C32D72 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7A & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortCost__);
    byte_4C32D7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7F & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortCostume__);
    byte_4C32D7F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D73 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortCreate__);
    byte_4C32D73 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D7C & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    byte_4C32D7C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortHavingCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D80 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    byte_4C32D80 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D78 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortHp__);
    byte_4C32D78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D76 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortLevel__);
    byte_4C32D76 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D83 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    byte_4C32D83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortNotHavingCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D81 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    byte_4C32D81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortNotHavingItem(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D82 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    byte_4C32D82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D77 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    byte_4C32D77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D75 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortRarity__);
    byte_4C32D75 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickSortRecoveryFatigue(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C32D84 & 1) == 0 )
  {
    sub_1C32C20(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    byte_4C32D84 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C32E7C(v5);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSortSelectMenu__Open(
        ServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        bool isChoiceReverse,
        ServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool isChoiceSort; // w8
  ListViewSort_o *v14; // x21
  ListViewSort_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
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
  __int64 *v31; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  int32_t v38; // w8
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  int32_t v41; // w8
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  int32_t v46; // w1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  System_Action_o *v54; // x20
  int32_t v55; // w20
  ServantSortSelectMenu_c *v56; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v58; // x1
  __int64 v59; // x0

  if ( (byte_4C32D5C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_ServantSortSelectMenu_EndOpen__);
    sub_1C32C20(&ServantSortSelectMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_12250/*"SORT_WINDOW_TITLE"*/);
    sub_1C32C20(&StringLiteral_12243/*"SMART_SORT_DETAIL"*/);
    sub_1C32C20(&StringLiteral_12244/*"SMART_SORT_NAME"*/);
    sub_1C32C20(&StringLiteral_11718/*"SERVANT_SORT_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3358/*"CHOICE_SORT_NAME"*/);
    sub_1C32C20(&StringLiteral_11722/*"SERVANT_SORT_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3357/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_1C32C20(&StringLiteral_12249/*"SORT_WINDOW_DETAIL"*/);
    sub_1C32C20(&StringLiteral_3356/*"CHOICE_SORT_DETAIL"*/);
    byte_4C32D5C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)isChoiceReverse);
    if ( !sort )
    {
      v55 = this->fields.kind;
      v56 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v56 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v56->static_fields->commonServantSortInfo;
      if ( v55 == 2 )
        ++p_commonServantSortInfo;
      v58 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)v58, v11, v12);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0);
        sub_1C32E7C(v59);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v11, v12);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v14 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v15 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
    ListViewSort___ctor_43737184(v15, v14, 0);
    this->fields.operationSortInfo = v15;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v15, v16, v17);
    baseSortInfo = (ListViewSort_o *)this->fields.allDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.fatigueDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.buddyDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.normalDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.shortDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSort2Object;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeDispObject;
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
    if ( !baseSortInfo )
      goto LABEL_80;
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSortInfo, 0);
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !baseSortInfo )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SORT_WINDOW_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12249/*"SORT_WINDOW_DETAIL"*/, 0);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11722/*"SERVANT_SORT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11718/*"SERVANT_SORT_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"SMART_SORT_NAME"*/, 0);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12243/*"SMART_SORT_DETAIL"*/, 0);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"SMART_SORT_NAME"*/, 0);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12243/*"SMART_SORT_DETAIL"*/, 0);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CHOICE_SORT_NAME"*/, 0);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v31 = &StringLiteral_3357/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v31, 0);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v31, 0);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v31, 0);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v34);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v35);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v43);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v35);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v36);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v37);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v38 = this->fields.kind;
                  if ( v38 == 3 )
                    goto LABEL_69;
                  if ( v38 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v35);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v39);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v40);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v41 = this->fields.kind;
                  if ( v41 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      v46 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v46, 0, 0, 0, 0, 0, 0);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v41 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v54 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                      System_Action___ctor(v54, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0);
                      BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0, 0);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v42);
LABEL_65:
                      v46 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v35);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v44);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v45);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v46 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v35);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v47);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v48);
                  baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  goto LABEL_72;
                case 7:
                  ServantSortSelectMenu__InitFatigueDisp(this, v35);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v49);
LABEL_61:
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v50);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v51);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v35);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v52);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v53);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
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
        sub_1C32E7C(baseSortInfo);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v31 = &StringLiteral_3356/*"CHOICE_SORT_DETAIL"*/;
    goto LABEL_36;
  }
}


void ServantSortSelectMenu__SetAllButtonEnable(ServantSortSelectMenu_o *this, bool isEnable, const MethodInfo *method)
{
  struct UICommonButton_array *allDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  allDispSortButtons = this->fields.allDispSortButtons;
  if ( !allDispSortButtons )
LABEL_7:
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)allDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      allDispSortButtons = v4->fields.allDispSortButtons;
      ++v5;
      if ( allDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetAllButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D67 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D67 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantBaseSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = allDispSortSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          allDispSortSprites = v2->fields.allDispSortSprites;
          ++v4;
          if ( allDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetBuddyButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)buddyDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      buddyDispSortButtons = v4->fields.buddyDispSortButtons;
      ++v5;
      if ( buddyDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetBuddyButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D69 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D69 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.buddySelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = buddyDispSortSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          buddyDispSortSprites = v2->fields.buddyDispSortSprites;
          ++v4;
          if ( buddyDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetChoiceSortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4C32D6E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32D6E = 1;
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
      if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartChoiceBtnSprite) == 0 )
LABEL_16:
        sub_1C32E7C(this);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v4 = &StringLiteral_17505/*"btn_on"*/;
      else
        v4 = &StringLiteral_17504/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
      return;
  }
}


void ServantSortSelectMenu__SetCommandCodeButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)commandCodeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      commandCodeDispSortButtons = v4->fields.commandCodeDispSortButtons;
      ++v5;
      if ( commandCodeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetCommandCodeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D6C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D6C = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.commandCodeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = commandCodeDispSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          commandCodeDispSprites = v2->fields.commandCodeDispSprites;
          ++v4;
          if ( commandCodeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetCostumeButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)costumeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      costumeDispSortButtons = v4->fields.costumeDispSortButtons;
      ++v5;
      if ( costumeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetCostumeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D6B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D6B = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantCostumeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = costumeDispSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          costumeDispSprites = v2->fields.costumeDispSprites;
          ++v4;
          if ( costumeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetEnableButtons(ServantSortSelectMenu_o *this, bool isEnable, const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  bool v5; // w21
  const MethodInfo *v7; // x2

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0),
        (decideButton = this->fields.cancelButton) == 0) )
  {
    sub_1C32E7C(decideButton);
  }
  UICommonButton__SetButtonEnableWithCollider(decideButton, v5, 0);
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


void ServantSortSelectMenu__SetFatigueButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)fatigueDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      fatigueDispSortButtons = v4->fields.fatigueDispSortButtons;
      ++v5;
      if ( fatigueDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetFatigueButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D68 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D68 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.fatigureSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = fatigueDispSortSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
          ++v4;
          if ( fatigueDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetNormalButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)normalSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      normalSortButtons = v4->fields.normalSortButtons;
      ++v5;
      if ( normalSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetNormalButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v4; // x20
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D66 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D66 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1C32E7C(this);
  v4 = 0;
  while ( (int)v4 < SLODWORD(normalSortButtons->max_length) )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(normalSortSprites->max_length) )
        sub_1C32E84(this);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (ServantSortSelectMenu_o *)v2->fields.servantSelectList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v8 = normalSortSprites->m_Items[v4];
          this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)this,
                                              v4,
                                              (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
            UISprite__set_spriteName(v8, *v9, 0);
            normalSortButtons = v2->fields.normalSortButtons;
            ++v4;
            if ( normalSortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void ServantSortSelectMenu__SetShortButtonEnable(
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
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (ServantSortSelectMenu_o *)shortDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0);
      shortDispSortButtons = v4->fields.shortDispSortButtons;
      ++v5;
      if ( shortDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantSortSelectMenu__SetShortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4C32D6A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C32C20(&StringLiteral_17437/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17436/*"btn_bg_03"*/);
    byte_4C32D6A = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantEquipSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v8 = shortDispSortSprites->m_Items[v4];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_377DCD4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17436/*"btn_bg_03"*/ : &StringLiteral_17437/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          shortDispSortSprites = v2->fields.shortDispSortSprites;
          ++v4;
          if ( shortDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void ServantSortSelectMenu__SetSmartSortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4C32D6D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32D6D = 1;
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
    if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartSortBtnSprite) == 0 )
LABEL_13:
      sub_1C32E7C(this);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_17505/*"btn_on"*/;
  else
    v4 = &StringLiteral_17504/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


void ServantSortSelectMenu__add_callbackFunc(
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

  if ( (byte_4C32D57 & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4C32D57 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1C3313C(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *ServantSortSelectMenu__get_closeBtnPath(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C32D88 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15639/*"Window/CancelButton"*/);
    byte_4C32D88 = 1;
  }
  return (System_String_o *)StringLiteral_15639/*"Window/CancelButton"*/;
}


void ServantSortSelectMenu__remove_callbackFunc(
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

  if ( (byte_4C32D58 & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4C32D58 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C3313C(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


void ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A706C0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A70678;
}


System_IAsyncResult_o *ServantSortSelectMenu_CallbackFunc__BeginInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C32D8B & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C32D8B = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ServantSortSelectMenu_CallbackFunc__Invoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}