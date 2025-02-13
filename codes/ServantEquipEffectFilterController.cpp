void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  System_Collections_Generic_List_T__o *v12; // x20
  struct System_Object_array *v13; // x9
  _QWORD *v14; // x8
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  System_Collections_Generic_List_T__o *v22; // x20
  struct System_Object_array *v23; // x9
  _QWORD *v24; // x8
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  System_Collections_Generic_List_object__o *v32; // x20
  System_Collections_Generic_Dictionary_int__int__o *v33; // x20

  if ( (byte_4BD7C42 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    byte_4BD7C42 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v3 )
    goto LABEL_64;
  items = v3->fields._items;
  v7 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v3->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v3->fields._version;
  }
  v9 = v3->fields._size;
  if ( (unsigned int)v9 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v3->fields._size = v9 + 1;
    *((_DWORD *)items->m_Items + v9) = 2;
    ++v3->fields._version;
  }
  v10 = v3->fields._size;
  if ( (unsigned int)v10 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v3->fields._size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 3;
    ++v3->fields._version;
  }
  v11 = v3->fields._size;
  if ( (unsigned int)v11 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 4;
  }
  this->fields.SvtEqDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v3;
  sub_1C21DDC(&this->fields.SvtEqDisplayGroups, v3);
  v12 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v12 )
    goto LABEL_64;
  v13 = v12->fields._items;
  v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v12->fields._version;
  if ( !v13 )
    goto LABEL_64;
  v15 = v12->fields._size;
  if ( (unsigned int)v15 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      1,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v15 + 1;
    *((_DWORD *)v13->m_Items + v15) = 1;
    ++v12->fields._version;
  }
  v16 = v12->fields._size;
  if ( (unsigned int)v16 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      2,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v16 + 1;
    *((_DWORD *)v13->m_Items + v16) = 2;
    ++v12->fields._version;
  }
  v17 = v12->fields._size;
  if ( (unsigned int)v17 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      3,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v17 + 1;
    *((_DWORD *)v13->m_Items + v17) = 3;
    ++v12->fields._version;
  }
  v18 = v12->fields._size;
  if ( (unsigned int)v18 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      8,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v18 + 1;
    *((_DWORD *)v13->m_Items + v18) = 8;
    ++v12->fields._version;
  }
  v19 = v12->fields._size;
  if ( (unsigned int)v19 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      5,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v19 + 1;
    *((_DWORD *)v13->m_Items + v19) = 5;
    ++v12->fields._version;
  }
  v20 = v12->fields._size;
  if ( (unsigned int)v20 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      6,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_64;
  }
  else
  {
    v12->fields._size = v20 + 1;
    *((_DWORD *)v13->m_Items + v20) = 6;
    ++v12->fields._version;
  }
  v21 = v12->fields._size;
  if ( (unsigned int)v21 >= v13->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      7,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v21 + 1;
    *((_DWORD *)v13->m_Items + v21) = 7;
  }
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v12;
  sub_1C21DDC(&this->fields.CommandCodeDisplayGroups, v12);
  v22 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v22,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v22 )
    goto LABEL_64;
  v23 = v22->fields._items;
  v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v22->fields._version;
  if ( !v23 )
    goto LABEL_64;
  v25 = v22->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      1,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v22->fields._size = v25 + 1;
    *((_DWORD *)v23->m_Items + v25) = 1;
    ++v22->fields._version;
  }
  v26 = v22->fields._size;
  if ( (unsigned int)v26 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      2,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v22->fields._size = v26 + 1;
    *((_DWORD *)v23->m_Items + v26) = 2;
    ++v22->fields._version;
  }
  v27 = v22->fields._size;
  if ( (unsigned int)v27 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      3,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v22->fields._size = v27 + 1;
    *((_DWORD *)v23->m_Items + v27) = 3;
    ++v22->fields._version;
  }
  v28 = v22->fields._size;
  if ( (unsigned int)v28 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      8,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v22->fields._size = v28 + 1;
    *((_DWORD *)v23->m_Items + v28) = 8;
    ++v22->fields._version;
  }
  v29 = v22->fields._size;
  if ( (unsigned int)v29 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      5,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_64;
  }
  else
  {
    v22->fields._size = v29 + 1;
    *((_DWORD *)v23->m_Items + v29) = 5;
    ++v22->fields._version;
  }
  v30 = v22->fields._size;
  if ( (unsigned int)v30 < v23->max_length )
  {
    v22->fields._size = v30 + 1;
    *((_DWORD *)v23->m_Items + v30) = 6;
    ++v22->fields._version;
    goto LABEL_60;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v22,
    6,
    *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  v23 = v22->fields._items;
  v24 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v22->fields._version;
  if ( !v23 )
LABEL_64:
    sub_1C22094(v4, v5);
LABEL_60:
  v31 = v22->fields._size;
  if ( (unsigned int)v31 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      7,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v22->fields._size = v31 + 1;
    *((_DWORD *)v23->m_Items + v31) = 7;
  }
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v22;
  sub_1C21DDC(&this->fields.SvtDisplayGroups, v22);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v32;
  sub_1C21DDC(&this->fields.containerList, v32);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v33;
  sub_1C21DDC(&this->fields.defaultFilterData, v33);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipEffectFilterController__Init(
        ServantEquipEffectFilterController_o *this,
        ListViewSort_o *sort,
        int32_t categoryFlag,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *SvtDisplayGroups; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  this->fields.sort = sort;
  sub_1C21DDC(&this->fields.sort, sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1C21DDC(&this->fields.onClickEvent, onclickEvent);
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
      sub_1C21DDC(&this->fields.displayGroups, SvtDisplayGroups);
      break;
  }
  ServantEquipEffectFilterController__SetupLabelObject(this, v8);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v10);
  ServantEquipEffectFilterController__RefreshContainers(this, v11);
}


bool __fastcall ServantEquipEffectFilterController__IsChangeFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  __int64 v4; // x1
  bool v5; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v8; // w19
  __int128 v10[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BD7C3C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4BD7C3C = 1;
  }
  memset(&v11, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v10,
    defaultFilterData,
    (const MethodInfo_32AD354 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v11.fields._dictionary = v10[0];
  v11.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v10[1];
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v11,
           (const MethodInfo_3402EC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v5 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1C22094(0LL, v4);
    key_high = HIDWORD(v11.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v11.fields._current.fields.key, 0LL) != key_high )
    {
      v8 = 4;
      goto LABEL_10;
    }
  }
  v8 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v11,
    (const MethodInfo_3402FC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v5 && v8 == 4;
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
          sub_1C2209C(cateforyIdList, sort);
        if ( !sort )
          sub_1C22094(cateforyIdList, sort);
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

  if ( (byte_4BD7C3F & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    byte_4BD7C3F = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7C41 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C21E38(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
    byte_4BD7C41 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C22094(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C22094(0LL, v7);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7C40 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C21E38(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
    byte_4BD7C40 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C22094(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C22094(0LL, v7);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v9; // x28
  Il2CppObject *v10; // x24
  Il2CppObject *v11; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x26
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v26; // x0
  __int64 v27; // x1
  FunctionCategoryMaster_o *v28; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v32; // x10
  float x; // s10
  float v34; // s8
  float v35; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v37; // x28
  const MethodInfo *v38; // x6
  __int64 v39; // x1
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  UIWidget_o *v45; // x21
  float v46; // s1
  float v47; // s0
  int v48; // w8
  UnityEngine_GameObject_o *v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7C3D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_1C21E38(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&StringLiteral_4807/*"Container_"*/);
    byte_4BD7C3D = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v3;
  p_containerList = &this->fields.containerList;
  sub_1C21DDC(&this->fields.containerList, v3);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C73D14(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C73D14(v5);
  MasterData_object = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v9 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_3635390 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v10 = 0LL;
  v51 = v50;
LABEL_10:
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v51,
            (const MethodInfo_33DDD8C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v51.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( v14 )
    {
      if ( !v10 )
        sub_1C22094(v14, v15);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
      if ( !gameObject )
        sub_1C22094(0LL, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
      if ( !transform )
        sub_1C22094(0LL, v19);
      UnityEngine_Transform__SetParent_70891020(transform, this->fields.containerHolder, 0, 0LL);
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
      LODWORD(v50.fields._current) = current;
      v50.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v50.fields._index = -1LL;
      v21 = System_Enum__ToString((System_Enum_o *)&v50, 0LL);
      v22 = System_String__Concat_63115476((System_String_o *)StringLiteral_4807/*"Container_"*/, v21, 0LL);
      if ( !v20 )
        sub_1C22094(v22, v22);
      UnityEngine_Object__set_name(v20, v22, 0LL);
      if ( !v9 )
        sub_1C22094(v23, v24);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v9, current, this->fields.categoryFlag, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( v26 )
      {
        if ( !byte_4BD6BB1 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        v28 = v9;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v11 )
          sub_1C22094(v26, v27);
        v32 = v11;
        v28 = v9;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v32[5].monitor;
        p_y = (float *)&v32[5].monitor + 1;
        p_z = (float *)&v32[6];
      }
      x = static_fields->zeroVector.fields.x;
      v34 = *p_z;
      v35 = *p_y;
      sort = this->fields.sort;
      v37 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0LL);
      v53.fields.x = x;
      v53.fields.y = v35;
      v53.fields.z = v34;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v10,
        EntitiesByGroupType,
        current,
        sort,
        v53,
        v37,
        this->fields.categoryFlag,
        v38);
      v40 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1C22094(0LL, v39);
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1C22094(v40, v39);
      size = v40->fields._size;
      v9 = v28;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          v10,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v10;
        sub_1C21DDC(v44 + 4, v10);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v51,
    (const MethodInfo_33DDD88 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v45 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  *(UnityEngine_Vector3_o *)(&v46 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_object,
                                           0LL);
  if ( !v11 || !v45 )
    goto LABEL_44;
  v47 = fabsf(v46 + *((float *)&v11[5].monitor + 1));
  v48 = (int)v47;
  if ( v47 == INFINITY )
    v48 = 0x80000000;
  UIWidget__set_height(v45, v48 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0LL);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0LL)
    || (v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0LL),
        GameObjectExtensions__SetLocalPosition(v49, *(UnityEngine_Vector3_o *)&v11[5].monitor, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0LL) )
  {
LABEL_44:
    sub_1C22094(MasterData_object, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7C39 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4BD7C39 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C22094(0LL, v4);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x21
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  void *MasterData_object; // x0
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w24
  __int64 v12; // x8
  int32_t v13; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_4BD7C3B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4BD7C3B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v3;
  sub_1C21DDC(&this->fields.defaultFilterData, v3);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C73D14(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C73D14(v5);
  MasterData_object = **(void ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v9 = *((_DWORD *)MasterData_object + 6);
  v10 = MasterData_object;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1C2209C(MasterData_object, v4);
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v13 = *(_DWORD *)(v12 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                    (ListViewSort_o *)MasterData_object,
                                    v13,
                                    0LL);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v13,
        (int32_t)MasterData_object,
        (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_18:
    sub_1C22094(MasterData_object, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *containerList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD7C3E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4BD7C3E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    containerList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C22094(0LL, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v8 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v8, 0LL),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0LL) )
  {
LABEL_12:
    sub_1C22094(containerList, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o **v4; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_4BD7C3A & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11789/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_1C21E38(&StringLiteral_11792/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_1C21E38(&StringLiteral_11790/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_1C21E38(&StringLiteral_11787/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_4BD7C3A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v4 = (System_String_o **)&StringLiteral_11787/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11792/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v5 = *v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11790/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v6, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel) )
  {
    sub_1C22094(v6, v7);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v6, 0LL);
}