void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  ListViewSort_o *v2; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  ListViewSort_o *v4; // x19
  struct ServantSortSelectMenu_StaticFields *v5; // x0

  if ( (byte_4A56C92 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_12643/*"ServantSortSelect1"*/);
    sub_1B885B0(&StringLiteral_12644/*"ServantSortSelect2"*/);
    sub_1B885B0(&StringLiteral_12645/*"ServantSortSelect4"*/);
    byte_4A56C92 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_12643/*"ServantSortSelect1"*/, 3, 0, 0LL);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1B88554(ServantSortSelectMenu_TypeInfo->static_fields, v1);
  v2 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v2, (System_String_o *)StringLiteral_12644/*"ServantSortSelect2"*/, 3, 0, 0LL);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v2;
  sub_1B88554(&static_fields->commonServantEquipSortInfo, v2);
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, (System_String_o *)StringLiteral_12645/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v5 = ServantSortSelectMenu_TypeInfo->static_fields;
  v5->commandCodeSortInfo = v4;
  sub_1B88554(&v5->commandCodeSortInfo, v4);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  _QWORD *v6; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v11; // x10
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
  System_Collections_Generic_List_T__o *v22; // x20
  _QWORD *v23; // x8
  int32_t *v24; // x25
  struct System_Object_array *v25; // x9
  __int64 v26; // x10
  int32_t *v27; // x24
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  System_Collections_Generic_List_T__o *v40; // x20
  _QWORD *v41; // x8
  int32_t *v42; // x25
  struct System_Object_array *v43; // x9
  __int64 v44; // x10
  int32_t *v45; // x24
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x10
  System_Collections_Generic_List_T__o *v58; // x20
  struct System_Object_array *v59; // x9
  _QWORD *v60; // x8
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
  struct System_Object_array *v72; // x9
  _QWORD *v73; // x8
  __int64 v74; // x10
  __int64 v75; // x10
  __int64 v76; // x10
  __int64 v77; // x10
  __int64 v78; // x10
  __int64 v79; // x10
  __int64 v80; // x10
  __int64 v81; // x10
  System_Collections_Generic_List_T__o *v82; // x20
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
  System_Collections_Generic_List_T__o *v93; // x20
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  __int64 v97; // x10
  __int64 v98; // x10

  if ( (byte_4A56C91 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_4A56C91 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_221;
  v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  p_version = &v3->fields._version;
  ++v3->fields._version;
  items = v3->fields._items;
  p_size = &v3->fields._size;
  size = v3->fields._size;
  if ( !items )
    goto LABEL_221;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v11 = *p_size;
  if ( (unsigned int)v11 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 10;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 4;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 7;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 5;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 6;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      15,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 15;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      16,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 16;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 2;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 14;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 1;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_1B88554(&this->fields.servantBaseSelectList, v3);
  v22 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v22,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v22 )
    goto LABEL_221;
  v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v24 = &v22->fields._version;
  ++v22->fields._version;
  v25 = v22->fields._items;
  v27 = &v22->fields._size;
  v26 = v22->fields._size;
  if ( !v25 )
    goto LABEL_221;
  if ( (unsigned int)v26 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v26 + 1;
    *((_DWORD *)v25->m_Items + v26) = 3;
    ++*v24;
  }
  v28 = *v27;
  if ( (unsigned int)v28 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v28 + 1;
    *((_DWORD *)v25->m_Items + v28) = 10;
    ++*v24;
  }
  v29 = *v27;
  if ( (unsigned int)v29 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v29 + 1;
    *((_DWORD *)v25->m_Items + v29) = 4;
    ++*v24;
  }
  v30 = *v27;
  if ( (unsigned int)v30 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v30 + 1;
    *((_DWORD *)v25->m_Items + v30) = 7;
    ++*v24;
  }
  v31 = *v27;
  if ( (unsigned int)v31 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v31 + 1;
    *((_DWORD *)v25->m_Items + v31) = 5;
    ++*v24;
  }
  v32 = *v27;
  if ( (unsigned int)v32 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v32 + 1;
    *((_DWORD *)v25->m_Items + v32) = 6;
    ++*v24;
  }
  v33 = *v27;
  if ( (unsigned int)v33 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      15,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v33 + 1;
    *((_DWORD *)v25->m_Items + v33) = 15;
    ++*v24;
  }
  v34 = *v27;
  if ( (unsigned int)v34 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      16,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v34 + 1;
    *((_DWORD *)v25->m_Items + v34) = 16;
    ++*v24;
  }
  v35 = *v27;
  if ( (unsigned int)v35 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v35 + 1;
    *((_DWORD *)v25->m_Items + v35) = 2;
    ++*v24;
  }
  v36 = *v27;
  if ( (unsigned int)v36 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v36 + 1;
    *((_DWORD *)v25->m_Items + v36) = 14;
    ++*v24;
  }
  v37 = *v27;
  if ( (unsigned int)v37 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v37 + 1;
    *((_DWORD *)v25->m_Items + v37) = 1;
    ++*v24;
  }
  v38 = *v27;
  if ( (unsigned int)v38 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    v25 = v22->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v22->fields._version;
    if ( !v25 )
      goto LABEL_221;
  }
  else
  {
    *v27 = v38 + 1;
    *((_DWORD *)v25->m_Items + v38) = 8;
    ++*v24;
  }
  v39 = *v27;
  if ( (unsigned int)v39 >= v25->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      25,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    *v27 = v39 + 1;
    *((_DWORD *)v25->m_Items + v39) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v22;
  sub_1B88554(&this->fields.fatigureSelectList, v22);
  v40 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v40,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v40 )
    goto LABEL_221;
  v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v42 = &v40->fields._version;
  ++v40->fields._version;
  v43 = v40->fields._items;
  v45 = &v40->fields._size;
  v44 = v40->fields._size;
  if ( !v43 )
    goto LABEL_221;
  if ( (unsigned int)v44 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v44 + 1;
    *((_DWORD *)v43->m_Items + v44) = 3;
    ++*v42;
  }
  v46 = *v45;
  if ( (unsigned int)v46 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v46 + 1;
    *((_DWORD *)v43->m_Items + v46) = 10;
    ++*v42;
  }
  v47 = *v45;
  if ( (unsigned int)v47 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v47 + 1;
    *((_DWORD *)v43->m_Items + v47) = 4;
    ++*v42;
  }
  v48 = *v45;
  if ( (unsigned int)v48 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v48 + 1;
    *((_DWORD *)v43->m_Items + v48) = 7;
    ++*v42;
  }
  v49 = *v45;
  if ( (unsigned int)v49 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v49 + 1;
    *((_DWORD *)v43->m_Items + v49) = 5;
    ++*v42;
  }
  v50 = *v45;
  if ( (unsigned int)v50 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v50 + 1;
    *((_DWORD *)v43->m_Items + v50) = 6;
    ++*v42;
  }
  v51 = *v45;
  if ( (unsigned int)v51 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      15,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v51 + 1;
    *((_DWORD *)v43->m_Items + v51) = 15;
    ++*v42;
  }
  v52 = *v45;
  if ( (unsigned int)v52 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      16,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v52 + 1;
    *((_DWORD *)v43->m_Items + v52) = 16;
    ++*v42;
  }
  v53 = *v45;
  if ( (unsigned int)v53 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v53 + 1;
    *((_DWORD *)v43->m_Items + v53) = 2;
    ++*v42;
  }
  v54 = *v45;
  if ( (unsigned int)v54 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v54 + 1;
    *((_DWORD *)v43->m_Items + v54) = 14;
    ++*v42;
  }
  v55 = *v45;
  if ( (unsigned int)v55 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v55 + 1;
    *((_DWORD *)v43->m_Items + v55) = 1;
    ++*v42;
  }
  v56 = *v45;
  if ( (unsigned int)v56 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v43 = v40->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v40->fields._version;
    if ( !v43 )
      goto LABEL_221;
  }
  else
  {
    *v45 = v56 + 1;
    *((_DWORD *)v43->m_Items + v56) = 8;
    ++*v42;
  }
  v57 = *v45;
  if ( (unsigned int)v57 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v40,
      28,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    *v45 = v57 + 1;
    *((_DWORD *)v43->m_Items + v57) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v40;
  sub_1B88554(&this->fields.buddySelectList, v40);
  v58 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v58,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v58 )
    goto LABEL_221;
  v59 = v58->fields._items;
  v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v58->fields._version;
  if ( !v59 )
    goto LABEL_221;
  v61 = v58->fields._size;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v61 + 1;
    *((_DWORD *)v59->m_Items + v61) = 3;
    ++v58->fields._version;
  }
  v62 = v58->fields._size;
  if ( (unsigned int)v62 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v62 + 1;
    *((_DWORD *)v59->m_Items + v62) = 10;
    ++v58->fields._version;
  }
  v63 = v58->fields._size;
  if ( (unsigned int)v63 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v63 + 1;
    *((_DWORD *)v59->m_Items + v63) = 4;
    ++v58->fields._version;
  }
  v64 = v58->fields._size;
  if ( (unsigned int)v64 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v64 + 1;
    *((_DWORD *)v59->m_Items + v64) = 7;
    ++v58->fields._version;
  }
  v65 = v58->fields._size;
  if ( (unsigned int)v65 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v65 + 1;
    *((_DWORD *)v59->m_Items + v65) = 2;
    ++v58->fields._version;
  }
  v66 = v58->fields._size;
  if ( (unsigned int)v66 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v66 + 1;
    *((_DWORD *)v59->m_Items + v66) = 5;
    ++v58->fields._version;
  }
  v67 = v58->fields._size;
  if ( (unsigned int)v67 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v67 + 1;
    *((_DWORD *)v59->m_Items + v67) = 6;
    ++v58->fields._version;
  }
  v68 = v58->fields._size;
  if ( (unsigned int)v68 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v68 + 1;
    *((_DWORD *)v59->m_Items + v68) = 14;
    ++v58->fields._version;
  }
  v69 = v58->fields._size;
  if ( (unsigned int)v69 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    v59 = v58->fields._items;
    v60 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v58->fields._version;
    if ( !v59 )
      goto LABEL_221;
  }
  else
  {
    v58->fields._size = v69 + 1;
    *((_DWORD *)v59->m_Items + v69) = 1;
    ++v58->fields._version;
  }
  v70 = v58->fields._size;
  if ( (unsigned int)v70 >= v59->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v58->fields._size = v70 + 1;
    *((_DWORD *)v59->m_Items + v70) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v58;
  sub_1B88554(&this->fields.servantSelectList, v58);
  v71 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v71,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v71 )
    goto LABEL_221;
  v72 = v71->fields._items;
  v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v71->fields._version;
  if ( !v72 )
    goto LABEL_221;
  v74 = v71->fields._size;
  if ( (unsigned int)v74 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v74 + 1;
    *((_DWORD *)v72->m_Items + v74) = 3;
    ++v71->fields._version;
  }
  v75 = v71->fields._size;
  if ( (unsigned int)v75 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v75 + 1;
    *((_DWORD *)v72->m_Items + v75) = 5;
    ++v71->fields._version;
  }
  v76 = v71->fields._size;
  if ( (unsigned int)v76 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v76 + 1;
    *((_DWORD *)v72->m_Items + v76) = 6;
    ++v71->fields._version;
  }
  v77 = v71->fields._size;
  if ( (unsigned int)v77 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v77 + 1;
    *((_DWORD *)v72->m_Items + v77) = 7;
    ++v71->fields._version;
  }
  v78 = v71->fields._size;
  if ( (unsigned int)v78 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v78 + 1;
    *((_DWORD *)v72->m_Items + v78) = 2;
    ++v71->fields._version;
  }
  v79 = v71->fields._size;
  if ( (unsigned int)v79 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v79 + 1;
    *((_DWORD *)v72->m_Items + v79) = 14;
    ++v71->fields._version;
  }
  v80 = v71->fields._size;
  if ( (unsigned int)v80 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    v72 = v71->fields._items;
    v73 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v71->fields._version;
    if ( !v72 )
      goto LABEL_221;
  }
  else
  {
    v71->fields._size = v80 + 1;
    *((_DWORD *)v72->m_Items + v80) = 1;
    ++v71->fields._version;
  }
  v81 = v71->fields._size;
  if ( (unsigned int)v81 >= v72->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v71,
      24,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v71->fields._size = v81 + 1;
    *((_DWORD *)v72->m_Items + v81) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v71;
  sub_1B88554(&this->fields.servantEquipSelectList, v71);
  v82 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v82,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v82 )
    goto LABEL_221;
  v83 = v82->fields._items;
  v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v82->fields._version;
  if ( !v83 )
    goto LABEL_221;
  v85 = v82->fields._size;
  if ( (unsigned int)v85 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v85 + 1;
    *((_DWORD *)v83->m_Items + v85) = 8;
    ++v82->fields._version;
  }
  v86 = v82->fields._size;
  if ( (unsigned int)v86 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v86 + 1;
    *((_DWORD *)v83->m_Items + v86) = 3;
    ++v82->fields._version;
  }
  v87 = v82->fields._size;
  if ( (unsigned int)v87 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      19,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v87 + 1;
    *((_DWORD *)v83->m_Items + v87) = 19;
    ++v82->fields._version;
  }
  v88 = v82->fields._size;
  if ( (unsigned int)v88 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      20,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v88 + 1;
    *((_DWORD *)v83->m_Items + v88) = 20;
    ++v82->fields._version;
  }
  v89 = v82->fields._size;
  if ( (unsigned int)v89 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      21,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v89 + 1;
    *((_DWORD *)v83->m_Items + v89) = 21;
    ++v82->fields._version;
  }
  v90 = v82->fields._size;
  if ( (unsigned int)v90 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      22,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v90 + 1;
    *((_DWORD *)v83->m_Items + v90) = 22;
    ++v82->fields._version;
  }
  v91 = v82->fields._size;
  if ( (unsigned int)v91 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      23,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v83 = v82->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v82->fields._version;
    if ( !v83 )
      goto LABEL_221;
  }
  else
  {
    v82->fields._size = v91 + 1;
    *((_DWORD *)v83->m_Items + v91) = 23;
    ++v82->fields._version;
  }
  v92 = v82->fields._size;
  if ( (unsigned int)v92 >= v83->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v82,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v82->fields._size = v92 + 1;
    *((_DWORD *)v83->m_Items + v92) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v82;
  sub_1B88554(&this->fields.servantCostumeSelectList, v82);
  v93 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v93,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v93 )
    goto LABEL_221;
  v94 = v93->fields._items;
  v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v93->fields._version;
  if ( !v94 )
    goto LABEL_221;
  v96 = v93->fields._size;
  if ( (unsigned int)v96 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v93,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    v94 = v93->fields._items;
    v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v93->fields._version;
    if ( !v94 )
      goto LABEL_221;
  }
  else
  {
    v93->fields._size = v96 + 1;
    *((_DWORD *)v94->m_Items + v96) = 2;
    ++v93->fields._version;
  }
  v97 = v93->fields._size;
  if ( (unsigned int)v97 < v94->max_length )
  {
    v93->fields._size = v97 + 1;
    *((_DWORD *)v94->m_Items + v97) = 14;
    ++v93->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v93,
    14,
    *(const MethodInfo_34E303C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  v94 = v93->fields._items;
  v95 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v93->fields._version;
  if ( !v94 )
LABEL_221:
    sub_1B8880C(v4, v5);
LABEL_215:
  v98 = v93->fields._size;
  if ( (unsigned int)v98 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v93,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v93->fields._size = v98 + 1;
    *((_DWORD *)v94->m_Items + v98) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v93;
  sub_1B88554(&this->fields.commandCodeSelectList, v93);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1B88554(p_callbackFunc, 0LL);
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

  ServantSortSelectMenu__Close_31613200(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_31613200(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A56C65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSortSelectMenu_EndClose__);
    byte_4A56C65 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B88554(&this->fields.closeCallbackFunc, 0LL);
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

  if ( (byte_4A56C63 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    byte_4A56C63 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A56C62 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    byte_4A56C62 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
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

  if ( (byte_4A56C67 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C67 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(allDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(allDispObject, method);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C69 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(buddyDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(buddyDispObject, method);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C6D = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(commandCodeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(commandCodeDispObject, method);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C6C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C6C = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(costumeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(costumeDispObject, method);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C68 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C68 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(fatigueDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(fatigueDispObject, method);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C61 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    byte_4A56C61 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
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

  if ( (byte_4A56C66 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C66 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(normalDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(normalDispObject, method);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4A56C6A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_4A56C6A = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(shortDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(shortDispObject, method);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  System_Collections_Generic_List_T__o *servantEquipSelectList; // x0
  int32_t v4; // w0
  il2cpp_array_size_t v5; // w20
  char v6; // w21
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  struct UICommonButton_array *v9; // x22
  int max_length; // w8
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppObject *v13; // x21
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v19; // x8
  int v20; // w9
  int v21; // w10
  int v22; // w22
  int32_t v23; // w21
  int v24; // w24
  int v25; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v30; // w27
  float v31; // s0
  float v32; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0

  if ( (byte_4A56C6B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_4A56C6B = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v4 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_34E3CB8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v4 != -1 )
  {
    v5 = v4;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)ListViewSort__get_IsWareHouseEquipList(
                                                                         (ListViewSort_o *)servantEquipSelectList,
                                                                         0LL);
      v6 = (char)servantEquipSelectList;
    }
    else
    {
      v6 = 0;
    }
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_43;
    if ( v5 >= shortDispSortButtons->max_length )
      goto LABEL_44;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)shortDispSortButtons->m_Items[v5];
    if ( !servantEquipSelectList )
      goto LABEL_43;
    servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)servantEquipSelectList,
                                                                       0LL);
    if ( !servantEquipSelectList )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v6 & 1, 0LL);
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
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
                                                                         0LL);
      if ( !servantEquipSelectList )
        goto LABEL_43;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)servantEquipSelectList,
                                                                         0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_43;
        items = v8->fields._items;
        v15 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v13;
          servantEquipSelectList = (System_Collections_Generic_List_T__o *)sub_1B88554(v17 + 4, v13);
        }
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1B88814(servantEquipSelectList, method);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_44;
  v19 = shortDispSortSprites->m_Items[0];
  if ( !v19 || !v8 )
LABEL_43:
    sub_1B8880C(servantEquipSelectList, method);
  v20 = v8->fields._size;
  v21 = v20 + 3;
  if ( v20 >= 0 )
    v21 = v8->fields._size;
  if ( v20 >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = v21 >> 2;
    v25 = (v8->fields._size & 3) - 1;
    mWidth = (float)v19->fields.mWidth;
    mHeight = (float)v19->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v30 = v22 >= v24 ? v25 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v23,
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v31 = (float)(v23 - 4 * v22) + (float)((float)v30 * -0.5);
      v32 = (float)(v31 * mWidth) + (float)(v31 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v32, 0LL);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v8,
                                                                         v23,
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v34, (float)v22 * (float)-(float)(y + mHeight), 0LL);
      if ( (~v23++ & 3) == 0 )
        ++v22;
      if ( v23 >= v8->fields._size )
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

  if ( (byte_4A56C78 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickCancel__);
    byte_4A56C78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A56C8F & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickChoiceSort__);
    byte_4A56C8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C77 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickDecide__);
    byte_4A56C77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1B8880C(baseSortInfo, v5);
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

  if ( (byte_4A56C7C & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickEventOrder__);
    byte_4A56C7C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v8; // x20
  int32_t v9; // w1

  if ( (byte_4A56C79 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickHelp__);
    byte_4A56C79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1B8880C(helpButton, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v9 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v9, v8, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v9 = 32;
        goto LABEL_15;
      }
    }
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v9 = 42;
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
    sub_1B8880C(helpButton, method);
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

  if ( (byte_4A56C8E & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSmartSort__);
    byte_4A56C8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C86 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    byte_4A56C86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C85 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    byte_4A56C85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C83 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortAmount__);
    byte_4A56C83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C81 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortAttack__);
    byte_4A56C81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C8D & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortBuddy__);
    byte_4A56C8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C7A & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortClass__);
    byte_4A56C7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C82 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortCost__);
    byte_4A56C82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C87 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortCostume__);
    byte_4A56C87 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C7B & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortCreate__);
    byte_4A56C7B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C84 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    byte_4A56C84 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C88 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    byte_4A56C88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C80 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortHp__);
    byte_4A56C80 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C7E & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortLevel__);
    byte_4A56C7E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C8B & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    byte_4A56C8B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C89 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    byte_4A56C89 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C8A & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    byte_4A56C8A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C7F & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    byte_4A56C7F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C7D & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortRarity__);
    byte_4A56C7D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A56C8C & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    byte_4A56C8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(v5, v6);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__Open(
        ServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        bool isChoiceReverse,
        ServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool isChoiceSort; // w8
  ListViewSort_o *v12; // x21
  ListViewSort_o *v13; // x22
  __int64 v14; // x1
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
  __int64 *v28; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  int32_t v35; // w8
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  int32_t v38; // w8
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  int32_t v43; // w1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  System_Action_o *v51; // x20
  int32_t v52; // w20
  ServantSortSelectMenu_c *v53; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v55; // x1
  __int64 v56; // x0
  __int64 v57; // x1

  if ( (byte_4A56C64 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantSortSelectMenu_EndOpen__);
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_12171/*"SORT_WINDOW_TITLE"*/);
    sub_1B885B0(&StringLiteral_12163/*"SMART_SORT_DETAIL"*/);
    sub_1B885B0(&StringLiteral_12164/*"SMART_SORT_NAME"*/);
    sub_1B885B0(&StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3468/*"CHOICE_SORT_NAME"*/);
    sub_1B885B0(&StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3467/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_1B885B0(&StringLiteral_12170/*"SORT_WINDOW_DETAIL"*/);
    sub_1B885B0(&StringLiteral_3466/*"CHOICE_SORT_DETAIL"*/);
    byte_4A56C64 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    if ( !sort )
    {
      v52 = this->fields.kind;
      v53 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v53 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v53->static_fields->commonServantSortInfo;
      if ( v52 == 2 )
        ++p_commonServantSortInfo;
      v55 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1B88554(&this->fields.baseSortInfo, v55);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0LL);
        sub_1B8880C(v56, v57);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1B88554(&this->fields.baseSortInfo, sort);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v12 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v13 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40759792(v13, v12, 0LL);
    this->fields.operationSortInfo = v13;
    sub_1B88554(&this->fields.operationSortInfo, v13);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SORT_WINDOW_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SORT_WINDOW_DETAIL"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SMART_SORT_NAME"*/, 0LL);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12163/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SMART_SORT_NAME"*/, 0LL);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12163/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v28 = &StringLiteral_3467/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v28, 0LL);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0LL);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v28, 0LL);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0LL);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v28, 0LL);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0LL);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v31);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v32);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v40);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v32);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v33);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v34);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v35 = this->fields.kind;
                  if ( v35 == 3 )
                    goto LABEL_69;
                  if ( v35 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v32);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v36);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v37);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v38 = this->fields.kind;
                  if ( v38 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      v43 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v43, 0LL, 0, 0, 0, 0, 0LL);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v38 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v51 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v39);
LABEL_65:
                      v43 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v32);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v41);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v42);
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
                  v43 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v32);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v44);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v45);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v32);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v46);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v47);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v48);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v32);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v49);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v50);
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
        sub_1B8880C(baseSortInfo, v14);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v28 = &StringLiteral_3466/*"CHOICE_SORT_DETAIL"*/;
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C6F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C6F = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C71 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C71 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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


void __fastcall ServantSortSelectMenu__SetChoiceSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4A56C76 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A56C76 = 1;
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
        sub_1B8880C(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v4 = &StringLiteral_17526/*"btn_on"*/;
      else
        v4 = &StringLiteral_17525/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C74 = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C73 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C73 = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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
    sub_1B8880C(decideButton, isEnable);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C70 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C70 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v4; // x20
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C6E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C6E = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= normalSortSprites->max_length )
        sub_1B88814(this, method);
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
                                              (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
            UISprite__set_spriteName(v8, *v9, 0LL);
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
    sub_1B8880C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isEnable);
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
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4A56C72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56C72 = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1B8880C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
                                            (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v8 )
        {
          v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
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


void __fastcall ServantSortSelectMenu__SetSmartSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4A56C75 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A56C75 = 1;
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
      sub_1B8880C(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
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

  if ( (byte_4A56C5F & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56C5F = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1B88ACC(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56C90 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A56C90 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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

  if ( (byte_4A56C60 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56C60 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C828C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8244;
}


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
  if ( (byte_4A56C93 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56C93 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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