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

  if ( (byte_4CB14F9 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&ServantSortSelectMenu_TypeInfo);
    sub_1C6BA08(&StringLiteral_12747/*"ServantSortSelect1"*/);
    sub_1C6BA08(&StringLiteral_12748/*"ServantSortSelect2"*/);
    sub_1C6BA08(&StringLiteral_12749/*"ServantSortSelect4"*/);
    byte_4CB14F9 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v1, (System_String_o *)StringLiteral_12747/*"ServantSortSelect1"*/, 3, 0, 0);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantSortSelectMenu_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v4, (System_String_o *)StringLiteral_12748/*"ServantSortSelect2"*/, 3, 0, 0);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->commonServantEquipSortInfo, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v8, (System_String_o *)StringLiteral_12749/*"ServantSortSelect4"*/, 3, 0, 0);
  v9 = ServantSortSelectMenu_TypeInfo->static_fields;
  v9->commandCodeSortInfo = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->commandCodeSortInfo, (int32_t)v8, v10, v11);
}


void ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _QWORD *v8; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
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
  __int64 v23; // x10
  System_Collections_Generic_List_T__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _QWORD *v27; // x8
  int32_t *v28; // x25
  struct System_Object_array *v29; // x9
  __int64 v30; // x10
  int32_t *v31; // x24
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
  __int64 v43; // x10
  System_Collections_Generic_List_T__o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  _QWORD *v47; // x8
  int32_t *v48; // x25
  struct System_Object_array *v49; // x9
  __int64 v50; // x10
  int32_t *v51; // x24
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
  __int64 v63; // x10
  System_Collections_Generic_List_T__o *v64; // x20
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x9
  _QWORD *v68; // x8
  __int64 v69; // x10
  __int64 v70; // x10
  __int64 v71; // x10
  __int64 v72; // x10
  __int64 v73; // x10
  __int64 v74; // x10
  __int64 v75; // x10
  __int64 v76; // x10
  __int64 v77; // x10
  __int64 v78; // x10
  System_Collections_Generic_List_T__o *v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x9
  _QWORD *v83; // x8
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  __int64 v87; // x10
  __int64 v88; // x10
  __int64 v89; // x10
  __int64 v90; // x10
  __int64 v91; // x10
  System_Collections_Generic_List_T__o *v92; // x20
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x9
  _QWORD *v96; // x8
  __int64 v97; // x10
  __int64 v98; // x10
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  __int64 v103; // x10
  __int64 v104; // x10
  System_Collections_Generic_List_T__o *v105; // x20
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x10
  __int64 v112; // x10

  if ( (byte_4CB14F8 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_4CB14F8 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_221;
  v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 10;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 4;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 7;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 5;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 6;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      15,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 15;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      16,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 16;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 2;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      14,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 14;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 1;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantBaseSelectList, (int32_t)v3, v6, v7);
  v24 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v24,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v24 )
    goto LABEL_221;
  v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v28 = &v24->fields._version;
  ++v24->fields._version;
  v29 = v24->fields._items;
  v31 = &v24->fields._size;
  v30 = v24->fields._size;
  if ( !v29 )
    goto LABEL_221;
  if ( (unsigned int)v30 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      3,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v30 + 1;
    *((_DWORD *)v29->m_Items + v30) = 3;
    ++*v28;
  }
  v32 = *v31;
  if ( (unsigned int)v32 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      10,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v32 + 1;
    *((_DWORD *)v29->m_Items + v32) = 10;
    ++*v28;
  }
  v33 = *v31;
  if ( (unsigned int)v33 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      4,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v33 + 1;
    *((_DWORD *)v29->m_Items + v33) = 4;
    ++*v28;
  }
  v34 = *v31;
  if ( (unsigned int)v34 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      7,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v34 + 1;
    *((_DWORD *)v29->m_Items + v34) = 7;
    ++*v28;
  }
  v35 = *v31;
  if ( (unsigned int)v35 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      5,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v35 + 1;
    *((_DWORD *)v29->m_Items + v35) = 5;
    ++*v28;
  }
  v36 = *v31;
  if ( (unsigned int)v36 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      6,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v36 + 1;
    *((_DWORD *)v29->m_Items + v36) = 6;
    ++*v28;
  }
  v37 = *v31;
  if ( (unsigned int)v37 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      15,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v37 + 1;
    *((_DWORD *)v29->m_Items + v37) = 15;
    ++*v28;
  }
  v38 = *v31;
  if ( (unsigned int)v38 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      16,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v38 + 1;
    *((_DWORD *)v29->m_Items + v38) = 16;
    ++*v28;
  }
  v39 = *v31;
  if ( (unsigned int)v39 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v39 + 1;
    *((_DWORD *)v29->m_Items + v39) = 2;
    ++*v28;
  }
  v40 = *v31;
  if ( (unsigned int)v40 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      14,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v40 + 1;
    *((_DWORD *)v29->m_Items + v40) = 14;
    ++*v28;
  }
  v41 = *v31;
  if ( (unsigned int)v41 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v41 + 1;
    *((_DWORD *)v29->m_Items + v41) = 1;
    ++*v28;
  }
  v42 = *v31;
  if ( (unsigned int)v42 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    v29 = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v24->fields._version;
    if ( !v29 )
      goto LABEL_221;
  }
  else
  {
    *v31 = v42 + 1;
    *((_DWORD *)v29->m_Items + v42) = 8;
    ++*v28;
  }
  v43 = *v31;
  if ( (unsigned int)v43 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      25,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    *v31 = v43 + 1;
    *((_DWORD *)v29->m_Items + v43) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fatigureSelectList, (int32_t)v24, v25, v26);
  v44 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v44,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v44 )
    goto LABEL_221;
  v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v48 = &v44->fields._version;
  ++v44->fields._version;
  v49 = v44->fields._items;
  v51 = &v44->fields._size;
  v50 = v44->fields._size;
  if ( !v49 )
    goto LABEL_221;
  if ( (unsigned int)v50 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      3,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v50 + 1;
    *((_DWORD *)v49->m_Items + v50) = 3;
    ++*v48;
  }
  v52 = *v51;
  if ( (unsigned int)v52 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      10,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v52 + 1;
    *((_DWORD *)v49->m_Items + v52) = 10;
    ++*v48;
  }
  v53 = *v51;
  if ( (unsigned int)v53 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      4,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v53 + 1;
    *((_DWORD *)v49->m_Items + v53) = 4;
    ++*v48;
  }
  v54 = *v51;
  if ( (unsigned int)v54 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      7,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v54 + 1;
    *((_DWORD *)v49->m_Items + v54) = 7;
    ++*v48;
  }
  v55 = *v51;
  if ( (unsigned int)v55 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      5,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v55 + 1;
    *((_DWORD *)v49->m_Items + v55) = 5;
    ++*v48;
  }
  v56 = *v51;
  if ( (unsigned int)v56 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      6,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v56 + 1;
    *((_DWORD *)v49->m_Items + v56) = 6;
    ++*v48;
  }
  v57 = *v51;
  if ( (unsigned int)v57 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      15,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v57 + 1;
    *((_DWORD *)v49->m_Items + v57) = 15;
    ++*v48;
  }
  v58 = *v51;
  if ( (unsigned int)v58 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      16,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v58 + 1;
    *((_DWORD *)v49->m_Items + v58) = 16;
    ++*v48;
  }
  v59 = *v51;
  if ( (unsigned int)v59 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v59 + 1;
    *((_DWORD *)v49->m_Items + v59) = 2;
    ++*v48;
  }
  v60 = *v51;
  if ( (unsigned int)v60 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      14,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v60 + 1;
    *((_DWORD *)v49->m_Items + v60) = 14;
    ++*v48;
  }
  v61 = *v51;
  if ( (unsigned int)v61 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v61 + 1;
    *((_DWORD *)v49->m_Items + v61) = 1;
    ++*v48;
  }
  v62 = *v51;
  if ( (unsigned int)v62 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    v49 = v44->fields._items;
    v47 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v44->fields._version;
    if ( !v49 )
      goto LABEL_221;
  }
  else
  {
    *v51 = v62 + 1;
    *((_DWORD *)v49->m_Items + v62) = 8;
    ++*v48;
  }
  v63 = *v51;
  if ( (unsigned int)v63 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      28,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    *v51 = v63 + 1;
    *((_DWORD *)v49->m_Items + v63) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.buddySelectList, (int32_t)v44, v45, v46);
  v64 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v64,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v64 )
    goto LABEL_221;
  v67 = v64->fields._items;
  v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v64->fields._version;
  if ( !v67 )
    goto LABEL_221;
  v69 = v64->fields._size;
  if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      3,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v69 + 1;
    *((_DWORD *)v67->m_Items + v69) = 3;
    ++v64->fields._version;
  }
  v70 = v64->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      10,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v70 + 1;
    *((_DWORD *)v67->m_Items + v70) = 10;
    ++v64->fields._version;
  }
  v71 = v64->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      4,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v71 + 1;
    *((_DWORD *)v67->m_Items + v71) = 4;
    ++v64->fields._version;
  }
  v72 = v64->fields._size;
  if ( (unsigned int)v72 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      7,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v72 + 1;
    *((_DWORD *)v67->m_Items + v72) = 7;
    ++v64->fields._version;
  }
  v73 = v64->fields._size;
  if ( (unsigned int)v73 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v73 + 1;
    *((_DWORD *)v67->m_Items + v73) = 2;
    ++v64->fields._version;
  }
  v74 = v64->fields._size;
  if ( (unsigned int)v74 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      5,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v74 + 1;
    *((_DWORD *)v67->m_Items + v74) = 5;
    ++v64->fields._version;
  }
  v75 = v64->fields._size;
  if ( (unsigned int)v75 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      6,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v75 + 1;
    *((_DWORD *)v67->m_Items + v75) = 6;
    ++v64->fields._version;
  }
  v76 = v64->fields._size;
  if ( (unsigned int)v76 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      14,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v76 + 1;
    *((_DWORD *)v67->m_Items + v76) = 14;
    ++v64->fields._version;
  }
  v77 = v64->fields._size;
  if ( (unsigned int)v77 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    v67 = v64->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v64->fields._version;
    if ( !v67 )
      goto LABEL_221;
  }
  else
  {
    v64->fields._size = v77 + 1;
    *((_DWORD *)v67->m_Items + v77) = 1;
    ++v64->fields._version;
  }
  v78 = v64->fields._size;
  if ( (unsigned int)v78 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v64,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v64->fields._size = v78 + 1;
    *((_DWORD *)v67->m_Items + v78) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v64;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantSelectList, (int32_t)v64, v65, v66);
  v79 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v79,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v79 )
    goto LABEL_221;
  v82 = v79->fields._items;
  v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v79->fields._version;
  if ( !v82 )
    goto LABEL_221;
  v84 = v79->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      3,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v84 + 1;
    *((_DWORD *)v82->m_Items + v84) = 3;
    ++v79->fields._version;
  }
  v85 = v79->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      5,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v85 + 1;
    *((_DWORD *)v82->m_Items + v85) = 5;
    ++v79->fields._version;
  }
  v86 = v79->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      6,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v86 + 1;
    *((_DWORD *)v82->m_Items + v86) = 6;
    ++v79->fields._version;
  }
  v87 = v79->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      7,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v87 + 1;
    *((_DWORD *)v82->m_Items + v87) = 7;
    ++v79->fields._version;
  }
  v88 = v79->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v88 + 1;
    *((_DWORD *)v82->m_Items + v88) = 2;
    ++v79->fields._version;
  }
  v89 = v79->fields._size;
  if ( (unsigned int)v89 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      14,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v89 + 1;
    *((_DWORD *)v82->m_Items + v89) = 14;
    ++v79->fields._version;
  }
  v90 = v79->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    v82 = v79->fields._items;
    v83 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v82 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v90 + 1;
    *((_DWORD *)v82->m_Items + v90) = 1;
    ++v79->fields._version;
  }
  v91 = v79->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      24,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v79->fields._size = v91 + 1;
    *((_DWORD *)v82->m_Items + v91) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v79;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEquipSelectList, (int32_t)v79, v80, v81);
  v92 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v92,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v92 )
    goto LABEL_221;
  v95 = v92->fields._items;
  v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v92->fields._version;
  if ( !v95 )
    goto LABEL_221;
  v97 = v92->fields._size;
  if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v97 + 1;
    *((_DWORD *)v95->m_Items + v97) = 8;
    ++v92->fields._version;
  }
  v98 = v92->fields._size;
  if ( (unsigned int)v98 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      3,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v98 + 1;
    *((_DWORD *)v95->m_Items + v98) = 3;
    ++v92->fields._version;
  }
  v99 = v92->fields._size;
  if ( (unsigned int)v99 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      19,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v99 + 1;
    *((_DWORD *)v95->m_Items + v99) = 19;
    ++v92->fields._version;
  }
  v100 = v92->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      20,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v100 + 1;
    *((_DWORD *)v95->m_Items + v100) = 20;
    ++v92->fields._version;
  }
  v101 = v92->fields._size;
  if ( (unsigned int)v101 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      21,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v101 + 1;
    *((_DWORD *)v95->m_Items + v101) = 21;
    ++v92->fields._version;
  }
  v102 = v92->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      22,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v102 + 1;
    *((_DWORD *)v95->m_Items + v102) = 22;
    ++v92->fields._version;
  }
  v103 = v92->fields._size;
  if ( (unsigned int)v103 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      23,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_221;
  }
  else
  {
    v92->fields._size = v103 + 1;
    *((_DWORD *)v95->m_Items + v103) = 23;
    ++v92->fields._version;
  }
  v104 = v92->fields._size;
  if ( (unsigned int)v104 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v92,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
  }
  else
  {
    v92->fields._size = v104 + 1;
    *((_DWORD *)v95->m_Items + v104) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v92;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantCostumeSelectList, (int32_t)v92, v93, v94);
  v105 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v105,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v105 )
    goto LABEL_221;
  v108 = v105->fields._items;
  v109 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v105->fields._version;
  if ( !v108 )
    goto LABEL_221;
  v110 = v105->fields._size;
  if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v108 = v105->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v108 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v110 + 1;
    *((_DWORD *)v108->m_Items + v110) = 2;
    ++v105->fields._version;
  }
  v111 = v105->fields._size;
  if ( (unsigned int)v111 < LODWORD(v108->max_length) )
  {
    v105->fields._size = v111 + 1;
    *((_DWORD *)v108->m_Items + v111) = 14;
    ++v105->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v105,
    14,
    *(const MethodInfo_37E617C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  v108 = v105->fields._items;
  v109 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v105->fields._version;
  if ( !v108 )
LABEL_221:
    sub_1C6BC60(v4, v5);
LABEL_215:
  v112 = v105->fields._size;
  if ( (unsigned int)v112 >= LODWORD(v108->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      1,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v105->fields._size = v112 + 1;
    *((_DWORD *)v108->m_Items + v112) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v105;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeSelectList, (int32_t)v105, v106, v107);
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
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
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

  ServantSortSelectMenu__Close_33564928(this, 0, v2);
}


void ServantSortSelectMenu__Close_33564928(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *v7; // x20

  if ( (byte_4CB14CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantSortSelectMenu_EndClose__);
    byte_4CB14CC = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_4CB14CA & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_TypeInfo);
    byte_4CB14CA = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1C6BC60(0, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4CB14C9 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_TypeInfo);
    byte_4CB14C9 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C6BC60(0, v1);
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

  if ( (byte_4CB14CE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14CE = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(allDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(allDispObject);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14D0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14D0 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(buddyDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(buddyDispObject);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14D4 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(commandCodeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(commandCodeDispObject);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14D3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14D3 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(costumeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(costumeDispObject);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14CF = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(fatigueDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(fatigueDispObject);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4CB14C8 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_TypeInfo);
    byte_4CB14C8 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C6BC60(0, v1);
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

  if ( (byte_4CB14CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14CD = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(normalDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(normalDispObject);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4CB14D1 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C6BC60(shortDispObject, method);
  }
  v6 = 0;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C6BC68(shortDispObject);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4CB14D2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_4CB14D2 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v4 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_37E6DF8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
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
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1C6BC68(servantEquipSelectList);
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
    sub_1C6BC60(servantEquipSelectList, method);
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
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v33 = (float)(v25 - 4 * v24) + (float)((float)v32 * -0.5);
      v34 = (float)(v33 * mWidth) + (float)(v33 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v34, 0);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v25,
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
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

  if ( (byte_4CB14DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickCancel__);
    byte_4CB14DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB14F6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickChoiceSort__);
    byte_4CB14F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1

  if ( (byte_4CB14DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickDecide__);
    byte_4CB14DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_1C6BC60(baseSortInfo, v5);
    }
    v9 = this->fields.openedKind != operationSortInfo->fields.sortKind
      || this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      || this->fields.openedChoiceSort != operationSortInfo->fields.isChoiceSort;
    ServantSortSelectMenu__Callback(this, v9, v7);
  }
}


void ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CB14E3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickEventOrder__);
    byte_4CB14E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v8; // x20
  int32_t v9; // w1

  if ( (byte_4CB14E0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickHelp__);
    byte_4CB14E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
    {
      sub_1C6BC60(helpButton, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v9, v8, 0, 0);
        return;
      }
      if ( kind == 5 )
      {
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 32;
        goto LABEL_15;
      }
    }
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
    v9 = 42;
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
    sub_1C6BC60(helpButton, method);
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

  if ( (byte_4CB14F5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSmartSort__);
    byte_4CB14F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14ED & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    byte_4CB14ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14EC & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    byte_4CB14EC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14EA & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortAmount__);
    byte_4CB14EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortAttack__);
    byte_4CB14E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14F4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortBuddy__);
    byte_4CB14F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortClass__);
    byte_4CB14E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortCost__);
    byte_4CB14E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14EE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortCostume__);
    byte_4CB14EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortCreate__);
    byte_4CB14E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    byte_4CB14EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14EF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    byte_4CB14EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortHp__);
    byte_4CB14E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortLevel__);
    byte_4CB14E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14F2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    byte_4CB14F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14F0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    byte_4CB14F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14F1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    byte_4CB14F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    byte_4CB14E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortRarity__);
    byte_4CB14E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB14F3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    byte_4CB14F3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C6BC60(v5, v6);
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
  __int64 v18; // x1
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
  __int64 *v32; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  int32_t v39; // w8
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  int32_t v42; // w8
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  int32_t v47; // w1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  System_Action_o *v55; // x20
  int32_t v56; // w20
  ServantSortSelectMenu_c *v57; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v59; // x1
  __int64 v60; // x0
  __int64 v61; // x1

  if ( (byte_4CB14CB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_ServantSortSelectMenu_EndOpen__);
    sub_1C6BA08(&ServantSortSelectMenu_TypeInfo);
    sub_1C6BA08(&StringLiteral_12253/*"SORT_WINDOW_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12246/*"SMART_SORT_DETAIL"*/);
    sub_1C6BA08(&StringLiteral_12247/*"SMART_SORT_NAME"*/);
    sub_1C6BA08(&StringLiteral_11718/*"SERVANT_SORT_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3350/*"CHOICE_SORT_NAME"*/);
    sub_1C6BA08(&StringLiteral_11722/*"SERVANT_SORT_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3349/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_1C6BA08(&StringLiteral_12252/*"SORT_WINDOW_DETAIL"*/);
    sub_1C6BA08(&StringLiteral_3348/*"CHOICE_SORT_DETAIL"*/);
    byte_4CB14CB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)isChoiceReverse);
    if ( !sort )
    {
      v56 = this->fields.kind;
      v57 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v57 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v57->static_fields->commonServantSortInfo;
      if ( v56 == 2 )
        ++p_commonServantSortInfo;
      v59 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)v59, v11, v12);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0);
        sub_1C6BC60(v60, v61);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v11, v12);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v14 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v15 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
    ListViewSort___ctor_44085388(v15, v14, 0);
    this->fields.operationSortInfo = v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v15, v16, v17);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SORT_WINDOW_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SORT_WINDOW_DETAIL"*/, 0);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12247/*"SMART_SORT_NAME"*/, 0);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12246/*"SMART_SORT_DETAIL"*/, 0);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12247/*"SMART_SORT_NAME"*/, 0);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12246/*"SMART_SORT_DETAIL"*/, 0);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3350/*"CHOICE_SORT_NAME"*/, 0);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3350/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3350/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v32 = &StringLiteral_3349/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v32, 0);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v32, 0);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v32, 0);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v35);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v36);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v44);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v36);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v37);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v38);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v39 = this->fields.kind;
                  if ( v39 == 3 )
                    goto LABEL_69;
                  if ( v39 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v36);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v40);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v41);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v42 = this->fields.kind;
                  if ( v42 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      v47 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v47, 0, 0, 0, 0, 0, 0);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v42 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v55 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                      System_Action___ctor(v55, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0);
                      BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v43);
LABEL_65:
                      v47 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v36);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v45);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v46);
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
                  v47 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v36);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v48);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v49);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v36);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v50);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v51);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v52);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v36);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v53);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v54);
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
        sub_1C6BC60(baseSortInfo, v18);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v32 = &StringLiteral_3348/*"CHOICE_SORT_DETAIL"*/;
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14D6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14D6 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14D8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14D8 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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
  if ( (byte_4CB14DD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB14DD = 1;
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
        sub_1C6BC60(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v4 = &StringLiteral_17522/*"btn_on"*/;
      else
        v4 = &StringLiteral_17521/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14DB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14DB = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14DA = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(decideButton, isEnable);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14D7 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14D5 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(normalSortButtons->max_length) )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(normalSortSprites->max_length) )
        sub_1C6BC68(this);
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
                                              (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
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
  if ( (byte_4CB14D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C6BA08(&StringLiteral_17454/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB14D9 = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1C6BC60(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C6BC68(this);
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
                                            (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17453/*"btn_bg_03"*/ : &StringLiteral_17454/*"btn_bg_04"*/);
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
  if ( (byte_4CB14DC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB14DC = 1;
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
      sub_1C6BC60(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_17522/*"btn_on"*/;
  else
    v4 = &StringLiteral_17521/*"btn_off"*/;
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

  if ( (byte_4CB14C6 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4CB14C6 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1C6BFFC(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *ServantSortSelectMenu__get_closeBtnPath(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CB14F7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4CB14F7 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
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

  if ( (byte_4CB14C7 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4CB14C7 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C6BFFC(v7);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9A650;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9A608;
}


System_IAsyncResult_o *ServantSortSelectMenu_CallbackFunc__BeginInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB14FA & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB14FA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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