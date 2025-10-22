void ServantEquipEffectFilterController___ctor(ServantEquipEffectFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  _QWORD *v6; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
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
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_Generic_Dictionary_int__int__o *v22; // x20

  if ( (byte_4C51655 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    byte_4C51655 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_379A414 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v3 )
    goto LABEL_39;
  v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
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
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
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
  v11 = *p_size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 2;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 9;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 3;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 8;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 5;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 6;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
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
      7,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 7;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 < LODWORD(items->max_length) )
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 11;
    ++*p_version;
    goto LABEL_35;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v6 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_39:
    sub_1C3E7C0(v4, v5);
LABEL_35:
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 4;
  }
  this->fields.DisplayGroupOrder = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v3;
  sub_1C3E508(&this->fields.DisplayGroupOrder, v3);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v21;
  sub_1C3E508(&this->fields.containerList, v21);
  v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v22,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v22;
  sub_1C3E508(&this->fields.defaultFilterData, v22);
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
  __int64 v11; // x1
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *DisplayGroupOrder; // x20
  System_Func_T__TResult__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_4C5164A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
    sub_1C3E564(&System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
    sub_1C3E564(&Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__);
    sub_1C3E564(&ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
    byte_4C5164A = 1;
  }
  v9 = sub_1C3E7B0(ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_DWORD *)(v9 + 16) = categoryFlag;
  this->fields.sort = sort;
  sub_1C3E508(&this->fields.sort, sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1C3E508(&this->fields.onClickEvent, onclickEvent);
  DisplayGroupOrder = this->fields.DisplayGroupOrder;
  this->fields.categoryFlag = *(_DWORD *)(v9 + 16);
  v13 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DisplayGroupOrder,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3140030 *)Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
  v15 = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                                        v14,
                                                                                        (const MethodInfo_313DC94 *)Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
  this->fields.displayGroups = v15;
  sub_1C3E508(&this->fields.displayGroups, v15);
  ServantEquipEffectFilterController__SetupLabelObject(this, v16);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v17);
  ServantEquipEffectFilterController__RefreshContainers(this, v18);
}


bool ServantEquipEffectFilterController__IsChangeFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  __int64 v4; // x1
  bool v5; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v8; // w19
  _OWORD v10[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C5164E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C5164E = 1;
  }
  memset(&v11, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v10,
    defaultFilterData,
    (const MethodInfo_3403D5C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v11.fields._dictionary = v10[0];
  v11.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v10[1];
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v11,
           (const MethodInfo_3561EB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v5 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(0, v4);
    key_high = HIDWORD(v11.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v11.fields._current.fields.key, 0) != key_high )
    {
      v8 = 4;
      goto LABEL_10;
    }
  }
  v8 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v11,
    (const MethodInfo_3561FB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v5 && v8 == 4;
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
          sub_1C3E7C8(cateforyIdList, sort);
        if ( !sort )
          sub_1C3E7C0(cateforyIdList, sort);
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

  if ( (byte_4C51652 & 1) == 0 )
  {
    sub_1C3E564(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    byte_4C51652 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
}


void ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C51654 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C3E564(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
    byte_4C51654 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C3E7C0(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C3E7C0(0, v7);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C51653 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C3E564(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
    byte_4C51653 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C3E7C0(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C3E7C0(0, v7);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__RefreshContainers(
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
  float v46; // s0
  int v47; // w8
  UnityEngine_GameObject_o *v48; // x0
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5164F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C3E564(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_1C3E564(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&StringLiteral_4681/*"Container_"*/);
    byte_4C5164F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v3;
  p_containerList = &this->fields.containerList;
  sub_1C3E508(&this->fields.containerList, v3);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78(v5);
  MasterData_object = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v9 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_379B73C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v10 = 0;
  v50 = v49;
LABEL_10:
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v50,
            (const MethodInfo_353C9F0 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v50.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( v14 )
    {
      if ( !v10 )
        sub_1C3E7C0(v14, v15);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
      if ( !gameObject )
        sub_1C3E7C0(0, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
      if ( !transform )
        sub_1C3E7C0(0, v19);
      UnityEngine_Transform__SetParent_71364824(transform, this->fields.containerHolder, 0, 0);
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
      LODWORD(v49.fields._current) = current;
      v49.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v49.fields._index = -1;
      v21 = System_Enum__ToString((System_Enum_o *)&v49, 0);
      v22 = System_String__Concat_63636468((System_String_o *)StringLiteral_4681/*"Container_"*/, v21, 0);
      if ( !v20 )
        sub_1C3E7C0(v22, v22);
      UnityEngine_Object__set_name(v20, v22, 0);
      if ( !v9 )
        sub_1C3E7C0(v23, v24);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v9, current, this->fields.categoryFlag, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
      if ( v26 )
      {
        if ( !byte_4C506A1 )
        {
          sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
          byte_4C506A1 = 1;
        }
        v28 = v9;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v11 )
          sub_1C3E7C0(v26, v27);
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
      v37 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0);
      v52.fields.x = x;
      v52.fields.y = v35;
      v52.fields.z = v34;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v10,
        EntitiesByGroupType,
        current,
        sort,
        v52,
        v37,
        this->fields.categoryFlag,
        v38);
      v40 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1C3E7C0(0, v39);
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1C3E7C0(v40, v39);
      size = v40->fields._size;
      v9 = v28;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          v10,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v10;
        sub_1C3E508(v44 + 4, v10);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v50,
    (const MethodInfo_353C9EC *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v45 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0);
  if ( !MasterData_object )
    goto LABEL_44;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MasterData_object, 0);
  if ( !v11 || !v45 )
    goto LABEL_44;
  v46 = fabsf(localPosition.fields.y + *((float *)&v11[5].monitor + 1));
  v47 = (int)v46;
  if ( v46 == INFINITY )
    v47 = 0x80000000;
  UIWidget__set_height(v45, v47 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0)) == 0
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0)
    || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0),
        GameObjectExtensions__SetLocalPosition(v48, *(UnityEngine_Vector3_o *)&v11[5].monitor, 0),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0) )
  {
LABEL_44:
    sub_1C3E7C0(MasterData_object, v4);
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

  if ( (byte_4C5164B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C5164B = 1;
  }
  memset(&v5, 0, sizeof(v5));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C3E7C0(0, v4);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetDefaultFilterData(
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

  if ( (byte_4C5164D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C5164D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v3;
  sub_1C3E508(&this->fields.defaultFilterData, v3);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78(v5);
  MasterData_object = **(void ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0);
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
        sub_1C3E7C8(MasterData_object, v4);
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v13 = *(_DWORD *)(v12 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt((ListViewSort_o *)MasterData_object, v13, 0);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v13,
        (int32_t)MasterData_object,
        (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_18:
    sub_1C3E7C0(MasterData_object, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *containerList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C51650 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C51650 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    containerList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C3E7C0(0, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v8 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v8, 0),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(containerList, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterController__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C51651 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4C51651 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C3E7C0(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C3E7C0(0, v7);
    ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields._current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetupLabelObject(
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

  if ( (byte_4C5164C & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11606/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_1C3E564(&StringLiteral_11609/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_1C3E564(&StringLiteral_11607/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_1C3E564(&StringLiteral_11604/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_4C5164C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v4 = (System_String_o **)&StringLiteral_11604/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11609/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v5 = *v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v6, 0),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11606/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0),
        !forceDeselectAllButtonLabel) )
  {
    sub_1C3E7C0(v6, v7);
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
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EntitiesByGroupType; // x0

  if ( (byte_4C51656 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionCategoryMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
    byte_4C51656 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionCategoryMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v6);
  EntitiesByGroupType = (System_Collections_Generic_IEnumerable_TSource__o *)FunctionCategoryMaster__GetEntitiesByGroupType(
                                                                               (FunctionCategoryMaster_o *)Master_object,
                                                                               v,
                                                                               this->fields.categoryFlag,
                                                                               0);
  return System_Linq_Enumerable__Any_object_(
           EntitiesByGroupType,
           (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
}