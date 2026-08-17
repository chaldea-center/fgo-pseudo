void ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *v8; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ListViewSort_o *v16; // x19
  struct ServantSortSelectMenu_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596BAAD & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&ServantSortSelectMenu_TypeInfo);
    sub_2213A60(&StringLiteral_13283/*"ServantSortSelect1"*/);
    sub_2213A60(&StringLiteral_13284/*"ServantSortSelect2"*/);
    sub_2213A60(&StringLiteral_13285/*"ServantSortSelect4"*/);
    byte_596BAAD = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_13283/*"ServantSortSelect1"*/, 3, 0, 0);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantSortSelectMenu_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v8, (System_String_o *)StringLiteral_13284/*"ServantSortSelect2"*/, 3, 0, 0);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->commonServantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v16, (System_String_o *)StringLiteral_13285/*"ServantSortSelect4"*/, 3, 0, 0);
  v17 = ServantSortSelectMenu_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_ListViewSort_SortKind__c *v3; // x0
  System_Collections_Generic_List_T__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
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
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
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
  __int64 v47; // x10
  __int64 v48; // x10
  System_Collections_Generic_List_T__o *v49; // x20
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x10
  __int64 v60; // x10
  __int64 v61; // x10
  __int64 v62; // x10
  __int64 v63; // x10
  __int64 v64; // x10
  __int64 v65; // x10
  __int64 v66; // x10
  __int64 v67; // x10
  __int64 v68; // x10
  __int64 v69; // x10
  __int64 v70; // x10
  System_Collections_Generic_List_T__o *v71; // x20
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x10
  __int64 v82; // x10
  __int64 v83; // x10
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  __int64 v87; // x10
  __int64 v88; // x10
  __int64 v89; // x10
  System_Collections_Generic_List_T__o *v90; // x20
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  __int64 v103; // x10
  __int64 v104; // x10
  __int64 v105; // x10
  __int64 v106; // x10
  System_Collections_Generic_List_T__o *v107; // x20
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x10
  __int64 v118; // x10
  __int64 v119; // x10
  __int64 v120; // x10
  __int64 v121; // x10
  __int64 v122; // x10
  __int64 v123; // x10
  System_Collections_Generic_List_T__o *v124; // x20
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x10
  __int64 v135; // x10
  __int64 v136; // x1
  __int64 v137; // x2

  if ( (byte_596BAAC & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_596BAAC = 1;
  }
  v3 = System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo;
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v4 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v4 )
    goto LABEL_221;
  items = v4->fields._items;
  v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_221;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 3;
    ++v4->fields._version;
  }
  v16 = v4->fields._size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      10,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 10;
    ++v4->fields._version;
  }
  v17 = v4->fields._size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      4,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 4;
    ++v4->fields._version;
  }
  v18 = v4->fields._size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 7;
    ++v4->fields._version;
  }
  v19 = v4->fields._size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 5;
    ++v4->fields._version;
  }
  v20 = v4->fields._size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 6;
    ++v4->fields._version;
  }
  v21 = v4->fields._size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      15,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 15;
    ++v4->fields._version;
  }
  v22 = v4->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      16,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 16;
    ++v4->fields._version;
  }
  v23 = v4->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 2;
    ++v4->fields._version;
  }
  v24 = v4->fields._size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 14;
    ++v4->fields._version;
  }
  v25 = v4->fields._size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    v4->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 1;
    ++v4->fields._version;
  }
  v26 = v4->fields._size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v4->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantBaseSelectList,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v27 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v27,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v27 )
    goto LABEL_221;
  v34 = v27->fields._items;
  v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v27->fields._version;
  if ( !v34 )
    goto LABEL_221;
  v36 = v27->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v36 + 1;
    *((_DWORD *)v34->m_Items + v36) = 3;
    ++v27->fields._version;
  }
  v37 = v27->fields._size;
  if ( (unsigned int)v37 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      10,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v37 + 1;
    *((_DWORD *)v34->m_Items + v37) = 10;
    ++v27->fields._version;
  }
  v38 = v27->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      4,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v38 + 1;
    *((_DWORD *)v34->m_Items + v38) = 4;
    ++v27->fields._version;
  }
  v39 = v27->fields._size;
  if ( (unsigned int)v39 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v39 + 1;
    *((_DWORD *)v34->m_Items + v39) = 7;
    ++v27->fields._version;
  }
  v40 = v27->fields._size;
  if ( (unsigned int)v40 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v40 + 1;
    *((_DWORD *)v34->m_Items + v40) = 5;
    ++v27->fields._version;
  }
  v41 = v27->fields._size;
  if ( (unsigned int)v41 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v41 + 1;
    *((_DWORD *)v34->m_Items + v41) = 6;
    ++v27->fields._version;
  }
  v42 = v27->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      15,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v42 + 1;
    *((_DWORD *)v34->m_Items + v42) = 15;
    ++v27->fields._version;
  }
  v43 = v27->fields._size;
  if ( (unsigned int)v43 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      16,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v43 + 1;
    *((_DWORD *)v34->m_Items + v43) = 16;
    ++v27->fields._version;
  }
  v44 = v27->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v44 + 1;
    *((_DWORD *)v34->m_Items + v44) = 2;
    ++v27->fields._version;
  }
  v45 = v27->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v45 + 1;
    *((_DWORD *)v34->m_Items + v45) = 14;
    ++v27->fields._version;
  }
  v46 = v27->fields._size;
  if ( (unsigned int)v46 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v46 + 1;
    *((_DWORD *)v34->m_Items + v46) = 1;
    ++v27->fields._version;
  }
  v47 = v27->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    v34 = v27->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v27->fields._version;
    if ( !v34 )
      goto LABEL_221;
  }
  else
  {
    v27->fields._size = v47 + 1;
    *((_DWORD *)v34->m_Items + v47) = 8;
    ++v27->fields._version;
  }
  v48 = v27->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      25,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = v48 + 1;
    *((_DWORD *)v34->m_Items + v48) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fatigureSelectList,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v49 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v49,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v49 )
    goto LABEL_221;
  v56 = v49->fields._items;
  v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v49->fields._version;
  if ( !v56 )
    goto LABEL_221;
  v58 = v49->fields._size;
  if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v58 + 1;
    *((_DWORD *)v56->m_Items + v58) = 3;
    ++v49->fields._version;
  }
  v59 = v49->fields._size;
  if ( (unsigned int)v59 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      10,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v59 + 1;
    *((_DWORD *)v56->m_Items + v59) = 10;
    ++v49->fields._version;
  }
  v60 = v49->fields._size;
  if ( (unsigned int)v60 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      4,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v60 + 1;
    *((_DWORD *)v56->m_Items + v60) = 4;
    ++v49->fields._version;
  }
  v61 = v49->fields._size;
  if ( (unsigned int)v61 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v61 + 1;
    *((_DWORD *)v56->m_Items + v61) = 7;
    ++v49->fields._version;
  }
  v62 = v49->fields._size;
  if ( (unsigned int)v62 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v62 + 1;
    *((_DWORD *)v56->m_Items + v62) = 5;
    ++v49->fields._version;
  }
  v63 = v49->fields._size;
  if ( (unsigned int)v63 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v63 + 1;
    *((_DWORD *)v56->m_Items + v63) = 6;
    ++v49->fields._version;
  }
  v64 = v49->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      15,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v64 + 1;
    *((_DWORD *)v56->m_Items + v64) = 15;
    ++v49->fields._version;
  }
  v65 = v49->fields._size;
  if ( (unsigned int)v65 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      16,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v65 + 1;
    *((_DWORD *)v56->m_Items + v65) = 16;
    ++v49->fields._version;
  }
  v66 = v49->fields._size;
  if ( (unsigned int)v66 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v66 + 1;
    *((_DWORD *)v56->m_Items + v66) = 2;
    ++v49->fields._version;
  }
  v67 = v49->fields._size;
  if ( (unsigned int)v67 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v67 + 1;
    *((_DWORD *)v56->m_Items + v67) = 14;
    ++v49->fields._version;
  }
  v68 = v49->fields._size;
  if ( (unsigned int)v68 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v68 + 1;
    *((_DWORD *)v56->m_Items + v68) = 1;
    ++v49->fields._version;
  }
  v69 = v49->fields._size;
  if ( (unsigned int)v69 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    v56 = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v49->fields._version;
    if ( !v56 )
      goto LABEL_221;
  }
  else
  {
    v49->fields._size = v69 + 1;
    *((_DWORD *)v56->m_Items + v69) = 8;
    ++v49->fields._version;
  }
  v70 = v49->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      28,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v49->fields._size = v70 + 1;
    *((_DWORD *)v56->m_Items + v70) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v49;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buddySelectList,
    (int32_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v71 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v71,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v71 )
    goto LABEL_221;
  v78 = v71->fields._items;
  v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v71->fields._version;
  if ( !v78 )
    goto LABEL_221;
  v80 = v71->fields._size;
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v80 + 1;
    *((_DWORD *)v78->m_Items + v80) = 3;
    ++v71->fields._version;
  }
  v81 = v71->fields._size;
  if ( (unsigned int)v81 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      10,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v81 + 1;
    *((_DWORD *)v78->m_Items + v81) = 10;
    ++v71->fields._version;
  }
  v82 = v71->fields._size;
  if ( (unsigned int)v82 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      4,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v82 + 1;
    *((_DWORD *)v78->m_Items + v82) = 4;
    ++v71->fields._version;
  }
  v83 = v71->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v83 + 1;
    *((_DWORD *)v78->m_Items + v83) = 7;
    ++v71->fields._version;
  }
  v84 = v71->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v84 + 1;
    *((_DWORD *)v78->m_Items + v84) = 2;
    ++v71->fields._version;
  }
  v85 = v71->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v85 + 1;
    *((_DWORD *)v78->m_Items + v85) = 5;
    ++v71->fields._version;
  }
  v86 = v71->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v86 + 1;
    *((_DWORD *)v78->m_Items + v86) = 6;
    ++v71->fields._version;
  }
  v87 = v71->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v87 + 1;
    *((_DWORD *)v78->m_Items + v87) = 14;
    ++v71->fields._version;
  }
  v88 = v71->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    v78 = v71->fields._items;
    v79 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v78 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v88 + 1;
    *((_DWORD *)v78->m_Items + v88) = 1;
    ++v71->fields._version;
  }
  v89 = v71->fields._size;
  if ( (unsigned int)v89 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v71->fields._size = v89 + 1;
    *((_DWORD *)v78->m_Items + v89) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v71;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantSelectList,
    (int32_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v90 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v90,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v90 )
    goto LABEL_221;
  v97 = v90->fields._items;
  v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v90->fields._version;
  if ( !v97 )
    goto LABEL_221;
  v99 = v90->fields._size;
  if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v99 + 1;
    *((_DWORD *)v97->m_Items + v99) = 3;
    ++v90->fields._version;
  }
  v100 = v90->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v100 + 1;
    *((_DWORD *)v97->m_Items + v100) = 5;
    ++v90->fields._version;
  }
  v101 = v90->fields._size;
  if ( (unsigned int)v101 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v101 + 1;
    *((_DWORD *)v97->m_Items + v101) = 6;
    ++v90->fields._version;
  }
  v102 = v90->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v102 + 1;
    *((_DWORD *)v97->m_Items + v102) = 7;
    ++v90->fields._version;
  }
  v103 = v90->fields._size;
  if ( (unsigned int)v103 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v103 + 1;
    *((_DWORD *)v97->m_Items + v103) = 2;
    ++v90->fields._version;
  }
  v104 = v90->fields._size;
  if ( (unsigned int)v104 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v104 + 1;
    *((_DWORD *)v97->m_Items + v104) = 14;
    ++v90->fields._version;
  }
  v105 = v90->fields._size;
  if ( (unsigned int)v105 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v90->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v90->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v90->fields._size = v105 + 1;
    *((_DWORD *)v97->m_Items + v105) = 1;
    ++v90->fields._version;
  }
  v106 = v90->fields._size;
  if ( (unsigned int)v106 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v90,
      24,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v90->fields._size = v106 + 1;
    *((_DWORD *)v97->m_Items + v106) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v90;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEquipSelectList,
    (int32_t)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v107 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v107,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v107 )
    goto LABEL_221;
  v114 = v107->fields._items;
  v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v107->fields._version;
  if ( !v114 )
    goto LABEL_221;
  v116 = v107->fields._size;
  if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v116 + 1;
    *((_DWORD *)v114->m_Items + v116) = 8;
    ++v107->fields._version;
  }
  v117 = v107->fields._size;
  if ( (unsigned int)v117 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v117 + 1;
    *((_DWORD *)v114->m_Items + v117) = 3;
    ++v107->fields._version;
  }
  v118 = v107->fields._size;
  if ( (unsigned int)v118 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      19,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v118 + 1;
    *((_DWORD *)v114->m_Items + v118) = 19;
    ++v107->fields._version;
  }
  v119 = v107->fields._size;
  if ( (unsigned int)v119 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      20,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v119 + 1;
    *((_DWORD *)v114->m_Items + v119) = 20;
    ++v107->fields._version;
  }
  v120 = v107->fields._size;
  if ( (unsigned int)v120 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      21,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v120 + 1;
    *((_DWORD *)v114->m_Items + v120) = 21;
    ++v107->fields._version;
  }
  v121 = v107->fields._size;
  if ( (unsigned int)v121 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      22,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v121 + 1;
    *((_DWORD *)v114->m_Items + v121) = 22;
    ++v107->fields._version;
  }
  v122 = v107->fields._size;
  if ( (unsigned int)v122 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      23,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    v114 = v107->fields._items;
    v115 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v107->fields._version;
    if ( !v114 )
      goto LABEL_221;
  }
  else
  {
    v107->fields._size = v122 + 1;
    *((_DWORD *)v114->m_Items + v122) = 23;
    ++v107->fields._version;
  }
  v123 = v107->fields._size;
  if ( (unsigned int)v123 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v107,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v107->fields._size = v123 + 1;
    *((_DWORD *)v114->m_Items + v123) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v107;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantCostumeSelectList,
    (int32_t)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v124 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v124,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v124 )
    goto LABEL_221;
  v131 = v124->fields._items;
  v132 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v124->fields._version;
  if ( !v131 )
    goto LABEL_221;
  v133 = v124->fields._size;
  if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
    v131 = v124->fields._items;
    v132 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v124->fields._version;
    if ( !v131 )
      goto LABEL_221;
  }
  else
  {
    v124->fields._size = v133 + 1;
    *((_DWORD *)v131->m_Items + v133) = 2;
    ++v124->fields._version;
  }
  v134 = v124->fields._size;
  if ( (unsigned int)v134 < LODWORD(v131->max_length) )
  {
    v124->fields._size = v134 + 1;
    *((_DWORD *)v131->m_Items + v134) = 14;
    ++v124->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v124,
    14,
    *(const MethodInfo_4469A88 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  v131 = v124->fields._items;
  v132 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v124->fields._version;
  if ( !v131 )
LABEL_221:
    sub_2213CDC(v5, v6);
LABEL_215:
  v135 = v124->fields._size;
  if ( (unsigned int)v135 >= LODWORD(v131->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v124->fields._size = v135 + 1;
    *((_DWORD *)v131->m_Items + v135) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v124;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeSelectList,
    (int32_t)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v136, v137);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void ServantSortSelectMenu__ChangeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int32_t kind; // w8

  kind = this->fields.kind;
  if ( kind <= 3 )
  {
    if ( kind > 1 )
    {
      if ( kind == 2 )
      {
LABEL_14:
        ServantSortSelectMenu__SetShortButtonSelect(this, method);
        return;
      }
    }
    else if ( (unsigned int)kind >= 2 )
    {
      return;
    }
    ServantSortSelectMenu__SetAllButtonSelect(this, method);
    return;
  }
  if ( kind <= 5 )
  {
    if ( kind != 4 )
    {
      ServantSortSelectMenu__SetCostumeButtonSelect(this, method);
      return;
    }
    goto LABEL_14;
  }
  switch ( kind )
  {
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonSelect(this, method);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonSelect(this, method);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonSelect(this, method);
      break;
  }
}


void ServantSortSelectMenu__Close(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSortSelectMenu__Close_40413936(this, 0, v2);
}


void ServantSortSelectMenu__Close_40413936(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_596BA80 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSortSelectMenu_EndClose__);
    byte_596BA80 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = System_Action_TypeInfo;
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_2213CCC(v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void ServantSortSelectMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantSortSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_596BA7D & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_TypeInfo);
    byte_596BA7D = 1;
  }
  v3 = ServantSortSelectMenu_TypeInfo;
  if ( !*(&ServantSortSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v1, v2);
    v3 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(commonServantSortInfo, 0);
}


void ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596BA82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA82 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(allDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(allDispObject);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_596BA84 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA84 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(buddyDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(buddyDispObject);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_596BA88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA88 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(commandCodeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(commandCodeDispObject);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_596BA87 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA87 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(costumeDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(costumeDispObject);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_596BA83 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA83 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(fatigueDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(fatigueDispObject);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  ServantSortSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_596BA7E & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_TypeInfo);
    byte_596BA7E = 1;
  }
  v3 = ServantSortSelectMenu_TypeInfo;
  if ( !*(&ServantSortSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v1, v2);
    v3 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_2213CDC(0, v1);
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

  if ( (byte_596BA81 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA81 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(normalDispObject, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(normalDispObject);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_596BA85 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_596BA85 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(shortDispObject, method);
  }
  v6 = 0;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(shortDispObject);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  unsigned int v5; // w21
  char v6; // w20
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  struct UICommonButton_array *v9; // x22
  int max_length; // w8
  unsigned int v11; // w24
  Il2CppClass **v12; // x8
  Il2CppObject *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v25; // x10
  int v26; // w8
  int v27; // w9
  int v28; // w24
  int v29; // w22
  int32_t v30; // w21
  float mWidth; // s9
  float mHeight; // s10
  int v33; // w25
  float x; // s8
  float y; // s12
  int v36; // w8
  float v37; // s0
  float v38; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x0

  if ( (byte_596BA86 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_596BA86 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v4 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_446A6E4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
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
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_2213CE4(servantEquipSelectList);
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
    sub_2213CDC(servantEquipSelectList, method);
  v26 = v8->fields._size;
  v27 = v26 + 3;
  if ( v26 >= 0 )
    v27 = v8->fields._size;
  if ( v26 >= 1 )
  {
    v28 = v27 >> 2;
    v29 = 0;
    v30 = 0;
    mWidth = (float)v25->fields.mWidth;
    mHeight = (float)v25->fields.mHeight;
    v33 = (v8->fields._size & 3) - 1;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v30,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v36 = v29 >= v28 ? v33 : 3;
      v37 = (float)(v30 - 4 * v29) + (float)((float)v36 * -0.5);
      v38 = (float)(v37 * mWidth) + (float)(v37 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v38, 0);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v30,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0);
      GameObjectExtensions__SetLocalPositionY(v40, -(float)((float)(y + mHeight) * (float)v29), 0);
      if ( (~v30++ & 3) == 0 )
        ++v29;
      if ( v30 >= v8->fields._size )
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

  if ( (byte_596BA93 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickCancel__);
    byte_596BA93 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BAAA & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickChoiceSort__);
    byte_596BAAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA92 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickDecide__);
    byte_596BA92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_2213CDC(baseSortInfo, v5);
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

  if ( (byte_596BA97 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickEventOrder__);
    byte_596BA97 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA94 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickHelp__);
    byte_596BA94 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
    {
      sub_2213CDC(helpButton, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 41;
LABEL_11:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v9, v8, 0, 0);
        return;
      }
      if ( kind == 5 )
      {
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
        v9 = 32;
        goto LABEL_11;
      }
    }
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0);
    v9 = 42;
    goto LABEL_11;
  }
}


void ServantSortSelectMenu__OnClickHelpClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
  {
    sub_2213CDC(helpButton, method);
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

  if ( (byte_596BAA9 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSmartSort__);
    byte_596BAA9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA1 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    byte_596BAA1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA0 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    byte_596BAA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9E & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortAmount__);
    byte_596BA9E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9C & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortAttack__);
    byte_596BA9C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA8 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortBuddy__);
    byte_596BAA8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA95 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortClass__);
    byte_596BA95 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9D & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortCost__);
    byte_596BA9D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA2 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortCostume__);
    byte_596BAA2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA96 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortCreate__);
    byte_596BA96 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9F & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    byte_596BA9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA3 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    byte_596BAA3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9B & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortHp__);
    byte_596BA9B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA99 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortLevel__);
    byte_596BA99 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA6 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    byte_596BAA6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA4 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    byte_596BAA4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA5 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    byte_596BAA5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA9A & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    byte_596BA9A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BA98 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortRarity__);
    byte_596BA98 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BAA7 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    byte_596BAA7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int16 v20; // w9
  ListViewSort_o *v21; // x21
  ListViewSort_c *v22; // x0
  ListViewSort_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  ListViewSort_o *baseSortInfo; // x0
  __int64 v32; // x1
  __int64 v33; // x2
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
  __int64 v45; // x1
  __int64 v46; // x2
  UILabel_o *smartChoiceDetail; // x21
  int v48; // w8
  __int64 *v49; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  int32_t v54; // w8
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  int32_t v59; // w8
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  int32_t v62; // w1
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  int32_t v65; // w8
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  System_Action_o *v73; // x20
  ServantSortSelectMenu_c *v74; // x0
  int v75; // w8
  struct ListViewSort_o **p_commonServantEquipSortInfo; // x8
  struct ListViewSort_o *v77; // x1
  __int64 v78; // x0
  __int64 v79; // x1

  if ( (byte_596BA7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantSortSelectMenu_EndOpen__);
    sub_2213A60(&ServantSortSelectMenu_TypeInfo);
    sub_2213A60(&StringLiteral_12772/*"SORT_WINDOW_TITLE"*/);
    sub_2213A60(&StringLiteral_12765/*"SMART_SORT_DETAIL"*/);
    sub_2213A60(&StringLiteral_12766/*"SMART_SORT_NAME"*/);
    sub_2213A60(&StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/);
    sub_2213A60(&StringLiteral_3497/*"CHOICE_SORT_NAME"*/);
    sub_2213A60(&StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/);
    sub_2213A60(&StringLiteral_3496/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_2213A60(&StringLiteral_12771/*"SORT_WINDOW_DETAIL"*/);
    sub_2213A60(&StringLiteral_3495/*"CHOICE_SORT_DETAIL"*/);
    byte_596BA7F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)sort,
      (System_String_o *)isChoiceReverse,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7);
    if ( !sort )
    {
      v74 = ServantSortSelectMenu_TypeInfo;
      v75 = *(&ServantSortSelectMenu_TypeInfo->_2.cctor_finished + 1);
      if ( this->fields.kind == 2 )
      {
        if ( !v75 )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v13, v14);
          v74 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v74->static_fields->commonServantEquipSortInfo;
      }
      else
      {
        if ( !v75 )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v13, v14);
          v74 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v74->static_fields->commonServantSortInfo;
      }
      v77 = *p_commonServantEquipSortInfo;
      this->fields.baseSortInfo = *p_commonServantEquipSortInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)v77,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0);
        sub_2213CDC(v78, v79);
      }
      goto LABEL_95;
    }
    this->fields.baseSortInfo = sort;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.openedKind = sort->fields.sortKind;
    v20 = *(_WORD *)&sort->fields.isSmartSort;
    v21 = this->fields.baseSortInfo;
    v22 = ListViewSort_TypeInfo;
    *(_WORD *)&this->fields.openedSmartSort = v20;
    v23 = (ListViewSort_o *)sub_2213CCC(v22);
    ListViewSort___ctor_50855524(v23, v21, 0);
    this->fields.operationSortInfo = v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    baseSortInfo = (ListViewSort_o *)this->fields.allDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.fatigueDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.buddyDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.normalDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.shortDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.choiceSort2Object;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.costumeDispObject;
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
    if ( !baseSortInfo )
      goto LABEL_95;
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSortInfo, 0);
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12772/*"SORT_WINDOW_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_95;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12771/*"SORT_WINDOW_DETAIL"*/, 0);
    if ( !explanationLabel )
      goto LABEL_95;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_95;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_95;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12766/*"SMART_SORT_NAME"*/, 0);
    if ( !smartSortLabel )
      goto LABEL_95;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12765/*"SMART_SORT_DETAIL"*/, 0);
    if ( !smartSortDetail )
      goto LABEL_95;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12766/*"SMART_SORT_NAME"*/, 0);
    if ( !costumeSmartSortLabel )
      goto LABEL_95;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12765/*"SMART_SORT_DETAIL"*/, 0);
    if ( !costumeSmartSortDetail )
      goto LABEL_95;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3497/*"CHOICE_SORT_NAME"*/, 0);
    if ( !smartChoiceLabel )
      goto LABEL_95;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3497/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSortLabel )
      goto LABEL_95;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3497/*"CHOICE_SORT_NAME"*/, 0);
    if ( !choiceSort2Label )
      goto LABEL_95;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    v48 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( isChoiceReverse )
    {
      if ( !v48 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
      v49 = &StringLiteral_3496/*"CHOICE_SORT_DETAIL_REVERSE"*/;
    }
    else
    {
      if ( !v48 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
      v49 = &StringLiteral_3495/*"CHOICE_SORT_DETAIL"*/;
    }
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v49, 0);
    if ( !smartChoiceDetail )
      goto LABEL_95;
    UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0);
    choiceSortDetail = this->fields.choiceSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v49, 0);
    if ( !choiceSortDetail )
      goto LABEL_95;
    UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0);
    choiceSort2Detail = this->fields.choiceSort2Detail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v49, 0);
    if ( !choiceSort2Detail )
      goto LABEL_95;
    UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0);
    ServantSortSelectMenu__SetEnableButtons(this, 1, v52);
    v54 = this->fields.kind;
    if ( v54 > 3 )
    {
      if ( v54 > 5 )
      {
        if ( v54 != 6 )
        {
          if ( v54 != 7 )
          {
            if ( v54 == 8 )
            {
              ServantSortSelectMenu__InitBuddyDisp(this, v53);
              ServantSortSelectMenu__SetBuddyButtonSelect(this, v55);
              ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v56);
              baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
              if ( baseSortInfo )
              {
                baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)baseSortInfo,
                                                   0);
                if ( baseSortInfo )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
                  goto LABEL_70;
                }
              }
LABEL_95:
              sub_2213CDC(baseSortInfo, v30);
            }
LABEL_86:
            this->fields.state = 1;
            v73 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v73, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0, 0);
            return;
          }
          ServantSortSelectMenu__InitFatigueDisp(this, v53);
          ServantSortSelectMenu__SetFatigueButtonSelect(this, v70);
          goto LABEL_78;
        }
        ServantSortSelectMenu__InitCommandCodeDisp(this, v53);
        ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v68);
        ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v69);
        baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
        if ( !baseSortInfo )
          goto LABEL_95;
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseSortInfo,
                                           0);
        if ( !baseSortInfo )
          goto LABEL_95;
LABEL_84:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        v62 = 41;
        goto LABEL_85;
      }
      if ( v54 != 4 )
      {
        ServantSortSelectMenu__InitCostumeDisp(this, v53);
        ServantSortSelectMenu__SetCostumeButtonSelect(this, v60);
        ServantSortSelectMenu__SetSmartSortButtonSelect(this, v61);
        baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
        if ( !baseSortInfo )
          goto LABEL_95;
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseSortInfo,
                                           0);
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        baseSortInfo = (ListViewSort_o *)this->fields.costumeSmartSortObject;
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        v62 = 32;
LABEL_85:
        EventTutorialMaster__CheckTutorial(0, v62, 0, 0, 0, 0, 0, 0);
        goto LABEL_86;
      }
      goto LABEL_64;
    }
    if ( v54 > 1 )
    {
      if ( v54 == 2 )
      {
LABEL_64:
        ServantSortSelectMenu__InitShortDisp(this, v53);
        ServantSortSelectMenu__SetShortButtonSelect(this, v63);
        ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v64);
        baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
        if ( !baseSortInfo )
          goto LABEL_95;
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseSortInfo,
                                           0);
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        v65 = this->fields.kind;
        if ( v65 == 4 )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
          if ( !baseSortInfo )
            goto LABEL_95;
          goto LABEL_84;
        }
        if ( v65 != 2 )
          goto LABEL_86;
LABEL_68:
        baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        ServantSortSelectMenu__SetSmartSortButtonSelect(this, v66);
LABEL_82:
        v62 = 42;
        goto LABEL_85;
      }
    }
    else
    {
      if ( !v54 )
      {
        ServantSortSelectMenu__InitAllDisp(this, v53);
        ServantSortSelectMenu__SetAllButtonSelect(this, v67);
LABEL_78:
        baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
        if ( !baseSortInfo )
          goto LABEL_95;
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseSortInfo,
                                           0);
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
        if ( !baseSortInfo )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
        ServantSortSelectMenu__SetSmartSortButtonSelect(this, v71);
        ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v72);
        goto LABEL_82;
      }
      if ( v54 != 1 )
        goto LABEL_86;
    }
    ServantSortSelectMenu__InitAllDisp(this, v53);
    ServantSortSelectMenu__SetAllButtonSelect(this, v57);
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v58);
    baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
    if ( !baseSortInfo )
      goto LABEL_95;
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSortInfo, 0);
    if ( !baseSortInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
    v59 = this->fields.kind;
    if ( v59 == 3 )
    {
LABEL_70:
      baseSortInfo = (ListViewSort_o *)this->fields.choiceSort2Object;
      if ( !baseSortInfo )
        goto LABEL_95;
      goto LABEL_84;
    }
    if ( v59 != 1 )
      goto LABEL_86;
    goto LABEL_68;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSortSelectMenu__SetAllButtonEnable(ServantSortSelectMenu_o *this, bool isEnable, const MethodInfo *method)
{
  struct UICommonButton_array *allDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9

  allDispSortButtons = this->fields.allDispSortButtons;
  if ( !allDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)allDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      allDispSortButtons = v4->fields.allDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8A = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  __int64 v6; // x21
  int max_length; // w9

  buddyDispSortButtons = this->fields.buddyDispSortButtons;
  if ( !buddyDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)buddyDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      buddyDispSortButtons = v4->fields.buddyDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8C = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  int kind; // w8
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_596BA91 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596BA91 = 1;
  }
  kind = v2->fields.kind;
  if ( kind <= 5 )
  {
    if ( kind != 3 )
    {
      if ( kind != 4 )
        goto LABEL_15;
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  if ( kind == 6 )
  {
LABEL_12:
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSortBtnSprite;
      if ( this )
        goto LABEL_17;
    }
LABEL_21:
    sub_2213CDC(this, method);
  }
  if ( kind == 8 )
  {
LABEL_9:
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSort2BtnSprite;
      if ( this )
        goto LABEL_17;
    }
    goto LABEL_21;
  }
LABEL_15:
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_21;
  this = (ServantSortSelectMenu_o *)v2->fields.smartChoiceBtnSprite;
  if ( !this )
    goto LABEL_21;
LABEL_17:
  if ( operationSortInfo->fields.isChoiceSort )
    v5 = &StringLiteral_18275/*"btn_on"*/;
  else
    v5 = &StringLiteral_18274/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSortSelectMenu__SetCommandCodeButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *commandCodeDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9

  commandCodeDispSortButtons = this->fields.commandCodeDispSortButtons;
  if ( !commandCodeDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)commandCodeDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      commandCodeDispSortButtons = v4->fields.commandCodeDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8F = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  __int64 v6; // x21
  int max_length; // w9

  costumeDispSortButtons = this->fields.costumeDispSortButtons;
  if ( !costumeDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)costumeDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      costumeDispSortButtons = v4->fields.costumeDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8E = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  const MethodInfo *v6; // x2
  int32_t kind; // w8

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0),
        (decideButton = this->fields.cancelButton) == 0) )
  {
    sub_2213CDC(decideButton, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  kind = this->fields.kind;
  if ( kind <= 3 )
  {
    if ( kind > 1 )
    {
      if ( kind == 2 )
      {
LABEL_16:
        ServantSortSelectMenu__SetShortButtonEnable(this, isEnable, v6);
        return;
      }
    }
    else if ( (unsigned int)kind >= 2 )
    {
      return;
    }
    ServantSortSelectMenu__SetAllButtonEnable(this, isEnable, v6);
    return;
  }
  if ( kind <= 5 )
  {
    if ( kind != 4 )
    {
      ServantSortSelectMenu__SetCostumeButtonEnable(this, isEnable, v6);
      return;
    }
    goto LABEL_16;
  }
  switch ( kind )
  {
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonEnable(this, isEnable, v6);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonEnable(this, isEnable, v6);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonEnable(this, isEnable, v6);
      break;
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
  __int64 v6; // x21
  int max_length; // w9

  fatigueDispSortButtons = this->fields.fatigueDispSortButtons;
  if ( !fatigueDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)fatigueDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      fatigueDispSortButtons = v4->fields.fatigueDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8B = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  __int64 v6; // x21
  int max_length; // w9

  normalSortButtons = this->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)normalSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      normalSortButtons = v4->fields.normalSortButtons;
      ++v6;
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
  if ( (byte_596BA89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA89 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(normalSortButtons->max_length) )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(normalSortSprites->max_length) )
        sub_2213CE4(this);
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
                                              (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  __int64 v6; // x21
  int max_length; // w9

  shortDispSortButtons = this->fields.shortDispSortButtons;
  if ( !shortDispSortButtons )
LABEL_7:
    sub_2213CDC(this, isEnable);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (ServantSortSelectMenu_o *)shortDispSortButtons->m_Items[v6];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      shortDispSortButtons = v4->fields.shortDispSortButtons;
      ++v6;
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
  if ( (byte_596BA8D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BA8D = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
                                            (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
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
  if ( (byte_596BA90 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596BA90 = 1;
  }
  operationSortInfo = v2->fields.operationSortInfo;
  if ( v2->fields.kind == 5 )
  {
    if ( !operationSortInfo )
      goto LABEL_13;
    this = (ServantSortSelectMenu_o *)v2->fields.costumeSmartSortBtnSprite;
    if ( !this )
      goto LABEL_13;
  }
  else if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartSortBtnSprite) == 0 )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  else
    v4 = &StringLiteral_18274/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


void ServantSortSelectMenu__add_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantSortSelectMenu_o *v11; // x0
  ServantSortSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BA7B & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_596BA7B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v6->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantSortSelectMenu_o *)sub_221405C(v6, ServantSortSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ServantSortSelectMenu__get_closeBtnPath(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_596BAAB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596BAAB = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void ServantSortSelectMenu__remove_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596BA7C & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_596BA7C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v6->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, ServantSortSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantSortSelectMenu__DeleteContinueData(v11);
}


void ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2002ADC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002A94;
}


System_IAsyncResult_o *ServantSortSelectMenu_CallbackFunc__BeginInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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