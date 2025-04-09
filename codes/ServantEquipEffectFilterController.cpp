void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  System_Collections_Generic_List_T__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x9
  _QWORD *v24; // x8
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  System_Collections_Generic_List_T__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x9
  _QWORD *v36; // x8
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  __int64 v43; // x10
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_Dictionary_int__int__o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_49B6356 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v8);
    byte_49B6356 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v9 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v9 )
    goto LABEL_64;
  items = v9->fields._items;
  v15 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      1,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v9->fields._version;
  }
  v17 = v9->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v9->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 2;
    ++v9->fields._version;
  }
  v18 = v9->fields._size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      3,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v9->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 3;
    ++v9->fields._version;
  }
  v19 = v9->fields._size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      4,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 4;
  }
  this->fields.SvtEqDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.SvtEqDisplayGroups, (int32_t)v9, v12, v13);
  v20 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v20 )
    goto LABEL_64;
  v23 = v20->fields._items;
  v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v20->fields._version;
  if ( !v23 )
    goto LABEL_64;
  v25 = v20->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      1,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v25 + 1;
    *((_DWORD *)v23->m_Items + v25) = 1;
    ++v20->fields._version;
  }
  v26 = v20->fields._size;
  if ( (unsigned int)v26 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      2,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v26 + 1;
    *((_DWORD *)v23->m_Items + v26) = 2;
    ++v20->fields._version;
  }
  v27 = v20->fields._size;
  if ( (unsigned int)v27 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      3,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v27 + 1;
    *((_DWORD *)v23->m_Items + v27) = 3;
    ++v20->fields._version;
  }
  v28 = v20->fields._size;
  if ( (unsigned int)v28 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      8,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v28 + 1;
    *((_DWORD *)v23->m_Items + v28) = 8;
    ++v20->fields._version;
  }
  v29 = v20->fields._size;
  if ( (unsigned int)v29 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      5,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v29 + 1;
    *((_DWORD *)v23->m_Items + v29) = 5;
    ++v20->fields._version;
  }
  v30 = v20->fields._size;
  if ( (unsigned int)v30 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      6,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v30 + 1;
    *((_DWORD *)v23->m_Items + v30) = 6;
    ++v20->fields._version;
  }
  v31 = v20->fields._size;
  if ( (unsigned int)v31 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      7,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = v31 + 1;
    *((_DWORD *)v23->m_Items + v31) = 7;
  }
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v20;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.CommandCodeDisplayGroups, (int32_t)v20, v21, v22);
  v32 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v32,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v32 )
    goto LABEL_64;
  v35 = v32->fields._items;
  v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v32->fields._version;
  if ( !v35 )
    goto LABEL_64;
  v37 = v32->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      1,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    v35 = v32->fields._items;
    v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v35 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v37 + 1;
    *((_DWORD *)v35->m_Items + v37) = 1;
    ++v32->fields._version;
  }
  v38 = v32->fields._size;
  if ( (unsigned int)v38 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      2,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    v35 = v32->fields._items;
    v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v35 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v38 + 1;
    *((_DWORD *)v35->m_Items + v38) = 2;
    ++v32->fields._version;
  }
  v39 = v32->fields._size;
  if ( (unsigned int)v39 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      3,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    v35 = v32->fields._items;
    v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v35 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v39 + 1;
    *((_DWORD *)v35->m_Items + v39) = 3;
    ++v32->fields._version;
  }
  v40 = v32->fields._size;
  if ( (unsigned int)v40 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      8,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    v35 = v32->fields._items;
    v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v35 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v40 + 1;
    *((_DWORD *)v35->m_Items + v40) = 8;
    ++v32->fields._version;
  }
  v41 = v32->fields._size;
  if ( (unsigned int)v41 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      5,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    v35 = v32->fields._items;
    v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v35 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v41 + 1;
    *((_DWORD *)v35->m_Items + v41) = 5;
    ++v32->fields._version;
  }
  v42 = v32->fields._size;
  if ( (unsigned int)v42 < v35->max_length )
  {
    v32->fields._size = v42 + 1;
    *((_DWORD *)v35->m_Items + v42) = 6;
    ++v32->fields._version;
    goto LABEL_60;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v32,
    6,
    *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  v35 = v32->fields._items;
  v36 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v32->fields._version;
  if ( !v35 )
LABEL_64:
    sub_1B4D1EC(v10, v11);
LABEL_60:
  v43 = v32->fields._size;
  if ( (unsigned int)v43 >= v35->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      7,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v32->fields._size = v43 + 1;
    *((_DWORD *)v35->m_Items + v43) = 7;
  }
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v32;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.SvtDisplayGroups, (int32_t)v32, v33, v34);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v44;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.containerList, (int32_t)v44, v45, v46);
  v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v47,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v47;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.defaultFilterData, (int32_t)v47, v48, v49);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipEffectFilterController__Init(
        ServantEquipEffectFilterController_o *this,
        ListViewSort_o *sort,
        int32_t categoryFlag,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *SvtDisplayGroups; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  this->fields.sort = sort;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.sort,
    (int32_t)sort,
    categoryFlag,
    (const MethodInfo *)onclickEvent);
  this->fields.onClickEvent = onclickEvent;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClickEvent, (int32_t)onclickEvent, v8, v9);
  this->fields.categoryFlag = categoryFlag;
  switch ( categoryFlag )
  {
    case 4:
      SvtDisplayGroups = this->fields.SvtDisplayGroups;
      goto LABEL_7;
    case 2:
      SvtDisplayGroups = this->fields.CommandCodeDisplayGroups;
      goto LABEL_7;
    case 1:
      SvtDisplayGroups = this->fields.SvtEqDisplayGroups;
LABEL_7:
      this->fields.displayGroups = SvtDisplayGroups;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.displayGroups, (int32_t)SvtDisplayGroups, v11, v12);
      break;
  }
  ServantEquipEffectFilterController__SetupLabelObject(this, v10);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v14);
  ServantEquipEffectFilterController__RefreshContainers(this, v15);
}


bool __fastcall ServantEquipEffectFilterController__IsChangeFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  __int64 v9; // x1
  bool v10; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v13; // w19
  __int128 v15[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49B6350 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    byte_49B6350 = 1;
  }
  memset(&v16, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v15,
    defaultFilterData,
    (const MethodInfo_31EE530 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v16.fields._dictionary = v15[0];
  v16.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v15[1];
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v16,
            (const MethodInfo_33432B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v10 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1B4D1EC(0LL, v9);
    key_high = HIDWORD(v16.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v16.fields._current.fields.key, 0LL) != key_high )
    {
      v13 = 4;
      goto LABEL_10;
    }
  }
  v13 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v16,
    (const MethodInfo_33433B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v10 && v13 == 4;
}


bool __fastcall ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_Int32_array *v4; // x20
  unsigned __int64 v6; // x21

  if ( cateforyIdList )
  {
    v3 = *(_QWORD *)&cateforyIdList->max_length;
    v4 = cateforyIdList;
    if ( (int)v3 < 1 )
    {
      LOBYTE(cateforyIdList) = 0;
    }
    else
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v3 )
          sub_1B4D1F4(cateforyIdList, sort);
        if ( !sort )
          sub_1B4D1EC(cateforyIdList, sort);
        cateforyIdList = (System_Int32_array *)ListViewSort__GetSvtEquipEffectFilter(sort, v4->m_Items[v6 + 1], 0LL);
        if ( ((unsigned __int8)cateforyIdList & 1) != 0 )
          break;
        LODWORD(v3) = v4->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
  return (unsigned __int8)cateforyIdList & 1;
}


void __fastcall ServantEquipEffectFilterController__OnClick_Category(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_49B6353 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ServantEquipEffectFilterController_OnClick_Category__, method);
    byte_49B6353 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6355 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B4CF90(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__, v6);
    byte_49B6355 = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B4D1EC(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B4D1EC(0LL, v11);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6354 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B4CF90(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__, v6);
    byte_49B6354 = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B4D1EC(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B4D1EC(0LL, v11);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v26; // x28
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x26
  System_String_o *v38; // x1
  System_String_o *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v43; // x0
  __int64 v44; // x1
  FunctionCategoryMaster_o *v45; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v49; // x10
  float x; // s10
  float v51; // s8
  float v52; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v54; // x28
  const MethodInfo *v55; // x6
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_List_object__o *v59; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x8
  UIWidget_o *v64; // x21
  float v65; // s1
  float v66; // s0
  int v67; // w8
  UnityEngine_GameObject_o *v68; // x0
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B6351 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__, v7);
    sub_1B4CF90(&FunctionCategoryEntity_GroupType_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v12);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v13);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v14);
    sub_1B4CF90(&Method_ServantEquipEffectFilterController_OnClick_Category__, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_1B4CF90(&StringLiteral_4620/*"Container_"*/, v17);
    byte_49B6351 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v18;
  p_containerList = &this->fields.containerList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.containerList, (int32_t)v18, v19, v20);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1B9D620(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1B9D620(v22);
  MasterData_object = **(DataManager_o ***)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v26 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_35664B8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v27 = 0LL;
  v70 = v69;
LABEL_10:
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v70,
            (const MethodInfo_330562C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v70.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v31 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
    if ( v31 )
    {
      if ( !v27 )
        sub_1B4D1EC(v31, v32);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
      if ( !gameObject )
        sub_1B4D1EC(0LL, v34);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v27, 0LL);
      if ( !transform )
        sub_1B4D1EC(0LL, v36);
      UnityEngine_Transform__SetParent_68825864(transform, this->fields.containerHolder, 0, 0LL);
      v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
      LODWORD(v69.fields._current) = current;
      v69.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v69.fields._index = -1LL;
      v38 = System_Enum__ToString((System_Enum_o *)&v69, 0LL);
      v39 = System_String__Concat_61093468((System_String_o *)StringLiteral_4620/*"Container_"*/, v38, 0LL);
      if ( !v37 )
        sub_1B4D1EC(v39, v39);
      UnityEngine_Object__set_name(v37, v39, 0LL);
      if ( !v26 )
        sub_1B4D1EC(v40, v41);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v26, current, this->fields.categoryFlag, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, 0LL, 0LL);
      if ( v43 )
      {
        if ( !byte_49B5361 )
        {
          sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v44);
          byte_49B5361 = 1;
        }
        v45 = v26;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v28 )
          sub_1B4D1EC(v43, v44);
        v49 = v28;
        v45 = v26;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v49[5].monitor;
        p_y = (float *)&v49[5].monitor + 1;
        p_z = (float *)&v49[6];
      }
      x = static_fields->zeroVector.fields.x;
      v51 = *p_z;
      v52 = *p_y;
      sort = this->fields.sort;
      v54 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0LL);
      v72.fields.x = x;
      v72.fields.y = v52;
      v72.fields.z = v51;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v27,
        EntitiesByGroupType,
        current,
        sort,
        v72,
        v54,
        this->fields.categoryFlag,
        v55);
      v59 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1B4D1EC(0LL, v56);
      items = v59->fields._items;
      v61 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v59->fields._version;
      if ( !items )
        sub_1B4D1EC(v59, v56);
      size = v59->fields._size;
      v26 = v45;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          v27,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v59->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v27;
        sub_1B4CF34((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v27, v57, v58);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v70,
    (const MethodInfo_3305628 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v64 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  *(UnityEngine_Vector3_o *)(&v65 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_object,
                                           0LL);
  if ( !v28 || !v64 )
    goto LABEL_44;
  v66 = fabsf(v65 + *((float *)&v28[5].monitor + 1));
  v67 = (int)v66;
  if ( v66 == INFINITY )
    v67 = 0x80000000;
  UIWidget__set_height(v64, v67 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0LL);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0LL)
    || (v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0LL),
        GameObjectExtensions__SetLocalPosition(v68, *(UnityEngine_Vector3_o *)&v28[5].monitor, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0LL) )
  {
LABEL_44:
    sub_1B4D1EC(MasterData_object, v21);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B634D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    byte_49B634D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  void *MasterData_object; // x0
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w24
  __int64 v18; // x8
  int32_t v19; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_49B634F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_49B634F = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.defaultFilterData, (int32_t)v7, v8, v9);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1B9D620(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1B9D620(v11);
  MasterData_object = **(void ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v15 = *((_DWORD *)MasterData_object + 6);
  v16 = MasterData_object;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v15 )
        sub_1B4D1F4(MasterData_object, v10);
      v18 = *((_QWORD *)v16 + (int)v17 + 4);
      if ( !v18 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v19 = *(_DWORD *)(v18 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                    (ListViewSort_o *)MasterData_object,
                                    v19,
                                    0LL);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v19,
        (int32_t)MasterData_object,
        (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        return;
    }
LABEL_18:
    sub_1B4D1EC(MasterData_object, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *containerList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool v11; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B6352 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v7);
    byte_49B6352 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    containerList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B4D1EC(0LL, v9);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v12.fields._current,
      isEnable,
      v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v11 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v11, 0LL),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0LL) )
  {
LABEL_12:
    sub_1B4D1EC(containerList, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v11, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x20
  System_String_o **v8; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_49B634E & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_11339/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v3);
    sub_1B4CF90(&StringLiteral_11342/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v4);
    sub_1B4CF90(&StringLiteral_11340/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v5);
    sub_1B4CF90(&StringLiteral_11337/*"SERVANT_EFFECT_FILTER_TITLE"*/, v6);
    byte_49B634E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v8 = (System_String_o **)&StringLiteral_11337/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11342/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v9 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v10, 0LL),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11340/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v10, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11339/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel) )
  {
    sub_1B4D1EC(v10, v11);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v10, 0LL);
}