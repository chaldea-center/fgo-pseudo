void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  ListViewSort_o *v7; // x19
  struct ServantSortSelectMenu_StaticFields *static_fields; // x0
  ListViewSort_o *v9; // x19
  struct ServantSortSelectMenu_StaticFields *v10; // x0

  if ( (byte_4B62369 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, v1);
    sub_1BE4ACC(&ServantSortSelectMenu_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_12838/*"ServantSortSelect1"*/, v3);
    sub_1BE4ACC(&StringLiteral_12839/*"ServantSortSelect2"*/, v4);
    sub_1BE4ACC(&StringLiteral_12840/*"ServantSortSelect4"*/, v5);
    byte_4B62369 = 1;
  }
  v6 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v6, (System_String_o *)StringLiteral_12838/*"ServantSortSelect1"*/, 3, 0, 0LL);
  ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v6;
  sub_1BE4A70(ServantSortSelectMenu_TypeInfo->static_fields);
  v7 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v7, (System_String_o *)StringLiteral_12839/*"ServantSortSelect2"*/, 3, 0, 0LL);
  static_fields = ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->commonServantEquipSortInfo = v7;
  sub_1BE4A70(&static_fields->commonServantEquipSortInfo);
  v9 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v9, (System_String_o *)StringLiteral_12840/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v10 = ServantSortSelectMenu_TypeInfo->static_fields;
  v10->commandCodeSortInfo = v9;
  sub_1BE4A70(&v10->commandCodeSortInfo);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  _QWORD *v9; // x8
  int32_t *p_version; // x25
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
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
  __int64 v24; // x10
  System_Collections_Generic_List_T__o *v25; // x20
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
  _QWORD *v44; // x8
  int32_t *v45; // x25
  struct System_Object_array *v46; // x9
  __int64 v47; // x10
  int32_t *v48; // x24
  __int64 v49; // x10
  __int64 v50; // x10
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
  System_Collections_Generic_List_T__o *v61; // x20
  struct System_Object_array *v62; // x9
  _QWORD *v63; // x8
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
  System_Collections_Generic_List_T__o *v74; // x20
  struct System_Object_array *v75; // x9
  _QWORD *v76; // x8
  __int64 v77; // x10
  __int64 v78; // x10
  __int64 v79; // x10
  __int64 v80; // x10
  __int64 v81; // x10
  __int64 v82; // x10
  __int64 v83; // x10
  __int64 v84; // x10
  System_Collections_Generic_List_T__o *v85; // x20
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
  System_Collections_Generic_List_T__o *v96; // x20
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10

  if ( (byte_4B62368 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v5);
    byte_4B62368 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v6 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v6 )
    goto LABEL_221;
  v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v14 = *p_size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      10,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 10;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      4,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 4;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      7,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 7;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      5,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 5;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 6;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      15,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 15;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      16,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 16;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 2;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      14,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 14;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_221;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 1;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v6,
      8,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 8;
  }
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v6;
  sub_1BE4A70(&this->fields.servantBaseSelectList);
  v25 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v25,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v25 )
    goto LABEL_221;
  v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v27 = &v25->fields._version;
  ++v25->fields._version;
  v28 = v25->fields._items;
  v30 = &v25->fields._size;
  v29 = v25->fields._size;
  if ( !v28 )
    goto LABEL_221;
  if ( (unsigned int)v29 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v31 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      10,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v32 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      4,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v33 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      7,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v34 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      5,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v35 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v36 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      15,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v37 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      16,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v38 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v39 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      14,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v40 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v41 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      8,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v28 = v25->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v25->fields._version;
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
  if ( (unsigned int)v42 >= v28->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      25,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    *v30 = v42 + 1;
    *((_DWORD *)v28->m_Items + v42) = 25;
  }
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v25;
  sub_1BE4A70(&this->fields.fatigureSelectList);
  v43 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v43,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v43 )
    goto LABEL_221;
  v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  v45 = &v43->fields._version;
  ++v43->fields._version;
  v46 = v43->fields._items;
  v48 = &v43->fields._size;
  v47 = v43->fields._size;
  if ( !v46 )
    goto LABEL_221;
  if ( (unsigned int)v47 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v47 + 1;
    *((_DWORD *)v46->m_Items + v47) = 3;
    ++*v45;
  }
  v49 = *v48;
  if ( (unsigned int)v49 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      10,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v49 + 1;
    *((_DWORD *)v46->m_Items + v49) = 10;
    ++*v45;
  }
  v50 = *v48;
  if ( (unsigned int)v50 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      4,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v50 + 1;
    *((_DWORD *)v46->m_Items + v50) = 4;
    ++*v45;
  }
  v51 = *v48;
  if ( (unsigned int)v51 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      7,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v51 + 1;
    *((_DWORD *)v46->m_Items + v51) = 7;
    ++*v45;
  }
  v52 = *v48;
  if ( (unsigned int)v52 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      5,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v52 + 1;
    *((_DWORD *)v46->m_Items + v52) = 5;
    ++*v45;
  }
  v53 = *v48;
  if ( (unsigned int)v53 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v53 + 1;
    *((_DWORD *)v46->m_Items + v53) = 6;
    ++*v45;
  }
  v54 = *v48;
  if ( (unsigned int)v54 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      15,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v54 + 1;
    *((_DWORD *)v46->m_Items + v54) = 15;
    ++*v45;
  }
  v55 = *v48;
  if ( (unsigned int)v55 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      16,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v55 + 1;
    *((_DWORD *)v46->m_Items + v55) = 16;
    ++*v45;
  }
  v56 = *v48;
  if ( (unsigned int)v56 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v56 + 1;
    *((_DWORD *)v46->m_Items + v56) = 2;
    ++*v45;
  }
  v57 = *v48;
  if ( (unsigned int)v57 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      14,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v57 + 1;
    *((_DWORD *)v46->m_Items + v57) = 14;
    ++*v45;
  }
  v58 = *v48;
  if ( (unsigned int)v58 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v58 + 1;
    *((_DWORD *)v46->m_Items + v58) = 1;
    ++*v45;
  }
  v59 = *v48;
  if ( (unsigned int)v59 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      8,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v46 = v43->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v43->fields._version;
    if ( !v46 )
      goto LABEL_221;
  }
  else
  {
    *v48 = v59 + 1;
    *((_DWORD *)v46->m_Items + v59) = 8;
    ++*v45;
  }
  v60 = *v48;
  if ( (unsigned int)v60 >= v46->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v43,
      28,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    *v48 = v60 + 1;
    *((_DWORD *)v46->m_Items + v60) = 28;
  }
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v43;
  sub_1BE4A70(&this->fields.buddySelectList);
  v61 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v61,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v61 )
    goto LABEL_221;
  v62 = v61->fields._items;
  v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v61->fields._version;
  if ( !v62 )
    goto LABEL_221;
  v64 = v61->fields._size;
  if ( (unsigned int)v64 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v64 + 1;
    *((_DWORD *)v62->m_Items + v64) = 3;
    ++v61->fields._version;
  }
  v65 = v61->fields._size;
  if ( (unsigned int)v65 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      10,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v65 + 1;
    *((_DWORD *)v62->m_Items + v65) = 10;
    ++v61->fields._version;
  }
  v66 = v61->fields._size;
  if ( (unsigned int)v66 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      4,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v66 + 1;
    *((_DWORD *)v62->m_Items + v66) = 4;
    ++v61->fields._version;
  }
  v67 = v61->fields._size;
  if ( (unsigned int)v67 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      7,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v67 + 1;
    *((_DWORD *)v62->m_Items + v67) = 7;
    ++v61->fields._version;
  }
  v68 = v61->fields._size;
  if ( (unsigned int)v68 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v68 + 1;
    *((_DWORD *)v62->m_Items + v68) = 2;
    ++v61->fields._version;
  }
  v69 = v61->fields._size;
  if ( (unsigned int)v69 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      5,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v69 + 1;
    *((_DWORD *)v62->m_Items + v69) = 5;
    ++v61->fields._version;
  }
  v70 = v61->fields._size;
  if ( (unsigned int)v70 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v70 + 1;
    *((_DWORD *)v62->m_Items + v70) = 6;
    ++v61->fields._version;
  }
  v71 = v61->fields._size;
  if ( (unsigned int)v71 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      14,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v71 + 1;
    *((_DWORD *)v62->m_Items + v71) = 14;
    ++v61->fields._version;
  }
  v72 = v61->fields._size;
  if ( (unsigned int)v72 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v61->fields._version;
    if ( !v62 )
      goto LABEL_221;
  }
  else
  {
    v61->fields._size = v72 + 1;
    *((_DWORD *)v62->m_Items + v72) = 1;
    ++v61->fields._version;
  }
  v73 = v61->fields._size;
  if ( (unsigned int)v73 >= v62->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v61,
      8,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v61->fields._size = v73 + 1;
    *((_DWORD *)v62->m_Items + v73) = 8;
  }
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v61;
  sub_1BE4A70(&this->fields.servantSelectList);
  v74 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v74,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v74 )
    goto LABEL_221;
  v75 = v74->fields._items;
  v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v74->fields._version;
  if ( !v75 )
    goto LABEL_221;
  v77 = v74->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v77 + 1;
    *((_DWORD *)v75->m_Items + v77) = 3;
    ++v74->fields._version;
  }
  v78 = v74->fields._size;
  if ( (unsigned int)v78 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      5,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v78 + 1;
    *((_DWORD *)v75->m_Items + v78) = 5;
    ++v74->fields._version;
  }
  v79 = v74->fields._size;
  if ( (unsigned int)v79 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v79 + 1;
    *((_DWORD *)v75->m_Items + v79) = 6;
    ++v74->fields._version;
  }
  v80 = v74->fields._size;
  if ( (unsigned int)v80 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      7,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v80 + 1;
    *((_DWORD *)v75->m_Items + v80) = 7;
    ++v74->fields._version;
  }
  v81 = v74->fields._size;
  if ( (unsigned int)v81 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v81 + 1;
    *((_DWORD *)v75->m_Items + v81) = 2;
    ++v74->fields._version;
  }
  v82 = v74->fields._size;
  if ( (unsigned int)v82 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      14,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v82 + 1;
    *((_DWORD *)v75->m_Items + v82) = 14;
    ++v74->fields._version;
  }
  v83 = v74->fields._size;
  if ( (unsigned int)v83 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    v75 = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v74->fields._version;
    if ( !v75 )
      goto LABEL_221;
  }
  else
  {
    v74->fields._size = v83 + 1;
    *((_DWORD *)v75->m_Items + v83) = 1;
    ++v74->fields._version;
  }
  v84 = v74->fields._size;
  if ( (unsigned int)v84 >= v75->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v74,
      24,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v74->fields._size = v84 + 1;
    *((_DWORD *)v75->m_Items + v84) = 24;
  }
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v74;
  sub_1BE4A70(&this->fields.servantEquipSelectList);
  v85 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v85,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v85 )
    goto LABEL_221;
  v86 = v85->fields._items;
  v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v85->fields._version;
  if ( !v86 )
    goto LABEL_221;
  v88 = v85->fields._size;
  if ( (unsigned int)v88 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      8,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v88 + 1;
    *((_DWORD *)v86->m_Items + v88) = 8;
    ++v85->fields._version;
  }
  v89 = v85->fields._size;
  if ( (unsigned int)v89 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v89 + 1;
    *((_DWORD *)v86->m_Items + v89) = 3;
    ++v85->fields._version;
  }
  v90 = v85->fields._size;
  if ( (unsigned int)v90 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      19,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v90 + 1;
    *((_DWORD *)v86->m_Items + v90) = 19;
    ++v85->fields._version;
  }
  v91 = v85->fields._size;
  if ( (unsigned int)v91 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      20,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v91 + 1;
    *((_DWORD *)v86->m_Items + v91) = 20;
    ++v85->fields._version;
  }
  v92 = v85->fields._size;
  if ( (unsigned int)v92 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      21,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v92 + 1;
    *((_DWORD *)v86->m_Items + v92) = 21;
    ++v85->fields._version;
  }
  v93 = v85->fields._size;
  if ( (unsigned int)v93 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      22,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v93 + 1;
    *((_DWORD *)v86->m_Items + v93) = 22;
    ++v85->fields._version;
  }
  v94 = v85->fields._size;
  if ( (unsigned int)v94 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      23,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    v86 = v85->fields._items;
    v87 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v85->fields._version;
    if ( !v86 )
      goto LABEL_221;
  }
  else
  {
    v85->fields._size = v94 + 1;
    *((_DWORD *)v86->m_Items + v94) = 23;
    ++v85->fields._version;
  }
  v95 = v85->fields._size;
  if ( (unsigned int)v95 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v85,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v85->fields._size = v95 + 1;
    *((_DWORD *)v86->m_Items + v95) = 2;
  }
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v85;
  sub_1BE4A70(&this->fields.servantCostumeSelectList);
  v96 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v96,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v96 )
    goto LABEL_221;
  v97 = v96->fields._items;
  v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v96->fields._version;
  if ( !v97 )
    goto LABEL_221;
  v99 = v96->fields._size;
  if ( (unsigned int)v99 >= v97->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v96,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    v97 = v96->fields._items;
    v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v96->fields._version;
    if ( !v97 )
      goto LABEL_221;
  }
  else
  {
    v96->fields._size = v99 + 1;
    *((_DWORD *)v97->m_Items + v99) = 2;
    ++v96->fields._version;
  }
  v100 = v96->fields._size;
  if ( (unsigned int)v100 < v97->max_length )
  {
    v96->fields._size = v100 + 1;
    *((_DWORD *)v97->m_Items + v100) = 14;
    ++v96->fields._version;
    goto LABEL_215;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v96,
    14,
    *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  v97 = v96->fields._items;
  v98 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v96->fields._version;
  if ( !v97 )
LABEL_221:
    sub_1BE4D28(v7, v8);
LABEL_215:
  v101 = v96->fields._size;
  if ( (unsigned int)v101 >= v97->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v96,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v96->fields._size = v101 + 1;
    *((_DWORD *)v97->m_Items + v101) = 1;
  }
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v96;
  sub_1BE4A70(&this->fields.commandCodeSelectList);
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
    sub_1BE4A70(p_callbackFunc);
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

  ServantSortSelectMenu__Close_32114592(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_32114592(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B6233C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_ServantSortSelectMenu_EndClose__, v5);
    byte_4B6233C = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BE4A70(&this->fields.closeCallbackFunc);
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

  if ( (byte_4B6233A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B6233A = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_1BE4D28(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B62339 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B62339 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BE4D28(0LL, v1);
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

  if ( (byte_4B6233E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B6233E = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(allDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(allDispObject, method);
    allDispObject = (UnityEngine_GameObject_o *)this->fields.servantBaseSelectList;
    if ( allDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = allDispSortBtnsLabel->m_Items[v5];
      allDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)allDispObject,
                                                    v5,
                                                    (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B62340 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B62340 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(buddyDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(buddyDispObject, method);
    buddyDispObject = (UnityEngine_GameObject_o *)this->fields.buddySelectList;
    if ( buddyDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      buddyDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)buddyDispObject,
                                                      v5,
                                                      (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B62344 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B62344 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(commandCodeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(commandCodeDispObject, method);
    commandCodeDispObject = (UnityEngine_GameObject_o *)this->fields.commandCodeSelectList;
    if ( commandCodeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      commandCodeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                            (System_Collections_Generic_List_T__o *)commandCodeDispObject,
                                                            v5,
                                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B62343 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B62343 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(costumeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(costumeDispObject, method);
    costumeDispObject = (UnityEngine_GameObject_o *)this->fields.servantCostumeSelectList;
    if ( costumeDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      costumeDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)costumeDispObject,
                                                        v5,
                                                        (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B6233F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B6233F = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(fatigueDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(fatigueDispObject, method);
    fatigueDispObject = (UnityEngine_GameObject_o *)this->fields.fatigureSelectList;
    if ( fatigueDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      fatigueDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)fatigueDispObject,
                                                        v5,
                                                        (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B62338 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4B62338 = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BE4D28(0LL, v1);
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

  if ( (byte_4B6233D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B6233D = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(normalDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(normalDispObject, method);
    normalDispObject = (UnityEngine_GameObject_o *)this->fields.servantSelectList;
    if ( normalDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v8 = normalSortBtnsLabel->m_Items[v5];
      normalDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       (System_Collections_Generic_List_T__o *)normalDispObject,
                                                       v5,
                                                       (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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

  if ( (byte_4B62341 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4B62341 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(shortDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(shortDispObject, method);
    shortDispObject = (UnityEngine_GameObject_o *)this->fields.servantEquipSelectList;
    if ( shortDispObject )
    {
      operationSortInfo = this->fields.operationSortInfo;
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      shortDispObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                      (System_Collections_Generic_List_T__o *)shortDispObject,
                                                      v6,
                                                      (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
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
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v24; // x8
  int v25; // w9
  int v26; // w10
  int v27; // w22
  int32_t v28; // w21
  int v29; // w24
  int v30; // w26
  float mWidth; // s9
  float mHeight; // s10
  float x; // s8
  float y; // s12
  int v35; // w27
  float v36; // s0
  float v37; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v39; // x0

  if ( (byte_4B62342 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_UICommonButton__TypeInfo, v7);
    byte_4B62342 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_T__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_43;
  v9 = System_Collections_Generic_List_Int32Enum___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_35D26A8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
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
        v20 = Method_System_Collections_Generic_List_UICommonButton__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v18,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v18;
          servantEquipSelectList = (System_Collections_Generic_List_T__o *)sub_1BE4A70(v22 + 4);
        }
      }
      max_length = v14->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_26;
    }
LABEL_44:
    sub_1BE4D30(servantEquipSelectList, method);
  }
LABEL_26:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_43;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_44;
  v24 = shortDispSortSprites->m_Items[0];
  if ( !v24 || !v13 )
LABEL_43:
    sub_1BE4D28(servantEquipSelectList, method);
  v25 = v13->fields._size;
  v26 = v25 + 3;
  if ( v25 >= 0 )
    v26 = v13->fields._size;
  if ( v25 >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = v26 >> 2;
    v30 = (v13->fields._size & 3) - 1;
    mWidth = (float)v24->fields.mWidth;
    mHeight = (float)v24->fields.mHeight;
    while ( 1 )
    {
      x = this->fields.ShortDispSortButtonSpace.fields.x;
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      v35 = v27 >= v29 ? v30 : 3;
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v13,
                                                                         v28,
                                                                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v36 = (float)(v28 - 4 * v27) + (float)((float)v35 * -0.5);
      v37 = (float)(v36 * mWidth) + (float)(v36 * x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v37, 0LL);
      servantEquipSelectList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v13,
                                                                         v28,
                                                                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_UICommonButton__get_Item__);
      if ( !servantEquipSelectList )
        break;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v39, (float)v27 * (float)-(float)(y + mHeight), 0LL);
      if ( (~v28++ & 3) == 0 )
        ++v27;
      if ( v28 >= v13->fields._size )
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

  if ( (byte_4B6234F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickCancel__, method);
    byte_4B6234F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B62366 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickChoiceSort__, method);
    byte_4B62366 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickChoiceSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickChoiceSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickChoiceSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6234E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickDecide__, method);
    byte_4B6234E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1BE4D28(baseSortInfo, v5);
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

  if ( (byte_4B62353 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickEventOrder__, method);
    byte_4B62353 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickEventOrder__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickEventOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickEventOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62350 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickHelpClose__, v3);
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickHelp__, v4);
    byte_4B62350 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSortSelectMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickHelp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickHelp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1BE4D28(helpButton, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 41;
LABEL_15:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v11, v10, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v11 = 32;
        goto LABEL_15;
      }
    }
    v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
    sub_1BE4D28(helpButton, method);
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

  if ( (byte_4B62365 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSmartSort__, method);
    byte_4B62365 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortAdjustAtk__, method);
    byte_4B6235D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustAtk__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustAtk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortAdjustAtk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortAdjustHp__, method);
    byte_4B6235C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAdjustHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAdjustHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortAdjustHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortAmount__, method);
    byte_4B6235A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62358 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortAttack__, method);
    byte_4B62358 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62364 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortBuddy__, method);
    byte_4B62364 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortBuddy__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortBuddy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortBuddy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62351 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortClass__, method);
    byte_4B62351 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortClass__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortClass__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortClass__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62359 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortCost__, method);
    byte_4B62359 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCost__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCost__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortCost__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortCostume__, method);
    byte_4B6235E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62352 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortCreate__, method);
    byte_4B62352 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortCreate__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortCreate__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortCreate__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortFriendShip__, method);
    byte_4B6235B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortFriendShip__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortFriendShip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortFriendShip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6235F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortHavingCostume__, method);
    byte_4B6235F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62357 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortHp__, method);
    byte_4B62357 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortHp__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62355 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortLevel__, method);
    byte_4B62355 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62362 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortLimitCount__, method);
    byte_4B62362 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62360 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__, method);
    byte_4B62360 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortNotHavingCostume__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62361 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortNotHavingItem__, method);
    byte_4B62361 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNotHavingItem__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNotHavingItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortNotHavingItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62356 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortNpLevel__, method);
    byte_4B62356 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortNpLevel__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortNpLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortNpLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62354 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortRarity__, method);
    byte_4B62354 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62363 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__, method);
    byte_4B62363 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__;
    if ( (*((_BYTE *)Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantSortSelectMenu_OnClickSortRecoveryFatigue__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
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
  bool isChoiceSort; // w8
  ListViewSort_o *v25; // x21
  ListViewSort_o *v26; // x22
  __int64 v27; // x1
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
  __int64 *v41; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  int32_t v48; // w8
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  int32_t v51; // w8
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  int32_t v56; // w1
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  System_Action_o *v64; // x20
  int32_t v65; // w20
  ServantSortSelectMenu_c *v66; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  __int64 v68; // x0
  __int64 v69; // x1

  if ( (byte_4B6233B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_ServantSortSelectMenu_EndOpen__, v13);
    sub_1BE4ACC(&ServantSortSelectMenu_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_12360/*"SORT_WINDOW_TITLE"*/, v15);
    sub_1BE4ACC(&StringLiteral_12352/*"SMART_SORT_DETAIL"*/, v16);
    sub_1BE4ACC(&StringLiteral_12353/*"SMART_SORT_NAME"*/, v17);
    sub_1BE4ACC(&StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_1BE4ACC(&StringLiteral_3503/*"CHOICE_SORT_NAME"*/, v19);
    sub_1BE4ACC(&StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/, v20);
    sub_1BE4ACC(&StringLiteral_3502/*"CHOICE_SORT_DETAIL_REVERSE"*/, v21);
    sub_1BE4ACC(&StringLiteral_12359/*"SORT_WINDOW_DETAIL"*/, v22);
    sub_1BE4ACC(&StringLiteral_3501/*"CHOICE_SORT_DETAIL"*/, v23);
    byte_4B6233B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BE4A70(&this->fields.callbackFunc);
    if ( !sort )
    {
      v65 = this->fields.kind;
      v66 = ServantSortSelectMenu_TypeInfo;
      if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
        v66 = ServantSortSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v66->static_fields->commonServantSortInfo;
      if ( v65 == 2 )
        ++p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1BE4A70(&this->fields.baseSortInfo);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        ListViewSort__Load(baseSortInfo, 0LL);
        sub_1BE4D28(v68, v69);
      }
      goto LABEL_80;
    }
    this->fields.baseSortInfo = sort;
    sub_1BE4A70(&this->fields.baseSortInfo);
    this->fields.openedKind = sort->fields.sortKind;
    this->fields.openedSmartSort = sort->fields.isSmartSort;
    isChoiceSort = sort->fields.isChoiceSort;
    v25 = this->fields.baseSortInfo;
    this->fields.openedChoiceSort = isChoiceSort;
    v26 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
    ListViewSort___ctor_41720984(v26, v25, 0LL);
    this->fields.operationSortInfo = v26;
    sub_1BE4A70(&this->fields.operationSortInfo);
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
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SORT_WINDOW_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_80;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12359/*"SORT_WINDOW_DETAIL"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_80;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_80;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_80;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortLabel = this->fields.smartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SMART_SORT_NAME"*/, 0LL);
    if ( !smartSortLabel )
      goto LABEL_80;
    UILabel__set_text(smartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    smartSortDetail = this->fields.smartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12352/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !smartSortDetail )
      goto LABEL_80;
    UILabel__set_text(smartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SMART_SORT_NAME"*/, 0LL);
    if ( !costumeSmartSortLabel )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortLabel, (System_String_o *)baseSortInfo, 0LL);
    costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12352/*"SMART_SORT_DETAIL"*/, 0LL);
    if ( !costumeSmartSortDetail )
      goto LABEL_80;
    UILabel__set_text(costumeSmartSortDetail, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceLabel = this->fields.smartChoiceLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !smartChoiceLabel )
      goto LABEL_80;
    UILabel__set_text(smartChoiceLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSortLabel = this->fields.choiceSortLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSortLabel )
      goto LABEL_80;
    UILabel__set_text(choiceSortLabel, (System_String_o *)baseSortInfo, 0LL);
    choiceSort2Label = this->fields.choiceSort2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CHOICE_SORT_NAME"*/, 0LL);
    if ( !choiceSort2Label )
      goto LABEL_80;
    UILabel__set_text(choiceSort2Label, (System_String_o *)baseSortInfo, 0LL);
    smartChoiceDetail = this->fields.smartChoiceDetail;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isChoiceReverse )
      {
LABEL_33:
        v41 = &StringLiteral_3502/*"CHOICE_SORT_DETAIL_REVERSE"*/;
LABEL_36:
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
        if ( smartChoiceDetail )
        {
          UILabel__set_text(smartChoiceDetail, (System_String_o *)baseSortInfo, 0LL);
          choiceSortDetail = this->fields.choiceSortDetail;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
          if ( choiceSortDetail )
          {
            UILabel__set_text(choiceSortDetail, (System_String_o *)baseSortInfo, 0LL);
            choiceSort2Detail = this->fields.choiceSort2Detail;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
            if ( choiceSort2Detail )
            {
              UILabel__set_text(choiceSort2Detail, (System_String_o *)baseSortInfo, 0LL);
              ServantSortSelectMenu__SetEnableButtons(this, 1, v44);
              switch ( this->fields.kind )
              {
                case 0:
                  ServantSortSelectMenu__InitAllDisp(this, v45);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v53);
                  goto LABEL_61;
                case 1:
                case 3:
                  ServantSortSelectMenu__InitAllDisp(this, v45);
                  ServantSortSelectMenu__SetAllButtonSelect(this, v46);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v47);
                  baseSortInfo = (ListViewSort_o *)this->fields.helpButton;
                  if ( !baseSortInfo )
                    break;
                  baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)baseSortInfo,
                                                     0LL);
                  if ( !baseSortInfo )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                  v48 = this->fields.kind;
                  if ( v48 == 3 )
                    goto LABEL_69;
                  if ( v48 != 1 )
                    goto LABEL_74;
                  goto LABEL_49;
                case 2:
                case 4:
                  ServantSortSelectMenu__InitShortDisp(this, v45);
                  ServantSortSelectMenu__SetShortButtonSelect(this, v49);
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
                  v51 = this->fields.kind;
                  if ( v51 == 4 )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.choiceSortObject;
                    if ( baseSortInfo )
                    {
LABEL_72:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      v56 = 41;
LABEL_73:
                      EventTutorialMaster__CheckTutorial(0, v56, 0LL, 0, 0, 0, 0, 0LL);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    if ( v51 != 2 )
                    {
LABEL_74:
                      this->fields.state = 1;
                      v64 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(v64, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndOpen__, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
                      return;
                    }
LABEL_49:
                    baseSortInfo = (ListViewSort_o *)this->fields.smartSortObject;
                    if ( baseSortInfo )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
                      ServantSortSelectMenu__SetSmartSortButtonSelect(this, v52);
LABEL_65:
                      v56 = 42;
                      goto LABEL_73;
                    }
                  }
                  break;
                case 5:
                  ServantSortSelectMenu__InitCostumeDisp(this, v45);
                  ServantSortSelectMenu__SetCostumeButtonSelect(this, v54);
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v55);
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
                  v56 = 32;
                  goto LABEL_73;
                case 6:
                  ServantSortSelectMenu__InitCommandCodeDisp(this, v45);
                  ServantSortSelectMenu__SetCommandCodeButtonSelect(this, v57);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v58);
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
                  ServantSortSelectMenu__InitFatigueDisp(this, v45);
                  ServantSortSelectMenu__SetFatigueButtonSelect(this, v59);
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
                  ServantSortSelectMenu__SetSmartSortButtonSelect(this, v60);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v61);
                  goto LABEL_65;
                case 8:
                  ServantSortSelectMenu__InitBuddyDisp(this, v45);
                  ServantSortSelectMenu__SetBuddyButtonSelect(this, v62);
                  ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v63);
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
        sub_1BE4D28(baseSortInfo, v27);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isChoiceReverse )
        goto LABEL_33;
    }
    v41 = &StringLiteral_3501/*"CHOICE_SORT_DETAIL"*/;
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B62346 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B62346 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B62348 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B62348 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
  if ( (byte_4B6234D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v3);
    byte_4B6234D = 1;
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
        sub_1BE4D28(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v5 = &StringLiteral_17750/*"btn_on"*/;
      else
        v5 = &StringLiteral_17749/*"btn_off"*/;
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B6234B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B6234B = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B6234A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B6234A = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
    sub_1BE4D28(decideButton, isEnable);
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B62347 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B62347 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B62345 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B62345 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_15:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v6 >= normalSortSprites->max_length )
        sub_1BE4D30(this, method);
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
                                              (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v10 )
          {
            v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
    sub_1BE4D28(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BE4D30(this, isEnable);
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
  if ( (byte_4B62349 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v4);
    byte_4B62349 = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_14:
    sub_1BE4D28(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(this, method);
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
                                            (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
        if ( v10 )
        {
          v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
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
  if ( (byte_4B6234C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v3);
    byte_4B6234C = 1;
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
      sub_1BE4D28(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v5 = &StringLiteral_17750/*"btn_on"*/;
  else
    v5 = &StringLiteral_17749/*"btn_off"*/;
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

  if ( (byte_4B62336 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B62336 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_1BE4FE8(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62367 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15848/*"Window/CancelButton"*/, method);
    byte_4B62367 = 1;
  }
  return (System_String_o *)StringLiteral_15848/*"Window/CancelButton"*/;
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

  if ( (byte_4B62337 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B62337 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BE4FE8(v7);
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A20328;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A202E0;
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
  if ( (byte_4B6236A & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B6236A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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