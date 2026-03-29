void ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewSort_o *v8; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ListViewSort_o *v16; // x19
  struct ServantSortSelectMenu_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2B966 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&ServantSortSelectMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_12841/*"ServantSortSelect1"*/);
    sub_1C93AD4(&StringLiteral_12842/*"ServantSortSelect2"*/);
    sub_1C93AD4(&StringLiteral_12843/*"ServantSortSelect4"*/);
    byte_4D2B966 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_12841/*"ServantSortSelect1"*/, 3, 0, 0);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantSortSelectMenu_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v8, (System_String_o *)StringLiteral_12842/*"ServantSortSelect2"*/, 3, 0, 0);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->commonServantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v16, (System_String_o *)StringLiteral_12843/*"ServantSortSelect4"*/, 3, 0, 0);
  v17 = ServantSortSelectMenu_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
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
  __int64 v27; // x10
  System_Collections_Generic_List_T__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  _QWORD *v35; // x8
  int32_t *v36; // x25
  struct System_Object_array *v37; // x9
  __int64 v38; // x10
  int32_t *v39; // x24
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  System_Collections_Generic_List_T__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  _QWORD *v59; // x8
  int32_t *v60; // x25
  struct System_Object_array *v61; // x9
  __int64 v62; // x10
  int32_t *v63; // x24
  __int64 v64; // x10
  __int64 v65; // x10
  __int64 v66; // x10
  __int64 v67; // x10
  __int64 v68; // x10
  __int64 v69; // x10
  __int64 v70; // x10
  __int64 v71; // x10
  __int64 v72; // x10
  __int64 v73; // x10
  __int64 v74; // x10
  __int64 v75; // x10
  System_Collections_Generic_List_T__o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct System_Object_array *v83; // x9
  _QWORD *v84; // x8
  __int64 v85; // x10
  __int64 v86; // x10
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
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct System_Object_array *v102; // x9
  _QWORD *v103; // x8
  __int64 v104; // x10
  __int64 v105; // x10
  __int64 v106; // x10
  __int64 v107; // x10
  __int64 v108; // x10
  __int64 v109; // x10
  __int64 v110; // x10
  __int64 v111; // x10
  System_Collections_Generic_List_T__o *v112; // x20
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  struct System_Object_array *v119; // x9
  _QWORD *v120; // x8
  __int64 v121; // x10
  __int64 v122; // x10
  __int64 v123; // x10
  __int64 v124; // x10
  __int64 v125; // x10
  __int64 v126; // x10
  __int64 v127; // x10
  __int64 v128; // x10
  System_Collections_Generic_List_T__o *v129; // x20
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  __int64 v139; // x10
  __int64 v140; // x10

  if ( (byte_4D2B965 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_4D2B965 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_221;
  v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 10;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 4;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 7;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 5;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 6;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      15,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 15;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      16,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 16;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 2;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      14,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 14;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 1;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantBaseSelectList, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v28 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v28,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v28 )
    goto LABEL_221;
  v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v36 = &v28->fields._version;
  ++v28->fields._version;
  v37 = v28->fields._items;
  v39 = &v28->fields._size;
  v38 = v28->fields._size;
  if ( !v37 )
    goto LABEL_221;
  if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      3,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v38 + 1;
    *((_DWORD *)v37->m_Items + v38) = 3;
    ++*v36;
  }
  v40 = *v39;
  if ( (unsigned int)v40 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      10,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v40 + 1;
    *((_DWORD *)v37->m_Items + v40) = 10;
    ++*v36;
  }
  v41 = *v39;
  if ( (unsigned int)v41 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      4,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v41 + 1;
    *((_DWORD *)v37->m_Items + v41) = 4;
    ++*v36;
  }
  v42 = *v39;
  if ( (unsigned int)v42 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      7,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v42 + 1;
    *((_DWORD *)v37->m_Items + v42) = 7;
    ++*v36;
  }
  v43 = *v39;
  if ( (unsigned int)v43 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      5,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v43 + 1;
    *((_DWORD *)v37->m_Items + v43) = 5;
    ++*v36;
  }
  v44 = *v39;
  if ( (unsigned int)v44 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      6,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v44 + 1;
    *((_DWORD *)v37->m_Items + v44) = 6;
    ++*v36;
  }
  v45 = *v39;
  if ( (unsigned int)v45 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      15,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v45 + 1;
    *((_DWORD *)v37->m_Items + v45) = 15;
    ++*v36;
  }
  v46 = *v39;
  if ( (unsigned int)v46 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      16,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v46 + 1;
    *((_DWORD *)v37->m_Items + v46) = 16;
    ++*v36;
  }
  v47 = *v39;
  if ( (unsigned int)v47 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v47 + 1;
    *((_DWORD *)v37->m_Items + v47) = 2;
    ++*v36;
  }
  v48 = *v39;
  if ( (unsigned int)v48 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      14,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v48 + 1;
    *((_DWORD *)v37->m_Items + v48) = 14;
    ++*v36;
  }
  v49 = *v39;
  if ( (unsigned int)v49 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v49 + 1;
    *((_DWORD *)v37->m_Items + v49) = 1;
    ++*v36;
  }
  v50 = *v39;
  if ( (unsigned int)v50 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      8,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v37 = v28->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_221;
  }
  else
  {
    *v39 = v50 + 1;
    *((_DWORD *)v37->m_Items + v50) = 8;
    ++*v36;
  }
  v51 = *v39;
  if ( (unsigned int)v51 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      25,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    *v39 = v51 + 1;
    *((_DWORD *)v37->m_Items + v51) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.fatigureSelectList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v52 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v52,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v52 )
    goto LABEL_221;
  v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v60 = &v52->fields._version;
  ++v52->fields._version;
  v61 = v52->fields._items;
  v63 = &v52->fields._size;
  v62 = v52->fields._size;
  if ( !v61 )
    goto LABEL_221;
  if ( (unsigned int)v62 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      3,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v62 + 1;
    *((_DWORD *)v61->m_Items + v62) = 3;
    ++*v60;
  }
  v64 = *v63;
  if ( (unsigned int)v64 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      10,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v64 + 1;
    *((_DWORD *)v61->m_Items + v64) = 10;
    ++*v60;
  }
  v65 = *v63;
  if ( (unsigned int)v65 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      4,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v65 + 1;
    *((_DWORD *)v61->m_Items + v65) = 4;
    ++*v60;
  }
  v66 = *v63;
  if ( (unsigned int)v66 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      7,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v66 + 1;
    *((_DWORD *)v61->m_Items + v66) = 7;
    ++*v60;
  }
  v67 = *v63;
  if ( (unsigned int)v67 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      5,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v67 + 1;
    *((_DWORD *)v61->m_Items + v67) = 5;
    ++*v60;
  }
  v68 = *v63;
  if ( (unsigned int)v68 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      6,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v68 + 1;
    *((_DWORD *)v61->m_Items + v68) = 6;
    ++*v60;
  }
  v69 = *v63;
  if ( (unsigned int)v69 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      15,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v69 + 1;
    *((_DWORD *)v61->m_Items + v69) = 15;
    ++*v60;
  }
  v70 = *v63;
  if ( (unsigned int)v70 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      16,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v70 + 1;
    *((_DWORD *)v61->m_Items + v70) = 16;
    ++*v60;
  }
  v71 = *v63;
  if ( (unsigned int)v71 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v71 + 1;
    *((_DWORD *)v61->m_Items + v71) = 2;
    ++*v60;
  }
  v72 = *v63;
  if ( (unsigned int)v72 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      14,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v72 + 1;
    *((_DWORD *)v61->m_Items + v72) = 14;
    ++*v60;
  }
  v73 = *v63;
  if ( (unsigned int)v73 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v73 + 1;
    *((_DWORD *)v61->m_Items + v73) = 1;
    ++*v60;
  }
  v74 = *v63;
  if ( (unsigned int)v74 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      8,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    v61 = v52->fields._items;
    v59 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v52->fields._version;
    if ( !v61 )
      goto LABEL_221;
  }
  else
  {
    *v63 = v74 + 1;
    *((_DWORD *)v61->m_Items + v74) = 8;
    ++*v60;
  }
  v75 = *v63;
  if ( (unsigned int)v75 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      28,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    *v63 = v75 + 1;
    *((_DWORD *)v61->m_Items + v75) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v52;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.buddySelectList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v76 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v76,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v76 )
    goto LABEL_221;
  v83 = v76->fields._items;
  v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v76->fields._version;
  if ( !v83 )
    goto LABEL_221;
  v85 = v76->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      3,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v85 + 1;
    *((_DWORD *)v83->m_Items + v85) = 3;
    ++v76->fields._version;
  }
  v86 = v76->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      10,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v86 + 1;
    *((_DWORD *)v83->m_Items + v86) = 10;
    ++v76->fields._version;
  }
  v87 = v76->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      4,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v87 + 1;
    *((_DWORD *)v83->m_Items + v87) = 4;
    ++v76->fields._version;
  }
  v88 = v76->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      7,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v88 + 1;
    *((_DWORD *)v83->m_Items + v88) = 7;
    ++v76->fields._version;
  }
  v89 = v76->fields._size;
  if ( (unsigned int)v89 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v89 + 1;
    *((_DWORD *)v83->m_Items + v89) = 2;
    ++v76->fields._version;
  }
  v90 = v76->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      5,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v90 + 1;
    *((_DWORD *)v83->m_Items + v90) = 5;
    ++v76->fields._version;
  }
  v91 = v76->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      6,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v91 + 1;
    *((_DWORD *)v83->m_Items + v91) = 6;
    ++v76->fields._version;
  }
  v92 = v76->fields._size;
  if ( (unsigned int)v92 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      14,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v92 + 1;
    *((_DWORD *)v83->m_Items + v92) = 14;
    ++v76->fields._version;
  }
  v93 = v76->fields._size;
  if ( (unsigned int)v93 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v76->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v76->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v76->fields._size = v93 + 1;
    *((_DWORD *)v83->m_Items + v93) = 1;
    ++v76->fields._version;
  }
  v94 = v76->fields._size;
  if ( (unsigned int)v94 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v76,
      8,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v76->fields._size = v94 + 1;
    *((_DWORD *)v83->m_Items + v94) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v76;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantSelectList,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v95 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v95,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v95 )
    goto LABEL_221;
  v102 = v95->fields._items;
  v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v95->fields._version;
  if ( !v102 )
    goto LABEL_221;
  v104 = v95->fields._size;
  if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      3,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v104 + 1;
    *((_DWORD *)v102->m_Items + v104) = 3;
    ++v95->fields._version;
  }
  v105 = v95->fields._size;
  if ( (unsigned int)v105 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      5,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v105 + 1;
    *((_DWORD *)v102->m_Items + v105) = 5;
    ++v95->fields._version;
  }
  v106 = v95->fields._size;
  if ( (unsigned int)v106 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      6,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v106 + 1;
    *((_DWORD *)v102->m_Items + v106) = 6;
    ++v95->fields._version;
  }
  v107 = v95->fields._size;
  if ( (unsigned int)v107 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      7,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v107 + 1;
    *((_DWORD *)v102->m_Items + v107) = 7;
    ++v95->fields._version;
  }
  v108 = v95->fields._size;
  if ( (unsigned int)v108 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v108 + 1;
    *((_DWORD *)v102->m_Items + v108) = 2;
    ++v95->fields._version;
  }
  v109 = v95->fields._size;
  if ( (unsigned int)v109 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      14,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v109 + 1;
    *((_DWORD *)v102->m_Items + v109) = 14;
    ++v95->fields._version;
  }
  v110 = v95->fields._size;
  if ( (unsigned int)v110 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    v102 = v95->fields._items;
    v103 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v95->fields._version;
    if ( !v102 )
      goto LABEL_221;
  }
  else
  {
    v95->fields._size = v110 + 1;
    *((_DWORD *)v102->m_Items + v110) = 1;
    ++v95->fields._version;
  }
  v111 = v95->fields._size;
  if ( (unsigned int)v111 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v95,
      24,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v95->fields._size = v111 + 1;
    *((_DWORD *)v102->m_Items + v111) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v95;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEquipSelectList,
    (int32_t)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v112 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v112,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v112 )
    goto LABEL_221;
  v119 = v112->fields._items;
  v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v112->fields._version;
  if ( !v119 )
    goto LABEL_221;
  v121 = v112->fields._size;
  if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      8,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v121 + 1;
    *((_DWORD *)v119->m_Items + v121) = 8;
    ++v112->fields._version;
  }
  v122 = v112->fields._size;
  if ( (unsigned int)v122 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      3,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v122 + 1;
    *((_DWORD *)v119->m_Items + v122) = 3;
    ++v112->fields._version;
  }
  v123 = v112->fields._size;
  if ( (unsigned int)v123 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      19,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v123 + 1;
    *((_DWORD *)v119->m_Items + v123) = 19;
    ++v112->fields._version;
  }
  v124 = v112->fields._size;
  if ( (unsigned int)v124 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      20,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v124 + 1;
    *((_DWORD *)v119->m_Items + v124) = 20;
    ++v112->fields._version;
  }
  v125 = v112->fields._size;
  if ( (unsigned int)v125 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      21,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v125 + 1;
    *((_DWORD *)v119->m_Items + v125) = 21;
    ++v112->fields._version;
  }
  v126 = v112->fields._size;
  if ( (unsigned int)v126 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      22,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v126 + 1;
    *((_DWORD *)v119->m_Items + v126) = 22;
    ++v112->fields._version;
  }
  v127 = v112->fields._size;
  if ( (unsigned int)v127 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      23,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    v119 = v112->fields._items;
    v120 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v112->fields._version;
    if ( !v119 )
      goto LABEL_221;
  }
  else
  {
    v112->fields._size = v127 + 1;
    *((_DWORD *)v119->m_Items + v127) = 23;
    ++v112->fields._version;
  }
  v128 = v112->fields._size;
  if ( (unsigned int)v128 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v112->fields._size = v128 + 1;
    *((_DWORD *)v119->m_Items + v128) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v112;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantCostumeSelectList,
    (int32_t)v112,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v129 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v129,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v129 )
    goto LABEL_221;
  v136 = v129->fields._items;
  v137 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v129->fields._version;
  if ( !v136 )
    goto LABEL_221;
  v138 = v129->fields._size;
  if ( (unsigned int)v138 >= LODWORD(v136->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v129,
      2,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    v136 = v129->fields._items;
    v137 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v129->fields._version;
    if ( !v136 )
      goto LABEL_221;
  }
  else
  {
    v129->fields._size = v138 + 1;
    *((_DWORD *)v136->m_Items + v138) = 2;
    ++v129->fields._version;
  }
  v139 = v129->fields._size;
  if ( (unsigned int)v139 < LODWORD(v136->max_length) )
  {
    v129->fields._size = v139 + 1;
    *((_DWORD *)v136->m_Items + v139) = 14;
    ++v129->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v129,
    14,
    *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  v136 = v129->fields._items;
  v137 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v129->fields._version;
  if ( !v136 )
LABEL_221:
    sub_1C93D2C(v4, v5);
LABEL_215:
  v140 = v129->fields._size;
  if ( (unsigned int)v140 >= LODWORD(v136->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v129,
      1,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v129->fields._size = v140 + 1;
    *((_DWORD *)v136->m_Items + v140) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v129;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeSelectList,
    (int32_t)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  ServantSortSelectMenu__Close_33777016(this, 0, v2);
}


void ServantSortSelectMenu__Close_33777016(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_4D2B939 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantSortSelectMenu_EndClose__);
    byte_4D2B939 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantSortSelectMenu__EndOpen(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
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

  if ( (byte_4D2B93B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B93B = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(allDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(allDispObject);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B93D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B93D = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(buddyDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(buddyDispObject);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B941 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B941 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(commandCodeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(commandCodeDispObject);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B940 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B940 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(costumeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(costumeDispObject);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B93C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B93C = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(fatigueDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(fatigueDispObject);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B937 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_TypeInfo);
    byte_4D2B937 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C93D2C(0, v1);
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

  if ( (byte_4D2B93A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B93A = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(normalDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(normalDispObject);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4D2B93E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4D2B93E = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_1C93D2C(shortDispObject, method);
  }
  v6 = 0;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C93D34(shortDispObject);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v25; // x8
  int v26; // w9
  int v27; // w10
  int v28; // w22
  int32_t v29; // w21
  int v30; // w24
  int v31; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v36; // w27
  float v37; // s0
  float v38; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x0

  if ( (byte_4D2B93F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_4D2B93F = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v4 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_385FE20 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
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
        v21 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v13,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1C93D34(servantEquipSelectList);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !LODWORD(shortDispSortSprites->max_length) )
    goto LABEL_44;
  v25 = shortDispSortSprites->m_Items[0];
  if ( !v25 || !v8 )
LABEL_43:
    sub_1C93D2C(servantEquipSelectList, method);
  v26 = v8->fields._size;
  v27 = v26 + 3;
  if ( v26 >= 0 )
    v27 = v8->fields._size;
  if ( v26 >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = v27 >> 2;
    v31 = (v8->fields._size & 3) - 1;
    mWidth = (float)v25->fields.mWidth;
    mHeight = (float)v25->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v36 = v28 >= v30 ? v31 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v29,
                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v37 = (float)(v29 - 4 * v28) + (float)((float)v36 * -0.5);
      v38 = (float)(v37 * mWidth) + (float)(v37 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v38, 0);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v29,
                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionY(v40, (float)v28 * (float)-(float)(y + mHeight), 0);
      if ( (~v29++ & 3) == 0 )
        ++v28;
      if ( v29 >= v8->fields._size )
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

  if ( (byte_4D2B94C & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickCancel__);
    byte_4D2B94C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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

  if ( (byte_4D2B963 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickChoiceSort__);
    byte_4D2B963 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B94B & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickDecide__);
    byte_4D2B94B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_1C93D2C(baseSortInfo, v5);
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

  if ( (byte_4D2B950 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickEventOrder__);
    byte_4D2B950 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B94D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickHelp__);
    byte_4D2B94D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
    {
      sub_1C93D2C(helpButton, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v9, v8, 0, 0);
        return;
      }
      if ( kind == 5 )
      {
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 32;
        goto LABEL_15;
      }
    }
    v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
    sub_1C93D2C(helpButton, method);
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

  if ( (byte_4D2B962 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSmartSort__);
    byte_4D2B962 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95A & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    byte_4D2B95A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B959 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    byte_4D2B959 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B957 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortAmount__);
    byte_4D2B957 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B955 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortAttack__);
    byte_4D2B955 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B961 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortBuddy__);
    byte_4D2B961 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B94E & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortClass__);
    byte_4D2B94E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B956 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortCost__);
    byte_4D2B956 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95B & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortCostume__);
    byte_4D2B95B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B94F & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortCreate__);
    byte_4D2B94F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B958 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    byte_4D2B958 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95C & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    byte_4D2B95C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B954 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortHp__);
    byte_4D2B954 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B952 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortLevel__);
    byte_4D2B952 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95F & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    byte_4D2B95F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95D & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    byte_4D2B95D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B95E & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    byte_4D2B95E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B953 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    byte_4D2B953 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B951 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortRarity__);
    byte_4D2B951 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B960 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    byte_4D2B960 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void ServantSortSelectMenu__Open(
        ServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        bool isChoiceReverse,
        ServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  char v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  bool isChoiceSort; // w8
  ListViewSort_o *v20; // x21
  ListViewSort_o *v21; // x22
  int32_t v22; // w2
  char v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
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
  __int64 *v42; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  int32_t v49; // w8
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  int32_t v52; // w8
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  int32_t v57; // w1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  System_Action_o *v65; // x20
  int32_t v66; // w20
  ServantSortSelectMenu_c *v67; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v69; // x1
  __int64 v70; // x0
  __int64 v71; // x1

  if ( (byte_4D2B938 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ServantSortSelectMenu_EndOpen__);
    sub_1C93AD4(&ServantSortSelectMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_12343/*"SORT_WINDOW_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12336/*"SMART_SORT_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_12337/*"SMART_SORT_NAME"*/);
    sub_1C93AD4(&StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_3378/*"CHOICE_SORT_NAME"*/);
    sub_1C93AD4(&StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3377/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_1C93AD4(&StringLiteral_12342/*"SORT_WINDOW_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_3376/*"CHOICE_SORT_DETAIL"*/);
    byte_4D2B938 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      isChoiceReverse,
      (System_String_o *)callback,
      (int32_t)method,
      v6,
      v7);
    if ( !sort )
    {
      v66 = this->fields.kind;
      v67 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v67 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v67->static_fields->commonServantSortInfo;
      if ( v66 == 2 )
        ++p_commonServantSortInfo;
      v69 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)v69, v13, v14, v15, v16, v17, v18);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0);
        sub_1C93D2C(v70, v71);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v13, v14, v15, v16, v17, v18);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v20 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v21 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
    ListViewSort___ctor_44521760(v21, v20, 0);
    this->fields.operationSortInfo = v21;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12343/*"SORT_WINDOW_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SORT_WINDOW_DETAIL"*/, 0);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SMART_SORT_NAME"*/, 0);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SMART_SORT_DETAIL"*/, 0);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SMART_SORT_NAME"*/, 0);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SMART_SORT_DETAIL"*/, 0);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CHOICE_SORT_NAME"*/, 0);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v42 = &StringLiteral_3377/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v42, 0);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v42, 0);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v42, 0);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v45);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v46);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v54);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v46);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v47);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v48);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v49 = this->fields.kind;
                  if ( v49 == 3 )
                    goto LABEL_69;
                  if ( v49 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v46);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v50);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v51);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  v52 = this->fields.kind;
                  if ( v52 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      v57 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v57, 0, 0, 0, 0, 0, 0);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v52 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v65 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                      System_Action___ctor(v65, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0);
                      BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0, 0);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v53);
LABEL_65:
                      v57 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v46);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v55);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v56);
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
                  v57 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v46);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v58);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v59);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v46);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v60);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v61);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v62);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v46);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v63);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v64);
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
        sub_1C93D2C(baseSortInfo, v28);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v42 = &StringLiteral_3376/*"CHOICE_SORT_DETAIL"*/;
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B943 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B943 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B945 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B945 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
  if ( (byte_4D2B94A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2B94A = 1;
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
        sub_1C93D2C(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v4 = &StringLiteral_17638/*"btn_on"*/;
      else
        v4 = &StringLiteral_17637/*"btn_off"*/;
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B948 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B948 = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B947 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B947 = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
    sub_1C93D2C(decideButton, isEnable);
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B944 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B944 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B942 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B942 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(normalSortButtons->max_length) )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(normalSortSprites->max_length) )
        sub_1C93D34(this);
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
                                              (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
    sub_1C93D2C(this, isEnable);
  v4 = this;
  v5 = 0;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  if ( (byte_4D2B946 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B946 = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
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
                                            (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
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
  if ( (byte_4D2B949 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2B949 = 1;
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
      sub_1C93D2C(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_17638/*"btn_on"*/;
  else
    v4 = &StringLiteral_17637/*"btn_off"*/;
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

  if ( (byte_4D2B935 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2B935 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1C940C8(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *ServantSortSelectMenu__get_closeBtnPath(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B964 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15741/*"Window/CancelButton"*/);
    byte_4D2B964 = 1;
  }
  return (System_String_o *)StringLiteral_15741/*"Window/CancelButton"*/;
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

  if ( (byte_4D2B936 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2B936 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C940C8(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


void ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC1114;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC10CC;
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
  if ( (byte_4D2B967 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2B967 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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