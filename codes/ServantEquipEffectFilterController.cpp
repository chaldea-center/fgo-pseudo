void ServantEquipEffectFilterController___ctor(ServantEquipEffectFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__c *v3; // x0
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
  System_Collections_Generic_List_object__o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_Dictionary_int__int__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596B1E0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    byte_596B1E0 = 1;
  }
  v3 = System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo;
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v4 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v4 )
    goto LABEL_39;
  items = v4->fields._items;
  v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      1,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v4->fields._version;
  }
  v16 = v4->fields._size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 2;
    ++v4->fields._version;
  }
  v17 = v4->fields._size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      9,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 9;
    ++v4->fields._version;
  }
  v18 = v4->fields._size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      3,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 3;
    ++v4->fields._version;
  }
  v19 = v4->fields._size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 8;
    ++v4->fields._version;
  }
  v20 = v4->fields._size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      5,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 5;
    ++v4->fields._version;
  }
  v21 = v4->fields._size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      6,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 6;
    ++v4->fields._version;
  }
  v22 = v4->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      10,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 10;
    ++v4->fields._version;
  }
  v23 = v4->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      7,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    v4->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 7;
    ++v4->fields._version;
  }
  v24 = v4->fields._size;
  if ( (unsigned int)v24 < LODWORD(items->max_length) )
  {
    v4->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 11;
    ++v4->fields._version;
    goto LABEL_35;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v4,
    11,
    *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  items = v4->fields._items;
  v14 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v4->fields._version;
  if ( !items )
LABEL_39:
    sub_2213CDC(v5, v6);
LABEL_35:
  v25 = v4->fields._size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      4,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v4->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 4;
  }
  this->fields.DisplayGroupOrder = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DisplayGroupOrder,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.containerList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultFilterData,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Func_FunctionCategoryEntity_GroupType__bool__c *v24; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *DisplayGroupOrder; // x20
  System_Func_T__TResult__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_596B1D5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
    sub_2213A60(&System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
    sub_2213A60(&Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__);
    sub_2213A60(&ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
    byte_596B1D5 = 1;
  }
  v9 = sub_2213CCC(ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_DWORD *)(v9 + 16) = categoryFlag;
  this->fields.sort = sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)sort, v12, v13, v14, v15, v16, v17);
  this->fields.onClickEvent = onclickEvent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickEvent,
    (int32_t)onclickEvent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo;
  DisplayGroupOrder = this->fields.DisplayGroupOrder;
  this->fields.categoryFlag = *(_DWORD *)(v9 + 16);
  v26 = (System_Func_T__TResult__o *)sub_2213CCC(v24);
  System_Func_Int32Enum__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__,
    0);
  v27 = System_Linq_Enumerable__Where_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DisplayGroupOrder,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_38A3174 *)Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
  v28 = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                                        v27,
                                                                                        (const MethodInfo_38A0BF0 *)Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
  this->fields.displayGroups = v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.displayGroups,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ServantEquipEffectFilterController__SetupLabelObject(this, v35);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v36);
  ServantEquipEffectFilterController__RefreshContainers(this, v37);
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+10h] [xbp-50h] BYREF

  if ( (byte_596B1D9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_596B1D9 = 1;
  }
  defaultFilterData = this->fields.defaultFilterData;
  memset(&v9, 0, 32);
  if ( !defaultFilterData )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v9,
    defaultFilterData,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  do
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v9,
           (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v5 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v4);
    key_high = HIDWORD(v9.fields._current.fields.key);
  }
  while ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v9.fields._current.fields.key, 0) == key_high );
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v9,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v5;
}


bool ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v4; // x19
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
          sub_2213CE4(cateforyIdList);
        if ( !sort )
          sub_2213CDC(cateforyIdList, sort);
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

  if ( (byte_596B1DD & 1) == 0 )
  {
    sub_2213A60(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    byte_596B1DD = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B1DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_2213A60(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
    byte_596B1DF = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_2213CDC(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v7);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B1DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_2213A60(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
    byte_596B1DE = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_2213CDC(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v7);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // x28
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v16; // x27
  Il2CppObject *v17; // x24
  Il2CppObject *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x26
  System_String_o *v30; // x1
  System_String_o *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_object__o **v39; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v43; // x10
  float x; // s10
  float v45; // s8
  float v46; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v48; // x28
  const MethodInfo *v49; // x6
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Collections_Generic_List_object__o *v57; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  UIWidget_o *v62; // x21
  float v63; // s0
  int v64; // w9
  UnityEngine_GameObject_o *v65; // x0
  float y; // s1
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+30h] [xbp-A0h] BYREF
  FunctionCategoryMaster_o *v69; // [xsp+58h] [xbp-78h]
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B1DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_2213A60(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_4859/*"Container_"*/);
    byte_596B1DA = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v3;
  p_containerList = &this->fields.containerList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.containerList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v12);
  MasterData_object = **(DataManager_o ***)(v14 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v16 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_446A538 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v17 = 0;
  v68 = v67;
LABEL_10:
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v68,
            (const MethodInfo_40F6F90 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v68.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    v17 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
    if ( v23 )
    {
      if ( !v17 )
        sub_2213CDC(v23, v24);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
      if ( !gameObject )
        sub_2213CDC(0, v26);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
      if ( !transform )
        sub_2213CDC(0, v28);
      UnityEngine_Transform__SetParent_83492444(transform, this->fields.containerHolder, 0, 0);
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
      LODWORD(v67.fields._current) = current;
      v67.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v67.fields._index = -1;
      v30 = System_Enum__ToString((System_Enum_o *)&v67, 0);
      v31 = System_String__Concat_75651716((System_String_o *)StringLiteral_4859/*"Container_"*/, v30, 0);
      if ( !v29 )
        sub_2213CDC(v31, v31);
      UnityEngine_Object__set_name(v29, v31, 0);
      if ( !v16 )
        sub_2213CDC(v32, v33);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v16, current, this->fields.categoryFlag, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
      v37 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0);
      v69 = v16;
      if ( v37 )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v39 = (System_Collections_Generic_List_object__o **)p_containerList;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v18 )
          sub_2213CDC(v37, v38);
        v43 = v18;
        v39 = (System_Collections_Generic_List_object__o **)p_containerList;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v43[5].monitor;
        p_y = (float *)&v43[5].monitor + 1;
        p_z = (float *)&v43[6];
      }
      x = static_fields->zeroVector.fields.x;
      v45 = *p_z;
      v46 = *p_y;
      sort = this->fields.sort;
      v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0);
      v70.fields.x = x;
      v70.fields.y = v46;
      v70.fields.z = v45;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v17,
        EntitiesByGroupType,
        current,
        sort,
        v70,
        v48,
        this->fields.categoryFlag,
        v49);
      v57 = *v39;
      v16 = v69;
      if ( !*v39
        || (items = v57->fields._items,
            v59 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__,
            ++v57->fields._version,
            !items) )
      {
        sub_2213CDC(v57, v50);
      }
      size = v57->fields._size;
      p_containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **)v39;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v57,
          v17,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v57->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)v17, v51, v52, v53, v54, v55, v56);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v68,
    (const MethodInfo_40F6F8C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v62 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0);
  if ( !MasterData_object )
    goto LABEL_44;
  y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MasterData_object, 0).fields.y;
  if ( !v18 || !v62 )
    goto LABEL_44;
  v63 = fabsf(y + *((float *)&v18[5].monitor + 1));
  v64 = (int)v63;
  if ( v63 == INFINITY )
    v64 = 0x80000000;
  UIWidget__set_height(v62, v64 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0)) == 0
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0)
    || (v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0),
        GameObjectExtensions__SetLocalPosition(v65, *(UnityEngine_Vector3_o *)&v18[5].monitor, 0),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0) )
  {
LABEL_44:
    sub_2213CDC(MasterData_object, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
}


void ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B1D6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_596B1D6 = 1;
  }
  containerList = this->fields.containerList;
  memset(&v5, 0, sizeof(v5));
  if ( !containerList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  void *MasterData_object; // x0
  int v15; // w8
  void *v16; // x21
  __int64 v17; // x24
  __int64 v18; // x8
  int32_t v19; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_596B1D8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_596B1D8 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v11);
  MasterData_object = **(void ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0);
  if ( !MasterData_object )
    goto LABEL_18;
  v15 = *((_DWORD *)MasterData_object + 6);
  v16 = MasterData_object;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= v15 )
        sub_2213CE4(MasterData_object);
      v18 = *((_QWORD *)v16 + v17 + 4);
      if ( !v18 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v19 = *(_DWORD *)(v18 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt((ListViewSort_o *)MasterData_object, v19, 0);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v19,
        (int32_t)MasterData_object,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        return;
    }
LABEL_18:
    sub_2213CDC(MasterData_object, v10);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B1DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_596B1DB = 1;
  }
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  memset(&v8, 0, sizeof(v8));
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    containerList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v8.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, isEnable, 0),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0) )
  {
LABEL_12:
    sub_2213CDC(containerList, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterController__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B1DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_596B1DC = 1;
  }
  containerList = this->fields.containerList;
  memset(&v8, 0, sizeof(v8));
  if ( !containerList )
    sub_2213CDC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterContainer_o *)v8.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o **v4; // x8
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_596B1D7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12112/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_2213A60(&StringLiteral_12115/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_2213A60(&StringLiteral_12113/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_2213A60(&StringLiteral_12110/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_596B1D7 = 1;
  }
  if ( this->fields.categoryFlag == 4 )
    v4 = (System_String_o **)&StringLiteral_12110/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12115/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  titleLabel = this->fields.titleLabel;
  v6 = *v4;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v7 = LocalizationManager__Get(v6, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v7, 0),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0),
        !forceDeselectAllButtonLabel) )
  {
    sub_2213CDC(v7, v8);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v7, 0);
}


void ServantEquipEffectFilterController___c__DisplayClass17_0___ctor(
        ServantEquipEffectFilterController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantEquipEffectFilterController___c__DisplayClass17_0___Init_b__0(
        ServantEquipEffectFilterController___c__DisplayClass17_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EntitiesByGroupType; // x0

  if ( (byte_596B1E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionCategoryMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
    byte_596B1E1 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&v, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionCategoryMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  EntitiesByGroupType = (System_Collections_Generic_IEnumerable_TSource__o *)FunctionCategoryMaster__GetEntitiesByGroupType(
                                                                               (FunctionCategoryMaster_o *)Master_object,
                                                                               v,
                                                                               this->fields.categoryFlag,
                                                                               0);
  return System_Linq_Enumerable__Any_object_(
           EntitiesByGroupType,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
}