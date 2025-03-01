void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ListViewSort_o *v13; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  ListViewSort_o *v21; // x19
  struct ServantSortSelectMenu_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BF95CA & 1) == 0 )
  {
    sub_1C2E12C(&ListViewSort_TypeInfo, v1);
    sub_1C2E12C(&ServantSortSelectMenu_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_12899/*"ServantSortSelect1"*/, v3);
    sub_1C2E12C(&StringLiteral_12900/*"ServantSortSelect2"*/, v4);
    sub_1C2E12C(&StringLiteral_12901/*"ServantSortSelect4"*/, v5);
    byte_4BF95CA = 1;
  }
  v6 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v6, (System_String_o *)StringLiteral_12899/*"ServantSortSelect1"*/, 3, 0, 0LL);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v6;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantSortSelectMenu_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v13, (System_String_o *)StringLiteral_12900/*"ServantSortSelect2"*/, 3, 0, 0LL);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v13;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->commonServantEquipSortInfo,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v21, (System_String_o *)StringLiteral_12901/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v22 = ServantSortSelectMenu_TypeInfo->static_fields;
  v22->commandCodeSortInfo = v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v22->commandCodeSortInfo, (int64_t)v21, v23, v24, v25, v26, v27, v28);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  _QWORD *v15; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  System_Collections_Generic_List_T__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _QWORD *v38; // x8
  int32_t *v39; // x25
  struct System_Object_array *v40; // x9
  __int64 v41; // x10
  int32_t *v42; // x24
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  System_Collections_Generic_List_T__o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _QWORD *v62; // x8
  int32_t *v63; // x25
  struct System_Object_array *v64; // x9
  __int64 v65; // x10
  int32_t *v66; // x24
  __int64 v67; // x10
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
  __int64 v78; // x10
  System_Collections_Generic_List_T__o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x9
  _QWORD *v87; // x8
  __int64 v88; // x10
  __int64 v89; // x10
  __int64 v90; // x10
  __int64 v91; // x10
  __int64 v92; // x10
  __int64 v93; // x10
  __int64 v94; // x10
  __int64 v95; // x10
  __int64 v96; // x10
  __int64 v97; // x10
  System_Collections_Generic_List_T__o *v98; // x20
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct System_Object_array *v105; // x9
  _QWORD *v106; // x8
  __int64 v107; // x10
  __int64 v108; // x10
  __int64 v109; // x10
  __int64 v110; // x10
  __int64 v111; // x10
  __int64 v112; // x10
  __int64 v113; // x10
  __int64 v114; // x10
  System_Collections_Generic_List_T__o *v115; // x20
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct System_Object_array *v122; // x9
  _QWORD *v123; // x8
  __int64 v124; // x10
  __int64 v125; // x10
  __int64 v126; // x10
  __int64 v127; // x10
  __int64 v128; // x10
  __int64 v129; // x10
  __int64 v130; // x10
  __int64 v131; // x10
  System_Collections_Generic_List_T__o *v132; // x20
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x10
  __int64 v143; // x10

  if ( (byte_4BF95C9 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v5);
    byte_4BF95C9 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v6 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v6 )
    goto LABEL_221;
  v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      10,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 10;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      4,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 4;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      7,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 7;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      5,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 5;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      6,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 6;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      15,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 15;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      16,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 16;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 2;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      14,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 14;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 1;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      8,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v6;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.servantBaseSelectList,
    (int64_t)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v31 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v31,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v31 )
    goto LABEL_221;
  v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v39 = &v31->fields._version;
  ++v31->fields._version;
  v40 = v31->fields._items;
  v42 = &v31->fields._size;
  v41 = v31->fields._size;
  if ( !v40 )
    goto LABEL_221;
  if ( (unsigned int)v41 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      3,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v41 + 1;
    *((_DWORD *)v40->m_Items + v41) = 3;
    ++*v39;
  }
  v43 = *v42;
  if ( (unsigned int)v43 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      10,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v43 + 1;
    *((_DWORD *)v40->m_Items + v43) = 10;
    ++*v39;
  }
  v44 = *v42;
  if ( (unsigned int)v44 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      4,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v44 + 1;
    *((_DWORD *)v40->m_Items + v44) = 4;
    ++*v39;
  }
  v45 = *v42;
  if ( (unsigned int)v45 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      7,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v45 + 1;
    *((_DWORD *)v40->m_Items + v45) = 7;
    ++*v39;
  }
  v46 = *v42;
  if ( (unsigned int)v46 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      5,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v46 + 1;
    *((_DWORD *)v40->m_Items + v46) = 5;
    ++*v39;
  }
  v47 = *v42;
  if ( (unsigned int)v47 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      6,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v47 + 1;
    *((_DWORD *)v40->m_Items + v47) = 6;
    ++*v39;
  }
  v48 = *v42;
  if ( (unsigned int)v48 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      15,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v48 + 1;
    *((_DWORD *)v40->m_Items + v48) = 15;
    ++*v39;
  }
  v49 = *v42;
  if ( (unsigned int)v49 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      16,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v49 + 1;
    *((_DWORD *)v40->m_Items + v49) = 16;
    ++*v39;
  }
  v50 = *v42;
  if ( (unsigned int)v50 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v50 + 1;
    *((_DWORD *)v40->m_Items + v50) = 2;
    ++*v39;
  }
  v51 = *v42;
  if ( (unsigned int)v51 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      14,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v51 + 1;
    *((_DWORD *)v40->m_Items + v51) = 14;
    ++*v39;
  }
  v52 = *v42;
  if ( (unsigned int)v52 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v52 + 1;
    *((_DWORD *)v40->m_Items + v52) = 1;
    ++*v39;
  }
  v53 = *v42;
  if ( (unsigned int)v53 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      8,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    v40 = v31->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v31->fields._version;
    if ( !v40 )
      goto LABEL_221;
  }
  else
  {
    *v42 = v53 + 1;
    *((_DWORD *)v40->m_Items + v53) = 8;
    ++*v39;
  }
  v54 = *v42;
  if ( (unsigned int)v54 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      25,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    *v42 = v54 + 1;
    *((_DWORD *)v40->m_Items + v54) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v31;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.fatigureSelectList,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v55 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v55,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v55 )
    goto LABEL_221;
  v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v63 = &v55->fields._version;
  ++v55->fields._version;
  v64 = v55->fields._items;
  v66 = &v55->fields._size;
  v65 = v55->fields._size;
  if ( !v64 )
    goto LABEL_221;
  if ( (unsigned int)v65 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      3,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v65 + 1;
    *((_DWORD *)v64->m_Items + v65) = 3;
    ++*v63;
  }
  v67 = *v66;
  if ( (unsigned int)v67 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      10,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v67 + 1;
    *((_DWORD *)v64->m_Items + v67) = 10;
    ++*v63;
  }
  v68 = *v66;
  if ( (unsigned int)v68 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      4,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v68 + 1;
    *((_DWORD *)v64->m_Items + v68) = 4;
    ++*v63;
  }
  v69 = *v66;
  if ( (unsigned int)v69 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      7,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v69 + 1;
    *((_DWORD *)v64->m_Items + v69) = 7;
    ++*v63;
  }
  v70 = *v66;
  if ( (unsigned int)v70 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      5,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v70 + 1;
    *((_DWORD *)v64->m_Items + v70) = 5;
    ++*v63;
  }
  v71 = *v66;
  if ( (unsigned int)v71 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      6,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v71 + 1;
    *((_DWORD *)v64->m_Items + v71) = 6;
    ++*v63;
  }
  v72 = *v66;
  if ( (unsigned int)v72 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      15,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v72 + 1;
    *((_DWORD *)v64->m_Items + v72) = 15;
    ++*v63;
  }
  v73 = *v66;
  if ( (unsigned int)v73 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      16,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v73 + 1;
    *((_DWORD *)v64->m_Items + v73) = 16;
    ++*v63;
  }
  v74 = *v66;
  if ( (unsigned int)v74 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v74 + 1;
    *((_DWORD *)v64->m_Items + v74) = 2;
    ++*v63;
  }
  v75 = *v66;
  if ( (unsigned int)v75 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      14,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v75 + 1;
    *((_DWORD *)v64->m_Items + v75) = 14;
    ++*v63;
  }
  v76 = *v66;
  if ( (unsigned int)v76 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v76 + 1;
    *((_DWORD *)v64->m_Items + v76) = 1;
    ++*v63;
  }
  v77 = *v66;
  if ( (unsigned int)v77 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      8,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    v64 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v55->fields._version;
    if ( !v64 )
      goto LABEL_221;
  }
  else
  {
    *v66 = v77 + 1;
    *((_DWORD *)v64->m_Items + v77) = 8;
    ++*v63;
  }
  v78 = *v66;
  if ( (unsigned int)v78 >= v64->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v55,
      28,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    *v66 = v78 + 1;
    *((_DWORD *)v64->m_Items + v78) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v55;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.buddySelectList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v79 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v79,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v79 )
    goto LABEL_221;
  v86 = v79->fields._items;
  v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v79->fields._version;
  if ( !v86 )
    goto LABEL_221;
  v88 = v79->fields._size;
  if ( (unsigned int)v88 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      3,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v88 + 1;
    *((_DWORD *)v86->m_Items + v88) = 3;
    ++v79->fields._version;
  }
  v89 = v79->fields._size;
  if ( (unsigned int)v89 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      10,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v89 + 1;
    *((_DWORD *)v86->m_Items + v89) = 10;
    ++v79->fields._version;
  }
  v90 = v79->fields._size;
  if ( (unsigned int)v90 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      4,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v90 + 1;
    *((_DWORD *)v86->m_Items + v90) = 4;
    ++v79->fields._version;
  }
  v91 = v79->fields._size;
  if ( (unsigned int)v91 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      7,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v91 + 1;
    *((_DWORD *)v86->m_Items + v91) = 7;
    ++v79->fields._version;
  }
  v92 = v79->fields._size;
  if ( (unsigned int)v92 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v92 + 1;
    *((_DWORD *)v86->m_Items + v92) = 2;
    ++v79->fields._version;
  }
  v93 = v79->fields._size;
  if ( (unsigned int)v93 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      5,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v93 + 1;
    *((_DWORD *)v86->m_Items + v93) = 5;
    ++v79->fields._version;
  }
  v94 = v79->fields._size;
  if ( (unsigned int)v94 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      6,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v94 + 1;
    *((_DWORD *)v86->m_Items + v94) = 6;
    ++v79->fields._version;
  }
  v95 = v79->fields._size;
  if ( (unsigned int)v95 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      14,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v95 + 1;
    *((_DWORD *)v86->m_Items + v95) = 14;
    ++v79->fields._version;
  }
  v96 = v79->fields._size;
  if ( (unsigned int)v96 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v79->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v79->fields._size = v96 + 1;
    *((_DWORD *)v86->m_Items + v96) = 1;
    ++v79->fields._version;
  }
  v97 = v79->fields._size;
  if ( (unsigned int)v97 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v79,
      8,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v79->fields._size = v97 + 1;
    *((_DWORD *)v86->m_Items + v97) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v79;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.servantSelectList, (int64_t)v79, v80, v81, v82, v83, v84, v85);
  v98 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v98,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v98 )
    goto LABEL_221;
  v105 = v98->fields._items;
  v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v98->fields._version;
  if ( !v105 )
    goto LABEL_221;
  v107 = v98->fields._size;
  if ( (unsigned int)v107 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      3,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v107 + 1;
    *((_DWORD *)v105->m_Items + v107) = 3;
    ++v98->fields._version;
  }
  v108 = v98->fields._size;
  if ( (unsigned int)v108 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      5,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v108 + 1;
    *((_DWORD *)v105->m_Items + v108) = 5;
    ++v98->fields._version;
  }
  v109 = v98->fields._size;
  if ( (unsigned int)v109 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      6,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v109 + 1;
    *((_DWORD *)v105->m_Items + v109) = 6;
    ++v98->fields._version;
  }
  v110 = v98->fields._size;
  if ( (unsigned int)v110 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      7,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v110 + 1;
    *((_DWORD *)v105->m_Items + v110) = 7;
    ++v98->fields._version;
  }
  v111 = v98->fields._size;
  if ( (unsigned int)v111 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v111 + 1;
    *((_DWORD *)v105->m_Items + v111) = 2;
    ++v98->fields._version;
  }
  v112 = v98->fields._size;
  if ( (unsigned int)v112 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      14,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v112 + 1;
    *((_DWORD *)v105->m_Items + v112) = 14;
    ++v98->fields._version;
  }
  v113 = v98->fields._size;
  if ( (unsigned int)v113 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v98->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v98->fields._version;
    if ( !v105 )
      goto LABEL_221;
  }
  else
  {
    v98->fields._size = v113 + 1;
    *((_DWORD *)v105->m_Items + v113) = 1;
    ++v98->fields._version;
  }
  v114 = v98->fields._size;
  if ( (unsigned int)v114 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v98,
      24,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v98->fields._size = v114 + 1;
    *((_DWORD *)v105->m_Items + v114) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v98;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.servantEquipSelectList,
    (int64_t)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v115 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v115,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v115 )
    goto LABEL_221;
  v122 = v115->fields._items;
  v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v115->fields._version;
  if ( !v122 )
    goto LABEL_221;
  v124 = v115->fields._size;
  if ( (unsigned int)v124 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      8,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v124 + 1;
    *((_DWORD *)v122->m_Items + v124) = 8;
    ++v115->fields._version;
  }
  v125 = v115->fields._size;
  if ( (unsigned int)v125 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      3,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v125 + 1;
    *((_DWORD *)v122->m_Items + v125) = 3;
    ++v115->fields._version;
  }
  v126 = v115->fields._size;
  if ( (unsigned int)v126 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      19,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v126 + 1;
    *((_DWORD *)v122->m_Items + v126) = 19;
    ++v115->fields._version;
  }
  v127 = v115->fields._size;
  if ( (unsigned int)v127 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      20,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v127 + 1;
    *((_DWORD *)v122->m_Items + v127) = 20;
    ++v115->fields._version;
  }
  v128 = v115->fields._size;
  if ( (unsigned int)v128 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      21,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v128 + 1;
    *((_DWORD *)v122->m_Items + v128) = 21;
    ++v115->fields._version;
  }
  v129 = v115->fields._size;
  if ( (unsigned int)v129 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      22,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v129 + 1;
    *((_DWORD *)v122->m_Items + v129) = 22;
    ++v115->fields._version;
  }
  v130 = v115->fields._size;
  if ( (unsigned int)v130 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      23,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    v122 = v115->fields._items;
    v123 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v115->fields._version;
    if ( !v122 )
      goto LABEL_221;
  }
  else
  {
    v115->fields._size = v130 + 1;
    *((_DWORD *)v122->m_Items + v130) = 23;
    ++v115->fields._version;
  }
  v131 = v115->fields._size;
  if ( (unsigned int)v131 >= v122->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
  }
  else
  {
    v115->fields._size = v131 + 1;
    *((_DWORD *)v122->m_Items + v131) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v115;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.servantCostumeSelectList,
    (int64_t)v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v132 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v132,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v132 )
    goto LABEL_221;
  v139 = v132->fields._items;
  v140 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v132->fields._version;
  if ( !v139 )
    goto LABEL_221;
  v141 = v132->fields._size;
  if ( (unsigned int)v141 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v132,
      2,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    v139 = v132->fields._items;
    v140 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v132->fields._version;
    if ( !v139 )
      goto LABEL_221;
  }
  else
  {
    v132->fields._size = v141 + 1;
    *((_DWORD *)v139->m_Items + v141) = 2;
    ++v132->fields._version;
  }
  v142 = v132->fields._size;
  if ( (unsigned int)v142 < v139->max_length )
  {
    v132->fields._size = v142 + 1;
    *((_DWORD *)v139->m_Items + v142) = 14;
    ++v132->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v132,
    14,
    *(const MethodInfo_36510B4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  v139 = v132->fields._items;
  v140 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v132->fields._version;
  if ( !v139 )
LABEL_221:
    sub_1C2E388(v7, v8);
LABEL_215:
  v143 = v132->fields._size;
  if ( (unsigned int)v143 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v132,
      1,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  }
  else
  {
    v132->fields._size = v143 + 1;
    *((_DWORD *)v139->m_Items + v143) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v132;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeSelectList,
    (int64_t)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1C2E0D0(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  ServantSortSelectMenu__Close_33344656(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_33344656(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4BF959D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_ServantSortSelectMenu_EndClose__, v5);
    byte_4BF959D = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4BF959B & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4BF959B = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1C2E388(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4BF959A & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4BF959A = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C2E388(0LL, v1);
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
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF959F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF959F = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(allDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(allDispObject, method);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        allDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                      operationSortInfo,
                                                      (int32_t)allDispObject,
                                                      0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)allDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitBuddyDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyDispObject; // x0
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF95A1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF95A1 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(buddyDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(buddyDispObject, method);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        buddyDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)buddyDispObject,
                                                        0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)buddyDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitCommandCodeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF95A5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF95A5 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(commandCodeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(commandCodeDispObject, method);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        commandCodeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                              operationSortInfo,
                                                              (int32_t)commandCodeDispObject,
                                                              0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)commandCodeDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitCostumeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *costumeDispObject; // x0
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF95A4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF95A4 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(costumeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(costumeDispObject, method);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        costumeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)costumeDispObject,
                                                          0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)costumeDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitFatigueDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF95A0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF95A0 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(fatigueDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(fatigueDispObject, method);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        fatigueDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          operationSortInfo,
                                                          (int32_t)fatigueDispObject,
                                                          0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)fatigueDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4BF9599 & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4BF9599 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C2E388(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *normalDispObject; // x0
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v5; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v8; // x21

  if ( (byte_4BF959E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF959E = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(normalDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(normalDispObject, method);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        normalDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                         operationSortInfo,
                                                         (int32_t)normalDispObject,
                                                         0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)normalDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitShortDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v4; // x1
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4BF95A2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4BF95A2 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(shortDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(shortDispObject, method);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
      if ( operationSortInfo )
      {
        shortDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        operationSortInfo,
                                                        (int32_t)shortDispObject,
                                                        0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)shortDispObject, 0LL);
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


void __fastcall ServantSortSelectMenu__InitShortDispButtons(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *servantEquipSelectList; // x0
  int32_t v9; // w0
  il2cpp_array_size_t v10; // w20
  char v11; // w21
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v13; // x20
  struct UICommonButton_array *v14; // x22
  int max_length; // w8
  unsigned int v16; // w23
  Il2CppClass **v17; // x8
  Il2CppObject *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v30; // x8
  int v31; // w9
  int v32; // w10
  int v33; // w22
  int32_t v34; // w21
  int v35; // w24
  int v36; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v41; // w27
  float v42; // s0
  float v43; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v45; // x0

  if ( (byte_4BF95A3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UICommonButton__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_UICommonButton__TypeInfo, v7);
    byte_4BF95A3 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v9 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_3651D30 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v9 != -1 )
  {
    v10 = v9;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)ListViewSort__get_IsWareHouseEquipList(
                                                                         (ListViewSort_o *)servantEquipSelectList,
                                                                         0LL);
      v11 = (char)servantEquipSelectList;
    }
    else
    {
      v11 = 0;
    }
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_43;
    if ( v10 >= shortDispSortButtons->max_length )
      goto LABEL_44;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)shortDispSortButtons->m_Items[v10];
    if ( !servantEquipSelectList )
      goto LABEL_43;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)servantEquipSelectList,
                                                                       0LL);
    if ( !servantEquipSelectList )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v11 & 1, 0LL);
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v14 = this->fields.shortDispSortButtons;
  if ( !v14 )
    goto LABEL_43;
  max_length = v14->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = &v14->obj.klass + (int)v16;
      v18 = (Il2CppObject *)v17[4];
      if ( !v18 )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)v17[4],
                                                                         0LL);
      if ( !servantEquipSelectList )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)servantEquipSelectList,
                                                                         0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_43;
        items = v13->fields._items;
        v26 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v18,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        }
      }
      max_length = v14->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1C2E390(servantEquipSelectList, method);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_44;
  v30 = shortDispSortSprites->m_Items[0];
  if ( !v30 || !v13 )
LABEL_43:
    sub_1C2E388(servantEquipSelectList, method);
  v31 = v13->fields._size;
  v32 = v31 + 3;
  if ( v31 >= 0 )
    v32 = v13->fields._size;
  if ( v31 >= 1 )
  {
    v33 = 0;
    v34 = 0;
    v35 = v32 >> 2;
    v36 = (v13->fields._size & 3) - 1;
    mWidth = (float)v30->fields.mWidth;
    mHeight = (float)v30->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v41 = v33 >= v35 ? v36 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v13,
                                                                         v34,
                                                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v42 = (float)(v34 - 4 * v33) + (float)((float)v41 * -0.5);
      v43 = (float)(v42 * mWidth) + (float)(v42 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v43, 0LL);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v13,
                                                                         v34,
                                                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, (float)v33 * (float)-(float)(y + mHeight), 0LL);
      if ( (~v34++ & 3) == 0 )
        ++v33;
      if ( v34 >= v13->fields._size )
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

  if ( (byte_4BF95B0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickCancel__, method);
    byte_4BF95B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
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

  if ( (byte_4BF95C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickChoiceSort__, method);
    byte_4BF95C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95AF & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickDecide__, method);
    byte_4BF95AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1C2E388(baseSortInfo, v5);
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

  if ( (byte_4BF95B4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickEventOrder__, method);
    byte_4BF95B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickHelpClose__, v3);
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickHelp__, v4);
    byte_4BF95B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickHelp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1C2E388(helpButton, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v11, v10, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 32;
        goto LABEL_15;
      }
    }
    v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
    sub_1C2E388(helpButton, method);
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

  if ( (byte_4BF95C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSmartSort__, method);
    byte_4BF95C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BE & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__, method);
    byte_4BF95BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BD & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__, method);
    byte_4BF95BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BB & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortAmount__, method);
    byte_4BF95BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortAttack__, method);
    byte_4BF95B9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortBuddy__, method);
    byte_4BF95C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortClass__, method);
    byte_4BF95B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BA & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortCost__, method);
    byte_4BF95BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BF & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortCostume__, method);
    byte_4BF95BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortCreate__, method);
    byte_4BF95B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95BC & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortFriendShip__, method);
    byte_4BF95BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__, method);
    byte_4BF95C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortHp__, method);
    byte_4BF95B8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortLevel__, method);
    byte_4BF95B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortLimitCount__, method);
    byte_4BF95C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__, method);
    byte_4BF95C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__, method);
    byte_4BF95C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortNpLevel__, method);
    byte_4BF95B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95B5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortRarity__, method);
    byte_4BF95B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BF95C4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__, method);
    byte_4BF95C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2E388(v5, v6);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v24; // x1
  __int64 v25; // x1
  int64_t v26; // x2
  char v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool isChoiceSort; // w8
  ListViewSort_o *v33; // x21
  ListViewSort_o *v34; // x22
  int64_t v35; // x2
  char v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
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
  __int64 *v55; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  int32_t v62; // w8
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  int32_t v65; // w8
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  int32_t v70; // w1
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x1
  System_Action_o *v78; // x20
  int32_t v79; // w20
  ServantSortSelectMenu_c *v80; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1

  if ( (byte_4BF959C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&ListViewSort_TypeInfo, v13);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v14);
    sub_1C2E12C(&Method_ServantSortSelectMenu_EndOpen__, v15);
    sub_1C2E12C(&ServantSortSelectMenu_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_12418/*"SORT_WINDOW_TITLE"*/, v17);
    sub_1C2E12C(&StringLiteral_12410/*"SMART_SORT_DETAIL"*/, v18);
    sub_1C2E12C(&StringLiteral_12411/*"SMART_SORT_NAME"*/, v19);
    sub_1C2E12C(&StringLiteral_11898/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_1C2E12C(&StringLiteral_3506/*"CHOICE_SORT_NAME"*/, v21);
    sub_1C2E12C(&StringLiteral_11902/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_1C2E12C(&StringLiteral_3505/*"CHOICE_SORT_DETAIL_REVERSE"*/, v23);
    sub_1C2E12C(&StringLiteral_12417/*"SORT_WINDOW_DETAIL"*/, v24);
    sub_1C2E12C(&StringLiteral_3504/*"CHOICE_SORT_DETAIL"*/, v25);
    byte_4BF959C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)sort,
      isChoiceReverse,
      (System_String_o *)callback,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    if ( !sort )
    {
      v79 = this->fields.kind;
      v80 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v80 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v80->static_fields->commonServantSortInfo;
      if ( v79 == 2 )
        ++p_commonServantSortInfo;
      v82 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)v82, v26, v27, v28, v29, v30, v31);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0LL);
        sub_1C2E388(v83, v84);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v26, v27, v28, v29, v30, v31);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v33 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v34 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
    ListViewSort___ctor_42115340(v34, v33, 0LL);
    this->fields.operationSortInfo = v34;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.operationSortInfo,
      (int64_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"SORT_WINDOW_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"SORT_WINDOW_DETAIL"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SMART_SORT_NAME"*/, 0LL);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SMART_SORT_NAME"*/, 0LL);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3506/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3506/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3506/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v55 = &StringLiteral_3505/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0LL);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0LL);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0LL);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v58);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v59);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v67);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v59);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v60);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v61);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v62 = this->fields.kind;
                  if ( v62 == 3 )
                    goto LABEL_69;
                  if ( v62 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v59);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v63);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v64);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v65 = this->fields.kind;
                  if ( v65 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      v70 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v70, 0LL, 0, 0, 0, 0, 0LL);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v65 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v78 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                      System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v66);
LABEL_65:
                      v70 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v59);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v68);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v69);
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
                  v70 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v59);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v71);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v72);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v59);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v73);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v74);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v75);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v59);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v76);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v77);
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
        sub_1C2E388(baseSortInfo, v41);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v55 = &StringLiteral_3504/*"CHOICE_SORT_DETAIL"*/;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95A7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95A7 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantBaseSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = allDispSortSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          allDispSortSprites = v2->fields.allDispSortSprites;
          ++v6;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95A9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95A9 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.buddySelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = buddyDispSortSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          buddyDispSortSprites = v2->fields.buddyDispSortSprites;
          ++v6;
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
  if ( (byte_4BF95AE & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17834/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17833/*"btn_off"*/, v3);
    byte_4BF95AE = 1;
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
        sub_1C2E388(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v5 = &StringLiteral_17834/*"btn_on"*/;
      else
        v5 = &StringLiteral_17833/*"btn_off"*/;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95AC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95AC = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.commandCodeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = commandCodeDispSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          commandCodeDispSprites = v2->fields.commandCodeDispSprites;
          ++v6;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95AB & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95AB = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantCostumeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = costumeDispSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          costumeDispSprites = v2->fields.costumeDispSprites;
          ++v6;
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
    sub_1C2E388(decideButton, isEnable);
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95A8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95A8 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.fatigureSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = fatigueDispSortSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
          ++v6;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v6; // x20
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95A6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95A6 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v6 >= normalSortSprites->max_length )
        sub_1C2E390(this, method);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (ServantSortSelectMenu_o *)v2->fields.servantSelectList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v10 = normalSortSprites->m_Items[v6];
          this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)this,
                                              v6,
                                              (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v10 )
          {
            v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
            UISprite__set_spriteName(v10, *v11, 0LL);
            normalSortButtons = v2->fields.normalSortButtons;
            ++v6;
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
    sub_1C2E388(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2E390(this, isEnable);
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
  ServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4BF95AA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1C2E12C(&StringLiteral_17775/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17774/*"btn_bg_03"*/, v4);
    byte_4BF95AA = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1C2E388(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v2->fields.servantEquipSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v10 = shortDispSortSprites->m_Items[v6];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_3650DC4 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17774/*"btn_bg_03"*/ : &StringLiteral_17775/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          shortDispSortSprites = v2->fields.shortDispSortSprites;
          ++v6;
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
  if ( (byte_4BF95AD & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17834/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1C2E12C(&StringLiteral_17833/*"btn_off"*/, v3);
    byte_4BF95AD = 1;
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
      sub_1C2E388(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v5 = &StringLiteral_17834/*"btn_on"*/;
  else
    v5 = &StringLiteral_17833/*"btn_off"*/;
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

  if ( (byte_4BF9597 & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BF9597 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1C2E648(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BF95C8 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15922/*"Window/CancelButton"*/, method);
    byte_4BF95C8 = 1;
  }
  return (System_String_o *)StringLiteral_15922/*"Window/CancelButton"*/;
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

  if ( (byte_4BF9598 & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BF9598 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2E648(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A69ED8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A69E90;
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
  if ( (byte_4BF95CB & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, result);
    byte_4BF95CB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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