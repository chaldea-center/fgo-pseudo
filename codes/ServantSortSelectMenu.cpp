void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ListViewSort_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ListViewSort_o *v16; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ListViewSort_o *v21; // x19
  struct ServantSortSelectMenu_StaticFields *v22; // x0

  if ( (byte_4B11A0C & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12801/*"ServantSortSelect1"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12802/*"ServantSortSelect2"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12803/*"ServantSortSelect4"*/, v10, v11);
    byte_4B11A0C = 1;
  }
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v12, (System_String_o *)StringLiteral_12801/*"ServantSortSelect1"*/, 3, 0, 0LL);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v12;
  sub_1BCA784(ServantSortSelectMenu_TypeInfo->static_fields, v12);
  v16 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v13, v14, v15);
  ListViewSort___ctor_41480716(v16, (System_String_o *)StringLiteral_12802/*"ServantSortSelect2"*/, 3, 0, 0LL);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v16;
  sub_1BCA784(&static_fields->commonServantEquipSortInfo, v16);
  v21 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v18, v19, v20);
  ListViewSort___ctor_41480716(v21, (System_String_o *)StringLiteral_12803/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v22 = ServantSortSelectMenu_TypeInfo->static_fields;
  v22->commandCodeSortInfo = v21;
  sub_1BCA784(&v22->commandCodeSortInfo, v21);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_T__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v19; // x10
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_T__o *v33; // x20
  _QWORD *v34; // x8
  int32_t *v35; // x25
  struct System_Object_array *v36; // x9
  __int64 v37; // x10
  int32_t *v38; // x24
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
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_T__o *v54; // x20
  _QWORD *v55; // x8
  int32_t *v56; // x25
  struct System_Object_array *v57; // x9
  __int64 v58; // x10
  int32_t *v59; // x24
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
  __int64 v71; // x10
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_T__o *v75; // x20
  struct System_Object_array *v76; // x9
  _QWORD *v77; // x8
  __int64 v78; // x10
  __int64 v79; // x10
  __int64 v80; // x10
  __int64 v81; // x10
  __int64 v82; // x10
  __int64 v83; // x10
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  __int64 v87; // x10
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Collections_Generic_List_T__o *v91; // x20
  struct System_Object_array *v92; // x9
  _QWORD *v93; // x8
  __int64 v94; // x10
  __int64 v95; // x10
  __int64 v96; // x10
  __int64 v97; // x10
  __int64 v98; // x10
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  System_Collections_Generic_List_T__o *v105; // x20
  struct System_Object_array *v106; // x9
  _QWORD *v107; // x8
  __int64 v108; // x10
  __int64 v109; // x10
  __int64 v110; // x10
  __int64 v111; // x10
  __int64 v112; // x10
  __int64 v113; // x10
  __int64 v114; // x10
  __int64 v115; // x10
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Collections_Generic_List_T__o *v119; // x20
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  __int64 v123; // x10
  __int64 v124; // x10
  __int64 v125; // x1

  if ( (byte_4B11A0B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v9, v10);
    byte_4B11A0B = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v11 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v11,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v11 )
    goto LABEL_221;
  v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  p_version = &v11->fields._version;
  ++v11->fields._version;
  items = v11->fields._items;
  p_size = &v11->fields._size;
  size = v11->fields._size;
  if ( !items )
    goto LABEL_221;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 3;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      10,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 10;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 4;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 7;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 5;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 6;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      15,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 15;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      16,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 16;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 2;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 14;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v11->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 1;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v11,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v11;
  sub_1BCA784(&this->fields.servantBaseSelectList, v11);
  v33 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
  System_Collections_Generic_List_Int32Enum____ctor(
    v33,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v33 )
    goto LABEL_221;
  v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v35 = &v33->fields._version;
  ++v33->fields._version;
  v36 = v33->fields._items;
  v38 = &v33->fields._size;
  v37 = v33->fields._size;
  if ( !v36 )
    goto LABEL_221;
  if ( (unsigned int)v37 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v37 + 1;
    *((_DWORD *)v36->m_Items + v37) = 3;
    ++*v35;
  }
  v39 = *v38;
  if ( (unsigned int)v39 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      10,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v39 + 1;
    *((_DWORD *)v36->m_Items + v39) = 10;
    ++*v35;
  }
  v40 = *v38;
  if ( (unsigned int)v40 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v40 + 1;
    *((_DWORD *)v36->m_Items + v40) = 4;
    ++*v35;
  }
  v41 = *v38;
  if ( (unsigned int)v41 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v41 + 1;
    *((_DWORD *)v36->m_Items + v41) = 7;
    ++*v35;
  }
  v42 = *v38;
  if ( (unsigned int)v42 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v42 + 1;
    *((_DWORD *)v36->m_Items + v42) = 5;
    ++*v35;
  }
  v43 = *v38;
  if ( (unsigned int)v43 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v43 + 1;
    *((_DWORD *)v36->m_Items + v43) = 6;
    ++*v35;
  }
  v44 = *v38;
  if ( (unsigned int)v44 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      15,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v44 + 1;
    *((_DWORD *)v36->m_Items + v44) = 15;
    ++*v35;
  }
  v45 = *v38;
  if ( (unsigned int)v45 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      16,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v45 + 1;
    *((_DWORD *)v36->m_Items + v45) = 16;
    ++*v35;
  }
  v46 = *v38;
  if ( (unsigned int)v46 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v46 + 1;
    *((_DWORD *)v36->m_Items + v46) = 2;
    ++*v35;
  }
  v47 = *v38;
  if ( (unsigned int)v47 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v47 + 1;
    *((_DWORD *)v36->m_Items + v47) = 14;
    ++*v35;
  }
  v48 = *v38;
  if ( (unsigned int)v48 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v48 + 1;
    *((_DWORD *)v36->m_Items + v48) = 1;
    ++*v35;
  }
  v49 = *v38;
  if ( (unsigned int)v49 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v33->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v33->fields._version;
    if ( !v36 )
      goto LABEL_221;
  }
  else
  {
    *v38 = v49 + 1;
    *((_DWORD *)v36->m_Items + v49) = 8;
    ++*v35;
  }
  v50 = *v38;
  if ( (unsigned int)v50 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      25,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    *v38 = v50 + 1;
    *((_DWORD *)v36->m_Items + v50) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v33;
  sub_1BCA784(&this->fields.fatigureSelectList, v33);
  v54 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  v51,
                                                  v52,
                                                  v53);
  System_Collections_Generic_List_Int32Enum____ctor(
    v54,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v54 )
    goto LABEL_221;
  v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v56 = &v54->fields._version;
  ++v54->fields._version;
  v57 = v54->fields._items;
  v59 = &v54->fields._size;
  v58 = v54->fields._size;
  if ( !v57 )
    goto LABEL_221;
  if ( (unsigned int)v58 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v58 + 1;
    *((_DWORD *)v57->m_Items + v58) = 3;
    ++*v56;
  }
  v60 = *v59;
  if ( (unsigned int)v60 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      10,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v60 + 1;
    *((_DWORD *)v57->m_Items + v60) = 10;
    ++*v56;
  }
  v61 = *v59;
  if ( (unsigned int)v61 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v61 + 1;
    *((_DWORD *)v57->m_Items + v61) = 4;
    ++*v56;
  }
  v62 = *v59;
  if ( (unsigned int)v62 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v62 + 1;
    *((_DWORD *)v57->m_Items + v62) = 7;
    ++*v56;
  }
  v63 = *v59;
  if ( (unsigned int)v63 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v63 + 1;
    *((_DWORD *)v57->m_Items + v63) = 5;
    ++*v56;
  }
  v64 = *v59;
  if ( (unsigned int)v64 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v64 + 1;
    *((_DWORD *)v57->m_Items + v64) = 6;
    ++*v56;
  }
  v65 = *v59;
  if ( (unsigned int)v65 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      15,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v65 + 1;
    *((_DWORD *)v57->m_Items + v65) = 15;
    ++*v56;
  }
  v66 = *v59;
  if ( (unsigned int)v66 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      16,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v66 + 1;
    *((_DWORD *)v57->m_Items + v66) = 16;
    ++*v56;
  }
  v67 = *v59;
  if ( (unsigned int)v67 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v67 + 1;
    *((_DWORD *)v57->m_Items + v67) = 2;
    ++*v56;
  }
  v68 = *v59;
  if ( (unsigned int)v68 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v68 + 1;
    *((_DWORD *)v57->m_Items + v68) = 14;
    ++*v56;
  }
  v69 = *v59;
  if ( (unsigned int)v69 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v69 + 1;
    *((_DWORD *)v57->m_Items + v69) = 1;
    ++*v56;
  }
  v70 = *v59;
  if ( (unsigned int)v70 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    v57 = v54->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_221;
  }
  else
  {
    *v59 = v70 + 1;
    *((_DWORD *)v57->m_Items + v70) = 8;
    ++*v56;
  }
  v71 = *v59;
  if ( (unsigned int)v71 >= v57->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v54,
      28,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    *v59 = v71 + 1;
    *((_DWORD *)v57->m_Items + v71) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v54;
  sub_1BCA784(&this->fields.buddySelectList, v54);
  v75 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  v72,
                                                  v73,
                                                  v74);
  System_Collections_Generic_List_Int32Enum____ctor(
    v75,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v75 )
    goto LABEL_221;
  v76 = v75->fields._items;
  v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v75->fields._version;
  if ( !v76 )
    goto LABEL_221;
  v78 = v75->fields._size;
  if ( (unsigned int)v78 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v78 + 1;
    *((_DWORD *)v76->m_Items + v78) = 3;
    ++v75->fields._version;
  }
  v79 = v75->fields._size;
  if ( (unsigned int)v79 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      10,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v79 + 1;
    *((_DWORD *)v76->m_Items + v79) = 10;
    ++v75->fields._version;
  }
  v80 = v75->fields._size;
  if ( (unsigned int)v80 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v80 + 1;
    *((_DWORD *)v76->m_Items + v80) = 4;
    ++v75->fields._version;
  }
  v81 = v75->fields._size;
  if ( (unsigned int)v81 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v81 + 1;
    *((_DWORD *)v76->m_Items + v81) = 7;
    ++v75->fields._version;
  }
  v82 = v75->fields._size;
  if ( (unsigned int)v82 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v82 + 1;
    *((_DWORD *)v76->m_Items + v82) = 2;
    ++v75->fields._version;
  }
  v83 = v75->fields._size;
  if ( (unsigned int)v83 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v83 + 1;
    *((_DWORD *)v76->m_Items + v83) = 5;
    ++v75->fields._version;
  }
  v84 = v75->fields._size;
  if ( (unsigned int)v84 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v84 + 1;
    *((_DWORD *)v76->m_Items + v84) = 6;
    ++v75->fields._version;
  }
  v85 = v75->fields._size;
  if ( (unsigned int)v85 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v85 + 1;
    *((_DWORD *)v76->m_Items + v85) = 14;
    ++v75->fields._version;
  }
  v86 = v75->fields._size;
  if ( (unsigned int)v86 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v75->fields._version;
    if ( !v76 )
      goto LABEL_221;
  }
  else
  {
    v75->fields._size = v86 + 1;
    *((_DWORD *)v76->m_Items + v86) = 1;
    ++v75->fields._version;
  }
  v87 = v75->fields._size;
  if ( (unsigned int)v87 >= v76->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v75,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v75->fields._size = v87 + 1;
    *((_DWORD *)v76->m_Items + v87) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v75;
  sub_1BCA784(&this->fields.servantSelectList, v75);
  v91 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  v88,
                                                  v89,
                                                  v90);
  System_Collections_Generic_List_Int32Enum____ctor(
    v91,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v91 )
    goto LABEL_221;
  v92 = v91->fields._items;
  v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v91->fields._version;
  if ( !v92 )
    goto LABEL_221;
  v94 = v91->fields._size;
  if ( (unsigned int)v94 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v94 + 1;
    *((_DWORD *)v92->m_Items + v94) = 3;
    ++v91->fields._version;
  }
  v95 = v91->fields._size;
  if ( (unsigned int)v95 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v95 + 1;
    *((_DWORD *)v92->m_Items + v95) = 5;
    ++v91->fields._version;
  }
  v96 = v91->fields._size;
  if ( (unsigned int)v96 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v96 + 1;
    *((_DWORD *)v92->m_Items + v96) = 6;
    ++v91->fields._version;
  }
  v97 = v91->fields._size;
  if ( (unsigned int)v97 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v97 + 1;
    *((_DWORD *)v92->m_Items + v97) = 7;
    ++v91->fields._version;
  }
  v98 = v91->fields._size;
  if ( (unsigned int)v98 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v98 + 1;
    *((_DWORD *)v92->m_Items + v98) = 2;
    ++v91->fields._version;
  }
  v99 = v91->fields._size;
  if ( (unsigned int)v99 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v99 + 1;
    *((_DWORD *)v92->m_Items + v99) = 14;
    ++v91->fields._version;
  }
  v100 = v91->fields._size;
  if ( (unsigned int)v100 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    v92 = v91->fields._items;
    v93 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v91->fields._version;
    if ( !v92 )
      goto LABEL_221;
  }
  else
  {
    v91->fields._size = v100 + 1;
    *((_DWORD *)v92->m_Items + v100) = 1;
    ++v91->fields._version;
  }
  v101 = v91->fields._size;
  if ( (unsigned int)v101 >= v92->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v91,
      24,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v91->fields._size = v101 + 1;
    *((_DWORD *)v92->m_Items + v101) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v91;
  sub_1BCA784(&this->fields.servantEquipSelectList, v91);
  v105 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                   v102,
                                                   v103,
                                                   v104);
  System_Collections_Generic_List_Int32Enum____ctor(
    v105,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v105 )
    goto LABEL_221;
  v106 = v105->fields._items;
  v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v105->fields._version;
  if ( !v106 )
    goto LABEL_221;
  v108 = v105->fields._size;
  if ( (unsigned int)v108 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v108 + 1;
    *((_DWORD *)v106->m_Items + v108) = 8;
    ++v105->fields._version;
  }
  v109 = v105->fields._size;
  if ( (unsigned int)v109 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v109 + 1;
    *((_DWORD *)v106->m_Items + v109) = 3;
    ++v105->fields._version;
  }
  v110 = v105->fields._size;
  if ( (unsigned int)v110 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      19,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v110 + 1;
    *((_DWORD *)v106->m_Items + v110) = 19;
    ++v105->fields._version;
  }
  v111 = v105->fields._size;
  if ( (unsigned int)v111 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      20,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v111 + 1;
    *((_DWORD *)v106->m_Items + v111) = 20;
    ++v105->fields._version;
  }
  v112 = v105->fields._size;
  if ( (unsigned int)v112 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      21,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v112 + 1;
    *((_DWORD *)v106->m_Items + v112) = 21;
    ++v105->fields._version;
  }
  v113 = v105->fields._size;
  if ( (unsigned int)v113 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      22,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v113 + 1;
    *((_DWORD *)v106->m_Items + v113) = 22;
    ++v105->fields._version;
  }
  v114 = v105->fields._size;
  if ( (unsigned int)v114 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      23,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    v106 = v105->fields._items;
    v107 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v105->fields._version;
    if ( !v106 )
      goto LABEL_221;
  }
  else
  {
    v105->fields._size = v114 + 1;
    *((_DWORD *)v106->m_Items + v114) = 23;
    ++v105->fields._version;
  }
  v115 = v105->fields._size;
  if ( (unsigned int)v115 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v105,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
  }
  else
  {
    v105->fields._size = v115 + 1;
    *((_DWORD *)v106->m_Items + v115) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v105;
  sub_1BCA784(&this->fields.servantCostumeSelectList, v105);
  v119 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                   v116,
                                                   v117,
                                                   v118);
  System_Collections_Generic_List_Int32Enum____ctor(
    v119,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v119 )
    goto LABEL_221;
  v120 = v119->fields._items;
  v121 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v119->fields._version;
  if ( !v120 )
    goto LABEL_221;
  v122 = v119->fields._size;
  if ( (unsigned int)v122 >= v120->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v119,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v120 = v119->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v119->fields._version;
    if ( !v120 )
      goto LABEL_221;
  }
  else
  {
    v119->fields._size = v122 + 1;
    *((_DWORD *)v120->m_Items + v122) = 2;
    ++v119->fields._version;
  }
  v123 = v119->fields._size;
  if ( (unsigned int)v123 < v120->max_length )
  {
    v119->fields._size = v123 + 1;
    *((_DWORD *)v120->m_Items + v123) = 14;
    ++v119->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v119,
    14,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  v120 = v119->fields._items;
  v121 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v119->fields._version;
  if ( !v120 )
LABEL_221:
    sub_1BCAA3C(v12, v13);
LABEL_215:
  v124 = v119->fields._size;
  if ( (unsigned int)v124 >= v120->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v119,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v119->fields._size = v124 + 1;
    *((_DWORD *)v120->m_Items + v124) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v119;
  sub_1BCA784(&this->fields.commandCodeSelectList, v119);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v125);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  struct ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
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

  ServantSortSelectMenu__Close_31983776(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_31983776(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B119DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantSortSelectMenu_EndClose__, v5, v6);
    byte_4B119DF = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  ServantSortSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_4B119DD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v1, v2);
    byte_4B119DD = 1;
  }
  v3 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v1);
    v3 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v3->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantSortSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B119DC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v1, v2);
    byte_4B119DC = 1;
  }
  v3 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v1);
    v3 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BCAA3C(0LL, v1);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *allDispObject; // x0
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E1 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(allDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(allDispObject, method);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = allDispSortBtnsLabel->m_Items[v6];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v6,
                                                    (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *buddyDispObject; // x0
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E3 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(buddyDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(buddyDispObject, method);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = buddyDispSortBtnsLabel->m_Items[v6];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v6,
                                                      (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E7 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(commandCodeDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(commandCodeDispObject, method);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = commandCodeDispSortBtnsLabel->m_Items[v6];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v6,
                                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *costumeDispObject; // x0
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E6 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(costumeDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(costumeDispObject, method);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = costumeDispSortBtnsLabel->m_Items[v6];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v6,
                                                        (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E2 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(fatigueDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(fatigueDispObject, method);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = fatigueDispSortBtnsLabel->m_Items[v6];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v6,
                                                        (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  ServantSortSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B119DB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v1, v2);
    byte_4B119DB = 1;
  }
  v3 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v1);
    v3 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *normalDispObject; // x0
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v6; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v9; // x21

  if ( (byte_4B119E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E0 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(normalDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(normalDispObject, method);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = normalSortBtnsLabel->m_Items[v6];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v6,
                                                       (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v5; // x1
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v7; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v10; // x21

  if ( (byte_4B119E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    byte_4B119E4 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v5),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(shortDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BCAA44(shortDispObject, method);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v10 = shortDispSortBtnsLabel->m_Items[v7];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v7,
                                                      (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_T__o *servantEquipSelectList; // x0
  int32_t v15; // w0
  __int64 v16; // x2
  __int64 v17; // x3
  il2cpp_array_size_t v18; // w20
  char v19; // w21
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v21; // x20
  struct UICommonButton_array *v22; // x22
  int max_length; // w8
  unsigned int v24; // w23
  Il2CppClass **v25; // x8
  Il2CppObject *v26; // x21
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v32; // x8
  int v33; // w9
  int v34; // w10
  int v35; // w22
  int32_t v36; // w21
  int v37; // w24
  int v38; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v43; // w27
  float v44; // s0
  float v45; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0

  if ( (byte_4B119E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_UICommonButton__TypeInfo, v12, v13);
    byte_4B119E5 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v15 = System_Collections_Generic_List_Int32Enum___IndexOf(
          servantEquipSelectList,
          24,
          (const MethodInfo_35880E0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v15 != -1 )
  {
    v18 = v15;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)ListViewSort__get_IsWareHouseEquipList(
                                                                         (ListViewSort_o *)servantEquipSelectList,
                                                                         0LL);
      v19 = (char)servantEquipSelectList;
    }
    else
    {
      v19 = 0;
    }
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_43;
    if ( v18 >= shortDispSortButtons->max_length )
      goto LABEL_44;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)shortDispSortButtons->m_Items[v18];
    if ( !servantEquipSelectList )
      goto LABEL_43;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)servantEquipSelectList,
                                                                       0LL);
    if ( !servantEquipSelectList )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v19 & 1, 0LL);
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UICommonButton__TypeInfo,
                                                       method,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v22 = this->fields.shortDispSortButtons;
  if ( !v22 )
    goto LABEL_43;
  max_length = v22->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < max_length )
    {
      v25 = &v22->obj.klass + (int)v24;
      v26 = (Il2CppObject *)v25[4];
      if ( !v26 )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)v25[4],
                                                                         0LL);
      if ( !servantEquipSelectList )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)servantEquipSelectList,
                                                                         0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_43;
        items = v21->fields._items;
        v28 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v26,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v26;
          servantEquipSelectList = (System_Collections_Generic_List_T__o *)sub_1BCA784(v30 + 4, v26);
        }
      }
      max_length = v22->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1BCAA44(servantEquipSelectList, method);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_44;
  v32 = shortDispSortSprites->m_Items[0];
  if ( !v32 || !v21 )
LABEL_43:
    sub_1BCAA3C(servantEquipSelectList, method);
  v33 = v21->fields._size;
  v34 = v33 + 3;
  if ( v33 >= 0 )
    v34 = v21->fields._size;
  if ( v33 >= 1 )
  {
    v35 = 0;
    v36 = 0;
    v37 = v34 >> 2;
    v38 = (v21->fields._size & 3) - 1;
    mWidth = (float)v32->fields.mWidth;
    mHeight = (float)v32->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v43 = v35 >= v37 ? v38 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v21,
                                                                         v36,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v44 = (float)(v36 - 4 * v35) + (float)((float)v43 * -0.5);
      v45 = (float)(v44 * mWidth) + (float)(v44 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v45, 0LL);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v21,
                                                                         v36,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v47, (float)v35 * (float)-(float)(y + mHeight), 0LL);
      if ( (~v36++ & 3) == 0 )
        ++v35;
      if ( v36 >= v21->fields._size )
        return;
    }
    goto LABEL_43;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B119F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickCancel__, method, v2);
    byte_4B119F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ServantSortSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickChoiceSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickChoiceSort__, method, v2);
    byte_4B11A09 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v8; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v10; // w1

  if ( (byte_4B119F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickDecide__, method, v2);
    byte_4B119F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1BCAA3C(baseSortInfo, v6);
    }
    v10 = this->fields.openedKind != operationSortInfo->fields.sortKind
       || this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
       || this->fields.openedChoiceSort != operationSortInfo->fields.isChoiceSort;
    ServantSortSelectMenu__Callback(this, v10, v8);
  }
}


void __fastcall ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickEventOrder__, method, v2);
    byte_4B119F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *helpButton; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  unsigned int kind; // w8
  System_Action_o *v16; // x20
  int32_t v17; // w1

  if ( (byte_4B119F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickHelpClose__, v4, v5);
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickHelp__, v6, v7);
    byte_4B119F3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickHelp__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1BCAA3C(helpButton, v10);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v17 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v17, v16, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v17 = 32;
        goto LABEL_15;
      }
    }
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v17 = 42;
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
    sub_1BCAA3C(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSmartSort__, method, v2);
    byte_4B11A08 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__, method, v2);
    byte_4B11A00 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__, method, v2);
    byte_4B119FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortAmount__, method, v2);
    byte_4B119FD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortAttack__, method, v2);
    byte_4B119FB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortBuddy__, method, v2);
    byte_4B11A07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortClass__, method, v2);
    byte_4B119F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortClass__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortCost__, method, v2);
    byte_4B119FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortCost__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortCostume__, method, v2);
    byte_4B11A01 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortCreate__, method, v2);
    byte_4B119F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortFriendShip__, method, v2);
    byte_4B119FE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__, method, v2);
    byte_4B11A02 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortHp__, method, v2);
    byte_4B119FA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortHp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortLevel__, method, v2);
    byte_4B119F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortLimitCount__, method, v2);
    byte_4B11A05 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__, method, v2);
    byte_4B11A03 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingItem(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__, method, v2);
    byte_4B11A04 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortNpLevel__, method, v2);
    byte_4B119F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B119F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortRarity__, method, v2);
    byte_4B119F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRecoveryFatigue(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11A06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__, method, v2);
    byte_4B11A06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v7);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  bool isChoiceSort; // w8
  ListViewSort_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  ListViewSort_o *v43; // x22
  const MethodInfo *v44; // x1
  ListViewSort_o *baseSortInfo; // x0
  __int64 v46; // x1
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
  __int64 v58; // x1
  UILabel_o *smartChoiceDetail; // x21
  __int64 *v60; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v63; // x2
  __int64 v64; // x2
  __int64 v65; // x3
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  int32_t v68; // w8
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  int32_t v71; // w8
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  int32_t v76; // w1
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  System_Action_o *v84; // x20
  int32_t v85; // w20
  ServantSortSelectMenu_c *v86; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v88; // x1
  __int64 v89; // x0
  __int64 v90; // x1

  if ( (byte_4B119DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantSortSelectMenu_EndOpen__, v15, v16);
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_12327/*"SORT_WINDOW_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12319/*"SMART_SORT_DETAIL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12320/*"SMART_SORT_NAME"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3494/*"CHOICE_SORT_NAME"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3493/*"CHOICE_SORT_DETAIL_REVERSE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12326/*"SORT_WINDOW_DETAIL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3492/*"CHOICE_SORT_DETAIL"*/, v35, v36);
    byte_4B119DE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    if ( !sort )
    {
      v85 = this->fields.kind;
      v86 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v37);
        v86 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v86->static_fields->commonServantSortInfo;
      if ( v85 == 2 )
        ++p_commonServantSortInfo;
      v88 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1BCA784(&this->fields.baseSortInfo, v88);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0LL);
        sub_1BCAA3C(v89, v90);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1BCA784(&this->fields.baseSortInfo, sort);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v39 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v43 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v40, v41, v42);
    ListViewSort___ctor_41481440(v43, v39, 0LL);
    this->fields.operationSortInfo = v43;
    sub_1BCA784(&this->fields.operationSortInfo, v43);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12327/*"SORT_WINDOW_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SORT_WINDOW_DETAIL"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12320/*"SMART_SORT_NAME"*/, 0LL);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12320/*"SMART_SORT_NAME"*/, 0LL);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3494/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3494/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3494/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v60 = &StringLiteral_3493/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v60, 0LL);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0LL);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v60, 0LL);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0LL);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v60, 0LL);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0LL);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v63);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v44);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v73);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v44);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v66);
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
                  v68 = this->fields.kind;
                  if ( v68 == 3 )
                    goto LABEL_69;
                  if ( v68 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v44);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v69);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v70);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v71 = this->fields.kind;
                  if ( v71 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      v76 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v76, 0LL, 0, 0, 0, 0, 0LL);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v71 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v64, v65);
                      System_Action___ctor(v84, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v72);
LABEL_65:
                      v76 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v44);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v74);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v75);
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
                  v76 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v44);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v77);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v78);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v44);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v79);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v80);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v81);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v44);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v82);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v83);
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
        sub_1BCAA3C(baseSortInfo, v44);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v60 = &StringLiteral_3492/*"CHOICE_SORT_DETAIL"*/;
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119E9 = 1;
  }
  allDispSortSprites = v3->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantBaseSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = allDispSortSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          allDispSortSprites = v3->fields.allDispSortSprites;
          ++v9;
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119EB = 1;
  }
  buddyDispSortSprites = v3->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.buddySelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = buddyDispSortSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          buddyDispSortSprites = v3->fields.buddyDispSortSprites;
          ++v9;
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
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B119F0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B119F0 = 1;
  }
  switch ( v3->fields.kind )
  {
    case 3:
    case 8:
      operationSortInfo = v3->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v3->fields.choiceSort2BtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    case 4:
    case 6:
      operationSortInfo = v3->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v3->fields.choiceSortBtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    default:
      operationSortInfo = v3->fields.operationSortInfo;
      if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v3->fields.smartChoiceBtnSprite) == 0LL )
LABEL_16:
        sub_1BCAA3C(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v7 = &StringLiteral_17703/*"btn_on"*/;
      else
        v7 = &StringLiteral_17702/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119EE = 1;
  }
  commandCodeDispSprites = v3->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.commandCodeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = commandCodeDispSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          commandCodeDispSprites = v3->fields.commandCodeDispSprites;
          ++v9;
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119ED = 1;
  }
  costumeDispSprites = v3->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantCostumeSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = costumeDispSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          costumeDispSprites = v3->fields.costumeDispSprites;
          ++v9;
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
    sub_1BCAA3C(decideButton, isEnable);
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119EA = 1;
  }
  fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.fatigureSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = fatigueDispSortSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
          ++v9;
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v9; // x20
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119E8 = 1;
  }
  normalSortButtons = v3->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( (int)v9 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v3->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v9 >= normalSortSprites->max_length )
        sub_1BCAA44(this, method);
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (ServantSortSelectMenu_o *)v3->fields.servantSelectList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v13 = normalSortSprites->m_Items[v9];
          this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)this,
                                              v9,
                                              (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v13 )
          {
            v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
            UISprite__set_spriteName(v13, *v14, 0LL);
            normalSortButtons = v3->fields.normalSortButtons;
            ++v9;
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
    sub_1BCAA3C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, isEnable);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v9; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B119EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B119EC = 1;
  }
  shortDispSortSprites = v3->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(this, method);
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (ServantSortSelectMenu_o *)v3->fields.servantEquipSelectList;
      if ( this )
      {
        sortKind = operationSortInfo->fields.sortKind;
        v13 = shortDispSortSprites->m_Items[v9];
        this = (ServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v13 )
        {
          v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
          UISprite__set_spriteName(v13, *v14, 0LL);
          shortDispSortSprites = v3->fields.shortDispSortSprites;
          ++v9;
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
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B119EF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    this = (ServantSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B119EF = 1;
  }
  if ( v3->fields.kind == 5 )
  {
    operationSortInfo = v3->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_13;
    this = (ServantSortSelectMenu_o *)v3->fields.costumeSmartSortBtnSprite;
    if ( !this )
      goto LABEL_13;
  }
  else
  {
    operationSortInfo = v3->fields.operationSortInfo;
    if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v3->fields.smartSortBtnSprite) == 0LL )
LABEL_13:
      sub_1BCAA3C(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
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

  if ( (byte_4B119D9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B119D9 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1BCACFC(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11A0A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B11A0A = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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

  if ( (byte_4B119DA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B119DA = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06558;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06510;
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
  if ( (byte_4B11A0D & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11A0D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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