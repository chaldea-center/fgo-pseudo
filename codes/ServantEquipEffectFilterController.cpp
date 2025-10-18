void ServantEquipEffectFilterController___ctor(ServantEquipEffectFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  _QWORD *v5; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v10; // x10
  __int64 v11; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x20
  System_Collections_Generic_Dictionary_int__int__o *v21; // x20

  if ( (byte_4C3D8D5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_1C37058(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    byte_4C3D8D5 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v3 )
    goto LABEL_39;
  v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  p_version = &v3->fields._version;
  ++v3->fields._version;
  items = v3->fields._items;
  p_size = &v3->fields._size;
  size = v3->fields._size;
  if ( !items )
    goto LABEL_39;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++*p_version;
  }
  v10 = *p_size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 2;
    ++*p_version;
  }
  v11 = *p_size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 9;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 3;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 8;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 5;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 6;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 10;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 7;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 < LODWORD(items->max_length) )
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 11;
    ++*p_version;
    goto LABEL_35;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v5 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_39:
    sub_1C372B4(v4);
LABEL_35:
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 4;
  }
  this->fields.DisplayGroupOrder = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v3;
  sub_1C36FFC(&this->fields.DisplayGroupOrder, v3);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v20;
  sub_1C36FFC(&this->fields.containerList, v20);
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v21;
  sub_1C36FFC(&this->fields.defaultFilterData, v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantEquipEffectFilterController__Init(
        ServantEquipEffectFilterController_o *this,
        ListViewSort_o *sort,
        int32_t categoryFlag,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *DisplayGroupOrder; // x20
  System_Func_T__TResult__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4C3D8CA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
    sub_1C37058(&System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
    sub_1C37058(&Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__);
    sub_1C37058(&ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
    byte_4C3D8CA = 1;
  }
  v9 = sub_1C372A4(ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_DWORD *)(v9 + 16) = categoryFlag;
  this->fields.sort = sort;
  sub_1C36FFC(&this->fields.sort, sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1C36FFC(&this->fields.onClickEvent, onclickEvent);
  DisplayGroupOrder = this->fields.DisplayGroupOrder;
  this->fields.categoryFlag = *(_DWORD *)(v9 + 16);
  v12 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DisplayGroupOrder,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_312E13C *)Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
  v14 = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                                        v13,
                                                                                        (const MethodInfo_312BDA0 *)Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
  this->fields.displayGroups = v14;
  sub_1C36FFC(&this->fields.displayGroups, v14);
  ServantEquipEffectFilterController__SetupLabelObject(this, v15);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v16);
  ServantEquipEffectFilterController__RefreshContainers(this, v17);
}


bool ServantEquipEffectFilterController__IsChangeFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  bool v4; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v7; // w19
  _OWORD v9[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3D8CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C3D8CE = 1;
  }
  memset(&v10, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v9,
    defaultFilterData,
    (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v10.fields._dictionary = v9[0];
  v10.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v9[1];
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v10,
           (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v4 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(0);
    key_high = HIDWORD(v10.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v10.fields._current.fields.key, 0) != key_high )
    {
      v7 = 4;
      goto LABEL_10;
    }
  }
  v7 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v10,
    (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v4 && v7 == 4;
}


bool ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v4; // x20
  unsigned __int64 v6; // x21

  if ( cateforyIdList )
  {
    max_length = cateforyIdList->max_length;
    v4 = cateforyIdList;
    if ( (int)max_length < 1 )
    {
      LOBYTE(cateforyIdList) = 0;
    }
    else
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C372BC(cateforyIdList);
        if ( !sort )
          sub_1C372B4(cateforyIdList);
        cateforyIdList = (System_Int32_array *)ListViewSort__GetSvtEquipEffectFilter(sort, v4->m_Items[v6], 0);
        if ( ((unsigned __int8)cateforyIdList & 1) != 0 )
          break;
        LODWORD(max_length) = v4->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
  return (unsigned __int8)cateforyIdList & 1;
}


void ServantEquipEffectFilterController__OnClick_Category(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C3D8D2 & 1) == 0 )
  {
    sub_1C37058(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    byte_4C3D8D2 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
}


void ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8D4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C37058(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
    byte_4C3D8D4 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v7, 0, sizeof(v7));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v7.fields._current, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8D3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C37058(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
    byte_4C3D8D3 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v7, 0, sizeof(v7));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v7.fields._current, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v8; // x28
  Il2CppObject *v9; // x24
  Il2CppObject *v10; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v16; // x26
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  __int64 v19; // x0
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v21; // x0
  FunctionCategoryMaster_o *v22; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v26; // x10
  float x; // s10
  float v28; // s8
  float v29; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v31; // x28
  const MethodInfo *v32; // x6
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  UIWidget_o *v38; // x21
  float v39; // s0
  int v40; // w8
  UnityEngine_GameObject_o *v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D8CF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_1C37058(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&StringLiteral_4681/*"Container_"*/);
    byte_4C3D8CF = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v3;
  p_containerList = &this->fields.containerList;
  sub_1C36FFC(&this->fields.containerList, v3);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v4);
  MasterData_object = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v8 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_3789300 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v9 = 0;
  v43 = v42;
LABEL_10:
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v43,
            (const MethodInfo_352A5B4 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v43.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           containerPrefab,
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( v13 )
    {
      if ( !v9 )
        sub_1C372B4(v13);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      if ( !gameObject )
        sub_1C372B4(0);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v9, 0);
      if ( !transform )
        sub_1C372B4(0);
      UnityEngine_Transform__SetParent_71290012(transform, this->fields.containerHolder, 0, 0);
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      LODWORD(v42.fields._current) = current;
      v42.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v42.fields._index = -1;
      v17 = System_Enum__ToString((System_Enum_o *)&v42, 0);
      v18 = System_String__Concat_63561656((System_String_o *)StringLiteral_4681/*"Container_"*/, v17, 0);
      if ( !v16 )
        sub_1C372B4(v18);
      UnityEngine_Object__set_name(v16, v18, 0);
      if ( !v8 )
        sub_1C372B4(v19);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v8, current, this->fields.categoryFlag, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
      if ( v21 )
      {
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        v22 = v8;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v10 )
          sub_1C372B4(v21);
        v26 = v10;
        v22 = v8;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v26[5].monitor;
        p_y = (float *)&v26[5].monitor + 1;
        p_z = (float *)&v26[6];
      }
      x = static_fields->zeroVector.fields.x;
      v28 = *p_z;
      v29 = *p_y;
      sort = this->fields.sort;
      v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0);
      v45.fields.x = x;
      v45.fields.y = v29;
      v45.fields.z = v28;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v9,
        EntitiesByGroupType,
        current,
        sort,
        v45,
        v31,
        this->fields.categoryFlag,
        v32);
      v33 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1C372B4(0);
      items = v33->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C372B4(v33);
      size = v33->fields._size;
      v8 = v22;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v9,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v9;
        sub_1C36FFC(v37 + 4, v9);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v43,
    (const MethodInfo_352A5B0 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v38 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0);
  if ( !MasterData_object )
    goto LABEL_44;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MasterData_object, 0);
  if ( !v10 || !v38 )
    goto LABEL_44;
  v39 = fabsf(localPosition.fields.y + *((float *)&v10[5].monitor + 1));
  v40 = (int)v39;
  if ( v39 == INFINITY )
    v40 = 0x80000000;
  UIWidget__set_height(v38, v40 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0)) == 0
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0)
    || (v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0),
        GameObjectExtensions__SetLocalPosition(v41, *(UnityEngine_Vector3_o *)&v10[5].monitor, 0),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0) )
  {
LABEL_44:
    sub_1C372B4(MasterData_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
}


void ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8CB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C3D8CB = 1;
  }
  memset(&v5, 0, sizeof(v5));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x21
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  void *MasterData_object; // x0
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  __int64 v11; // x8
  int32_t v12; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_4C3D8CD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C3D8CD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v3;
  sub_1C36FFC(&this->fields.defaultFilterData, v3);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v4);
  MasterData_object = **(void ***)(v6 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0);
  if ( !MasterData_object )
    goto LABEL_18;
  v8 = *((_DWORD *)MasterData_object + 6);
  v9 = MasterData_object;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C372BC(MasterData_object);
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v12 = *(_DWORD *)(v11 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt((ListViewSort_o *)MasterData_object, v12, 0);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v12,
        (int32_t)MasterData_object,
        (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_18:
    sub_1C372B4(MasterData_object);
  }
}


void ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *containerList; // x0
  const MethodInfo *v6; // x2
  bool v7; // w20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3D8D0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C3D8D0 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    containerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v8.fields._current,
      isEnable,
      v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v7 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v7, 0),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0) )
  {
LABEL_12:
    sub_1C372B4(containerList);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v7, 0);
}


void ServantEquipEffectFilterController__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  bool v6; // w19
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8D1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C3D8D1 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterContainer_o *)v8.fields._current,
      v6,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o **v4; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_4C3D8CC & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11604/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_1C37058(&StringLiteral_11607/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_1C37058(&StringLiteral_11605/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_1C37058(&StringLiteral_11602/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_4C3D8CC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v4 = (System_String_o **)&StringLiteral_11602/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11607/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v5 = *v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11605/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v6, 0),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0),
        !forceDeselectAllButtonLabel) )
  {
    sub_1C372B4(v6);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v6, 0);
}


void ServantEquipEffectFilterController___c__DisplayClass17_0___ctor(
        ServantEquipEffectFilterController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantEquipEffectFilterController___c__DisplayClass17_0___Init_b__0(
        ServantEquipEffectFilterController___c__DisplayClass17_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EntitiesByGroupType; // x0

  if ( (byte_4C3D8D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_FunctionCategoryMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
    byte_4C3D8D6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FunctionCategoryMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  EntitiesByGroupType = (System_Collections_Generic_IEnumerable_TSource__o *)FunctionCategoryMaster__GetEntitiesByGroupType(
                                                                               (FunctionCategoryMaster_o *)Master_object,
                                                                               v,
                                                                               this->fields.categoryFlag,
                                                                               0);
  return System_Linq_Enumerable__Any_object_(
           EntitiesByGroupType,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
}